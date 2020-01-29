cmake_minimum_required(VERSION 3.14)
project(tie_toc)

set(CMAKE_CXX_STANDARD 14)

add_executable(tie_toc main.cpp Support.cpp Support.h GameConst.h Evaluator.h GameState.cpp GameState.h headLibrary.h AlphabetaSearcher.cpp AlphabetaSearcher.h NegamaxSearcher.cpp NegamaxSearcher.h HumanPlayer.cpp HumanPlayer.h ComputerPlayer.cpp ComputerPlayer.h MinimaxSearcher.cpp MinimaxSearcher.h FeEvaluator.cpp FeEvaluator.h WzEvaluator.cpp WzEvaluator.h)