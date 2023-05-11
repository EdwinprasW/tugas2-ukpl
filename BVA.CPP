#include <iostream>
#include <string>
using namespace std;
// Edwinpras Wijaya - 123200074

//disini disediakan contoh program Boundary value analysis, dimana disini value yg di inputkan harus lebih dari sama dengan 8 dan kurang dari sama dengan 18


  string a;
  string bisa;

//disini sudah disediakan fungsi untuk mengetes apakah value yang di input valid (sesuai boundary) atau tidak valid (tidak sesuai boundary)
int hitungjumlah(string a){
	int jumlah;
	jumlah = a.length();
	
	if(jumlah >= 8 && jumlah <= 18){
		cout << "Password bisa digunakan :D"<<endl;
		return jumlah;
		}else if(jumlah < 8){
			cout << " Password tidak bisa digunakan, karakter kurang :{ " << endl;
			return 0;
			}else if(jumlah > 18){
			cout << " Password tidak bisa digunakan, karakter terlalu banyak :{ " << endl;
			return 0;
			}
return 0;
}

//lalu kita akan mengetes satu satu value yang diinputkan untuk mengecek validitas boundary value nya
int main(){
  cout << "Masukkan password yang diinginkan (minimal 8 huruf, maksimal 18 huruf) : ";
  //disini kita akan memasukan minimun value
  a = "edwinprs";
  hitungjumlah(a);
  //just above the minimum
  a = "edwinpras";
  hitungjumlah(a);
  //nominal value
  a = "edwinpraswijaya";
  hitungjumlah(a);
  //just below the maximum
  a = "edwinpraswijayaba";
  hitungjumlah(a);
  //dan maximum value
  a = "edwinpraswijayabad";
  hitungjumlah(a);
  
  //saat kita menginputkan value diatas maximum maka akan terjadi invalid
  a = "edwinpraswijayabaday";
  hitungjumlah(a);
  //begitu juga dengan value dibawah minimum
  a = "edwinpr";
  hitungjumlah(a);

//saat saya menjalankan program ini, value yang dimasukan berkoresponden dengan boundarynya, sehingga tidak menyebabkan error
    
}
