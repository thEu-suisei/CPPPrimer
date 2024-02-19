#include<iostream>
using namespace std;

int main()
{
    int i =42;
    const int &r1 = i;
    int &r2 =i;
    r2=2;
    cout<<r1;

    system("pause");
    return 0;
}