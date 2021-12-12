/*
  -----------------------------------------------------------------------------------
  Fichier     : vectoMatriceLib.h
  Nom du labo : Labo07 Matrice
  Auteur(s)   : Théo Pilet & Anthony Christen (Groupe B)
  Date        : 07.12.2021
  But         : Librairie contenant des fonctions utilisable sur des vecteurs et des
                matrices

  Remarque(s) : /

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

// 3) Fonction estCarre
//-----------------------------------------------------------------------------------
// But        Vérifie si la matrice mise en parametre est carrée
// @param     m     matrice à vérifier
// Return     Validation matrice carré/non-carré
// Exception  n/a
bool estCarre (const std::vector<std::vector<int>>& m);

//-----------------------------------------------------------------------------------
// 4) Fonction estReguliere()
//-----------------------------------------------------------------------------------
// But        Tester si la matrice est régulière (toutes les lignes de même taille)
// @param     m  matrice à tester
// Return     booléen indiquant si la matrice est régulière ou non
// Exception  n/a
bool estReguliere(const std::vector<std::vector<int>>& m);

//-----------------------------------------------------------------------------------
// 5) Fonction minCol
//-----------------------------------------------------------------------------------
// But        Renvoie la taille du plus petit vecteur de la matrice mise en parametre
// \param     m            matrice à vérifier
// Return     taille minimun des vecteurs de la matrice
// Exception  n/a
size_t minCol(const std::vector<std::vector<int>>& m);

//-----------------------------------------------------------------------------------
// 6) Fonction sommeLigne()
//-----------------------------------------------------------------------------------
// But        Calculer la somme des valeurs de chacune des lignes
// @param     m  matrice à traiter
// Return     vecteur contenant la somme des valeurs de chacune des lignes
// Exception  n/a
std::vector<int> sommeLigne(const std::vector<std::vector<int>>& m);

//-----------------------------------------------------------------------------------
// 7) Fonction sommeColonne
//-----------------------------------------------------------------------------------
// But        Renvoie la somme des éléments de chaque colonne de la matrice
// @param     m   matrice à vérifier
// Return     vecteur contenant les somme de chacune des lignes
// Exception  n/a
std::vector<int> sommeColonne(const std::vector<std::vector<int>>& m);

//-----------------------------------------------------------------------------------
// 8) Fonction vectSommeMin()
//-----------------------------------------------------------------------------------
// But        Trouver le vecteur d'une matrice dont la somme des valeurs est la
//            plus faible
// @param     m  matrice à traiter
// Return     vecteur dont la somme des valeurs est la plus faible
// Exception  n/a
std::vector<int> vectSommeMin(const std::vector<std::vector<int>>& m);

//-----------------------------------------------------------------------------------
// 9) Fonction shuffleMatrice
//-----------------------------------------------------------------------------------
// But        Mélange la positions des vecteurs de la matrice mise en parametre.
// @param     m   matrice à vérifier
// Return     n/a
// Exception  n/a
void shuffleMatrice(std::vector<std::vector<int>>& m);

//-----------------------------------------------------------------------------------
// 10) Fonction sortMatrice()
//-----------------------------------------------------------------------------------
// But        Trier dans l’ordre croissant une matrice en fonction de l’élément
//            minimum d’un vecteur
// @param     m  matrice à trier
// Return     n/a
// Exception  n/a
void sortMatrice(std::vector<std::vector<int>>& m);

#endif //LABO07MATRICE_VECTORMATRICELIB_H

