#include <iostream>

using namespace std;
void swap(int *a,int *b){
    int tmp;
    tmp=*a; //a의 실제 데이터를 tmp에 넣어라
    *a=*b;
    *b=tmp;
}

int main()
{
    int a=10,b=20;
    swap(&a,&b);
    cout<<"a="<<a<<", b="<<b<<endl;
    return 0;
}
