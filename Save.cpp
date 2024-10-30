﻿
#include "Save.h"
#include <Windows.h>
#include<iostream>
#include<string>
#include <vector> 
#include<fstream>
#include "Header.h"
#include"Sound.h"
#include <conio.h>
#include "Draw.h"

#include <sys/stat.h>
#ifdef _WIN32
#include <direct.h>  // Thư viện cho Windows
#define CreateDir _mkdir  // Đổi tên cho hàm Windows
#else
#endif

void SaveGameWithFileName() {
	// Đếm số lượng file .txt trong thư mục Saves
	system("dir /b Saves\\*.txt > file_count.txt");  // Lưu danh sách file vào file_count.txt
	ifstream countFile("file_count.txt");
	int fileCount = 0;
	string temp;
	while (getline(countFile, temp)) {
		fileCount++;
	}
	countFile.close();
	remove("file_count.txt");  // Xóa file tạm sau khi sử dụng

	// Kiểm tra nếu số lượng file đạt giới hạn 8
	if (fileCount >= 9) {
		error();
		cout << "Thu muc 'Saves' da dat gioi han 8 file. Khong the luu them." << endl;
		return;
	}

	string fileName;
	do {
		GotoXY(LEFT + 20, TOP + 2 * BOARD_SIZE + 2);
		cout << "Nhap ten file de luu game (toi da 8 ky tu): ";
		cin >> fileName;

		if (fileName.length() > 8) {
			error();
			// Xóa dòng nhập tên file
			GotoXY(LEFT + 30, TOP + 2 * BOARD_SIZE + 2);  // Di chuyển đến vị trí nhập tên file
			cout << string(fileName.length(), ' ');  // Ghi đè tên file sai bằng khoảng trắng

			// Thông báo lỗi
			GotoXY(LEFT, TOP + 2 * BOARD_SIZE + 3);
			cout << "Ten file qua dai, vui long nhap lai (toi da 8 ky tu).";
			Sleep(1000); // Tạm dừng để hiển thị thông báo lỗi

			// Xóa dòng thông báo lỗi sau khi hiển thị
			GotoXY(LEFT + 20, TOP + 2 * BOARD_SIZE + 2);

			cout << "                                                                                  ";

			// Xóa bộ đệm nhập và đặt lại con trỏ
			cin.clear();  // Xóa trạng thái lỗi của cin
			cin.ignore(INT_MAX, '\n');  // Xóa bộ đệm nhập
		}
	} while (fileName.length() > 8); // Lặp lại nếu tên file quá dài

	fileName += ".txt";  // Thêm phần mở rộng cho file

	// Thêm đường dẫn vào thư mục "Saves"
	string filePath = "Saves/" + fileName;

	// Mở file để lưu vào đường dẫn
	ofstream saveFile(filePath.c_str());

	if (!saveFile) {
		error();
		cout << "ERROR, khong the tao file luu game" << endl;
		return;
	}

	// Lưu trạng thái bàn cờ
	for (int i = 0; i < BOARD_SIZE; i++) {
		for (int j = 0; j < BOARD_SIZE; j++) {
			saveFile << _A[i][j].c << " ";  // Lưu giá trị của từng ô cờ
		}
		saveFile << endl;
	}


	// Lưu lượt chơi hiện tại
	saveFile << (_TURN ? 1 : 0) << endl;

	// Lưu vị trí con trỏ hiện tại
	saveFile << _X << " " << _Y << endl;
	saveFile << scoreP1 << " " << scoreP2 << endl;  // Lưu điểm số của người chơi 1 và 2
	saveFile.close();

	GotoXY(LEFT + 20, TOP + 2 * BOARD_SIZE + 3);
	cout << "Ban co muon quay ve menu chinh? (Nhan ESC de thoat hoac bat ky phim nao khac de tiep tuc choi)";

	char choice = _getch();  // Nhận phím từ người dùng
	if (choice == 27) {
		click(); // ESC có mã ASCII là 27
		mainmenu();
	}
	else {
		GotoXY(LEFT, TOP + 2 * BOARD_SIZE + 3);
		cout << "                                                                                                                                                     ";
	}
}

