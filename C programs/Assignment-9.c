// //Q1
// #include<stdio.h>
// int main(){
//     int cp,sp;
//     float perc;
//     printf("Enter Cost price and selling price of a product");
//     scanf("%d%d",&cp,&sp);
//     perc=(sp-cp)*100.0/cp;
//     perc>=0?printf("Profit is %0.2f%%",perc):printf("Loss is %0.2f%%",perc);
// return 0;
// }


// //Q2
// #include<stdio.h>
// int main(){
//     int marks1,marks2,marks3,marks4,marks5;
//     printf("Enter marks of 5 subjects: ");
//     scanf("%d%d%d%d%d",&marks1,&marks2,&marks3,&marks4,&marks5);
//     printf(marks1<33 || marks2<33 || marks3<33 || marks4<33 ||marks5<33 ? "Failed":"Passed");
// return 0;
// }

// //Q3
// #include<stdio.h>
// int main(){
//     char ch;
//     printf("Enter a character to check it is uppercase or Lowercase: ");
//     scanf("%c",&ch);
//     printf(ch>='A'&& ch<='Z'? "Uppercase":ch>='a'&& ch<='z'?"Lowercase":"");
// return 0;
// }


// //Q4
// #include<stdio.h>
// int main(){
//     int number;
//     printf("Enter a number to check it is divisible by 3 and 2: ");
//     scanf("%d",&number);
//     printf(number%3==0 && number%2==0? "YES":"NO");
// return 0;
// }

//Q5
#include<stdio.h>
int main(){
    int number;
    printf("Enter a number to check it is divisible by 7 or 3: ");
    scanf("%d",&number);
    printf(number%7==0 || number%3==0? "YES":"NO");
return 0;
}
