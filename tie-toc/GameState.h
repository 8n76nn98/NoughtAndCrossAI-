//
// Created by Ming Shi on 29/01/2020.
//

#ifndef TIE_TOC_GAMESTATE_H
#define TIE_TOC_GAMESTATE_H

#include "Evaluator.h"
#include "GameConst.h"

class GameState {
public:
    GameState(void);
    GameState(const GameState& state);
    ~GameState(void);

    const GameState&operator=(const GameState&state);

    void SetCurrentPlayer(int player_id) {m_playerId = player_id;};
    int GetCurrentPlayer()const {return m_playerId;};
    void SetGameCell(int cell,int player_id);
    int GetGameCell(int cell){ return  m_board[cell];};
    bool isEmptyCell(int cell) const;
    void PrintGame();
    void InitGameState(int firstPlayer);
    void SetEvaluator(Evaluator* evaluator){m_evaluator=evaluator;};
    int Evaluate(int max_player_id);
    void SwitchPlayer();
    bool isGameOver();
    int GetWinner();

protected:
    CellType GetCellType(int play_id);
    int CountThreeLine(int player_id);
    int CountEmptyCell();
protected:
        Evaluator *m_evaluator;
        int m_playerId;
        int m_board[BOARD_CELLS];
};


#endif //TIE_TOC_GAMESTATE_H
