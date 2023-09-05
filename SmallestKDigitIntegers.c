#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,a,f=0;
    scanf("%d %d",&n,&a);
    int b[n],c[n],j=0;
    for(int i=0;i<n;i++){
        scanf("%d ",&b[i]);
        int d=0,e=b[i];
        while(b[i]>0){
            d++;
            b[i]/=10;
        }
        if(d==e)
        c[j++]=e;
    }
    int min=c[0];
    for(int i=0;i<j;i++){
        if(c[i]<min)
        min=c[i];
    }
    (f==0)?printf("-1"):printf("%d",min);
}