#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <cstring>
#include <string>
#include <cmath>
using namespace std;


// int main()
// {  // primitive (basicdata types
//     int age = 25;
//     char grade = 'A';
//     float PI = 3.14f; // should write f/F compulsory for float
//     bool isSafe = true;
//     double db = 56.99;
//     // cout << "Hello World!\n I am Joe";
//     // cout << sizeof(age) << endl;
//     cout << isSafe << endl;
//     return 0;
// }
// int main()
// {
// double price = 100.99;
// int newPrice = (int)price; imp**
// // cout<< newPrice << endl;
// int age;
// cout << "Enter the price :";
// cin >> price;

// cout << "your price is " << price << endl;
// int a= 10, b= 5;
// // int sum = a+b;
// cout << "sum = " << (a+b)<< endl;
// cout << "difference = " << (a-b)<< endl;
// cout << "product = " << (a*b)<< endl;
// cout << "quotient = " << (a/b)<< endl;
// cout << "modulo = " << (a%b)<< endl;
// int a =10;

// int b = a++; // a is getting updated after work
// int b = ++a; // first update and then work
// int b = --a;
//    int b = a-- ;
//     cout <<"b = " << b << endl;
//     cout <<"a = " << a << endl;
// Conditional statements :
// int age;
// cout << "enter the age: ";
// cin >> age;
// if (age >= 18)
// {
//     cout << "valid age";
// }else{
//     cout<< "under age";
// char ch;
// cout << " enter the character : ";
// cin >> ch;
// if( int(ch)<=96) // a = 97, A = 65
// {cout << "uppercase";}
// else{
//     cout <<"lowercase";
// }
// Ternary Statement
// condition ? stt1(if true) : strr2(if false);
// int n = 45;
// cout << (n>=0 ? "positive": "negative") << endl;
// Loops
// while,for,do-while
// int n;
// cout << "enter the value of n : ";
// cin >> n;
// int count =1;
// while(count<=n){
//     cout <<count << endl;
//     count++;}

// For loops
// for(initialisation; condition : updation)
// int i =1 ; initialisation
// i<=n ; condition
// i++ updation
// int n;
// cout << "enter n : ";
// cin >> n;
// int sum =0;
// for(int i=1; i<=n;i++){
//     sum = sum+i;
//     if(i ==5){
//         break; (keyword) it will break at 5 and wont run again
//     }
// } cout << "sum is "<< sum;
// int i =1;
// while(i<=n){
//     sum = sum+i;
//     i++;
// }
// cout << sum;

// sum of odd numbers from 1 to n
// int n;
// cout<< "enter n : ";
// cin >> n;
// int oddsum =0;
// for(int i =1;i<=n;i+=2){
//     if(i%2!=0){
//         oddsum +=i;
//     }
// //sum = sum+i;
// }
// cout << oddsum;

// int i = 1;
// int sum =0;
// while(i<=n){
//     if(i%2!=0){
//         sum = sum+i;
//     }
//     i++;
// }
// cout << sum;

// do while loop - it runs atleast once
// int n = 10;
// int i =1;
// do{
//     cout <<i << " ";
//     i++;
// }
// while (i<=n);
// cout << endl;

// int n; PRIME
// cout << "enter n :";
// cin >>n;
// bool isPrime = true;
// for(int i =2; i*i<=n; i++){
//     if(n%i==0){
//         isPrime = false;
//     break;}
//         }
//     cout << isPrime<<endl;

// int n=10;
// for(int i=1;i<=n;i++){ // line
//     int m =5;
//     for(int j=1;j<=m;j++){
//      cout <<"*";}
//      cout<<endl;
// }
// sum of all numbers divisible by 3 from 1 to n;
// int n;
// cout<<"n";
// cin>>n;
// int sum =0;
// for(int i =1; i<=n;i++){
//     if(i%3==0){
//         sum = sum+i;
//     }
// }  cout<<sum;
// int n;
// cout<<"n : ";
// cin>>n;
// int fact =1;
// int i=1;
// // for(int i=1;i<=n;i++){
// //     fact = fact*i;
// // }
// // cout << fact;
// while(i<=n)
// {fact = fact*i;
// i++;}
// cout << "fact is" <<fact;

// Patterns
// outer loop = number of lines
// inner loop = what to print in those lines
// int n;
// cout<<"n : ";
// cin>>n;
// for(int i=0;i<n;i++){ // use i=0 instead of i=1
//   for(int j=0;j<n;j++) {
//     cout<<"*"<<" ";
//   }
// cout << endl; // next line after every iteration
// }

// int n;
// cout<<"n : ";
// cin>>n;
// for(int i=0;i<n;i++){// outer
//     char ch = 'A'; // because every line should start with A
//     // otherwise it will print abcdefg etc etc
//     for(int j=0;j<n;j++){  // inner loop => line start
//    cout<<ch;
//    ch = ch + 1; // 65+1 => 66-> B
//     }
//     cout<< endl;
// }

// int n;
// cout<<"n : ";
// cin>>n;
// int num =1;
// for(int i=0;i<n;i++){
// for(int j=0;j<n;j++){ // if we write in inner line
// // it will be reset in next line.
//     cout<< num;
//     num ++;
// }cout << endl;
// } cout << "after pattern no is : "<< num<<endl;//10

// int n;
// cout<<"n : ";
// cin>>n;
// char ch = 'A';
// for(int i=0;i<n;i++){
// for(int j=0;j<n;j++){ // if we write in inner line
// // it will be reset in next line.
//     cout<< ch;
//     ch ++;
// }cout << endl;
// }

// Triangle Pattern
// *
// **
// ***
// ****
// int n;
// cout << "n : ";
// cin>>n;
// for(int i=0;i<n;i++){
// for(int j=0;j<=i;j++){
//         cout<<"* ";
// } cout<<endl;
// }
// 1
// 22
// 333
// 4444
// int n;
// cout << "n : ";
// cin>>n;
// for(int i=0;i<n;i++){
// for(int j=0;j<=i;j++){
//         cout<<(i+1);
// } cout<<endl;
// }

// 1
// 12
// 123
// 1234
// int n;
// cout << "n : ";
// cin>>n;
// for(int i=0;i<n;i++){
// for(int j=0;j<=i;j++){
//         cout<<(j+1);
// } cout<<endl;
// }

// 1
// 21
// 321
// 4321

// int n;
// cout << "n : ";
// cin>>n;
// for(int i=0;i<n;i++){
// for(int j=i+1;j>0;j--){
//         cout<<j;
// } cout<<endl;
// }

// 1
// 23
// 456
// 78910
// int n;
// cout << "n : ";
// cin>>n;
// int num =1;
// for(int i=0;i<n;i++){
// for(int j=0;j<=i;j++){
//     cout<<num;
//     num ++;
// } cout<<endl;
// 1111
// 222
// 33
// 4

// int n;
// cout << "n : ";
// cin>>n;
// for(int i=0;i<n;i++){
// for(int j=0;j<i;j++){ // i times spaces
//         cout<<" ";}
// for(int j=0;j<(n-i);j++)
// {
//     cout<<(i+1);
// } cout<<endl;
// }
//  ***1
//  **12 1
//  *123 21
//  1234 321
// int n;
// cout << "n : ";
// cin>>n;
// for(int i=0;i<n;i++){
//     // spaces n-i-1
// for(int j=0;j<(n-i-1);j++){
//         cout<<" ";
// }
// // nums1 = i+1
// for(int j =1; j<=(i+1);j++){
//     cout<< j;
// }
// // nums2
// for(int j =i; j>=1;j--){
//     cout<< j;
// }
// cout<<endl;
// }
// int n=4;
// cout << " n: ";
// cin >>n;
// for(int i=0;i<n;i++){
//     // spaces
//     for(int j =0; j<(n-i-1);j++){
//     cout<< " ";
//     }
//     cout<<"*";
//     if(i!=0){
//         //spaces
//         for(int j =0; j<(2*i-1);j++){
//     cout<< " ";
//     }
//         cout << "*";
//     }
//     cout<<endl;
// }
// // bottom
// for(int i=0;i<n-1;i++){
//     // spaces
//      for(int j =0; j<i+1;j++){
//     cout<< " ";
//     }
//     cout<<"*";
//     if(i!=n-2){
//         // spaces
//          for(int j =0; j<2*(n-i)-5;j++){
//     cout<< " ";
//     }
//         cout<<"*";
//     }
//     cout<<endl;
// }
//     return 0;
// }

// Function syntax
// void printHello(){
//     cout<<"hello\n";
// }
// int main(){
//     // function call
//  printHello();
//     return 0;
// }
// void sum(int a, int b){
//     int s= a+b;
//     cout<<s;
// }
// int sum(int a, int b){
//     int s= a+b;
//     return s;}

// min of 2 numbers
// int min(int a,int b){ // parameters
//     int ans;
//     if(a>b){
//         ans = b;
//     }
//     else if(a==b){
//         cout<<"both are equal"<<endl;
//     }
//     else{
//         ans = a;
//     }
//     return ans;
// }

// sum of 1 to N numbers
// int sumN(int n){
//     int sum =0;
//     for(int i=1;i<=n;i++){
//     sum = sum+i;}
//     return sum ;
// }

// Factoria of n
// int factN(int n){
//     int fact =1;
//     for(int i=1;i<=n;i++){
//         fact = fact*i;
//     }
//     return fact;
// }
// int main(){
// //   cout<< sum(5,7)<<endl;
// //cout<<min(15,8)<<endl; // arguments
// //cout << sumN(5)<<endl;
// cout << factN(5)<<endl;
// return 0;
// }

// Digit Sum of a number
// int SumOfDigits(int num){
//     int digSum =0;
// while(num>0){
//     int lastDig = num % 10;
//     num = num/10;
//     digSum +=lastDig;
// } return digSum;
// }
// int main(){
// cout<<"Sumofdigits is"<< SumOfDigits(2356)<<endl;
//     return 0;
// }

// Binomial Coefficient
//    int factorial(int n){
//     int fact =1;
//         for(int i=1;i<=n;i++){
//             fact = fact*i;
//         }
//         return fact;
//     }
// int nCr(int n, int r){
//     int fact_n = factorial(n);
//     int fact_r = factorial(r);
//     int fact_nmr = factorial(n-r);
//     return fact_n/(fact_r * fact_nmr);
// }
// int main(){
//     int n=8, r=2;
//  cout<< nCr(n,r)<<endl;
//  return 0;
// }

// check a number prime or not
// int prime(int n){
//      bool is_prime = 1;
//     for(int i =2;i<n;i++){
//         if(n%i==0){
//             is_prime = 0;
//             break;
//         }
//     }
//     return is_prime ;
// }
// void primesUpToN(int n){
//     cout << "primes from 2 to "<<n<<" are: ";
//     for(int i=2;i<=n;i++){
//         if(prime(i)){
//             cout<< i << " ";
//         }
//     } cout<< endl;
// }
// int main(){
//     //cout << prime(10)<<endl;
//     primesUpToN(20);
//     return 0;
// }

// Decimal to Binary
// int decToBinary(int decNum){
//     int ans =0 , pow =1;
//     while(decNum >0){
//         int rem = decNum%2;
//         decNum = decNum/2;
//         ans +=(rem * pow);
//         pow*=10;
//     }
//     return ans; // binary form
// }
// int main(){
//     int decNum = 50;
//     cout << decToBinary(decNum)<< endl;
//     return 0;
// }

// binary to Decimal
// int biToDec(int biNum){
//     int ans =0, pow =1; // 2^0
//     while(biNum >0){
//         int rem = biNum%10;
//         ans +=(rem*pow);
//          biNum /=10;
//         pow*=2;
//     }
//     return ans;
// }
// int main(){
//     int biNum = 11001;
//     cout<<biToDec(biNum)<<endl;
//     return 0;
// }

// Two's complement
// convert to binary
// prefix with 0;
// 1's complement 0->1;1->0
// left most number is most significant bit(msb)
// if msb =0 no is +ve; if 1 then -ve.
// int n = -10;
// 1010
// 01010 // add 0 in front
// 10101 // reverse
// 10110 // add +1 (1+1 =10) // twos complement

// Bitwise operators
// int main(){
//     int a=6,b=10;
//     cout<<(a & b)<<endl;
//     cout<<(a | b)<<endl;
//     cout<<(a ^ b)<<endl;
//     cout<<(10 << 2)<<endl;
//     cout<<(10 >> 1 )<<endl;
// }
// int main(){
//     cout<<sizeof(short int);
// }

// power of 2
// bool is_power(int n){
// while(n>1){
//     if(n%2 !=0){
//     return false;
// } n =n/2;}
//  return true;}
// int main(){
//     int num;
//     cout<< "enter num : ";
//     cin>>num;
//     if(is_power(num)){
//         cout<< num << "is power of 2";
//     }
//     else
//     cout << "not a power of 2";
// }
// bool power(int n){
//     return (n>0)&&((n & (n-1))==0);
// }
// int main(){
//     int num;
//     cout<<"num :";
//     cin >> num;
//     if(power(num)){
//         cout << num<<" is power of 2";
//     }else{
//         cout<< " not a power of 2";
//     }
//      return 0;
// }

// bool isPower(int n){
//     if(n<0){
//         return false;
//     }
//     while(n%3 == 0){
//         n= n/3;
//     }
//     return n ==1;
// }
// int main(){
//     int num;
//     cout<<"num";
//     cin>>num;
//     if(isPower(num)){
//         cout<<"power of 3";
//     }
//     else{
//         cout<<"not a power";
//     }
// }

// Array - same type data,continuous in memory
// linear index -> 0 to size -1
// #include <climits>
// int main(){
// int marks[5] = {99,100,54,36,88};
// marks[0] = 101; //possible
// double price[] = {98.99,105.67,30.00};
// int size =5;
// int sz = sizeof(marks);
// int size =5;
// //int marks[size] = {99,100,54,36,88};
// int marks[size];
// for(int i=0;i<size;i++){
//     cin >> marks[i]; // dont use',' while entering nums
// }
// // loops 0 to size-1
// for(int i=0;i<size;i++){
//     cout<<marks[i]<<endl;
// }
// INT_MAX = + infinity
// int nums[] ={5,15,42,-21,-15,24};
// int size =6;
// int smallest = INT_MAX;
// int largest = INT_MIN;
// int minIndex =0;
// int maxIndex =0;
// for(int i=0;i<size;i++){
//     if(smallest>nums[i]){
//         smallest = nums[i];
//     }
// }

// min and max functions
// for(int i=0;i<size;i++){
//     smallest = min(nums[i],smallest);
//     largest = max(nums[i],largest);
// // min finds the smallest among the 2 arguments
// }
// cout<<smallest<<endl;
// cout<<largest<<endl;
// for(int i=0;i<size;i++){
//     if(nums[i] == smallest){
//         minIndex =i;
//     }
//      if(nums[i] == largest){
//         maxIndex =i;
//     }
// }
// cout << "min number is at index : "<<minIndex<<endl;
// cout << "max number is at index : "<<maxIndex<<endl;
// return 0;
// }

