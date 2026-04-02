#include <iostream>
using namespace std;

class Tirelire{
private:
    double montant;
    public:
    double getMontant( )const{
    return montant;
    }
    void afficher( ){
    if(montant<=0){
            cout<<"vous ete sans le sou."<< endl;
    }  else{
    cout<<"vous avez"<< montant<< "euro dans votre tirelire."<<endl;
    }
    }
    void secouer( ){
        if (montant>0){
            cout<< "bing bing"<<endl;
        }
        }
        void remplir(double m) {
        if (m>0){
            montant = montant + m;
        }
        }
        void vider ( ){
        montant=0;
        }
        void puiser(double t ){
        if(t>0){
            if (montant <t){ vider();}else{montant= montant-t;}
        }
        }
        bool montant_suffisant( double A, double&s){
        if ( A<0|| A== NULL){
            s=montant;
            return true;
        }
        if(montant>A){
            s=montant-A;
            return false;
        }
            }
            double calculersolde (double A) {
            if (A<0||A==NULL) {return montant; } else{return montant -A;}
            }
    };


/*******************************************
 * Ne rien modifier après cette ligne.
 *******************************************/

int main()
{
  Tirelire piggy;

  piggy.vider();
  piggy.secouer();
  piggy.afficher();

  piggy.puiser(20.0);
  piggy.secouer();
  piggy.afficher();

  piggy.remplir(550.0);
  piggy.secouer();
  piggy.afficher();

  piggy.puiser(10.0);
  piggy.puiser(5.0);
  piggy.afficher();

  cout << endl;

  // le budget de vos vacances de rève.
  double budget;

  cout << "Donnez le budget de vos vacances : ";
  cin >> budget;

  // ce qui resterait dans la tirelire après les
  // vacances
  double solde(0.0);

  if (piggy.montant_suffisant(budget, solde)) {
    cout << "Vous êtes assez riche pour partir en vacances !"
         << endl
         << "Il vous restera " << solde << " euros"
         << " à la rentrée." << endl << endl;
    piggy.puiser(budget);
  } else {
    cout << "Il vous manque " << solde << " euros"
         << " pour partir en vacances !" << endl << endl;
  }
  return 0;
}

