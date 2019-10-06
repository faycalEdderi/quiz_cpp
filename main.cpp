#include <iostream>
#include <array>
#include <vector> //pour tableau dynamique

using namespace std;

int main(){

    vector<char>stock_answ(0);
    int result(0);
    int question_nb(1);
// !! NE PAS LIRE LA LIGNE EN DESSOUS AVANT DE JOUER !!
    char good_answ[] ={'b','c', 'a', 'a', 'b', 'b', 'b', 'c', 'b', 'a'}; // (stock les bonnes reponses !)

    char user_answ;
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
    };


     const string answer[10][3]{ // Stockage des réponses possibles
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
    };


    for(int i = 0; i< sizeof(question)/sizeof(*question); i++){


        cout << question[i] << endl;

        for(int j = 0; j<3; j++){

            cout << answer[i][j] << endl ;
        }
        cin >> user_answ ; // On entre la réponse ici

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
    cout << "votre score est de : " << result << "/10" << endl << endl;

    /*if(result <= 1){
        cout << "Echec !";
    }else if( result == 2){
    cout << "Perfect ! felicitation !";

    }*/

return 0;
}
