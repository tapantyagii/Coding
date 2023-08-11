#include<stdio.h>

int main(){

int a,fib[100];
printf("enter the number to which fibbonacci is to be printed");
scanf("%d",&a);
fib[0]=0;
fib[1]=1;
for(int i =2;i<a;i++){
    fib[i]=fib[i-1]+fib[i-2];

}

for(int i=0;i<a;i++){
    printf("%d \n",fib[i]);
}
return 0;
}