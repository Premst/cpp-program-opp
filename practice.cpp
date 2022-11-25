// Q.1 Write a program to enter the 3 matrix element and print them.

// #include<iostream>
// #include<stdio.h>
// using namespace std;
// int main()
// {
//     int a[10], i;
//     cout<<"Enter ten array element : \n ";
//     for(i=0; i<10; i++)
//     {
//         cin>>a[i];
//     }
//     printf("\n Displaying array element : \n");
//     for(i=0; i<10; i++)
//     {
//         cout<<a[i]<<"\t";
//     }
// return 0;
// }

// Q2. print matrix element using class function

//#include<iostream>
// using namespace std;
// class matrix
// {
// public:
//     int a[10];
//     void input()
//     {
//         cout << "\n Enter 10 element : ";
//         for (int i = 0; i < 10; i++)
//         {
//             cin >> a[i];
//         }
//     }
//     void display()
//     {
//         cout << "\n Displaying 10 element : ";
//         for (int i = 0; i < 10; i++)
//         {
//             cout << a[i] << " ";
//         }
//     }
// };
// int main()
// {
//     matrix abc;
//     abc.input();
//     abc.display();
//     return 0;
// }

// Q3. write a program to enter 3*3 matrix and find multiplication

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[3][3], b[3][3], mult[3][3], i, j, t;
//     cout<<"Enter 3*3 matrix element : \n";
//     for(i=0; i<3; i++)
//     {
//         for(j=0; j<3; j++)
//         {
//             cin>>a[i][j];
//         }
//     }
//     cout<<"\n Display 3*3 matrix element : \n";
//         for(i=0; i<3; i++)
//     {
//         for(j=0; j<3; j++)
//         {
//            cout<<a[i][j]<<"\t";
//         }
//         cout<<"\n";
//     }
//         cout<<"Enter 3*3 matrix 2nd element : \n";
//     for(i=0; i<3; i++)
//     {
//         for(j=0; j<3; j++)
//         {
//             cin>>b[i][j];
//         }
//     }
//     cout<<"\n Display 3*3 matrix 2nd element : \n";
//         for(i=0; i<3; i++)
//     {
//         for(j=0; j<3; j++)
//         {
//            cout<<b[i][j]<<"\t";
//         }
//         cout<<"\n";
//     }
//     cout<<"\n Multiplaction \n";
//     for(i=0; i<3; i++)
//     {
//         for(j=0; j<3; j++)
//         {
//            mult[i][j]=0;
//            for(t=0; t<3; t++)
//            {
//                mult[i][j]= mult[i][j]+a[i][t]*b[t][j];
//            }
//         cout<<mult[i][j]<<"\t";
//         }
//        cout<<"\n";
//     }
//     return 0;
// }

// Q4. Write a program to print row and coloum wise of matrix.

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a[3][3], i, j;
//     cout << "\n Enter 3*3 matrix : \n";
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             cin >> a[i][j];
//         }
//     }
//     cout << "\n Displaying row wise matrix element : \n";
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             cout << a[i][j] << "\t";
//         }
//         cout << "\n";
//     }
//      cout << "\n Displaying coloum wise matrix element : \n";
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             cout << a[j][i] << "\t";
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// Q .5 Write a program to find fabbonices series.

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, i = 1, f1 = -1, f2 = 1, f3;
//     cout << "\n Enter nth number : ";
//     cin >> n;
//     while (i <= n)
//     {
//         f3 = f1 + f2;
//         cout << f3 << ",";
//         f1 = f2;
//         f2 = f3;
//         i++;
//     }
//     return 0;
// }

// Q .6 Write a program to find palindrom or not .

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, rev = 0, r, t;
//     cout << "Enter any number : ";
//     cin >> n;
//     t = n;
//     while (n != 0)
//     {
//         r = n % 10;
//         rev = rev * 10 + r;
//         n = n / 10;
//     }
//     if (t == rev)
//     {
//         cout << "\n Palindorm";
//     }
//     else
//     {
//         cout << "\n Not Palindrom";
//     }
//     return 0;
// }

// Q .7 Write a program to find armstrom or not .

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, s = 0, r, t;
//     cout << "Enter any number : ";
//     cin >> n;
//     t = n;
//     while (n != 0)
//     {
//         r = n % 10;
//         s = s + r * r * r;
//         n = n / 10;
//     }
//     if (t == s)
//     {
//         cout << "\n Armstrom";
//     }
//     else
//     {
//         cout << "\n Not Armstrom";
//     }
//     return 0;
// }

// Q.8 Write a program to find the factorial no.

