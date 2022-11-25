// Function

// A. NRNA(No return No argument)

// Q.1 Create table. Using NRNA

//  #include<iostream>
// using namespace std;
// void table()          // Define/Declaration
// {
//  int n, i=1, s;
//     cout<<"Find the table : ";
//     cin>>n;
//     while(i<=10){
//         s=n*i;
//          cout<<"\n"<<n<<"*"<<i<<"="<<s;
//         i++;
//     }
// }
// int main()
// {
//     table();         // Function  call
//     return 0;
// }

// Q.2 Write a program to find Addition, Subtraction, Multiplicatio or Division.Using NRNA

// #include<iostream>
// using namespace std;
// void add()
// {
//     int a, b, s;
//     cout<<"Enter two number for addition : \n";
//     cin>>a>>b;
//     s=a+b;
//     cout<<"\n Addition of two number is = "<<s;
// }
// void sub()
// {
//     int a, b, s;
//     cout<<"\n Enter two number for subtraciton : \n";
//     cin>>a>>b;
//     s=a-b;
//     cout<<"\n Subraction of two number is = "<<s;
// }
// void mult()
// {
//     int a, b, s;
//     cout<<"\nEnter two number for Multiplication : \n";
//     cin>>a>>b;
//     s=a*b;
//     cout<<"\n Multiplication of two number is = "<<s;
// }
// void div()
// {
//     int a, b, s;
//     cout<<"\nEnter two number for Division : \n";
//     cin>>a>>b;
//      s=a/b;
//     cout<<"\n Division of two number is = "<<s;
// }
// int main()
// {
//     add();
//     sub();
//     mult();
//     div();
//     return 0;
// }

// Q.3 Write a program to find the palindrom or not.Using NRNA

// #include<iostream>
// using namespace std;
// void palindrom(){
//     int n, t, rev=0, r;
//     cout<<"\n Enter any intger no. : ";
//     cin>>n;
//     t=n;
//     while(n!=0){
//         r=n%10;
//         rev=rev*10+r;
//         n=n/10;
//     }
//     if(rev==t){
//         cout<<"Palindrom";
//     }
//     else {
//         cout<<"Not Palindrom";
//     }
// }
// int main(){
//     palindrom();
//     return 0;
// }

// Write a program to print the pattern . 

// #include<iostream>
// using namespace std;
// void pattern()
// {
// int i, j;
//     for(i=0; i<5; i++){
//         for(j=0; j<i; j++){
//             cout<<"*"<<"\t";
//         }
//         cout<<"\n";
//     }
// }
// int main()
// {
//     pattern();
//     return 0 ;
// }


// B. NRWA (No Return with argument)

// Q.1. write a program to find sum of two number. Using NRWA

// #include<iostream>
// using namespace std;
// void sum(int a, int b)
// {
//     int s;
//     s=a+b;
//     cout<<"\n The sum of two no = "<<s;
// }
// int main()
// {
//     int x, y;
//     cout<<"\n Enter the two no : ";
//     cin>>x>>y;
//     sum(x,y);
//     return 0;
// }

// Q.2 Write a program to find addition, subtraction, multiplicaiton and division. using NRWA

// #include <iostream>
// using namespace std;
// void add(int a, int b)
// {
//     int s;
//     s = a + b;
//     cout << "\n Addition of two number is = " << s;
// }
// void sub(int a, int b)
// {
//     int s;
//     s = a - b;
//     cout << "\n Subraction of two number is = " << s;
// }
// void mult(int a, int b)
// {
//     int s;
//     s = a * b;
//     cout << "\n Multiplication of two number is = " << s;
// }
// void divi(int a, int b)
// {
//     int s;
//     s = a / b;
//     cout << "\n Division of two number is = " << s;
// }
// int main()
// {
//     int a, b;
//     cout << "\n Enter two number : ";
//     cin >> a >> b;
//     add(a, b);
//     sub(a, b);
//     mult(a, b);
//     divi(a, b);
// }

// Q.3 Write a program to find the sum of series. Using NRWA

// #include <iostream>
// using namespace std;
// void sum(int n)
// {
//     int i = 1, s = 0;
//     while (i <= n)
//     {
//         s = s + i;
//         i = i + 1;
//     }
//     cout << "\n The sum of series = " << s;
// }
// int main()
// {
//     int n;
//     cout << "Enter any number : ";
//     cin >> n;
//     sum(n);
//     return 0;
// }

// Q.4 Write a program to check the number is palindrom or not!. Uisng NRWA

// #include<iostream>
// using namespace std;
// void palindrom(int n)
// {
//     int r, t, rev=0;
//     t=n;
//     while(n!=0)
//     {
//         r=n%10;
//         rev=rev*10+r;
//         n=n/10;
//     }
//     if (t==rev)
//     {
//         cout<<"\n Palindrom";
//     }
//     else{
//         cout<<"\n Not Palindrom";
//     }
// }
// int main()
// {
//     int n;
//     cout<<"\n Enter any no. : ";
//     cin>>n;
//     palindrom(n);
// }

// C. WRNA (With Return No Argument)

// Q.1 Write a program to find the largest no between three no. Using WRNA