// Linear Search Time complexity o(n)
// Binary search o(logn)
// int linearSearch(int arr[],int sz, int target){
//     for(int i=0;i<sz;i++){
//         if(arr[i]==target){ //found
//             return i;
//         }
//     } return -1; // NOT FOUND
// }
// int main(){
//     int arr[] ={4,2,7,8,1,2,5};
//     int sz =7;
//     int target = 15;
//     cout<< linearSearch(arr,sz,target)<<endl;
// }

// Reverse an ARRAY 2 pointer algorithm o(n)
// arr[] = {4,2,7,8,1,2,5}
// void reverse(int arr[],int sz){
//     int start =0,end =sz-1;
//     while(start < end){ // = if size is odd
//         swap(arr[start],arr[end]);
//         start ++;
//         end--;
//     }
// }
// int main(){
// int arr[] = {4,2,7,8,1,2,5};
// int sz = 7;
//  reverse(arr,7);
//  for(int i=0;i<sz;i++){
//     cout<<arr[i]<<" ";
//  } cout<<endl;
//     return 0;
// }

// int sumArray(int arr[],int sz){
//     int sum =0;
// for(int i=0;i<sz;i++){
//  sum = sum+arr[i];
// } return sum;
// }
// int main(){
//     int arr[] ={1,3,5,6,2};
//     int sz = 5;
//     cout<< sumArray(arr,5)<< endl;
// }

// void prodArray(int arr[],int sz){
//     int prod =1;
//     for(int i=0;i<sz;i++){
//         prod = prod*arr[i];
//     }
//     cout<<prod<<endl;
// }
// int main(){
//     int arr[]={1,3,5,4,6,2};
//     int sz =6;
//     prodArray(arr,6);
// }

// void numSwap(int arr[],int sz){
//     int smallest =INT_MAX;
//     int smallest_index =0;
//     int largest = INT_MIN;
//     int largest_index =0;
//     for(int i=0;i<sz;i++){
//         if(smallest >arr[i]){
//         smallest = arr[i];
//     smallest_index = i;}
//     if(largest <arr[i]){
//         largest = arr[i];
//      largest_index = i;}
// }
//    swap(arr[smallest_index],arr[largest_index]);
// }
// int main(){
//     int arr[] = {1,2,8,-9,6,15,22};
//     int sz = 7;
//      numSwap(arr,7);
//      for(int i=0;i<sz;i++){
//         cout <<arr[i]<<" ";
//      }
//      cout<<endl;
// }

// bool isUnique(int arr[], int sz, int index){
//     for(int i=0;i<sz;i++){
//         if(i!= index && arr[i] == arr[index]){
//             return false;
//         }
//     }return true;
// }
// int main(){
//     int arr[] = {3,4,5,8,4,8,9};
//     int sz = 7;
//     {
//     for(int i=0;i<sz;i++){
//         if(isUnique(arr,7,i))
//         cout <<arr[i]<<" ";
//     }}
// }

// Vectors - dynamic
// Syntax
// use -std=c++11 before code.cpp
// #include <vector> // important
// int main(){
// vector<int> vec = {1,2,3};
// vector<int> vec(5,0);
// vector<char> vec = {'a','b','c','d','e'};
// vector<int> vec;
// cout<<"size = "<<vec.size() <<endl;

// vec.push_back(0); // adds at last
// vec.push_back(1);
// vec.push_back(2);
// vec.push_back(3);
// vec.push_back(4);
// cout<<"after push back size = "<<vec.size() <<endl;
// cout<<"vector size " << vec.size()<<endl;
// cout<<"vector capacity "<< vec.capacity()<<endl;
// vec.pop_back(); // deletes last one
// for(int val :vec){ // for each loop
//     cout<< val << endl;
// }
// cout<< vec.front()<<endl; // prints 1st value
// cout<< vec.back()<<endl; // prints last value
// cout<< vec.at(1)<<endl; // prints value at 1

// we add & before name is pass by referece
// return 0;}

// linear search vector
// int linearSearch( vector<int> vec, int target){
//     for(int val : vec){
//         if(val == target){
//             return 1;
//         }
//     }return 0;
// }
// int main(){
//     vector<int> vec = {1,8,6,9,7};
//     int target = 7;
//     if(linearSearch(vec,target)){
//         cout<<" target found";
//     }
//     else{
//         cout<<"target not found";}
// }

// Reverse a vector
// void Reverse( vector<int>& vec){
//     int start =0;
//     int end = vec.size() - 1;
//     while(start < end){
//         swap(vec[start],vec[end]);
//         start++;
//         end--;
//     }
// }
// int main(){
//     vector<int> vec = {1,5,6,7,9,4};
//     Reverse(vec);
//     for(int val : vec){
//         cout<<val<<" ";
//     } return 0;
// }

// Kadanes algorithm;
// int main(){
//     int n=5;
//     int arr[5] = {1,2,3,4,5};
//     for(int st=0; st<n;st++){
//         for(int end=st;end<n;end++){
//             for(int i=st;i<=end;i++){
//                 cout<< arr[i];
//             } cout<<" ";
//         }cout<<endl;
//     }
// }

// maximum subarray sum
// brute force
// int main(){
//     int n=5;
//     int arr[5] = {1,2,3,4,5};
//     int maxSum = INT_MIN;
//     for(int st=0;st<n;st++){
//         int currSum =0;
//         for(int end = st; end<n;end++){
//             currSum += arr[end];
//             maxSum = max(currSum,maxSum);
//         }
//     } cout << "max SubArray sum = "<<maxSum<<endl;
// }
// int maxSubarraySum(vector<int>& arr){
//     int currSum =arr[0];
//     int MaxSum =arr[0];
//     for(int i=1;i<arr.size();i++){
//         currSum = max(currSum,currSum+arr[i]);
//         MaxSum = max(currSum,MaxSum);
//     }
//     return MaxSum;
// }
// int main(){
//     int arr[] = {-2,3,4,-1,2,-3,2,1};
//     cout <<" max Subarray sum : "<<maxSubarraySum<<endl;
// }

// PAIR SUM :BRUTE FORCE
// vector<int> pairSum(vector<int> nums, int target){
//     vector<int> ans;
//      int n = nums.size();
//      for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//         if(nums[i]+nums[j] == target){
//          ans.push_back(nums[i]);
//          ans.push_back(nums[j]);
//          return ans;}
//         }
//      } return ans;
// }
// int main(){
//     vector<int> nums = {2,7,11,15};
//     int target =18;
//  vector<int> ans = pairSum(nums,target);
//   cout << ans[0] << ","<<ans[1]<<endl;
//    return 0;
// }

// PAIR SOME : 2POINTERS // o(n)
//  vector<int> pairSum(vector<int> nums, int target){
//      vector<int> ans;
//       int n = nums.size();
//       int i=0,j=n-1;
//       while(i<j){
//          int sum = nums[i] + nums[j];
//          if(sum > target){
//              j--;
//          }
//          else if(sum < target){
//              i++;
//          }
//          else {
//              ans.push_back(nums[i]);
//              ans.push_back(nums[j]);
//              return ans;
//          }
//       } return ans;
//  }
//  int main(){
//      vector<int> nums = {2,7,11,15};
//      int target =26;
//   vector<int> ans = pairSum(nums,target);
//    cout << ans[0] << ","<<ans[1]<<endl;
//     return 0;
//  }

// MAJORITY ELEMENT - BRUTEFORCE
//   int majorityElement(vector<int>& nums) {
//      int n = nums.size();
//          for(int val : nums){
//              int freq =0;
//              for(int el : nums){
//               if (el == val){
//                  freq++;
//               }
//              }if(freq > n/2){
//                 return val;
//              }
//          }
//      }
//  int main(){
//      vector<int> nums = {2,1,2,1,2};
//      cout << majorityElement(nums)<<endl;
//  }

// Majority Element - Sorting O(nlogn)
// int majorityElement(vector<int>& nums) {
//     int n = nums.size();
//     // sort
//     sort(nums.begin(),nums.end());
//     // freq count
//     int freq =1, ans = nums[0];
//     for(int i=1; i<n;i++){
//         if(nums[i] == nums[i-1]){
//             freq++;
//         }else{
//             freq =1;
//             ans = nums[i];
//         }
//         if(freq>n/2){
//             return ans;
//         }
//     } return ans;
// }
// int main(){
//         vector<int> nums = {2,1,2,1,2};
//         cout << majorityElement(nums)<<endl;
//     }

// Majority Element - Moores voting algorithm
//  int majorityElement(vector<int>& nums){
//     int n= nums.size();
//    int freq=0, ans =0;
//    for(int i=0;i<n;i++){
//     if(freq == 0){
//         ans = nums[i];
//     }
//     if(ans == nums[i]){
//         freq++;
//     }
//     else{
//     freq--;}
//    } return ans;
//  }
//  int main(){
//         vector<int> nums = {2,3,3,3,3,3,3,1,2,1,2};
//         cout << majorityElement(nums)<<endl;
//     }

// double myPow(double x, int n){
//     if(n ==0) return 1.0;
//     if(x ==0) return 0.0;
//     if(x ==1) return 1.0;
//     if(x == -1 && n%2 == 0) return 1.0;
//     if(x == -1 && n%2 != 0) return -1.0;
//     long b = n;
//     if(n<0){
//         x = 1/x;
//         b = -b;
//     }
//     double ans =1;
//     while(b>0){
//         if(b%2 ==1){
//             ans*=x;
//         }
//         x*=x;
//         b/=2;
//     }
//     return ans;
// }

// int stock(vector<int> prices){
//    long min_price = INT_MAX;
//    long max_profit =0;
//    for(int val : prices){
//     if(min_price > val){
//         min_price = val;
//     }
//     int profit = val - min_price;
//     if(profit > max_profit)
//    { max_profit = profit;}
//    }
//   return max_profit;
// }
// int main(){
//  vector<int> prices = {7,1,5,3,6,4};
//  cout << stock(prices)<<endl;
// }

// Pointers
// * -> Dereferencing operator
// void changeA(int a){ // pass by value
//     a =20;
// }
// void changeA(int* ptr){ // pass by reference using pointer
//     *ptr =20;
// }
// void changeA(int &b){ // pass by reference using alias
//     b =20;
// }
// int main(){
// int a= 10;
// int* ptr = &a;
// int** parPtr = &ptr;
// cout<< &ptr<<endl;
// cout<< parPtr<<endl;
// cout<< *(parPtr)<<endl;
// cout<<ptr<<endl;
// cout<<**(parPtr)<<endl;
// cout<< &a<<endl;
// cout<< ptr<<endl;
// cout<< &ptr<<endl;
// cout<< *(&a)<<endl;
//   int a =5;
//    int* p = &a;
//    int** q = &p;
//    cout<<*p<<endl;
//    cout<<**q<<endl;
//     cout<<p<<endl;
//    cout<<*q<<endl;
//    cout<<&a;
// int a =10;
//      //changeA(a);
// // changeA(&a);
// changeA(a);
// cout<<"inside main fnx : " <<a<<endl; //20
// int arr[] = {6,7,8,9};
// cout<<*(arr+1)<<endl;
// cout<<*(arr+2)<<endl;
// cout<<*(arr)+3<<endl;
// int* ptr2; we can subtract pointers
// ans is remaining blocks of that type
// int* ptr1 = ptr2+2;
// cout<<ptr1-ptr2<<endl;
// int arr[] = {10,20,30,40};
// int* ptr = arr;
// cout<<*(ptr+1)<<endl;
// cout<<*(ptr+3)<<endl;
// ptr++;
// cout<<*ptr<<endl;
//     return 0;
// }

// STL
// #include<list>
// #include<deque>
// #include<stack>
// #include<queue>
// #include<map>
// #include<unordered_map>
// #include<set>
// #include<unordered_set>

// VECTORS
//  int main(){
//  vector<int> vec;//0
//  vector<int> vec = {1,2,3,4,5};
//  vector<int> vec(3,10);
//  vec.push_back(1);
//  vec.push_back(2);
//  vec.push_back(3);
//  vec.push_back(4);
//  vec.push_back(5);
//  vec.emplace_back(6);
//  vec.pop_back();
//  cout<<vec.size()<<endl;
//  cout<<vec.capacity()<<endl;
//  for(int val : vec){
//      cout<<val<<" ";
//  }
//  cout<<endl;
//  cout<<"val at idx 2 :"<<vec[2]<<" or "<<vec.at(2)<<endl;
//  cout<<endl;
//  FRONT AND BACK
//  cout<<"at front : "<<vec.front()<<endl;
//  cout<<"at back : "<<vec.back()<<endl;
//  cout<<*vec.begin(); -> gives 1st element
//  ERASE
//  vec.erase(vec.begin());
//  vec.erase(vec.begin()+2);
//  vec.erase(vec.begin()+1,vec.begin()+3);
//  for(int val : vec){
//      cout<<val<<" ";
//  }
//  cout<<endl;
//  cout<<vec.size();
//  cout<<vec.capacity();

// INSERT
// vec.insert(vec.begin()+2,100);

// CLEAR
// vec.clear();
//  cout<<vec.size();
//  cout<<vec.capacity();

// EMPTY
// cout<<"is empty : "<<vec.empty()<<endl;
//  for(int val : vec){
//      cout<<val<<" ";
//  }
// cout<<*vec.end();

// ITERATORS
// vector<int>:: iterator it;
// for(it = vec.begin();it!=vec.end();it++){
//     cout<<*(it)<<" "<<endl;
// }
// we can also use without the line 1194
// for(vector<int>:: iterator it = vec.begin();it != vec.end();it++){
//     cout<<*it<<" "<<endl;
//}
// for(auto it = vec.rbegin();it != vec.rend();it++){
//     cout<<*it<<" "<<endl;
// }
// cout<<endl;

// LIST
//  list<int> l;
//  l.emplace_back(1);
//  l.push_back(2);
//  l.push_front(3);
//  l.push_front(5);
//  l.pop_back();
//  l.pop_front();
//  for(int val : l){
//      cout<<val<<" ";
//  }
//  cout<<l[2]<<endl; //not possible in list
//  cout<<endl;

// DEQUE
//  deque<int> d = {1,2,3,4,5};
//  for(int val : d){
//      cout<<val<<" ";
//  }
//  cout<<d[2]<<endl; // possible in queue not in list
//  cout<<endl;

// PAIRS
// pair<int,int> p = {3,5};
// pair<char,int> p = {'a',5};
//  cout<<p.first<<endl;
//  cout<<p.second<<endl;
//  pair<int,pair<char,int>> p = {3,{'a',5}};
//  cout<<p.second.first<<endl;
//  cout<<p.second.second<<endl;
//  vector<pair<int,int>> vec = {{1,2},{2,3},{3,4}};
//  vec.push_back({4,5});//insert
//  vec.emplace_back(4,5);// in-place objects create
//  for(auto p : vec){
//      cout<<p.first<<" "<<p.second<<endl;
//  }

// STACK
//  stack<int> s;
//  s.push(1);
//  s.push(2);
//  s.push(3);
//  while (!s.empty())
//  {
//      cout<<s.top()<<" ";
//      s.pop();
//  }
//  cout<<endl;
// cout<<"top = "<<s.top()<<endl;
//  stack<int> s2;
//  s2.swap(s);
//  cout<<"s size : "<<s.size()<<endl;
//  cout<<"s2 size : "<<s2.size();

