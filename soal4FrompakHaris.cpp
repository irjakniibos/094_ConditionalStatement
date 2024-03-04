#include <iostream>
using namespace std;

int main(){
    int nMtk,nFis;
    double nRerata;
    string cStatus ;
    
    cout << "Tampilkan nilai MTK = " ;
    cin >> nMtk ;

    cout << "Tampilkan nilai Fisika = " ;
    cin >> nFis ;

    nRerata = (nMtk + nFis) / 2;

    if(nRerata >= 60){
       cStatus = "Lulus";
    }

    else if (nMtk >= 70) {
        cStatus = "Lulus" ;
    }

    else {
        cStatus = "Tidak lulus";
    }


    cout << "status kelulusan anda adalah = " << cStatus ;

    return 0 ;
}