// #include<iostream>
// using namespace std;
// int largest()
// {
//     int a, b;
//     cout<<"\n Enter the three no. : ";
//     cin>>a>>b;
//     if(a>b){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// int main()
// {
//     int n;
//     n=largest();
//     if(n==1){
//         cout<<"\n A is the largest no. ";
//     }
//     else{
//         cout<<"\n B is the largest no. ";
//     }
//     return 0;
// }

// Q.2 Write a program to check the no. is armstrom or not!. Using WRNA
// Answar wrong(nahi) aa raha hai
/*
#include <iostream>
using namespace std;
int armstrom()
{
    int r, n, s = 0, t;
    cout << "\n Enter any no. : ";
    cin >> n;
    t = n;
    while (n != 0)
    {
        r = n % 10;
        s = s + r * r * r;
        n = n / 10;
    }
    if (t == s)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    n = armstrom();
    if (n == 1)
    {
        cout << "\n Armstrom";
    }
    else
    {
        cout << "\n Not Armstrom";
    }

    return 0;
}
*/

// Q.3 Write a program to find the sum of series nth terms. Using WRNA

// #include <iostream>
// using namespace std;
// int sum()
// {
//     int n, i = 1, s = 0;
//     cout << "\n Enter a no. for sum of nth terms : ";
//     cin >> n;
//     while (i <= n)
//     {
//         s = s + i;
//         i = i + 1;
//     }
//     cout << "\n The sum of series = " << s;
//     return 1;
// }
// int main()
// {
//     int n;
//     n = sum();
// }

// D. WRWA (With Return With Argument)

// Q.1 Write a program to sum of two no.Using WRWA

// #include<iostream>
// using namespace std;
// int sum(int a, int b)
// {
//     int c;
//     c=a+b;
//     return c;
// }
// int main()
// {
//     int x, y, z;
//     cout<<"\n Enter the two no. : ";
//     cin>>x>>y;
//     z=sum(x, y);
//     cout<<"\n The sum of two no. is = "<<z;
//     return 0;
// }

// Q.2 Write a program to check the no is palindro or not!. Using WRWA

// #include <iostream>
// using namespace std;
// int palindrom(int n)
// {
//     int t, r, rev = 0;
//     t = n;
//     while (n != 0)
//     {
//         r = n % 10;
//         rev = rev * 10 + r;
//         n = n / 10;
//     }
//     if (t == rev)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }
// int main()
// {
//     int a, b;
//     cout << "\n Enter any no. : ";
//     cin >> a;
//     b = palindrom(a);
//     if (b == 1)
//     {
//         cout << "\n Palindrom";
//     }
//     else
//     {
//         cout << "\n Not Palindrom ";
//     }
// }

// Q.3 Write a program to find the simple interest. Uisng WRWA

// #include<iostream>
// using namespace std;
// float simple(float p, float r, float t){
//     float si;
//     si=(p*r*t)/100;
//     return si;
// }
// int main()
// {
//     float a, b, c, t;
//     cout<<"\n Enter Principal values : ";
//     cin>>a;
//     cout<<"\n Enter Rate of interest : ";
//     cin>>b;
//     cout<<"\n Enter time or months : ";
//     cin>>c;
//     t=simple(a, b, c);
//     cout<<"\n Simple interest is = "<<t;
// }


// Practice

// Q.1 Sum of series 

// #include<iostream>
// using namespace std;
// int sum(int n)
// {
//     if(n!=0)
//     return(n+sum(n-1));
//     else
//     return n;
// }
// int main()
// {
//     int num, res;
//     cout<<"Enter an integer values : ";
//     cin>>num;
//     res=sum(num);
//     cout<<"\n Sum of series = "<<res;
//     return 0;
// }

// Q.2 find factorial no. 

// #include<iostream>
// using namespace std;
// int factorial(int n)
// {
//     int f=1; 
//     while (n!=0)
//     {
//        f=f*n;
//        n--;
//     }
//     return f;
// };
// int main()
// {
//     int a;
//     cout<<"Factorial of 5 is = "<<factorial(5);    
//     cout<<"\nEnter a value for factorial no. : ";
//     cin>>a;
//     cout<<"\nFactorial no. = "<<factorial(a);
//    return 0;
// }

// Check the no. is Prime no. or Not.

// #include<iostream>
// using namespace std;
// int prime(int n)
// {
//     int i;
//     for(i=2; i<n; i++)
//     {
//         if(n%i==0){
//             return 0;
//         }
//     }
//     if(i==n){
//         return 1; 
//     }
// }
// int main()
// {
//     int n, a;
//     cin>>n;
//    a= prime(n);
//     if(a==1){
//         cout<<"Prime";
//     }
//     if(a==0){
//         cout<<"Not Prime";
//     }
//    return 0;
// }

// Find prime no. between the numbers.

// #include<iostream>
// using namespace std;
// int prime(int n){
//     for(int i=2; i<n; i++){
//         if(n%2==0){
//             return 0;
//         }
//     }
//     return 1;
// }
// int main()
// {
//     int a, b, i;
//     cin>>a>>b;
//     for(i=a; i<b; i++){
//         if(prime(i)){
//             cout<<i<<endl;
//         }

//     }
//    return 0;
// }















