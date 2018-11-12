#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int a[10]={0},mmax=0;
    srand(time(NULL));  //ctime 선언해야됨   srand는 cstdlib선언해야함
    for(int i=0;i<10;i++){
        a[i]=rand()%100+1;
        if(a[i]>mmax){
            mmax=a[i];
        }
        cout<<a[i]<<"   ";
    }
    cout<<mmax<<endl;
    return 0;
}
