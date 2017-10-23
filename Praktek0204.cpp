#include <iostream>
using namespace std;

int main(){
	double LRumah = 42;
	double lantaiparket = 193*1215;
	double L1Box = lantaiparket*8/1000000;
	cout << "luas rumah : "<<LRumah<< " m2"<<endl;
	cout << "luas 1 box parket : "<<L1Box<<"m2"<<endl;
	double jumlahBoxP,BiayaP,BiayaPG,totalB;
	jumlahBoxP = LRumah/L1Box;
	cout << " jumlah box parket : "<<jumlahBoxP<<endl;
	BiayaP = jumlahBoxP * 500;
	cout << "Biaya parket (Rp) : "<<BiayaP<<endl;
	BiayaPG = LRumah * 20;
	cout << "Biaya pasang(Rp) : "<<BiayaPG<<endl;
	totalB = BiayaP+BiayaPG;
	cout << "Total Biaya(Rp)  : "<<totalB<<endl; 
	
}

