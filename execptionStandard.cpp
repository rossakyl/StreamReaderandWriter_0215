#include <iostream>
#include <exception>
//membuat obyek exeception yang akan digunakan
#include <array>
//membuat obyek array yang akan digunakan
using namespace std;

int main(){
    cout << "Awal Program" << endl; // penanda 1:....
    try
    {
        array<int, 3> data = {10,20,30};
        //pesan Array integer 3 elemen
        cout << data.at(4) << endl;
        //memanggil array elemen ke 5
    }

}