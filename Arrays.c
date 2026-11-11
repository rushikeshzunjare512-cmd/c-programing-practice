// #include<stdio.h>
// int main(){
//     float price[3];
//     printf("enter a 3 price: ");
//     scanf("%f\n",&price[0]);
//     scanf("%f\n",&price[1]);
//     scanf("%f\n",&price[2]);

//     printf("total price 1: %f\n",price[0]+(price[0]*0.18));
//     printf("total price 2: %f\n",price[1]+(price[1]*0.18));
//     printf("total price 3: %f\n",price[2]+(price[2]*0.18));




//     return 0;
// }

// #include<stdio.h>
// int main(){
//    float price=20.00;
//    float *ptr=&price;
//    printf("ptr= %u\n",ptr);
//    ptr++;
//    printf("ptr= %u\n",ptr);
   

//     return 0;
// }
#include<stdio.h>
int main(){
    int num1=10;
    int _num2=20;
    int *ptr=&num1;
    int *_ptr=&_num2;

    printf("diffrence= %d\n",ptr-_ptr);
    printf("comparision= %d\n",ptr == _ptr);


    return 0;
}