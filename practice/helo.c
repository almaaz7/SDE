#include<stdio.h>
        int main( )

{ unsigned int x[4] [3] ={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}}; 

printf("%u,%d, %d", x+3, **(x+3),**(x+2)+3);

}
// int main()
// {
//     int a=3;
//     switch(a){
//         case 0:printf("0");
//         case 3:printf("3");
//         case 5:printf("5");
//         default: printf("rabbit");
//     }

//     a=10;
//      switch(a){
//         case 0:printf("0");break;
//         case 3:printf("3");break;
//         case 5:printf("5");break;
//         default: printf("rabbit");break;
//     }
    
// }