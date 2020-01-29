//
// Created by Ming Shi on 29/01/2020.
//

#ifndef TIE_TOC_EVALUATOR_H
#define TIE_TOC_EVALUATOR_H
class GameState;
class Evaluator
{
protected:
    Evaluator(void)
    {

    }

public:
    virtual ~Evaluator()
    {

    }
    virtual int Evaluate(GameState& state,int max_player_id)=NULL;
};
#endif //TIE_TOC_EVALUATOR_H
