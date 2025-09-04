#include <bits/stdc++.h>
using namespace std;

/* 1. Print 
* * * * * 
* * * * *
* * * * *
* * * * *
* * * * *  
*/
// void print1(){
//     for(int i =0; i< 5; ++i){
//         for(int j =0; j< 5; ++j ){
//             cout << "* " ;   
//         }
//         cout << endl;  
//     }
// }
// int main(){
//     print1();
//     return 0;
// }

/* 2. Print 
* 
* * 
* * * 
* * * *
* * * * *
*/
// void print2(){
//     for(int i = 1; i <= 5; ++i){
//         for(int j = 1; j<=i; ++j){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }
// int main(){
//     print2();
//     return 0;
// }

/* 3.  Print
1 
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/
// void print3(){
//     for(int i = 1; i<=5; ++i){
//         for(int j =1; j<=i; ++j){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
// }
// int main(){
//     print3();
//     return 0;
// }

/* 4. Print
1 
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/
// void print4(){
//     for(int i = 1; i<=5; ++i){
//         for(int j = 1; j<=i; ++j){
//             cout << i << " ";
//         }
//         cout << endl;
//     }
// }
// int main(){
//     print4();
//     return 0;
// }

/* 5. Print
* * * * * 
* * * * 
* * * 
* *
*
*/
// void print5(){
//     for(int i = 1 ; i<=5; ++i){
//         for(int j = 0; j<5-i+1 ; ++j){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }
// int main(){
//     print5();
//     return 0;
// }

/* 6. Print
1 2 3 4 5 
1 2 3 4
1 2 3
1 2
1
*/
// void print6(){
//     for(int i = 1; i<=5; ++i){
//         for(int j= 1; j<=5-i+1; ++j){
//             cout << j <<" ";
//         }
//         cout << endl;
//     }
// }
// int main(){
//     print6();
//     return 0;
// }

/* 7. Print
    *    
   ***
  *****
 *******
*********
*/
// void print7(){
    // for(int i = 0; i<5; ++i){ 
    //     for(int space= 0; space<5-i-1; space++){
    //         cout << " ";
    //     }
    //     for(int j =0; j< 2 *i+1; ++j){
    //         cout << "*";
    //     }
    //     for(int space= 0; space<5-i-1; space++){
    //         cout << " ";
    //     }
    //     cout << endl;
    // }
// }
// int main(){
//     print7();
//     return 0;
// }

/* 8. Print
*********
 *******
  *****
   ***
    * 
*/
// void print8(){
//     for(int i = 0; i<5; ++i){ 
//         for(int space= 0; space<i; space++){
//             cout << " ";
//         }
//         for(int j =0; j<2*5 - (2*i+1); ++j){
//             cout << "*";
//         }
//         for(int space= 0; space<i; space++){
//             cout << " ";
//         }
//         cout << endl;
//     }
// }
// int main(){
//     print8();
//     return 0;
// }

