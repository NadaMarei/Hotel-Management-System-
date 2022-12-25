#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    int quantity , choice;
    /// Quantity of items in the hotel
    int Qrooms=0 , Qpasta=0, Qburger=0, Qnoodles=0, Qrice=0 , Qchicken=0;
    /// Quantity of items sold
    int Srooms=0 , Spasta=0, Sburger=0, Snoodles=0, Srice=0 , Schicken=0;
    /// price of the total price of each of these items
    int total_rooms=0,total_pasta=0, total_burger=0, total_noodles=0, total_rice=0 , total_chicken=0;

    cout <<"\n\t Quantity of items: ";
    cout <<"\n Rooms Available: ";
    cin >> Qrooms;
    cout << "\n Quantity of pasta: ";
    cin >> Qpasta;
    cout << "\n Quantity of burger: ";
    cin >> Qburger;
    cout << "\n Quantity of noodles: ";
    cin >> Qnoodles;
    cout << "\n Quantity of rice: ";
    cin >> Qrice;
    cout << "\n Quantity of chicken-roll: ";
    cin >> Qchicken;

    m:
    cout << "\n\t\t\t Please select from the menu options: ";
    cout << "\n\n 1) Rooms";
    cout << "\n 2) Pasta " ;
    cout << "\n 3) Burger " ;
    cout << "\n 4) Noodles " ;
    cout << "\n 5) Rice " ;
    cout << "\n 6) Chicken-roll " ;
    cout << "\n 7) Information regarding sales and collection " ;
    cout << "\n 8) Exit \n" ;

    cout << "\n\n Please Enter Your Choice! " ;
    cin >> choice;

    switch(choice){
        case 1:
            cout << "\n Enter the number of rooms you want: ";
            cin >> quantity;

            if(Qrooms - Srooms >= quantity){
                Srooms = Srooms + quantity;
                total_rooms = total_rooms +(quantity*2000);
                cout << "\n\t\t" << quantity << " room/rooms have been allotted to you! \n";
            }else
                cout << "\n\t Only " << Qrooms-Srooms <<" rooms remaining in hotel \n";
                break;



            case 2:
            cout << "\n Enter pasta quantity: ";
            cin >> quantity;

            if(Qpasta - Spasta >= quantity){
                Spasta = Spasta + quantity;
                total_pasta = total_pasta +(quantity*100);
                cout << "\n\t\t" << quantity << " Pasta is the order! ";
            }else
                cout << "\n\t Only " << Qpasta-Spasta <<" Pasta remaining in hotel \n";
                break;


            case 3:
            cout << "\n Enter burger quantity: ";
            cin >> quantity;

            if(Qburger - Sburger >= quantity){
                Sburger = Sburger + quantity;
                total_burger = total_burger +(quantity*120);
                cout << "\n\t\t" << quantity << " Burger is the order! ";
            }else
                cout << "\n\t Only " << Qburger - Sburger <<" burger remaining in hotel \n";
                break;


            case 4:
            cout << "\n Enter noodles quantity: ";
            cin >> quantity;

            if(Qnoodles - Snoodles >= quantity){
                Snoodles = Snoodles + quantity;
                total_noodles = total_noodles +(quantity*20);
                cout << "\n\t\t" << quantity << " Noodles is the order! ";
            }else
                cout << "\n\t Only " << Qnoodles - Snoodles <<" noodles remaining in hotel \n";
                break;



            case 5:
            cout << "\n Enter rice quantity: ";
            cin >> quantity;

            if(Qrice - Srice >= quantity){
                Srice = Srice + quantity;
                total_rice = total_rice +(quantity*30);
                cout << "\n\t\t" << quantity << " Rice is the order! ";
            }else
                cout << "\n\t Only " << Qrice - Srice <<" rice remaining in hotel \n";
                break;


            case 6:
            cout << "\n Enter chicken-roll quantity:";
            cin >> quantity;

            if(Qchicken - Schicken >= quantity){
                Schicken = Schicken + quantity;
                total_chicken = total_chicken +(quantity*150);
                cout << "\n\t\t" << quantity << " Chicken is the order! ";
            }else
                cout << "\n\t Only " << Qchicken - Schicken <<" chicken remaining in hotel \n";
                break;



            case 7:
                cout <<"\n\t\t details of sales and collection  ";
                cout <<"\n\n Number of rooms we had : " << Qrooms;
                cout <<"\n Number of rooms we gave for rent : " << Srooms;
                cout <<"\n Remaining rooms : " << Qrooms - Srooms;
                cout <<"\n Total rooms collection for the day : " << total_rooms;

                cout <<"\n\n Quantity of Pastas we had : " << Qpasta;
                cout <<"\n Quantity of Pastas we sold : " << Spasta;
                cout <<"\n Remaining Pastas : " << Qpasta - Spasta;
                cout <<"\n Total pasta collection for the day : " << total_pasta;

                cout <<"\n\n Quantity of burger we had : " <<Qburger;
                cout <<"\n Quantity of burger we sold : " << Sburger;
                cout <<"\n Remaining burger : " << Qburger - Sburger;
                cout <<"\n Total burger collection for the day : " << total_burger;

                cout <<"\n\n Quantity of noodles we had : " <<Qnoodles;
                cout <<"\n Quantity of noodles we sold : " << Snoodles;
                cout <<"\n Remaining noodles : " << Qnoodles - Snoodles;
                cout <<"\n Total noodles collection for the day : " << total_noodles;

                cout <<"\n\n Quantity of rice we had : " <<Qrice;
                cout <<"\n Quantity of rice we sold : " << Srice;
                cout <<"\n Remaining rice : " << Qrice - Srice;
                cout <<"\n Total rice collection for the day : " << total_rice;

                cout <<"\n\n Quantity of chicken-roll we had : " <<Qchicken;
                cout <<"\n Quantity of chicken-roll we sold : " << Schicken;
                cout <<"\n Remaining chicken-roll : " << Qchicken - Schicken;
                cout <<"\n Total chicken-roll collection for the day : " << total_chicken;

                cout <<"\n\n\n Total collection for the day : " << total_chicken + total_rice + total_noodles + total_burger + total_pasta + total_rooms  << endl;
                break;

            case 8:
                exit(0);

                default :
                cout << "\n Please select from the numbers mentioned above! ";
    }
    goto m;
}
