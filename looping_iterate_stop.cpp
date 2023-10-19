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
    cout << "Ketikkan banyaknya pengulangan : ";
    cin >> N;

    i = 1;
    do
    {
        cout << i << endl;
        if (i > N)
            break;
        i++;
    } while (i <= N);

    return 0;
}