﻿#pragma once
#include<Windows.h>
#include "Header.h"
#include <iostream>

typedef unsigned short WORD;
using namespace std;

void SetColor(int mauchu, int mauBg) {
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (mauBg << 4) | mauchu);
}

void DrawWIN() {
	SetConsoleOutputCP(CP_UTF8);
	GotoXY(LEFT + 81, TOP + 9);

	//dong 1/6
	SetColor(0, 15);//tren trang duoi den
	cout << u8"▄";
	SetColor(14, 0);//tren den duoi vang
	cout << u8"▄▄";
	SetColor(0, 15);//tren trang duoi den
	cout << u8"▄    ";
	SetColor(0, 15);//tren trang duoi den
	cout << u8"▄";
	SetColor(14, 0);//tren den duoi vang
	cout << u8"▄▄";
	SetColor(0, 15);//tren trang duoi den
	cout << u8"▄ ";
	SetColor(0, 15);//tren trang duoi den
	cout << u8"▄";
	SetColor(14, 0);//tren den duoi vang
	cout << u8"▄▄▄▄";
	SetColor(0, 15);//tren trang duoi den
	cout << u8"▄ ";
	SetColor(0, 15);//tren trang duoi den
	cout << u8"▄";
	SetColor(14, 0);//tren den duoi vang
	cout << u8"▄▄";
	SetColor(0, 15);//tren trang duoi den
	cout << u8"▄▄   ";
	SetColor(0, 15);//tren trang duoi den
	cout << u8"▄";
	SetColor(14, 0);//tren den duoi vang
	cout << u8"▄▄";
	SetColor(0, 15);//tren trang duoi den
	cout << u8"▄";


	//dong 2/6
	GotoXY(LEFT + 81, TOP + 10);
	SetColor(0, 15);//full den
	cout << u8"█";
	SetColor(14, 0);//full vang
	cout << u8"██";
	SetColor(0, 15);//full den
	cout << u8"█    ";
	SetColor(0, 0);//full den
	cout << u8"█";
	SetColor(14, 0);//full vang
	cout << u8"██";
	SetColor(0, 15);//full den
	cout << u8"█ ";
	SetColor(15, 0);//tren den duoi trang
	cout << u8"▄";
	SetColor(0, 14);//tren den duoi vang
	cout << u8"▄";
	SetColor(14, 0);//full vang
	cout << u8"██";
	SetColor(0, 14);//tren den duoi vang
	cout << u8"▄";
	SetColor(0, 15);//tren den duoi trang
	cout << u8"▀ ";
	SetColor(0, 15);//full den
	cout << u8"█";
	SetColor(14, 0);//full vang
	cout << u8"████";
	SetColor(0, 15);//full den
	cout << u8"█";
	SetColor(0, 15);//tren trang duoi den
	cout << u8"▄ ";
	SetColor(0, 15);//full den
	cout << u8"█";
	SetColor(14, 0);//full vang
	cout << u8"██";
	SetColor(0, 15);//full den
	cout << u8"█";

	//dong 3/6
	GotoXY(LEFT + 81, TOP + 11);
	SetColor(0, 15);//full den
	cout << u8"█";
	SetColor(14, 0);//full vang
	cout << u8"██";
	SetColor(0, 15);//full den
	cout << u8"█";
	SetColor(0, 15);//tren trang duoi den
	cout << u8"▄";
	SetColor(14, 0);//tren den duoi vang
	cout << u8"▄▄";
	SetColor(0, 15);//tren trang duoi den
	cout << u8"▄";
	SetColor(0, 15);//full den
	cout << u8"█";
	SetColor(14, 0);//full vang
	cout << u8"██";
	SetColor(0, 15);//full den
	cout << u8"█  ";
	SetColor(0, 15);//full den
	cout << u8"█";
	SetColor(14, 0);//full vang
	cout << u8"██";
	SetColor(0, 15);//full den
	cout << u8"█  ";
	SetColor(0, 15);//full den
	cout << u8"█";
	SetColor(14, 0);//full vang
	cout << u8"██";
	SetColor(0, 15);//full den
	cout << u8"██";
	SetColor(14, 0);//full vang
	cout << u8"██";
	SetColor(0, 15);//full den
	cout << u8"█";
	SetColor(0, 15);//full den
	cout << u8"█";
	SetColor(14, 0);//full vang
	cout << u8"██";
	SetColor(0, 15);//full den
	cout << u8"█";

	//dong 4/6
	GotoXY(LEFT + 81, TOP + 12);
	SetColor(0, 15);//full den
	cout << u8"█";
	SetColor(14, 0);//full vang
	cout << u8"██";
	SetColor(14, 0);//tren den duoi vang
	cout << u8"▄▄";
	SetColor(0, 14);//tren vang duoi den
	cout << u8"▄▄";
	SetColor(14, 0);//tren den duoi vang
	cout << u8"▄▄";
	SetColor(14, 0);//full vang
	cout << u8"██";
	SetColor(0, 15);//full den
	cout << u8"█  ";
	SetColor(0, 15);//full den
	cout << u8"█";
	SetColor(14, 0);//full vang
	cout << u8"██";
	SetColor(0, 15);//full den
	cout << u8"█  ";
	SetColor(0, 15);//full den
	cout << u8"█";
	SetColor(14, 0);//full vang
	cout << u8"██";
	SetColor(0, 15);//full den
	cout << u8"█ ";
	SetColor(15, 0);//tren den duoi trang
	cout << u8"▄";
	SetColor(0, 15);//full den
	cout << u8"█";
	SetColor(14, 0);//full vang
	cout << u8"██";
	SetColor(14, 0);//full vang
	cout << u8"██";
	SetColor(0, 15);//full den
	cout << u8"█";

	//dong 5/6
	GotoXY(LEFT + 81, TOP + 13);
	SetColor(0, 15);//full den
	cout << u8"█";
	SetColor(14, 0);//full vang
	cout << u8"██";
	SetColor(0, 14);//tren vang duoi den
	cout << u8"▄▄";
	SetColor(15, 0);//tren den duoi trang
	cout << u8"▄▄";
	SetColor(0, 14);//tren vang duoi den
	cout << u8"▄▄";
	SetColor(14, 0);//full vang
	cout << u8"██";
	SetColor(0, 15);//full den
	cout << u8"█ ";
	SetColor(0, 15);//tren trang duoi den
	cout << u8"▄";
	SetColor(14, 0);//tren den duoi vanag
	cout << u8"▄";
	SetColor(14, 0);//full vang
	cout << u8"██";
	SetColor(14, 0);//tren den duoi vanag
	cout << u8"▄";
	SetColor(0, 15);//tren trang duoi den
	cout << u8"▄";
	SetColor(0, 15);//full den
	cout << u8" █";
	SetColor(14, 0);//full vang
	cout << u8"██";
	SetColor(0, 15);//full den
	cout << u8"█   ▀█";
	SetColor(14, 0);//full vang
	cout << u8"██";
	SetColor(0, 15);//full den
	cout << u8"█";

	//dong 6/6
	GotoXY(LEFT + 81, TOP + 14);
	SetColor(15, 0);//tren den duoi trang
	cout << u8"▄";
	SetColor(0, 14);//tren vang duoi den
	cout << u8"▄▄";
	SetColor(0, 15);//tren den duoi trang
	cout << u8"▀    ▀";
	SetColor(0, 14);//tren vang duoi den
	cout << u8"▄▄";
	SetColor(0, 15);//tren den duoi trang
	cout << u8"▀ ▀";
	SetColor(0, 14);//tren vang duoi den
	cout << u8"▄▄▄▄";
	SetColor(0, 15);//tren den duoi trang
	cout << u8"▀ ▀";
	SetColor(0, 14);//tren vang duoi den
	cout << u8"▄▄";
	SetColor(0, 15);//tren den duoi trang
	cout << u8"▀    ▀";
	SetColor(0, 14);//tren vang duoi den
	cout << u8"▄▄";
	SetColor(0, 15);//tren den duoi trang
	cout << u8"▀";


	SetColor(1, 15);
}


