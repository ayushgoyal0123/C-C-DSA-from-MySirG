// //Q1
// #include<stdio.h>
// int main(){
//     int x;
//     printf("Enter a number to check it is positive or non-positive");
//     scanf("%d",&x);
//     printf(x>0?"Positive":"Non Positive");
// return 0;
// }

// //Q2
// #include<stdio.h>
// int main(){
//     int x;
//     printf("Enter a number to check it is divisible by 5 or not: ");
//     scanf("%d",&x);
//     printf(x%5==0?"YES":"NO");
// return 0;
// }

// //Q3
// #include<stdio.h>
// int main(){
//     int x;
//     printf("Enter a number to check it is Even or Odd: ");
//     scanf("%d",&x);
//     printf(x%2==0?"EVEN":"ODD");
// return 0;
// }

// //Q4
// #include<stdio.h>
// int main(){
//     int x;
//     printf("Enter a number to check it is Even or Odd: ");
//     scanf("%d",&x);
//     printf(x/2*2==x?"EVEN":"ODD");
// return 0;
// }

//Q5
#include<stdio.h>
int main(){
    int x;
    printf("Enter a number to check it is Even or Odd: ");
    scanf("%d",&x);
    printf((x&1)==0?"Even":"Odd");
return 0;
}