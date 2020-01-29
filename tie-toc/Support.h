//
// Created by Ming Shi on 29/01/2020.
//

#ifndef TIE_TOC_SUPPORT_H
#define TIE_TOC_SUPPORT_H

#include "GameConst.h"
#include "headLibrary.h"

const int LINE_DIRECTION = 8;
const int LINE_CELLS = 3;

extern int line_idx_table[LINE_DIRECTION][LINE_CELLS];

inline int GetPeerPlayer(int play_id)
{
    // change alternation
    return (play_id==PLAYER_A)?PLAYER_B:PLAYER_A;
}


#endif //TIE_TOC_SUPPORT_H
