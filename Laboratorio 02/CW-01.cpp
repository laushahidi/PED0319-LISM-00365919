#include <iostream>

using namespace std;

int main(void)
{
    float my_arr[20];

    for (int i = 0; i < 19; i++)
    {
        cout << "Ingrese la nota: ";
        cin >> my_arr[i];
    }
    for (int i = 0; i < 19; i++)
    {
        cout << "Nota " << (i + 1) << " :\t" << my_arr[i] << endl;
    }
    return 0;
}