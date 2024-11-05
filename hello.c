#include <stdio.h>
#include <string.h>

#define PASSWORD "1234" // Mot de passe correct

// Fonction pour authentifier l'utilisateur
int authentifier() {
    char motDePasse[20];

    printf("Entrez le mot de passe pour vous authentifier : ");
    scanf("%19s", motDePasse);

    // Vérification du mot de passe
    if (strcmp(motDePasse, PASSWORD) == 0) {
        printf("Authentification réussie !\n");
        return 1; // Authentification réussie
    } else {
        printf("Mot de passe incorrect.\n");
        return 0; // Authentification échouée
    }
}

int main() {
    int nombre1, nombre2, somme;

    // Appel de la fonction d'authentification
    if (authentifier()) {
        // Si l'authentification est réussie, demander les nombres à additionner
        printf("Entrez le premier nombre : ");
        scanf("%d", &nombre1);
        printf("Entrez le deuxième nombre : ");
        scanf("%d", &nombre2);

        somme = nombre1 + nombre2;
        printf("La somme des deux nombres est : %d\n", somme);
    } else {
        printf("Accès refusé.\n");
    }

    return 0;
}
