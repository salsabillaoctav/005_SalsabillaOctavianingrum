#include <iostream>
using namespace std;

// buat fungsi main
int main()
{
 	//inisialisasi variabel
 	int matriksA[50][50];
 	int matriksB[50][50];
 	int hasil [50][50];
 	int jumlah = 0;
 	int baris2;
 	int kolom2;
 	int konversi;
 	int skalar;
 	int baris;
 	int kolom;
 
  // menampilkan pesan konversi matriks
 	cout<<"\tKONVERSI MATRIKS"<<endl<<endl;
 	
	//Pilihan konversi matriks
	cout<<"Pilih jenis konversi"<<endl;
	cout<<"1. Penjumlahan matriks"<<endl;
	cout<<"2. Pengurangan matriks"<<endl;
	cout<<"3. Perkalian matriks dengan skalar"<<endl;
	cout<<"4. Perkalian matriks dengan matriks"<<endl;
	cout<<"5. Transpose matriks"<<endl;
	
  // pesan untuk melakukan inputan pilihan
	cout<<"Masukkan konversi yang dipilih : ";
	cin>>konversi;
 	cout<<endl;
 	
 	//input baris, kolom, dan skalar
 	cout<<"Masukkan jumlah baris matriks: ";
 	cin>>baris;
 	cout<<"Masukkan jumlah kolom matriks: ";
 	cin>>kolom;
 	cout<<endl;
 	
 	//looping untuk pembuatan matriks
 	cout<<"Masukkan Matriks"<<endl;
 	for (int i = 0; i<baris; i++)
	 {
 		for (int j = 0; j<kolom; j++)
		 {
 			cin>>matriksA[i][j];
		 }
	 }
	 cout<<endl;
	
	//Proses konsersi matriks
	switch(konversi) {
		case 1:
			//input matriks B
			cout<<"Masukkan matriks : "<<endl;
			//looping untuk matriks B
			for (int i=0; i<baris; i++)
			{
				for(int j=0; j<kolom; j++)
				{
					cin>>matriksB[i][j];
				}
			}
			cout<<endl;
			
			//Hasil penjumlahan matriks
			cout<<"Hasil penjumlahan matriks A dan B "<<endl;
      
			//looping untuk memampilkan hasil matriks
			for(int i=0; i<baris; i++)
			{
				for (int j=0; j<kolom; j++)
				{
					//soal penjumlahan kedua matriks
					hasil[i][j]=matriksA[i][j]+matriksB[i][j];
					
					//Menampilkan hasil penjumlahan matriks
					cout<<hasil[i][j]<<" ";
				}
				cout<<endl;
			}
			break;
		case 2:
			//input matriks B
			cout<<"Masukkan matriks : "<<endl;
			//looping untuk matriks B
			for (int i=0; i<baris; i++)
			{
				for(int j=0; j<kolom; j++)
				{
					cin>>matriksB[i][j];
				}
			}
			cout<<endl;
			
			//Hasil pengurangan matriks
			cout<<"Hasil pengurangan matriks A dan B "<<endl;
      
			//looping untuk menampilkan hasil matriks
			for(int i=0; i<baris; i++)
			{
				for (int j=0; j<kolom; j++)
				{
					//soal pengurangan kedua matriks
					hasil[i][j]=matriksA[i][j]-matriksB[i][j];
					
					//Menampilkan hasil pengurangan matriks
					cout<<hasil[i][j]<<" ";
				}
				cout<<endl;
			}
			break;
		case 3:
			//input bilangan skalar
			cout<<"Masukkan bilangan skalar : ";
			cin>>skalar;
			
			//looping untuk hasil perkalian matriks
			cout<<"Hasil perkalian skalar dan matriks"<<endl;
	 		for (int i=0; i<baris; i++)
	 		{
	 			for (int j=0; j<kolom; j++)
		 		{
		 			//Rumus perkalian matriks dengan skalar
	 				hasil[i][j]=skalar*matriksA[i][j];
	 				
	 				//Menampilakan hasil matriks
	 				cout<<hasil[i][j]<<" ";
			 	}
		 		cout<<endl;
	 		}
			break;	
		case 4:
			//input jumlah baris dan kolom matriks kedua
			cout<<"Masukkan jumlah baris matriks kedua : ";
			cin>>baris2;
			cout<<"Masukkan jumlah kolom matriks kedua : ";
			cin>>kolom2;
			
			cout<<endl;
			
			//proses konversi matriks
			if (kolom !=baris2)
			{
				//jika baris kedua dan kolom pertama matriks tidak sama maka matriks tidak dapat dikalikan
				cout<<"MATRIKS TIDAK DAPAT DIKALIKAN SATU SAMA LAIN"<<endl;
			}
			else
			{
				//input elemen matriks kedua
				cout<<"Masukkan matriks : "<<endl;
				//looping untuk matriks B
				for (int i=0; i<baris; i++)
				{
					for(int j=0; j<kolom; j++)
					{
						cin>>matriksB[i][j];
					}
				}
				cout<<endl;
			
				//looping untuk konversi perkalian matriks dengan matriks
				for(int i=0; i<baris; i++)
				{
					for(int j=0; j<kolom2; j++)
					{
						for(int k=0; k<baris2; k++)
						{
							//rumus perkalian matriks dengan matriks
							jumlah = jumlah + matriksA[i][k]*matriksB[k][j];
						}
						hasil[i][j] = jumlah;
						jumlah = 0;
					}
				}	
		
				//Looping untuk menampilkan hasil perkalian matriks
				cout<<"Hasil Perkalian matriks"<<endl;
				for(int i=0; i<baris; i++)
				{
					for(int j=0; j<kolom; j++)
					{
						//perintah untuk menampilkan hasil perkalian matriks
						cout<<hasil[i][j]<<" ";
					}
					cout<<endl;
				}
			}
			break;
		case 5:
			//looping hasil transpose matriks
			cout<<"Hasil transpose matriks"<<endl;
			for (int i=0; i<baris; i++)
			{
				for (int j=0; j<kolom; j++)
				{
					//Rumus transpose matriks
					hasil[i][j] = matrikstA[j][i];
					
					//Menampilkan hasil transpose matriks
					cout<<hasil[i][j]<<" ";
				}
				cout<<endl;
			}
			break;
		default:
		cout<<"\n";
		cout<<"\n\tPILIHAN KONVERSI SALAH";	
	}
	 cout<< "\ndevelop @mahendrarendi ";
	 return 0;
 }
