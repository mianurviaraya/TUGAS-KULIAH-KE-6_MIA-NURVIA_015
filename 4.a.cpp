#include <iostream>
#include <conio.h>


using namespace std;

int main (){

	int data [1000];
	int cari;
	int flag = 0;
	cout<<endl<<endl;
	cout<< "masukkan data yang ingin dicari = ";
	cin >>cari;
	for (int i=0; i<1000; i++)
	{
		if (data [i] == cari) flag=1;
		break;
	}
	if (flag ==1) cout<<"data ada!\n";
		else cout<<"data tidak ada!\n";
}
