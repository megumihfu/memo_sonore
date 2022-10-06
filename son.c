#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <time.h>
#include <unistd.h>


int son_alea () // va jouer les sons en fonction d'une valeur généré aléatoirement
{
int num_son;

   num_son = (rand() % (47 - 1)); // assignation a num_son d'une valeur aléatoire entre 0 et 47
   srand (time (NULL));

switch (num_son)
{
  case 0 : system ("play -q 'grenouille.wav' &"); 
  break;
  
  case 1 : system ("play -q 'poussin.wav' &");
  break;
  
  case 2 : system ("play -q 'cheval.wav' &");
  break;
  
  case 3 : system ("play -q 'serpent.wav' &");
  break;
  
  case 4 : system ("play -q 'loup.wav' &");
  break;
  
  case 5 : system ("play -q 'elephant.wav' &");
  break;
  
  case 6 : system ("play -q 'dauphin.wav' &");
  break;
  
  case 7 : system ("play -q 'mouton.wav' &");
  break; 
  
  case 8 : system ("play -q 'chien.wav' &");
  break;
  
  case 9 : system ("play -q 'poules.wav' &");
  break;
  
  case 10 : system ("play -q 'canard.wav' &");
  break;
  
  case 11 : system ("play -q 'lion.wav' &");
  break;
  
  case 12 : system ("play -q 'briquet2.wav' &");
  break;
  
  case 13 : system ("play -q 'flash.wav' &");
  break;
  
  case 14 : system ("play -q 'tel_fixe.wav' &");
  break;
  
  case 15 : system ("play -q 'tv.wav' &");
  break;
  
  case 16 : system ("play -q 'radio2.wav' &");
  break;
  
  case 17 : system ("play -q 'marteau.wav' &");
  break;
  
  case 18 : system ("play -q 'horloge.wav' &");
  break;
  
  case 19 : system ("play -q 'toilette.wav' &");
  break;
  
  case 20 : system ("play -q 'douche.wav' &");
  break;
  
  case 21 : system ("play -q 'camera.wav' &");
  break;
  
  case 22 : system ("play -q 'message.wav' &");
  break;
  
  case 23 : system ("play -q 'disque.wav' &");
  break;
  
  case 24 : system ("play -q 'escrime.wav' &");
  break;
  
  case 25 : system ("play -q 'basket2.wav' &");
  break;
  
  case 26 : system ("play -q 'billard.wav' &");
  break;
  
  case 27 : system ("play -q 'ping_pong.wav' &");
  break;
  
  case 28 : system ("play -q 'arc.wav' &");
  break;
  
  case 29 : system ("play -q 'golf.wav' &");
  break;
  
  case 30 : system ("play -q 'boxe.wav' &");
  break;
  
  case 31 : system ("play -q 'hockey2.wav' &");
  break;
  
  case 32 : system ("play -q 'tennis2.wav' &");
  break;
  
  case 33 : system ("play -q 'natation.wav' &");
  break;
  
  case 34 : system ("play -q 'equitation.wav' &");
  break;
  
  case 35 : system ("play -q 'bowling.wav' &");
  break;
  
  case 36 : system ("play -q 'voiture.wav' &");
  break;
  
  case 37 : system ("play -q 'f1.wav' &");
  break;
  
  case 38 : system ("play -q 'police.wav' &");
  break;
  
  case 39 : system ("play -q 'ambulance.wav' &");
  break;
  
  case 40 : system ("play -q 'scooter.wav' &");
  break;
  
  case 41 : system ("play -q 'skate.wav' &");
  break;
  
  case 42 : system ("play -q 'camion.wav' &");
  break;
  
  case 43 : system ("play -q 'pompier.wav' &");
  break;
  
  case 44 : system ("play -q 'helicoptere.wav' &");
  break;
  
  case 45 : system ("play -q 'avion.wav' &");
  break;
  
  case 46 : system ("play -q 'fusee.wav' &");
  break;
  
  case 47 : system ("play -q 'bateau.wav' &");
  break;
}
   num_son ++; //on incrémente num_son (car le son du bateau est le 47 mais dans le menu l'emoji du bateau est la 48) 
return num_son; // on retourne la variable num_son pour pouvoir la réutiliser dans d'autres fonctions
}

