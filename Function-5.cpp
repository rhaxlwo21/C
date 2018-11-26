#include <iostream>

using namespace std;
int func(int a[],int cnt){
    int sum=0;
    for(int i=0;i<cnt;i++)
        sum+=a[i];
    return sum;
}

int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int cnt=sizeof(a)/sizeof(int);  //==a의 개수

    cout<<func(a,cnt)<<endl;    //==func(&a[0]); 같은 개념임
    return 0;
}
