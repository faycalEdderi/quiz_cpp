#include <iostream>
#include <array>
#include <vector> //pour tableau dynamique

using namespace std;

int main()

{   vector<string>stock_answ(0);
    int result(0);
    int question_nb(1);
// !! NE PAS LIRE LA LIGNE EN DESSOUS AVANT DE JOUER !!
    string good_answ[] ={"b","b"}; // (stock les bonnes reponses !)
//////////////////////////////////////////////////////////////////////
    string user_answ;
    string question[] = { // Tableau quit stock les questions
    "1.	Quelle est le nom de la mascotte moustachu de Nintendo a casquette rouge :",
    "2.	Qui est le hero principal de la saga The legend of Zelda ? ",
    };


     const string answer[2][3]{ // Stockage des réponses possibles
        {"a. Luigi", "b. Mario", "c. Yoshi"},
        {"a. Bowser", "b. Zelda", "c. Link"},

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
    cout << "votre score de : " << result << "/2" << endl << endl;

    if(result <= 1){
        cout << "Echec !";
    }else if( result == 2){
    cout << "Perfect ! felicitation !";

    }

return 0;
}
