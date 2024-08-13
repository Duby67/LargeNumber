#include "LongNum.h"

LongNum::LongNum()
{
    numbers = new char[NumSize]{};
}

LongNum::LongNum(int num)
{
    isPositive = num > 0;


    numbers = new char[NumSize]{};
    size_t dividor = 10;
    size_t i = 0;
    if (num % dividor != num)
    {

    }
}

LongNum::~LongNum()
{
    delete[] numbers;
    numbers = nullptr;
}