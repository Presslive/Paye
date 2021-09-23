/*But:Une compagnie rémunère ses employés selon leur fonction. Ils peuvent être
• cadres (recevant un salaire hebdomadaire fixe),
• travailleurs à tarif horaire (recevant un taux horaire fixe régulier pour les 40 premières heures et un taux
horaire temps et demi soit 1.5 fois le taux horaire régulier pour les heures supplémentaires)
• travailleurs à la commission (recevant 250$ plus 5.7% de leurs ventes hebdomadaires brutes)
• travailleur à la pièce (recevant un taux fixe d'argent pour chaque article produit; chaque travailleur à la
pièce de cette compagnie ne travaille que sur un seul type d'article)
Écrivez un programme qui calcule la paie pour chaque employé. Vous ne connaissez pas à l'avance le nombre
d'employés. Chaque type d'employés possède son propre code de paie : le code de paie 1 représente les cadres, le
code de paie 2 représente les travailleurs à tarif horaire, le code de paie 3 représente les travailleurs à la commission
et le code de paie 4 représente les travailleurs à la pièce.
Utilisez une structure switch pour calculer la paie de chaque employé en fonction du code de paie de cet employé.
A l'intérieur du switch, invitez l'utilisateur à entrer les faits appropriés requis par votre programme pour calculer la
paie de chaque employé en fonction du code de paie de l'employé.*/
//Auteur:Diallo Abdoulaye 
//date:2021-09-23


#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
    setlocale(LC_ALL, "");

    //Constantes
    const float SALAIRECADREFIXE = 200;
    const float POURCENTAGEFIXE = 1.5;
    const float SALAIRETARIFHORAIRE = 19;
    const int HEUREHORAIRE = 40;
    const float SALAIRECOMISSION = 250;
    const float POURCENTAGECOMISSION = 5.7;


    //Variables

    int choix;
    float heures=0;
    float heureSupp=0;
    float PayeSupp= SALAIRETARIFHORAIRE * POURCENTAGEFIXE;
    float TotalSupp=0;
    float TotalHoraire=0;
    float PayeMin = 0;
    float HeureMin = 0;

    

    //--------Menu------//

    std::cout << "1- CADRES" << std::endl;
    std::cout << "2- TRAVAILLEURS TARIF HORAIRE" << std::endl;
    std::cout << "3- TRAVAILLEURS À LA COMISSION" << std::endl;
    std::cout << "4- TRAVAILLEUR À LA PIÈCE" << std::endl;
    std::cout << "5- Quitter" << std::endl;

    std::cout << "Quelle est votre poste ";
    cin >> choix;

    if (choix < 1 || choix >5)
    {
        std::cout << "Votre choix doit etre entre 1 et 4 " << std::endl;
        system("pause");

    }
    else
    {


        switch (choix)
        {
        case 1:
        system("cls");
           std::cout << "Votre salaire hebdomadaire fixe est de " << SALAIRECADREFIXE <<"$" <<endl;
           system("pause");
            break;
        case 2:
            system("cls");
            std::cout << "Entrez votre nombres d'heures :";
            cin>>heures;

            if (heures>HEUREHORAIRE)
            {           
                PayeMin = HEUREHORAIRE * SALAIRETARIFHORAIRE;
                    heureSupp=heures-HEUREHORAIRE;
                    
                    TotalSupp=heureSupp*PayeSupp;
            }
            else
            {
                PayeMin = heures * SALAIRETARIFHORAIRE;
            }
            
            //TotalHoraire= PayeMin *SALAIRETARIFHORAIRE;
            std::cout << PayeMin +TotalSupp << std::endl;
            system("pause");

            break;
        case 3:
            /* code */
            break;
        case 4:
            /* code */
            break;

        case 5:

            return 0;
            break;
        }




    }
    
    return 0;
}
