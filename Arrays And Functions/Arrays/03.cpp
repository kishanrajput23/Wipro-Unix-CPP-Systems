#include <iostream>

using namespace std;

int main()
{
    int row,col, ele;
    cout<<"Enter the number of rows : ";
    cin>>row;
    
    cout<<"Enter the number of columns : ";
    cin>>col;
    
    int arr[row][col];
    
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
            cin>>ele;
            arr[i][j] = ele;
        }
    }
    
    cout<<"Entered matrix is listed below : "<<endl;
    
    for(int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<"Transpose of enterd matrix is : "<<endl;
    
    for (int i=0; i<col; i++) {
        for (int j=0; j<row; j++) {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}
