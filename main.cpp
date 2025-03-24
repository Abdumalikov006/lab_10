#include <iostream>
using namespace std;
//problem 2
// void average(int arr[], int size){
// float sum = 0;
// for (int i = 0; i < size; i++){
// sum += arr[i];
// }
// float average = sum / size;
// cout << average << endl;}
//problem 3
// void minimun(int arr[],int n) {
//     int min=arr[0];
//     for (int i = 0; i < n; i++) {
//         if (arr[i]<min) {
//             min=arr[i];
//         }
//     }
//     cout<<min;
// }
//problem 4
// int indexOfLargestElement(double array[], int size) {
//     if (size <= 0) {
//         return -1;
//     }
//     int max = 0;
//     for (int i = 1; i < size; i++) {
//         if (array[i] > array[max]) {
//             max = i;
//         }
//     }
//     return max;
//
// }
//problem 5
// bool strictlyEqual(const int list1[], const int list2[], int size) {
//     for (int i = 0; i < size; i++) {
//         if (list1[i] != list2[i]) {
//             return false;
//         }
//     }
//     return true;
//
// }
//problem 7
// void bubbleSort(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         for (int j = 0; j < size - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//
//             }
//
//         }
//
//     }
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
// }
//problem 8
// void rollDie(int numRolls) {
//     int counts[6] = {0};
//     srand(time(0));
//
//     for (int i = 0; i < numRolls; i++) {
//         int roll = rand() % 6 + 1;
//         counts[roll - 1]++;
//     }
//     cout << "Die Roll Results (10,000 rolls):" << endl;
//     for (int i = 0; i < 6; i++) {
//         cout << (i + 1) << ": " << counts[i] << " times" << endl;
//     }
// }
//problem 9
// void reverseArray(int arr[], int start, int end) {
//     while (start < end) {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//
//
//         start++;
//         end--;
//     }
// }
// void displayArray(int arr[], int size) {
// for (int i = 0; i < size; i++) {
// cout << arr[i] << " ";}
// }
//problem 10
int isSorted(int arr[], int size){
for(int i = 0; i < size; i++){
if(arr[i] > arr[i+1]){
return false;}
return true;}


}





int main() {
    //problem 1
    // int n;
    // int total = 0;
    // cout <<"Enter the size of an array: ";
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++) {
    //     cin >> arr[i];
    //     total += arr[i];
    // }
    // cout << "The sum of elements is: " << total;
    // return 0;
    //problem 2
    // int number;
    // cin >> number;
    // int arr[number];
    // for (int i = 0; i < number; i++){
    //     cin >> arr[i];}
    // average(arr, number);
    // return 0;

    //problem 3
    // int n;
    // cout<<"Enter number of elements: ";
    // cin>>n;
    // int arr[n];
    // cout<<"Enter elements: ";
    // for (int i = 0; i < n; i++) {
    //     cin>>arr[i];
    //
    // }
    // minimun(arr,n);
    //
    // return 0;
    //problem 4
    // int n;
    // cout << "Enter number of elements: ";
    // cin >> n;
    // double array[n];
    // for (int i = 0; i < n; i++) {
    //     cin >> array[i];
    //
    // }
    // int index = indexOfLargestElement(array, n);
    // cout << "Index of the largest element: " << index << endl;
    // return 0;
    //problem 5
    // int size;
    // cout << "Enter the size of the array: ";
    // cin >> size;
    // int list1[size];
    // int list2[size];
    // cout << "Enter the elements of the first array: ";
    // for (int i = 0; i < size; i++) {
    //     cin >> list1[i];
    // }
    // cout << "Enter the elements of the second array: ";
    // for (int i = 0; i < size; i++) {
    //     cin >> list2[i];
    // }
    // if (strictlyEqual(list1, list2, size)) {
    //     cout << "Two lists arestrictly identical." << endl;
    // } else {
    //     cout << "Two lists are notstrictly identical" << endl;
    // }
    // return 0;
    //problem 6
    // int freq[26] = {0};
    //
    // char ch;
    // cout << "Enter characters (enter '0' to stop):" << endl;
    //
    // while (true) {
    //     cin >> ch;
    //     if (ch == '0')
    //         break;
    //
    //     if (ch >= 'a' && ch <= 'z') {
    //         freq[ch - 'a']++;
    //     }
    // }
    // cout << "\nFrequency of lowercase letters:" << endl;
    // for (int i = 0; i < 26; i++) {
    //     if (freq[i] > 0) {
    //         cout << char('a' + i) << ": " << freq[i] << endl;
    //     }
    // }
    //
    // return 0;
    //problem 7
    // int n;
    // cout << "Enter the lenght of an array: ";
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++) {
    //     cin >> arr[i];
    // }
    // bubbleSort(arr, n);
    // return 0;

//problem 8
    // int numRolls = 10000;
    // rollDie(numRolls);
    // return 0;
//problem 9
// int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
// int size = sizeof(arr) / sizeof(arr[0]);
// reverseArray(arr, 0, size - 1);
// displayArray(arr, size);
// return 0;
//problem 10
int size;
cout<<"Enter the size of the array: ";
cin>>size;
int arr[size];
for(int i = 0; i < size; i++){
cin>>arr[i];}
if (isSorted(arr, size)) {
cout<<"YES";}
else {
cout<<"NO";}
return 0;







        }
