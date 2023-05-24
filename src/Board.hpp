#ifndef BOARD_HPP
#define BOARD_HPP

#include <vector>
#include <cstddef>
#include <cmath>
#include <iostream>
#include <map>
#include "Case.hpp"

class Board{
private:
    std::vector<Case*> cases;
public:
    Board();
    void initialize(std::map<int, int> values);
    ~Board();
};

#endif // BOARD_HPP