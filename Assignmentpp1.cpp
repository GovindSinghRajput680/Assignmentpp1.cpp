#include<iostream>
using namespace std;
int main(){
//Q 1 :
// int n ;
// cout<<"Enter number of rows : ";
// cin>>n;
// for(int i = 1;i <= n; i++){
//     for(int j = 1; j <= n; j++){cout<<i<<" ";
// }
// cout<<endl;


// }

//Q 2:
// int n ;
// cout<<"Enter number of rows : ";
// cin>>n;
// for(int i = 1;i <= n; i++){for(int j =1; j<= (n + 1 - i);j++){
//     cout<<j<<" ";
// }
// cout<<endl;i
// }
//Q 3 :
// int n ;
// cout<<"Enter number of rows  : ";
// cin>>n;
// for(int i = 1;i <= n; i++){for(char j = 'A'; j<= 64 + i;j++){cout<<j <<" ";
// }
// cout<<endl;
// }

//Q 4 :
// int n ;
// cout<<"Enter number of rows  : ";
// cin>>n;
// for(int i = 1;i <= n; i++){if(i % 2 != 0){
//     for(char j = 'A'; j<= 65 + i;j++){cout<<j <<" ";
// }
// }
// else{for(int k = 1; k<= (i + 1); k++){cout<<k<<" ";

// }
// }
// cout<<endl;
// }
//Q 5 : 
// int n ;
// cout<<"Enter the value for n : ";
// cin>>n;
// int a;
// for(int i = 1;i <= (2*n + 1); i++){if (i <= n){a = i;}
// else { a = (2*n - i );}
//     for(int j = 1; j <= a; j++){
//         cout<<"*";
//     }

// cout<<endl;
// }
//Q 6
// int m , n ;
// cout<<"Enter the value for m & n respectively : ";
// cin>>m>>n;
// for(int i = 1; i<=m; i++){

//     for(int j = 1; j<= n; j++){

// if(i == 1 || i == m || j == 1 || j == n){
//     cout<<"*";
// }
// else {cout<<" ";}
//     }
//     cout<<endl;
// }
// Q 7 
// int n;
// cout<<"Enter the value for n : " ;
// cin>> n;
// for(int i = 1; i<= n ; i++){
// for(int j = 1; j <= n-i ; j++){cout<<" ";
// }
// for(int k = (n - i +1) ; k <= (2*n -i );k++ ){cout<<"*";

// }
 
// cout<<endl;
// }
//Q 8:
// int n ;
// cout<<"Enter the value for n: ";
// cin>>n;
// for(int i = 1; i <= n;i++){
//     for(int j =1; j <=i;j++){
//         cout<<j<<" ";
//     }cout<<endl;
// }
//Q 9:
// int n;
// cout<<"Enter the value for n : ";
// cin>>n;
// for(int i = 1;i <= n;i++){
//     for(int j =  1; j<= (n-i) ; j++){
//         cout<<"  ";
//     }
//     for(int k = 65; k <= (64+ i); k++ ){
//         cout<<char(k)<<" ";
//     }
//     cout<<endl;

// }
// Q 10 -
// int n;
// cout<<"Enter the value for n : ";
// cin>>n;
// for(int i =1; i <= n; i++){
//     for(int j = i; j>= 1 ;j--){
//         cout<<j<<" ";
//     }
//     cout<<endl;
// }
// Q 11 -
int n , a ;
cout<<"Enter the value for n : ";
cin>>n;
for(int i = 1; i <= (2*n -1); i++){if(i <= n ){a = n -i;}
else{ a = (i -n);}
for(int j = 1 ; j <= a; j++)
{cout<<" ";}
for(int k = 1; k<= (n -a);k++){
    cout<<"*";
}
cout<<endl ;
}}