void DrawX(int x, int y) {
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (15 << 4) | 4);
	SetConsoleOutputCP(CP_UTF8);
	GotoXY(LEFT + x, TOP + y);
	cout << u8"██▄   ▄██    ";
	GotoXY(LEFT + x, TOP + y + 1);
	cout << u8" ██▄ ▄██     ";
	GotoXY(LEFT + x, TOP + y + 2);
	cout << u8"  ▀█▄█▀      ";

	GotoXY(LEFT + x, TOP + y + 3);
	cout << u8"  ▄███▄      ";
	GotoXY(LEFT + x, TOP + y + 4);
	cout << u8" ██▀ ▀██     ";
	GotoXY(LEFT + x, TOP + y + 5);
	cout << u8"██▀   ▀██    ";
}
void DrawO(int x, int y) {
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (15 << 4) | 0);
	SetConsoleOutputCP(CP_UTF8);
	GotoXY(LEFT + x, TOP + y);
	cout << u8"  ▄█▀█▄      ";
	GotoXY(LEFT + x, TOP + y + 1);
	cout << u8"▄█▀   ▀█▄    ";
	GotoXY(LEFT + x, TOP + y + 2);
	cout << u8"█       █    ";
	GotoXY(LEFT + x, TOP + y + 3);
	cout << u8"█       █    ";
	GotoXY(LEFT + x, TOP + y + 4);
	cout << u8"▀█▄   ▄█▀   ";
	GotoXY(LEFT + x, TOP + y + 5);
	cout << u8"  ▀█▄█▀     ";

}
void DrawBlank() {
	for (int i = 0;i < 43;i++) {
		for (int j = 0;j < 6;j++) {
			GotoXY(LEFT + 70 + i, TOP + 9 + j);
			cout << " ";
		}
	}
}

