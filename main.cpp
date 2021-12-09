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
      vecteur v = {1, 2, 3, 4, 5};
      cout << "1) Operateur<< (vecteur) : " << v << endl << endl;

      // 2) Operateur<< (matrice)
      matrice m = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
      cout << "2) Operateur<< (matrice) : " << m << endl << endl;



   return EXIT_SUCCESS;
}
