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
#include <numeric>

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

bool sontEgaux(const vecteur& v, const vecteur& v1) {
   return v == v1;
}

bool estReguliere(const matrice& m) {
   bool reguliere = true;
   if (!m.empty()) {
      reguliere = equal(m.cbegin(), m.cend() - 1, m.cbegin() + 1, sontEgaux);
   }

   return reguliere;
}

int somme(const vecteur& v) {
   return accumulate(v.cbegin(), v.cend(), 0);
}

vecteur sommeLigne(const matrice& m) {
   vecteur v(m.size());

   transform(m.cbegin(), m.cend(), v.begin(), somme);

   return v;
}

std::vector<int> vectSommeMin(const matrice& m) {
   // Vecteur contennant les sommes de chacune des lignes de la matrice m
   vecteur vSommes = sommeLigne(m);

   // Récupération de l'itérateur de la somme la plus petite
   auto sommeMin = min_element(vSommes.cbegin(), vSommes.cend());

   // Récupérationn de l'index du vecteur ayant la somme la plus petite
   int position = distance(vSommes.cbegin(), sommeMin);

   // Retourne la vecteur ayant la somme la plus petite
   return m.at(position);
}

void trierVecteur(vecteur& v) {
   sort(v.begin(), v.end());
}

void sortMatrice(matrice& m) {
   for_each(m.begin(), m.end(), trierVecteur);

   sort(m.begin(), m.end());
}
