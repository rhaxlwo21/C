#include <iostream>

using namespace std;
int fac(int n){
    if(n>1) return fac(n-1)*n;  //n의 팩토리얼
    else return 1;  //1보다 큰게 아니면 1로 지정해줌
}

int main()
{
    int n;
    cout<<"n=";
    cin>>n;
    cout<<"fac("<<n<<")="<<fac(n)<<endl;
    return 0;
}
