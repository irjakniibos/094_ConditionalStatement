#include <iostream>
using namespace std;

int main(){

int nBilA,nBilB;
string status;

srand(time(0));

nBilA = rand()% 10;
nBilB = rand()% 10;

cout << "Nilai A adalah = " << nBilA << endl ;
cout << "Nilai B adalah = " << nBilB << endl ;

if(nBilA == nBilB){
    status = "Nilai A dan B sama besar" ;
}

else if (nBilA > nBilB){
    status = "Nilai A lebih besar dari Nilai B";
}

else {
    status = "Nilai A lebih kecil dari Nilai B";
}

cout << "Statusnya adalah = " << status << endl ;

return 0;
}