// QUEUE
//  queue<int> q;
//  q.push(1);
//  q.push(2);
//  q.push(3);
//  while(!q.empty()){
//      cout<<q.front()<<" ";
//      q.pop();
//  }
//  cout<<endl;

// PRIORITY_QUEUE
//  FOR LARGEST TO BE ON TOP
//  priority_queue<int> q;
//  FOR SMALLEST TO BE ON TOP
//  priority_queue<int,vector<int>,greater<int>> q;
//  q.push(5);
//  q.push(3);
//  q.push(10);
//  q.push(4);
//  while(!q.empty()){
//      cout<<q.top()<<" ";
//      q.pop();
//  }
//  cout<<endl;

// MAP
// map(key,value) key should be unique
//  map<string,int> m;
//  m["tv"] =100;
//  m["laptop"] =100;
//  m["phone"] =50;
//  m["tabet"] =120;
//  m["watch"] =50;
//   m.insert({"camera",25});
//  // m.emplace({"camera",25});
//  for(auto p:m){
//      cout<<p.first<<" "<<p.second<<endl;
//  }
//  if(m.find("camera") != m.end()){
//      cout<<"found\n";
//  }else{
//      cout<<"not found\n";
//      }
//  cout<<"count = "<<m.count("laptop")<<endl;
// cout<<m.size();

// MULTIMAP
//  multimap<string,int> m;
//  m.emplace("tv",100);
//  m.emplace("tv",100);
//  m.emplace("tv",100);
//  m.emplace("tv",100);
//   m.insert({"camera",25});
//  for(auto p:m){
//      cout<<p.first<<" "<<p.second<<endl;
//  }

// UNORDERED_MAP
//  unordered_map<string,int> m;
//  m.emplace("tv",100);
//  m.emplace("laptop",100);
//  m.emplace("fridge",100);
//  m.emplace("watch",100);
//  for(auto p:m){
//      cout<<p.first<<" "<<p.second<<endl;
//  }

// SET
//  set<int> s;
//  s.insert(1);
//  s.insert(2);
//  s.insert(3);
//  s.insert(4);
//  s.insert(5);
//  s.insert(6);
//  cout<<"lower bound = "<<*(s.lower_bound(4))<<endl;//4
//  cout<<"upper bound = "<<*(s.upper_bound(4))<<endl;//5
//  for(auto val:s){
//      cout<<val<<" ";
//  }
//  cout<<endl;

// MULTISET
//  multiset<int> s;
//  s.insert(1);
//  s.insert(2);
//  s.insert(3);
//  s.insert(4);
//  s.insert(5);
//  s.insert(1);
//  s.insert(2);
//  for(auto val:s){
//      cout<<val<<" ";
//  }
//  cout<<endl;

// UNORDEREDSET
//  unordered_set<int> s;
//  s.insert(1);
//  s.insert(2);
//  s.insert(3);
//  s.insert(4);
//  s.insert(2);
//  s.insert(3);
//
//  for(auto val:s){
//      cout<<val<<" ";
//  }
//  cout<<endl;
//}

// VECTOR PAIR REVERSE SORT
// bool comparator(pair<int,int>p1,pair<int,int>p2){
//     if(p1.second<p2.second) return true;
//     if(p1.second>p2.second) return false;
//     if(p1.first<p2.first) return true;
//     else return false;
// }

// SORTING
// int main(){
//  For Arrays
//  int arr[5] = {3,5,1,8,2};
//  sort(arr,arr+5);
//  for(int val: arr){
//      cout<<val<<" ";
//  }
//  cout<<endl;
//  //
//  vector<int> vec = {3,5,1,8,2};
//  sort(vec.begin(),vec.end());
//  //
//  for(int val: vec){
//      cout<<val<<" ";
//  }
//  // REVERSE ORDER
//  sort(vec.begin(),vec.end(),greater<int>());
//  for(int val: vec){
//      cout<<val<<" ";
//  }
// vector<pair<int,int>> vec = {{3,1},{2,1},{7,1},{5,2}};
//  sort(vec.begin(),vec.end());
//  // They will sort w.r.t first value
//  for(auto p : vec){
//      cout<<p.first<<" "<<p.second<<endl;
//  }
//  sort(vec.begin(),vec.end(),comparator);
//  // They will sort w.r.t second value
//  for(auto p : vec){
//      cout<<p.first<<" "<<p.second<<endl;
//  }

// REVERSE
//  vector<int> vec = {1,2,3,4,5};
//  reverse(vec.begin()+1,vec.begin()+3); //start & end
//  for(auto val : vec){
//      cout<<val<<" ";
//  }

// NEXT PERMUTATION
//  string s = "abc";
//  prev_permutation(s.begin(),s.end());
//  cout<<s<<endl;

// MAX ELEMENT
//  vector<int> vec = {1,2,3,4,5};
//  cout<<*(max_element(vec.begin(),vec.end()))<<endl;

// MIN ELEMENT
//  vector<int> vec = {1,2,3,4,5};
//  cout<<*(min_element(vec.begin(),vec.end()));

// BINARY SEARCH
//  vector<int> vec = {1,2,3,4,5};
//  cout<< binary_search(vec.begin(),vec.end(),4)<<endl;
//  cout<< binary_search(vec.begin(),vec.end(),10)<<endl;

// EXTRAS
// int n1 =15;
// long int n2 =15;
// long long int n3 =15;
// cout<<__builtin_popcount(n1)<<endl;
// cout<<__builtin_popcountl(n2)<<endl;
// cout<<__builtin_popcountll(n3)<<endl;
//}

// BINARY SEARCH
// int binarySearch(vector<int> arr, int target){
//     int st =0;
//     int end = arr.size()-1;
//     while(st<=end){
//         int mid = st + ( end - st)/2;
//         if(target > arr[mid]){
//             st = mid +1;
//         }
//         else if (target < arr[mid]){
//             end = mid-1;
//         }
//         else{
//             return mid;
//         }
//     }
//     return -1;
// }
// int main(){
//     vector<int> arr1 = {-1,0,3,4,5,9,12}; // odd
//     int tar1 =12;
//     //cout<<binarySearch(arr1,tar1);
//     vector<int> arr2 = {-1,0,3,5,9,12}; // even
//     int tar2 =0;
//     cout<<binarySearch(arr2,tar2);
//     //STL - cout<<binary_search(arr1.begin(),arr1.end(),12); //1
// }

// SEARCH IN ROTATED SORTED ARRAY
// int Search(vector<int> A, int target){
//     int st =0, end = A.size()-1;
//     while(st<=end){
//         int mid = st +(end-st)/2 ;
//         if(target == A[mid]){
//             return mid;
//         }
//         if(A[st]<=A[mid]){ // Left sorted
//             if(A[st]<=target and target <= A[mid]){
//                 end = mid-1;
//             } else{
//                 st = mid+1;
//             }
//         } else{ // right sorted
//             if(A[mid]<=target and target<=A[end]){
//                 st = mid+1;
//             }else {
//                 end = mid-1;
//             }
//         }
//     } return -1;
// }
// int main(){
//     vector<int> A = {3,4,5,6,7,0,1,2};
//     int target = 0;
//     cout<< Search(A,target);
// }

// PEAK ELEMENT IN MOUNTAIN ARRAY
// int PeakElement(vector<int> arr){
//     int st =0,end = arr.size()-1;
//     while(st<=end){
//         int mid = st + (end-st)/2;
//         if(arr[mid]>arr[mid+1] and arr[mid]>arr[mid-1]){
//             return mid;
//         }
//         if(arr[mid]>arr[mid-1]){
//             st = mid+1;
//         }
//         else{
//             end = mid-1;
//         }
//     } return -1;
// }
// int main(){
//     vector<int> arr = {3,4,5,7,0,1,2};
//     cout<< PeakElement(arr);
// }

// SINGLE ELEMENT IN SORTED ARRAY
// int SingleElement(vector<int> arr){
//     int n = arr.size();
//     int st =1, end = n-2;
//     if (n ==0) return arr[0];
//     while(st <=end){
//         int mid = st +(end-st)/2;
//         if(mid ==0 and arr[0]!=arr[1]) return mid;
//         if(mid == n-1 and arr[n-1]!=arr[n-2]) return mid;
//         if(arr[mid] != arr[mid-1] and arr[mid] != arr[mid+1])
//         return arr[mid];
//         if(mid %2 ==0){ //even
//             if(arr[mid-1] == arr[mid]){  //left
//             end = mid-1;
//             }
//             else{ // right
//             st = mid+1;
//             }
//         }
//         else{ // odd
//             if(arr[mid-1] == arr[mid]){  //right
//             st = mid+1;
//             }
//             else{ //left
//             end = mid-1;
//             }
//         }
//     } return -1;
// }
// int main(){
//     vector<int> arr = {1,1,2,2,3,3,4,5,5,6,6};
//     cout<< SingleElement(arr);
// }

// BOOK ALLOCATION PROBLEM
// bool isValid(vector<int> &arr, int n, int m,int maxAllowedPages){// = mid, O(n)
//     int students =1,pages=0;
//     //
//     for(int i=0;i<n;i++){
//         if(arr[i] > maxAllowedPages){
//             return false;
//         }
//         //
//         if(pages + arr[i] <= maxAllowedPages){
//             pages +=arr[i];
//         } else{
//             students++;
//             pages = arr[i];
//         }
//     }
//     //
//     return students >m ? false :true;
// }
// //
// int allocateBooks(vector<int> &arr, int n, int m){ // O(logN*n)
//     if(m>n){
//         return -1;
//     }
//     int sum =0;
//     for(int i=0;i<n;i++){//O(n)
//         sum +=arr[i];
//     }
//     int ans =-1;
//     int st =0 ,end = sum; // range of possible answers
//     while(st<=end){// O(log(Range or N))
//         int mid = st + ( end - st)/2;
//         //
//         if(isValid(arr,n,m,mid)){ // left
//             ans = mid;
//             end = mid-1;
//         } else {//right
//             st = mid +1;
//         }
//     }
//     return ans;
// }
// int main(){
//     vector<int> arr = {2,1,3,4};
//     int n=4,m=2;
//     cout<< allocateBooks(arr,n,m)<<endl;
// }

// PAINTER'S PARTITION PROBLEM
// bool isPossible(vector<int> arr, int n, int m, int maxAllowedTime){
//     int painters =1,time =0;
//     for(int i=0;i<n;i++){
//         if (arr[i] > maxAllowedTime){
//         return false;
//         }
//         if(time + arr[i] <= maxAllowedTime){
//             time += arr[i];
//         }
//         else{
//             painters++; // we want new painter
//             time = arr[i];
//         }
//     } return painters <=m;
// }
// //
// int minTimeToPaint(vector<int> &arr,int n,int m){
//     int sum =0,maxVal = INT32_MIN;
//     for(int i=0;i<n;i++){
//         sum +=arr[i];
//         maxVal = max(maxVal,arr[i]);
//     }
//     int st=maxVal,end = sum,ans=-1;
//     while(st<=end){
//         int mid = (st+end)/2;
//         if(isPossible(arr,n,m,mid)){//left
//             ans = mid;
//             end = mid-1;
//         }
//         else{//right
//             st = mid+1;
//         }
//     }
//     return ans;
// }
// //
// int main(){
//     vector<int> arr = {40,100,10,20};
//     int n=4,m=2;
//     cout<<minTimeToPaint(arr,n,m);
// }

// SORTING ALGORITHMS
// BUBBLE SORT O(n^2)
//  void bubblesort(int arr[],int n){
//      for(int i=0;i<n;i++){
//          bool isSwap = false;
//          for(int j=0;j<(n-i-1);j++){
//              if(arr[j]>arr[j+1]){ // if we use < it will sort in descending order
//                  swap(arr[j],arr[j+1]);
//                  isSwap = true;
//              }
//          }
//          if(!isSwap){
//              //array already sorted
//              return;
//          }
//      }
//  }
//  void printArray(int arr[],int n){
//      for(int i=0;i<n;i++){
//          cout<<arr[i]<<" ";
//      }
//      cout<<endl;
//  }
//  int main(){
//      int n =5;
//      int arr[] = {4,1,5,2,3};
//      bubblesort(arr,n);
//      printArray(arr,n);
//  }

// SELECTION SORT O(n^2)
//  void selectionSort(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         int smallestIndex =i; //unsorted part starting
//         for(int j=i+1;j<n;j++){
//             if(arr[j]< arr[smallestIndex]){ // if we use > it will sort in descending order
//                 smallestIndex =j;
//             }
//         }swap(arr[i],arr[smallestIndex]);
//     }
//  }
//  void printArray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int n =5;
//     int arr[] = {4,1,5,2,3};
//     selectionSort(arr,n);
//     printArray(arr,n);
// }

// INSERTION SORT O(n^2)
//  void insertionSort(int arr[],int n){
//     for(int i=1;i<n;i++){
//         int curr = arr[i];
//         int prev = i-1;
//         while(prev>=0 && arr[prev] >curr){ // if we use < it will sort in descending order
//             arr[prev+1] = arr[prev];
//             prev--;
//         }
//         arr[prev+1] = curr; // placing the curr el in correct position
//     }
//  }
//  void printArray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//  }
// int main(){
//     int n =5;
//     int arr[] = {4,1,5,2,3};
//     insertionSort(arr,n);
//     printArray(arr,n);
// }

// MERGE SORT O(nlogn)

// SORT ARRAY WITH 0S,1S,2S
//   void sortColors(vector<int>& nums) {
//          int n = nums.size();
//          int count0 =0, count1 =0, count2 =0;
//          // O(n)
//          for(int i=0;i<n;i++){
//              if(nums[i]==0){
//                  count0++;
//              }
//              if(nums[i]==1){
//                  count1++;
//              }
//              if(nums[i]==2){
//                  count2++;
//              }
//          }
//          // O(n)
//          int idx =0;
//          for(int i=0;i<count0;i++){
//              nums[idx++] =0;
//          }
//          for(int i=0;i<count1;i++){
//              nums[idx++] =1;
//          }
//          for(int i=0;i<count2;i++){
//              nums[idx++] =2;
//          }
//      }
//  int main(){
//      vector<int> nums = {2,0,2,1,1,0};
//      sortColors(nums);
//  }

// DNF ALGORITHM O(n)
//(TAKE YOU FORWARD)
//  void sortColors(int arr[], int sz){
//      int low =0, mid =0, high = sz-1;
//      while(mid <= high){
//          if(arr[mid] ==0){
//              swap(arr[low],arr[mid]);
//              low++;
//              mid++;
//          }
//          else if(arr[mid] ==1){
//              mid++;
//          }
//          else{
//              swap(arr[mid],arr[high]);
//              high--;
//          }
//      }
//  }
//  int main(){
//      int arr[] = {2,0,2,1,1,0};
//      int sz =6;
//      sortColors(arr,sz);
//      for(int i=0;i<sz;i++){
//          cout<<arr[i]<<" ";
//      }cout<<endl;
//  }

