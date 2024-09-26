#include <iostream>

using namespace std;

int main()
{
    int a=100,b=10;
    cout<<"a="<<a<<endl;
    for(int i=0;i<2;i++)
    {
        a+=b;
    }
    cout<<"a="<<a;
    return 0;
}
