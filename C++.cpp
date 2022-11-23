
// Pointer

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=3;
//     int *b=&a;
//     // & ---> (Address of) operator
//     cout<<"The address of a is : "<<&a<<endl;
//     cout<<"The address of a is : "<<b<<endl;
//     // * ---> (value at) Dereference operator
//     cout<<"The value at address b is : "<<*b<<endl;
//     // Pointer to Pointer
//     int **c=&b;
//     cout<<"The address of b is : "<<&b<<endl;
//     cout<<"The address of b is : "<<c<<endl;
//     cout<<"The value of address c is : "<<*c<<endl;
//     cout<<"The value at address value at (value_at(c)) is : "<<**c<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int v[4] = {12, 14, 15, 16};
//     int *ptr;
//     ptr=v;
//     for(int i=0; i<4; i++)
//     {
//         cout<<"Print *ptr of : "<<*ptr<<endl;
//         cout<<"Print ptr of : "<<ptr<<endl;
//         ptr++;
//     }
//     return 0;
// }

// References

//  Swap two value.

// #include<iostream>
// using namespace std;
// void swap(int &a, int &b)
// {
//     int temp=a;
//     a=b;
//     b=temp;
// }
// int main()
// {
//    int a, b;
//    cout<<"Enter a value for a : ";
//    cin>>a;
//    cout<<"Enter a value for b : ";
//    cin>>b;
//     swap(a, b);
//     cout<<"After swaping the value "<<endl;
//     cout<<"Value of a : "<<a<<endl;
//     cout<<"Value of b : "<<b<<endl;
//     return 0;
// }

// Vector

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> vect{10, 20, 30, 40};
//     for(int &x: vect)
//     {
//         x=x+5;
//     }
//     for(int x:vect){
//         cout<<x<<endl;
//     }
//     return 0;
// }

// Array

// #include<iostream>
// using namespace std;
// int main()
// {
//     int marks[5]={12, 13, 14, 15, 16};
//     // cout<<marks[0]<<endl;
//     // cout<<marks[1]<<endl;
//     // cout<<marks[2]<<endl;
//     // cout<<marks[3]<<endl;
//     // cout<<marks[4]<<endl;
// // Another method to displaying array element.
//     for (int i=0; i<5; i++){
//         cout<<"Marks of student is "<<i<<" is "<<marks[i]<<endl;
//     }
//    return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int marks[10];
//     cout<<"Enter 5 student marks : ";
//     for(int i=0; i<5; i++){
//         cin>>marks[i];
//     }
//     for(int i=0; i<5; i++){
//     cout<<i<<" student marks : "<<marks[i]<<endl;
//     }
//    return 0;
// }

// Pointers and Array

// #include<iostream>
// using namespace std;
// int main()
// {
//     int marks[10]={23, 34, 54, 34, 55};
//     int *p=marks;
//     cout<<"The value of marks[0] : "<<*p<<endl;
//     cout<<"The value of marks[1] : "<<*(p+1)<<endl;
//     cout<<"The value of marks[2] : "<<*(p+2)<<endl;
//     cout<<"The value of marks[3] : "<<*(p+3)<<endl;
//     cout<<"The value of marks[4] : "<<*(p+4)<<endl;
//     // cout<<*p<<endl;
//     // cout<<*(p++)<<endl;
//     // cout<<*(p++)<<endl;
//     // cout<<*(++p)<<endl;
//     // cout<<*p<<endl;
//     // cout<<*(p++);
//     return 0;
// }

// Structure

// #include<iostream>
// using namespace std;
// // struct student
// typedef struct student
// {
//     int roll ;
//     char favchar;
//     float salary;
// } st;
// int main()
// {
//    // struct student x;
//     st x;
//     x.roll = 48;
//     x.favchar= 'P';
//     x.salary = 12000;
//     cout<<"The value is " <<x.roll<<endl;
//     cout<<"The value is " <<x.favchar<<endl;
//     cout<<"The value is " <<x.salary<<endl;
//     return 0;
// }