// MERGE SORTED ARRAYS O(m+n)
//  void merge(vector<int>& A, int m, vector<int>& B, int n) {
//          int idx = m+n-1, i = m-1, j = n-1;
//          while(i >=0 && j>=0){
//              if(A[i] >= B[j]){
//                  A[idx] = A[i];
//                  idx--,i--;
//              } else {
//                  A[idx--] = B[j--];
//              }
//          }
//          while(j>=0){
//              A[idx--] = B[j--];
//          }
//      }
//  int main(){
//      vector<int> A = {1,2,3,0,0,0};
//      int m =3;
//      vector<int> B = {2,5,6};
//      int n =3;
//      merge(A,m,B,n);
//      for(int val : A){
//          cout<<val<<" ";
//      }
//      cout<<endl;
//  }

// NEXT PERMUTATION PROBLEM
//  void nextPermutation(vector<int>& nums) {
//          int n = nums.size();
//          int pivot = -1;
//          // step 1
//          for(int i=n-2;i>=0;i--){
//              if(nums[i]<nums[i+1]){
//                  pivot = i;
//                  break;
//              }
//          }
//          // step 2
//          if(pivot == -1){
//              reverse(nums.begin(),nums.end());
//              return;
//          }
//          for(int i=n-1;i>pivot;i--){
//              if(nums[i]>nums[pivot]){
//                  swap(nums[i],nums[pivot]);
//                  break;
//              }
//          }
//          // step 3
//          reverse(nums.begin()+pivot +1,nums.end());
//      }
//  int main(){
//      vector<int> nums = {1,2,3,5,4};
//      nextPermutation(nums);
//      for(int val : nums){
//          cout<<val<<" ";
//      } cout<<endl;
//  }

// CHAR ARRAYS
// int main(){
// char str[] = {'a','b','c','\0'}; // null char at the end
// char str[] = "hello"; // null char at the end
// cout<< strlen(str) << endl; // constant pointers
//  char str[12];
//  cout << "enter char array : ";
// cin>>str; // stops at space
//  we use cin.getline(str, len,delimiter);
// cin.getline(str,100,'$'); // stops at new line
//  cin.getline(str,12);
//  for(char ch : str){
//  cout<< ch <<" ";}
//  cout<<endl;
//     char str[] = "abhi ram";
//     int len =0;
//     for(int i=0;i<str[i]!= '\0';i++){
//         len++;
//     }
//     cout<<"length of string : "<<len<<endl;
//     return 0;
// }

// STRINGS
//   int main(){
//       string str = "apna college"; //dynamic => runtime resize
//       string str2 = "egelloc anpa"; //dynamic => runtime resize
//      // cout<<str<<endl;
//      // string str1 = "Joe";
//      // string str2 = "Scorpio";
//      // string str3 = str1 + " " + str2; //concatination
//      // cout<<str3<<endl;
//      // cout<<str1.length()<<endl;
//      // return 0;
//      reverse(str.begin(),str.end());
//      if(str == str2){
//          cout<< "palindrome"<<endl;
//      }
//   }

// VALID PALINDROME

// REMOVE ALL OCCURENCES
//  string removeOccurrences(string s, string part) {
//          while(s.length() >0 && s.find(part) < s.length()){
//              s.erase(s.find(part),part.length());
//          }
//          return s;
//      }
//  int main(){
//      string s = "daabcbaabcbc", part = "abc";
//      cout<<removeOccurrences(s,part)<<endl;
//      return 0;
//  }

// REVERSE WORDS IN A STRING
//  string reverseWords(string s) {
//          int n = s.length();
//          string ans = "";
//          reverse(s.begin(),s.end());
//          for(int i=0;i<n;i++){
//              string word = "";
//              while(i<n && s[i]!=' '){
//                  word +=s[i];
//                  i++;
//              }
//              reverse(word.begin(),word.end());
//              if(word.length()>0){
//                  ans +=" " + word;
//              }
//          }
//          return ans.substr(1);
//      }
//  int main(){
//      string s = "the sky is blue";
//      cout<< reverseWords(s);
//  }

// COMPRESS AN ARRAY OF CHARACTERS
//      int compress(vector<char>& chars) {
//          int n = chars.size();
//          int idx =0;
//          for(int i=0;i<n;i++){
//              char ch = chars[i];
//              int count =0;
//              while(i<n && chars[i] == ch){
//                  count++;i++;
//              }
//          if(count ==1){
//              chars[idx++] = ch;
//          }
//          else{
//              chars[idx++]=ch;
//              string str = to_string(count);
//              for(char dig : str){
//                  chars[idx++]=dig;
//              }
//          }i--;
//      } chars.resize(idx);
//          return idx;}
//  int main(){
//      vector<char> chars ={'a','a','b','b','c','c','c'};
//      int newLength = compress(chars);
//      cout << "[";
//      for (int i = 0; i < newLength; i++) {
//          cout << "\"" << chars[i] << "\"";
//          if (i < newLength - 1) cout << ",";
//      }
//      cout << "]" << endl;
//      return 0;
//  }

// DIGITS IN A NUMBER && SUM OF DIGITS
// void printDigits(int n)
// { // TC = O(logn base number(here 10))
//     int sum = 0;
//     // int count =0;
//     while (n != 0)
//     {
//         int digit = n % 10;
//         sum += digit;
//         // count++;
//         n = n / 10;
//     }
//     cout << sum << endl;
//     // cout<<count;
// }
// int main()
// {
//     int n = 3568;
//     // printDigits(n);
//     cout << (int)(log10(n) + 1) << endl; // number of digits
//     return 0;
// }

// ARMSTRONG NUMBER
//  bool isArmstrong(int n){ //TC = O(log(nbase10))
//      int copyN =n;
//      int sum = 0;
//      while(n!=0){
//          int digit = n%10;
//          sum += digit*digit*digit;
//          n = n/10;
//      } return sum == copyN;
//  }
//  int main()
//  {
//      int n = 153;
//      if(isArmstrong(n)){
//       cout <<"is an armstrong number\n";
//      }else{
//        cout <<"is not an armstrong number\n";
//      }
//      return 0;
//  }

// GCD
//  int gcd(int m,int n){
//      int num =0;
//      int limit = (m<n)?m:n;
//  for(int i=1;i<=limit;i++){
//      if(n%i ==0 && m%i ==0){
//          num = i;
//      }
//  } return num;
//  }
//  int main(){
//      cout<<gcd(0,30);
//  }
// ANOTHERWAY
// int gcd(int m, int n){
//     int x =0;
//     if(n == m){
//         return m;
//     }
//     if(n>m){
//      x = gcd(m,n-m);
//     }else{
//      x = gcd(m-n,m);
//     }
//     if(m==0){
//         return n;
//     }
//     if(n ==0){
//         return m;
//     }
// }
// int main(){
//     cout<<gcd(10,30);
// }
// RECURSION
// int gcd(int a,int b){
//     if(b==0) return a;
//     return gcd(b,a%b);
// }
// EUCLID ALGORITHM
// int gcd(int a,int b){
//     while(a>0 && b>0){
//         if(a>b){
//             a = a%b;
//         }else{
//             b = b%a;
//         }
//     }if(a==0) return b;
//     return a;
// }
// int main(){
//     cout<<gcd(3,30);
// }

// LCM
//  int lcm(int a, int b){
//      for(int i=max(a,b);i<=a*b;i+=max(a,b)){
//          if(i%a ==0 && i%b ==0)
//          return i;
//      }
//      return a*b;
//  }
//  int main(){
//      cout<<lcm(9,16);
//  }

// REVERSE A NUMBER
//  int a = 4537;
//  string b = to_string(a);
//  int main(){
//  reverse(b.begin(),b.end());
//  int a = stoi(b);
//  cout<<a;
//  }
//  int main(){
//  int num = 4587;
//  int rev=0;
//  while(num>0){
//      int digit = num%10;
//      rev = rev*10 + digit;
//      num = num/10;
//  }
//  cout<<rev;
//  }

// 2D ARRAYS LINEAR SEARCH
//  pair<int,int> linearSearch(int mat[][3],int rows, int cols,int key){
//    pair<int,int> pos = {-1,-1};
//    for(int i=0;i<rows;i++){ // i=row
//      for(int j=0;j<cols;j++){
//        if (mat[i][j] == key){
//          return {i,j};
//        }
//      }
//    }return pos;
//  }
//  int main(){
//    int matrix[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}}; //2d array
//    int rows =4;
//    int cols =3;
//    cout<<matrix[2][1]<<endl;
//    for(int i=0;i<rows;i++){ // i=row
//      for(int j=0;j<cols;j++){
//        cout<<matrix[i][j]<<" ";
//      }cout<<endl;
//    }
//     pair<int,int> pos = linearSearch(matrix,4,3,8);
//     cout<<pos.first<<","<<pos.second<<endl;
//  }

// 2D ARRAY MAX ROW SUM
//  int main(){
//    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}}; //2d array
//    int rows =3;
//    int cols =3;
//    int maxsum =0;
//    for(int i=0;i<rows;i++){
//      int rowsum =0;
//      for(int j=0;j<cols;j++){
//         rowsum +=matrix[i][j];
//      } maxsum = max(maxsum,rowsum);
//    } cout<<maxsum;
//  }

// DIAGNOL SUM
//  int main(){
//    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}}; //2d array
//    int rows =3;
//    int cols =3;
//    int sum =0;
//    for(int i=0;i<rows;i++){ TC= O(N*N)
//      for(int j=0;j<cols;j++){
//         if(i ==j){
//          sum +=matrix[i][j];
//         }else if(j == cols-i-1){
//          sum +=matrix[i][j];
//         }
//    }
//  }
//  for(int i=0;i<cols;i++){ //TC = O(N)
//    sum+=matrix[i][i];
//    if(i!= cols-i-1){
//      sum +=matrix[i][cols-i-1];
//    }
//  }
//  cout<<sum;}

// 2D VECTOR
//  int main(){
//    vector<vector<int>>mat = {{1,2,3},{4,5,6,10,11},{7,8,9}};
//    //rows => mat.size();
//    // cols = mat[i].size();
//    for(int i=0;i<mat.size();i++){ // i=row
//      for(int j=0;j<mat[i].size();j++){
//        cout<<mat[i][j]<<" ";
//      }cout<<endl;
//    }
//  }

// SEARCH IN A 2D MATRIX
//  bool searchInRow(vector<vector<int>>& mat, int target,int row){
//          int n= mat[0].size();
//          int st =0, end = n-1;
//          while(st<=end){
//              int mid = (st+end)/2;
//              if(target == mat[row][mid]){
//                  return true;
//              }else if(target >=mat[row][mid]){
//                  st = mid+1;
//              }else{
//                  end = mid-1;
//              }
//          }return false;
//      }
//      bool searchMatrix(vector<vector<int>>& mat, int target) {
//          //BS on total rows
//          int m = mat.size(), n= mat[0].size();
//          int stRow =0,endRow = m-1;
//          while(stRow<=endRow){
//              int midRow = (stRow+endRow)/2;
//              if(target >=mat[midRow][0] && target <=mat[midRow][n-1]){
//                  // found the row => BS on this row
//                  return searchInRow(mat,target,midRow);
//              }else if(target >= mat[midRow][n-1]){
//                  //down => right
//                  stRow = midRow+1;
//              }else{
//                  // up => left
//                  endRow = midRow-1;
//              }
//          }return false;
//      }

// SEARCH IN A 2D MATRIX ||
//  bool searchMatrix(vector<vector<int>>& mat, int target) {
//          int m = mat.size(),n = mat[0].size();
//          int r=0,c=n-1;
//          while(r<m && c>=0){
//              if(target == mat[r][c]){
//                  return true;
//              }else if(target <mat[r][c]){
//                  c--;
//              }else{
//                  r++;
//              }
//          }return false;
//      }

// SPIRAL MATRIX
//  vector<int> spiralOrder(vector<vector<int>>& mat) { //O(m*n)
//          int m = mat.size(),n = mat[0].size();
//          int srow =0, scol = 0,erow =m-1,ecol =n-1;
//          vector<int> ans;
//          while(srow <=erow && scol<=ecol){
//              //top
//              for(int j = scol;j<=ecol;j++){
//                  ans.push_back(mat[srow][j]);
//              }
//              //right
//              for(int i = srow+1;i<=erow;i++){
//                  ans.push_back(mat[i][ecol]);
//              }
//              //bottom
//              for(int j = ecol-1;j>=scol;j--){
//                  if(srow ==erow){
//                      break;
//                  }
//                  ans.push_back(mat[erow][j]);
//              }
//              //left
//              for(int i=erow-1;i>=srow+1;i--){
//                  if(scol ==ecol){
//                      break;
//                  }
//                  ans.push_back(mat[i][scol]);
//              }
//              srow++;erow--;scol++;ecol--;
//          }
//          return ans;
//      }

// 2 SUM LEETCODE-1
//  BRUTE FORCE
// BETTER
// OPTIMISED
//  vector<int> twoSum(vector<int>& nums, int target) {
//    unordered_map<int,int> m;
//    vector<int> ans;
//    for(int i=0;i<nums.size();i++){
//      int first = nums[i];
//      int sec = target - nums[i];
//        if(m.find(sec)!=m.end()){
//            ans.push_back(i);
//            ans.push_back(m[sec]);
//            break;
//        }m[first] = i;
//    }return ans;
//  }

// FINDING MISSING AND REPEATED VALUES LEETCODE 2965
//  vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
//    vector<int>ans;
//    unordered_set<int> s;
//    int n = grid.size();
//    int a,b;
//    int expSum =0,actualSum= 0;
//    for(int i=0;i<n;i++){
//      for(int j=0;j<n;j++){
//        actualSum +=grid[i][j];
//        if(s.find(grid[i][j])!=s.end()){
//          a =grid[i][j];
//          ans.push_back(a);
//        }s.insert(grid[i][j]);
//      }
//    } expSum = (n*n)*(n*n +1)/2;
//    b = expSum + a - actualSum;
//    ans.push_back(b);
//    return ans;
//  }

// 3SUM
//  vector<vector<int>> threeSum(vector<int>& nums) {
//          int n = nums.size();
//          vector<vector<int>>ans;
//          sort(nums.begin(),nums.end());
//          for(int i=0;i<n;i++){
//              if(i>0 && nums[i] == nums[i-1]) continue;
//              int j =i+1,k = n-1;
//              while(j<k){
//                  int sum = nums[i]+nums[j]+nums[k];
//                  if(sum>0) k--;
//                  else if(sum<0)j++;
//                  else{
//                      ans.push_back({nums[i],nums[j],nums[k]});
//                      j++;k--;
//                      while(j<k && nums[j] ==nums[j-1])j++;
//                  }
//              }
//          }
//  return ans;
//      }

// 4SUM
//  vector<vector<int>> fourSum(vector<int>& nums, int tar) {
//    vector<vector<int>> ans;
//    int n = nums.size();
//    sort(nums.begin(),nums.end());
//    for(int i =0;i<n;i++){
//      if(i>0 && nums[i]==nums[i-1]) continue;
//      for(int j=i+1;j<n;){
//        int p=j+1,q=n-1;
//      while(p<q){
//        long long sum = (long long)nums[i]+(long long)nums[j]
//        +(long long)nums[p]+(long long)nums[q];
//        if(sum<tar){
//          p++;
//        }else if(sum>tar){
//          q--;
//        }else{
//          ans.push_back({nums[i],nums[j],nums[p],nums[q]});
//          p++;q--;
//          while(p<q && nums[p] ==nums[p-1]) p++;
//        }
//      };j++;
//      while(j<n && nums[j]==nums[j-1])j++;
//      }
//    }return ans;
// }

