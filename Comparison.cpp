/*
Name:-Rachit Deshpande
PRN:-24070123035
Batch:-A2
*/
#include<iostream>
using namespace std;

int main() {
    int r1, c1;
    cout << "Enter number of rows: ";
    cin >> r1;
    cout << "Enter number columns: ";
    cin >> c1;

    int matrix[r1][c1];
    cout << "Enter matrix elements:\n";
    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c1; j++){
            cout << "Enter element at position (" << i+1 << ", " << j+1 << "): ";
            cin >> matrix[i][j];
        }

    if(r1 >= 2) {
        cout << "Comparing elements of 1st row with 2nd row:\n";
        for(int j = 0; j < c1; j++) {
            if(matrix[0][j] == matrix[1][j])
                cout << "Element " << j+1 << ": Equal " << "\n";
            else
                cout << "Element " << j+1 << ": Not Equal " << "\n";
        }
    } else {
        cout << "Matrix must have at least 2 rows.\n";
    }

    return 0;
}
/*
Output:-
Enter number of rows: 2
Enter number columns: 3
Enter matrix elements:
Enter element at position (1, 1): 1
Enter element at position (1, 2): 4
Enter element at position (1, 3): 2
Enter element at position (2, 1): 3
Enter element at position (2, 2): 56
Enter element at position (2, 3): 4
Comparing elements of 1st row with 2nd row:
Element 1: Not Equal
Element 2: Not Equal
Element 3: Not Equal
*/