char emoji (char* pemoji[47][47])
{
// déclaration des émojis
pemoji [0][0] = "🐸";
pemoji [1][1] = "🐦";
pemoji [2][2] = "🐎";
pemoji [3][3] = "🐍";
pemoji [4][4] = "🐺";
pemoji [5][5] = "🐘";
pemoji [6][6] = "🐬";
pemoji [7][7] = "🐑";
pemoji [8][8] = "🐶";
pemoji [9][9] = "🐔";
pemoji [10][10] = "🦆";
pemoji [11][11] = "🦁";
pemoji [12][12] = "🪔";
pemoji [13][13] = "📸";
pemoji [14][14] = "☎️";
pemoji [15][15] = "📺";
pemoji [16][16] = "📻";
pemoji [17][17] = "🔨";
pemoji [18][18] = "⏱";
pemoji [19][19] = "🚽";
pemoji [20][20] = "🚿";
pemoji [21][21] = "🎥";
pemoji [22][22] = "📱";
pemoji [23][23] = "💿";
pemoji [24][24] = "🤺";
pemoji [25][25] = "⛹️";
pemoji [26][26] = "🎱";
pemoji [27][27] = "🏓";
pemoji [28][28] = "🏹";
pemoji [29][29] = "⛳️";
pemoji [30][30] = "🥊";
pemoji [31][31] = "⛸";
pemoji [32][32] = "🎾";
pemoji [33][33] = "🏊";
pemoji [34][34] = "🏇";
pemoji [35][35] = "🎳";
pemoji [36][36] = "🚗";
pemoji [37][37] = "🏎";
pemoji [38][38] = "🚔";
pemoji [39][39] = "🚑";
pemoji [40][40] = "🏍";
pemoji [41][41] = "🛹";
pemoji [42][42] = "🚍";
pemoji [43][43] = "🚊";
pemoji [44][44] = "🚁";
pemoji [45][45] = "✈️";
pemoji [46][46] = "🚀";
pemoji [47][47] = "🛳";
}

void level_1 ();
void level_2 ();
void level_3 ();


void choix_niveau ()  
{                            
int mode;

   printf("\033[19;74H");  // place le curseur a la ligne 19 colone 74
   scanf("%d", &mode);       // choix du mode (1, 2 ou 3) pour le niveau de jeu

   switch (mode)          // c'est une condition if/else généralisé
   {
      case 1 :                  // mode = 1
        system ("clear");    //efface ce qu'il y a sur le terminal
        system ("cat ./maquette1.txt");   // affiche la maquette 1
        level_1 ();
      break;  // sort de la boucle switch
   
      case 2 :                 //mode = 2
        system ("clear");
        system ("cat ./maquette2.txt");
        level_2 ();
      break;
      
      case 3 :                 // mode = 3
        system ("clear");
        system ("cat ./maquette3.txt");
        level_3 ();
      break; 
      
      default : 
        printf("\033[19;74H");
        printf("ERREUR !");   // affiche erreur si le joueur entre un autre chiffre que 1, 2 ou 3
      break;
   }   
}

