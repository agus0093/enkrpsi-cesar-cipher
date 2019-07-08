/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream> //memanggil library iostream

using namespace std; //

string ROT15(string ascii) //String pada dasarnya adalah kumpulan dari karakter-karakter (karakter bertipe data char)
{
    string kata = ascii;
    for (int i = 0; i<kata.length(); ++i) // length untuk menghitung banyaknya karakter dalam variBEL string
    {
        switch (kata[i]) //
        {
            case 'p':
                kata[i] = 'a';
                break;
            case 'q':
                kata[i] = 'b';
                break;          
            case 'r':
                kata[i] = 'c';
                break;
            case 's':
                kata[i] = 'd';
                break;
            case 't':
                kata[i] = 'e';
                break;
            case 'u':
                kata[i] = 'f';
                break;
            case 'v':
                kata[i] = 'g';
                break;
           case 'w':
                kata[i] = 'h';
                break;
            case 'x':
                kata[i] = 'i';
                break;
            case 'y':
                kata[i] = 'j';
                break;
            case 'z':
                kata[i] = 'k';
                break;
            case 'a':
               kata[i] = 'i';
                break;
            case 'b':
                kata[i] = 'm';
                break;
            case 'c':
                kata[i] = 'n';
                break;
            case 'd':
                kata[i] = 'o';
                break;
            case 'e':
                kata[i] = 'p';
                break;
            case 'f':
               kata[i] = 'q';
                break;
            case 'g':
                kata[i] = 'r';
                break;
            case 'h':
                kata[i] = 's';
                break;
            case 'i':
                kata[i] = 't';
                break;
              case 'j':
                kata[i] = 'u';
                break;
            case 'k':
               kata[i] = 'v';
                break;
            case 'l':
                kata[i] = 'w';
                break;
            case 'm':
                kata[i] = 'x';
                break;
            case 'n':
                kata[i] = 'y';
                break;
            case 'o':
                kata[i] = 'z';
                break;
        }
    }
    return kata;
}

int main()
{
    string i;
    cout << "masukan pesan yang ingin di dekripsi : ";
    getline(cin, i); //gateline untuk membaca sepasi
    cout << "hasil enkripsi : "<< ROT15(i) << endl;
    return 0;
}
