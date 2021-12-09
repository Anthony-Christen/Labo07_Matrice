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

using namespace std;
using vecteur = vector<int>;
using matrice = vector<vecteur>;

ostream& operator<< (ostream& out, const vecteur& v) {
   out << '(';
   if (!v.empty()) {
      for (vecteur::const_iterator i = v.cbegin(); i != v.cend(); ++i) {
         if (i != v.cbegin()) {
            out << ", ";
         }
         out << *i;
      }
   }
   out << ')';

   return out;
}

ostream& operator<< (ostream& out, const matrice& m) {
   out << '[';
   if (!m.empty()) {
      for (matrice::const_iterator i = m.cbegin(); i != m.cend(); ++i) {
         if (i != m.cbegin()) {
            cout << ", ";
         }
         out << *i;
      }
   }
   out << ']';

   return out;
}