void DrawTIE() {
	SetConsoleOutputCP(CP_UTF8);
	GotoXY(LEFT + 74, TOP + 9);

	//dong 1/6
	SetColor(0, 15);//tren trang duoi den
	cout << u8"▄";
	SetColor(14, 0);//tren den duoi vang
	cout << u8"▄▄";
	SetColor(10, 0);//tren den duoi xanh
	cout << u8"▄▄▄▄";
	SetColor(14, 0);//tren den duoi vang
	cout << u8"▄▄";
	SetColor(0, 15);//tren trang duoi den
	cout << u8"▄";

	cout << "  ";

	SetColor(0, 15);//tren trang duoi den
	cout << u8"▄";
	SetColor(10, 0);//tren den duoi xanh
	cout << u8"▄▄";
	SetColor(14, 0);//tren den duoi vang
	cout << u8"▄▄";

	SetColor(0, 15);//tren trang duoi den
	cout << u8"▄";

	SetColor(15, 15);
	cout << "  ";

	SetColor(0, 15);//tren trang duoi den
	cout << u8"▄";
	SetColor(14, 0);//tren den duoi vang
	cout << u8"▄▄";
	SetColor(10, 0);//tren den duoi xanh
	cout << u8"▄▄▄";
	SetColor(14, 0);//tren den duoi vang
	cout << u8"▄▄";
	SetColor(0, 15);//tren trang duoi den
	cout << u8"▄";

	cout << "    ";

	SetColor(0, 15);//tren trang duoi den
	cout << u8"▄";
	SetColor(10, 0);//tren den duoi xanh
	cout << u8"▄";
	SetColor(14, 0);//tren den duoi vang
	cout << u8"▄";
	SetColor(0, 15);//tren trang duoi den
	cout << u8"▄";

	//dong 2/6
	GotoXY(LEFT + 74, TOP + 10);
	SetColor(0, 0);//tren den duoi den
	cout << u8"▄";
	SetColor(10, 14);//tren vang duoi xanh
	cout << u8"▄";
	SetColor(10, 10);//full xanhh
	cout << u8"███";
	SetColor(10, 14);//tren xanh duoi vang
	cout << u8"▀";
	SetColor(14, 14);//full vang
	cout << u8"██";
	SetColor(10, 14);//tren vang duoi xanh
	cout << u8"▄";
	SetColor(0, 0);//tren den duoi den
	cout << u8"▄";

	SetColor(15, 15);
	cout << "  ";

	SetColor(0, 0);//tren den duoi den
	cout << u8"▄";
	SetColor(10, 14);//tren xanh duoi vang
	cout << u8"▀";
	SetColor(14, 14);//full vang
	cout << u8"██";
	SetColor(10, 14);//tren vang duoi xanh
	cout << u8"▄";
	SetColor(0, 0);//tren den duoi den
	cout << u8"▄";

	SetColor(15, 15);
	cout << "  ";


	SetColor(0, 0);//tren den duoi den
	cout << u8"▄";
	SetColor(10, 14);//tren vang duoi xanh
	cout << u8"▄";
	SetColor(10, 10);//full xanhh
	cout << u8"██";
	SetColor(10, 14);//tren xanh duoi vang
	cout << u8"▀";
	SetColor(14, 14);//full vang
	cout << u8"██";
	SetColor(10, 14);//tren vang duoi xanh
	cout << u8"▄";
	SetColor(0, 0);//tren den duoi den
	cout << u8"▄";

	SetColor(15, 15);
	cout << "   ";

	SetColor(0, 0);//tren den duoi den
	cout << u8"▄";
	SetColor(10, 14);//tren xanh duoi vang
	cout << u8"▀";
	SetColor(14, 14);//full vang
	cout << u8"██";
	SetColor(10, 14);//tren vang duoi xanh
	cout << u8"▄";
	SetColor(0, 0);//tren den duoi den
	cout << u8"▄";

	//dong 3/6
	GotoXY(LEFT + 74, TOP + 11);
	SetColor(15, 15);//tren trang duoi trang
	cout << u8" ";
	SetColor(15, 0);//tren den duoi trang
	cout << u8"▄▄";
	SetColor(0, 0);//full den
	cout << u8"█";
	SetColor(14, 14);//full vang
	cout << u8"██";
	SetColor(0, 0);//full den
	cout << u8"█";
	SetColor(15, 0);//tren den duoi trang
	cout << u8"▄▄";

	SetColor(15, 15);
	cout << "    ";

	SetColor(0, 0);//full den
	cout << u8"█";
	SetColor(10, 14);//tren vang duoi xanh
	cout << u8"▄";
	SetColor(10, 10);//full xanh
	cout << u8"█";
	SetColor(0, 0);//full den
	cout << u8"█";

	SetColor(15, 15);
	cout << "   ";

	SetColor(0, 0);//full den
	cout << u8"█";
	SetColor(10, 10);//full xanh
	cout << u8"█";
	SetColor(10, 14);//tren xanh duoi vang
	cout << u8"▀";
	SetColor(14, 0);//tren den duoi vang
	cout << u8"▄▄";
	SetColor(10, 0);//tren den duoi xanh
	cout << u8"▄";
	SetColor(0, 0);//full den
	cout << u8"█";
	SetColor(0, 15);//tren xanh duoi vang
	cout << u8"▀";

	SetColor(15, 15);
	cout << "    ";

	SetColor(0, 0);//full den
	cout << u8"█";
	SetColor(14, 14);//full vang
	cout << u8"█";
	SetColor(10, 14);//tren vang duoi xanh
	cout << u8"▄";
	SetColor(10, 10);//full xanh
	cout << u8"██";
	SetColor(0, 0);//full den
	cout << u8"█";

	//dong 4/6
	GotoXY(LEFT + 74, TOP + 12);
	SetColor(15, 15);//tren trang duoi trang
	cout << u8"   ";
	SetColor(0, 0);//full den
	cout << u8"█";
	SetColor(10, 14);//tren vang duoi xanh
	cout << u8"▄";
	SetColor(10, 10);//full xanh
	cout << u8"█";
	SetColor(0, 0);//full den
	cout << u8"█";

	SetColor(15, 15);
	cout << "      ";

	SetColor(0, 0);//full den
	cout << u8"█";
	SetColor(10, 10);//full xanh
	cout << u8"█";
	SetColor(10, 14);//tren xanh duoi vang
	cout << u8"▀";
	SetColor(0, 0);//full den
	cout << u8"█";

	SetColor(15, 15);
	cout << "   ";

	SetColor(0, 0);//full den
	cout << u8"█";
	SetColor(14, 14);//full vang
	cout << u8"██";
	SetColor(14, 0);//tren vang duoi den
	cout << u8"▀";
	SetColor(10, 0);//tren vang duoi den
	cout << u8"▀▀";
	SetColor(0, 0);//full den
	cout << u8"█";
	SetColor(15, 0);//tren trang duoi den
	cout << u8"▀";

	SetColor(15, 15);
	cout << "    ";

	SetColor(15, 0);//tren den duoi trang
	cout << u8"▄";
	SetColor(0, 10);//tren xanh duoi den
	cout << u8"▄";
	SetColor(10, 10);//full xanh
	cout << u8"█";
	SetColor(10, 14);//tren xanh duoi vang
	cout << u8"▀";
	SetColor(14, 0);//tren vang duoi den
	cout << u8"▀";
	SetColor(15, 0);//tren den duoi trang
	cout << u8"▄";

	//dong 5/6
	GotoXY(LEFT + 74, TOP + 13);
	SetColor(15, 15);//tren trang duoi trang
	cout << u8"   ";
	SetColor(0, 0);//full den
	cout << u8"█";
	SetColor(10, 10);//full xanh
	cout << u8"█";
	SetColor(10, 14);//tren vang duoi xanh
	cout << u8"▀";
	SetColor(0, 0);//full den
	cout << u8"█";

	SetColor(15, 15);
	cout << "     ";

	SetColor(0, 0);//full den
	cout << u8"█";
	SetColor(10, 14);//tren xanh duoi vang
	cout << u8"▀";
	SetColor(14, 14);//full vang
	cout << u8"██";
	SetColor(14, 10);//tren vang duoi xanh
	cout << u8"▀";
	SetColor(0, 0);//full den
	cout << u8"█";

	SetColor(15, 15);
	cout << "  ";

	SetColor(0, 0);//full den
	cout << u8"█";
	SetColor(14, 10);//tren vang duoi xanh
	cout << u8"▀";
	SetColor(10, 10);//full xanh
	cout << u8"███";
	SetColor(10, 14);//tren xanh duoi vang
	cout << u8"▀";
	SetColor(14, 14);//full vang
	cout << u8"██";
	SetColor(0, 0);//full den
	cout << u8"█";

	SetColor(15, 15);
	cout << "    ";

	SetColor(0, 15);//tren trang duoi den
	cout << u8"▄";
	SetColor(14, 0);//tren den duoi vang
	cout << u8"▄▄";
	SetColor(0, 15);//tren trang duoi den
	cout << u8"▄";

	GotoXY(LEFT + 74, TOP + 14);
	SetColor(15, 15);//tren trang duoi trang
	cout << u8"   ";
	SetColor(15, 0);//tren den duoi trang
	cout << u8"▄";
	SetColor(0, 14);//tren vang duoi den
	cout << u8"▄▄";
	SetColor(15, 0);//tren den duoi trang
	cout << u8"▄";

	SetColor(15, 15);
	cout << "     ";

	SetColor(15, 0);//tren den duoi trang
	cout << u8"▄";
	SetColor(0, 14);//tren vang duoi den
	cout << u8"▄▄";
	SetColor(0, 10);//tren xanh duoi den
	cout << u8"▄▄";
	SetColor(15, 0);//tren den duoi trang
	cout << u8"▄";

	SetColor(15, 15);
	cout << "  ";

	SetColor(15, 0);//tren den duoi trang
	cout << u8"▄";
	SetColor(0, 10);//tren xanh duoi den
	cout << u8"▄▄▄";
	SetColor(0, 14);//tren vang duoi den
	cout << u8"▄▄▄";
	SetColor(0, 10);//tren xanh duoi den
	cout << u8"▄";
	SetColor(15, 0);//tren den duoi trang
	cout << u8"▄";

	SetColor(15, 15);
	cout << "    ";

	SetColor(15, 0);//tren den duoi trang
	cout << u8"▄";
	SetColor(0, 14);//tren vang duoi den
	cout << u8"▄";
	SetColor(0, 10);//tren xanh duoi den
	cout << u8"▄";
	SetColor(15, 0);//tren den duoi trang
	cout << u8"▄";
	SetColor(1, 15);
}

