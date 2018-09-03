#include <stdio.h>  //standard input output . header
#include <stdlib.h>

int main()
{
    char st[10];
    int a,b;

    printf("입력하세요 :");     //표준 출력 함수
    scanf("%s",st);     //표준 입력 함수
    printf("%s\n",st);
    printf("정수를 입력하세요 :");
    scanf("%d %d",&a,&b);   //scanf로 받을때는 &를 사용, &=주소를 나타냄, a주소에 입력받은값 저장
    printf("%d\t%d\n",a,b);

    return 0;
}
