#include <stdio.h>
#include <stdlib.h>
#define SAM 3   //정수

int main()
{
    char ch = 'A';  //"" 배열, '' 문자열
    char st[5]="Haha";  // []안에 아무것도 입력하지 않았을때, 자동으로 잡음
    char str[3][12]={"Hi","Hello","How are you"};   //String 이 없어서 문자열로 2차원 배열을 해야함

    printf("%s\n",st);
    for(int i=0;i<SAM;i++){
        printf("%s\n",str[i]);
    }
    ch='B';
    printf("%c\n",ch);
    printf("%d\n",ch+2);

    return 0;
}
