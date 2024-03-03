#include <initializer_list>
#include <iostream>

using namespace std;

int Sum(initializer_list<int> nums)
{
    int n = 0;
    for (auto i = nums.begin(); i != nums.end(); i++)
    {
        n += *i;
    }
    return n;
}

int main(int argc, char *argv[])
{
    cout << Sum({
        1,
        6,
        2,
        4,
        3,
        1,
        22,
    });
    system("pause");
    return 0;
}