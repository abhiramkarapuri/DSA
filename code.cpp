#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include<cstring>
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
//Loops
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
//i<=n ; condition
//i++ updation
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
//1111
//222
//33
//4

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
//int n=4;
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
//cout<<"Sumofdigits is"<< SumOfDigits(2356)<<endl;
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
//1's complement 0->1;1->0
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
 //marks[0] = 101; //possible
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
//INT_MAX = + infinity
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
//vector<int> vec = {1,2,3};
// vector<int> vec(5,0);
//vector<char> vec = {'a','b','c','d','e'};
//vector<int> vec;
// cout<<"size = "<<vec.size() <<endl;

// vec.push_back(0); // adds at last
// vec.push_back(1); 
// vec.push_back(2);
// vec.push_back(3);
// vec.push_back(4);
// cout<<"after push back size = "<<vec.size() <<endl;
//cout<<"vector size " << vec.size()<<endl;
//cout<<"vector capacity "<< vec.capacity()<<endl;
//vec.pop_back(); // deletes last one
// for(int val :vec){ // for each loop
//     cout<< val << endl;
// }
// cout<< vec.front()<<endl; // prints 1st value
// cout<< vec.back()<<endl; // prints last value
// cout<< vec.at(1)<<endl; // prints value at 1

// we add & before name is pass by referece
//return 0;}

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

//PAIR SOME : 2POINTERS // o(n)
// vector<int> pairSum(vector<int> nums, int target){
//     vector<int> ans;
//      int n = nums.size();
//      int i=0,j=n-1;
//      while(i<j){
//         int sum = nums[i] + nums[j];
//         if(sum > target){
//             j--;
//         }
//         else if(sum < target){
//             i++;
//         }
//         else {
//             ans.push_back(nums[i]);
//             ans.push_back(nums[j]);
//             return ans;
//         }
//      } return ans;
// }
// int main(){
//     vector<int> nums = {2,7,11,15};
//     int target =26;
//  vector<int> ans = pairSum(nums,target);
//   cout << ans[0] << ","<<ans[1]<<endl;
//    return 0;
// }

//MAJORITY ELEMENT - BRUTEFORCE
//  int majorityElement(vector<int>& nums) {
//     int n = nums.size();
//         for(int val : nums){
//             int freq =0;
//             for(int el : nums){
//              if (el == val){
//                 freq++;
//              }
//             }if(freq > n/2){
//                return val;
//             }
//         }
//     }
    // int main(){
    //     vector<int> nums = {2,1,2,1,2};
    //     cout << majorityElement(nums)<<endl;
    // }

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

 //Majority Element - Moores voting algorithm
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
    //int a= 10;
    // int* ptr = &a;
    // int** parPtr = &ptr;
    // cout<< &ptr<<endl;
    // cout<< parPtr<<endl;
    // cout<< *(parPtr)<<endl;
    // cout<<ptr<<endl;
    // cout<<**(parPtr)<<endl;
    //cout<< &a<<endl;
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
//int arr[] = {6,7,8,9};
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

    //STL 
