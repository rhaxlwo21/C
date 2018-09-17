#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a,b,c,d,e,maximum(0);   //(0)maximum에다 0을 줘라
    ifstream in("input.txt");   //input.txt 파일을 in이라는 객체로 불러오기(?)
    in>>a>>b>>c>>d>>e;
    if(a>maximum){
        maximum=a;
    }
    if(b>maximum){
        maximum=b;
    }
    if(c>maximum){
        maximum=c;
    }
    if(d>maximum){
        maximum=d;
    }
    if(e>maximum){
        maximum=e;
    }
    cout << "max=" << maximum << endl;
    return 0;
}
