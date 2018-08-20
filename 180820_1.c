//2018-08-20

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a =16;  //4byte를 잡고 저장
    float b =20.123;    //4byte로, 실수형을 저장
    double d=12.123;    //8byte를 잡고 저장
    long long int l=2333;  //long은 4byte
    int oo=010; //숫자 앞에 0을 붙일 경우 8진수로 표현한다
    int hh=0xFF;    //숫자 앞에 0x를 붙일 경우 16진수로 표현한다
    int ch=65;  //int ch=65를 %d=64,%c=A처럼, 변환됨

    /*
    %o-> 입력받은 값을 8진수로 출력하라.
    %x-> 입력받은 값을 10진수로 출력하라.
    */

    printf("ch=%c\n",ch);
    printf("hh=%d\n",hh);
    printf("oo=%d\n",oo);
    printf("%d Byte\n",sizeof(l));   //sizeof(n)은 n의 사이즈(byte)를 보여달라
    printf("a=%x\tb=%.3f\n\n",a,b); //변수 출력하기, float, double 출력은 %.nf
    printf("%f\n",d);
    printf("Hello world!\n");
    return 0;
}