// RECURSION
// Reccurance relation : T(n) = T(n-1) + C
//  void printNumbers(int n){ // works like call stack
//    if(n ==1){ // recursion tree
//      cout<< "1\n";
//      return;
//    }
//    cout<<n<<" ";
//    printNumbers(n-1);
//  }
//  int main(){
//  printNumbers(4);
//    return 0;
//  }
//  FACTORIAL
//  int fact(int n){ //TC = o(n) total calls * wd in each call
//    //SC = height of callstack * mem in each call
//    //Sc = o(n)
//    if(n ==0){
//      return 1;}
//      return n * fact(n-1);
//  }
//  int main(){
//    cout<< fact(5);
//  }
// SUM OF N NUMBERS
//  int sum(int n){ //TC = SC = O(N)
//    if(n ==1){
//      return 1;
//    }
//    return n + sum(n-1);
//  }
//  int main(){
//    cout<< sum(5);
//  }
// RECURSION FIBONACCI
//  int fib(int n){ //Tc = O(2^n) //SC =O(n)
//    if(n ==0){
//      return 0;
//    }
//    if( n ==1){
//      return 1;
//    }
//     return fib(n-1)+fib(n-2);
//  }
//  int main(){
//    cout<<fib(7);
//  }

// RECURSION CHECK ARRAY IS SORTED OR NOT
// bool isSorted(vector<int> arr,int n){//TC = SC = O(N)
//   if(n ==0 || n ==1) return true;
//   return (arr[n-1]>= arr[n-2] && isSorted(arr,n-1));
// }
// int main(){
//   vector<int> arr = {1,2,7,3,4,5};
//   int n = arr.size();
//   cout<<isSorted(arr,n);
// }

// RECURSION BINARY SEARCH
//  int bs(vector<int> arr,int tar,int st,int end){ //TC = SC = O(logn)
//    if(st<=end){
//    int mid = (st+end)/2;
//    if(arr[mid] == tar)
//    return mid;
//    if(arr[mid]<=tar){
//      return bs(arr,tar,mid+1,end);
//    }else{
//      return bs(arr,tar,st,mid-1);
//    }} return -1;
//  }
//  int main(){
//    vector<int> arr = {1,2,3,8,10,12};
//    int n = arr.size();
//    int st = arr[0],end = arr[n-1];
//    int tar =11;
//    cout<< bs(arr,tar,st,end);
//  }

// PRINT ALL SUBSETS number of subsets = 2^n
// void printSubsets(vector<int> &arr,vector<int> &ans, int i){//Tc = O(2^n *n)
// if(i == arr.size()){
//   for(int val : ans){
//     cout<<val<<" ";
//   } cout<<endl;
//   return;
// }
// //include
// ans.push_back(arr[i]);
// printSubsets(arr,ans,i+1);
// ans.pop_back();//backtracking
// //exclude
// printSubsets(arr,ans,i+1);
// }
// int main(){
//   vector<int> arr = {1,2,3};
//   vector<int> ans;
//   printSubsets(arr,ans,0);
// }

// RECURSION SUBSETS ||
// void getAllSubsets(vector<int>&nums,vector<int> &ans, int i,vector<vector<int>> &allSubsets){ //TC = O(2^n *n)
//     if(i == nums.size()){
//         allSubsets.push_back(ans);
//         return;
//     }//include
//     ans.push_back(nums[i]);
//     getAllSubsets(nums,ans,i+1,allSubsets);
//     ans.pop_back();
//     int idx = i+1;
//     while(idx < nums.size() && nums[idx]==nums[idx-1]) idx++;
//     //exclude
//     getAllSubsets(nums,ans,idx,allSubsets);
// }
//     vector<vector<int>> subsetsWithDup(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         vector<vector<int>> allSubsets;
//         vector<int> ans;
//          getAllSubsets(nums,ans,0,allSubsets);
//          return allSubsets;
//     }

// PERMUTATIONS
//  void getPerm(vector<int>& nums, int idx,vector<vector<int>> &ans){
//      if(idx == nums.size()){
//          ans.push_back({nums});
//          return;
//      }
//      for(int i = idx;i<nums.size();i++){
//          swap(nums[idx],nums[i]);
//          getPerm(nums,idx+1,ans);
//          swap(nums[i],nums[idx]);
//      }
//  }
//      vector<vector<int>> permute(vector<int>& nums) {
//          vector<vector<int>>ans;
//          getPerm(nums,0,ans);
//          return ans;
//      }

// N-QUEENS
//  bool isSafe(vector<string> &board,int row,int col,int n){
//      //horizontal
//      for(int j=0;j<n;j++){
//          if(board[row][j]=='Q'){
//             return false;
//          }
//      }
//      //vertical
//      for(int i=0;i<n;i++){
//          if(board[i][col]=='Q'){
//             return false;
//          }
//      }
//      //left diagnol
//      for(int i =row,j=col;i>=0 && j>=0;i--,j--){
//          if(board[i][j] == 'Q'){
//          return false;
//          }
//      }
//      for(int i =row,j=col;i>=0 && j<n;i--,j++){
//          if(board[i][j] == 'Q'){
//          return false;
//          }
//      } return true;
//  }
//  void nQueens(vector<string> &board,int row,int n,vector<vector<string>> &ans){
//      if(row ==n){
//          ans.push_back({board});
//          return;
//      }
//      for(int j=0;j<n;j++){
//          if(isSafe(board,row,j,n)){
//              board[row][j]='Q';
//              nQueens(board,row+1,n,ans);
//              board[row][j]='.';
//          }
//      }
//  }
//  vector<vector<string>> solveNQueens(int n) {
//      vector<string> board(n,string(n,'.'));
//      vector<vector<string>> ans;
//      nQueens(board,0,n,ans);
//      return ans;
//  }

// SUDOKU
//  bool isSafe(vector<vector<char>>& board,int row, int col,char dig){
//      //horizontal
//      for(int j=0;j<9;j++){
//          if(board[row][j]==dig){
//              return false;
//          }
//      }
//      //vertical
//      for(int i=0;i<9;i++){
//          if(board[i][col]==dig){
//              return false;
//          }
//      }
//      //grid
//      int srow = (row/3)*3;
//      int scol = (col/3)*3;
//      for(int i=srow;i<=srow+2;i++){
//          for(int j = scol;j<=scol+2;j++){
//              if(board[i][j]==dig){
//                  return false;
//              }
//          }
//      }
//      return true;
//  }
//      bool helper(vector<vector<char>>& board,int row, int col){
//          if(row ==9){
//              return true;
//          }
//          int nextRow = row, nextCol = col+1;
//          if(nextCol == 9){
//              nextRow = row +1;
//              nextCol =0;
//          }
//          if(board[row][col]!= '.'){
//              return helper(board,nextRow,nextCol);
//          }
//          //place digit
//          for(char dig ='1';dig<='9';dig++){
//              if(isSafe(board,row,col,dig)){
//                  board[row][col]=dig;
//                  if(helper(board,nextRow,nextCol)){
//                      return true;
//                  }
//                  board[row][col]='.';
//              }
//          } return false;
//      }
//      void solveSudoku(vector<vector<char>>& board) {
//          helper(board,0,0);
//      }

// RAT IN A MAZE TC = O(4^N^2)
//  void helper(vector<vector<int>> &mat,int r ,int c, string path, vector<string> &ans){
//    int n = mat.size();
//    if(r<0 || c<0 || r>=n || c>=n || mat[r][c]==0 || mat[r][c]==-1 ){
//      return;
//    }
//    if(r == n-1 && c == n-1){//ans
//      ans.push_back(path);
//      return;
//    }
//    mat[r][c]=-1;//visit
//    helper(mat,r+1,c,path+"D",ans);//down
//    helper(mat,r-1,c,path+"U",ans);//up
//    helper(mat,r,c-1,path+"L",ans);//left
//    helper(mat,r,c+1,path+"R",ans);//right
//    mat[r][c]=1;
//  }
//  //complete this function
//  vector<string> findPath(vector<vector<int>> &mat) {
//    int n = mat.size();
//    vector<string> ans;
//    string path = "";
//    helper(mat,0,0,path,ans);
//    return ans;
//  }
//  int main() {
//      vector<vector<int>> mat = {{1, 0, 0, 0},{1, 1, 0, 1},{1, 1, 0, 0},{0, 1, 1, 1}};
//      vector<string> ans = findPath(mat);
//      for(string path : ans) {
//          cout << path << endl;
//      }
//      return 0;
//  }
//

// OOPS
// class Account
// {
// private:
//     double balance;
//     string password;
// public:
//     string account;
//     string username;
// };
// class Teacher
// {
// private:
//     double salary;
// public:
//    // properties
//     string name;
//     string dept;
//     string subject;
// //non-parameterized constructor
// // Teacher(){
// //     dept = "Computer Science";
// // }
// //parameterized constructor
// Teacher(string name,string dept, string subject,double salary){
//     this->name = name;
//     this->dept =dept;
//     this->subject =subject;
//     this->salary=salary;
// }
// //copy constructor
// Teacher(Teacher &orgObj){//pass by reference
//     cout<<"i am custom copy constructor\n";
// this->name = orgObj.name;
// this->dept = orgObj.dept;
// this->subject = orgObj.subject;
// this->salary = orgObj.salary;
// }
//     // methods /member functions
//     void changeDept(string newDept)
//     { dept = newDept;
//     }
//     // setter function
//     void setSalary(double s)
//     {salary = s;
//     }
//     // getter function
//     double getSalary()
//     {return salary;
//     }
//     void getInfo(){
//        cout<<"name :"<<name<<endl ;
//        cout<<"subject :"<<subject<<endl ;
//     }
// };
// int main()
// {
//     Teacher t1("Joe","CS","C++",25000); //constructor call
//     // t1.name = "Joe";
//     // t1.subject = "C++";
//     // t1.setSalary(25000);
//     //cout << t1.dept<<endl;
//     //t1.getInfo();
//     Teacher t2(t1);//default copy constructor
//     t2.getInfo();
//     return 0;
// }
// class Student{
//  public:
//  string name;
//  double* cgpaPtr;
//  Student(string name,double cgpa){
//     this->name = name;
//     cgpaPtr = new double;
//     *cgpaPtr = cgpa;
//  }
// //  Student(Student &obj){
// //     this->name = obj.name;
// //     cgpaPtr = new double;
// //     *cgpaPtr = *obj.cgpaPtr;
// //  }
//  //destructor
//  ~Student(){
//     cout<<"i am destructor \n";
//     delete cgpaPtr; //memory leak
//  }
// void getInfo(){
//     cout<<name<<endl;
//     cout<<*cgpaPtr<<endl;
// }
// };
// int main(){
// Student s1("Kenny",8.9);
// s1.getInfo();
// }
// class Person{
// public:
// string name;
// int age;
// // Person(string name, int age){
// //     this->name = name;
// //     this->age = age;
// // }
// // Person(){
// //     cout<<"parent constructor\n";
// // }
// };
// class Student : public Person{
//     public:
//     int rollno;
//     // Student(string name,int age,int rollno):Person(name,age){
//     //    this->rollno = rollno;
//     // }
//     // void getInfo(){
//     //     cout<<name<<endl;
//     //     cout<<age<<endl;
//     //     cout<<rollno<<endl;
//     // }
// };
// class GradStudent :public Student{
// public:
// string research;
// };
// int main(){
// GradStudent s1;
// s1.name = "Tony Stark";
// s1.research = "machines";
// cout<<s1.name<<" "<<s1.research;
// }
// class Student{
//     public:
//     string name;
//     Student(){
//         cout<<"non-parameterized\n";
//     }
//     Student(string name){
//         this->name = name;
//         cout<<"parameterized/n";
//     }
// };
// int main(){
//  Student s1("tony");
// }
// class Shape{ //abstract class
//     virtual void draw()=0; //pure virtual function
// };
// class Circle:public Shape{
//     public:
//     void draw(){
//         cout<<"drawing a circle\n";
//     }
// };
// void fun(){
//     static int x=0; //init statement -1 run
//     cout<<x;
//     x++;
// }
// class A{
//     public:
//     int x;
//     void xy(){
//         x = x+1;
//     }
// };
// int main(){
//     Circle c1;
//     A obj1;
//     A obj2;
//     obj1.x =100;
//     obj2.x =100;
//     cout<<obj2.x<<endl;
//     // obj.xy();
//     // cout<<obj.x <<endl;
// // fun();
// // fun();
// // fun();
// //c1.draw();
// }
// questuons;
// /*new keyword
// shallow and deep copy
// pointers
// dynamic memory allocation
// friend function and friend cls
// */

// LINKED LIST
//  class Node{
//  public:
//  int data;
//  Node* next;
//  Node(int val){
//    data = val;
//    next = NULL;
//  }
//  };
//  class List{
//  Node* head;
//  Node* tail;
//  public:
//  List(){
//    head = tail = NULL;
//  }
//  void push_front(int val){
//    Node* newNode = new Node(val); //dynamic
//    //Node newNode(val);//static
//    if(head == NULL){
//      head = tail = newNode;
//      return;
//    } else{
//      newNode -> next = head;
//      head = newNode;
//    }
//  }
//  void push_back(int val){
//    Node* newNode = new Node(val);
//    if(head == NULL){
//      head = tail = newNode;
//    }
//    else{
//       tail->next =newNode ;
//      tail = newNode;
//    }
//  }
//  void pop_front(){
//    if(head == NULL)
//    return;
//    else{
//      Node*temp = head;
//      head = head->next;
//      temp->next = NULL;
//      delete temp;
//    }
//  }
//  void pop_back(){
//    if(head == NULL)
//    return;
//      Node*temp = head;
//      while(temp->next!= tail){
//        temp = temp->next;
//      }
//      temp->next = NULL;
//      delete tail;
//        tail = temp;
//  }
//  void insert(int val,int pos){
//    if(pos<0)
//    return;
//    if(pos ==0){
//      push_front(val);
//    }
//    Node* newNode = new Node(val);
//    Node*temp = head;
//    for(int i=0;i<pos-1;i++){
//      if(temp == NULL){
//        cout<<"Invaid position\n";
//        return;
//      }
//      temp = temp->next;
//    }
//    newNode->next = temp->next;
//    temp->next = newNode;
//  }
//  int search(int val){
//    Node*temp = head;
//    int idx =0;
//    while(temp!=NULL){
//      if(temp->data ==val){
//      return idx;
//      }
//      temp= temp->next;
//      idx++;
//    }return -1;
//  }
//  void printLL(){
//    Node* temp =head;
//    while(temp!= NULL){
//      cout<<temp->data<<"-> ";
//      temp = temp->next;
//    }cout<<"NULL"<<endl;
//  }
//  };
//  int main(){
//    List ll;
//    ll.push_front(1);
//    ll.push_front(2);
//    ll.push_front(3);
//    ll.push_back(4);
//    //ll.pop_front();
//    ll.printLL();
//    cout<<ll.search(5);
//    //ll.pop_back();
//   // ll.printLL();
//    //ll.insert(6,1);
//    //ll.printLL();
//  }

