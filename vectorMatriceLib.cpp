/*
  -----------------------------------------------------------------------------------
  Fichier     : vectoMatriceLib.cpp
  Nom du labo : Labo07 Matrice
  Auteur(s)   : Théo Pilet & Anthony Christen (Groupe B)
  Date        : 07.12.2021
  But         : Librairie contenant des fonctions utilisable sur des vecteurs et des
                matrices

  Remarque(s) : /

  Compilateur : Apple clang version 13.0.0 (clang-1300.0.29.3)
  -----------------------------------------------------------------------------------
*/
#include <algorithm>          // equal(), transform(), min_element(), max_element(),
                              // distance(), forach(), shuffle(), sort()
#include <numeric>            // accumulate()
#include <random>             // default_random_engine()
#include <chrono>             // chrono::system_clock::now().time_since_epoch().count()
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

bool estCarre (const matrice& m){
   if (estReguliere(m)) {
      return m.size() == m[0].size(); // nb de lignes == nb de colones
   }
   return false;
}

bool memeTaille(const vecteur& v, const vecteur& v1) {
   return v.size() == v1.size();
}

bool estReguliere(const matrice& m) {
   bool reguliere = true;
   if (!m.empty()) {
      reguliere = equal(m.cbegin(), m.cend() - 1, m.cbegin() + 1, memeTaille);
   }

   return reguliere;
}

size_t remplissage(const vecteur& v){
   return v.size();
}

size_t minCol(const matrice& m) {
   vecteur v(m.size());
   transform(m.cbegin(), m.cend(), v.begin(), remplissage);
   auto elementMin = min_element(v.cbegin(), v.cend());
   return *elementMin;
}

int somme(const vecteur& v) {
   return accumulate(v.cbegin(), v.cend(), 0);
}

vecteur sommeLigne(const matrice& m) {
   vecteur v(m.size());

   transform(m.cbegin(), m.cend(), v.begin(), somme);

   return v;
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
   return resultat;
}

vecteur vectSommeMin(const matrice& m) {
   // Vecteur contennant les sommes de chacune des lignes de la matrice m
   vecteur vSommes = sommeLigne(m);

   // Récupération de l'itérateur de la somme la plus petite
   auto sommeMin = min_element(vSommes.cbegin(), vSommes.cend());

   // Récupérationn de l'index du vecteur ayant la somme la plus petite
   int position = distance(vSommes.cbegin(), sommeMin);

   // Retourne la vecteur ayant la somme la plus petite
   return m.at(position);
}

void shuffleMatrice(matrice& m){
   unsigned seed = chrono::system_clock::now().time_since_epoch().count();
   shuffle(m.begin(), m.end(), default_random_engine(seed));
}

void trierVecteur(vecteur& v) {
   sort(v.begin(), v.end());
}

void sortMatrice(matrice& m) {
   for_each(m.begin(), m.end(), trierVecteur);

   sort(m.begin(), m.end());
}
