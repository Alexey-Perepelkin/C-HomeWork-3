#include<stdio.h>

void rec(void){
    int a;
    scanf("%d",&a);
    if(a==0)
    return;
    if(a%2!=0)
    printf("%d",a);
    rec();
}

int main(int argc, char const *argv[])
{
     rec();
    return 0;
}
