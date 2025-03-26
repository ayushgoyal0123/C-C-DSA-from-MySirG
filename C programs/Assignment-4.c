// //Q1
// #include<stdio.h>
// int main(){
//     printf("%lu",sizeof('A'));
// return 0;
// }

//Q2
// #include<stdio.h>
// int main(){
//     printf("%lu",sizeof(9.88));
// return 0;
// }

//Q3
// #include<stdio.h>
// int main(){
//     char ch='A';
//     ch++;
//     printf("%c",ch);
// return 0;
// }

// //Q4
// #include<stdio.h>
// int main(){
//     int var1=3,var2=33,var3;
//     var3=var1;
//     var1=var2;
//     var2=var1;
//     printf("Swapping done :var1=%d,var2=%d",var1,var2);
// return 0;
// }

// //Q5
// #include<stdio.h>
// int main(){
//     int var1=3,var2=33;
//     var1=var1+var2;
//     var2=var1-var2;
//     var1=var1-var2;
//     printf("Swapping done :var1=%d,var2=%d",var1,var2);
// return 0;
// }

// //Q6
// #include<stdio.h>
// int main(){
//     int var1=3,var2=33;
//     var1=var1*var2;
//     var2=var1/var2;
//     var1=var1/var2;
//     printf("Swapping done :var1=%d,var2=%d",var1,var2);
// return 0;
// }

// //Q7
// #include<stdio.h>
// int main(){
//     int var1=3,var2=33;
//     var1=var1^var2;
//     var2=var1^var2;
//     var1=var1^var2;
//     printf("Swapping done :var1=%d,var2=%d",var1,var2);
// return 0;
// }

//Q8
#include<stdio.h>
int main(){
    int var1=3,var2=33;
    var2 = var1+var2-(var1=var2);
    printf("Swapping done :var1=%d,var2=%d",var1,var2);
return 0;
}