void level_1 ()
{
// DÉCLARATION DES VARIABLES
char* pemoji [47][47];  // pour appeler la fonction emoji
int verif_array [10];  // tableau qui prend les valeurs des sons joués aléatoirement
int input_user [10]; // tableau qui prend les valeurs saisi par le joueur (ligne 'SAISI N° DU SON')
int i, num_son, nbrSon;  

  for (i = 0; i <= 2; i++)  //permet de faire jouer 3 sons
  {
     srand (time (NULL));   // initialisation en fonction de l'heure
     son_alea ();       // appel la fonction qui joue les sons en aleatoire
     num_son = son_alea ();  // assigne a num_son la valeur retourné dans la fonction son_alea
     sleep (11);          //pause de 11 seconde à chaque début de son
     verif_array [i] = num_son; //stocke dans le tableau verif_array le n° du son joué en aléatoire
  }

// PARTIE DU MENU SAISIE DU N° DU SON ET AFFICHAGE DES EMOJIS CORRESPONDANT
emoji (pemoji);   // appel de la fonction emoji

   printf("\033[26;24H"); // place le curseur à la ligne 26 colone 24
   scanf("%d", &nbrSon);  // le joueur saisi le numéro de l'emoji correspondant au son écouté
    input_user [0] = nbrSon;  // on assigne à la case 0 du tableau input_user le nombre saisi par l'utilisateur
      nbrSon --;   // décrémentation de la valeur saisi par l'utilisateur car le tableau commence par 0, pas comme dans le menu ou on commence par 1
         pemoji [nbrSon][nbrSon];   // prend l'emoji correspondant à celui que le joueur a entré
         printf("\033[28;24H");  // on place le curseur 
         printf("%s", pemoji[nbrSon][nbrSon]);  // on affiche l'emoji dans VOTRE CLASSEMENT
   while (getchar () != '\n');  // il faut que le joueur clique sur entrée pour la suite
   
   printf("\033[26;33H");
   scanf("%d", &nbrSon);
   input_user [1] = nbrSon; 
      nbrSon --;
          pemoji [nbrSon][nbrSon];
          printf("\033[28;33H");
          printf("%s", pemoji[nbrSon][nbrSon]);
    while (getchar () != '\n'); 
   
   printf("\033[26;42H");
   scanf("%d", &nbrSon);
   input_user [2] = nbrSon;
      nbrSon --;
         pemoji [nbrSon][nbrSon];
         printf("\033[28;42H");
         printf("%s", pemoji[nbrSon][nbrSon]);
    while (getchar () != '\n');  

// VÉRIFICATION 
// vérification case 1
   if (verif_array [0] != input_user [0])  // si le numéro du son aléatoire est
   {                                         // différent de celui saisi par le joueur
      printf("\033[30;24H"); // on se place sur la ligne d'en dessous
      printf("❌");  // on affiche une croix -> faux 
   } 
   
   else                        // sinon :
   {
      printf("\033[30;24H");  // on se place aussi sur la ligne d'en dessous
      printf("✅");      // on affiche un emoji coché -> vrai :)
   }
 //verification case 2   
   if (verif_array [1] != input_user [1])  
   {
      printf("\033[30;33H");
      printf("❌");
   } 
   
   else  
   {
      printf("\033[30;33H");
      printf("✅");
   }
// vérification case 3 (et pareil pour les autres niveaux...)
   if (verif_array [2] != input_user [2])  
   {
      printf("\033[30;42H");
      printf("❌");
   } 
   
   else  
   {
      printf("\033[30;42H");
      printf("✅");
   }
}


void level_2 ()
{
int i, nbrSon, num_son, verif_array [10], input_user [10];
char* pemoji [47][47];

  for (i = 0; i <= 4; i++)   //permet de faire jouer 5 sons
  {
     srand (time (NULL));   // on initialise en fonction de l'heure pour ne pas tjr avoir la même suite de nbr "aléatoire"
     son_alea (); //on appelle la fonction aléatoire 
     num_son = son_alea ();
     sleep (11);
     verif_array [i] = num_son; 
  }
  
emoji (pemoji);

   printf("\033[26;24H");
   scanf("%d", &nbrSon);
    input_user [0] = nbrSon;
      nbrSon --;
         pemoji [nbrSon][nbrSon];
         printf("\033[28;24H");
         printf("%s", pemoji[nbrSon][nbrSon]);
   while (getchar () != '\n'); 
   
   printf("\033[26;33H");
   scanf("%d", &nbrSon);
   input_user [1] = nbrSon; 
      nbrSon --;
          pemoji [nbrSon][nbrSon];
          printf("\033[28;33H");
          printf("%s", pemoji[nbrSon][nbrSon]);
    while (getchar () != '\n'); 
   
   printf("\033[26;42H");
   scanf("%d", &nbrSon);
   input_user [2] = nbrSon;
      nbrSon --;
         pemoji [nbrSon][nbrSon];
         printf("\033[28;42H");
         printf("%s", pemoji[nbrSon][nbrSon]);
    while (getchar () != '\n');   
      
   printf("\033[26;51H");
   scanf("%d", &nbrSon);
   input_user [3] = nbrSon;
      nbrSon --;
         pemoji [nbrSon][nbrSon];
         printf("\033[28;51H");
         printf("%s", pemoji[nbrSon][nbrSon]);
    while (getchar () != '\n');    
        
   printf("\033[26;60H");
   scanf("%d", &nbrSon);
   input_user [4] = nbrSon;
      nbrSon --;
         pemoji [nbrSon][nbrSon];
         printf("\033[28;60H");
         printf("%s", pemoji[nbrSon][nbrSon]);
    while (getchar () != '\n'); 
    
    // VÉRIFICATION 
// vérification case 1
   if (verif_array [0] != input_user [0])  
   {
      printf("\033[30;24H");
      printf("❌");
   } 
   
   else  
   {
      printf("\033[30;24H");
      printf("✅");
   }
 //verification case 2   
   if (verif_array [1] != input_user [1])  
   {
      printf("\033[30;33H");
      printf("❌");
   } 
   
   else  
   {
      printf("\033[30;33H");
      printf("✅");
   }
// verif 3
   if (verif_array [2] != input_user [2])  
   {
      printf("\033[30;42H");
      printf("❌");
   } 
   
   else  
   {
      printf("\033[30;42H");
      printf("✅");
   }
// verif 4
   if (verif_array [3] != input_user [3])  
   {
      printf("\033[30;51H");
      printf("❌");
   } 
   
   else  
   {
      printf("\033[30;51H");
      printf("✅");
   }
// verif 5   
      if (verif_array [4] != input_user [4])  
   {
      printf("\033[30;60H");
      printf("❌");
   } 
   
   else  
   {
      printf("\033[30;60H");
      printf("✅");
   }

}

