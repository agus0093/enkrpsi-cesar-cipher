#include <iostream> //memanggil library iostream

using namespace std; //

string ROT15(string huruf) //String pada dasarnya adalah kumpulan dari karakter-karakter (karakter bertipe data char)
{
    string kata = huruf;
    for (int i = 0; i<kata.length(); i++) // length untuk menghitung banyaknya karakter dalam variBEL string
    {
        switch (kata[i]) //Switch Case merupakan salah satu bentuk percabangan, yang digunakan untuk pilihan berjumlah banyak
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
            case '1':
                kata[i] = 'O';
                break;
            case '2':
                kata[i] = 'P';
                break;
            case '3':
                kata[i] = 'Q';
                break;
            case '4':
                kata[i] = 'R';
                break;
           case '5':
                kata[i] = 'S';
                break;
            case '6':
                kata[i] = 'T';
                break;
         case '7':
                kata[i] = 'U';
                break;
                            case '8':
                kata[i] = 'V';
                break;
                            case '9':
                kata[i] = 'W';
                break;
                            case '0':
                kata[i] = 'X';
                break;
        case 'A':
                kata[i] = 'P';
                break;
            case 'B':
                kata[i] = 'Q';
                break;          
            case 'C':
                kata[i] = 'R';
                break;
            case 'D':
                kata[i] = 'S';
                break;
            case 'E':
                kata[i] = 'T';
                break;
            case 'F':
                kata[i] = 'U';
                break;
            case 'G':
                kata[i] = 'V';
                break;
           case 'H':
                kata[i] = 'W';
                break;
            case 'I':
                kata[i] = 'X';
                break;
            case 'J':
                kata[i] = 'Y';
                break;
            case 'K':
                kata[i] = 'Z';
                break;
            case 'L':
               kata[i] = 'A';
                break;
            case 'M':
                kata[i] = 'B';
                break;
            case 'N':
                kata[i] = 'C';
                break;
            case 'O':
                kata[i] = 'D';
                break;
            case 'P':
                kata[i] = 'E';
                break;
            case 'Q':
               kata[i] = 'F';
                break;
            case 'R':
                kata[i] = 'G';
                break;
            case 'S':
                kata[i] = 'H';
                break;
            case 'T':
                kata[i] = 'I';
                break;
              case 'U':
                kata[i] = 'J';
                break;
            case 'V':
               kata[i] = 'K';
                break;
            case 'W':
                kata[i] = 'L';
                break;
            case 'X':
                kata[i] = 'M';
                break;
            case 'Y':
                kata[i] = 'N';
                break;
            case 'Z':
                kata[i] = 'O';
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