#include <iostream>
#include "Board.hpp"

int main(void){
    std::cout << "Hello World !" << std::endl;
    Board b;
    std::map<int, int> values;
    values[0] = 1;
    values[1] = 5;
    values[35] = 67;

    b.initialize(values);
}