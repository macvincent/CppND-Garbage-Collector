#include "gc_pointer.h"
#include "LeakTester.h"

int main()
{
    Pointer<int> p(new int(19));
    p = new int(21);
    Pointer<int>arr = p;
    Pointer<int>a(p);
    p = new int(28);

    return 0;
}