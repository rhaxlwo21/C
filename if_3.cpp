#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int num,i(0),random;

    srand(time(NULL));  //시드값을 시간으로 줌
    random=rand()%100 + 1;  //랜덤하게 수를 받아옴, 랜덤한수의 100으로 나눈 나머지, 0부터 99까지의 값이므로 1을 더해줌

    while(1){
        i++;
        cout << i<< "번째 시도 :";
        cin>>num;
        if(num>random){
            cout<<num<<"보다 작습니다"<<endl;
        }
        else if(num<random){
            cout<<num<<"보다 큽니다"<<endl;
        }
        else{
            cout<<num<<"Great!!!"<<endl;
            break;  //반복문을 빠져나가는 명령어
        }
    }
    return 0;
}
