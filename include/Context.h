#include "IStrategy.h"
class Context
{
public:
    Context(IStrategy *strategy);
    ~Context();
    void Operator(void);
private:
    IStrategy *m_strategy;
};