void showSavedFiles(vector<string>& savedFiles) {
	// Chạy lệnh dir và ghi đầu ra vào file temp.txt
	system("dir Saves > temp.txt");

	ifstream file("temp.txt");
	string line;

	// Đọc từng dòng trong file temp.txt
	while (getline(file, line)) {
		// Kiểm tra xem dòng có chứa .txt hay không và lưu vào vector
		if (line.find(".txt") != string::npos) {
			// Cắt tên file từ dòng
			size_t pos = line.find_last_of(" ");
			savedFiles.push_back(line.substr(pos + 1)); // Lưu tên file vào vector
		}
	}

	file.close();
	remove("temp.txt");  // Xóa file tạm sau khi sử dụng
}

void CreateSaveDirectory() {
	int result = CreateDir("Saves");

	if (result == 0) {
		cout << "Created directory 'Saves'." << endl;
	}
	else if (errno == EEXIST) {
		cout << "'Saves' directory already exists." << endl;

	}
	else {
		cout << "Error creating 'Saves' directory." << endl;
	}
}

void SaveToFile(const string& filename, const string& content) {
	string filepath = "Saves/" + filename;  // Lưu vào thư mục Saves
	ofstream file(filepath);

	if (file.is_open()) {
		file << content;
		file.close();
		cout << "File saved to: " << filepath << endl;
	}
	else {
		cout << "Unable to open file for writing." << endl;
	}
}

int checkWinCondition() {
	// Kiểm tra hàng
	for (int i = 0; i < BOARD_SIZE; i++) {
		for (int j = 0; j <= BOARD_SIZE - 5; j++) {
			if (_A[i][j].c == -1 && _A[i][j + 1].c == -1 && _A[i][j + 2].c == -1 &&
				_A[i][j + 3].c == -1 && _A[i][j + 4].c == -1) {
				return -1; // X thắng
			}
			if (_A[i][j].c == 1 && _A[i][j + 1].c == 1 && _A[i][j + 2].c == 1 &&
				_A[i][j + 3].c == 1 && _A[i][j + 4].c == 1) {
				return 1; // O thắng
			}
		}
	}

	// Kiểm tra cột
	for (int j = 0; j < BOARD_SIZE; j++) {
		for (int i = 0; i <= BOARD_SIZE - 5; i++) {
			if (_A[i][j].c == -1 && _A[i + 1][j].c == -1 && _A[i + 2][j].c == -1 &&
				_A[i + 3][j].c == -1 && _A[i + 4][j].c == -1) {
				return -1; // X thắng
			}
			if (_A[i][j].c == 1 && _A[i + 1][j].c == 1 && _A[i + 2][j].c == 1 &&
				_A[i + 3][j].c == 1 && _A[i + 4][j].c == 1) {
				return 1; // O thắng
			}
		}
	}

	// Kiểm tra đường chéo chính
	for (int i = 0; i <= BOARD_SIZE - 5; i++) {
		for (int j = 0; j <= BOARD_SIZE - 5; j++) {
			if (_A[i][j].c == -1 && _A[i + 1][j + 1].c == -1 && _A[i + 2][j + 2].c == -1 &&
				_A[i + 3][j + 3].c == -1 && _A[i + 4][j + 4].c == -1) {
				return -1; // X thắng
			}
			if (_A[i][j].c == 1 && _A[i + 1][j + 1].c == 1 && _A[i + 2][j + 2].c == 1 &&
				_A[i + 3][j + 3].c == 1 && _A[i + 4][j + 4].c == 1) {
				return 1; // O thắng
			}
		}
	}

	// Kiểm tra đường chéo phụ
	for (int i = 0; i <= BOARD_SIZE - 5; i++) {
		for (int j = 4; j < BOARD_SIZE; j++) {
			if (_A[i][j].c == -1 && _A[i + 1][j - 1].c == -1 && _A[i + 2][j - 2].c == -1 &&
				_A[i + 3][j - 3].c == -1 && _A[i + 4][j - 4].c == -1) {
				return -1; // X thắng
			}
			if (_A[i][j].c == 1 && _A[i + 1][j - 1].c == 1 && _A[i + 2][j - 2].c == 1 &&
				_A[i + 3][j - 3].c == 1 && _A[i + 4][j - 4].c == 1) {
				return 1; // O thắng
			}
		}
	}
	// Kiểm tra hòa
	int countX = 0, countO = 0;
	for (int i = 0; i < BOARD_SIZE; i++) {
		for (int j = 0; j < BOARD_SIZE; j++) {
			if (_A[i][j].c == 1) countO++;
			else if (_A[i][j].c == -1) countX++;
		}
	}

	// Nếu bàn cờ đầy mà không có ai thắng, trả về 2 (hòa)
	if (countX + countO == BOARD_SIZE * BOARD_SIZE) {
		return 2;
	}
	return 0; // Không có ai thắng
}

