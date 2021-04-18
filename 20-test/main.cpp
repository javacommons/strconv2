#include "strconv2.h"

int main()
{
    //using namespace strconv2;
    unicode_ostream uout(std::cout);
    uout << U8("あいう") << std::endl;
    format("pi=%f\n", 3.14);
    format(std::cout, "pi2=%f\n", 3.14);
}
