#ifndef STYLISTE_H
#define STYLISTE_H

// Occasion
#define QUOTIDIEN 1
#define SOIREE 2
#define SPORT 3
#define TRAVAIL 4
#define RENDEZ_VOUS 5

// Budget
#define PETIT 1
#define MOYEN 2
#define GRAND 3

// Morphologie
#define MINCE 1
#define NORMAL 2
#define ROND 3

// Style
#define CLASSIQUE 1
#define STREETWEAR 2
#define CHIC 3
#define SPORTIF 4

// Saison
#define AUTOMNE 1
#define HIVER 2
#define PRINTEMPS 3
#define ETE 4

// Couleur de peau
#define CLAIRE 1
#define MATE 2
#define FONCEE 3

// Couleur de cheveux
#define BLOND 1
#define BRUN 2
#define NOIR 3
#define ROUX 4

// Couleur des yeux
#define BLEU 1
#define VERT 2
#define MARRON 3

// ----- STRUCTURE PROFIL -----

struct Profil
{
    int occasion;
    int budget;
    int morphologie;
    int peau;
    int cheveux;
    int yeux;
    int style;
    int saison;
};
typedef struct Profil Profil;

// ----- FONCTIONS -----

int choisir_tenue(Profil p);
void afficher_tenue(int tenue);

#endif

/*Les données utilisateur sont regroupées dans une structure
afin de simplifier le traitement et améliorer la lisibilité du programme.*/