void DrawHeart(int x,int y) {
	int mang[8][9] = {
		{15,0,0,0,15,0,0,0,15},
		{0,12,12,12,0,12,12,12,0},
		{0,12,12,12,12,12,12,12,0},
		{0,12,12,12,12,12,12,12,0},
		{15,0,12,12,12,12,12,0,15},
		{15,15,0,12,12,12,0,15,15},
		{15,15,15,0,12,0,15,15,15},
		{15,15,15,15,0,15,15,15,15}
	};
	SetConsoleOutputCP(CP_UTF8);
	for (int i = 0; i < 8; i+=2)
	{
		GotoXY(x, y+i/2);
		for (int x = 0; x < 9; x++) {
			SetColor(mang[i+1][x], mang[i][x]);
			cout << u8"▄";
		}
		cout << endl;
	}
}

void DrawMinion1(int x, int y) {

	int mang[30][18] = {
		{15,15,15,14,14,14,14,14,15,15,15},
		{15,15,14,14,14,14,14,14,14,15,15},
		{15,14,14,8,8,14,8,8,14,14,15	},
		{15,8,8,15,15,8,15,15,8,8,15},
		{15,8,8,15,0,8,15,0,8,8,15},
		{15,14,14,8,8,14,8,8,14,14,15},
		{15,14,14,0,14,14,14,0,14,14,15},
		{15,14,14,14,0,0,0,14,14,14,15},
		{15,14,14,14,14,14,14,14,14,14,15},
		{15,3,14,14,14,14,14,14,14,3,15},
		{15,14,3,0,3,3,3,0,3,14,15},
		{15,14,14,3,3,3,3,3,14,14,15},
		{15,14,14,3,3,0,3,3,14,14,15},
		{15,14,14,3,3,3,3,3,14,14,15},
		{15,14,3,3,3,3,3,3,3,14,15},
		{0,0,3,3,3,3,3,3,3,0,0},
		{15,0,3,3,3,3,3,3,3,0,15},
		{15,15,15,0,0,15,0,0,15,15,15},
		{15,15,0,0,0,15,0,0,0,15,15},
		{15,15,15,15,15,15,15,15,15,15,15,15,}
	};
	SetConsoleOutputCP(CP_UTF8);
	for (int i = 0; i < 19; i+=2)
	{
		GotoXY(x,y+i/2);
		for (int x = 0; x < 11; x++) {
			SetColor(mang[i+1][x],mang[i][x]);

			cout << u8"▄";
		}
		std::cout << endl;

	}
}
void DrawMinion2(int x, int y) {
	int mang2[16][12] = {
		{15,15,14,14,14,14,14,14,15,15,15,15},
		{15,14,14,14,14, 8, 8,14,14,15,15,15},
		{15, 0, 0, 0, 8,15,15, 8, 0,15,15,15},
		{15, 0, 0, 0, 8,15, 0, 8,0 ,15,15,15},
		{15,14,14,14,14, 8, 8,14,14,15,15,15},
		{15,14,14,14, 0,14,14,14,14,15,15,15},
		{15,14,14,14,14, 0, 0,14,14,15,15,15},
		{15, 1,14,14,14,14,14,14,1 ,15,15,15},
		{15,14, 1, 1, 1, 1, 1, 1,14,15, 0,15},
		{15,14,14, 1, 1, 1, 1,14,14,14, 0, 0},
		{15,14, 1, 1, 1, 1, 1, 1,14,15,15,15},
		{15,14, 1, 1, 1, 1, 1, 1,14,14,15,15},
		{0 ,0 , 1, 1, 1, 1, 1, 1, 1,15,15,15},
		{15, 0,15, 0, 0,15, 0, 0,15,15,15,15},
		{15,15,0 , 0, 0,15, 0, 0, 0,15,15,15},
		{15,15,15,15,15,15,15,15,15,15,15,15}

	};
	
	SetConsoleOutputCP(CP_UTF8);
	for (int i = 0; i < 15; i+=2)
	{
		GotoXY(x, y+i/2);
		for (int x = 0; x < 12; x++) {
			SetColor(mang2[i + 1][x], mang2[i][x]);

			cout << u8"▄";
		}
		std::cout << endl;

	}
}

