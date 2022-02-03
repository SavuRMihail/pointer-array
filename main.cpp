#include <iostream>

using namespace std;

int main()
{
    int v[] = { 1, 2, 3, 4, 5};
    int n = sizeof(v)/sizeof(v[0]);
    int *p = v;
    for(p;p<v+n;p++)
        cout<<*p;
    return 0;
}
