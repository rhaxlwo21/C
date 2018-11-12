#include <iostream>

using namespace std;

int main()
{
    char ch[][10]={"Program","abc","1234"};
    for(int i=0;i<3;i++){
        cout<<ch[i]<<endl;
    }

    string st[]={"Program","abc","1234"};   //string==ch[][10]
    for(int i=0;i<3;i++){
        cout<<st[i]<<endl;
    }

    char myhome[]="Seoul";  //하나씩 받아들이는데 [](배열)이 없다면 error가 뜬다.
    cout<<*&myhome[0]<<endl; //[0]방에 있는 주소가 배열의 주소

    string str="abcde";
    string &addr=str;   //&는 주소로 받아옴, 2개의 주소를 가지고 있음
    cout<<addr<<endl;

    return 0;
}
