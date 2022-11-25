
// Pattern Practice Questions

// Q.1 Rectangle pattern

// #include<iostream>
// using namespace std;
// int main()
// {
//     int row, col;
//     cin>>row>>col;
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
//    return 0;
// }

// Q.2 Hollow rectangle pattern.

// #include<iostream>
// using namespace std;
// int main()
// {
//     int row, col;
//     cin>>row>>col;
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             if(i==0 || i==(row-1) || j==0 || j==(col-1)){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<"\n";
//     }
//        return 0;
// }

// Q.3 Inverted Half Pyramid.

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=n; i>0; i--){
//         for(int j=0; j<i; j++){
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
//    return 0;
// }

// Q.4 Half Pyramid After 180 Rotation

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (j <( n-1) - i)
//             {
//                 cout << " ";
//             }
//             else
//             {
//                 cout << "*";
//             }
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// Q.5 Half Pyramid Using Numbers

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<i<<" ";
//         }
//         cout<<"\n";
//     }
//    return 0;
// }

// Q.6 Floyd's Triangle.

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n, count =1;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout<<count<<" ";
//             count++;
//         }
//         cout<<"\n";
//     }
//    return 0;
// }

// Q.7 Pattern

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n; 
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=n; j>=i; j--){
//             cout<<"* ";
//         }
//         cout<<"\n";
//     }
//    return 0;
// }

// Q.8 Pattern

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n; 
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<"* ";
//         }
//         cout<<"\n";
//     }
//    return 0;
// }

// Q.9  X Pattern

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             if(j==i || j==n+1-i){
//                 cout<<"* ";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<"\n";
//     }
//    return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int i, j, n;
//     cout<<"Enter nth number : ";
//     cin>>n;
//     for(i=1; i<=n; i++)
//     {
//         for(j=1; j<=n; j++)
//         {
//             if(j==1||i==j||i==n)
//             cout<<"* ";
//             else
//             cout<<"  ";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int i, s=0, n;
//     cout<<"Enter n th number : ";
//     cin>>n;
//     for(i=1; i<=n; i++){
//         if(i%2==1){
//             s=s+i;
//         }
        
//     }
//     cout<<"\n The odd number of sum : "<<s;
//     return 0;
// }















