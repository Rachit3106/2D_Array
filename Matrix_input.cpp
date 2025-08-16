/*
Name:-Rachit Deshpande
PRN:-24070123035
Batch:-A2
*/
#include<iostream>
using namespace std;

int main() {
    int arr[3][3];  
    for(int i = 0; i < 3; i++) 
    {
        for(int j = 0; j < 3; j++) 
        {
            cout << "Enter element at position (" << i+1 << ", " << j+1 << "): ";
            cin >> arr[i][j];
        }
    }
    cout << "The matrix elements are: " << endl;
    for(int i = 0; i < 3; i++) 
    {
        for(int j = 0; j < 3; j++) 
        {
            cout << arr[i][j] << " ";
        }
        cout << endl; 
    }

    return 0;
}
/*
OUTPUT
Enter element at position (1, 1): 1
Enter element at position (1, 2): 2
Enter element at position (1, 3): 3
Enter element at position (2, 1): 4
Enter element at position (2, 2): 5
Enter element at position (2, 3): 6
Enter element at position (3, 1): 7
Enter element at position (3, 2): 8
Enter element at position (3, 3): 9
The matrix elements are: 
1 2 3 
4 5 6 
7 8 9
*/