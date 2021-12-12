/*
  -----------------------------------------------------------------------------------
  Fichier     : main.cpp
  Nom du labo : Labo07 Matrice
  Auteur(s)   : Théo Pilet & Anthony Christen (Groupe B)
  Date        : 07.12.2021
  But         : Librairie contenant des fonctions utilisables sur des vecteurs et
                des matrices.

  Remarque(s) : Les valeurs passées à setw() n'ont pas été stockées dans une
                constante comme nous avons l'habitude de le faire car chaque largeur
                doit être adaptée en fonction de la taille du tableau. De plus,
                afin de palier à ce problème de maintenabilité, il n'est non plus
                pas possible de faire un setw() avant l'affichage de la matrice car
                le rendu se retrouve pertrubé.

  Compilateur : Apple clang version 13.0.0 (clang-1300.0.29.3)
  -----------------------------------------------------------------------------------
*/

#include <iostream>           // Input/Output de base
#include <cstdlib>            // EXIT_SUCCESS
#include <iomanip>            // setw()
#include "vectorMatriceLib.h" // Operateur<< (vecteur), Operateur<< (matrice),
                              // estCarre(), estReguliere(), minCol(),
                              // sommeLigne(), sommeColonne(), vectSommeMin(),
                              // shuffleMatrice(), sortMatrice()

using namespace std;
using vecteur = vector<int>;
using matrice = vector<vecteur>;

int main() {
   //--------------------------------------------------------------------------------
   // Démonstartion du fonctionnement de la librairie
   //--------------------------------------------------------------------------------
      // 1) Operateur<< (vecteur)
      //-----------------------------------------------------------------------------
      vecteur v = {1, 2, 3, 4, 5};
      cout << left << setw(33) << "1) Operateur<< (vecteur)" << " => " << v << endl
           << endl;

      // 2) Operateur<< (matrice)
      //-----------------------------------------------------------------------------
      matrice m = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
      cout << left << setw(33) << "2) Operateur<< (matrice)" << " => " << m << endl
           << endl;


      // 3) estCarre()
      //-----------------------------------------------------------------------------
      cout << "3) estCarre() : " << endl;

      cout << m << " => " << boolalpha << estCarre(m) << endl;

      m = {{1, 2, 3}, {4, 6}, {7, 8, 9}};
      cout << m << right << setw(7) << " => " << boolalpha << estCarre(m) << endl
           << endl;

      // 4) estReguliere()
      //-----------------------------------------------------------------------------
      cout << "4) estReguliere() :" << endl;

      m = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
      cout << m << " => "<< boolalpha << estReguliere(m) << endl;

      m = {{1, 2, 3}, {4, 5}, {6, 7, 8}};
      cout << m << right << setw(7) << " => " << boolalpha << estReguliere(m)
           << endl;

      m = {};
      cout << m << right << setw(35) << " => "<< boolalpha << estReguliere(m)
           << endl << endl;

      // 5) minCol()
      //-----------------------------------------------------------------------------
      cout << "5) minCol() :" << endl;

      m = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
      cout << m << right << " => "<< boolalpha << minCol(m) << endl << endl;

      // 6) sommeLigne()
      //-----------------------------------------------------------------------------
      cout << "6) sommeLigne() :" << endl;

      cout << m << " => " << sommeLigne(m) << endl;

      m = {{6}, {5}, {1}};
      cout << m << right << setw(22) << " => " << sommeLigne(m) << endl;

      m = {};
      cout << m << right << setw(35) << " => " << sommeLigne(m) << endl << endl;

      // 7) sommeColonne()
      //-----------------------------------------------------------------------------
      cout << "7) sommeColonne() :" << endl;

      m = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
      cout << m << " => " << sommeColonne(m) << endl;

      m = {{1, 2, 3}, {4, 6}, {7}};
      cout << m << right << setw(13) << " => " << sommeColonne(m) << endl << endl;

      // 8) vectSommeMin()
      //-----------------------------------------------------------------------------
      cout << "8) vectSommeMin() :" << endl;

      m = {{1, 0, 1}, {3, 3, 0}, {2, 1, 4}};
      cout << m << " => " << vectSommeMin(m) << endl;

      m = {{2}, {1, 1}, {2, 1, 4}};
      cout  << m << right << setw(13) << " => " << vectSommeMin(m) << endl;

      m = {{0, 0}, {1}, {2, 1, 4}, {0}};
      cout << m << right << setw(8) <<  " => " << vectSommeMin(m) << endl << endl;

      // 9) shuffleMatrice()
      //-----------------------------------------------------------------------------
      cout << "9) shuffleMatrice() :" << endl;

      m = {{2}, {3, 3}, {2, 1, 4}};
      cout << m << right << setw(13) <<" => ";
      shuffleMatrice(m);
      cout << m << endl << endl;

      // 10) sortMatrice()
      //-----------------------------------------------------------------------------
      cout << "10) sortMatrice() :" << endl;

      m = {{4, 4, 6}, {1, 3}, {2}};
      cout << m << right << setw(13) << " => ";
      sortMatrice(m);
      cout << m << endl;

      m = {{3}, {1}, {2}};
      cout << m << right << setw(22) << " => ";
      sortMatrice(m);
      cout << m << endl;

      m = {{3, 2}, {7, 0, 4}, {1}};
      cout << m << right << setw(13) << " => ";
      sortMatrice(m);
      cout << m << endl;

   return EXIT_SUCCESS;
}
