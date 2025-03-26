// //Q1
// #include<stdio.h>
// int main(){
//     int number;
//     printf("Enter a number to check it is 3 digit or not: ");
//     scanf("%d",&number);
//     printf(number>99 && number<1000?"Yes it is 3 digit":"No it is not 3 digit");
// return 0;
// }

// //Q2
// #include<stdio.h>
// int main(){
//     int number1,number2;
//     printf("Enter 2 numbers to know which is greater: ");
//     scanf("%d%d",&number1,&number2);
//     printf("%d",number1>number2 ? number1:number2);
// return 0;
// }

// //Q3
// #include<stdio.h>
// int main(){
//     int a,b,c,d;
//     printf("Enter the value of a , b and c to find nature of roots of a quadratic equation: ");
//     scanf("%d%d%d",&a,&b,&c);
//     d=b*b-4*a*c;
//     printf(d>0?"Real and Distinct roots":d==0?"Real and Equal roots":"Imaginary Roots");
// return 0;
// }

//Q4
#include<stdio.h>
int main(){
    int year;
    printf("Enter the Year to check it is leap year or not: ");
    scanf("%d",&year);
    printf(year%100==0?year%400==0?"Yes, it is":"No it is not":year%4==0?"Yes it is":"No it is not");
return 0;
}

// //Q5
// #include<stdio.h>
// int main(){
//     int number1,number2,number3,max;
//     printf("Enter 3 numbers to check which is greater: ");
//     scanf("%d%d%d",&number1,&number2,&number3);
//     max=number1>number2 && number1>number3 ? number1 : number2>number3 ? number2:number3;
//     printf("%d is greater",max);
// return 0;
// }