// #include<list>
// #include<deque>
// #include<stack>
// #include<queue>
// #include<map>
// #include<unordered_map>
// #include<set>
// #include<unordered_set>

    // int main(){
    // vector<int> vec;//0
    // vector<int> vec = {1,2,3,4,5};
    // vector<int> vec(3,10);
    // vec.push_back(1);
    // vec.push_back(2);
    // vec.push_back(3);
    // vec.push_back(4);
    // vec.push_back(5);
    // vec.emplace_back(6);
    // vec.pop_back();
    // cout<<vec.size()<<endl;
    // cout<<vec.capacity()<<endl;
    // for(int val : vec){
    //     cout<<val<<" ";
    // }
    // cout<<endl;
    // cout<<"val at idx 2 :"<<vec[2]<<" or "<<vec.at(2)<<endl;
    // cout<<endl;
    // FRONT AND BACK
    // cout<<"at front : "<<vec.front()<<endl;
    // cout<<"at back : "<<vec.back()<<endl;
    //cout<<*vec.begin(); -> gives 1st element
    //ERASE
    //vec.erase(vec.begin());
    //vec.erase(vec.begin()+2);
    //vec.erase(vec.begin()+1,vec.begin()+3);
    // for(int val : vec){
    //     cout<<val<<" ";
    // }
    // cout<<endl;
    // cout<<vec.size();
    // cout<<vec.capacity();
    
    //INSERT
    //vec.insert(vec.begin()+2,100);

    //CLEAR
    //vec.clear();
    // cout<<vec.size();
    // cout<<vec.capacity();

    //EMPTY
    //cout<<"is empty : "<<vec.empty()<<endl;
    // for(int val : vec){
    //     cout<<val<<" ";
    // }
    //cout<<*vec.end();

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

    //LIST
    // list<int> l;
    // l.emplace_back(1);
    // l.push_back(2);
    // l.push_front(3);
    // l.push_front(5);
    // l.pop_back();
    // l.pop_front();
    // for(int val : l){
    //     cout<<val<<" ";
    // }
    // cout<<l[2]<<endl; //not possible in list
    // cout<<endl;


    //DEQUE
    // deque<int> d = {1,2,3,4,5};
    // for(int val : d){
    //     cout<<val<<" ";
    // }
    // cout<<d[2]<<endl; // possible in queue not in list
    // cout<<endl;


    //PAIRS
    //pair<int,int> p = {3,5};
    //pair<char,int> p = {'a',5};
    // cout<<p.first<<endl;
    // cout<<p.second<<endl;
    // pair<int,pair<char,int>> p = {3,{'a',5}};
    // cout<<p.second.first<<endl;
    // cout<<p.second.second<<endl;
    // vector<pair<int,int>> vec = {{1,2},{2,3},{3,4}};
    // vec.push_back({4,5});//insert
    // vec.emplace_back(4,5);// in-place objects create
    // for(auto p : vec){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }


    //STACK
    // stack<int> s;
    // s.push(1);
    // s.push(2);
    // s.push(3);
    // while (!s.empty())
    // {
    //     cout<<s.top()<<" ";
    //     s.pop();
    // }
    // cout<<endl;
    //cout<<"top = "<<s.top()<<endl;
    // stack<int> s2;
    // s2.swap(s);
    // cout<<"s size : "<<s.size()<<endl;
    // cout<<"s2 size : "<<s2.size();
    

    //QUEUE
    // queue<int> q;
    // q.push(1);
    // q.push(2);
    // q.push(3);
    // while(!q.empty()){
    //     cout<<q.front()<<" ";
    //     q.pop();
    // }
    // cout<<endl;


    //PRIORITY_QUEUE
    // FOR LARGEST TO BE ON TOP
    // priority_queue<int> q;
    // FOR SMALLEST TO BE ON TOP
    // priority_queue<int,vector<int>,greater<int>> q;
    // q.push(5);
    // q.push(3);
    // q.push(10);
    // q.push(4);
    // while(!q.empty()){
    //     cout<<q.top()<<" ";
    //     q.pop();
    // }
    // cout<<endl;


    //MAP
    //map(key,value) key should be unique
    // map<string,int> m;
    // m["tv"] =100;
    // m["laptop"] =100;
    // m["phone"] =50;
    // m["tabet"] =120;
    // m["watch"] =50;
    //  m.insert({"camera",25});
    // // m.emplace({"camera",25});
    // for(auto p:m){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }
    // if(m.find("camera") != m.end()){
    //     cout<<"found\n";
    // }else{
    //     cout<<"not found\n";
    //     }
    // cout<<"count = "<<m.count("laptop")<<endl;
   //cout<<m.size();
   

   //MULTIMAP
    // multimap<string,int> m;
    // m.emplace("tv",100);
    // m.emplace("tv",100);
    // m.emplace("tv",100);
    // m.emplace("tv",100);
    //  m.insert({"camera",25});
    // for(auto p:m){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }


    //UNORDERED_MAP
    // unordered_map<string,int> m;
    // m.emplace("tv",100);
    // m.emplace("laptop",100);
    // m.emplace("fridge",100);
    // m.emplace("watch",100); 
    // for(auto p:m){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }


    //SET
    // set<int> s;
    // s.insert(1);
    // s.insert(2);
    // s.insert(3);
    // s.insert(4);
    // s.insert(5);
    // s.insert(6);
    // cout<<"lower bound = "<<*(s.lower_bound(4))<<endl;//4
    // cout<<"upper bound = "<<*(s.upper_bound(4))<<endl;//5
    // for(auto val:s){
    //     cout<<val<<" ";
    // }
    // cout<<endl;


    //MULTISET
    // multiset<int> s;
    // s.insert(1);
    // s.insert(2);
    // s.insert(3);
    // s.insert(4);
    // s.insert(5);
    // s.insert(1);
    // s.insert(2);
    // for(auto val:s){
    //     cout<<val<<" ";
    // }
    // cout<<endl;


    //UNORDEREDSET
    // unordered_set<int> s;
    // s.insert(1);
    // s.insert(2);
    // s.insert(3);
    // s.insert(4);
    // s.insert(2);
    // s.insert(3);
    //
    // for(auto val:s){
    //     cout<<val<<" ";
    // }
    // cout<<endl;
