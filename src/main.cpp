#include "BackDoor.h"
#include "GivenGreenLight.h"
#include "Context.h"


int _tmain(int argc, _TCHAR* argv[])
{
    Context *p_context;
    p_context = new Context(new CBackDoor());
    p_context->Operator();
    p_context = new Context(new GivenGreenLight());
    p_context->Operator();
    system(“pause”);
    return 0;
}