#include "styliste.h"

int tenue_quotidien(Profil p)
{
    if (p.style == CLASSIQUE)
    {
        if (p.morphologie == MINCE)
            return 1;
        if (p.morphologie == NORMAL)
            return 2;
        if (p.morphologie == ROND)
            return 3;
    }
    if (p.style == STREETWEAR)
    {
        if (p.morphologie == MINCE)
            return 4;
        if (p.morphologie == NORMAL)
            return 5;
        if (p.morphologie == ROND)
            return 6;
    }
    return 0;
}
int tenue_soiree(Profil p)
{
    if (p.style == CHIC)
    {
        if (p.budget == PETIT)
            return 7;
        if (p.budget == MOYEN)
            return 8;
        if (p.budget == GRAND)
            return 9;
    }
    if (p.style == CLASSIQUE)
    {
        if (p.budget == PETIT)
            return 10;
        if (p.budget == MOYEN)
            return 11;
        if (p.budget == GRAND)
            return 12;
    }
    return 0;
}
int tenue_sport(Profil p)
{
    if (p.style == SPORTIF)
        return 13;
    return 0;
}
int tenue_travail(Profil p)
{
    if (p.style == CHIC)
        return 14;
    if (p.style == CLASSIQUE)
        return 15;
    return 0;
}
int tenue_rdv(Profil p)
{
    if (p.style == CHIC)
    {
        if (p.budget == PETIT)
            return 16;
        if (p.budget == MOYEN)
            return 17;
        if (p.budget == GRAND)
            return 18;
    }
    if (p.style == CLASSIQUE)
    {
        if (p.budget == PETIT)
            return 19;
        if (p.budget == MOYEN)
            return 20;
        if (p.budget == GRAND)
            return 21;
    }
    return 0;
}
int choisir_occasion(Profil p)
{
    if (p.occasion == QUOTIDIEN)
        return tenue_quotidien(p);
    if (p.occasion == SOIREE)
        return tenue_soiree(p);
    if (p.occasion == SPORT)
        return tenue_sport(p);
    if (p.occasion == TRAVAIL)
        return tenue_travail(p);
    if (p.occasion == RENDEZ_VOUS)
        return tenue_rdv(p);
    return 0;
}
