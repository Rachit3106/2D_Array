/*
Name:-Rachit Deshpande
PRN:-24070123035
Batch:-A2
*/
#include<iostream>
using namespace std;

int main() {
    int r1, c1;
    int sum=0;
    cout << "Enter number of rows of 1st matrix : ";
    cin >> r1;
    cout << "Enter number of columns of 1st matrix: ";
    cin >> c1;
    if(r1 == c1){
    int M1[r1][c1];
    for(int i = 0; i < r1; i++) 
    {
        for(int j = 0; j<c1; j++) 
        {
            cout << "Enter element at position (" << i+1 << ", " << j+1 << "): ";
            cin >> M1[i][j];
        }
    }
    
    cout << "Given matrix is:"<<endl;
     for(int i= 0;i<r1;i++){
       for(int j= 0;j<c1;j++) {
         cout << M1[i][j] << " ";
       }
        cout << endl;
    }
    
     for(int i= 0;i<r1;i++){
       for(int j= 0;j<c1;j++) {
          if(i == j){
              sum += M1[i][j];
          }
       }
    }
    cout << "The sum of diagonals is : " << sum;
    }
    else
    cout << "Input should be square matrix";
        return 0;
}
/*
Output:-
Enter number of rows of 1st matrix : 3
Enter number of columns of 1st matrix: 3
Enter element at position (1, 1): 1
Enter element at position (1, 2): 2
Enter element at position (1, 3): 3
Enter element at position (2, 1): 4
Enter element at position (2, 2): 5
Enter element at position (2, 3): 6
Enter element at position (3, 1): 7
Enter element at position (3, 2): 8
Enter element at position (3, 3): 9
Given matrix is:
1 2 3
4 5 6
7 8 9
The sum of diagonals is : 15
*/