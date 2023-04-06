#include <iostream>
using namespace std;
// 1. Algortima dibuat untuk menyelesaikan masalah karena komputer hanya bisa komputasi tidak bisa menggunakan naluri, seperti jika kita mengurutkan dari terkecil 3, 2, 1, sebagai manusia dapat diselesaikan dengan mudah, namun tentu komputer tidak bisa menggunakan cara manusiawi melaikan perlu algoritma untuk menyelesaikannya 
// 2. Efisiensi dalam suatu progra dapat diketahui berapa banyak sumber daya yang digunakan, Waktu (Waktu yang diperlukan CPU untuk menjalankan program), Ruang(Besarnya penggunaan ruang memory ketika menjalankan algoritma)
// 3. Kecepatan mesin, Compiler, OS, Bahasa pemograman, dan besarnya input
// 4. Bubble sort, ketika data tersebut kecil bubblesort paling efisien karena ia mem
// 5. Quadratic (Bubble sort, Insertion sort, Selection sort, Shellsort), Loglinear(Quicksort, Mergesort)
//

int ling[57]; //array of integers to hold values
int n;
void input()
{
    while (true)
    {
        cout << "Masukan panjang element array: ";
        cin >> n;

        if (n <= 57)
            break;
        else
            cout << "\nMaksimum panjang array adalah 20" << endl;
    }
    cout << "\n--------------------------" << endl;
    cout << "\nEnter Array Element" << endl;
    cout << "\n--------------------------" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << ">";
        cin >> ling[i];
    }
}

void swap(int x, int y)
{
    int temp;
    temp = ling[x];
    ling[x] = ling[y];
    ling[y] = temp;
}

void Selectionsort() //{10,12,3,1,6,7}
{
    for (int lr = 0; lr < n - 1; lr++)
    {
            int minv = lr;
            for (int i = (lr + 1); i < n; i++)
            {
                if (ling[i] < ling[minv])
                {
                    minv = i;
                }
            }
            swap(minv, lr);
    }
}

void display()
{
    cout << endl;
    cout << "-----------------------" << endl;
    cout << "Sorted Array" << endl;
    cout << "-----------------------" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << ling[i] << " ";
    }
}

int main()
{
    input();
    Selectionsort();
    display();
}
