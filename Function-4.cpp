//call by reference // address에 의한 호출
#include <iostream>

using namespace std;
void func(int *a,int *b){
    *a=2;*b=3;  //주소를 이용해서 값을 저장할때는 *를 붙임
    cout<<"a="<<*a<<", b="<<*b<<endl;
}

int main()
{
    int a=10,b=20;
    func(&a,&b);
    cout<<"a="<<a<<", b="<<b<<endl;
    return 0;
}
