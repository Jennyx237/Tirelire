# Tirelire
      Le code fourni crée une tirelire et lui fait subir diverses manipulations (la vider, la secouer, afficher son contenu, etc.).
      Ce programme demande aussi à l’utilisateur quel budget il aimerait consacrer à ses vacances.
        -Si la tirelire contient suffisamment d’argent (ce budget ou plus), il indique combien d’argent il resterait dans la tirelire après les vacances.
        -Dans le cas contraire, il indique quel montant manque pour partir en vacances avec le budget souhaité.
       La définition de la classe Tirelire manque et il vous est demandé de la fournir.

## Spécifications de la classe Tirelire
    Une tirelire est caractérisée par le montant qu’elle contient. Vous nommerez cet attribut montant dans votre programme.
     Les traitements qui lui sont spécifiques sont :
    1.une méthode getMontant retournant le montant de la tirelire ;

    2.Une méthode afficher affichant les données de la tirelire sous le format suivant :
       " Vous etes sans le sou."  si la tirelire ne contient pas d’argent
       " Vous avez : <montant> euros dans votre tirelire. "dans le cas contraire, où <montant> est le montant de la tirelire

    3.une méthode secouer affichant sur le terminal le message Bing bing, suivi d’un saut de ligne, dans le cas où la tirelire contient de l’argent, et qui n’affiche rien sinon ;

    4.une méthode remplir mettant un montant donné en paramètre (double) dans la tirelire.
       Seuls les montants positifs seront acceptés (dans le cas contraire on ne fait rien) ;

    5.une méthode vider réinitialisant le montant de la tirelire à zéro ;

    6.une méthode puiser permettant de retirer un montant donné en paramètre.
      -Si le montant est négatif, il est ignoré.
      -Si le montant est supérieur au montant disponible, la tirelire est vidée.
      Cette méthode ne retourne rien.

    7.Une méthode montant_suffisant à deux paramètres qui retourne true si la tirelire contient assez d’argent pour couvrir un budget donné (premier paramètre, type double), et false sinon.
      -Si c’est suffisant, le second paramètre solde (passé par référence) contient le montant restant.
      -Sinon, il contient le montant manquant (positif).
      -Si le budget est négatif (ou nul), la méthode retourne true et solde correspond au montant total de la tirelire.

    8.une méthode calculerSolde qui retourne la différence entre le montant de la tirelire et le budget souhaité (type double).
      Si le budget est négatif (ou nul), la méthode retourne simplement le montant de la tirelire.

      Ces méthodes feront partie de l’interface d’utilisation de la classe.

Dis-moi 👍
