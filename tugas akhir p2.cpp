#include <iostream>
#include <cmath>

using namespace std;
int main(){
	float r, hasil_1, hasil_2;
	
	cout << "Masukan Jari-jari : " ;
	cin >> r;
	
	hasil_1= (4.0 / 3.0) * 3.14 * r * r * r;
	hasil_2= 4 * 3.14 * r * r; 
	
	cout << " Volume permukaan Bola adalah : " << hasil_1 << endl;
	cout << " luas Bola adalah : " << hasil_2 << endl;
	
	return 0;
}
