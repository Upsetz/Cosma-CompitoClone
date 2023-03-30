/*
Scrivere un programma che stampi "n" volte la stringa "Bada come la fuma"  con "n" dato in input dall'utente.

SAMUELE COSMA 30/03/2023
*/

# include <iostream>
using namespace std;
int main()
{
  int i=10 ,n;
  cout<<"Quante volte voi stampare la frase? ";
  cin>>n;
  for(int i = 0; i<n; i++){
    cout<<"bada come la fuma";
  }
  system("pause");
}
