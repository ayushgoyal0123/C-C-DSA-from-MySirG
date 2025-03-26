// //Q1
// #include<stdio.h>
// int main(){
//     int number;
//     printf("Enter a number to check it is positive, Negative or Zero: ");
//     scanf("%d",&number);
//     printf(number>0?"Positive":number<0?"Negative":"Zero");
// return 0;
// }

// //Q2
// #include<stdio.h>
// int main(){
//     char character;
//     printf("Enter a character to check it is Alphabet(uppercase or lowercase) or Digit or Special character: ");
//     scanf("%c",&character);
//     printf(character>='A'&&character<='Z'? "Uppercase Alphabet":character>='a'&&character<='z'? "Lowercase Alphabet": character>='0'&&character<='9'? "Digit":"Special Character");
// return 0;
// }

// //Q3
// #include<stdio.h>
// int main(){
//     int side1,side2,side3;
//     printf("Enter the sides of a triangle to know it is valid or not: ");
//     scanf("%d%d%d",&side1,&side2,&side3);
//     printf(side1+side2>side3 && side2+side3>side1 && side1+side3>side2 ? "Valid Triangle":"Invalid Triangle");
// return 0;
// }

//Q4
#include<stdio.h>
int main(){
    int month;
    printf("Enter the month number to know the days in that month: ");
    scanf("%d",&month);
    printf(month==2?"28 or 29 days" : month==4 ||month==6 || month==9 ||month==11?"30 days":"31 days");
    // OR printf((month <=7 && month%2) || (month >=8 && month%2==0) ? 31 days : (month<=6 && month%2==0) || (month >=9 && month%2)?"30 days":"28 days");
    return 0;
}