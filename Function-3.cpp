//call by value
#include <iostream>

using namespace std;
int func(int a,int b){ //void를 쓰는 이유는 return 값을 받지 않기 위해서이다.    int 이면 return 값이 필요함
    a=2,b=3;
    cout<<"a="<<a<<", b="<<b<<endl;
    return a+b;
}

int main()
{
    int a=10,b=20,ans;
    ans=func(a,b);
    cout<<"ans="<<ans<<endl;
    return 0;
}
