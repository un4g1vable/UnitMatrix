#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Введите количество строк и столбцов(до 40): ";
    cin >> n;
    int **A = new int*[n];
    for (int i = 0; i < n; ++i)
        A[i] = new int[n];

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j) {
            if (i != j)
                A[i][j] = 0;
            else
                A[i][j] = 1;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << A[i][j] << " ";
    }
    cout << endl;
  }
}