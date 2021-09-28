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
        if(n<pn)
            {
             s=s+pn-n;
             i++;
            }
        else
            s=s+n;
    }
    return s;
}
int main(){
    char k[10];
    int i,a;
    printf("Enter the roman number you want to convert: \n");
    gets(k);
    printf("The number is %d",tointegers(k));

    return 0;
}
