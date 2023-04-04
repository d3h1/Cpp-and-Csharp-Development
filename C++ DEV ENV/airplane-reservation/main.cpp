#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

// Declaring this function globally so we can use it everywhere
void mainMenu();

// Management class 
class Management  
{
    // Calling function under public scope of the management constructor
    public:

        Management()
        {
            mainMenu();
        }
};

// Details Class :: Using Inheritance
class  details
{
    public:
        // Statics wont allow any change down the line
        static string name;
        static int customerId;
        // Regular changeable variables
        int phoneNo;
        int age;
        char arr[100];
        string address;

        // Information function will allow the customer to enter their details
        void information()
        {
            cout <<"\nPlease Enter the customer ID: ";
            cin >> customerId;
            cout << "\nPlease Enter you name: ";
            cin >> name;
            cout << "\nPlease enter your age: ";
            cin >> age;
            cout << "\nPlease enter you address: ";
            cin >> address;
            cout << "\nYour details are safe with us!\n" << endl;     
        }
};

int details::customerId;
string details::name;

// Registration class :: Using Inheritance
class registration
{
    public:
        static int choice;
        int choice1;
        int back;
        static float charges;

        void flights()
        {
            string flightN[]={"Dubai", "Canada", "UK", "USA", "Australia", "Europe"};

            // Using a for loop to print out destinations for the user
            for(int a = 0; a < 6; a++)
            {
                cout << (a + 1) << " -flight to " << flightN[a] << endl;
            }

            cout << "\n Welcome to XYZ Airlines!" << endl;
            cout << "\n Please press the number related to the flight you would like to take with us today." << endl;
            cin >> choice;

            switch (choice)
            {
                case 1:
                    {
                        cout<< "______________Welcome to Dubai Emirates_______________\n"<<endl;
                        cout << "We are glad you chose us! \n"<<endl;
                        cout << "Following are the flights: \n"<<endl;
                        cout << "1.DUB - 498" << endl << "\t08-24-28 8:09PM 8hours $1000" <<endl;
                        cout << "2.DUB - 675" << endl << "\t08-25-28 12:09AM 12hours $785" <<endl;
                        cout << "3.DUB - 309" << endl << "\t08-23-28 10:04AM 10hours $1499" <<endl;

                        cout << "\n Select the flight you want to book: ";
                        cin >> choice1;
                        if (choice1==1)
                        {
                            charges=1000;
                            cout << "\nYou have successfully book flight DUB - 498!" << endl;
                            cout << "You can now go back to the Main Menu and receive your ticket." << endl;
                        }
                        else if (choice1==2)
                        {
                            charges=785;
                            cout << "\nYou have successfully book flight DUB - 675!" << endl;
                            cout << "You can now go back to the Main Menu and receive your ticket." << endl;
                        }
                        else if (choice1==3)
                        {
                            charges=1499;
                            cout << "\nYou have successfully book flight DUB - 309!" << endl;
                            cout << "You can now go back to the Main Menu and receive your ticket." << endl;
                        }
                        else 
                        {
                            cout << "\n You did not choose a flight! ERROR!" << endl;
                            flights();
                        }

                        cout << "Press any key to go back to the Main Menu" << endl;
                        cin >> back;
                        if (back==1)
                        {
                            mainMenu();
                        }
                        else 
                        {
                            mainMenu();
                        }
                    }

                case 2:
                    {
                        cout<< "______________Welcome to Fly  Canada_______________\n"<<endl;
                        cout << "We are glad you chose us! \n"<<endl;
                        cout << "Following are the flights: \n"<<endl;
                        cout << "1.CAN - 234" << endl << "\t08-24-28 8:09PM 8hours $1231" <<endl;
                        cout << "2.CAN - 432" << endl << "\t08-25-28 12:09AM 12hours $1232" <<endl;
                        cout << "3.CAN - 525" << endl << "\t08-23-28 10:04AM 10hours $1111" <<endl;

                        cout << "\n Select the flight you want to book: ";
                        cin >> choice1;
                        if (choice1==1)
                        {
                            charges=1231;
                            cout << "\nYou have successfully book flight CAN - 234!" << endl;
                            cout << "You can now go back to the Main Menu and receive your ticket." << endl;
                        }
                        else if (choice1==2)
                        {
                            charges=1232;
                            cout << "\nYou have successfully book flight CAN - 432!" << endl;
                            cout << "You can now go back to the Main Menu and receive your ticket." << endl;
                        }
                        else if (choice1==3)
                        {
                            charges=1111;
                            cout << "\nYou have successfully book flight CAN - 525" << endl;
                            cout << "You can now go back to the Main Menu and receive your ticket." << endl;
                        }
                        else 
                        {
                            cout << "\n You did not choose a flight! ERROR!" << endl;
                            flights();
                        }

                        cout << "Press any key to go back to the Main Menu" << endl;
                        cin >> back;
                        if (back==1)
                        {
                            mainMenu();
                        }
                        else 
                        {
                            mainMenu();
                        }  
                    }

                case 3:
                    {
                        cout<< "______________Welcome to British Airlines_______________\n"<<endl;
                        cout << "We are glad you chose us! \n"<<endl;
                        cout << "Following are the flights: \n"<<endl;
                        cout << "1.BRIT - 234" << endl << "\t08-24-28 8:09PM 8hours $1561" <<endl;
                        cout << "2.BRIT - 432" << endl << "\t08-25-28 12:09AM 12hours $1311" <<endl;
                        cout << "3.BRIT - 525" << endl << "\t08-23-28 10:04AM 10hours $1142" <<endl;

                        cout << "\n Select the flight you want to book: ";
                        cin >> choice1;
                        if (choice1==1)
                        {
                            charges=1561;
                            cout << "\nYou have successfully book flight BRIT - 234!" << endl;
                            cout << "You can now go back to the Main Menu and receive your ticket." << endl;
                        }
                        else if (choice1==2)
                        {
                            charges=1311;
                            cout << "\nYou have successfully book flight BRIT - 432!" << endl;
                            cout << "You can now go back to the Main Menu and receive your ticket." << endl;
                        }
                        else if (choice1==3)
                        {
                            charges=1142;
                            cout << "\nYou have successfully book flight BRIT - 525" << endl;
                            cout << "You can now go back to the Main Menu and receive your ticket." << endl;
                        }
                        else 
                        {
                            cout << "\n You did not choose a flight! ERROR!" << endl;
                            flights();
                        }

                        cout << "Press any key to go back to the Main Menu" << endl;
                        cin >> back;
                        if (back==1)
                        {
                            mainMenu();
                        }
                        else 
                        {
                            mainMenu();
                        }
                    }

                case 4:
                    {
                        cout<< "______________Welcome to American Airways_______________\n"<<endl;
                        cout << "We are glad you chose us! \n"<<endl;
                        cout << "Following are the flights: \n"<<endl;
                        cout << "1.AMER - 412" << endl << "\t08-24-28 8:09PM 8hours $700" <<endl;
                        cout << "2.AMER - 543" << endl << "\t08-25-28 12:09AM 12hours $1050" <<endl;
                        cout << "3.AMER - 789" << endl << "\t08-23-28 10:04AM 10hours $1231" <<endl;

                        cout << "\n Select the flight you want to book: ";
                        cin >> choice1;
                        if (choice1==1)
                        {
                            charges=700;
                            cout << "\nYou have successfully book flight AMER - 412!" << endl;
                            cout << "You can now go back to the Main Menu and receive your ticket." << endl;
                        }
                        else if (choice1==2)
                        {
                            charges=1050;
                            cout << "\nYou have successfully book flight AMER - 543!" << endl;
                            cout << "You can now go back to the Main Menu and receive your ticket." << endl;
                        }
                        else if (choice1==3)
                        {
                            charges=1231;
                            cout << "\nYou have successfully book flight AMER - 789" << endl;
                            cout << "You can now go back to the Main Menu and receive your ticket." << endl;
                        }
                        else 
                        {
                            cout << "\n You did not choose a flight! ERROR!" << endl;
                            flights();
                        }

                        cout << "Press any key to go back to the Main Menu" << endl;
                        cin >> back;
                        if (back==1)
                        {
                            mainMenu();
                        }
                        else 
                        {
                            mainMenu();
                        }
                    }

                case 5:
                    {
                        cout<< "______________Welcome to Aussie Airlines_______________\n"<<endl;
                        cout << "We are glad you chose us! \n"<<endl;
                        cout << "Following are the flights: \n"<<endl;
                        cout << "1.AUSI - 413" << endl << "\t08-24-28 8:09PM 8hours $432" <<endl;
                        cout << "2.AUSI - 544" << endl << "\t08-25-28 12:09AM 12hours $231" <<endl;
                        cout << "3.AUSI - 790" << endl << "\t08-23-28 10:04AM 10hours $542" <<endl;

                        cout << "\n Select the flight you want to book: ";
                        cin >> choice1;
                        if (choice1==1)
                        {
                            charges=432;
                            cout << "\nYou have successfully book flight AUSI - 413!" << endl;
                            cout << "You can now go back to the Main Menu and receive your ticket." << endl;
                        }
                        else if (choice1==2)
                        {
                            charges=231;
                            cout << "\nYou have successfully book flight AUSI - 544!" << endl;
                            cout << "You can now go back to the Main Menu and receive your ticket." << endl;
                        }
                        else if (choice1==3)
                        {
                            charges=542;
                            cout << "\nYou have successfully book flight AUSI - 790" << endl;
                            cout << "You can now go back to the Main Menu and receive your ticket." << endl;
                        }
                        else 
                        {
                            cout << "\n You did not choose a flight! ERROR!" << endl;
                            flights();
                        }

                        cout << "Press any key to go back to the Main Menu" << endl;
                        cin >> back;
                        if (back==1)
                        {
                            mainMenu();
                        }
                        else 
                        {
                            mainMenu();
                        }
                    }

                case 6:
                    {
                        cout<< "______________Welcome to EURO Flights_______________\n"<<endl;
                        cout << "We are glad you chose us! \n"<<endl;
                        cout << "Following are the flights: \n"<<endl;
                        cout << "1.EURO - 231" << endl << "\t08-24-28 8:09PM 8hours $1444" <<endl;
                        cout << "2.EURO - 321" << endl << "\t08-25-28 12:09AM 12hours $1020" <<endl;
                        cout << "3.EURO - 123" << endl << "\t08-23-28 10:04AM 10hours $1423" <<endl;

                        cout << "\n Select the flight you want to book: ";
                        cin >> choice1;
                        if (choice1==1)
                        {
                            charges=1444;
                            cout << "\nYou have successfully book flight EURO - 231!" << endl;
                            cout << "You can now go back to the Main Menu and receive your ticket." << endl;
                        }
                        else if (choice1==2)
                        {
                            charges=1020;
                            cout << "\nYou have successfully book flight EURO - 321!" << endl;
                            cout << "You can now go back to the Main Menu and receive your ticket." << endl;
                        }
                        else if (choice1==3)
                        {
                            charges=1423;
                            cout << "\nYou have successfully book flight EURO - 123" << endl;
                            cout << "You can now go back to the Main Menu and receive your ticket." << endl;
                        }
                        else 
                        {
                            cout << "\n You did not choose a flight! ERROR!" << endl;
                            flights();
                        }

                        cout << "Press any key to go back to the Main Menu" << endl;
                        cin >> back;
                        if (back==1)
                        {
                            mainMenu();
                        }
                        else 
                        {
                            mainMenu();
                        }
                    }
                    default: 
                    {
                        cout << "Invalid input, Shifting you back to the Main Menu!" << endl;
                        mainMenu();
                        break;
                    }
            }
        }
};

