#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>
#include <math.h>

using namespace std;


float tambah(float x, float y){
    return (x + y);
}
float kurang(float x, float y){
    return (x - y);
}
float kali(float x, float y){
    return (x * y);
}
float bagi(float x, float y){
    return (x / y);
}
int mod(int x, int y){
    return (x % y);
}
int pangkat(int x, int y){
    return pow(x,y);
}



int main(){
    int x, y;
    string operasi;


    ulang : system("cls");
    cout<<"++++++KALKULATOR SEDERHANA++++++"<<endl;
    cout<<"++++++++++++++++++++++++++++++++"<<endl;

    cout<<"Masukan Nilai operasi"<<endl; 
    cin >> x >> operasi >> y;
    
    if(operasi == "+"){
        cout<<"--------------------------------"<<endl;
        cout<<x<<" + "<<y<<" = "<<tambah(x,y);
        }else if(operasi == "-"){
            cout<<"--------------------------------"<<endl;
            cout<<x<<" - "<<y<<" = "<<kurang(x,y);
            }else if(operasi == "x"){
                cout<<"--------------------------------"<<endl;
                cout<<x<<" x "<<y<<" = "<<kali(x,y);
                }else if(operasi == "/"){
                    cout<<"--------------------------------"<<endl;
                    cout<<x<<" / "<<y<<" = "<<bagi(x,y);
                    }else if(operasi == "%"){
                        cout<<"--------------------------------"<<endl;
                        cout<<x<<" % "<<y<<" = "<<mod(x,y);
                        }else if(operasi == "^"){
                            cout<<"--------------------------------"<<endl;                    
                            cout<<x<<"^"<<y<<" = "<<pangkat(x,y);
    }

    cout<<endl;
    cout<<"--------------------------------"<<endl;
    char lagi;
    cout<<"Kembali (y/t)? : ";
    cin>>lagi;
        if(lagi == 'y' || lagi == 'Y'){
            goto ulang;
        }
        cout<<"Program selesai...";           
    



    getch();
    return 0;   
}


