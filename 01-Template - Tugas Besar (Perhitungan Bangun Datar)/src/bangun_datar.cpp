#include <iostream> //file header untuk memanggil fungsi input/output
#include <conio.h> //file header untuk memanggil fungsi getch()

using namespace std;
    int pil, counter = 0;
    char lagi;
    float a, b, c, d, d1, d2;
    float p, l, s, r, t;


int garis1(){
    cout<<"--------------------------------------------"<<endl;
}
int garis2(){
    cout<<"============================================"<<endl;
}
float persegi(float s){ //fungsi untuk operasi bidang persegi
    cout<<" Luas Persegi\t\t: "<<(s * s);
    cout<<endl;
    cout<<" Keliling Persegi\t: "<<(s + s + s + s)<<endl;
    garis2();
}
float persegi_panjang(float p, float l){ //fungsi untuk operasi bidang persegi panjang
    cout<<" Luas Persegi Panjang\t\t: "<<(p * l);
    cout<<endl;
    cout<<" Keliling Persegi Panjang\t: "<<(2*p + 2*l)<<endl;
    garis2();
}
float lingkaran(float r){ //fungsi untuk operasi bidang lingkaran
    float phi = 3.14;
    cout<<" Luas Lingkaran\t\t\t: "<<(phi * r * r);
    cout<<endl;
    cout<<" Keliling Lingkaran\t\t: "<<(2*phi*r);
    cout<<endl;
    cout<<" Diameter Lingkaran\t\t: "<<(2 * r)<<endl;
    garis2();
}
float trapesium(float a, float b, float c, float d, float t){ //fungsi untuk operasi bidang trapesium
    cout<<" Luas Trapesium\t\t: "<<((a+b) * t/2);
    cout<<endl;
    cout<<" Keliling Trapesium\t: "<<(a + b + c + d)<<endl;
    garis2();
}
float belah_ketupat(float d1, float d2, float s){ //fungsi untuk operasi bidang belah ketupat
    cout<<" Luas Belah Ketupat\t\t: "<<(d1 * d2 / 2);
    cout<<endl;
    cout<<" keliling Belah Ketupat\t\t: "<<(4 * s)<<endl;
    garis2();
}





int main(){
   
    ulang :
    counter++;
    system("cls"); //menyuruh/memanggil fungsi dari system untuk membersihkan layar tanpa menutup program

    garis2();
    cout<<"   Program Perhitungan Luas dan Keliling"<<endl;
    cout<<"          Bangun Datar 2 Dimensi"<<endl;
    garis2();
    cout<<" 1. Persegi"<<endl;
    cout<<" 2. Persegi Panjang"<<endl;
    cout<<" 3. Lingkaran"<<endl;
    cout<<" 4. Trapesium"<<endl;
    cout<<" 5. Belah Ketupat"<<endl;
    garis2();
    cout<<" Masukan Pilihan (1-5)\t: ";
    cin>>pil;

    //sebuah operasi penyeleksian kondisi
    switch (pil){
        case 1: 
        system("cls");
        garis2();
        cout<<"++++++++++++++++++ PERSEGI +++++++++++++++++"<<endl;
        garis2();
        cout<<" Luas     = s x s"<<endl;
        cout<<" Keliling = 4 x s"<<endl;
        cout<<" Masukan Panjang Sisi\t: ";
        cin>>s;
        cout<<endl;
        cout<<endl;
        garis1();
        persegi(s); //memanggil fungsi operasi bidang persegi

    break; 

        case 2: 
        system("cls");
        garis2();
        cout<<"+++++++++++++ PERSEGI PANJANG ++++++++++++++"<<endl;
        garis2();
        cout<<" Luas     = p x l"<<endl;
        cout<<" Keliling = 2p + 2l"<<endl;
        cout<<" Masukan Panjang\t: ";
        cin>>p;
        cout<<" Masukan lebar\t\t: ";
        cin>>l;
        cout<<endl;
        cout<<endl;
        garis1();
        persegi_panjang(p,l); //memanggil fungsi operasi bidang persegi panjang
        
    break;
        case 3: 
        system("cls");
        garis2();
        cout<<"+++++++++++++++++ LINGKARAN ++++++++++++++++"<<endl;
        garis2();
        cout<<" Luas     = phi x r x r"<<endl;
        cout<<" Keliling = 2 x phi x r"<<endl;
        cout<<" Masukan Jari-jari Lingkaran\t: ";
        cin>>r;
        cout<<endl;
        cout<<endl;
        garis1();
        lingkaran(r); //memanggil fungsi operasi bidang lingkaran
        
    break;
        case 4: 
        system("cls");
        garis2();
        cout<<"+++++++++++++++++ TRAPESIUM ++++++++++++++++"<<endl;
        garis2();
        cout<<" Luas     = (a+b) * t/2"<<endl;
        cout<<" Keliling = a + b + c + d"<<endl;
        cout<<" Masukan Panjang alas\t\t: ";
        cin>>a;
        cout<<" Masukan sisi sejajar alas\t: ";
        cin>>b;
        cout<<" Masukan Panjang Tinggi\t\t: ";
        cin>>t;
        cout<<" Masukan Panjang sisi c\t\t: ";
        cin>>c;
        cout<<" Masukan Panjang sisi d\t\t: ";
        cin>>d;
        cout<<endl<<endl;
        garis1();
        trapesium(a,b,c,d,t); //memanggil fungsi operasi bidang trapesium
        
    break;    
        case 5:
        system("cls");
        garis2();
        cout<<"++++++++++++++ BELAH KETUPAT +++++++++++++++"<<endl;
        garis2();
        cout<<" Luas     = 1/2 (d1 x d2)"<<endl;
        cout<<" Keliling = 4 x s"<<endl;
        cout<<" Masukan Panjang Diagonal 1\t: ";
        cin>>d1;
        cout<<" Masukan Panjang Diagonal 2\t: ";
        cin>>d2;
        cout<<" Masukan Panjang Sisi\t\t: ";
        cin>>s;
        cout<<endl<<endl;
        garis1();
        belah_ketupat(d1,d2,s); //memanggil fungsi operasi bidang belah ketupat
        
    break;
    
    default:
    cout<<" MASUKAN ANDA SALAH !!!"<<endl;
    garis1();
    break;
    }
    cout<<" Apakah anda ingin mengulang(y/t)? ";
        cin>>lagi;
        if (lagi == 'y' || lagi == 'Y'){
            goto ulang;
        }else{
            cout<<" Perhitungan Operasi Selesai"<<endl;
            cout<<" Anda Mengulang Sebanyak "<<counter<<" Kali"<<endl;
        }
    
    
    


  getch(); // berguna untuk menahan tampilan program agar tidak langsung keluar
    return 0;
}