/* 9. Print

    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
    
*/
// void print9(){
//     for(int i = 0; i< 5; ++i){
//         for(int space = 0; space < 5-i-1; space++){
//             cout << " ";
//         }
//         for(int j = 0; j < 2 * i +1; ++j){
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for(int i = 0; i<5; ++i){
//         for(int space = 0; space< i; ++space){
//             cout <<" ";
//         }
//         for(int j = 0; j < 2*5-(2*i+1); ++j){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }
// int main(){
//     print9();
//     return 0;
// }

/* 10. Print

* 
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*

*/
// void print10(){
//      for(int i = 1; i <= 2*5-1; ++i){
//         int star = i;
//         if(i > 5) star = 2*5 - i;
//         for(int j = 1; j<=star; ++j){
//              cout << "*";
//             }
//         cout << endl;
//     }
// }
// int main(){
//     print10();
//     return 0;
// }

/* 11. print
1 
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/
// void print11(){
//     int start;
//     for(int i = 0; i< 5; ++i){
//         if(i%2==0)  start = 1;
//         else start = 0;
//         for(int j = 0; j<=i; ++j){
//             cout << start << " ";
//             start = 1- start;   
//         }
//         cout << endl;
//     }
// }
// int main(){
//     print11();
//     return 0;
// }

/* 12 Print

1      1
12    21
123  321
12344321

*/
// void print12(){
//      for(int i = 1; i <= 4; ++i){
//         //numbers
//         for(int j = 1; j<=i; ++j){
//             cout << j;
//         }
//         //space
//         for(int space =1; space <= 2*4-(2*i); ++space){
//             cout << " ";
//         }
//         //numbers
//         for(int j=i; j>=1; --j ){
//             cout << j;
//         }
//         cout << endl;
//      }
// }
// int main(){
//     print12();
//     return 0;
// }

/* 13 Print
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
*/
// void print13(){
//     int num = 1;
//     for(int i = 1; i<=5; ++i){
//         for(int j = 1; j<=i; ++j){
//             cout << num << " ";
//             num+= 1;
//         }
//         cout << endl;
//     }
// }
// int main(){
//     print13();
//     return 0;
// }

/* 14. Print
A
AB
ABC
ABCD
ABCDE
*/
// void printAlt(){
//     for(int i =0; i<5; ++i){
//         for(char ch = 'A'; ch <='A'+i; ++ch){
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
// }
// void print14(){
//     for(int i =65; i<=69; ++i){
//         for(int j = 65; j<=i; ++j){
//             cout << char(j) << " ";
//         }
//         cout << endl;
//     }
// }
// int main(){
//     print14();
//     printAlt();
//     return 0;
// }

/* 15. Print
A B C D E 
A B C D
A B C
A B
A
*/
// void printAlt1(){
//     for(int i =0; i< 5; ++i){
//         for(char ch = 'A'; ch<= 'A'+(5-i-1); ++ch){
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
// }
// void print15(){
//     for(int i =0; i< 5; ++i){
//         for(char ch = 'A'; ch<= 'E'-i; ++ch){
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
// }
// int main(){
//     printAlt1();
//     print15();
//     return 0;
// }

/* 16. Print
A 
B B
C C C
D D D D
E E E E E
*/
// void print16(){
//     for(int i = 0; i<5; ++i){
//         char ch = 'A'+i;
//         for(int j = 0; j<=i; ++j){
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
// }
// int main(){
//     print16();
//     return 0;
// }

/* 17. Print
   A   
  ABA  
 ABCBA 
ABCDCBA
*/
// void print17(){
//     for(int i = 0; i<4; ++i){
//     //space
//         for(int j = 0; j< 4-i-1; ++j){
//             cout << " ";
//     }
//     //letter        
//         char ch ='A';
//         for(int j = 1; j<=2*i+1; j++){
//             cout << ch ;
//             if(j <= (2*i+1)/2) ch++;
//             else ch--;
//     }
//         for(int j = 0; j< 4-i-1; ++j){
//             cout << " ";
//     }
//     cout << endl;
//     }
// }
// int main(){
//     print17();
//     return 0;
// }

/* 18. Print
 E
 D E
 C D E
 B C D E
 A B C D E
*/
// void print18(){
//     for(int i =0;i<5;++i){
//         for(char ch='E'-i; ch<= 'E'; ch++){
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
// }
// int main(){
//     print18();
//     return 0;
// } 

/* 19. Print
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/
// void print19(){
//     for(int i=0; i<5; ++i){
//         for(int j=0;j<5-i;j++){
//             cout<<'*';
//         }
//         for(int j=0;j<2*i;j++){
//             cout<<' ';
//         }
//         for(int j=0;j<5-i;j++){
//             cout<<'*';
//         }
//         cout<<endl;
//     }
//     for(int i=0; i<5; ++i){
//         for(int j=0;j<1+i;j++){
//             cout<<'*';
//         }
//         for(int j=0;j<(5*2)-(2*(i+1));j++){
//             cout<<' ';
//         }
//         for(int j=0;j<1+i;j++ ){
//             cout<<'*';
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     print19();
//     return 0;
// }  

/* 20. Print
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
*/
// void print20(){
//     int space=2*5 -2;
//     for(int i=1; i<=(2*5)-1; ++i){
//         //stars
//         int stars =i;
//         if(i > 5) stars = 2*5-i;
//         for(int j=0;j<stars; ++j){
//             cout<<"*";
//         }
//         //spaces
//         for(int j=0; j<space; j++){
//             cout <<" ";
//         }
//         for(int j=0;j<stars; ++j){
//             cout<<"*";
//         }
//         cout <<endl;
//         if(i < 5) space-=2;
//         else space+=2;
//     }
// }
// int main(){
//     print20();
//     return 0;
// }  

/* 21. Print
****
*  *
*  *
****
*/
// void print21(){
//     for(int i=0;i<4;++i){
//         for(int j=0;j<4;j++){
//             if(i==0 || j==0 || i==4-1 || j==4-1){
//                 cout <<"*";
//             }else cout <<" ";
//         }
//         cout <<endl;
//     }
// }
// int main(){
//     print21();
//     return 0;
// }  

/* 22. Print
4444444
4333334
4322234
4321234
4322234
4333334
4444444
*/
// void print22(){
//     for(int i =0; i<2*4-1; ++i){
//         for(int j=0; j<2*4-1 ; ++j){
//             int top=i;
//             int left = j;
//             int right = (2*4-2)-j;        
//             int bottom = (2*4-2)-i;     
//             cout << (4 - min(min(top,bottom),min(left,right)));
//         } 
//         cout << endl;
//     }
// }
// int main(){
//     print22();
//     return 0;
// }  