#ifndef GOBANG_H
#define GOBANG_H
#include <windows.h>
#include "ColorCode.h"

#define WIDTH 70
#define HEIGHT 30
#define TITLE "三子连珠游戏"
#define BLOCK_WIDTH 7
#define BLOCK_HEIGHT 4
#define BOARD_START_X WIDTH / 2 - 10
#define BOARD_START_Y 4
#define WIN_NUM 3

// 三子连珠 游戏管理类 
class Gobang
{
    int boardSize = 0, prevBoardSize = 0;
    bool isInit = false;
    HANDLE handle;
    int** board, **vis;
    bool round = false;
    public:
        Gobang();
    private:
        bool init();
        void displayMainMenu();
        void selectBoardSize();
        void startGame();
        void showBoard();
        bool putChess();
        void showResult();
        bool checkWin(bool isPlayer1, COORD pos, int total, COORD fromDir = {0, 0});
        bool checkValid(COORD pos);
        bool canCalc(COORD pos, bool round);
        void clearConsole();
        void drawBorder();
        void drawWindow(COORD pos, COORD size);
        void drawText(COORD pos, const char* text, ColorCode color = White);
};

#endif