//}


    // VECTOR PAIR REVERSE SORT
// bool comparator(pair<int,int>p1,pair<int,int>p2){
//     if(p1.second<p2.second) return true;
//     if(p1.second>p2.second) return false;
//     if(p1.first<p2.first) return true;
//     else return false;  
// }

    //SORTING 
//int main(){
    // For Arrays
    // int arr[5] = {3,5,1,8,2};
    // sort(arr,arr+5);
    // for(int val: arr){
    //     cout<<val<<" ";
    // }
    // cout<<endl;
    // //
    // vector<int> vec = {3,5,1,8,2};
    // sort(vec.begin(),vec.end());
    // //
    // for(int val: vec){
    //     cout<<val<<" ";
    // }
    // // REVERSE ORDER
    // sort(vec.begin(),vec.end(),greater<int>());
    // for(int val: vec){
    //     cout<<val<<" ";
    // }
    //vector<pair<int,int>> vec = {{3,1},{2,1},{7,1},{5,2}};
    // sort(vec.begin(),vec.end());
    // // They will sort w.r.t first value
    // for(auto p : vec){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }
    // sort(vec.begin(),vec.end(),comparator);
    // // They will sort w.r.t second value
    // for(auto p : vec){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }

    //REVERSE
    // vector<int> vec = {1,2,3,4,5};
    // reverse(vec.begin()+1,vec.begin()+3); //start & end
    // for(auto val : vec){
    //     cout<<val<<" ";
    // }

    //NEXT PERMUTATION
    // string s = "abc";
    // prev_permutation(s.begin(),s.end());
    // cout<<s<<endl;

    //MAX ELEMENT
    // vector<int> vec = {1,2,3,4,5};
    // cout<<*(max_element(vec.begin(),vec.end()))<<endl;

    //MIN ELEMENT
    // vector<int> vec = {1,2,3,4,5};
    // cout<<*(min_element(vec.begin(),vec.end()));

    //BINARY SEARCH
    // vector<int> vec = {1,2,3,4,5};
    // cout<< binary_search(vec.begin(),vec.end(),4)<<endl;
    // cout<< binary_search(vec.begin(),vec.end(),10)<<endl;

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

//SORTING ALGORITHMS
//BUBBLE SORT O(n^2)
// void bubblesort(int arr[],int n){
//     for(int i=0;i<n;i++){
//         bool isSwap = false;
//         for(int j=0;j<(n-i-1);j++){
//             if(arr[j]>arr[j+1]){ // if we use < it will sort in descending order
//                 swap(arr[j],arr[j+1]);
//                 isSwap = true;
//             }
//         }
//         if(!isSwap){
//             //array already sorted
//             return;
//         }
//     }
// }
// void printArray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int n =5;
//     int arr[] = {4,1,5,2,3};
//     bubblesort(arr,n);
//     printArray(arr,n);
// }

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

//SORT ARRAY WITH 0S,1S,2S
//  void sortColors(vector<int>& nums) {
//         int n = nums.size();
//         int count0 =0, count1 =0, count2 =0;
//         // O(n)
//         for(int i=0;i<n;i++){
//             if(nums[i]==0){
//                 count0++;
//             }
//             if(nums[i]==1){
//                 count1++;
//             }
//             if(nums[i]==2){
//                 count2++;
//             }
//         }
//         // O(n)
//         int idx =0;
//         for(int i=0;i<count0;i++){
//             nums[idx++] =0;
//         }
//         for(int i=0;i<count1;i++){
//             nums[idx++] =1;
//         }
//         for(int i=0;i<count2;i++){
//             nums[idx++] =2;
//         } 
//     }
// int main(){
//     vector<int> nums = {2,0,2,1,1,0};
//     sortColors(nums);
// }

