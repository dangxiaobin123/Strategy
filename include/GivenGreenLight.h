#include "IStrategy.h"
class GivenGreenLight : public IStrategy
{
public:
    GivenGreenLight(void);
    ~GivenGreenLight(void);
    void Operator(void);
};