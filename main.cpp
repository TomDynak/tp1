#include <iostream>
#include "magasin.h"
#include "produit.h"
#include "client.h"

int main(){
	mag::Magasin Supermarche;
	mag::Produit test("PS5","Console de Jeux", 3, 500);
	mag::Produit test2("Nintendo Switch","Console de Jeux", 3, 400);
	mag::Client user1("tomdy","Tom","Dynak");
	test.modifQuantite(2);
	//std::cout << test <<std::endl;

	Supermarche.addProd(test);
	Supermarche.addProd(test2);

	//Supermarche.AfficherListProd();

	//Supermarche.searchProd("Nintendo Switch");

	//Supermarche.majProd("PS5");
	//Supermarche.majProd("bruh");
	//Supermarche.searchProd("PS5");
	user1.addToPanier(test);
	user1.addToPanier(test2);
	user1.getPanier();
	user1.videPanier();
	user1.getPanier();

	return 0;
}