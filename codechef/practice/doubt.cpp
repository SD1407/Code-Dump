// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
// char arr[] = "10000";
// int A;
// cin >> A;
// string B = (string) A;
// cout << B << endl;
// return 0;
// }

// #include<stdio.h>  
//  int main()    
// {    
// int n,sum=0,m;    
// printf("Enter a number:");    
// scanf("%d",&n);    
// while(n>0)    
// {    
// m=n%10;    
// sum=sum+m;    
// n=n/10;    
// }    
// printf("Sum is=%d",sum);    
// return 0;  
// }   

#include<iostream>
using namespace std;
int main(){
    string num;
    char arr[1000];

cout << "enter a number : " << endl;
cin >> num;
cout << num;
printf("\nenter a number\n");
scanf("%s", &arr);
int b =*arr;
// so i can store a char in the place of int that will give us the ASCII number and vica-versa.. so for long long integer we can store that into an array in C and into a string in C++ 

printf("the number is %d", b);
printf("the number is %s", arr);


return 0;
}