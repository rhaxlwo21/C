#include <iostream>

using namespace std;
int fac(int n){
    int f=1;
    for(int i=n;i>0;i--){
        f*=i;
    }
    return f;
}

int main()
{
    int n;
    cout << "n=";
    cin>>n;
    cout<<fac(n)<<endl;
    return 0;
}