void DrawSquirtle(int a,int b) {
	// Mảng 2D lưu mã  cho từng ô vuông (chỉ là ví dụ nhỏ)
	int upperSquirtle[28][33] = {
	   {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15,  0,  0,  0,  0,  0,  0,  0,  0, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15 },
	   {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15,  0,  0, 11, 11, 11, 11, 11, 11, 11, 11,  0, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15 },
	   {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15,  0, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11,  0,  0, 15, 15, 15, 15, 15, 15, 15, 15 },
	   {15, 15, 15, 15, 15, 15, 15, 15, 15, 15,  0, 11, 11, 11, 11, 11, 11, 11, 11,  0, 11, 11, 11,  3,  3,  0, 15, 15, 15, 15, 15, 15, 15 },
	   {15, 15, 15, 15, 15, 15, 15, 15, 15,  0, 11,  0, 11, 11, 11, 11, 11, 11,  0, 11,  0,  0,  3,  3,  3,  3,  0, 15, 15, 15, 15, 15, 15 },
	   {15, 15, 15, 15, 15, 15, 15, 15, 15,  0,  0, 11, 11, 11, 11, 11, 11, 11, 11,  0, 15, 15,  0,  3,  3,  3,  0, 15, 15, 15, 15, 15, 15 },
	   {15, 15, 15, 15, 15, 15, 15, 15,  0, 15,  0, 11, 11, 11, 11, 11, 11, 11,  0,  0, 15, 15,  0,  0,  3,  3,  3,  0, 15, 15, 15, 15, 15 },
	   {15, 15, 15, 15, 15, 15, 15, 15,  0,  0,  0, 11, 11, 11, 11, 11, 11, 11,  0,  0,  0,  0, 15,  0,  3,  3,  3,  0, 15, 15, 15, 15, 15 },
	   {15, 15, 15, 15, 15, 15, 15, 15,  0,  0,  0, 11, 11, 11, 11, 11, 11, 11,  0,  0,  0, 12, 15,  0,  3,  3,  3,  3,  0, 15, 15, 15, 15 },
	   {15, 15, 15, 15, 15, 15, 15, 15,  0, 12,  0, 11, 11, 11, 11, 11, 11, 11,  0,  0,  0, 12, 15,  0,  3,  3,  3,  3,  0, 15, 15, 15, 15 },
	   {15, 15, 15, 15, 15, 15, 15, 15,  0,  0, 11, 11, 11, 11, 11, 11, 11, 11,  0, 12, 12, 12, 15,  0,  3,  3,  3,  3,  0, 15, 15, 15, 15 },
	   {15, 15, 15, 15, 15, 15, 15,  0,  3,  0, 11,  0, 11, 11, 11, 11, 11, 11, 11,  0,  0,  0,  0,  3,  3,  3,  3,  3,  0, 15, 15, 15, 15 },
	   {15, 15, 15, 15, 15, 15, 15,  0,  0,  3,  3,  3,  0,  0,  0,  0,  0,  3,  3,  3,  3,  3,  3,  0,  3,  3,  3,  3,  0, 15, 15, 15, 15 },
	   {15, 15, 15, 15, 15, 15, 15,  0,  3,  0,  0,  0,  3,  3,  3,  3,  3,  0,  0,  0,  0,  0,  0,  3,  3,  3,  3,  0, 15, 15, 15, 15, 15 },
	   {15, 15, 15, 15, 15, 15, 15, 15,  0,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  0, 15, 15, 15, 15, 15 },
	   {15, 15, 15, 15, 15, 15, 15, 15, 15,  0,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  0,  0, 15, 15, 15, 15, 15 },
	   {15, 15, 15, 15, 15, 15, 15, 15, 15, 15,  0,  0,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  0,  7,  0,  0, 15, 15, 15, 15 },
	   {15, 15, 15, 15, 15, 15, 15, 15, 15,  0,  0,  0,  0,  0,  3,  3,  3,  3,  3,  3,  3,  3,  3,  0,  0,  0,  7,  0,  6,  0, 15, 15, 15 },
	   {15, 15, 15, 15, 15, 15, 15,  0,  0, 11, 11,  0, 14, 14,  0,  0,  3,  3,  3,  3,  0,  0,  0, 11,  3,  3,  0,  6,  6,  0, 15, 15, 15 },
	   {15, 15, 15, 15, 15,  0,  0, 11, 11, 11,  0, 14, 14, 14, 14, 14,  0,  0,  0,  0, 14,  0, 11, 11,  3,  3,  3,  0,  6,  6,  0, 15, 15 },
	   {15, 15, 15, 15,  0, 11, 11, 11, 11, 11,  0, 14, 14, 14, 14, 14, 14, 14, 14, 14,  0, 11, 11, 11, 11,  3,  3,  3,  0,  6,  0, 15, 15 },
	   {15,  0,  0,  0, 11, 11, 11, 11, 11,  0, 14,  0, 14, 14, 14, 14, 14, 14, 14,  0, 11, 11, 11, 11, 11,  3,  3,  3,  0,  0,  6,  0, 15 },
	   { 0, 11,  3,  3,  0, 11, 11, 11, 11,  0, 14, 14,  0,  0,  0,  0,  0,  0,  0,  0, 11, 11, 11, 11, 11,  3,  3,  3,  0,  6,  0,  0, 15 },
	   {15,  0,  3,  0, 11, 11, 11, 11,  0, 14, 14, 14, 14, 14, 14,  0, 14, 14, 14,  0, 11, 11, 11, 11, 11,  3,  3,  3,  0,  6,  6,  6,  0 },
	   { 0, 11,  3,  3,  0,  3, 11, 11,  0, 14, 14, 14, 14, 14, 14,  0, 14, 14,  0, 11, 11,  0, 11, 11,  3,  3,  3,  0,  0,  6,  6,  6,  0 },
	   {15,  0,  0,  3,  3,  3,  3,  3,  0,  0, 14, 14, 14, 14,  0, 14, 14, 14,  0, 11,  0,  3,  0,  3,  3,  3,  3,  0,  0,  6,  6,  6,  0 },
	   {15, 15, 15,  0,  0,  0,  0,  0,  0,  0, 14, 14, 14, 14,  0, 14, 14,  0, 11,  3,  3,  3, 11,  0,  0,  3,  0,  7,  0,  6,  6,  6,  0 },
	   {15, 15, 15, 15, 15, 15, 15, 15,  0,  0, 14, 14, 14, 14,  0, 14, 14,  0,  3,  3,  3,  3,  3,  3,  0,  0,  8,  0,  6,  6,  6,  6,  0 }
	};
	int lowerSquirtle[18][45] = {
	   {15, 15, 15, 15, 15, 15, 15, 15,  0, 14,  0, 14, 14, 14,  0, 14, 14, 14,  0,  0,  0,  0,  0,  0, 14,  0,  8,  0,  6,  6,  6,  0,  0, 15, 15, 15, 15,  0,  0,  0,15 ,15  ,15, 15,15   },
	   {15, 15, 15, 15, 15, 15, 15, 15,  0, 14,  0,  0,  0,  0,  0, 14, 14, 14, 14, 14, 14,  0, 14, 14, 14,  0,  8,  0,  6,  6,  0,  6,  0, 15, 15,  0,  0, 11, 11, 11,  0,  0,15 ,15 ,15 },
	   {15, 15, 15, 15, 15, 15, 15, 15,  0, 14,  0, 14, 14, 14,  0, 14,  0,  0,  0,  0,  0, 14, 14, 14, 14,  0,  8,  0,  6,  0,  6,  6,  0, 15,  0, 11, 11, 11, 11, 11, 11,  3,  0,15 ,15},
	   {15, 15, 15, 15, 15, 15, 15, 15,  0,  0, 14, 14, 14, 14,  0, 14, 14, 14, 14, 14, 14,  0, 14, 14, 14, 14,  0,  7,  0,  6,  6,  0, 15,  0, 11, 11, 11, 11, 11, 11,  3,  3,  3,  0,15},
	   {15, 15, 15, 15, 15, 15, 15,  0, 11,  0, 14, 14, 14, 14,  0, 14, 14, 14, 14, 14, 14, 14,  0,  0,  0,  0,  0,  0,  0,  6,  6,  0, 15,  0,  3, 11, 11, 11,  3,  3,  3,  3,  3,  0,15},
	   {15, 15, 15, 15, 15, 15,  0, 11, 11,  0, 14, 14, 14, 14, 14,  0, 14, 14, 14, 14, 14, 14,  0, 11, 11, 11, 11, 11,  0,  6,  0, 15,  0,  3,  3,  3,  3,  0,  0,  0,  3,  3,  3,  3,  0},
	   {15, 15, 15, 15, 15, 15,  0, 11, 11, 11,  0, 14, 14, 14, 14,  0, 14, 14, 14, 14, 14,  0, 11, 11, 11, 11, 11, 11, 11,  0, 15,  0,  3,  3,  3,  3,  0,  3,  3,  3,  0,  3,  3,  3,  0},
	   {15, 15, 15, 15, 15, 15,  0, 11, 11, 11, 11,  0, 14, 14,  0, 14,  0, 14, 14, 14,  0, 11, 11, 11, 11, 11, 11, 11, 11,  0,  0,  3,  3,  3,  3,  0,  3,  3,  3,  3,  3,  3,  3,  3,  0},
	   {15, 15, 15, 15, 15,  0, 11, 11, 11, 11, 11,  3,  0,  0, 14, 14, 14,  0,  0, 14,  0, 11, 11, 11, 11, 11, 11, 11, 11,  0,  3,  3,  3,  3,  3,  0,  3,  3,  3,  3,  3,  3,  3,  3,  0},
	   {15, 15, 15, 15, 15,  0,  3, 11, 11, 11,  3,  3,  3,  0, 14, 14, 14, 14, 14,  0,  0, 11, 11, 11, 11, 11, 11, 11, 11,  0,  3,  3,  3,  3,  3,  0,  3,  3,  3,  3,  3,  3,  3,  0, 15},
	   {15, 15, 15, 15, 15,  0,  3,  3,  3,  3,  3,  3,  3,  3,  0, 14, 14, 14, 14, 14,  0, 11, 11, 11, 11, 11, 11, 11,  3,  0,  3,  3,  3,  3,  3,  3,  0,  3,  3,  3,  3,  3,  3,  0, 15},
	   {15, 15, 15, 15, 15, 15,  0,  3,  3,  3,  3,  3,  3,  0, 15,  0,  0,  0,  0,  0, 15,  0,  3, 11, 11, 11, 11,  3,  3,  0,  3,  3,  3,  3,  3,  3,  3,  0,  0,  3,  3,  3,  0, 15, 15},
	   {15, 15, 15, 15, 15,  0, 11,  3,  3,  3,  3,  3,  3,  0, 15, 15, 15, 15, 15, 15, 15,  0,  3,  3, 11, 11, 11,  3,  3,  0,  0,  0,  0,  3,  3,  3,  3,  3,  3,  0,  0,  0, 15, 15, 15},
	   {15, 15, 15, 15, 15, 15,  0, 11,  3, 11,  0,  0,  0, 15, 15, 15, 15, 15, 15, 15, 15, 15,  0,  3,  3,  3,  3,  3,  3,  0, 15, 15, 15,  0,  0,  0,  0,  0,  0,  0, 15, 15, 15, 15, 15},
	   {15, 15, 15, 15, 15, 15, 15,  0,  0,  0, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15,  0,  3,  3,  3,  3,  3,  3,  0, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15},
	   {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15,  0,  3,  3,  3,  3,  3,  3, 11,  0, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15},
	   {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15,  0, 11,  0,  0, 11,  3,  0,  0, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15},
	   {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15,  0, 15, 15,  0,  0, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15},
	};





	
	SetConsoleOutputCP(CP_UTF8);
	for (int y = 0; y < 28; y+=2) {
		GotoXY(a, b+y/2);
		for (int x = 0; x < 33; x++) {
			SetColor(upperSquirtle[y+1][x], upperSquirtle[y][x]); // Thiết lập màu
			std::cout << u8"▄";    // In ô vuông
		}
		std::cout << std::endl;
	}
	for (int y = 0; y < 18; y += 2) {
		GotoXY(a, b+14 + y / 2);
		for (int x = 0; x < 45; x++) {
			SetColor(lowerSquirtle[y + 1][x], lowerSquirtle[y][x]); // Thiết lập màu
			std::cout << u8"▄";    // In ô vuông
		}
		std::cout << std::endl;
	}

	SetColor(7,15);
}


void setColor(WORD color) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
void drawpx(int n) {
	setColor(n);
	cout << u8"▀";
}

void DrawC(int x, int y) {
	int a[8][13] = {
		{238, 238, 0, 0, 14 , 238, 80 + 14, 80 + 14, 0, 0, 238, 238,238 },
		{238, 238, 0, 12, 0 , 144,   0,144, 0, 12, 0, 238, 238},
		{238, 14 , 0, 0 , 0 , 80 , 224,224, 0,  0, 5, 238,238},
		{0  , 0  , 0, 85, 238, 238, 238, 224, 224, 224, 238,238,238},
		{0, 0, 0, 85, 238, 238, 238, 238, 238, 238, 238, 238,238},
		{0, 0, 0, 85, 238, 238, 238, 238, 238, 238, 238, 85,238,},
		{238, 0, 0, 0, 5, 94, 94, 238, 14, 0, 0, 0, 85},
		{238, 238, 224, 224, 0, 0, 0, 0, 80, 229, 238,238,238}
	};

	for (int i = 0; i < 8; i++) {
		GotoXY(x , y + i);
		for (int j = 0; j < 13; j++) {
			
			drawpx(a[i][j]);
		}
	}
}