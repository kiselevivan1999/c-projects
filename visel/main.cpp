#include <iostream>
#include <string>
#include <algorithm>
#include<cstring>
using namespace std;

//void line(char mass_word[],char mass_1[]);
void out_put(char mass_1[]);

void play ()
{   char mass_word[] = "word";
    char mass_1[strlen(mass_word)]="____";
    char mass_2;
    int count = 0;
    int mistakes = 0;

    cout<<endl<<mass_1;

    out_put(mass_1);

    for(int k=0; k<100; k++)
    {
        if (count == 4)
        {
         cout<<endl<<"You win!!!"<<endl;
         break;
        }
      cout<<endl<<"enter later: ";    //вводим с клаввиатуры букву
      cin>>mass_2;

      for(int j=0; j<strlen(mass_word); j++)
        {
            if(mass_2==mass_word[j])     //если в слове есть введЄнна€ буква, то вместо прочерка мы увидем эту букву
            {   count+=1;

                if(mass_1[j]== mass_2)
                    count-=1;

              mass_1[j] = mass_word[j];
            out_put(mass_1);

              cout<<endl;
            }
        }
        string it = find(mass_1, mass_1+strlen(mass_word), mass_2);
        if (it == mass_1+strlen(mass_word))
            {mistakes += 1;
             if(mistakes>9)
                {
                 cout<<"you lost"<<endl;
                 exit(0);
                }

            }
        cout << "Col mist: " << mistakes<<endl;
    }
}



/*void line(char mass_word[],char mass_1[strlen(mass_word)])
{
    for (int i=0; i<strlen(mass_word); i++)
        mass_1[i]="_";

}*/


void out_put(char mass_1[])
{
    for (int i=0; i<4; i++)
    {
        cout<<mass_1[i];
    }
}

int main()
{
    setlocale(LC_ALL, "Rus");
    cout<<"--------------------ƒќЅ–ќ ѕќ∆јЋќ¬ј“№----------------------------";
    cout<<endl<<"у вас есть 10 жизней, чтобы отгадать слово, поехали!!!";
    play();

    return 0;
}
