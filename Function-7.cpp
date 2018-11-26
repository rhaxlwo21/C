#include <iostream>

using namespace std;
void print(int n){
    if(n>1) print(n-1); //자신이 자신을 호출함
    cout<<n<<"  ";
}


int main()
{
    print(50000);   //100000이상이 오류가 나는 이유 = 스택 오버 플로우가 발생함, 발생하지 않을경우 다른 방법보다 처리 속도가 빠름
    return 0;
}
