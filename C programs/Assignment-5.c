// //Q1
// #include<stdio.h>
// int main(){
//     printf("Enter a 3 digit number");
//     int num,sum=0;
//     scanf("%d",&num);
//     sum=num/100+(num/10)%10+num%10;
//     printf("Sum is %d",sum);
// return 0;
// }

// //Q2
// #include<stdio.h>
// int main(){
//     printf("ASCII code of + is %d",'+');
// return 0;
// }

// //Q3
// #include<stdio.h>
// int main(){
//     int a;
//     char b;
//     float c;
//     double d;
//     printf("Size of int variable is %lu\n",sizeof(a));
//     printf("Size of char variable is %lu\n",sizeof(b));
//     printf("Size of float variable is %lu\n",sizeof(c));
//     printf("Size of double variable is %lu\n",sizeof(d));
// return 0;
// }

// //Q4
// #include<stdio.h>
// int main(){
//     printf("Enter a number");
//     int num;
//     scanf("%d",&num);
//     printf("Result is %d",num-num%10);  OR num/10*10
// return 0;
// }

//Q5
#include<stdio.h>
int main(){
    printf("Enter a number and a digit");
    int num,digit;
    scanf("%d%d",&num,&digit);
    printf("Result is %d",num*10+digit);
return 0;
}