#pragma once
#include <iostream>

using namespace std;

class CVect2D
{
public:

	CVect2D();
	CVect2D(float x,float y);


	friend CVect2D operator+ (CVect2D, CVect2D);
	friend CVect2D operator- (CVect2D, CVect2D);
	friend CVect2D operator* (CVect2D, CVect2D);
	friend CVect2D operator* (CVect2D, float);

	void Norme(CVect2D, CVect2D, CVect2D);
	void ProdVect(CVect2D, CVect2D);

	//affiche les coordonnées du vecteur
	void affiche() {
		cout << X << " " << Y << "\n";
	};

	//affiche une norme
	void afficheFlt() {
		cout << Nrm << "\n";
	};




	float X, Y, Nrm;

};
