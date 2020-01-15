#include <iostream>

using namespace std;

int main(void)
{
    int my_matrix[3][3];
    int contador = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            my_matrix[i][j] = contador++;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << my_matrix[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}