void countXO(int& countX, int& countO) {
	countX = 0;
	countO = 0;
	for (int i = 0; i < BOARD_SIZE; i++) {
		for (int j = 0; j < BOARD_SIZE; j++) {
			if (_A[i][j].c == 1) {
				countO++; // Đếm O
			}
			else if (_A[i][j].c == -1) {
				countX++; // Đếm X
			}
		}
	}
}

void restartGame() {
	SetConsoleOutputCP(1251);
	cout << "Bat dau tro choi...\n";

	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE | (15 << 4));

	FixConsoleWindow();

	int a, b;
	bool ValidEnter = true;

	reStartGame();
	Box1();
	Box2();
	Box3();
	Score2Player();
	GotoXY(LEFT + 2, TOP + 1); // Đưa con trỏ về ô đầu tiên
	for (int i = 0; i < BOARD_SIZE; i++) {
		for (int j = 0; j < BOARD_SIZE; j++) {
			if (_A[i][j].c == 1) {
				GotoXY((j + 1) * 5, (i + 1) * 2);
				cout << "O";
			}
			else if (_A[i][j].c == -1) {
				GotoXY((j + 1) * 5, (i + 1) * 2);
				cout << "X";
			}
		}
	}
	resetData();

	// Đếm X và O để xác định lượt chơi tiếp theo
	int countX, countO;
	countXO(countX, countO);
	_TURN = (countX <= countO); // Nếu số lượng X <= O, thì lượt chơi là của X
	if (_TURN == 1) DrawX(89 + 2, 17);
	else DrawO(89 + 2, 17);
	while (1) {
		_COMMAND = toupper(_getch());
		if (_COMMAND == 27) { // Nếu người chơi bấm Esc
			Sleep(500);
			//system("pause");
			Sleep(500);scoreP1 = 0;
			scoreP2 = 0;
			system("cls");
			click();
			mainmenu();

			return;
		}
		else {
			if (_COMMAND == 'A') MoveLeft();
			else if (_COMMAND == 'W') MoveUp();
			else if (_COMMAND == 'S') MoveDown();
			else if (_COMMAND == 'D') MoveRight();
			else if (_COMMAND == 'L') {
				click();
				CONSOLE_SCREEN_BUFFER_INFO csbi;
				GetConsoleScreenBufferInfo(hStdOut, &csbi);
				int bottomRow = csbi.srWindow.Bottom;  // Lấy hàng cuối cùng của cửa sổ console
				GotoXY(0, bottomRow);
				SaveGameWithFileName();  // Gọi hàm để lưu game với tên file người chơi nhập
			}
			else if (_COMMAND == 13) {
				// Nếu người chơi bấm Enter
				switch (CheckBoard(_X, _Y)) {
				case -1: stepO();
					SetConsoleTextAttribute(hStdOut, 12 | (15 << 4));
					cout << "X";
					_B[_X][_Y] = -1; // Cập nhật bàn cờ
					GotoXY(0, 0);
					DrawO(89 + 2, 17);SetConsoleTextAttribute(hStdOut, 0 | (15 << 4));


					break;
				case 1: step();
					SetConsoleTextAttribute(hStdOut, 0 | (15 << 4));
					cout << "O";
					_B[_X][_Y] = 1; // Cập nhật bàn cờ
					GotoXY(0, 0);
					DrawX(89 + 2, 17);SetConsoleTextAttribute(hStdOut, 1 | (15 << 4));
					break;
				case 0: // Nếu ô trống
					ValidEnter = false; // Không làm gì, ô đã có X hoặc O
				}
				if (ValidEnter == true) {
					int winStatus = checkWinCondition(); // Hàm kiểm tra thắng
					if (winStatus != 0)
					{
						victory();
						if (winStatus == -1) {
							scoreP1 += 1;
							int demnguoc = 7;
							while (demnguoc > 0) {
								DrawX(71, 9);
								DrawWIN();
								Sleep(150);
								DrawBlank();
								Sleep(150);
								DrawX(71, 9);
								DrawWIN();

								demnguoc--;

							}

						}
						else if (winStatus == 1)
						{
							scoreP2 += 1;
							int demnguoc = 7;
							while (demnguoc > 0) {
								DrawO(71, 9);
								DrawWIN();
								Sleep(150);
								DrawBlank();
								Sleep(150);
								DrawO(71, 9);
								DrawWIN();

								demnguoc--;

							}

						}
						else if (winStatus == 2)
						{
							int demnguoc = 7;
							while (demnguoc > 0) {

								DrawTIE();
								Sleep(150);
								DrawBlank();
								Sleep(150);

								DrawTIE();

								demnguoc--;

							}
						}
						if (AskContinue() == 'N' || AskContinue() == 27) {
							//system("pause");
							Sleep(500);
							ResetKetqua(_B);
							system("cls");
							mainmenu();
							return;
						}
						else {
							ResetKetqua(_B);
							startGame(); // Khởi động lại trò chơi
						}
					}

					switch (ProcessFinish(TestBoard())) {
					case -1:
					case 1:
					case 0:
						SetConsoleOutputCP(CP_UTF8);



						if (AskContinue() == 'N' || AskContinue() == 27) {
							//system("pause");
							Sleep(500);
							ResetKetqua(_B);
							system("cls");
							mainmenu();
							return;
						}
						else {
							ResetKetqua(_B);
							startGame(); // Khởi động lại trò chơi
						}
					}
				}
				ValidEnter = true; // Reset biến ValidEnter cho lượt tiếp theo
			}
		}
	}
}

