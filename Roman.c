#include<stdio.h>
#include<stdlib.h>
int romans(char c)
{
    switch (c){
        case'I':
        return 1;
        case 'V':
        return 5;
        case'X':
        return 10;
        case'L':
        return 50;
        case'C':
        return 100;
        case'D':
        return 500;
        case'M':
        return 1000;
        default:
        return 0;
    }
}
int tointegers(char *l){
    int i,pn,s=0,n;
    for(i=0;l[i]!='\0';i++){
        pn=romans(l[i+1]);
        n=romans(l[i]);
        if(n<pn/10)
            {
             printf("Incorrect Numeral ");
             return -1;
            }
        if(n<pn&&n>=pn/10)
            {
             s=s+pn-n;
             i++;
            }
        else
            s=s+n;
    }
    return s;
}
int main()
{
    char k[10],ch;
    int i,a;
   // do{
    printf("\nEnter the roman number you want to convert: \n");
    for(i=0;i<=10;i++)
    {
        scanf("%c",&k[i]);
        if(k[i]<65||k[i]>122)
            break;
    }
    i=tointegers(k);
    if(i>0)
    printf("The number is %d",i);
    printf("\nDo you want to continue?(y/n)");
    scanf("%c",&ch);
   // }while(ch=='y');
    return 0;
}
