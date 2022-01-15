#include<stdio.h>
int main(){
int num;
int sum=0, a;
scanf("%d", &num);
while(num!=0){

a = num%10;
num = num/10;
sum = sum + a;
}
printf("%d", sum);
return 0;
}