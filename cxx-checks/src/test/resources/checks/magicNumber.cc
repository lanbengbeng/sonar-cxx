#include <stdio.h>
#include <tchar.h>

class Program
{
    int _tmain(int argc, _TCHAR* argv[])
    {
        const long grossSalary = 80000;           // Compliant
        const double Rate = 0.85;                 // Compliant
        double rate2 = 0.85;                      // Non-Compliant
        int netSalary1;
        long long netSalary2;
        netSalary1 = Rate * grossSalary;          // Compliant
        netSalary2 = 0.85 * grossSalary;          // Non-Compliant
        netSalary1 = 0;                           // Compliant, exception
        netSalary1 = -1;                          // Compliant, exception
        netSalary1 = +1;                          // Compliant, exception
        netSalary1 = 0x0;                         // Compliant, exception
        netSalary1 = 0x00;                        // Compliant, exception
    }
};

enum Foo
{
    a = 0,                                        // Compliant
    b = 1,                                        // Compliant
    c = 2,                                        // Compliant
    d = 3,                                        // Compliant
    e = 4                                         // Compliant
};

#define MY_NUM 1234

int someFunction()
{
    return MY_NUM;
}

int someData[] = {
    0x151, 0x4541, 0x524, 0x4121, 0x41223, 0x5451,
    0x412, 0x7420, 0x78,  0x7443, 0x78874, 0x8744
};

static const int i1 = 10;     // Compliant
int i2 = 11;                  // Non-Compliant

namespace TestNamespace {
    const int b1 = 20;        // Compliant
    int b2 = 21;              // Non-Compliant
}

class TestClass {
    static const int c1 = 30; // Compliant
    int c2 = 31;              // Non-Compliant
};
