/*
  -----------------------------------------------------------------------------------
  Fichier     : vectoMatriceLib.cpp
  Nom du labo : Labo07 Matrice
  Auteur(s)   : Théo Pilet & Anthony Christen (Groupe B)
  Date        : 07.12.2021
  But         : le but du programme et non le but du laboratoire !!

  Remarque(s) :

  Compilateur : Apple clang version 13.0.0 (clang-1300.0.29.3)
  -----------------------------------------------------------------------------------
*/
#include <algorithm>
#include <random>
#include <chrono>
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

/*bool estCarre (const matrice& m){
   if (estReguliere(m)) {
      return m.size() == m[0].size(); // nb de lignes == nb de colones
   }
   return false;
}*/

size_t remplissage(const vecteur& v){
   return v.size();
}

size_t minCol(const matrice& m) {
   vecteur v(m.size());
   transform(m.cbegin(), m.cend(), v.begin(), remplissage);
   auto elementMin = min_element(v.cbegin(), v.cend());
   return *elementMin;
}


vecteur sommeColonne(const matrice& m){
   vecteur vTailles(m.size());
   transform(m.cbegin(), m.cend(), vTailles.begin(), remplissage);
   int nbCol = *max_element(vTailles.cbegin(), vTailles.cend());
   vecteur resultat;
   int col = 0;
   while(col < nbCol) {
      int somme = 0;
      for(size_t i = 0; i < m.size(); ++i) {
         vecteur vCourant = m.at(i);
         if (col < vCourant.size()) {
            for (size_t j = col; j < col + 1; ++j) {
               somme += vCourant.at(j);
            }
         }
      }
      resultat.push_back(somme);
      ++col;
   }
   return vTailles;
}


matrice shuffleMatrice(matrice m){
   matrice mCopie(m.size());

   unsigned seed = chrono::system_clock::now().time_since_epoch().count();

   shuffle(m.begin(), m.end(), default_random_engine(seed));

   return m;
}