void level_3 ()
{
int i, num_son, nbrSon, verif_array [10], input_user [10];
char* pemoji [47][47];

  for (i = 0; i <= 9; i++)   //permet de faire jouer 10 sons
  {
     srand (time (NULL));
     son_alea (num_son);
     num_son = son_alea ();
     sleep (11);   
     verif_array [i] = num_son;
  }

emoji (pemoji);
   
   printf("\033[26;24H");
   scanf("%d", &nbrSon);
    input_user [0] = nbrSon;
      nbrSon --;
         pemoji [nbrSon][nbrSon];
         printf("\033[28;24H");
         printf("%s", pemoji[nbrSon][nbrSon]);
   while (getchar () != '\n'); 
   
   printf("\033[26;33H");
   scanf("%d", &nbrSon);
   input_user [1] = nbrSon; 
      nbrSon --;
          pemoji [nbrSon][nbrSon];
          printf("\033[28;33H");
          printf("%s", pemoji[nbrSon][nbrSon]);
    while (getchar () != '\n'); 
   
   printf("\033[26;42H");
   scanf("%d", &nbrSon);
   input_user [2] = nbrSon;
      nbrSon --;
         pemoji [nbrSon][nbrSon];
         printf("\033[28;42H");
         printf("%s", pemoji[nbrSon][nbrSon]);
    while (getchar () != '\n');   
      
   printf("\033[26;51H");
   scanf("%d", &nbrSon);
   input_user [3] = nbrSon;
      nbrSon --;
         pemoji [nbrSon][nbrSon];
            printf("\033[28;51H");
            printf("%s", pemoji[nbrSon][nbrSon]);
    while (getchar () != '\n');    
        
   printf("\033[26;60H");
   scanf("%d", &nbrSon);
   input_user [4] = nbrSon;
      nbrSon --;
         pemoji [nbrSon][nbrSon];
         printf("\033[28;60H");
         printf("%s", pemoji[nbrSon][nbrSon]);
    while (getchar () != '\n'); 
        

   printf("\033[26;69H");
   scanf("%d", &nbrSon);
   input_user [5] = nbrSon;
      nbrSon --;
         pemoji [nbrSon][nbrSon];
         printf("\033[28;69H");
         printf("%s", pemoji[nbrSon][nbrSon]);
    while (getchar () != '\n'); 
               
   printf("\033[26;78H");
   scanf("%d", &nbrSon);
   input_user [6] = nbrSon;
      nbrSon --;
         pemoji [nbrSon][nbrSon];
         printf("\033[28;78H");
         printf("%s", pemoji[nbrSon][nbrSon]);
    while (getchar () != '\n'); 
        
   printf("\033[26;87H");
   scanf("%d", &nbrSon);
   input_user [7] = nbrSon;
      nbrSon --;
         pemoji [nbrSon][nbrSon];
         printf("\033[28;87H");
         printf("%s", pemoji[nbrSon][nbrSon]);
    while (getchar () != '\n'); 
        
   printf("\033[26;95H");
   scanf("%d", &nbrSon);
   input_user [8] = nbrSon;
      nbrSon --;
         pemoji [nbrSon][nbrSon];
         printf("\033[28;95H");
         printf("%s", pemoji[nbrSon][nbrSon]);
    while (getchar () != '\n'); 

   printf("\033[26;103H");
   scanf("%d", &nbrSon);
   input_user [9] = nbrSon;
      nbrSon --;
         pemoji [nbrSon][nbrSon];
         printf("\033[28;103H");
         printf("%s", pemoji[nbrSon][nbrSon]);
    while (getchar () != '\n');
    
    // VÉRIFICATION 
// vérification case 1
   if (verif_array [0] != input_user [0])  
   {
      printf("\033[30;24H");
      printf("❌");
   } 
   
   else  
   {
      printf("\033[30;24H");
      printf("✅");
   }
 //verification case 2   
   if (verif_array [1] != input_user [1])  
   {
      printf("\033[30;33H");
      printf("❌");
   } 
   
   else  
   {
      printf("\033[30;33H");
      printf("✅");
   }
// verif 3
   if (verif_array [2] != input_user [2])  
   {
      printf("\033[30;42H");
      printf("❌");
   } 
   
   else  
   {
      printf("\033[30;42H");
      printf("✅");
   }
// verif 4
   if (verif_array [3] != input_user [3])  
   {
      printf("\033[30;51H");
      printf("❌");
   } 
   
   else  
   {
      printf("\033[30;51H");
      printf("✅");
   }
// verif 5   
      if (verif_array [4] != input_user [4])  
   {
      printf("\033[30;60H");
      printf("❌");
   } 
   
   else  
   {
      printf("\033[30;60H");
      printf("✅");
   }
// verif 6
      if (verif_array [5] != input_user [5])  
   {
      printf("\033[30;69H");
      printf("❌");
   } 
   
   else  
   {
      printf("\033[30;69H");
      printf("✅");
   }
// verif 7   
   if (verif_array [6] != input_user [6])  
   {
      printf("\033[30;78H");
      printf("❌");
   } 
   
   else  
   {
      printf("\033[30;78H");
      printf("✅");
   }
// verif 8   
   if (verif_array [7] != input_user [7])  
   {
      printf("\033[30;87H");
      printf("❌");
   } 
   
   else  
   {
      printf("\033[30;87H");
      printf("✅");
   }
// verif 9
   if (verif_array [8] != input_user [8])  
   {
      printf("\033[30;95H");
      printf("❌");
   } 
   
   else  
   {
      printf("\033[30;95H");
      printf("✅");
   }
// verif 10
   if (verif_array [9] != input_user [9])  
   {
      printf("\033[30;103H");
      printf("❌");
   } 
   
   else  
   {
      printf("\033[30;103H");
      printf("✅");
   }
}


