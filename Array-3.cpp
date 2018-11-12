#include <iostream>

using namespace std;

int main()
{
    char ch[]={'P','r','o','g','r','a','m'};
    for(int i=0;i<7;i++){
        cout<<ch[i];
    }
    cout<<endl<<ch<<endl;
    char st[]={"Program"};
    cout<<"st="<<st<<endl;
    cout<<sizeof(st)<<endl;
    return 0;
}
