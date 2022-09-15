#include <iostream>
using namespace std;
int main (){
string nama,npm,kelas,jurusan;
cout<<"nama : ";
getline(cin,nama);
cout<<"npm : ";
getline(cin,npm);
cout<<"kelas : ";
getline(cin,kelas);
cout<<"jurusan : ";
getline(cin,jurusan);

cout<<"\nnama kamu adalah \t :"<<nama;
cout<<"\nnpm kamu adalah \t :"<<npm;
cout<<"\nkelas kamu adalah \t :"<<kelas;
cout<<"\njurusan kamu adalah \t :"<<jurusan;


return 0 ;
}