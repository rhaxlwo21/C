#include <iostream>

using namespace std;

int main()
{
    int a[2][3]={{1,2,3},{4,5,6}};  //a에 2행(0,1) 3열(0,1,2)  행은 생략 가능, 열은 생략 불가능
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<"    ";
        }
        cout<<endl;
    }
    //int *ptr=a[0] 아래랑 같은 표시 **데이터가 들어갈수 없기 때문
    int *ptr=&a[0][0];
    for(int i=0;i<6;i++){
        cout<<*(ptr+i)<<"   ";  //실제로는 면이아니라 선이라 할수 있음. (일렬의 형태)
    }
    return 0;
}