// #include <iostream>
// using namespace std;
// class factorial
// {
//     public:
//     unsigned long long int n,s=1;
//      void input()
//      {
//         cout<<"Enter your no. ";
//         cin>>n;
//      }
//      void compute()
//      {
//         while(n!=0){
//             s=s*n;
//             n--;
//         }
//      }
//      void display()
//      {
//         cout<<"\n Factorial no. "<<s;
//      }
// };
// int main()
// {
//     factorial abc;
//     abc.input();
//     abc.compute();
//     abc.display();
//     return 0;
// }

// Q.9 Write a program to find the permutation .
// Permutations when all the objects are distinct.
//       nPr=n!/(n-r)!

// #include<iostream>
// using namespace std;
// class permutation
// {
//     public:
//     unsigned long long int n, r, s=1, q, j=1;
//     float f;
//      void input()
//      {
//         cout<<"Enter a no. for n : ";
//         cin>>n;
//         cout<<"\nEnter a no. for r : ";
//         cin>>r;
//      }
//      void compute()
//      {
//         q=n-r;
//         while(n!=0){
//             s=s*n;
//             n--;
//         }
//         while(q!=0){
//             j=j*q;
//             q--;
//         }
//         f=s/j;
//      }
//      void display()
//      {
//         cout<<"\nThe value of permutation is = "<<f;
//      }
// };
// int main()
// {
//     permutation abc;
//     abc.input();
//     abc.compute();
//     abc.display();
// }

// Q.10 Write a program to find the combination.
//       nCr = nPr/r!  or  = n!/r!(n-r)!

// #include<iostream>
// using namespace std;
// int main()
// {
//     long long int n, r, sum=1, s=1,ss=1, a, b;
//     float total;
//     cout<<"Enter a no. for n : ";
//     cin>>n;
//     cout<<"\nEnter a no. for r : ";
//     cin>>r;
//     a=n-r;
//     while(n!=0){
//         s=s*n;
//         n--;
//     }
//     while(a!=0){
//         sum=sum*a;
//         a--;
//     }
//     while(r!=0){
//         ss=ss*r;
//         r--;
//     }
//     b=ss*sum;
//     total=s/b;
//     cout<<"\n The combination is = "<<total;
//    return 0;
// }

// Q.11 Write a program to find the sum of series without using any loop.
//      sum=n(n+1)/2

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n, s;
//     cout<<"Enter no for sum of series 1 to n : ";
//     cin>>n;
//     s=n*(n+1)/2;
//     cout<<"\n The sum of series : "<<s;
//    return 0;
// }

// Q.12 Write a program to find the sum of square of series for n square.
//      n(n+1)(2n+1)/6
// alart:I am not clear that this question.

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     float sum;
//     cout<<"Enter a number for square sum of series : ";
//     cin>>n;
//     sum=n*(n+1)*(2*n+1)/6;
//     cout<<"\n The sum of square of series = "<<sum;
//    return 0;
// }

// Q.13 Type casting

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=232;
//     float b=45.22;
//     cout<<(float) a/34<<endl;
//     cout<<(int) b;
//    return 0;
// }

// Q.14 check no. is prime or not.

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n, i;
//     cin>>n;
//     for(i=2; i<n; i++){
//         if(n%i==0){
//             cout<<"Not Prime";
//             break;
//         }
//     }
//     if(i==n){
//             cout<<"Prime";
//         }
//    return 0;
// }

// Q.15 Vowel or Consonant

// #include<iostream>
// using namespace std;
// int main()
// {
//     char c;
//     cin>>c;
//     if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U' ){
//         cout<<"Vowel"<<endl;
//     }
//     else{
//         cout<<"Consonant"<<endl;
//     }
//    return 0;
// }

// Q.16 Convert Decimal no. into Binary no.

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n, rem[20], i=0, j;
//     cout<<"Enter any integer no. : ";
//     cin>>n;
//     while(n>0){
//         rem[i]=n%2;
//         i++;
//         n=n/2;
//     }
//     cout<<"Binary no. = ";
//     for(j=i-1; j>=0; j--){
//         cout<<rem[j];
//     }
//    return 0;
// }

// odd or even

// #include<iostream>
// using namespace std;
// class solution
// {
//     public:
//     int odds(int n)
//     {
//         if(n%2==0){
//             cout<<"even";
//         }
//         if(n%2==1){
//             cout<<"odd";
//         }
//     }
// };
// int main()
// {
//     int a;
//     solution x;
//     cout<<"Enter element: ";
//     cin>>a;
//     x.odds(a);
//     return 0;
// }

// find odd between two no.

// #include <iostream>
// using namespace std;
// class solution
// {
// public:
//     int count = 0;
//     int countodds(int low, int high)
//     {
//         for (int i = low; i <= high; i++)
//         {
//             if (i % 2 != 0)
//             {
//                 count++;
//             }
//         }
//         return count;
//     }
// };
// int main()
// {
//     int a, b;
//     solution x;
//     cout << "Enter first and second values : ";
//     cin >> a >> b;
//     cout << "The total no. of odds is : " << x.countodds(a, b);
//     return 0;
// }

