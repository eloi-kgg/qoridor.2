cmake_minimum_required(VERSION 3.29)
project(quoridor_2 C)

set(CMAKE_C_STANDARD 23)

add_executable(quoridor_2 main.c
        menu/menu.h
        menu/menu.c
        quitter/quitter.c
        quitter/quitter.h
        choixact/choixact.c
        choixact/choixact.h
        plateau/plateau.h
        plateau/plateau.c
        placement2/placement2.c
        placement2/placement2.h
        placement4/placement4.c
        placement4/placement4.h
        affichage/affichage.c
        affichage/affichage.h
        pseudo/pseudo.c
        pseudo/pseudo.h
        regle/regle.c
        regle/regle.h
        joueurmalp/joueurmalp.c
        joueurmalp/joueurmalp.h
        move/move.c
        move/move.h
        barriere/barriere.h
        barriere/barriere.c
        placementb/placementb.c
        placementb/placementb.h
        sauvegarde/sauvegarde.h
        sauvegarde/sauvegarde.c
        gagner/gagner.c
        partie2/partie2.c)
