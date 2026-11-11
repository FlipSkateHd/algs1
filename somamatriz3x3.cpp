#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int m[3][4], soma = 0;
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 4; j++)
    {
        cin >> m[i][j];
    }
}

for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 4; j++)
    {
        soma += m[i][j];
    }
    cout << endl;
}
cout << soma;

    return 0;
}
