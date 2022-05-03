#include <iostream>
#include <string.h>
using namespace std;

class Data
{
private:
	int dia;
	int mes;
	int ano;

public:
	Data(int dia, int mes, int ano)
	{
		this->dia = dia;
		this->mes = mes;
		this->ano = ano;
	}

	void setDia(int dia)
	{
		this->dia = dia;
	}

	void setMes(int mes)
	{
		this->mes = mes;
	}

	void setAno(int ano)
	{
		this->ano = ano;
	}

	int getDia()
	{
		return this->dia;
	}

	int getMes()
	{
		return this->mes;
	}

	int getAno()
	{
		return this->ano;
	}

	string getData()
	{
		return to_string(this->dia) + "/" +
			   to_string(this->mes) + "/" +
			   to_string(this->ano);
	}
	
	
	
}

 class Contato
{
 private:
 string email;
 string nome;
 string telefone;
 Data dtnasc;
   
 public:
 	
void setEmail(string email)
{
	
	this->email = email;
} 	

void setNome(string nome)
{
	
	this->nome = nome;
} 	

void setTelefone(string telefone)
{
	
	this->telefone = telefone;
	
} 	

int getEmail(){
	return this->email;
}

int getNome(){
	return this->nome;
}

int getTelefone(){
	return this->telefone;
}

int idade(id) {
	id = 2022 - anonasc;
}
 	
};

int main() {
	
	Contato *contatos[5]
	
	for(int i=0; i<5; ++i)
	{
	    contatos[i] = new Contato;
	    cin >> contatos[i].setEmail();
	    cin >> contatos[i].setNome();
	    cin >> contatos[i].setTelefone();
	}
	
	for(int i=0; i<5; ++i)
	{
		cout << contatos[i].getEmail();
		cout << contatos[i].getNome();
		cout << contatos[i].getTelefone();
	}
}
