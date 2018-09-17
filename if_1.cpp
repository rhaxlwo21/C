#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    if(b==0){
        cout << "Error!!!" << endl;
        return 0;
    }
    cout.precision(5);  //자리수 지정 , 모든 자리 합쳐서 5자리
    cout << "a/b=" << (double)a/b n<< endl;

    return 0;
}
