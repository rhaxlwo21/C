#include <iostream>

using namespace std;

int main()
{
//    cout << "Hello world!" << endl << "I am Seo" << endl;   //endl 줄 바꿈 == /n
    int a=10,b=8;


    /*
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    */
    cout<<a<<"+"<<b<<"="<<a+b<<endl;    //더하기
    cout<<a<<"-"<<b<<"="<<a-b<<endl;    //나누기
    cout<<a<<"*"<<b<<"="<<a*b<<endl;    //곱하기
    cout<<a<<"/"<<b<<"="<<(float)a/b<<endl;    //나누기
    cout<<a<<"%"<<b<<"="<<a%b<<endl;    //나머지

    int c=++a;
    cout<<"c="<<c<<",a="<<a<<endl;    //a++ , a를 출력후 1더하기, ++a a에다가 1더하고 출력
    cout<<(a!=0 || 5<4 && 0)<<endl;  //0은 false, 1은 true, ==은 같다 != 다르다 >=
    //순서 : 산술연산자 > 관계연산자 > 논리연산자  && 와 ""sms &&가 빠르다/and는 false에, or은 true에 영향을 많이 받는다
    cout<<(4|3)<<endl;  //비트연산, &,|
    cout<<(4&3)<<endl;
    cout<<(4^3)<<endl;  //한쪽이 true, false면 true를 내보냄
    cout<<(~4)<<endl;  //~ 보수값 출력
    
    return 0;
}
