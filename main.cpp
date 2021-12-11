/*
  -----------------------------------------------------------------------------------
  Fichier     : main.cpp
  Nom du labo : Labo07 Matrice
  Auteur(s)   : Théo Pilet & Anthony Christen (Groupe B)
  Date        : 07.12.2021
  But         : le but du programme et non le but du laboratoire !!

  Remarque(s) : à compléter

  Compilateur : Apple clang version 13.0.0 (clang-1300.0.29.3)
  -----------------------------------------------------------------------------------
*/

#include <iostream>           // Input/Output de base.
#include <cstdlib>            // EXIT_SUCCESS;
#include "vectorMatriceLib.h"

using namespace std;
using vecteur = vector<int>;
using matrice = vector<vecteur>;

int main() {
   //--------------------------------------------------------------------------------
   // Constantes
   //--------------------------------------------------------------------------------

   //--------------------------------------------------------------------------------
   // Démonstartion du fonctionnement de la librairie
   //--------------------------------------------------------------------------------
      // 1) Operateur<< (vecteur)
      //-----------------------------------------------------------------------------
      vecteur v = {1, 2, 3, 4, 5};
      cout << "1) Operateur<< (vecteur) : " << v << endl << endl;

      // 2) Operateur<< (matrice)
      //-----------------------------------------------------------------------------
      matrice m = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
      cout << "2) Operateur<< (matrice) : " << m << endl << endl;

      // 4) estReguliere
      //-----------------------------------------------------------------------------
      cout << "4) estReguliere() :" << endl;

      m = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};
      cout << "   " << m << " : "<< boolalpha << estReguliere(m) << endl;

      m = {{1, 2, 3}, {1, 2}, {1, 2}};
      cout << "   " << m << " : "<< boolalpha << estReguliere(m) << endl;

      m = {};
      cout << "   " << m << " : "<< boolalpha << estReguliere(m) << endl << endl;

      // 6) sommeLigne
      //-----------------------------------------------------------------------------
      cout << "6) sommeLigne() :" << endl;

      m = {{1, 0, 1}, {3, 3}, {2, 1, 4}};
      cout << "   " << m << " : " << sommeLigne(m) << endl;

      m = {{6}, {5}, {1}};
      cout << "   " << m << " : " << sommeLigne(m) << endl;

      m = {};
      cout << "   " << m << " : " << sommeLigne(m) << endl << endl;

      // 8) vectSommeMin
      //-----------------------------------------------------------------------------
      cout << "8) vectSommeMin() :" << endl;

      m = {{1, 0, 1}, {3, 3}, {2, 1, 4}};
      cout << "   " << m << " : " << vectSommeMin(m) << endl;

      m = {{2}, {1, 1}, {2, 1, 4}};
      cout << "   " << m << " : " << vectSommeMin(m) << endl;

      m = {{0, 0}, {1}, {2, 1, 4}, {0}};
      cout << "   " << m << " : " << vectSommeMin(m) << endl << endl;

      // 10) sortMatrice
      //-----------------------------------------------------------------------------
      cout << "10) sortMatrice() :" << endl;

      m = {{4, 4}, {1, 3}, {2}};
      cout << "   " << m << " : ";
      sortMatrice(m);
      cout << m << endl;

      m = {{3}, {1}, {2}};
      cout << "   " << m << " : ";
      sortMatrice(m);
      cout << m << endl;

      m = {{3, 2}, {7, 0, 4}, {1}};
      cout << "   " << m << " : ";
      sortMatrice(m);
      cout << m << endl;

   return EXIT_SUCCESS;
}