float registration::charges;
int registration::choice;

// Ticket class using inheritance with the ability to call back from previous classes 
class ticket : public registration, details
{
    public:

        void Bill()
        {
            string destination="";
            ofstream outf("records.txt");
            {
                outf << "________________XYZ Airlines________________" << endl;
                outf << "___________________Ticket___________________" << endl;
                outf << "____________________________________________" << endl;
                
                outf << "Customer ID: " << details::customerId << endl; 
                outf << "Customer Name: " << details::name<< endl; 
                outf << "\tDescription: " << endl << endl; 
                
                if(registration::choice==1)
                {
                    destination="Dubai";
                }
                else if(registration::choice==2)
                {
                    destination="Canada";
                }
                else if(registration::choice==3)
                {
                    destination="UK";
                }
                else if(registration::choice==4)
                {
                    destination="USA";
                }
                else if(registration::choice==5)
                {
                    destination="Australia";
                }
                else if(registration::choice==6)
                {
                    destination="Europe";
                }
                
                outf << "Destination: \t\t" << destination << endl;
                outf << "Flight Cost: \t\t" << registration::charges << endl;
            }
            outf.close();
        }

            void dispBill()
            {
                ifstream ifs("records.txt");
                {
                    if(!ifs)
                    {
                        cout << "File error!";
                    }
                    while(!ifs.eof())
                    {
                        ifs.getline(arr, 100);
                        cout << arr <<endl;
                    }
                }
                ifs.close();
            }
};


