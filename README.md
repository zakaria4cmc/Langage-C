# 💻 Travaux Pratiques (TP) - Langage C

Bienvenue dans ce dépôt dédié aux travaux pratiques et exercices en **Langage C** réalisés par **Zakaria Hazzou**. Ce projet regroupe une série d'exercices progressifs couvrant les bases fondamentales ainsi que des notions plus avancées de la programmation en C.

---

## 📂 Structure du Dépôt

```text
Langage-C/
├── README.md
└── TP_C_HAZZOU_ZAKARIA/
    ├── types.c                   # Démonstration des tailles et limites des types primitifs
    ├── TP 1/                     # Exercices fondamentaux (I/O, Conditions, Calculs)
    │   ├── Année bissextile.c
    │   ├── tp1_ex1_carte.c
    │   ├── tp1_ex2_facture.c
    │   ├── tp1_ex2_minutes.c
    │   ├── tp1_ex3_convertisseur.c
    │   ├── tp1_ex4_mention.c
    │   └── tp1_ex5_calculatrice.c
    └── TP 2/                     # Concepts avancés (Boucles, Tableaux, Chaînes & Fonctions)
        ├── tp22_ex2_moyenne.c
        ├── tp2_ex1_table.c
        ├── tp2_ex3_menu.c
        ├── tp2_ex4_notes.c
        ├── tp2_ex5_motdepasse.c
        ├── tp2_ex5_voyelles.c
        └── tp2_ex6_fonctions.c

```

---

## 📑 Sommaire des Contenus

### 🔹 Module de Base : Introspection des Types (`types.c`)

* Exploration des tailles en mémoire (`sizeof`) et limites des types primitifs en C (utilisation de `<limits.h>` et `<float.h>`).

### 🔹 TP 1 : Les Fondamentaux du C

* **Entrées / Sorties** : Interaction console via `printf` et `scanf`.
* **Structures conditionnelles** : Tests et décisions (`if / else`, `switch`).
* **Exercices pratiques** : Calcul de facture, conversion du temps, calculatrice interactive, vérification des années bissextiles, calcul de mention.

### 🔹 TP 2 : Structures de Contrôle & Algorithmes

* **Boucles et itérations** : `for`, `while`, `do...while`.
* **Tableaux & Chaînes** : Calcul de moyennes, gestion de notes, comptage de voyelles, traitement de mots de passe.
* **Modularité** : Création et appel de fonctions autonomes pour structurer le code.

---

## 🛠️ Compilation et Exécution

Pour compiler et exécuter ces programmes, vous aurez besoin du compilateur `gcc`.

### 1️⃣ Compilation d'un fichier individuel

Pour compiler un exercice spécifique (par exemple la calculatrice dans `TP 1`) :

```bash
# Compilation sous Linux / macOS / MSYS2
gcc -Wall -Wextra -std=c11 "TP_C_HAZZOU_ZAKARIA/TP 1/tp1_ex5_calculatrice.c" -o calculatrice

# Exécution
./calculatrice

```

> **Note :** Sous Windows (cmd / PowerShell), l'exécution se fait via `calculatrice.exe`.

### 2️⃣ Compilation du programme d'introspection des types

```bash
gcc -Wall -Wextra -std=c11 "TP_C_HAZZOU_ZAKARIA/types.c" -o types
./types

```

---

## 🚀 Options de Compilation Recommandées

* `-Wall -Wextra` : Active tous les avertissements recommandés pour détecter les erreurs potentielles.
* `-std=c11` : Spécifie l'utilisation du standard C11.

---

## 👤 Auteur

* **Zakaria Hazzou** - [GitHub Profile](https://www.google.com/search?q=https://github.com/zakaria4cmc)





### 💡 خطوات إضافة الملف على GitHub:
1. افتح الملف `README.md` داخل مجلد مشروعك.
2. انقر على أيقونة التعديل (Pencil Icon) أو افتحه في VS Code.
3. امسح المحتوى القديم وانسخ الكود أعلاه ثم قم بلصقه.
4. قم بعمل **Commit changes** ليتم تحديث واجهة مستودعك بنجاح!

```
