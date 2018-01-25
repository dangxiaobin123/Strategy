#include "Context.h"
Context::Context(IStrategy *mStrategy)
{ 
    this->m_strategy = mStrategy;
}
Context::~Context(void)
{
    delete this->m_strategy;
}
void Context::Operator()
{
    this->m_strategy->Operator();
}