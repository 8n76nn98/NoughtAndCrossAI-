//
// Created by Ming Shi on 29/01/2020.
//

#include "Support.h"
int line_idx_table[LINE_DIRECTION][LINE_CELLS] =
        {
                {0,1,2},//first row
                {3,4,5},//second row
                {6,7,8},// third row
                {0,3,6},// fist column
                {1,4,7},//second column
                {2,5,8},//third column
                {0,4,8},// dignonal
                {2,4,6},//anti -dignoal
        };
