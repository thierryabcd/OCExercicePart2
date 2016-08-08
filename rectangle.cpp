
#include <iostream>
using namespace std;

class Rectangle {
	// METTRE UNE MAJUSCULE A LA CLASSE

public:
	// prototype de la méthode, METTRE CONST QUAND PAS DE MODIF
	double surface() const;				
	// accesseurs
	double hauteur() const;		// double getHauteur() const;
	double largeur() const;		// double getLargeur() const;
	// manipulateurs
	void hauteur ( double ) ; // void   setHauteur ( double h ) ;
	void largeur ( double );	// void   setLargeur ( double l );	

	// RECOUVREMENT ENTRE accesseurs ET manipulateurs EN METTANT 
	// VOLONTAIREMENT DES NOMS IDENTIQUES

private:
	double ahauteur;	
	double alargeur;

};

double Rectangle::surface () const		// definition de la methode
	{								// :: est l'opérateur de PORTEE
		return ( ahauteur * alargeur );
	}
double Rectangle::hauteur () const
	{
		return ( ahauteur ) ;
	}
double Rectangle::largeur () const
	{
		return ( alargeur ) ;
	}
void Rectangle::hauteur ( double h ) 
	{
		ahauteur = h ; 
	}
void Rectangle::largeur ( double l ) 
	{
		alargeur = l ; 
	}
	
	
int main()
{
	Rectangle rect1;
	double lu;
	
	cout << "Quelle hauteur ?"; cin >> lu ;
	rect1.hauteur( lu ) ;
	cout << "Quelle largeur ?"; cin >> lu ;
	rect1.largeur( lu ) ;
		
	cout << "Surface : " << rect1.surface() 
		 << endl;
	
	return 0 ; 
}