//DNF ALGORITHM O(n)
//(TAKE YOU FORWARD)
// void sortColors(int arr[], int sz){
//     int low =0, mid =0, high = sz-1;
//     while(mid <= high){
//         if(arr[mid] ==0){
//             swap(arr[low],arr[mid]);
//             low++;
//             mid++;
//         }
//         else if(arr[mid] ==1){
//             mid++;
//         }
//         else{
//             swap(arr[mid],arr[high]);
//             high--;
//         }
//     }
// }
// int main(){
//     int arr[] = {2,0,2,1,1,0};
//     int sz =6;
//     sortColors(arr,sz);
//     for(int i=0;i<sz;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
// }

//MERGE SORTED ARRAYS O(m+n)
// void merge(vector<int>& A, int m, vector<int>& B, int n) {
//         int idx = m+n-1, i = m-1, j = n-1;
//         while(i >=0 && j>=0){
//             if(A[i] >= B[j]){
//                 A[idx] = A[i];
//                 idx--,i--;
//             } else {
//                 A[idx--] = B[j--];
//             }
//         }
//         while(j>=0){
//             A[idx--] = B[j--];
//         }
//     }
// int main(){
//     vector<int> A = {1,2,3,0,0,0}; 
//     int m =3;
//     vector<int> B = {2,5,6};    
//     int n =3;
//     merge(A,m,B,n); 
//     for(int val : A){
//         cout<<val<<" ";
//     }
//     cout<<endl;
// }

//NEXT PERMUTATION PROBLEM
// void nextPermutation(vector<int>& nums) {
//         int n = nums.size();
//         int pivot = -1;
//         // step 1                
//         for(int i=n-2;i>=0;i--){
//             if(nums[i]<nums[i+1]){   
//                 pivot = i;
//                 break;   
//             }
//         }        
//         // step 2    
//         if(pivot == -1){
//             reverse(nums.begin(),nums.end());
//             return;
//         }    
//         for(int i=n-1;i>pivot;i--){
//             if(nums[i]>nums[pivot]){
//                 swap(nums[i],nums[pivot]);
//                 break;   
//             }
//         }
//         // step 3
//         reverse(nums.begin()+pivot +1,nums.end()); 
//     }
// int main(){
//     vector<int> nums = {1,2,3,5,4};
//     nextPermutation(nums);
//     for(int val : nums){
//         cout<<val<<" ";
//     } cout<<endl;
// }

//CHAR ARRAYS
//int main(){
    //char str[] = {'a','b','c','\0'}; // null char at the end 
    //char str[] = "hello"; // null char at the end
    //cout<< strlen(str) << endl; // constant pointers
    // char str[12];
    // cout << "enter char array : ";
    //cin>>str; // stops at space
    // we use cin.getline(str, len,delimiter);
    //cin.getline(str,100,'$'); // stops at new line
    // cin.getline(str,12);
    // for(char ch : str){
    // cout<< ch <<" ";}
    // cout<<endl;
//     char str[] = "abhi ram";
//     int len =0;
//     for(int i=0;i<str[i]!= '\0';i++){
//         len++;
//     }
//     cout<<"length of string : "<<len<<endl;
//     return 0;
// }

//STRINGS
//  int main(){
//      string str = "apna college"; //dynamic => runtime resize     
//      string str2 = "egelloc anpa"; //dynamic => runtime resize     
//     // cout<<str<<endl;
//     // string str1 = "Joe";
//     // string str2 = "Scorpio";
//     // string str3 = str1 + " " + str2; //concatination
//     // cout<<str3<<endl;
//     // cout<<str1.length()<<endl;
//     // return 0;
//     reverse(str.begin(),str.end());
//     if(str == str2){
//         cout<< "palindrome"<<endl;
//     } 
//  }

//VALID PALINDROME

//REMOVE ALL OCCURENCES
// string removeOccurrences(string s, string part) {          
//         while(s.length() >0 && s.find(part) < s.length()){
//             s.erase(s.find(part),part.length());  
//         }
//         return s;
//     }
// int main(){
//     string s = "daabcbaabcbc", part = "abc";
//     cout<<removeOccurrences(s,part)<<endl;
//     return 0;
// }

//REVERSE WORDS IN A STRING
