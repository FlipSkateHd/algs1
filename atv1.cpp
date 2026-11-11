#include <iostream>
using namespace std;


const int tamanho = 30;

int main(int argc, char const *argv[])
{
    int v[tamanho], cont2 = 0, cont1 = 0;

    for (int i = 0; i < tamanho; i++)
    {
        cin >> v[i];
    }
    
    for (int i = 0; i < tamanho; i++)
    {
        if (v[i] % 2 == 0)
        {
            cont1++;

        } else if (v[i] % 3 == 0)
        {
            cont2++;
        }
        
    }
    cout<<"multiplos de 2 " << cont1 << endl << " multiplos de 3: " << cont2 << endl;
 

}
