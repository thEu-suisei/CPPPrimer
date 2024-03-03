#include <iostream>
#include <string>

using namespace std;

//$g++ 6_25.cpp
//$.\a.exe -d -o ofile data0

int main(int argc, char *argv[])
{
    string str;
    for(int i = 0; i!=argc;i++)
    {
        cout<<"argv["<<i<<"] = "<<argv[i]<<endl;
    }
    return 0;
}