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
// 3) estCarre
//-----------------------------------------------------------------------------------
// But        Vérifie si la matrice mise en parametre est carrée
// @param     m     matrice à vérifier
// Return     Validation matrice carré/non-carré
// Exception  n/a
bool estCarre (const std::vector<std::vector<int>>& m);


//-----------------------------------------------------------------------------------
// 5) minCol
//-----------------------------------------------------------------------------------
// But        Renvoie la taille du plus petit vecteur de la matrice mise en parametre
// \param     m            matrice à vérifier
// Return     elementMin   taille minimun des vecteurs de la matrice
// Exception  n/a
size_t minCol(const std::vector<std::vector<int>>& m);

//-----------------------------------------------------------------------------------
// 7) sommeColonne
//-----------------------------------------------------------------------------------
// But        Renvoie le nombre le chaque élément de chaque colonne
// @param     m   matrice à vérifier
// Return     v   vecteur contenant tous les tailles des colonnes
// Exception  n/a
std::vector<int> sommeColonne(const std::vector<std::vector<int>>& m);

//-----------------------------------------------------------------------------------
// 9) shuffleMatrice
//-----------------------------------------------------------------------------------
// But        Mélange la positions des vecteurs de la matrice mise en parametre.
// @param     m   matrice à vérifier
// Return     m   matrice shuffle
// Exception  n/a
std::vector<std::vector<int>> shuffleMatrice(std::vector<std::vector<int>> m);

#endif //LABO07MATRICE_VECTORMATRICELIB_H

