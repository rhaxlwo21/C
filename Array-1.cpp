#include <iostream>

using namespace std;

int main()
{
    int a[10]={10,20,30,40,50,60},sum=0;
    for(int i=0;i<sizeof(a)/sizeof(int);i++)
        sum+=a[i];
    cout<<sum<<endl;

    int *ptr=&a[0]; //포인터 선언, 실제값을 포인터로 입력할때는 '&'를 앞에 붗인다.
    cout<<"ptr="<<*ptr<<endl;
    int &pt=a[1];   //&는 데이터를 주소로 받는것(?)
    cout<<"pt="<<pt<<endl;

    for(int i=0;i<10;i++){
        cout<<*(ptr+i)<<"   ";
    }
    return 0;
}