// Union

// #include<iostream>
// using namespace std;
// union  money
// {
//     /* data */               // Union use at a time.
//     int rice ;
//     char car;
//     float pounds;
// };
// int main()
// {
//     union money m;
//     m.rice=34;
//     m.car='c';
//    // cout<<m.rice;    Given grabage value
//    cout<<m.car;
//     return 0;
// }

// enum

// #include<iostream>
// using namespace std;
// int main()
// {
//     enum meal{breakfast, lunch, dinner};
//     // cout<<breakfast<<endl;
//     // cout<<lunch<<endl;
//     // cout<<dinner<<endl;
//     meal m= lunch;
//     cout<<m<<endl;
//     cout<<(m==1)<<endl;
//     cout<<(m==2);
//     return 0;
// }

// Function

// #include<iostream>
// using namespace std;
// int sum(int a, int b){
//     int s=a+b;
//     return s;
// }
// int main()
// {
//     int num1, num2;
//     cout<<"Enter two values : ";
//     cin>>num1>>num2;
//     cout<<"The sum of values : "<<sum(num1, num2);
//     return 0;
// }

// Function Prototype
// Syntax:- type function_name (arguments);

// #include<iostream>
// using namespace std;
// // int sum(int , int);
// int sum(int a, int b);
// // void display(void);
// void display();
// int main()
// {
//     int num1, num2;
//     cout<<"Enter two values : ";
//     cin>>num1>>num2;
//     // num1 and num2 are actual parameters
//     cout<<"The sum of values : "<<sum(num1, num2);
//     display();
//     return 0;
// }
// int sum(int a, int b){
//     // formal parameters a and b will be taking values from actual parameters num1 and num2
//     int s=a+b;
//     return s;
// }
// void display(){
//     cout<<"\n Hello, Good morning";
// }

// Inline Function  #17

// #include<iostream>
// using namespace std;
// inline int product(int a, int b){
//     return a*b;
// }
// // Default Argument.
// float moneyReceived(int currentMoney , float factor=1.04){
//     return currentMoney*factor;
// }
// // const int a = 10;
// int main()
// {
//     // int a, b;
//     // cout<<"Enter the value of a and b : "<<endl;
//     // cin>>a>>b;
//   //  cout<<"The product of a and b is : "<<product(a,b)<<endl;
//     int money = 100000;
//     cout<<"If you have  "<<money<<" is in your bank account, you will recive "<<moneyReceived(money)<<"Rs after 1 year"<<endl;
//     cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money, 1.1)<<" Rs after 1 year";
//     return 0;
// }

// Recursions  #18

// find factorial no.

// #include<iostream>
// using namespace std;
// int factorial (int n){
//     if(n<=1){
//         return 1;
//     }
//     return n*factorial(n-1);
// }
// int main()
// {
//     int a;
//     cout<<"Enter a value for factorial : ";
//     cin>>a;
//     cout<<"The factorial value of "<<a<<" is "<<factorial(a)<<endl;
//     return 0;
// }

// fabbonacci sequence

// #include<iostream>
// using namespace std;
// int fib(int n){
//     if(n<2){
//         return 1;
//     }
//     return fib(n-2)+fib(n-1);
// }
// int main()
// {
//     int a;
//     cout<<"Enter a number : ";
//     cin>>a;
//     cout<<"The term in fibbonacci sequence at position "<< a<< " is " <<fib(a)<<endl;
//     return 0;
// }

// Funciton overloading #19

