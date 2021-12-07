/*
  -----------------------------------------------------------------------------------
  Fichier     : vectoMatriceLib.cpp
  Nom du labo : Labo07 Matrice
  Auteur(s)   : Théo Pilet & Anthony Christen (Groupe B)
  Date        : 07.12.2021
  But         : le but du programme et non le but du laboratoire !!

  Remarque(s) : à compléter

  Compilateur : Apple clang version 13.0.0 (clang-1300.0.29.3)
  -----------------------------------------------------------------------------------
*/

#include "vectorMatriceLib.h" // Lien vers le fichier d'en-tête.
#include <vector>
#include <algorithm>

using namespace std;
using vecteur = vector<int>;
using matrice = vecteur<vecteur>;

ostream& operator<< (ostream& out, const matrice& m) {
   out << '[';
   if (!m.empty()) {
      for_each(m.begin(), m.end(), afficher)
   }
   out << ']';
}

void afficher(const vecteur& v) {
   cout << v;
}
