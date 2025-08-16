/*
Namw:- Rachit Deshpande
PRN:- 24070123035
Batch:- A2
*/
#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;

    cout << "Enter the number of rows of the first matrix: ";
    cin >> r1;
    cout << "Enter the number of columns of the first matrix: ";
    cin >> c1;

    cout << "Enter the number of rows of the second matrix: ";
    cin >> r2;
    cout << "Enter the number of columns of the second matrix: ";
    cin >> c2;

    if (c1 != r2) {
        cout << "Cannot do matrix multiplication as c1!=r2" << endl;
        return 1;
    }

    int M1[r1][c1], M2[r2][c2], Mult[r1][c2];
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
            Mult[i][j] = 0;

    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            cout << "M1[" << i << "][" << j << "]: ";
            cin >> M1[i][j];
        }
    }

    cout << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < r2; ++i) {
        for (int j = 0; j < c2; ++j) {
            cout << "M2[" << i << "][" << j << "]: ";
            cin >> M2[i][j];
        }
    }

    
    cout << "Matrix M1:" << endl;
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            cout << M1[i][j] << " ";
        }
        cout << endl;
    }

    
    cout << "Matrix M2:" << endl;
    for (int i = 0; i < r2; ++i) {
        for (int j = 0; j < c2; ++j) {
            cout << M2[i][j] << " ";
        }
        cout << endl;
    }

    
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            for (int k = 0; k < c1; ++k) {
                Mult[i][j] += M1[i][k] * M2[k][j];
            }
        }
    }

    cout << "The resultant matrix is:" << endl;
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            cout << Mult[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
/*
Output:-
Enter the number of rows of the first matrix: 2
Enter the number of columns of the first matrix: 2
Enter the number of rows of the second matrix: 2
Enter the number of columns of the second matrix: 2
Enter elements of the first matrix:
M1[0][0]: 1
M1[0][1]: 2
M1[1][0]: 3
M1[1][1]: 4
Enter elements of the second matrix:
M2[0][0]: 4
M2[0][1]: 3
M2[1][0]: 2
M2[1][1]: 1
Matrix M1:
1 2
3 4
Matrix M2:
4 3
2 1
The resultant matrix is:
8 5
20 13
*/