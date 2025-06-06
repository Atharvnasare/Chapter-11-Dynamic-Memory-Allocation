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

int main(){
    int *ptr ;
    int n;
    printf("Enter n :");
    scanf("%d" , &n);

    ptr =(int *) calloc (n , sizeof(int ));

    for(int i=0 ; i<n ; i++){
        printf("%d \n" , ptr[i]);
    }
    return 0;
    
}