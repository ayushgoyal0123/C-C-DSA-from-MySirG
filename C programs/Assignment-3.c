// #Q1
// #include<stdio.h>
// int main(){
//     printf("Enter a character to print ASCII code: ");
//     char ch;
//     scanf("%c",&ch);
//     printf("%d",ch);
// return 0;
// }

//Q2
// #include<stdio.h>
// int main(){
//     printf("Enter an ASCII code to print character: ");
//     int code;
//     scanf("%d",&code);
//     printf("%c",code);
// return 0;
// }

//Q3
// #include<stdio.h>
// int main(){
//     printf("Enter 3 character to print their ASCII code: ");
//     char ch1,ch2,ch3;
//     scanf("%c\t%c\n%c",&ch1,&ch2,&ch3);
//     printf("ASCII code of %c , %c and %c are %d,%d and %d",ch1,ch2,ch3,ch1,ch2,ch3);
// return 0;
// }

//Q4
// #include<stdio.h>
// int main(){
//     printf("Enter a number to print its last digit: ");
//     int num;
//     scanf("%d",&num);
//     printf("%d",num%10);
// return 0;
// }

//Q5
#include<stdio.h>
int main(){
    printf("Enter a number to print without last digit: ");
    int num;
    scanf("%d",&num);
    printf("%d",num/10);
return 0;
}