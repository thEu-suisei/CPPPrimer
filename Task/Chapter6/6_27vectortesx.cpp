#include <vector>
#include <iostream>

using namespace std;

int count =0;

int func(vector<int> nums)
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
    cout << func({1, 2, 3})<<endl;
    cout << func({2, 3});
    system("pause");
    return 0;
}