#include <iostream>
using namespace std;

int main(){
	int x,y;
	cout<<"Birinci Sayıyı Giriniz: ";
	cin>>x;
	cout<<"İkinci Sayıyı Giriniz: ";
	cin>>y;
	
	int toplam = x+y;;
	int carpim = x*y;
	int fark = x- y;
	double bolum = double(x)/double(y);
	
	cout<<"Toplam: "<<toplam<<endl;
	cout<<"Fark: "<<fark<<endl;
	cout<<"Carpim: "<<carpim<<endl;
	cout<<"Bolum: "<<bolum<<endl;
}
