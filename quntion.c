// // //basic quntion 

// // #include<stdio.h>
// // // int main(){
// // //     int num[]={1,2,3,4,-5,-3,-4};
// // //     int pos=0,nag=0,zero=0;
// // //     for(int i=0; i<=7; i++){
// // //         if(num[i]>0){
// // //             printf("%d\n",pos++);
// // //         }else {
// // //             printf("%d\n",nag);
// // //         }
// // //     }

   

// // //    return 0;
// // // }

// // // void calculatesum(int x,int y){
// // //     int sum=x+y;
// // //     printf("sum is %d+%d is: %d \n",x,y,sum);
// // // }

// // // int main(){
// // //     calculatesum(5,2);
// // //     calculatesum(6,3);
// // //     calculatesum(8,6);
// // //     calculatesum(9.2);
// // //     return 0;
// // // }

// // //   

// // // void calculateprice(float value);

// // // int main(){
// // //    float value=2.15;
// // //    calculateprice(value);
// // //    return 0;
// // // }
// // //  void calculateprice(float value){
// // //     value=value+(0.59*value);
// // //     printf("final price is: %f",value);
// // //  }
 

// // // void squrenumber(int n); //funtion diclaration

// // // int main(){
// // //    int n;
// // //    printf("enter a number: ");
// // //    scanf("%d\n",&n);

// // //    squrenumber(n);  //funtion call
// // //    return 0;
// // // }

// // // void squrenumber(int n){
// // //     n=n*n;
// // //     printf("the squre is: %d",n);
// // // }

// // float areasqure(float side);
// // float areacircle(float radius);
// // float arearectangle(float a,float b);  //funtion diclaration

// // int main(){
// //     float a=10.2;
// //     float b=6.2;
// //     printf("the area: %f",arearectangle(a,b));  //funtion call
// //     return 0;
// // }

// // float areasqure(float side){
// //     return side*side;
// // }
// // float areacircle(float radius){
// //     return radius*radius*3.14;
// // }
// // float arearectangle(float a,float b){
// //     return a*b;
// // }

// // #include<stdio.h>

// // int fact(int n);

// // int main(){
// //     printf("enter a factorail: %d",fact(8));
// //     return 0;
// // } 

// // int fact(int n){
// //     if(n==0){
// //         return 1;
// //     }
// //     int factnm1=fact(n-1);
// //     int Fact=factnm1*n;
// //     return Fact;
// // }

// // float convertTem(float celsius);

// // int main(){
// //    float far=convertTem(52);
// //    printf("far: %f",far);

// //     return 0;
// // }

// // float convertTem(float celsius){
// //     int far = celsius*9/5 + 32;
// //     return 0;
// // }

// // #include<stdio.h>
// // int main(){
// //     int choice;
// //     int balance=5000,amount;

// //     printf("\n____ATM MENU SYSTEM____\n");
// //     printf("1.check a balance\n");
// //     printf("2.diposit money\n");
// //     printf("3.withdraw money\n");
// //     printf("4.exit\n");
    
// //     printf("enter a choice");
// //     scanf("%d\n",&choice);
    
// //     switch(choice){
// //         case 1:
// //         printf("balance=Rs.%2f",balance);
// //         break;
        
// //         case 2:
// //         printf("enter a diposit amount: ");
// //         scanf("%f\n",&amount);
// //         if(balance>0){
// //             balance+=amount;
// //             printf("new balance=Rs.%2f",balance);
// //         } else {
// //             printf("invalid amount");
// //         }
// //         break;
// //         case 3:
// //         printf("enter a withdraw amount: ");
// //         scanf("%f\n",&amount);
// //         if(amount<=0){
// //             printf("invalid amount");
// //         } else if(amount>balance){
// //             printf("insufficient balance");
// //         } else {
// //             balance-=amount;
// //             printf("new balance = Rs.%2f",balance);
// //         }
// //         break;
        
// //         case 4:
// //         printf("thank you using atm");
// //         break;
// //         default:
// //         printf("invalid choice");
// //         break;
// //     }
// //     return 0;
// // }
//   #include<stdio.h>
   
//   // int calcpercentage(int math,int sincen,int hindi);

//   // int main(){
//   //  int math=66;
//   //  int sincen=96;
//   //  int hindi=94;

//   //  printf("percentage: %d",calcpercentage(math,sincen,hindi));

//   //  return 0;
//   // }


//   // int calcpercentage(int math,int sincen,int hindi){
//   //   return (math + sincen + hindi)/3 ;
//   // }


//   // #include<stdio.h>
//   // int main(){
//   //     int fact=1,n;
//   //     printf("enter a number: ");
//   //     scanf("%d\n",&n);

//   //     while(n>0){
//   //       fact=fact*n;
//   //       printf("fact is:  %d\n",fact);
//   //       n--;
//   //     }



//   //   return 0;
//   // }

//   // #include<stdio.h>
//   //  int main(){
//   //      int i=1,j;
      
