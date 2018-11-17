#include <iostream>

using namespace std;

int main()
{
    int n, matrix[10][10],temp;
    cout << "Enter the size of the matrix : ";
    cin >> n;
    cout << "Enter the values in the matrix : \n";
    for( int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> matrix[i][j];
    cout << "Original Matrix : \n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }

    for(int i = 0; i < n/2; i++){
        for(int j = i; j < n-1-i; j++){
            temp = matrix[i][j];
            matrix[i][j] = matrix[j][n-1-i];
            matrix[j][n-1-i] = matrix[n-1-i][n-1-j];
            matrix[n-1-i][n-1-j] = matrix[n-1-j][i];
            matrix[n-1-j][i] = temp;
        }
    }

    cout << "New matrix : \n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cout << matrix[i][j] << " ";
        cout<<endl;
    }
    return 0;
}
