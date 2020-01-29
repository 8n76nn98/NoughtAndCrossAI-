//
// Created by Ming Shi on 29/01/2020.
//

#ifndef TIE_TOC_GAMECONST_H
#define TIE_TOC_GAMECONST_H
const int BOARD_ROW = 3;
const int BOARD_COL = 3;
const int BOARD_CELLS = BOARD_ROW*BOARD_COL;
const int INFINITY = 100;
const int WIN_LEVEL= 80;
const int DOUBLE_WEIGHT = 10;
const int DRAW = 0;

typedef char CellType;
const CellType CELL_TYPE ='-';
const CellType CELL_O = 'o';
const CellType CELL_X = 'x';

const int PLAYER_NULL = 0;
const int PLAYER_A = 1;
const int PLAYER_B = 2;

#endif //TIE_TOC_GAMECONST_H
