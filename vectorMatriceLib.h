/*
  -----------------------------------------------------------------------------------
  Fichier     : vectoMatriceLib.h
  Nom du labo : Labo07 Matrice
  Auteur(s)   : Théo Pilet & Anthony Christen (Groupe B)
  Date        : 07.12.2021
  But         : le but du programme et non le but du laboratoire !!

  Remarque(s) : à compléter

  Compilateur : Apple clang version 13.0.0 (clang-1300.0.29.3)
  -----------------------------------------------------------------------------------
*/

#ifndef LABO07MATRICE_VECTORMATRICELIB_H
#define LABO07MATRICE_VECTORMATRICELIB_H

#include <iostream>
#include <vector>

//-----------------------------------------------------------------------------------
// 1) Opérateur<<
//-----------------------------------------------------------------------------------
// But        Afficher un vecteur au format (v1, v2, …, vn)
// @param     out  flux de sortie
// @param     v    vecteur à afficher
// Return     flux de sortie
// Exception  n/a
std::ostream& operator<< (std::ostream& out, const std::vector<int>& v);

//-----------------------------------------------------------------------------------
// 2) Opérateur<<
//-----------------------------------------------------------------------------------
// But        Afficher une Matrice au format [(..),(..),(..)]
// @param     out  flux de sortie
// @param     m    matrice à afficher
// Return     flux de sortie
// Exception  n/a
std::ostream& operator<< (std::ostream& out, const std::vector<std::vector<int>>& m);

#endif //LABO07MATRICE_VECTORMATRICELIB_H

