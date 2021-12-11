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

//-----------------------------------------------------------------------------------
// 3) Fonction estReguliere()
//-----------------------------------------------------------------------------------
// But        Tester si la matrice est régulière (toutes les lignes de même taille)
// @param     m  matrice à tester
// Return     booléen indiquant si la matrice est régulière ou non
// Exception  n/a
bool estReguliere(const std::vector<std::vector<int>>& m);

//-----------------------------------------------------------------------------------
// 6) Fonction sommeLigne()
//-----------------------------------------------------------------------------------
// But        Calculer la somme des valeurs de chacune des lignes
// @param     m  matrice à traiter
// Return     vecteur contenant la somme des valeurs de chacune des lignes
// Exception  n/a
std::vector<int> sommeLigne(const std::vector<std::vector<int>>& m);

//-----------------------------------------------------------------------------------
// 7) Fonction vectSommeMin()
//-----------------------------------------------------------------------------------
// But        Trouver le vecteur d'une matrice dont la somme des valeurs est la
//            plus faible
// @param     m  matrice à traiter
// Return     vecteur dont la somme des valeurs est la plus faible
// Exception  n/a
std::vector<int> vectSommeMin(const std::vector<std::vector<int>>& m);

//-----------------------------------------------------------------------------------
// 10) sortMatrice()
//-----------------------------------------------------------------------------------
// But        Trier dans l’ordre croissant une matrice en fonction de l’élément
//            minimum d’un vecteur
// @param     m  matrice à trier
// Return     n/a
// Exception  n/a
void sortMatrice(std::vector<std::vector<int>>& m);

#endif //LABO07MATRICE_VECTORMATRICELIB_H

