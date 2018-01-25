#pragma once
class IStrategy
{
public:
    IStrategy(void);
    virtual ~IStrategy(void);
    virtual void Operator(void) = 0;
};