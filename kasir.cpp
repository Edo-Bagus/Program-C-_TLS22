#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    cout<<"--Program Kasir--\n\n";
    int pembeli;
    while(1){
        cout << "Apakah ada pembeli? Masukan 1 jika ya, 0 jika tidak: ";
        cin >> pembeli;
        if (pembeli == 1){
            // inisialisasi variable terlebih dahulu.
            int jumlah_beli, bayar, jumlah[100], harga[100], total[50], kembalian, total_semua = 0;
            string nama_barang[100];

            cout<<"Masukan Jumlah Beli :";
            cin>> jumlah_beli; //pembeli dan jumlah barang yang di beli.

            for (int i=0;i<jumlah_beli;i++){
                cout<<"\nMasukan Barang ke- "<<i+1<<"\n\n";
                cout<<"Nama Barang : ";
                cin>>nama_barang[i]; //input nama barang yang dibeli

                cout<<"Jumlah Barang : ";
                cin>>jumlah[i]; //input jumlah barang yang di beli

                cout<<"Harga Barang : ";
                cin>>harga[i]; //input harga perbarang

                total[i] = jumlah[i]*harga[i]; //jumlah harga total barang
                total_semua += total[i]; // menjumlahkan seluruh total barang

            }
            cout<<"\nCatatan Belanja";

            cout<<"\nNo" << setw(8) << "Barang" << setw(10) << "Jumlah" << setw(12) << "Harga" << setw(12) << "Subtotal\n";
            for (int i=0; i<jumlah_beli; i++ ){
                cout<<i+1<<setw(8)<<nama_barang[i]<<setw(10)<<jumlah[i]<<setw(12)<<harga[i]<<setw(12)<<total[i]<<endl;
            }
            cout << endl;
            cout << "Total semua: " <<  total_semua << "\n\n";
    
            while(1){
                cout << "Uang yang dibayarkan: ";
                cin >> bayar;
                if (bayar >= total_semua){
                    cout << "Kembalian: " << bayar - total_semua << "\n\n";
                    break;
                } else {
                    cout << "Uang tidak mencukupi, Mohon bayar dengan benar" << endl;
                }
            }
        } else if (pembeli == 0){
            break;
        } else {
            cout << "Masukan input yang benar." << endl;
        }
    }
    return 0;
}
