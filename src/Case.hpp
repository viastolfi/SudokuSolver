#ifndef CASE_HPP
#define CASE_HPP

class Case
{
public:
    int value;
    int row;
    int column;
    int block;
    Case(int row, int column, int block);
};

#endif // CASE_HPP