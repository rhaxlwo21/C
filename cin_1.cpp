#include <iostream>
#include <string>

using namespace std;    //std::cout 을 cout으로 줄여 쓸수 있다

int main()
{
    int a,b;
    string s;
    cin>>a>>b;
    cin.get();  //Enter를 한번 받아들임
    cout << "What's your name?"<<endl;
    getline(cin,s); //getline
    cout << "a+b=" << (a+b)<<endl;
    cout << "nice to meet "<<s<< endl;
    return 0;
}
