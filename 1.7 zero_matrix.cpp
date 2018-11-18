// Matrix of size m,n. Make all rows and columns 0 if any of them contain 0 already
// time complexity - O(n^2)
// Input : 1 0 1 1
//         1 1 1 1
//         1 1 1 1
// Output : 0 0 0 0
//          1 0 1 1
//          1 0 1 1
#include <iostream>

using namespace std;

int main()
{
    int matrix[10][10],m,n;
    cout << "Enter the size of the matrix :\nm : ";
    cin >> m;
    cout << "n : ";
    cin >> n;
    cout << "Enter the values in the matrix \n";
    for(int i =0;i < m; i++)
        for(int j =0; j < n; j++)
            cin >> matrix[i][j];

    cout << "Original matrix :\n";
    for(int i =0; i < m; i++){
        for(int j = 0; j < n; j++)
            cout << matrix[i][j] <<" ";
        cout << endl;
    }

    bool row[m] = {false}, column[n] = {false};
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(matrix[i][j] == 0){
                row[i] = true;
                column[j] = true;
            }
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if((row[i] == true)|| (column[j] == true))
                matrix[i][j] = 0;
        }
    }

    cout << "Changed matrix is :\n";
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }

    return 0;
}
