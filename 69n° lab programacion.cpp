#include <bits/stdc++.h>
using  namespace std;
string AgregarComa(string f);

int main (){
	string frase;
	cout<<"ingrese una cadena: ";
	getline(cin,frase);
	
	cout<<AgregarComa( frase);
return 0;
}

string AgregarComa(string f) {
int cont=0;
string n;
for(int i=0; i<f.size();i++){
if (cont==1){
n+= ',';
cont=0;	
}
if (cont!=1) {
n+=f[i];

cont ++;	
}

	
}
	
	
return n;	
}

