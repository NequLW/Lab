#include<iostream>
#include"Dodawanie.cpp"
#include"mnozenie.cpp"
#include"odejmowanie.cpp"
#include<cstdlib>
using namespace std;

int Dodawanie();int mnozenie();int odejmowani();

int main{
int wynik,liczba;
cout<<"1<==Dodawanie"<<endl;
cout<<"2<==Odejmowanie"<<endl;
cout<<"3<==Mnożenie"<<endl;
cout<<"4<==Wyjście"<<endl;

do{
switch(wybor){
case 1: wynik=Dodawanie();cout<<wynik<<endl;system("pause");system("cls");break;
case 2: wynik=odejmowani();cout<<wynik<<endl;system("pause");system("cls");break;
case 3: wynik=mnozenie();cout<<wynik<<endl;system("pause");system("cls");break;
default:system("cls");break;
}

}while(wybor!=4);



return 0;
}