// #include<iostream>
// using namespace std;
//    int sum(int a, int b){
//     cout<<"Using function with 2 argument "<<endl;
//         return a+b;
//     }
//     int sum(int a , int b, int c){
//         cout<<"Using function with 3 argument "<<endl;
//         return a+b+c;
//     }
//     // Calculate the volume of a cylinder.
//     int volume(double r, int h){
//         return (3.14*r*r*h);
//     }
//     // Calculate the volume of a cube
//     int volume(int a){
//         return (a*a*a);
//     }
//     // Rectangular box
//     int volume(int l, int b, int h){
//         return ( l*b*h);
//     }
// int main()
// {
//     cout<<"The sum of 3 and 5 is : "<<sum(3, 5)<<endl;
//     cout<<"The sum of 3, 4 and 7 is : "<<sum(3, 5, 7)<<endl;
//     cout<<"The volume of cuboid of 3, 7 and 6 is : "<<volume(3,7,6)<<endl;
//     cout<<"The volume of cylinder of radius 3 and height 6 is : "<<volume(3, 6)<<endl;
//     cout<<"The volume of cube of side 3 is : "<<volume(3)<<endl;
//     return 0;
// }

// OOPs  #20

// Classes Private and public.      #21

// #include<iostream>
// using namespace std;
// class employee
// {
//     private:
//     int a, b, c;
//     public:
//     int d, e;
//     void setdata(int a1, int a2, int a3); // Declaration
//     void getdata(){
//     cout<<"The value of a is : "<<a<<endl;
//     cout<<"The value of b is : "<<b<<endl;
//     cout<<"The value of c is : "<<c<<endl;
//     cout<<"The value of d is : "<<d<<endl;
//     cout<<"The value of e is : "<<e<<endl;
//     }
// };
// void employee:: setdata(int a1, int b1, int c1){
//     a=a1;
//     b=b1;
//     c=c1;
// }
// int main()
// {
//     employee prem;
//    //  prem.a=11; ----> private data
//     prem.d=23;
//     prem.e=12;
//     prem.setdata(2,3,4);
//     prem.getdata();
//     return 0;
// }

// OOPs Recap & Nesting of Member Function #22

// OOPs - Classes and objects
// c++ --> initially called --> c with classes by stroustroup
// strucure had limitation
//         - memebers are public
//         - No methods
// Classes --> Structures + more
// Classes --> can have methods and properties
// Classes --> can make few members as private & few as public
// structures in c++ are typedefed
// you can declare objects along with the class declaration like this:
/* class employee{
    // class definition
} prem, subham, rohan  */

// Nesting of member functions

// #include <iostream>
// #include <string>
// using namespace std;
// class binary
// {
//    // private:  --> by defaulat private
//     string s;
// public:
//     void read(void);
//     void chk_bin(void);
//     void ones_complement(void);
//     void display(void);
// };
// void binary ::read(void)
// {
//     cout << "Enter a binary number : " << endl;
//     cin >> s;
// }
// void binary ::chk_bin(void)
// {
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s.at(i) != '0' && s.at(i) != '1')
//         {
//             cout << "Incorrect binary formate" << endl;
//             exit(0);
//         }
//     }
// }
// void binary ::ones_complement(void)
// {
//     chk_bin();
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s.at(i) == '0')
//         {
//             s.at(i) = '1';
//         }
//         else
//         {
//             s.at(i) = '0';
//         }
//     }
// }
// void binary::display()
// {
//     cout << "Displaying your binary number : " << endl;
//     for (int i = 0; i < s.length(); i++)
//     {
//         cout << s.at(i);
//     }
//     cout << endl;
// }
// int main()
// {
//     binary p;
//     p.read();
//   //  p.chk_bin();
//     p.display();
//     p.ones_complement();
//     p.display();
//     return 0;
// }

// C++ Objects Memory Allocation & Arrays in Classes #23

// shop related program

