#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a, b;
    cin >> a >> b;

    int ***pointer = new int **[n];

    for (int i = 0; i < n; i++)
    {
        pointer[i] = new int *[a];
        for (int j = 0; j < a; j++)
        {
            pointer[i][j] = new int[b];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < a; j++)
        {
            for (int k = 0; k < b; k++)
            {
                cin >> pointer[i][j][k];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < a; j++)
        {
            for (int k = 0; k < b; k++)
            {
                cout << pointer[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            delete[] pointer[i][j];
        }
        delete[] pointer[i];
    }
    delete[] pointer;
    return 0;
}