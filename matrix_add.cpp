/*
Name:-Rachit Deshpande
PRN:-24070123035
Batch:-A2
*/
#include<iostream>
using namespace std;

int main() {
    int r1, c1,r2,c2;
    int sum=0;
    cout << "Enter number of rows of 1st matrix : ";
    cin >> r1;
    cout << "Enter number of columns of 1st matrix: ";
    cin >> c1;
    cout << "Enter number of rows of 2nd matrix : ";
    cin >> r2;
    cout << "Enter number of columns of 2nd matrix: ";
    cin >> c2;
    cout << endl;
    cout << "Enter input for 1st Matrix: ";
    cout << endl;

    if(r1 == r2 && c1 == c2){

       int arr1[r1][c1], arr2[r2][c2]; 

    for(int i = 0; i < r1; i++) 
    {
        for(int j = 0; j < c1; j++) 
        {
            cout << "Enter element at position (" << i+1 << ", " << j+1 << "): ";
            cin >> arr1[i][j];
        }
    }
    cout << endl;
    cout << "Matrix 1 is: " << endl;
    for(int i = 0; i < r1; i++) 
    {
        for(int j = 0; j < c1; j++) 
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl; 
    }
    cout << endl;
    cout << "Enter input for 2nd Matrix: ";
    cout << endl;
    for(int i = 0; i < r2; i++) 
    {
        for(int j = 0; j < c2; j++) 
        {
            cout << "Enter element at position (" << i+1 << ", " << j+1 << "): ";
            cin >> arr2[i][j];
        }
    }
    cout << endl;
    cout << "Matrix 2 is: " << endl;
    for(int i = 0; i < r2; i++) 
    {
        for(int j = 0; j < c2; j++) 
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl; 
    }

    cout << "The sum of both matrix is: : " << endl;
    for(int i = 0; i < r1; i++) 
    {
        for(int j = 0; j < c1; j++) 
        {
            cout << arr2[i][j] + arr1[i][j] << " ";
        }
        cout << endl; 
    }
}

else
cout<<"Enter equal number of rows and columns for both the matrix";
    return 0;
}
/*
 OUTPUT:-
1)
 Enter number of rows of 1st matrix : 2
 Enter number of columns of 1st matrix: 2
 Enter number of rows of 2nd matrix : 2
 Enter number of columns of 2nd matrix: 2

 Enter input for 1st Matrix:
 Enter element at position (1, 1): 1
 Enter element at position (1, 2): 2
 Enter element at position (2, 1): 3
 Enter element at position (2, 2): 4

 Matrix 1 is:
 1 2
 3 4

 Enter input for 2nd Matrix:
 Enter element at position (1, 1): 2
 Enter element at position (1, 2): 3
 Enter element at position (2, 1): 4
 Enter element at position (2, 2): 5

 Matrix 2 is:
 5 6
 7 8
 The sum matrix is: :
 6 8
 10 12

2)
 Enter number of rows of 1st matrix : 2
 Enter number of columns of 1st matrix: 2
 Enter number of rows of 2nd matrix : 3
 Enter number of columns of 2nd matrix: 3
 Enter equal number of rows and columns for both the matrix
*/