#include <iostream>
using namespace std;

float hitungRerata(int x, int y){
    return (x+y)/2;
}
 
string statusKelulusan(float a){
    if (a >= 75)
    return "Lulus";
    else
    return "Gagal";
}

int main(){
    int nilai1, nilai2;
    float rerata;
    string status;

    cout << "Masukan nilai pertama: ";
    cin >> nilai1;
    cout << "Masukan nilai kedua: ";
    cin >> nilai2;
    cout << "Status Kelulusan: " << statusKelulusan(hitungRerata(nilai1, nilai2));

}
