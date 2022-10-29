#include "Time.h"
#include <iostream>
using namespace std;
int main()
{
    Time t1(10, 24, 06);
    Time t2(18, 06, 56);
    cout << (t1 + t2);
    cout << t1;
    
}

