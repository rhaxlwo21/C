#include <iostream>
#include <cstdlib>  //srand
#include <ctime>    //time
#include <iomanip>  //setw

using namespace std;

int main()
{
    int a[25],tmp;
    char ans;
    srand(time(NULL));

    while(1){
        for(int i=0;i<25;i++){
            tmp=rand()%25+1;
            for(int j=0;j<i;j++){
                if(a[j]==tmp||a[0]==tmp){   //첫번째와 중복되는것이 사라짐
                    tmp=rand()%25+1;
                    j=0;
                }
            }
            a[i]=tmp;
        }

        for(int i=0;i<25;i++){
            cout<<setw(3)<<a[i]<<"   "; //setw(3) 뒤 글을 3글자씩 출력
            if(i%5==4)  cout<<endl;
        }
        cout<<"Is this OK? : ";
        ans=cin.get();
        if(ans=='y'||ans=='Y')  break;
    }
    return 0;
}