// REVERSE A LINKED LIST
//   * Definition for singly-linked list.
//   * struct ListNode {
//   *     int val;
//   *     ListNode *next;
//   *     ListNode() : val(0), next(nullptr) {}
//   *     ListNode(int x) : val(x), next(nullptr) {}
//   *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//   * };
//  class Solution {
//  public:
//      ListNode* reverseList(ListNode* head) {
//       ListNode* prev = NULL;
//       ListNode* curr = head;
//       ListNode* next = NULL;
//       while(curr !=NULL){
//          next = curr->next;
//          curr->next = prev;
//          prev = curr;
//          curr = next;
//       }return prev;
//      }
//  };

// MIDDLE OF LINKED LIST
//  class Solution {
//  public:
//      ListNode* middleNode(ListNode* head) {
//        ListNode* slow = head;
//        ListNode* fast = head;
//        while(fast!=NULL && fast->next!= NULL){
//          slow = slow->next;
//          fast= fast->next->next;
//        }return slow;
//      }
//  };

// DETECT CYCLE IN LINKED LIST
//  class Solution {
//  public:
//      bool hasCycle(ListNode *head) {
//  ListNode *slow = head;
//  ListNode *fast = head;
//  while(fast!=NULL && fast->next!=NULL){
//      slow = slow->next;
//      fast = fast->next->next;
//      if(fast == slow){
//      return true;
//  }
//  }return false;
//     }
// };

// DETECT NODE AND REMOVE CYCLE
//  class Solution {
//  public:
//      ListNode *detectCycle(ListNode *head) {
//          ListNode *slow = head;
//          ListNode *fast = head;
//          bool isCycle = false;
//          while(fast!=NULL && fast->next !=NULL){
//              slow = slow->next;
//              fast = fast->next->next;
//              if(slow == fast){
//                  isCycle = true;
//                  break;
//              }
//          }
//          if(!isCycle){
//              return NULL;
//          }
//          slow = head;
//          ListNode *prev = NULL;//TO REMOVE
//          while(slow!=fast){
//          slow = slow->next;
//          prev = fast;//TO REMOVE
//          fast = fast->next;
//          }
//          prev->next = NULL; //REMOVE
//      return slow;
//      }
//  };

// COPY LINKED LIST
//  class Solution {
//  public:
//      Node* copyRandomList(Node* head) {
//          if(head == NULL){
//              return NULL;
//          }
//          unordered_map<Node* , Node*>m;
//          Node* newHead = new Node(head->val);
//          Node* oldTemp = head->next;
//          Node* newTemp = newHead;
//          m[head] = newHead;
//          while(oldTemp!=NULL){
//              Node* copyNode = new Node(oldTemp->val);
//              m[oldTemp] = copyNode;
//              newTemp->next =copyNode;
//              oldTemp = oldTemp->next;
//              newTemp = newTemp->next;
//          }
//          oldTemp = head;newTemp = newHead;
//          while(oldTemp!=NULL){
//              newTemp->random = m[oldTemp->random];
//              oldTemp = oldTemp->next;
//              newTemp = newTemp->next;
//          }return newHead;
//      }
//  };

// DOUBLE LINKED LIST
// class Node{
// public:
//   int data;
//   Node *next;
//   Node *prev;
//   Node(int val){
//     data = val;
//     next = prev = NULL;
//   }
// };
// class DoublyList{
//   Node* head;
//   Node* tail;
//   public:
//   DoublyList(){
//     head = tail = NULL;
//   }
//   void push_front(int val){
//     Node* newNode = new Node(val);
//     if(head == NULL){
//       head = tail = newNode;
//     }else{
//     newNode->next = head;
//     head->prev = newNode;
//     head = newNode;}
//   }
//   void push_back(int val){
//     Node* newNode = new Node(val);
//     if(head == NULL){
//       head = tail = newNode;
//     }else{
//       tail->next = newNode;
//       newNode->prev = tail;
//       tail = newNode;
//     }
//   }
//   void pop_front(){
//     if(head == NULL){
//       cout<<"doublylist is empty";
//     }
//     Node* temp = head;
//       head = head->next;
//       if(head!=NULL){
//       head->prev = NULL;}
//       delete temp;
//   }
//   void pop_back(){
//     if(head== NULL){
//       cout<<"its empty";
//     }
//     Node* temp = tail;
//     tail = tail->prev;
//     if(tail!=NULL){
//       tail->next = NULL;
//     }
//     delete temp;
//   }
//   void print(){
//     Node* temp = head;
//     while(temp!=NULL){
//       cout<<temp->data<<" <-> ";
//       temp = temp->next;
//     }cout<<"NULL";
//   }
// };
// int main(){
//   DoublyList dll;
//   dll.push_front(1);
//   dll.push_front(2);
//   dll.push_front(3);
//   dll.push_back(4);
//   dll.pop_front();
//   dll.pop_back();
//   dll.print();
// }

// CIRCULAR LINKED LIST
// g++ -std=c++11  code.cpp && a.exe
//  class Node{
//    public:
//    int data;
//    Node* next;
//    Node(int val){
//      data = val;
//      next = NULL;
//    }
//  };
//  class CircularList{
//    Node* head;
//    Node* tail;
//    public:
//    CircularList(){
//      head = tail = NULL;
//    }
//    void insertAtHead(int val){
//      Node* newNode = new Node(val);
//      if(tail ==NULL){
//        head = tail = newNode;
//        tail->next = head;
//      }
//      newNode->next = head;
//      head = newNode;
//      tail->next = newNode;
//    }
//    void insertAtTail(int val){
//      Node* newNode = new Node(val);
//       if(head ==NULL){
//        head = tail = newNode;
//        tail->next = head;
//      }else{
//      newNode->next = head;
//      tail->next = newNode;
//      tail = newNode;
//    }}
//    void deleteAtHead(){
//      if(head == NULL)return;
//      if(head == tail){ delete head;
//      head = tail = NULL;}
//      else{
//        Node* temp = head;
//        head = head->next;
//        tail->next = head;
//        temp->next = NULL;
//        delete temp;
//      }
//    }
//    void deleteAtTail(){
//      if(head == NULL)return;
//      if(head == tail){ delete head;
//      head = tail = NULL;}
//      else{
//        Node* temp = head;
//        while(temp->next != tail){
//          temp = temp->next;
//        }
//        delete tail;
//        tail = temp;
//        temp->next = head;
//      }
//    }
//    void print(){
//      if(head == NULL){
//        return;
//      }
//        cout<<head->data<<"->";
//        Node* temp = head->next;
//        while(temp!= head){
//          cout<<temp->data<<"->";
//          temp = temp->next;
//      }cout<<temp->data<<endl;
//    }
//  };
//  int main(){
//  CircularList cll;
//  // cll.insertAtHead(1);
//  // cll.insertAtHead(2);
//  // cll.insertAtHead(3);
//  cll.insertAtTail(1);
//  cll.insertAtTail(2);
//  cll.insertAtTail(3);
//  //cll.deleteAtHead();
//  cll.deleteAtTail();
//  cll.print();
//  }

// FLATTEN A DOUBLY LINKED LIST
//  class Solution {
//  public:
//      Node* flatten(Node* head) {
//         if(head == NULL){
//          return head;
//         }
//         Node* curr = head;
//         while(curr!=NULL){
//          if(curr->child!=NULL){
//              //flatten the child nodes
//              Node* next = curr->next;
//              curr->next = flatten(curr->child);
//              curr->next->prev = curr;
//              curr->child = NULL;
//              //find tail
//              while(curr->next!=NULL){
//                  curr = curr->next;
//              }
//              //attach tail with next ptr
//              if(next !=NULL){
//                  curr->next = next;
//                  next->prev = curr;
//              }
//          }curr = curr->next;
//         }return head;
//      }
//  };

// REVERSE NODES IN K-GROUP
//  class Solution {
//  public:
//      ListNode* reverseKGroup(ListNode* head, int k) {
//          ListNode* temp = head;
//          int count =0;
//          //check if k nodes exist
//          while(count<k){
//              if(temp == NULL){
//                  return head;
//              }
//              temp = temp->next;
//              count++;
//          }
//          //recursively call for rest of LL
//          ListNode* prevNode = reverseKGroup(temp,k);
//          //reverse current group
//          temp = head;count =0;
//          while(count<k){
//              ListNode* next = temp->next;
//              temp->next = prevNode;
//              prevNode = temp;
//              temp = next;
//              count++;
//          }return prevNode;
//      }
//  };

// SWAP NODES IN PAIRS
//  class Solution {
//  public:
//      ListNode* swapPairs(ListNode* head) {
//        if(head == NULL || head->next == NULL){
//          return head;
//        }
//      ListNode* first = head;
//      ListNode* second = head->next;
//      ListNode* prev = NULL;
//      while(first!=NULL && second || NULL){
//          ListNode* third = second->next;
//          second->next = first;
//          first->next = third;
//          if(prev!=NULL){
//              prev->next = second;}
//          else{
//              head = second;
//          }//update
//          prev = first;
//          first = third;
//          if(third!=NULL){
//              second = third->next;
//          }else{
//              second = NULL;
//          }
//      }return head;
//      }
//  };

// STACK
// #include <stack>
//  class Stack{
//    //vector<int> v;
//    list<int> ll;
//    public:
//    void push(int val){//o(1)
//      //v.push_back(val);
//      ll.push_front(val);
//    }
//    void pop(){
//      //v.pop_back();
//      ll.pop_front();
//    }
//    int top(){
//      //return v[v.size()-1];
//      return ll.front();
//    }
//    bool empty(){
//      //return v.size() ==0 ;
//      return ll.size() ==0 ;
//    }
//  };
//  int main(){
//  //Stack s;
//   stack<int>s;
//  s.push(10);
//  s.push(20);
//  s.push(30);
//  while(!s.empty()){
//    cout<<s.top()<<" ";//30 20 10
//    s.pop();
//  }
//  }

// VALID PARENTHESES
//  bool isValid(string str) {//Tc =o(n) sc=o(n)
//    stack<char> st;
//    for(int i=0;i<str.size();i++){
//        if(str[i]== '('|| str[i]== '{'|| str[i]== '['){//opening
//          st.push(str[i]);
//        }else{//closing bracket
//        if(st.size()==0){
//          return false;
//        }
//        if((st.top() == '(' &&str[i]==')'
//        )||(st.top() == '{' &&str[i]=='}'
//        )||(st.top() == '[' &&str[i]==']')){
//          st.pop();
//        }else{//no match
//        return false;
//        }
//        }
//    }
//    return st.size()==0;
//  }

// STOCK SPAN
//  int main(){//TC =SC= O(N)
//  vector<int> price = {100,80,60,70,60,75,85};
//  vector<int>ans(price.size(),0);
//  stack<int>s;
//  for(int i=0;i<price.size();i++){
//  while(s.size()>0 && price[s.top()]<=price[i]){
//    s.pop();
//  }if(s.empty()){
//    ans[i]=i+1;
//  }else{
//    ans[i] = i-s.top(); //i=prevHigh
//  }s.push(i);
//  }
//  for(int val : ans){
//    cout<<val<<" ";
//  }cout<<endl;
//  }

// NEXT GREATEST ELEMENT //TC =SC = O(N)
//  int main(){
//    vector<int> arr = {6,8,0,1,3};
//    //next greatest
//    stack<int>s;
//    vector<int>ans(arr.size(),-1);
//    for(int i = arr.size()-1;i>=0;i--){
//      while(s.size()>0 && s.top()<=arr[i]){
//        s.pop();
//      }if(s.empty()){
//        ans[i]=-1;
//      }else{
//        ans[i] = s.top();
//      }s.push(arr[i]);
//    }for(int val : ans){
//      cout<<val<<" ";
//    }
//  }

// PREV SMALLEST ELEMENT TC = SC =O(N)
//  int main(){
//    vector<int> arr = {3,1,0,8,6};
//    stack<int>s;
//    vector<int>ans(arr.size(),-1);
//    for(int i =0;i<arr.size();i++){
//      while(s.size()>0 && s.top()>=arr[i]){
//        s.pop();
//      }if(s.empty()){
//        ans[i]=-1;
//      }else{
//        ans[i] =s.top();
//      }
//      s.push(arr[i]);
//    }for(int val : ans){
//      cout<<val<<" ";
//    }
//  }

// DESIGN A MIN STACK
// g++ -std=c++11  code.cpp && a.exe
// stack<pair<int,int>> s;//val,minVal
//  stack<long long int>s;
//  long long int minVal;
//      MinStack() {
//      }
//      void push(int val) {
//          // if(s.empty()){
//          //     s.push({val,val});
//          // }else{
//          //     int minVal = min(val,s.top().second);
//          //     s.push({val,minVal});
//          // }
//          if(s.empty()){
//              s.push(val);
//              minVal = val;
//          }else{
//              if(val<minVal){
//                  s.push((long long)2*val -minVal);
//                  minVal = val;
//              }else{
//                  s.push(val);
//              }
//          }
//      }
//      void pop() {
//          //s.pop();
//          if(s.top()<minVal){
//              minVal = 2*minVal -s.top();
//          }s.pop();
//      }
//      int top() {
//        //return s.top().first ;
//        if(s.top()<minVal){
//          return minVal;
//        }else{
//          return s.top();
//        }
//      }
//      int getMin() {
//          //return s.top().second;
//          return minVal;
//      }

// LARGEST RECTANGLE IN HISTOGRAM TC=SC =O(N)
//  int largestRectangleArea(vector<int>& heights) {
//    int n = heights.size();
//    vector<int>left(n,0);//left smaller nearest
//    vector<int>right(n,0);//right smaller nearest
//    stack<int>s;
//    //Right O(N)
//    for(int i=n-1;i>=0;i--){
//        while(s.size()>0 && heights[s.top()]>=heights[i]){
//            s.pop();
//        }
//        right[i]=s.empty()?n:s.top();//important step
//        s.push(i);
//    }
//    while(!s.empty()){//empty stack
//        s.pop();
//    }
//    //Left O(N)
//    for(int i=0;i<n;i++){
//        while(s.size()>0 && heights[s.top()]>=heights[i]){
//            s.pop();
//        }
//        left[i]=s.empty()?-1:s.top();
//        s.push(i);
//    }
//    int ans =0;
//    for(int i=0;i<n;i++){
//        int width = right[i]-left[i]-1;
//        int currArea = heights[i]*width;
//        ans = max(ans,currArea);
//    }return ans;
//  }

// NEXT GREATER ELEMENT 2 //TC=SC = O(N)
// vector<int> nextGreaterElements(vector<int>& nums) {
//   int n = nums.size();
//   vector<int>ans(n,-1);
//   stack<int>s;
//   for(int i = 2*n-1;i>=0;i--){
//       while(s.size()>0 && nums[s.top()]<=nums[i%n]){
//           s.pop();
//       }
//       ans[i%n]= s.empty()?-1:nums[s.top()];
//       s.push(i%n);
//   }return ans;
// }

