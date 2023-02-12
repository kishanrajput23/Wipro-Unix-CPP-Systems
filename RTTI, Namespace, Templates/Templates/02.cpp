//Templates....2

#include<iostream>
using namespace std;

void display(int *A, int n) {
   for(int i = 0; i<n; i++)
      cout << A[i] << " ";
   cout << endl;
}
void Sort(int *A, int n) {
   int i, j, min;
   for(i = 0; i<n-1; i++) {
      min = i;   //get index of minimum data
      for(j = i+1; j<n; j++)
         if(A[j] < A[min])
            min = j;
         //placing in correct position
         swap(A[i], A[min]);
   }
}
int main() {
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int A[n];           //create an array with given number of elements
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> A[i];
   }
   cout << "Array before Sorting: ";
   display(A, n);
   Sort(A, n);
   cout << "Array after Sorting: ";
   display(A, n);
}
//output:
//Enter the number of elements: 5
//Enter elements:
//3 4 8 5 2 
//Array before Sorting:3 4 8 5 2
//Array after Sorting: 2 3 4 5 8




