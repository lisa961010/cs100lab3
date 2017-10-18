#include "Op.h"

Op::Op()
{

}

Op::Op(int op_give)
{
    this->op = op_give;
}

int Op::leaf()
{
    return op;
}
