#include<iostream>

using namespace std;

int main()
{
    int quant;
    int choice;
    //Quantity
    int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qchicken = 0;
    //items sold
    int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Schicken = 0;
    // Total price of  items
    int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_chicken = 0;

// Quantity of items we have
    cout <<"\n\t Quantity of items we have";
    cout << "\n\t Rooms available ";
    cin>> Qrooms;
    cout << "\n Quantity of pasta : ";
    cin >> Qpasta;
    cout << "\n Quantity of burger : ";
    cin >> Qburger;
    cout << "\n Quantity of noodles : ";
    cin >> Qnoodles;
    cout << "\n Quantity of Shake : ";
    cin >> Qshake;
    cout << "\n Quantity of chicken-roll : ";
    cin >> Qchicken;

//  Create Menu

    cout <<"\n\t\t please select from the menu option ";
    cout << "\n\n1 Rooms";
    cout << "\n2 Pasta";
    cout << "\n3 Burger";
    cout << "\n4 Noodles";
    cout << "\n5 Shake";
    cout << "\n6 Chicken-roll";
    cout << "\n7 Information regarding sales and collection";
    cout << "\n8 Exit";

    cout << "\n\n Please Enter your choice! ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "\n\n Enter the number of rooms you want: ";

            cin>>quant;
            if(Qrooms-Srooms >= quant){
                Srooms = Srooms + quant;
                Total_rooms= (Total_rooms + quant*1200);
                cout << "\n\n\t\t" << quant << "room/rooms have been alloted to you!";
                }
                else
                {
                   cout <<"\n\t Only " << Qrooms-Srooms << "Rooms remaining in hotel ";
                   break;
                }
         case 2:
            cout << "\n\n Enter Pasta Quantity: ";

            cin>>quant;
            if(Qpasta-Spasta >= quant){
                Spasta = Spasta + quant;
                Total_pasta= (Total_pasta + quant*250);
                cout << "\n\n\t\t" << quant << "pasta is the order!";
                }
                else
                {
                   cout <<"\n\t Only " << Qpasta-Spasta << "Pasta remaining in hotel ";
                   break;
                }
          case 3:
            cout << "\n\n Enter Burger Quantity: ";

            cin>>quant;
            if(Qburger-Sburger >= quant){
                Sburger = Sburger + quant;
                Total_burger= (Total_burger + quant*120);
                cout << "\n\n\t\t" << quant << "burger is the order!";
                }
                else
                {
                   cout <<"\n\t Only " << Qburger-Sburger << "burger remaining in hotel ";
                   break;
                }
          case 4:
            cout << "\n\n Enter Noodles Quantity: ";

            cin>>quant;
            if(Qnoodles-Snoodles >= quant){
                Snoodles = Snoodles + quant;
                Total_noodles= (Total_noodles + quant*120);
                cout << "\n\n\t\t" << quant << "noodles is the order!";
                }
                else
                {
                   cout <<"\n\t Only " << Qnoodles-Snoodles << "burger remaining in hotel ";
                   break;
                }
           case 5:
            cout << "\n\n Enter Shake Quantity: ";

            cin>>quant;
            if(Qshake-Sshake >= quant){
                Sshake = Sshake + quant;
                Total_shake= (Total_shake + quant*120);
                cout << "\n\n\t\t" << quant << "shake is the order!";
                }
                else
                {
                   cout <<"\n\t Only " << Qshake-Sshake << "shake remaining in hotel ";
                   break;
                }
           case 6:
            cout << "\n\n Enter Chicken Quantity: ";

            cin>>quant;
            if(Qchicken-Schicken >= quant){
                Schicken = Schicken + quant;
                Total_chicken= (Total_chicken + quant*120);
                cout << "\n\n\t\t" << quant << "Chicken is the order!";
                }
                else
                {
                   cout <<"\n\t Only " << Qchicken-Schicken << "Chicken remaining in hotel ";
                   break;
                }
           case 7:
            cout << "\n\t\t Details of sales and collection";
            cout <<"\n\n Number of rooms we had : " << Qrooms;
            cout << "\n\n Number of rooms we gave for rent " << Srooms;
            cout << "\n\n Remaining rooms : " << Qrooms-Srooms;
            cout << "\n\n Total rooms collection for the day : " <<Total_rooms;


            cout <<"\n\n Number of Pastas we had : " << Qpasta;
            cout << "\n\n Number of Pastas we sold " << Spasta;
            cout << "\n\n Remaining Pastas : " << Qpasta-Spasta;
            cout << "\n\n Total Pasta collection for the day : " <<Total_pasta;

            cout <<"\n\n Number of Burgers we had : " << Qburger;
            cout << "\n\n Number of Burgers we sold " << Sburger;
            cout << "\n\n Remaining Burgers : " << Qburger-Sburger;
            cout << "\n\n Total Burger collection for the day : " <<Total_burger;

            cout <<"\n\n Number of noodles we had : " << Qnoodles;
            cout << "\n\n Number of noodles we sold " << Snoodles;
            cout << "\n\n Remaining noodles : " << Qnoodles-Snoodles;
            cout << "\n\n Total noodles collection for the day : " <<Total_noodles;

            cout <<"\n\n Number of shake we had : " << Qshake;
            cout << "\n\n Number of shake we sold " << Sshake;
            cout << "\n\n Remaining shake : " << Qshake-Sshake;
            cout << "\n\n Total shake collection for the day : " <<Total_shake;

            cout <<"\n\n Number of Chicken-roll we had : " << Qchicken;
            cout << "\n\n Number of Chicken-roll we sold " << Schicken;
            cout << "\n\n Remaining Chicken-roll : " << Qchicken-Schicken;
            cout << "\n\n Total Chicken-roll collection for the day : " <<Total_chicken;

           case 8:
               exit(0);

           default:
               cout << "\n Please select the numbers mentioned above!";
    }

}