int game_over (int answer) //demande au joueur s'il veut rejouer ou quitter le jeu
{
   printf("\033[35;7H");   
   printf("VEUILLEZ SAISIR 0 POUR OUI ET 1 POUR NON : ");
   printf("\033[35;50H"); //place le curseur sur la derniere ligne
   scanf("%d", &answer);  //prend la réponse du joueur    
   
   if (answer == 0)      
    {
     return answer;
    }
   
   if (answer == 1)
   {
     system ("clear");
     return answer;
   } 
   
   else 
   {
      system ("clear");
      printf("Nous avons quitté le jeu...\n");
      return 1;
   }
}

int main()
{
   int answer, replay, mode, nbr_son;
   int verif_array [10];

      system ("clear");   // on efface tout ce qu'il y a sur le terminal
      system ("cat ./maquette_lvl.txt");  // on affiche la maquette qui permet au joueur de choisir son niveau de jeu

choix_niveau (mode);  // on appelle la fonction qui permet de choisir le mode et de dérouler la partie
replay = game_over (answer); //on assigne a replay la valeur retourné dans la fonction game_over

   while (replay == 0)
   {
      system ("clear");  
      system ("cat ./maquette_lvl.txt");
      choix_niveau (mode);
      replay = game_over (answer);
   }
   
return 0;
}