void mainMenu()
{
    int lchoice;
    int schoice;
    int back;

    // This is our table layout that the user will see
    cout << "\t             XYZ Airlines \n"<< endl;
    cout << "\t______________Main Menu________________" << endl;
    cout << "\t_______________________________________" << endl;
    cout << "\t|\t\t\t\t\t\t\t|" << endl;
    cout << "\t|\t Press 1 to add the Customer Details     \t|" << endl;
    cout << "\t|\t Press 2 for Flight Registration         \t|" << endl;
    cout << "\t|\t Press 3 for Tickets and Charges         \t|" << endl;
    cout << "\t|\t Press 4 to Exit                         \t|" << endl;
    cout << "\t|\t\t\t\t\t\t\t|" << endl;
    cout << "\t_______________________________________" << endl;

    // Now we will be able to check our input system
    cout<<"Enter the choice: ";
    cin>>lchoice;

    // Our functions that we will call
    details d;
    registration r;
    ticket t;

    switch(lchoice)
    {
        case 1:
            {
                cout << "________________Customers________________\n" << endl;
                d.information();
                cout << "Press any key to go back to the Main Menu ";
                cin >> back;

                if(back == 1)
                {
                    mainMenu();
                }
                else 
                {
                    mainMenu();
                }
                break;
            }
        case 2:
            {
                cout << "__________Book a Flight Here_____________\n" << endl;
                r.flights();
                break;
            }
        case 3:
            {
                cout << "_____________Get you ticket!_____________\n" << endl;
                t.Bill();
                cout << "Your ticket is printed! Here you . . .\n" << endl;
                cout << "Press 1 to display your ticket: ";
                cin >> back;
                if(back==1)
                {
                    t.dispBill();
                    cout << "Press any key to go back to Main Menu";
                    cin >> back;
                    if (back==1)
                    {
                        mainMenu();
                    }
                    else
                    {
                        mainMenu();
                    }
                }
                else
                {
                    mainMenu();
                }
                break;
            }
        case 4:
            {
                cout << "\n\n\t_____________Thank You!_____________\n" << endl;
                break;
            }

        default:
            {
                cout << "Invalid Input, Please Try Again!\n" << endl;
                mainMenu();
                break;
            }
    }
}



// Defining the main function that will include our classes
int main()
{
    Management Mobj;
    return 0;
}