// CELEBRITY PROBLEM TC = SC = O(N)
// int getCelebrity(vector<vector<int>>arr){
//   stack<int>s;
//   int n = arr.size();
//   for(int i =0;i<n;i++){
//     s.push(i);
//   }
//   while(s.size()>1){
//     int i = s.top();
//     s.pop();
//     int j = s.top();
//     s.pop();
//     if(arr[i][j]==0){
//       s.push(i);
//     }else{
//       s.push(j);
//     }
//   }
//   int celeb = s.top();
//   for(int i=0;i<n;i++){
//     if((i!=celeb)&&(arr[i][celeb]==0 ||arr[celeb][i]==1)){
//       return -1;
//     }
//   }return celeb;
// }
// int main(){
//   vector<vector<int>>arr = {{0,1,0},
//                             {0,0,0},
//                           {0,1,0}};
// int ans = getCelebrity(arr);
// cout<<"Celebrity is "<<ans<<endl;
// }

// QUEUE
//  class Node{
//    public:
//  int data;
//  Node* next;
//  Node(int val){
//    data = val;
//    next = NULL;
//  }
//  };
//  class Queue{
//    Node* head;
//    Node* tail;
//    public:
//    Queue(){
//      head = tail = NULL;
//    }
//    void push(int data){//insert data at tail
//      Node* newNode = new Node(data);
//      if(empty()){
//        head = tail = newNode;
//      }else{
//        tail->next = newNode;
//        tail = newNode;
//      }
//    }
//    void pop(){//O(1)
//      if(empty()){
//        cout<<"LL is empty\n";
//      }else{
//      Node* temp = head;
//      head = head->next;
//      delete temp;
//    }
//    }
//    int front(){
//      if(empty()){
//        cout<<"LL is empty\n";
//        return -1;
//      }
//      return head->data;
//    }
//    bool empty(){
//      return head ==NULL;
//    }
//    void print(){
//      Node* temp =head;
//      while(temp!=NULL){
//        cout<<temp->data<<" ";
//        temp=temp->next;
//      }
//    }
//  };
// int main(){
//  queue<int> q;
//  q.push(1);
//  q.push(2);
//  q.push(3);
//  q.push(4);
//  while(!q.empty()){
//    cout<<q.front()<<" ";
//    q.pop();
// }
//  deque<int>dq;
//  dq.push_back(1);
//  dq.push_back(2);
//  dq.push_back(3);//4,1,2,3
//  dq.push_front(4);
//  cout<<dq.front()<<" "<<dq.back()<<endl;
//  dq.pop_back();
//  cout<<dq.front()<<" "<<dq.back()<<endl;//4 1 2
//  }

// CIRCULAR QUEUE
// class CircularQueue{
//   int *arr;
//   int currSize, cap;
//   int f, r;
// public:
//   CircularQueue(int size){
//     cap = size;
//     arr = new int[cap];
//     currSize=0;
//     f = 0;
//     r = -1;
//   }
//   void push(int data){//O(1)
//     if(currSize ==cap){//FULL
//       cout<<"circular queue is full\n";
//       return;
//     }
//     r = (r+1)%cap;
//     arr[r]=data;
//     currSize++;
//   }
//   void pop(){//O(1)
//     if(empty()){
//       cout<<"Circular queue is empty\n";
//       return;
//     }
//     f =(f+1)%cap;
//     currSize--;
//   }
//   int front(){//O(1)
//     if(empty()){
//       cout<<"Circular queue is empty\n";
//       return -1;
//     }
//     return arr[f];
//   }
//   bool empty(){//O(1)
//     return currSize ==0;
//   }
//   void printArray(){
//     for(int i=0;i<cap;i++){
//       cout<<arr[i]<<" ";
//     }cout<<endl;
//   }
// };
// int main(){
//   CircularQueue cq(3);
//   cq.push(1);
//   cq.push(2);
//   cq.push(3);
//   cq.pop();
//   cq.push(4);
//   //cq.printArray();
//   while(!cq.empty()){
//     cout<<cq.front()<<" ";
//     cq.pop();
//   }cout<<endl;
// }

//FIRST UNIQUE CHARACTER IN A STRING TC = sc =O(N)
// int firstUniqChar(string s) {
//   unordered_map<char,int>m;
//   queue<int>Q;
//   for(int i=0;i<s.size();i++){
//     if(m.find(s[i]) ==m.end()){
//       Q.push(i);     
//     }
//     m[s[i]]++;
//     while(Q.size()>0 && m[s[Q.front()]]>1){
//       Q.pop();
//     }
//   }return Q.empty()?-1:Q.front();
// }

//SLIDING WINDOW MAXIMUM TC = SC = O(N)
// vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//   deque<int>dq;
//   vector<int>res;
//   //1st window
//   for(int i=0;i<k;i++){
//     while(dq.size()>0 && nums[dq.back()]<=nums[i]){
//         dq.pop_back();
//     }dq.push_back(i);
//   }
//   for(int i=k;i<nums.size();i++){
//     res.push_back(nums[dq.front()]);
//     //remove el whaich are not part of curr window
//     while(dq.size()>0 && dq.front()<=i-k){
//       dq.pop_front();
//     }
//     //remove smaller from end
//     while(dq.size()>0 && nums[dq.back()]<=nums[i]){
//       dq.pop_back();
//     }dq.push_back(i);
//   }res.push_back(nums[dq.front()]);
//   return res;
// }

//GAS STATION
// int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
//   int totGas =0,totCost =0;
//   for(int val :gas){
//       totGas +=val;
//   }
//   for(int val :cost){
//       totCost +=val;
//   }
//   if(totGas < totCost){
//       return -1;
//   }
//   //unique soln always exist
//   int start=0,currGas =0;
//   for(int i=0;i<gas.size();i++){
//       currGas +=(gas[i]-cost[i]);
//       if(currGas <0){
//           start = i+1;
//           currGas =0;
//       }
//   } return start;
// }

//BINARY TREES
// class Node{
//   public:
//   int data;
//   Node* left;
//   Node* right;
//   Node(int val){
//       data = val;
//       left = right = NULL;
//   }
// };
// static int idx = -1;
// Node* buildTree(vector<int>preorder){//TC = O(N)
//   idx++;
//   if(preorder[idx]==-1){
//       return NULL;
//   }
//   Node* root = new Node(preorder[idx]);
//   root->left = buildTree(preorder);//LEFT
//   root->right = buildTree(preorder);//RIGHT 
//   return root;
// }
// //preorder
// void preOrder(Node *root){  //TC = O(N)
//   if(root == NULL){
//     return;
//   }
//   cout<<root->data<<" ";
//   preOrder(root->left);
//   preOrder(root->right);
// }
// //inorder
// void inOrder(Node* root){//TC = O(N )
//   if(root == NULL){
//     return;
//   }
//   inOrder(root->left);
//   cout<<root->data<<" ";
//   inOrder(root->right);
// }
// //postorder
// void postOrder(Node* root){//TC = O(N )
//   if(root == NULL){
//     return;
//   }
//   postOrder(root->left);
//   postOrder(root->right);
//   cout<<root->data<<" ";
// }
//level order
// void levelOrder(Node* root){
//   queue<Node*>q;
//   q.push(root);
//   q.push(NULL); 
//   while(q.size()>0){
//     Node* curr = q.front();
//     q.pop();
//     if(curr ==NULL){
//       if(!q.empty()){
//         cout<<endl;
//         q.push(NULL);
//         continue;
//       }else{
//         break;
//       }
//     }
//     cout<<curr->data;
//     if(curr->left!=NULL){
//       q.push(curr->left);
//     }
//     if(curr->right!=NULL){
//       q.push(curr->right);
//     }
//   }
// }
// int main(){
//   vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
//   Node* root = buildTree(preorder);
//   //preOrder(root);
//   //inOrder(root);
//   //postOrder(root);
//   levelOrder(root);
//   // cout<<root->data<<endl;
//   // cout<<root->left->data<<endl;
//   // cout<<root->right->data<<endl;
//   return 0;
// }

//HEIGHT & COUNT & SUM OF NODES OF A TREE
// class Node{
//   public:
//   int data;
//   Node* left;
//   Node* right;
//   Node(int val){
//     data = val;
//     left = right = NULL;
//   }
// };
// int height(Node* root){
//   if(root == NULL){
//     return 0;
//   }
//   int leftHt = height(root->left);
//   int rightHt = height(root->right);
//   return max(leftHt,rightHt)+1;//1 is root
// }
// int count(Node* root){
//   if(root == NULL){
//     return 0;
//   }
//   int leftCount = count(root->left);
//   int rightCount = count(root->right);
//   return leftCount+rightCount+1;//1 is root
// }
// int sum(Node* root){
//   int total =0;
//   if(root == NULL){
//     return 0;
//   }
//   int leftSum = sum(root->left);
//   int rightSum = sum(root->right);
//   return leftSum+rightSum+root->data;
// }
// int main(){
//   vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
//   Node* root = buildTree(preorder);
//   cout<<"height :"<<height(root)<<endl;
//   cout<<"count :"<<count(root)<<endl;
//   cout<<"sum :"<<sum(root)<<endl;
//   return 0;
// }

//IS SAME TREE
// bool isSameTree(Node* p,Node* q) {
//   if(p==NULL || q ==NULL){
//     return p == q;
//   }
//   bool isLeftSame = isSameTree(p->left,q->left);
//   bool isRightSame = isSameTree(p->right,q->right);
//   return (isLeftSame && isRightSame && (p->data == q->data));
// }

//SUBTREE OF ANOTHER TREE
// bool isIdentical(Node* root, Node* subRoot){
//   if(root == NULL || subRoot == NULL){
//     return root == subRoot;
//   }
//   return (isIdentical(root->left,subRoot->left) && isIdentical(root->right,subRoot->right)  && (root->data == subRoot->data));
// }
//   bool isSubtree(Node* root, Node* subRoot) {
//     if(root ==NULL || subRoot == NULL){
//       return root == subRoot;
//     }   
//     if(root->data == subRoot ->data && isIdentical(root,subRoot)){
//       return true;
//     }
//     return isSubtree(root->left,subRoot)||isSubtree(root->right,subRoot);
//   }

//DIAMETER OF TREE
// int height(Node* root){
//   if(root == NULL){
//     return 0;
//   }
//   return max(height(root->left),height(root->right))+1;
// }
//   int diameterOfBinaryTree(Node* root) {
//     if(root == NULL){
//       return 0;
//     }
//     int leftDia = diameterOfBinaryTree(root->left);
//     int rightDia = diameterOfBinaryTree(root->right);
//     int currDia = height(root->left)+height(root->right);
//     return max(max(leftDia,rightDia),currDia);
//   }

//TOP VIEW OF TREE
// void topView(Node* root){ //O(nlogn) because map->find = O(logN),unordered map o(1)
//   queue<pair<Node*,int>>q; //(Node,Horzontal distance)
//   map<int,int>m; //<HD,node val>
//   q.push({root,0});
//   while(q.size()>0){
//     Node* curr = q.front().first;
//     int currHD = q.front().second;
//     q.pop();
//     if(m.find(currHD)== m.end()){
//       m[currHD]=curr->data;
//     }
//     if(curr->left!=NULL){
//       q.push({curr->left,currHD-1});
//     }
//     if(curr->right!=NULL){
//       q.push({curr->right,currHD+1});
//     }
//   }
//   for(auto it : m){
//     cout<<it.second<<" ";
//   }cout<<endl;
// }
// int main(){
//   vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
//   Node* root = buildTree(preorder);
//   topView(root);  
//   return 0;
// }

//K'TH LEVEL OF A TREE // TC = O(n)
// void Kthlevel(Node* root, int k){
// if(root == NULL) return;
// if(k ==1){
//   cout<<root->data<<" ";
//   return;
// }
// Kthlevel(root->left,k-1);
// Kthlevel(root->right,k-1);
// }
// int main(){
//   vector<int> preorder = {1,2,7,-1,-1,-1,3,4,-1,-1,5,-1,-1};
//   Node* root = buildTree(preorder);
//   Kthlevel(root,3);
//   return 0;
// }

//LEAST COMMON ANCESTOR //TC = SC = O(N)
// Node* lowestCommonAncestor(Node* root, Node* p, Node* q) {
//   if(root == NULL){
//     return NULL;
//   }
//   if(root->val == p->val ||root->val == q->val){
//     return root;
//   }
//   Node* leftLCA = lowestCommonAncestor(root->left,p,q);
//   Node* rightLCA = lowestCommonAncestor(root->right,p,q);
//   if(leftLCA && rightLCA){
//     return root;
//   }else if(leftLCA != NULL){
//     return leftLCA;
//   }else{
//     return rightLCA;
//   }
// }

//BUILD TREE FROM PREORDER & INORDER 
// int search(vector<int>& inorder, int left, int right, int val){
//   for(int i= left;i<=right;i++){
//     if(inorder[i]==val){
//       return i;
//     }
//   }return -1;
//   }
//   Node* helper(vector<int>& preorder, vector<int>& inorder, int& preIdx, int left, int right){
//     if(left >right) return NULL;
//     Node* root = new Node(preorder[preIdx]);
//     int inIdx = search(inorder,left,right,preorder[preIdx]);
//     preIdx++;
//     root->left = helper(preorder,inorder,preIdx,left, inIdx-1);
//     root->right = helper(preorder,inorder,preIdx,inIdx+1,right);
//     return root;
//   }
//   Node* buildTree(vector<int>& preorder, vector<int>& inorder) {
//       int preIdx =0;
//       return helper(preorder,inorder, preIdx,0,inorder.size()-1);
//     }

//SUM TREE //TC = O(N)
// int sumTree(Node* root){
//   if(root == NULL){
//     return 0;
//   }
//   int leftSum = sumTree(root->left);
//   int rightSum = sumTree(root->right);
//   root->data +=leftSum+rightSum;
//   return root->data;
// }
// int main(){
//   vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
//   Node* root = buildTree(preorder);
//   cout<<"before conversion :";
//   preOrder(root);
//   cout<<endl;
//   sumTree(root);
//   cout<<"after conversion :";
//   preOrder(root);
//   cout<<endl;
//   return 0;
// }

//BINARY TREE PATHS
// void allPaths(Node* root, string path, vector<string>& ans){
//   if(root->left ==NULL && root->right == NULL){
//     ans.push_back(path);
//     return;
//   }
//   if(root->left){
//     allPaths(root->left,path+"->"+to_string(root->left->data),ans);
//   }
//   if(root->right){
//     allPaths(root->right,path+"->"+to_string(root->right->data),ans);
//   }
// }
//   vector<string> binaryTreePaths(Node* root) {
//     vector<string> ans;
//     string path = to_string(root->data);
//     allPaths(root,path,ans);
//     return ans;
//   }

//MAX WIDTH OF BINARY TREE
// int widthOfBinaryTree(Node* root) {
//   queue<pair<Node*, unsigned long long>>q;
//   q.push({root,0});
//   int maxWidth =0;
//   while(q.size()>0){
//     int currLevelSize = q.size();
//     unsigned long long stIdx = q.front().second;
//     unsigned long long endIdx = q.back().second;
//     maxWidth = max(maxWidth,(int)(endIdx -stIdx +1));
//     for(int i=0;i<currLevelSize;i++){
//       auto curr = q.front();
//       q.pop();
//       if(curr.first->left){
//         q.push({curr.first->left,curr.second*2+1});
//       }
//       if(curr.first->right){
//         q.push({curr.first->right,curr.second*2+2});
//       }
//     }
//   }return maxWidth;
// }

