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
    int M1[r1][c1],tran[c1][r1];
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
    cout << endl;
 cout << "The tranpose of matrix is: "<<endl;
for(int i = 0;i<c1;i++){
    for(int j = 0;j<r1;j++){
        tran[i][j] = M1[j][i];
        cout << tran[i][j] << " ";
    }
    cout << endl;
}
    return 0;
}
/*
Output:-
Enter number of rows of 1st matrix : 2
Enter number of columns of 1st matrix: 3
Enter element at position (1, 1): 1
Enter element at position (1, 2): 2
Enter element at position (1, 3): 3
Enter element at position (2, 1): 2
Enter element at position (2, 2): 1
Enter element at position (2, 3): 3
Given matrix is:
1 2 3
2 1 3

The tranpose of matrix is:
1 2
2 1
3 3
*/