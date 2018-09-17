#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int kor,mat,eng,tot;
    double avg;
    char grade;
    ifstream in("input.txt");
    in>>kor>>mat>>eng>>tot;
    tot = kor + mat + eng;
    avg = tot/3.;

    switch((int)avg/10){
    case 10:
    case 9: grade='A'; break;
    case 8: grade='B'; break;
    case 7: grade='C'; break;
    case 6: grade='D'; break;
    }
    cout<<"kor "<<" <mat"<<tot;
    return 0;
}