// #include <iostream>
// using namespace std;
// class shop
// {
//     int itemId[100];
//     int itemPrice[100];
//     int counter;
// public:
//     void initCounter(void) { counter = 0; }
//     void setPrice(void);
//     void displayPrice(void);
// };
// void shop::setPrice(void)
// {
//     cout << "Enter Id of your item : " << counter + 1 << endl;
//     cin >> itemId[counter];
//     cout<<"Enter price of your item : "<<endl;
//     cin>>itemPrice[counter];
//     counter++;
// }
// void shop::displayPrice(void)
// {
//     for (int i = 0; i < counter; i++)
//     {
//         cout << "The Price of item with Id " << itemId[i] << " is = " << itemPrice[i] << endl;
//     }
// }
// int main()
// {
//     shop dukaan;
//     dukaan.initCounter();
//     dukaan.setPrice();
//     dukaan.setPrice();
//     dukaan.setPrice();
//     dukaan.displayPrice();
//     return 0;
// }

// Static Data Members & Methods in C++ OOps #24

// #include<iostream>
// using namespace std;
// class employee
// {
//     int id;
//     static int count;
//     public:
//         void setData(void){
//             cout<<"Enter the id : ";
//             cin>>id;
//             count++;
//         }
//         void getData(void){
//             cout<<"The id of employee is :"<<id<<" and this is employee number "<<count<<endl;
//         }
//         static void getCount(void){
//             cout<<"The value of count is : "<<count<<endl;
//         }
// };
// int employee :: count; // Default value is 0
// int main()
// {
//     employee prem, abi, shiv;
//     prem.setData();
//     prem.getData();
//     employee::getCount();
//     abi.setData();
//     abi.getData();
//     employee::getCount();
//     shiv.setData();
//     shiv.getData();
//     employee::getCount();
//     return 0;
// }

// Array of Objects & Passing Objects as Function Arguments in c++  #25

// #include<iostream>
// using namespace std;
// class employee
// {
//     int id;
//     int salary;
//     public:
//         void setId(void){
//             salary = 122;
//             cout<<"Enter the id of employee : ";
//             cin>>id;
//         }
//         void getId(void){
//             cout<<"The id of this employee is : "<<id<<endl;
//         }
// };
// int main()
// {
//     // employee prem, ram, rohan;
//     // prem.setId();
//     // prem.getId();
//     employee fb[4];
//     for(int i=0; i<4; i++){
//         fb[i].setId();
//         fb[i].getId();
//     }
//     return 0;
// }

// Complex number

// #include <iostream>
// using namespace std;
// class complex
// {
//     int a, b;
//     public:
//     void setData(int v1, int v2)
//     {
//         a = v1;
//         b = v2;
//     }
//     void setDataBySum(complex o1, complex o2)
//     {
//         a = o1.a + o2.a;
//         b = o1.b + o2.b;
//     }
//     void printNumber(){
//         cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
//     }
// };
// int main()
// {
//     complex c1, c2, c3;
//     c1.setData(1,2);
//     c1.printNumber();
//     c2.setData(3,4);
//     c2.printNumber();
//     c3.setDataBySum(c1, c2);
//     c3.printNumber();
//     return 0;
// }

// Friend Functions in C++ #26

/* Properties of friend function
 1. Not in the scope of class
 2. Since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex()==invalid
 3. Can be invoked without the help of any object
 4. Usually contans the objects as arguments
 5. Can be declared inside public or private section of the class
 6. It cannot access the members directly by the nemes and need object_name.member_name to access any member.
 */

// friend function addition from my notes

// #include <iostream>
// using namespace std;
// class sum
// {
//     int a, b;
// public:
//     void input()
//     {
//         cout << "Enter two integer values : "<<endl;
//         cin >> a >> b;
//     }
//     friend void add(sum ob);
// };
// void add(sum ob)
// {
//     int s;
//     s = ob.a + ob.b;
//     cout << "The sum of two no. is : " << s;
// }
// int main()
// {
//     sum abc;
//     abc.input();
//     add(abc);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class complex{
//     int a, b;
//     public:
//         void setNumber(int n1, int n2){
//             a=n1;
//             b=n2;
//         }
//         // Below line means that non member - sumComplex function is allowed to do anything with my private parts (members)
//         friend complex sumComplex(complex o1, complex o2);
//         void printNumber(){
//             cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
//         }
// };
// complex sumComplex(complex o1, complex o2){
//     complex o3;
//     o3.setNumber((o1.a+o2.a), (o1.b+o2.b));
//     return o3;
// }
// int main()
// {
//     complex c1, c2, sum;
//     c1.setNumber(1, 4);
//     c2.setNumber(2, 8);
//     c1.printNumber();
//     c2.printNumber();
//     sum=sumComplex(c1, c2);
//     sum.printNumber();
//     return 0;
// }

