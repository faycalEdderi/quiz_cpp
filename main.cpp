#include <iostream>
#include <array>
#include <vector> //pour tableau dynamique

using namespace std;

int main()

{   vector<string>stock_answ(0);
    int result(0);
    string good_answ[] ={"b","b"};
    string user_answ;
    string question[] = {
    "1.	Quelle est le nom mascotte de Nintendo moustachu a casquette rouge :",
    "2.	Qui est le hero principal de la saga The legend of Zelda ? ",
    };

       /* string answer[0][0]= "a. Luigi";
     answer[0][1]= "b. luigi";
     answer[0][2]= "c. Yoshi";

     answer[1][0]= "a. Bowser";
     answer[1][1]= "b. Zelda";
     answer[1][2]= "c. Link";*/


     const string answer[2][3]{
        {"a. Luigi", "b. Mario", "c. Yoshi"},
        {"a. Bowser", "b. Zelda", "c. Link"},

    };


    for(int i = 0; i< sizeof(question)/sizeof(*question); i++){


        cout << question[i] << endl;

        for(int j = 0; j<3; j++){

            cout << answer[i][j] << endl ;
        }
        cin >> user_answ ;


        stock_answ.push_back(user_answ); // On ajoute une valeur a cet element on rajoute 3 elements


         cout << "la taille du tableau dynamique est : " << stock_answ.size() << endl;



    }

    for(int i=0; i<stock_answ.size(); i++){

    cout << "Question " << i <<" : " << endl;
    cout << "Bonne reponse : " << good_answ[i] << " Votre reponse : " << stock_answ[i] << endl;
         if( good_answ[i] == stock_answ[i] ){

            result++;
         }

    }
    cout << "votre score : " << result << endl;

return 0;
}
