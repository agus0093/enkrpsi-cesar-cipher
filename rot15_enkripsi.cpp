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
            case 'a':
                kata[i] = 'p';
                break;
            case 'b':
                kata[i] = 'q';
                break;          
            case 'c':
                kata[i] = 'r';
                break;
            case 'd':
                kata[i] = 's';
                break;
            case 'e':
                kata[i] = 't';
                break;
            case 'f':
                kata[i] = 'u';
                break;
            case 'g':
                kata[i] = 'v';
                break;
           case 'h':
                kata[i] = 'w';
                break;
            case 'i':
                kata[i] = 'x';
                break;
            case 'j':
                kata[i] = 'y';
                break;
            case 'k':
                kata[i] = 'z';
                break;
            case 'l':
               kata[i] = 'a';
                break;
            case 'm':
                kata[i] = 'b';
                break;
            case 'n':
                kata[i] = 'c';
                break;
            case 'o':
                kata[i] = 'd';
                break;
            case 'p':
                kata[i] = 'e';
                break;
            case 'q':
               kata[i] = 'f';
                break;
            case 'r':
                kata[i] = 'g';
                break;
            case 's':
                kata[i] = 'h';
                break;
            case 't':
                kata[i] = 'i';
                break;
              case 'u':
                kata[i] = 'j';
                break;
            case 'v':
               kata[i] = 'k';
                break;
            case 'w':
                kata[i] = 'l';
                break;
            case 'x':
                kata[i] = 'm';
                break;
            case 'y':
                kata[i] = 'n';
                break;
            case 'z':
                kata[i] = 'o';
                break;
        }
    }
    return kata;
}

int main()
{
    string i;
    cout << "masukan pesan yang ingin di enkripsi : ";
    getline(cin, i); //gateline untuk membaca sepasi
    cout << "hasil enkripsi : "<< ROT15(i) << endl;
    return 0;
}
