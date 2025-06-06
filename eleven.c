#include<stdio.h>
#include<stdlib.h>

// int main(){
//     printf("%d \n" , sizeof(int));
//     printf("%d \n" , sizeof(float));
//     printf("%d \n" , sizeof(char));

//     return 0;
// }

//_____________________________________________________

/* Malloc() ---> memory allocation*/

// int main(){
//     int *ptr ;
//     ptr = (int*) malloc (5 * sizeof(int));

//     ptr[0] = 1;
//     ptr[1] = 2;
//     ptr[2] = 3;
//     ptr[3] = 4;
//     ptr[4] = 5;

//     for(int i=0 ; i<5 ; i++){
//         printf("%d \n" , ptr[i]);
//     }

//     return 0;
// }

//____________________________________________

/*Write a program to allocate memory to store 5 prices*/

// int main(){

//     float *ptr;
//     ptr = (float*) malloc (5 * sizeof(float));

//     ptr[0] = 1;
//     ptr[1] = 2;
//     ptr[2] = 3;
//     ptr[3] = 4;
//     ptr[4] = 5;

//     for (int i = 0 ; i<5 ; i++){
//         printf("%f \n" , ptr[i]);

//     }
//     return 0;
// }

//____________________________________________

/*calloc() ---> continous allocation*/

// int main(){
//     float *ptr ;
//     ptr = (float*) calloc(5 , sizeof(float));

//     for(int i=0 ; i<5 ; i++){
//         printf("%f \n" , ptr[i]);
//     }

//     return 0;
// }

//________________________________________

/*WAP to allocate memory of size n , where n is enter by user*/

// int main(){
//     int *ptr ;
//     int n;
//     printf("Enter n :");
//     scanf("%d" , &n);

//     ptr =(int *) calloc (n , sizeof(int ));

//     for(int i=0 ; i<n ; i++){
//         printf("%d \n" , ptr[i]);
//     }
//     return 0;

// }

//________________________________________

/*Free()*/

// int main(){
//     int *ptr ;
//     int n;
//     printf("Enter n :");
//     scanf("%d" , &n);

//     ptr =(int *) calloc (n , sizeof(int ));
//     for(int i=0 ; i<n ; i++){
//         printf("%d \n" , ptr[i]);
//     }

//     free(ptr);

//     ptr =(int *) calloc (2 , sizeof(int ));
//     for(int i=0 ; i<2 ; i++){
//         printf("%d \n" , ptr[i]);
//     }

//     return 0;
// }

// _____________________________________________

/* Allocate memory for 5 numbers . then dynamically increase it to 8 numbers*/

// int main(){
//     int  *ptr ;
//     ptr = (int *) calloc (5 , sizeof(int ));

//     printf("Enter number (5) = ");
//     for(int i = 0 ; i<5 ; i++){
//         scanf("%d" , &ptr[i]);
//     }

//     ptr = realloc (ptr , 8);

//     printf("Enter number (8) =  ");
//     for(int i = 0 ; i<8 ; i++){
//         scanf("%d \n" , &ptr[i]);
//     }

//     //print
//     for(int i = 0 ; i<8 ; i++){
//         printf("Number %d is %d \n  " ,i , ptr[i]);   
//     }
// }

// ____________________________________________

/*Create an Array of size 5 (using calloc) and enter its value from the user*/

// int main(){
//     int *ptr;
//     ptr = (int *) calloc (5 , sizeof(int ));

//     printf("Enter Number (5) = ");
//     for(int i=0 ; i<5 ; i++){
//         scanf("%d" , &ptr[i]);
//     }

//     //print

//     for(int i=0 ; i<5 ; i++){
//         printf("Number %d is %d \n" , i , ptr[i]);
//     }

//     return 0;
// }

// ___________________________________________

/*Allocate memory to store first 5 odd numbers , then reallocate it to store first 6 even number*/

// int main(){
//     int *ptr;
//     ptr = (int *) calloc (5 , sizeof(int));
//     ptr[0] = 1;
//         ptr[1] = 3;
//             ptr[2] = 5;
//                 ptr[3] = 7;
//                     ptr[4] = 9;
//     for(int i=0 ; i<5 ; i++){
//         printf("%d \n" , ptr[i]);
//     }
//     printf("\n");

//     ptr = realloc(ptr , 6);
//     ptr[0] = 2 ;
//         ptr[1] = 4;
//             ptr[2] = 6;
//                 ptr[3] = 8;
//                     ptr[4] = 10;
//                         ptr[5] = 12;
//     for(int i=0 ; i<6 ; i++){
//         printf("%d \n" , ptr[i]);
//     }

//     free(ptr);
// return 0;
// }