// Friend Classes & Member Friend Function in C++  #27
// error through  .....

// #include <iostream>
// using namespace std;
// // Forward declaration
// class complex;
// class calculator
// {
//     int add(int a, int b)
//     {
//         return (a + b);
//     }
//     int sumRealComplex(complex, complex);
// };
// class complex
// {
//     int a, b;
//     friend int calulator :: sumRealComplex(complex, complex);
// public:
//     void setNumber(int n1, int n2)
//     {
//         a = n1;
//         b = n2;
//     }
//     void printNumber()
//     {
//         cout << "Your number is " << a << " + " << b << "i" << endl;
//     }
// };
// int calculator ::sumRealComplex(complex o1, complex o2)
// {
//     return (o1.a + o2.a);
// }
// int main()
// {
//     complex o1, o2;
//     o1.setNumber(1, 4);
//     o2.setNumber(5, 7);
//     calculator calc;
//     int res = calc.sumRealComplex(o1, o2);
//     cout<<"The sum of real part of o1 and o2 is "<<res<<endl;
//     return 0;
// }

// More on C++ Friend Function (Examples & Explanation )  #28

// #include <iostream>
// using namespace std;
// class y;
// class x
// {
//     int data;
// public:
//     void setValue(int value)
//     {
//         data = value;
//     }
//     friend void add(x, y);
// };
// class y
// {
//     int num;
// public:
//     void setValue(int value)
//     {
//         num = value;
//     }
//     friend void add(x, y);
// };
// void add(x o1, y o2)
// {
//     cout << "Summing data of x and y objects gives me : " << o1.data + o2.num;
// }
// int main()
// {
//     x a1;
//     a1.setValue(3);
//     y b1;
//     b1.setValue(15);
//     add(a1, b1);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class c2;
// class c1{
//     int val1;
//     friend void exchange(c1 &, c2 &);
//     public:
//         void indata(int a){
//             val1=a;
//         }
//         void display(void){
//             cout<< val1 <<endl;
//         }
// };
// class c2{
//     int val2;
//     friend void exchange(c1 &, c2 &);
//         public:
//              void indata(int a){
//                 val2 =a;
//              }
//              void display(void){
//                 cout<<val2<<endl;
//              }
// };
// void exchange(c1 &x, c2 &y){
//     int temp=x.val1;
//     x.val1=y.val2;
//     y.val2=temp;
// }
// int main()
// {
//     c1 oc1;
//     c2 oc2;
//     oc1.indata(35);
//     oc2.indata(67);
//     exchange(oc1, oc2);
//     cout<<"The value of c1 after exchanging becomes : ";
//     oc1.display();
//     cout<<"The value pf c2 after exchanging becomes : ";
//     oc2.display();
//     return 0;
// }

// Constructors in c++  #29

/*  Creating a constructor --> banana
      Constructor is a special member function with same name as of the class.
      It is used to initializ the objects of its class.
      It is automatically invoked whenever an object is created
    Characteristics of constructors
      1. It should be declared in the public section of the class.
      2. They are automatically invoked whenever the object is created.
      3. They cannot return values and do not have return types.
      4. It can have default arguments.
      5. We cannot refer to their address.
*/

// #include<iostream>
// using namespace std;
// class complex{
//     int a , b;
//     public:
//     complex(void); // constructor declaration
//     void printNumber()
//     {
//         cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
//     }
// };
// complex::complex(void){    // --> This is a default constructor as it accepts no parameter
//     a=10;
//     b=0;
//     cout<<"Hello! Mooto"<<endl;
// }
// int main()
// {
//     complex c;
//     c.printNumber();
//     return 0;
// }