//   //      while(i<=5){
//   //       j=1;
//   //       while(j<=i){
//   //         printf("*");
//   //         j++;
//   //       }

//   //       printf("\n");
//   //       i++;
//   //      }





//   //   return 0;
//   // //  }

//   // #include<stdio.h>
//   // int main(){
//   //     int choice,amount,balance=5000;

//   //     printf("\n___ATM SYTEM____\n");
     
//   //     printf("1.withdrawal\n");
//   //      printf("enter a choice\n");
//   //     scanf("%d\n",&choice);
//   //     printf("enter a amount: ");
//   //     scanf("%d\n",&amount);
      
//   //     if(amount < balance) {
//   //       balance-=amount;
//   //       printf("balnce is: %d\n",balance);
//   //     } else {
//   //       printf("invalid balance");
//   //     }



//   //   return 0;
//   // }

//   // #include<stdio.h>
//   // int main(){
//   //     int tem;
//   //     printf("enter a tempreture: ");
//   //     scanf("%d\n",&tem);

//   //     if(tem > 35){
//   //       printf("hot tempreture\n");
//   //     } else {
//   //       printf("cold tempreture\n");
//   //     }




//   //   return 0;
//   // }



//   // #include<stdio.h>
//   // int main(){
//   //   int unit,bill=0,charge=5;
//   //   printf("enter a unit: ");
//   //   scanf("%d\n",&unit);

//   //   while(unit>0){
//   //     bill=bill+charge;
//   //     unit--;
//   //   } 

//   //   printf("total bill is: rs.%d\n",bill);



//   //   return 0;
//   // }

// #include<stdio.h>
// int main(){
//     printf("\n_____________________\n");
//     printf("enter a name: \n");
//     printf("enter a door: \n");
//     printf("entr a city: \n");
//     printf("enter a pin cod: \n");
//     printf("\n______________________\n")]\\\\\\\\\\\\\\\\\



//   return 0;
// }

// #include<stdio.h>
// int main(){
//     int i,j;
//     // outer loop 
//     for(int i=1; i<=4; i++){

//       //iner loop

//       for(int j=1; j<=i; j++){
//         printf("*");
//       }

//       printf("\n");


// //     }
    




//   return 0;
// }




// #include<stdio.h>

// void add(int a ,int b);
// void sub(int a ,int b);
// void multi(int a ,int b);
// void divi(int a ,int b);

// int main(){
//   int a,b;
//   printf("enter a  two number: ");
//   scanf("%d %d %d\n",&a,&b);

//   add(a,b);
//   sub(a,b);
//   multi(a,b);
//   divi(a,b);
//    add(a,b);
//   sub(a,b);
//   multi(a,b);
//   divi(a,b);
//    add(a,b);
//   sub(a,b);
//   multi(a,b);
//   divi(a,b);
//    add(a,b);
//   sub(a,b);
//   multi(a,b);
//   divi(a,b);
//   return 0;

// }

// void add(int a, int b){
//   printf("addition: %d\n",a+b);
// }
// void sub(int a, int b){
//   printf("subtraction: %d\n",a-b);
// }
// void multi(int a, int b){
//   printf("multiplication: %d\n",a*b);
// }
// void divi(int a, int b){
//   printf("division: %d\n",a/b);
// }


// #include<stdio.h>
// void gretestnum(int a,int b,int c);
// int main(){
//   int a,b,c;
//   printf("enter a three number: ");
//   scanf("%d %d %d \n",&a,&b,&c);

//   gretestnum(a,b,c);
//   return 0;
// }

// void gretestnum(int a,int b,int c){
//   if(a>b && a>c){
//     printf("a is gretest number \n");
//   } else if(b>a && b>c){
//     printf("b is gretest number \n");
//   } else if (c>a && c>b){
//     printf("c is gretest number \n");
//   } else {
//     printf("invalid number \n");
//   }

// // }

// #include<stdio.h>
// void intrest(float p, float r , float t,float s);
// int main(){
//   float  p, r,t,s;
//  printf("enter a value p: \n");
//  scanf("%f\n",&p);
//  printf("enter a value r: \n");
//  scanf("%f\n",&r);
//  printf("enter a value t: \n");
//  scanf("%f\n",&t);

//  intrest(p,r,t,s);
//  intrest(p,r,t,s);
//  intrest(p,r,t,s);
//  intrest(p,r,t,s);
//  return 0;
// }

// void intrest(float p,float r,float t,float s){
//   s=p*r*t/100;
//   printf("simple intrest: %f\n",s);
// }

#include<stdio.h>

void printnumber(int *arr, int n);
void _printnumber(int arr[],int n);

int main(){

    int arr[]={1,2,3,4,5,6};
    printnumber(arr,6);
    _printnumber(arr,6);
    return 0;
}

void printnumber(int *arr,int n){
    for(int i=0; i<n; i++){
    printf("%d: %d \n",i,arr[i]);
}
}

void _printnumber(int arr[],int n){
    for(int i=0; i<n; i++){
    printf("%d: %d\n",i,arr[i]);
    }
}