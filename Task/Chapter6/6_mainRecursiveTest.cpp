#include<iostream>
int count=1;

//递归43166次后报错
int main()
{
    std::cout<<count++<<std::endl;
    main();
    return 0;
}