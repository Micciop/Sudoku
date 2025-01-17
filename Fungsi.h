#include "stdbool.h"
#ifndef FUNGSI_H
#define FUNGSI_H

int DisplayMenu();
int NewGame();
int Exit();
int HowToPlay();
int Leaderboard();
int Highscore(int Score);
int Permainan(int BONUS_SCORE, int Index, int SimpanSoal[10][9][9], int SimpanJawaban[10][9][9]);
int Scoring(int time_start, int BASE_SCORE);
int Randomizer(int Index, int Difficulty, int SimpanSoal[10][9][9], int SimpanJawaban[10][9][9]);
void InputTidakValid();
void DisplayWin();
void DisplayLose();
void printCentered(const char* text, int consoleWidth);
bool CekVertikal(int SimpanSoal[10][9][9], int Index, int row, int col);
bool CekHorizontal(int SimpanSoal[10][9][9], int Index, int row, int col);
bool CekBlok(int SimpanSoal[10][9][9], int Index, int row, int col);
bool CekFinal(int SimpanSoal[10][9][9], int Index, int row, int col);

// void* TimerScore(void* arg);

#endif
