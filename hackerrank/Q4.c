#include<stdio.h>
int main(){
int num;
scanf("%d", &num);
for(int i=1; i<2*num; i++){
    for(int j=1; j<2*num-1; j++){
    printf("%d ", num);
    num--;
    }
    num++;
    printf("%d \n", num);
}
return 0;
}