//MORRIS INORDER TRAVERSAL
// vector<int> inorderTraversal(Node* root) {
//  vector<int>ans;
// Node* curr = root;
// while(curr!=NULL){
//   if(curr->left == NULL){
//     ans.push_back(curr->data);
//     curr = curr->right;
//   }else{// find the IP
//   Node* IP = curr->left;
//   while(IP->right!=NULL && IP->right!=curr){
//     IP = IP->right;
//   }
//   if(IP->right == NULL){
//     IP->right = curr;//create
//     curr = curr->left;
//   }else{
//     IP->right = NULL; //destroy
//     ans.push_back(curr->data);
//     curr = curr->right;
//   }
//   }
// }
//   return ans; 
// }

//FLATTEN BINARY TREE TO LINKED LIST
// Node* nextRight = NULL;
//   void flatten(Node* root) {
//     if(root == NULL)return;
//     flatten(root->right);
//     flatten(root->left);
//     root->left = NULL;
//     root->right = nextRight;
//     nextRight = root;
//   }

//BUILD A BST
// Node* insert(Node* root, int val){
//   if(root == NULL){
//     return new Node(val);
//   }
//   if(val<root->data){
//     root->left = insert(root->left,val);
//   }else{
//     root->right = insert(root->right,val);
//   }return root;
// }
// Node* buildBST(vector<int>arr){
//   Node* root = NULL;
//   for(int val : arr){
//     root = insert(root,val);
//   }
//   return root;
// }
// //SEARCH IN BST
// bool search(Node* root,int key){//o(height)
//   if(root == NULL){
//     return false;
//   }if(root->data == key){
//     return true;
//   }if(key< root->data){
//     return search(root->left,key);
//   }else{
//     return search(root->right,key);
//   }}
//   //DELETE NODE IN BST
//   Node* getInorderSuccessor(Node* root){//left most node in right subtree
//     while(root!=NULL && root->left != NULL){
//       root = root->left;
//     }return root;
//   }
//   Node* delNode(Node* root, int key){//key=>val to delete
//     if(root == NULL){
//       return NULL; 
//     } 
//     if(key<root->data){
//       root->left = delNode(root->left,key);
//     }else if(root->data<key){
//       root->right = delNode(root->right,key);
//     }else{//root = key delNode
//       //O & 1 CHILD CASE
//       if(root->left == NULL){
//         Node* temp = root->right;
//         delete root;
//         return temp;
//       }else if(root->right == NULL){
//         Node* temp = root->left;
//         delete root;
//         return temp;
//       }else{//2CHILD
//         Node* IS = getInorderSuccessor(root->right);
//           root->data = IS->data;
//           root->right = delNode(root->right,IS->data);
//       }
//     }return root;
//   }
// int main(){
//   vector<int> arr = {3,2,1,5,6,4};
//   Node* root = buildBST(arr);
//   cout<<"before : ";
//   inOrder(root);
//   //cout<<search(root,8);
//   cout<<endl;
//   delNode(root,5);
//   cout<<"after :";
//   inOrder(root);
//   cout<<endl;
//   return 0;
// }

//CONVERT SORTED ARRAY INTO BST
// Node* helper(vector<int>& nums,int st, int end){
//   if(st>end)return NULL;
//   int mid = st +(end-st)/2;
//   Node* root = new Node(nums[mid]);
//   root->left = helper(nums,st,mid-1);
//   root->right = helper(nums,mid+1,end);
//   return root;
// }
// Node* sortedArrayToBST(vector<int>& nums) {
//     return helper(nums,0,nums.size()-1);
// }

//VALIDATE BST
// bool helper(Node* root,Node* min,Node* max){
//   if(root == NULL) return true;
//   if(min !=NULL && root->data <= min->data){
//     return false;
//   }
//   if(max!= NULL && root->data >= max->data){
//     return false;
//   }return helper(root->left,min,root) && helper(root->right,root,max);
// }
//   bool isValidBST(Node* root) {
//       return helper(root,NULL,NULL);
//   }

//MIN DISTANCE BETWEEN BST NODES
// Node* prev = NULL;
// int getMinimumDifference(Node* root) {
//   int ans = INT_MAX;
//     if(root == NULL)return INT_MAX;
//     if(root->left!=NULL){
//       int leftMin = getMinimumDifference(root->left);
//       ans = min(ans,leftMin);
//     }
//     if(prev!=NULL){
//       ans = min(ans,root->data-prev->data);
//     }prev = root;
//     if(root->right!=NULL){
//       int rightMin = getMinimumDifference(root->right);
//       ans = min(ans,rightMin);
//     }return ans;
// }

//KTH SMALLEST ELEMENT IN BST
// int prevOrder = 0;
//   int kthSmallest(Node* root, int k) {
//     if(root == NULL) return -1;
//     if(root->left !=NULL){
//       int leftAns = kthSmallest(root->left,k);
//       if(leftAns != -1){
//         return leftAns;
//       }
//     }
//     if(prevOrder + 1 == k){
//       return root->data;
//     }
//     prevOrder+=1;
//     if(root->right !=NULL){
//       int rightAns = kthSmallest(root->right,k);
//       if(rightAns !=-1){
//         return rightAns;
//       }
//     }
//       return -1;
//   }

//LOWEST COMMON ANCESTOR IN BST
// Node* lowestCommonAncestor(Node* root, Node* p, Node* q) {
//   if(root == NULL)return NULL;
//   if(root->data >p->data && root->data >q->data){
//     return lowestCommonAncestor(root->left,p,q);
//   }
//   else if (root->data < p->data && root->data < q->data){
//     return lowestCommonAncestor(root->right,p,q);
//   }else{
//     return root;
//   }
// }

//CONSTRUCT BST FROM PREORDER //TC = O(N)
// Node* helper(vector<int>& preorder,int &i,int bound ){
//   if(i>=preorder.size() || preorder[i]>bound) return NULL;
//   Node* root = new Node(preorder[i++]);
//   root->left = helper(preorder,i,root->data);
//   root->right = helper(preorder,i,bound);
//   return root;
// }
// Node* bstFromPreorder(vector<int>& preorder) {
//   int i =0;
//   return helper(preorder,i,INT_MAX);
// }

//MERGE 2 BST
// void inorder(Node* root, vector<int> &arr){
//   if(root ==  NULL) return;
//   inorder(root->left,arr);
//   arr.push_back(root->data);
//   inorder(root->right,arr);
// }
// Node* buildBSTFromSorted(vector<int>arr,int st, int end){
//   if(st>end) return NULL;
//   int mid = st +(end-st)/2;
//   Node* root = new Node(arr[mid]);
//   root->left = buildBSTFromSorted(arr,st,mid-1);
//   root->right = buildBSTFromSorted(arr,mid+1,end);
//   return root;
// }
// Node* merge2BST(Node* root1, Node* root2){
//   vector<int>arr1,arr2;
//   inorder(root1,arr1);
//   inorder(root2,arr2);
//   vector<int> temp; // final BST inorder : sorted
//   int i=0,j=0;
//   while(i<arr1.size() && j<arr2.size()){
//     if(arr1[i]<arr2[j]){
//       temp.push_back(arr1[i++]);
//     }else{
//       temp.push_back(arr2[j++]);
//     }
//   }while(i<arr1.size()){
//       temp.push_back(arr1[i++]);
//     }
//     while(j<arr2.size()){
//       temp.push_back(arr2[j++]);
//     }
//     return buildBSTFromSorted(temp,0,temp.size()-1);//sorted array,st,end
// }
// int main(){
//   vector<int> arr1 = {8,2,1,10};
//   vector<int> arr2 ={5,3,0};
//   Node* root1 = buildBST(arr1); 
//   Node* root2 = buildBST(arr2); 
//   Node* root = merge2BST(root1,root2);
//   vector<int> seq;
//   inorder(root,seq);
//   for(int v : seq){
//     cout<<v<<" ";
//   }
//   cout<<endl;
//   return 0;
// }

//LARGEST BST IN BT
// class Info{
//   public:
//   int min,max,sz;
//   Info(int mi, int ma, int size){
//     min = mi;
//     max = ma;
//     sz = size;
//   }
// };
// Info helper(Node* root){//TC = O(N)
//   if(root == NULL){
//     return Info(INT_MAX,INT_MIN,0);
//   }
//   Info left = helper(root->left);
//   Info right = helper(root->right);
//   if(root->data > left.max && root->data < right.min){
//     int currMin = min(root->data,left.min);
//     int currMax = max(root->data,right.max);
//     int currSz =  left.sz+right.sz+1;
//     return Info(currMin,currMax,currSz);
//   }return Info(INT_MIN,INT_MAX,max(left.sz,right.sz));
// }
// int largestBSTinBT(Node* root){
//   Info info = helper(root);
//   return info.sz;//max BST size
// }
// int main(){
//   Node* root = new Node(10);
//   root->left = new Node(5);
//   root->right = new Node(15);
//   root->left->left = new Node(1);
//   root->left->right = new Node(8);
//   root->right->right = new Node(50);
//   cout<<largestBSTinBT(root)<<endl;
//   return 0;
// }

//POPULATE NEXT RIGHT POINTERS //TC = O(N)
// Node* connect(Node* root) {
// if(root == NULL || root->left == NULL){
//   return root;
// }
//   queue<Node*>q;
//   q.push(root);
//   q.push(NULL);//mark the end of a level
//   Node* prev = NULL;
//   while(q.size()>0){
//     Node* curr = q.front();
//     q.pop();
//     if(curr == NULL){
//       if(q.size() ==0){
//         break;
//       }
//       q.push(NULL);
//     }else{
//       if(curr->left!=NULL){
//         q.push(curr->left);
//       }
//       if(curr->right!=NULL){
//         q.push(curr->right);
//       }
//       if(prev!=NULL){
//         prev->next = curr;
//       }
//     }prev = curr;
//   }return root;
// }

//BST ITERATOR // TC = O(1) SC = O(H)
// class BSTIterator {
// public:
// stack<Node*>s;
// void storeLeftNodes(Node* root){
//   while(root!=NULL){
//     s.push(root);
//     root = root->left;
//   }
//   }
//   BSTIterator(Node* root) {
//       storeLeftNodes(root);
//   }
//   int next() { //TC = O(1) sc = o(H)
//     Node* ans = s.top();
//     s.pop();
//     storeLeftNodes(ans->right);
//     return ans->data;
//   }
//   bool hasNext() {
//       return s.size()>0;
//   }
// };

//INORDER PREDECESSOR & SUCCESSOR IN BST
// Node* rightMostInLeftSubtree(Node* root){
//   Node* ans;
//   while(root!=NULL){
//     ans = root;
//     root = root->right;
//   }return ans;
// }
// Node* leftMostInRightSubtree(Node* root){
//   Node* ans;
//   while(root!=NULL){
//     ans = root;
//     root = root->left;
//   }return ans;
// }
// vector<int> getPredSucc(Node* root,int key){
//   Node* curr = root;
//   Node* pred = NULL;
//   Node* succ = NULL;
//   while(curr!=NULL){
//     if(key<curr->data){
//       succ = curr;
//       curr = curr->left;
//     }else if(key>curr->data){
//       pred = curr;
//       curr = curr->right;
//     }else{
//       if(curr->left!=NULL){
//         //inorder pred
//         pred = rightMostInLeftSubtree(curr->left);
//       }
//       if(curr->right!=NULL){
//         //inorder succ
//         succ = leftMostInRightSubtree(curr->right);
//       }
//       break;
//     }
//   }return {pred->data,succ->data};
// }
// int main(){
//   Node* root = new Node(6);
//   root->left = new Node(4);
//   root->right = new Node(8);
//   root->left->left = new Node(1);
//   root->left->right = new Node(5);
//   root->right->left = new Node(7);
//   root->right->right = new Node(9);
//   int key =7;
//   vector<int> ans = getPredSucc(root,key);
//   cout<<"predecessor: "<<ans[0]<<endl;
//   cout<<"successor: "<<ans[1]<<endl;
//   return 0;
// }

//GRAPHS
class Graph{
  int V;
  list<int> *l; //int *arr
  public:
  Graph(int V){
    this->V = V;
    l = new list<int> [V]; //arr = new int[V]
  }
  void addEdge(int u, int v){
    l[u].push_back(v);
    l[v].push_back(u);
  }
  //BFS TRAVERSAL
  // void bfs(){//O(V+E)
  //   queue<int>Q;
  //   vector<bool>vis(V,false);
  //   Q.push(0);
  //   vis[0]= true;
  //   while(Q.size()>0){
  //     int u = Q.front();//u-v
  //     Q.pop();
  //     cout<<u<<" ";
  //     for(int v: l[u]){//v ->immediate neighbor
  //       if(!vis[v]){
  //         vis[v]=true;
  //         Q.push(v);
  //       }
  //     }
  //   }cout<<endl;
  // }
  //DFS TRAVERSAL
  // void dfsHelper(int u, vector<bool>&vis){//O(V+E)
  //   cout<<u<<" ";
  //   vis[u] =true;
  //   for(int v : l[u]){
  //     if(!vis[v]){
  //       dfsHelper(v,vis);
  //     }
  //   }
  // }
  // void dfs(){
  //   int src =0;
  //   vector<bool> vis(V,false);
  //   // for(int i=0;i<V;i++){ for disconnected graph
  //   //   if(!vis[i]){
  //   //     dfsHelper(i,vis);
  //   //   }
  //   // } 
  //   dfsHelper(src,vis);
  //   cout<<endl;
  // }
  //DETECT CYCLE IN UNDIR GRAPH USING DFS //TC = O(V+E)
  bool isCycleUndirDFS(int src, int par, vector<bool>&vis){//dfs algo
    vis[src]=true;
    list<int> neighbors = l[src];
    for(int v : neighbors){
      if(!vis[v]){
        if(isCycleUndirDFS(v,src,vis)){
          return true;
        }
      }else if(v!=par){
        return true;
      }
    }  return false;
  }
  bool isCycle(){
    vector<bool> vis(V,false);
    for(int i=0;i<V;i++){
      if(!vis[i]){
        if(isCycleUndirDFS(i,-1,vis)){
          return true;
        }
      }
    }return false;
  }
  // void printAdjList(){
  //   for(int i=0;i<V;i++){
  //     cout<<i<<" : ";
  //     for(int neigh : l[i]){
  //       cout<<neigh<<" ";
  //     }cout<<endl;
  //   }
  // }
 };
int main(){
  Graph g(5);
  g.addEdge(0,1);
  g.addEdge(1,2);
  g.addEdge(1,3);
  //g.addEdge(2,3);
  g.addEdge(2,4);
  // cout<<"bfs :";
  // g.bfs();
  // cout<<"dfs :";
  // g.dfs();
  //g.printAdjList();
  cout<<g.isCycle();
  return 0;
}

