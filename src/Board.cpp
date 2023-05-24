#include "Board.hpp"

Board::Board()
{
    for(int row=0; row<9; row++)
    {
        for(int column=0; column<9; column++)
        {
            int block = trunc(column/3);
            Case* c = new Case(row, column, block);
            cases.push_back(c);
        }
    }
}

void Board::initialize(std::map<int, int> values)
{
    for(std::map<int, int>::iterator it = values.begin(); it != values.end(); it++)
    {
        std::cout << (*it).first << " " << (*it).second << std::endl;
    }
}

Board::~Board(){
    for(std::vector<Case*>::iterator it = cases.begin(); it != cases.end(); it++){
        delete (*it);
        (*it) = NULL;
    }
}