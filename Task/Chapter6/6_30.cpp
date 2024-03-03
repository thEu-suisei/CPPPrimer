int foo(int a)
{
    if(a)
    {
        return 1;
    }
    return;
}

//错误test
int main()
{
    foo(1);
    return 0;
}