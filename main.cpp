// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string Nama,Sekolah;
    string ulang;
    do {
        cout<<"===INPUT DATA SISWA===" <<endl;
        cout<<"Masukkan Nama   :";
        cin>>Nama;
        cout<<"Masukkan Sekolah  :";
        cin>>Sekolah;

        cout<<"Namamu adalah";
        cout<<Nama<<endl;
        cout<<"Sekolah di";
        cout<<Sekolah<<endl;
        cout<<"apakah anda mau mengulang, tekan y atau Y "<<endl;
        cin>>ulang;
    }
      while (ulang=="y"||ulang=="Y");
      system("pause");
    return 0;
}
