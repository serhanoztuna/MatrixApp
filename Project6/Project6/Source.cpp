#include <iostream>
#include <conio.h>
using namespace std;
int main() {
	int satir;
	int sutun;
	char ok;
	int durum = true;
	int degisken = 0;
	int matris[10][10];
	cout << "Matris boyutunu giriniz" << endl;
	cout << "Satir:";
	cin >> satir;
	cout << "Sutun:";
	cin >> sutun;			
		for (int i = 0; i < satir; i++) {
			if(degisken==i && degisken <= satir)
				cout << "--> ";
			else cout << "    ";
			for (int j = 0; j < sutun; j++) {
				matris[i][j] = rand() % 10;
				
				cout << matris[i][j];
			}
			cout << endl;
		}
		
		
		while (durum == true)
		{
			cout << "(a veya A tusu asagi goturur.)" << endl;
			cout << "(d veya D tusu yukari goturur.)" << endl;
			cout << "(c veya C tusu programdan cikarir.)" << endl;

		cout << "okun yonunu secin:";
		cin >> ok;
		if (ok == 'a' || ok == 'A')
			degisken++;

		if (ok == 'd' || ok == 'D')
			degisken--;
		if (ok == 'c' || ok == 'C')
			durum = false;
		system("cls");
		for (int i = 0; i < satir; i++) {
			if (degisken == i && degisken <= satir && degisken >= 0)
				cout << "--> ";
			else cout << "    ";
			for (int j = 0; j < sutun; j++) {				
				cout << matris[i][j];
			}
			cout << endl;
		}
		} 

	return 0;
}