void reStartGame() {
	system("cls");
	DrawBoard(BOARD_SIZE);

}


void resetData() {
	for (int i = 0;i < BOARD_SIZE;i++) {
		for (int j = 0;j < BOARD_SIZE;j++) {
			_A[i][j].x = 5 * j + LEFT + 2;
			_A[i][j].y = 2 * i + TOP + 1;

		}
	}
	_TURN = true;_COMMAND = -1;
	_X = _A[0][0].x;_Y = _A[0][0].y;
}

//final
void showloadgame() {

	clearScreen();
	SetConsoleOutputCP(CP_UTF8);
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	while (true) {
		clearScreen();
		SetConsoleTextAttribute(hConsole, FOREGROUND_RED | BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
		clearScreen();

		cout << u8R"(
                           ╔═██             █████████     ╔═█████████    ╔═█████████       
                           ║ ██          ╔╝██    ╚╗ ██   ╔╝██═════╗ ██   ║ ██    ║ ██    
                           ║ ██          ║ ██     ║ ██   ║ ██     ║ ██   ║ ██    ║ ██      
                           ║ ██          ║ ██     ║ ██   ║ ██     ║ ██   ║ ██    ║ ██      
                           ║ ██          ║ ██     ║ ██   ║ ███████████   ║ ██    ║ ██      
                           ║ ██          ║ ██     ║ ██   ║ ██═════╗ ██   ║ ██    ║ ██      
                           ║ ██          ║ ██     ║ ██   ║ ██     ║ ██   ║ ██    ║ ██     
                           ║ █████████   ╚╦ █████████    ║ ██     ║ ██   ║ █████████      
                           ╚════════╝     ╚══════╝       ╚══╝     ╚══╝   ╚══════╝           
        )" << std::endl;

		cout << u8"                               ┌────────────────────────────────────────────┐" << "\n";
		cout << u8"                               │            DANH SACH FILE SAVE             │" << "\n";
		cout << u8"                               │                                            │" << "\n";

		vector<string> savedFiles;
		showSavedFiles(savedFiles);

		int selectedFileIndex = 0;
		bool selectingFile = false;

		while (true) {
			// Xóa màn hình chỉ khi người dùng di chuyển
			if (selectingFile) {
				clearScreen();
			}
			HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
			clearScreen();

			cout << u8R"(
                           ╔═██             █████████     ╔═█████████    ╔═█████████       
                           ║ ██          ╔╝██    ╚╗ ██   ╔╝██═════╗ ██   ║ ██    ║ ██    
                           ║ ██          ║ ██     ║ ██   ║ ██     ║ ██   ║ ██    ║ ██      
                           ║ ██          ║ ██     ║ ██   ║ ██     ║ ██   ║ ██    ║ ██      
                           ║ ██          ║ ██     ║ ██   ║ ███████████   ║ ██    ║ ██      
                           ║ ██          ║ ██     ║ ██   ║ ██═════╗ ██   ║ ██    ║ ██      
                           ║ ██          ║ ██     ║ ██   ║ ██     ║ ██   ║ ██    ║ ██     
                           ║ █████████   ╚╦ █████████    ║ ██     ║ ██   ║ █████████      
                           ╚════════╝     ╚══════╝       ╚══╝     ╚══╝   ╚══════╝           
        )" << std::endl;

			cout << u8"                               ┌────────────────────────────────────────────┐" << "\n";
			cout << u8"                               │            DANH SACH FILE SAVE             │" << "\n";
			cout << u8"                               │                                            │" << "\n";
			// Hiển thị tên file trong bảng và đánh dấu tệp đang chọn
			for (size_t i = 0; i < savedFiles.size(); i++) {
				string formattedFileName = savedFiles[i];
				if (formattedFileName.length() > 40) {
					formattedFileName = formattedFileName.substr(0, 37) + "...";
				}
				if (i == selectedFileIndex && selectingFile) {
					cout << u8"                               │ > " << formattedFileName
						<< std::string(38 - formattedFileName.length(), ' ') << u8"   │" << "\n";
				}
				else {
					cout << u8"                               │   " << formattedFileName
						<< std::string(40 - formattedFileName.length(), ' ') << u8" │" << "\n";
				}
			}

			cout << u8"                               └────────────────────────────────────────────┘" << "\n";
			cout << "Ban co muon Load File khong? (Y/N) hoac xoa file? (D): ";
			char choice = _getch();

			if (choice == 'n' || choice == 'N') {
				click();
				return;
			}
			else if (choice == 'q' || choice == 'Q') {
				click();
				return;
			}
			else if (choice == 'd' || choice == 'D') {
				click();
				cout << endl << "Nhap ten file save de xoa (khong can phan mo rong .txt): ";
				string fileName;
				cin >> fileName;
				deleteSavedFile(fileName);
				savedFiles.clear();
				showSavedFiles(savedFiles);
				selectedFileIndex = 0;
			}
			else if (choice == 'y' || choice == 'Y') {
				click();
				selectingFile = true;
			}
			else if (selectingFile) {
				if (choice == 'w' || choice == 'W') {
					click();
					if (selectedFileIndex > 0) selectedFileIndex--; // Di chuyển lên
				}
				else if (choice == 's' || choice == 'S') {
					click();
					if (selectedFileIndex < savedFiles.size() - 1) selectedFileIndex++; // Di chuyển xuống
				}
				else if (choice == '\r') { // Enter để load tệp
					click();
					string fileName = savedFiles[selectedFileIndex];
					string fullFileName = "Saves/" + fileName + ".txt";

					if (fileName.size() >= 4 && fileName.substr(fileName.size() - 4) == ".txt") {
						fullFileName = "Saves/" + fileName; // Nếu đã có ".txt" thì giữ nguyên
					}
					else {
						fullFileName = "Saves/" + fileName + ".txt"; // Nếu chưa có thì thêm ".txt"
					}
					ifstream loadFile(fullFileName.c_str());
					cout << "duong dan file load: " << fullFileName << endl;

					if (!loadFile.is_open()) {
						error();
						cout << "Loi: Khong the mo file save! Kiem tra lai ten file va thu muc 'Saves/'." << endl;
						return;
					}

					if (loadFile.peek() == ifstream::traits_type::eof()) {
						error();
						cout << "Loi: File save rong hoac khong dung dinh dang!" << endl;
						return;
					}

					for (int i = 0; i < BOARD_SIZE; i++) {
						for (int j = 0; j < BOARD_SIZE; j++) {
							loadFile >> _A[i][j].c;
						}
					}

					int turn;
					loadFile >> turn;
					_TURN = (turn == 1);

					loadFile >> _X >> _Y;
					loadFile >> scoreP1 >> scoreP2;
					loadFile.close();

					clearScreen();
					restartGame();
					GotoXY(_X, _Y);
					cout << "Game da duoc load thanh cong tu file: " << fullFileName << endl;
					break;
				}
			}
		}
	}
}

void LoadGameWithFileName() {
	clearScreen();  // Xóa màn hình trước khi tải game
	showloadgame();  // Hiện danh sách các file save

}

void deleteSavedFile(const string& fileName) {
	string filePath = "Saves/" + fileName + ".txt"; // Tạo đường dẫn đầy đủ đến tệp
	cout << "Đang xóa tệp: " << filePath << endl; // In ra đường dẫn để kiểm tra
	if (remove(filePath.c_str()) != 0) {
		perror("Lỗi khi xóa tệp"); // Thông báo lỗi nếu không xóa được
	}
	else {
		cout << "Tệp đã được xóa thành công: " << filePath << endl;
	}
}

