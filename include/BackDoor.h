#pragma once
#include "IStrategy.h"
class CBackDoor : public IStrategy
{
public:
    CBackDoor(void);
    ~CBackDoor(void);
    void Operator(void);
};