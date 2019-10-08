#include <iostream>
#include <array>
#include <vector>
#include <iomanip>

using namespace std;

int main(){

    vector<char>stock_answ(0);
    int result(0);
    int question_nb(1);
// !! NE PAS LIRE LA LIGNE EN DESSOUS AVANT DE JOUER !!
    char good_answ[] ={'b','c', 'a', 'a', 'b', 'b', 'b', 'c', 'b', 'a',
                        'a', 'c', 'b', 'c','c', 'a', 'b', 'a', 'b', 'c'}; // (stock les bonnes reponses !)

    char user_answ;
    char lenght_answ;
    string question[] = { // Tableau quit stock les questions
        //THEME GAMING
    "1.	Quelle est le nom de la mascotte moustachu de Nintendo a casquette rouge :",
    "2. Qui est le hero principal de la saga The legend of Zelda ? ",
    "3. Sonic (mascotte de Sega) est : ",
    "4. Quel jeu a developpe par Rockstar Games ?",
    "5. Quel est le nom de la premiere console de Sony ?",
    "6. Qui a developpe la premiere version de Tetris ?",
    "7. En 1986, Alex Kidd defait les boss a coup de :",
    "8. En 2004 qui sont les participants du combat epic de Street Fighter renomme Evo Moment 37 ?",
    "9. La serie Dark Souls est developpe par :",
    "10. Dans The Witcher 3 quel est le nom de Geralt en langage ancien ?",
    // THEME INFORMATIQUE
    "11. Quel est le nom du systeme d’exploitation de Microsoft ?",
    "12. Quel logiciel permet la retouche photo ?",
    "13. HTML est il un langage de programmation ?",
    "14. Que signifie VM ?",
    "15. Quelle est la date de parution du framework Bootstrap ?",
    "16. Qui est a l’origine du projet Jquery",
    "17. Quel est le langage le plus ancien ?",
    "18. Quel langage utilise le framework Django",
    "19. Qu’est ce qu’une BDD ? ",
    "20. Quel est le nom de l’ancetre d’internet ?",


    };


     const string answer[20][3]{ // Stockage des réponses possibles
        {"a. Luigi", "b. Mario", "c. Yoshi"},
        {"a. Bowser", "b. Zelda", "c. Link"},
        {"a. Un herisson ", "b. Une tortue", "c. Un dinosaure "},
        {"a. Grand Theft Auto", "b. The last of Us ", "c. My Little Pony "},
        {"a. Xbox One", "b. Playstation", "c. PSone"},
        {"a. Shigeru Miyamoto", "b. Alexey Pajitnov", "c. Hideo Kojima"},
        {"a. Kamehameha", "b. Janken", "c. Hadouken"},
        {"a. Zeraisse vs Chris G", "b. Bonchan vs Lu Alex Valle", "c. Justin Wong vs Daigo"},
        {"a. Ubisoft", "b. From Softwar", "c. Capcom"},
        {"a. Gwynbleidd", "b. Zireael", "c. Aen Seidhe"},
        // REPONSE THEME INFORMATIQUE
        { "a. Windows", "b. Linux", "c. macOS" },
        { "a. Sony Vegas Pro", "b. Audacity", "c. Photoshop" },
        { "a. Oui", "b. Non", "c. Oui et Non" },
        { "a. Visionary Marketing ", "b. View Message", "c. Virtual Machin" },
        { "a. 1999", "b. 2006", "c. 2011" },
        { "a. John Resig", "b. Rasmus Lerdorf", "c. Yukihiro Matsumoto" },
        { "a. Ruby", "b. Php", "c. Java" },
        { "a. Python", "b. JavaScript", "c. Php" },
        { "a. Une Boite De Dialogue !", "b. Une Base De Donnee !", "c. Une Barriere De Degele …?" },
        { "a. Larpanet", "b. Darpanet", "c. Arpanet " },
    };


    for(int i = 0; i< sizeof(question)/sizeof(*question); i++){


        cout << question[i] << endl;

        for(int j = 0; j<3; j++){

            cout << answer[i][j] << endl ;
        }
            cin >> user_answ ; // On entre la réponse ici
            cin.sync(); // ignore si il y a plus de 1 caractere saisie

       /* do{


             if(cin.get(user_answ )){
                cout << "Veuillez entrer uniquement la lettre de la reponse (a/b/c) " << endl;
             }
        }while(sizeof(user_answ) > 1);*/

        if(user_answ != 'a' && user_answ !='b' && user_answ !='c'){

            while(user_answ != 'a' || user_answ !='b' || user_answ !='c'){

                cout << "Veuillez entrer uniquement la lettre de la reponse (a/b/c) " << endl;
                cin >> user_answ ;
                cin.sync();

                if(user_answ == 'a' || user_answ =='b' || user_answ =='c'){

                    break;
                    }
                }
            }

        system ("CLS"); // afficher uniquement la derniere question
        stock_answ.push_back(user_answ); // stock la reponse dans un tableau dynamique
    }

    for(int i=0; i<stock_answ.size(); i++){


    cout << "Question " << question_nb++ <<" : " << endl;
    cout << " Votre reponse : " << stock_answ[i] << endl;
         if( good_answ[i] == stock_answ[i] ){

            result++;
         }

    }
    cout << "votre score est de : " << result << "/20" << endl << endl;

    if(result < 10){
        cout << "Echec !";
    }else if( result >= 10 && result <= 15){
    cout << "Bien";

    }
    else if( result > 15 && result <= 19){
    cout << "Super ! ";

    }
    else if( result == 20){
    cout << "Perfect ! felicitation !";

    }

return 0;
}
