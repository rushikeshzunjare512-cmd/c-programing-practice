//  #include<stdio.h>
//  int main(){
//     int age=22;
//     int *ptr = &age; 

//     //value
//     printf("%d\n",age);
//     printf("%d\n",*ptr);
//     printf("%d\n",*(&age));

//     // address

//     printf("%u\n",&age);
//     printf("%u\n",&(*ptr));
//     printf("%u\n",&(*(&age)));

//     return 0;
// }



// #include<stdio.h>
// int main(){
    // int *ptr;
    // int x;

    // ptr=&x;
    // *ptr=0;

    // printf("x is: %d\n",x);
    // printf("*ptr is: %d\n",*ptr);


    // *ptr+=5;
    // printf("x is= %d\n",x);
    // printf("*ptr is= %d\n",*ptr);


    // (*ptr)++;
    // printf("x is= %d\n",x);
    // printf("*ptr is= %d\n",*ptr);


//     int i=6;
//     int *ptr=&i;
//     int **pptr=&ptr;

//     printf("%d\n",**pptr);

//     return 0;
// }

// #include<stdio.h>


    // void square(int n);
    // void _square(int *n);

    // int main(){

    //     int number=4;
    //     square(number);
    //     printf("number is %d\n",number);

    //     _square(&number);
    //     printf("number is: %d\n",number);

    //     return 0;


    // }


    // void square(int n){
    //     n=n*n;
    //     printf("%d\n",n);
    // }

    // void _square(int *n){
    //     (*n)=(*n) * (*n);
    //     printf("_square is = %d\n",*n);
    // }
  

   // #include<stdio.h>

    // int swap(int a, int b);
    // int _swap(int *a,int *b);

    // int main(){
    //     int x=3,y=5;
    //     _swap(&x,&y);
    //     printf("x= %d & y= %d \n",x,y);

    // }

    // // call by refrance

    // int _swap(int *a,int *b){
    //     int t=*a;
    //     *a=*b;
    //     *b=t;

    // }

    // // call by value

    // int swap(int a,int b){
    //     int t=a;
    //     a=b;
    //     b=t;
    //     printf("a= %d & b= %d\n",a,b);
    // }


    // int printaddress(int n);

    // int main(){
    //     int n=4;
    //     printaddress(n);
    //     printf("address is= %u \n",&n);


    //     return 0;
    // }

    // int printaddress(int n){
    //    printf("address is= %u \n",&n);
    // }

    //  void dowork(int a,int b,int *sum,int *prod,int *avg);

    // int main(){

    //     int a=4,b=6;
    //     int sum,prod,avg;
    //     dowork(a,b,&sum,&prod,&avg);
    //     printf("sum: %d,prod: %d ,avg: %d \n",sum,prod,avg);


    //     return 0;
    // }

    // void dowork(int a,int b,int *sum,int *prod,int *avg){
    //     *sum=a+b;
    //     *prod=a*b;
    //     *avg=(a+b)/2;
    // // }

    // int main(){
    //     int a,b;
    //     int *p1,*p2;
    //     printf("enter the two number: ");
    //     scanf("%d %d",&a,&b);

    //     p1=&a;
    //     p2=&b;

    //     if (*p1 > *p2){
    //         printf("maximum numbe: p1 \n",*p1);
    //     } else if (*p2 > *p1){
    //         printf(" maximum number: p2 \n",*p2);
    //     } else {
    //         printf("both number are equal");
    //     }


    //     return 0;
    // }



    // #include<stdio.h>
    // int main(){

    //     int *ptr;
    //     int x;

    //      ptr=&x;
    //      *ptr=0;

    //      printf("value of x= %d\n",x);
    //      printf("value of *ptr= %d\n",*ptr);

    //      *ptr+=5;
    //     printf("x: %d\n",x);
    //     printf("*ptr: %d\n",*ptr);






    //     return 0;
    // }




// #include<stdio.h>    
// int main(){
//     int rahul,amit;
//     int *p1,*p2;

//     printf("enter a rahul mark: \n");
//     scanf("%d",&rahul);

//     printf("enter a amit mark: \n");
//     scanf("%d",&amit);

//     p1=&rahul;
//     p2=&amit;

//     if(*p1 > *p2){
//         printf("more mark of rahul: %d\n",*p1);
//     } else if (*p2 > *p1){
//         printf("more mark of amit: %d\n",*p2);
//     } else {
//         printf("both are equal mark");
//     }


//int main(){
    // int s1,s2;
    // int *p1,*p2;

    // printf("enter mark s1: ");
    // scanf("%d",&s1);

    // printf("enter mark s2: ");
    // scanf("%d",&s2);

    // p1=&s1;
    // p2=&s2;

    // if(*p1 > *p2){
    //     printf("s1 student mark: %d\n ",*p1);
    // }
    // else if(*p2 > *p1){
    //     printf("s2 student mark: %d\n",*p2);
    // } else {
    //     printf(" s1 and s2 student mark are same");
    // }
    
  //  return 0;


//   #include<stdio.h>
//   int main(){
//       int pusad,sangli;
//       int *t1,*t2;

//       printf("enter a temp of pusad : ");
//       scanf("%d",&pusad);

//       printf("enter a temp of sangli: ");
//       scanf("%d",&sangli);

//       t1=&pusad;
//       t2=&sangli;

//       if(*t1 > *t2){
//         printf("temp of pusad is high: %d\n",*t1);
//       } else if (*t2 > *t1){
//         printf("temp of sangli is high: %d\n",*t2);
//       } else {
//         printf("temp are both same: %d\n",*t1==*t2);
//       }


// //     return 0;
// //   }

// #include<stdio.h>
// int main(){
//     int balance;
//     int *p;

//     printf("enter a you balance: ");
//     scanf("%d",&balance);

//     p=&balance;

//     printf("old balance: %d\n",*p);

//     *p=*p+500;

//     printf("new balance: %d\n",*p);

//     return 0;
// }

//#include<stdio.h>
//int main(){
  //  int  aadhar[5];

    //input
//     int *ptr=&aadhar[0];
//     for(int i=0; i<=5; i++){
//         printf("%d index: 15",i);
//         scanf("%d : ",(ptr+i));
//     }

//     //output
//    for(int i=0; i<=5; i++){
//       printf("%d index = %d \n",i,*(ptr+i));
//    }

//     return 0;
// }


#include<stdio.h>
 
int countOdd(int arr[], int n);


int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    printf("%d",countOdd(arr,16));

    return 0;
}


int countOdd(int arr[], int n){
    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i] % 2 != 0){
           count++; 
        }
    }

    return count;
}