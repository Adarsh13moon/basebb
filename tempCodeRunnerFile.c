#include<stdio.h>
int main(){
    printf("GETTTTTTTTTT POINTS............");
    int r,x=0,y,P;
    printf("enter the value of r:");
    scanf("%d",&r);
    y=r;
    P=1-r;
    do{
        if(P<0){
            x=x+1;
            //y=y;
            P=P+2*x+1;
             printf("\n%d\t%d\t%d\n",x,y,P);
        }
        else{
            x=x+1;
            y=y-1;
            P=P+2*x-2*y+1;
             printf("\n%d\t%d\t%d\n",x,y,P);
        }
    }while(x<y);
}