// Parameterized and Default constructors in C++   #30

// #include<iostream>
// using namespace std;
// class complex{
//     int a, b;
//     public:
//     complex(int , int);
//         void printNumber(){
//             cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
//         }
// };
// complex::complex(int x, int y){   //  --> This is Parameterized constructor as it takes 2 parameters
//     a=x;
//     b=y;
// }
// int main()
// {
//     // Implicit call
//     complex a(4,6);
//     a.printNumber();
//     // Explicit call
//     complex b= complex(12, 13);
//     b.printNumber();
//     return 0;
// }

// points

// #include<iostream>
// using namespace std;
// class point{
//     int x ,y;
//     public:
//         point(int a ,int b){
//             x=a;
//             y=b;
//         }
//         void displayPoint(){
//             cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
//         }
// };
// int main()
// {
//     point p(1, 1);
//     p.displayPoint();
//     point q(12, 13);
//     q.displayPoint();
//     return 0;
// }

// Distance between two points

// #include <iostream>
// #include <math.h>
// using namespace std;
// class DISTANCE
// {
//     int x1, x2, y1, y2, fir, sec, first, second;
//     float dist, sum;
// public:
//     void input()
//     {
//         cout << "Enter first two point values : ";
//         cin >> x1 >> x2;
//         cout << "Enter second two point values : ";
//         cin >> y1 >> y2;
//     }
//     void displayPoint()
//     {
//         cout << "First point values : (" << x1 << ", " << x2 << ")" << endl;
//         cout << "second point values : (" << y1 << ", " << y2 << ")" << endl;
//     }
//     void compute()
//     {
//         fir = (x2 - x1);
//         sec = (y2 - y1);
//         first = pow(fir, 2);
//         second = pow(sec, 2);
//         sum = (first + second);
//         dist = sqrt(sum);
//     }
//     void output()
//     {
//         cout << "The distance between first point and second point : " << dist;
//     }
// };
// int main()
// {
//     DISTANCE abc;
//     abc.input();
//     abc.displayPoint();
//     abc.compute();
//     abc.output();
//     return 0;
// }

// Distance between two points using parametrized constructor

// #include<iostream>
// #include<math.h>
// using namespace std;
// class point{
//     int x ,y;
//     public:
//     friend void difference(point, point);
//         point(int a ,int b){
//             x=a;
//             y=b;
//         }
//         void displayPoint(){
//             cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
//         }
// };
// void difference(point o1, point o2){
//     int x_diff=o2.x-o1.x;
//     int y_diff=o2.y=o1.y;
//     double diff=sqrt((x_diff*x_diff)+(y_diff*y_diff));
//     cout<<"The difference : "<<diff<<" unit";
// }
// int main()
// {
//     int x1, x2, y1, y2;
//     cout<<"Enter first point x1 and x2 values : ";
//     cin>>x1>>x2;
//     cout<<"Enter second point y1 and y2 values : ";
//     cin>>y1>>y2;
//     point p(x1, x2);
//     p.displayPoint();
//     point q(y1, y2);
//     q.displayPoint();
//     difference(p, q);
//     return 0;
// }

// Constructor Overloading in C++  #31

// #include <iostream>
// using namespace std;
// class complex
// {
//   int a, b;
// public:
//   complex(int x, int y)
//   {
//     a = x;
//     b = y;
//   }
//   complex(int x)
//   {
//     a = x;
//     b = 0;
//   }
//   complex()
//   {
//     a = 0;
//     b = 0;
//   }
//   void printData()
//   {
//     cout << "Your number is : " << a << " + " << b << "i" << endl;
//   }
// };
// int main()
// {
//   complex c1(4, 6);
//   c1.printData();
//   complex c2(12);
//   c2.printData();
//   complex c3;
//   c3.printData();
//   return 0;
// }