// find difference(subtraction) b/w product of digits and sum of digits.

// #include<iostream>
// using namespace std;
// class Solution {
// public:
//     int subtractProductAndSum(int n) {
//         int r, mult=1, sum=0, sub;
//         while(n!=0){
//             r=n%10;
//             mult=mult*r;
//             sum=sum+r;
//             n=n/10;
//         }
//         sub=mult-sum;
//         return sub;        
//     }
// };
// int main()
// {
//     Solution x;
//     cout<<x.subtractProductAndSum(234);
//     return 0;
// }

// for loop problem not know.error

// #include <iostream>
// #include <cstdio>
// using namespace std;
// int main() {
//     int a,b;
//     string c[]={"","one","two","three","four","five","six","seven","eight","nine"};
//     cin>>a>>b;
//     for(int i=a;i<=b;i++)
//         cout<<((i<=9)?c[i]:((i%2==0)?"even":"odd"))<<endl;
//     return 0;
// }

// Print 1 to n without using loop

// #include<iostream>
// using namespace std;
// void loop(int n){  
//   if(n>=1){
//     loop(n-1);
//     cout<<n<<" ";
//   }
// }
// int main()
// {
//   loop(10);
//   return 0;  
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//   int i=1;
//   start:
//   cout<<i<<" ";
//   i++;
//   if(i<=10)
//   goto start; 
//   return 0;
// }

// #include<iostream>
// using namespace std;
// void loop(int N){
//   int i=1;
//   start:
//   cout<<i<<" ";
//   i++;
//   if(i<=N)
//   goto start;
// }
// int main()
// {
//   loop(10);
//   return 0;
// }

// problems oops

// #include<iostream>
// using namespace std;
// void print(int id){
//     cout<<"The employee id : "<<id<<endl;
// }
// void print(float sal){
//     cout<<"The employee salary : "<<sal<<endl;
// }
// void print(char name[]){
//     cout<<"The employee name : "<<name<<endl;
// }
// int main()
// {
//     print(101);
//     print(120000);
//     print("Prem kumar");
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int largest(int a, int b, int c);
// int largest(int x, int y);
// int main()
// {
//     cout<<"the largest of three no. "<<largest(12, 33, 14)<<endl;
//     cout<<"The largest of two no. "<<largest(2, 5);
//     return 0;
// }
// int largest(int a, int b, int c){
//     if(a>b&&a>c)
//     return a;
//     if(b>c)
//     return b;
//     else
//     return c;
// }
// int largest(int x, int y){
//     if(x>y)
//     return x;
//     else
//     return y;
// }

// Print all ASCII codes in c++.

// #include<iostream>
// using namespace std;
// int main()
// {
//     for(char i=48; i<=57; i++){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     for(char i=65; i<=90; i++){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     for(char i=97; i<=122; i++){
//         cout<<i<<" ";
//     }
//     return 0;
// }

// Stack insertion in c++

// #include<iostream>
// using namespace std;
// int main()
// {
//     const int size = 10;
//     int stack[size], top=-1, bottom=-1, i;
//     char ch;
//     cout<<"Do you want to insert data element in stack (y/n) : ";
//     cin>>ch;
//     while (ch=='y'||ch=='Y')
//     {
//         if(top==(size-1)){
//             cout<<"Overflow";
//             break;
//         }
//         else{
//             top++;
//             cout<<"Enter the value on stack: ";
//             cin>>stack[top];
//         }
//         if(top==0){
//             bottom=0;
//         }
//         cout<<"Do you want to insert data element in stack (y/n) : ";
//         cin>>ch;
//     }// end while
//     if(top==-1){
//         cout<<"Underflow";
//     }    
//     else{
//         cout<<"\nDisplaying the value of stack :";
//         for(i=0; i<=top; i++){
//             cout<<stack[i]<<"\t";
//         }
//     }
//     return 0;
// }

// deletion in array element

// #include<iostream>
// using namespace std;
// int main(){
//     const int size = 5;
//     int list[size], pos, i;
//     cout<<"Enter element in array : ";
//     for(i=0; i<size; i++){
//         cin>>list[i];
//     }
//     cout<<"Displayl before insert element : ";
//     for(i=0; i<size; i++){
//         cout<<list[i]<<"\t";
//     }
//     cout<<"Enter position : ";
//     cin>>pos;
//     if(pos>size){
//         cout<<"Not Possible";
//     }
//     else{
//         for(i=pos; i<(size-1); i++){
//             list[i]=list[i+1];
//         }
//     }
//     if(pos<size){
//         cout<<"Displaying after insertion : ";
//         for(i=0; i<size; i++){
//             cout<<list[i]<<"\t";
//         }
//     }
//     return 0;
// }














