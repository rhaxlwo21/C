#Hang Man Game/ 문자열, 반복문, if, 
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <ctime>

using namespace std;

int game(){
    string gameWord;
    ifstream read;
    srand(time(NULL));
    int randomWord=rand()%10+1;
    char line[200];

    read.open("wordText.txt");
    cout<<"Hang Man에 사용될 단어를 입력하세요(10글자 미만):";
    cin>>gameWord;
    for(int i=0;i<10;i++){
        cout<<gameWord[i];
    }
    while (read.getline(line, sizeof(line))){
            cout << line << endl; // 내용 출력
        }

}

int main()
{
    //선언
    int setNum;
    int gameSet=0;

    //명령
    cout<<"Hang Man 게임입니다.\n1. 시작\n2. 도움말\n3. 종료\n원하시는 번호를 입력하세요: ";
    cin>>setNum;
    switch(setNum){
        case 1:
            game();
        case 2:
        case 3:
            cout<<"최소 한판 해주세요... 강제종료 하지 마시고.."<<endl;
    }
    return 0;
}
