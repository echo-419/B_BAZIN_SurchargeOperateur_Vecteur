#include <iostream>
#include <stdlib.h>
#include"CVect2D.h"

int main() {

	CVect2D Vect_A(2,2) ;
	CVect2D Vect_B(5,5) ;
	CVect2D Vect_Res(0,0);
	float Scalaire = 10;

	Vect_Res = Vect_A + Vect_B;
	std::cout << "L'Addition des vecteurs a pour resultat : ";
	Vect_Res.affiche();

	Vect_Res = Vect_A - Vect_B;
	std::cout << "La Soustraction des vecteurs a pour resultat : ";
	Vect_Res.affiche();

	Vect_Res = Vect_A * Vect_B;
	std::cout << "Le Produit Scalaire des vecteurs a pour resultat : ";
	Vect_Res.affiche();

	Vect_Res = Vect_A * Scalaire;
	std::cout << "La Multiplication par un Scalaire des vecteurs a pour resultat : ";
	Vect_Res.affiche();
	
	Vect_Res.Norme(Vect_A,Vect_B,Vect_Res);
	std::cout << "La Norme des vecteurs a pour resultat : ";
	Vect_Res.afficheFlt();

	Vect_Res.ProdVect(Vect_A, Vect_B);
	std::cout << "Le produit Vectoriel des 2 vecteurs a pour resultat : " ;
	Vect_Res.affiche();


	system("pause");

	return 0;

}
