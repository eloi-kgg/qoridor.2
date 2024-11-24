cmake_minimum_required(VERSION 3.29)
project(qoridor_2 C)

set(CMAKE_C_STANDARD 11)

include_directories(quoridor.2/affichage)
include_directories(quoridor.2/barriere)
include_directories(quoridor.2/choixact)
include_directories(quoridor.2/joueurmalp)
include_directories(quoridor.2/menu)
include_directories(quoridor.2/move)
include_directories(quoridor.2/placement2)
include_directories(quoridor.2/placement4)
include_directories(quoridor.2/placementb)
include_directories(quoridor.2/plateau)
include_directories(quoridor.2/pseudo)
include_directories(quoridor.2/quitter)
include_directories(quoridor.2/regle)
include_directories(quoridor.2/reprendre)
include_directories(quoridor.2/sauvegarde)

add_executable(qoridor_2
    quoridor.2/affichage/affichage.c
    quoridor.2/affichage/affichage.h
    quoridor.2/barriere/barriere.c
    quoridor.2/barriere/barriere.h
    quoridor.2/choixact/choixact.c
    quoridor.2/choixact/choixact.h
    quoridor.2/joueurmalp/joueurmalp.c
    quoridor.2/joueurmalp/joueurmalp.h
    quoridor.2/menu/menu.c
    quoridor.2/menu/menu.h
    quoridor.2/move/move.c
    quoridor.2/move/move.h
    quoridor.2/placement2/placement2.c
    quoridor.2/placement2/placement2.h
    quoridor.2/placement4/placement4.c
    quoridor.2/placement4/placement4.h
    quoridor.2/placementb/placementb.c
    quoridor.2/placementb/placementb.h
    quoridor.2/plateau/plateau.c
    quoridor.2/plateau/plateau.h
    quoridor.2/pseudo/pseudo.c
    quoridor.2/pseudo/pseudo.h
    quoridor.2/quitter/quitter.c
    quoridor.2/quitter/quitter.h
    quoridor.2/regle/regle.c
    quoridor.2/regle/regle.h
    quoridor.2/reprendre/reprendre.c
    quoridor.2/reprendre/reprendre.h
    quoridor.2/sauvegarde/sauvegarde.c
    quoridor.2/sauvegarde/sauvegarde.h
    quoridor.2/main.c)
