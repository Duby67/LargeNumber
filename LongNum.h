#ifndef LONGNUM_H
#define LONGNUM_H

#include <cstddef>

class LongNum
{
public:

    LongNum();
    LongNum(int num);
    ~LongNum();

protected:

private:

    size_t NumSize = 0;
    bool isPositive = true;
    char* numbers = nullptr;

};


#endif

