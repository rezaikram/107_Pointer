#include <iostream>
using namespace std;

class mahasiswa {
	public:
		int nim;
		void showNim() {
			cout << "No Induk =" << nim << endl;
			}
};
int main() {
	mahasiswa mhs{ 1 };		// Object mhs
	mhs.showNim();			// Member access Operator

	mahasiswa& refMhs = mhs;	// Pointer referece
	refMhs.nim = 2;			// Member Accsess Operator
	mhs.showNim();

	mahasiswa* pMhs = &mhs;		// pointer deference pMhs
	pMhs->nim = 3;		// Arrow Operator
	mhs.showNim();
	return 0;
}

