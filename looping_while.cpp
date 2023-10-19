#include <iostream>
using namespace std;

int N;
int i;

int main()
{
    cout << "Nama Programmer : 120103021 Rayhan Alsauqi" << endl;
    cout << "Versi Program : versi-1" << endl;
    cout << "tgl pembuatan : 19-oktober-2023" << endl;
    cout << "tgl revisi terakhir: -" << endl;

    cout << "Program Tulis Bilangan versi-1" << endl;
    cout << "================================================================" << endl;
    cout << "Program Tulis Bilangan versi-1" << endl;
    cout << "ketikan banyaknya perulangan: ";
    cin >> N;

    i = 1;
    while (i <= N)
    {
        cout << i << endl;
        i++;
    }

    return 0;
}