// Constructor with default argument in c++   #32

// #include<iostream>
// using namespace std;
// class simple{
//   int data1, data2;
//   public:
//     simple(int a, int b=23){
//       data1=a;
//       data2=b;
//     }
//     void printData();
// };
// void simple::printData(){
//   cout<<"The value of data1 and data2 is "<<data1<<" and "<<data2<<endl;
// }
// int main()
// {
//   simple s(12);
//   s.printData();
//   return 0;
// }

// Dynamic initialization of Objects using constructors   #33

// #include<iostream>
// using namespace std;
// class BankDeposit{
//   int principal;
//   int years;
//   float interesRate;
//   float returnValue;
//   public:
//     BankDeposit(){}
//     BankDeposit(int p, int y, float r);  // r can be a value like 0.04
//     BankDeposit(int p, int y, int r);    // r can be a value like 12
//     void show();
// };
// BankDeposit :: BankDeposit(int p, int y, float r){
//   principal =p;
//   years = y;
//   interesRate=r;
//   returnValue= principal;
//   for(int i=0; i<y;i++){
//     returnValue=returnValue*(1+interesRate);
//   }
// }
// BankDeposit::BankDeposit(int p, int y, int r){
//   principal=p;
//   years=y;
//   interesRate =float(r)/100;
//   returnValue=principal;
//   for(int i=0; i<y; i++){
//     returnValue = returnValue*(1*interesRate);
//   }
// }
// void BankDeposit:: show(){
//     cout<<"Principal amount was "<<principal
//         <<". Retrun value after "<<years
//         <<" years is "<<returnValue<<endl;
// }
// int main()
// {
//   BankDeposit bd1, bd2, bd3;
//   int p, y;
//   float r;
//   int R;
//   cout<<"Enter the value of p , y and r "<<endl;
//   cin>>p>>y>>r;
//   bd1=BankDeposit(p, y, r);
//   bd1.show();
//   cout<<"Enter the value of p , y and R "<<endl;
//   cin>>p>>y>>R;
//   bd2=BankDeposit(p, y, R);
//   bd2.show();
//   return 0;
// }

// Copy Constructor in c++  #34

// #include<iostream>
// using namespace std;
// class number
// {
//   int a; 
//   public:
//   number(){
//     a=12;
//   }
//     number(int num){
//       a=num;
//     }
//     // When no copy constructor is found, compiler supplies its own copy constructor
//     number (number &obj){
//       cout<<"Copy constructor called!! "<<endl;
//       a=obj.a;
//     }
//     void display(){
//       cout<<"The number for this object is "<<a<<endl;
//     }
// };
// int main()
// {
//   number x, y, z(24), z2;
//   x.display();
//   y.display();
//   z.display();
//   // z1 should exactly resemble z or x or y
//   number z1(x); //  copy constructor invoked
//   z1.display();
//   z2=z; // copy constructor not invoked
//   z2.display();
//   number z3=z;  // copy constructor invoked
//   z3.display();
//   return 0;
// } 

// Destructor in c++  #35
// Destructor never takes an argument nor does it return any value

// #include<iostream>
// using namespace std;
// int count =0;
// class num
// {
//   public:
//     num(){
//       count++;
//       cout<<"This is the time when constructor is called for object number "<<count<<endl;
//     }
//     ~num(){
//       cout<<"This is the time when my destructor is called for object number "<<count<<endl;
//       count--;
//     }
// };
// int main()
// {
//   cout<<"We are inside our main function "<<endl;
//   cout<<"Creating first object n1 "<<endl;
//   num n1;
//   {
//     cout<<"Enter this block "<<endl;
//     cout<<"Creating two more objects "<<endl;
//     num n2, n3;
//     cout<<"Back to main "<<endl;
//   }
//   return 0;
// }

// Inheritance & Its Different Types with example in c++ #36






















