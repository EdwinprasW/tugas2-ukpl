#include <iostream>
using namespace std;

// Edwinpras Wijaya - 123200074

//disini disediakan contoh program State Transition Testing, dimana mesin seharusnya melalui 4 state, yaitu istirahat, brew, tambah susu, dan jadi
 enum mesinkopi{
  istirahat,
  brew,
  tambahsusu,
  dahjadi
};

//disini disediakan fungsi switch case yang akan mengganti state dari mesin kopi saat mesin kopi selesai melakukan pekerjaannya saat itu
void statelanjut(mesinkopi &lagiApa) {
  switch (lagiApa) {
    case istirahat:
		cout<< " Merebus Kopi " << endl;
		lagiApa = brew;
		break;
	case brew:
		cout<< " Menambah susu " << endl;
		lagiApa = tambahsusu;
		break;
	case tambahsusu:
		cout<< " Pesanan sudah jadi! " << endl;
		lagiApa = dahjadi;
		break;
	case dahjadi:
		cout<< " Mesin istirahat dulu yahh :D " << endl;
		lagiApa = istirahat;
		break;
	}
}

//untuk menguji apakah state bisa berpindah dengan aman, maka kita akan menguji dengan siklus state alami terlebih dahulu
int main(){
	mesinkopi lagiApa = istirahat;
	
	statelanjut(lagiApa);
	statelanjut(lagiApa);
	statelanjut(lagiApa);
	statelanjut(lagiApa);
	
	//setelah itu, jika kita paksakan state untuk berada ditengah siklus, apakah state tersebut bisa melanjutkan siklus seperti seharusnya
	
	lagiApa = tambahsusu;
	
	statelanjut(lagiApa);
	
	lagiApa = brew;
	
	statelanjut(lagiApa);
	
	//dari testing yang saya lakukan saat menjalankan, siklus berjalan dengan normal
	
	return 0;
	
	
	}
