#include <iostream>
using namespace std;

int N;
int i;
int j;

int main()
{
    cout << "Nama Programmer : 120103021 Rayhan Alsauqi" << endl;
    cout << "Versi Program : versi-1" << endl;
    cout << "tgl pembuatan : 19-oktober-2023" << endl;
    cout << "tgl revisi terakhir: -" << endl;

    cout << "================================================================" << endl;
    cout << "Program Tulis Bilangan versi-2" << endl;
    cout << "Ketikkan banyaknya pengulangan : ";
    cin >> N;

    for (i = 1; i <= N; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*"
                 << "";
        }
        cout << endl;
    }
}