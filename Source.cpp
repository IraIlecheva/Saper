#include <iostream>
#include <Windows.h>
#include <vector>
using namespace std;

void gotoxy(int x, int y) {
	COORD p = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
}

class Map {
private:
	int size;
public:
	Map() {
		size = 10;
	}
	void show() {
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				if(i == 0 || j == 0 || i == size - 1 || j == size - 1)
				cout << "#";
			else
				cout << " ";
			}
			cout << endl;
		}
	}
};

class Game {
private:
	void showLogo() {
		gotoxy(40, 9);
		cout << "Saper" << endl;
		Sleep(2000);
		system("cls");
	}
public:
	void run() {
		void showLogo();
		Map map;
		map.show();
	}
};

int main() {
	Game game;
	game.run();
}