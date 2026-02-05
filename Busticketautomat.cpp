
#include <iostream>
#include <chrono>
#include <thread>
#include <iomanip>
using namespace std;


using namespace std;

int main()
{
	// intro
	cout << "Hallo Willkommen zur Deutsche Bahn! Bitte Warten sie einen moment... \n" << endl;

	for (int i = 3; i > 0; --i)
	{
		// Printing the remaining seconds
		cout << i << " seconds remaining" << endl;

		// Waiting for 1 second
		this_thread::sleep_for(chrono::seconds(1));
	}

	//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
		 //ticketmenge

	float ticket;
	cout << " \n Bitte Geben sie ihren Zielort ein: \n (1) Hamburg 9.99 pro person \n (2) Potsdam 6.99 pro person \n Hier eingeben: ";
	cin >> ticket;

	if (ticket == 1)
	{
		ticket = 9.99;
	}

	else if (ticket == 2)
	{
		ticket = 6.99;
	}

	else if (ticket != 1 && ticket != 2)
	{
		do {
			cout << "\n bitte geben sie eins von den angegebenen Optionen an \n Bitte Geben sie ihren Zielort ein: \n (1) Hamburg 9.99 pro person \n (2) Potsdam 6.99 pro person \n Hier eingeben: ";
			cin >> ticket;
		} while (ticket != 1 && ticket != 2);
	}



	//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------



		// menge an tickets
	int child;
	int adult;
	int teen;
	int elder;
	float groupdiscount;

	cout << " \n Wie viele Kinder (bis 12J)?: ";
	cin >> child;

	cout << " \nWie viele Jugendliche(bis 18)?: ";
	cin >> teen;

	cout << " \nWie viele Erwachsene(bis 64)?: ";
	cin >> adult;

	cout << " \nWie viele Senioren(ab 65)?: ";
	cin >> elder;

	int people = (child + adult + teen + elder);

    if (people <= 0) {
	    do {
		 cout << "\nBitte Warten sie einen moment... \n" << endl;

		for (int i = 3; i > 0; --i)
		{
			// Printing the remaining seconds
			cout << i << " seconds remaining" << endl;

			// Waiting for 1 second
			this_thread::sleep_for(chrono::seconds(1));
		}

		cout << " \n Wie viele Kinder (bis 12J)?: ";
		cin >> child;

		cout << " \nWie viele Jugendliche(bis 18)?: ";
		cin >> teen;

		cout << " \nWie viele Erwachsene(bis 64)?: ";
		cin >> adult;

		cout << " \nWie viele Senioren(ab 65)?: ";
		cin >> elder;

		people = (child + adult + teen + elder);

	    } while (people <= 0);
        }
	


     else if (people >= 1 && people <= 4)
	{
	 groupdiscount = (ticket * (child * 0.5)) + (ticket * (teen * 0.75)) + (ticket * adult) + (ticket * (elder * 0.8));
	}

	else if (people >= 5)
	{
	groupdiscount = ticket * (child * 0.5 + teen * 0.75 + adult + elder * 0.8) * 0.8;
	}

	else if (people >= 10)
	{
	groupdiscount = ((ticket * (child * 0.5 + teen * 0.75 + adult + elder * 0.8)) * 0.7);
	}

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	float fulltrip;
	cout << "Wuerden sie gerne eine Hin- und Rueckfahrt kaufen? \n (Ja=1/Nein=0): ";
	cin >> fulltrip;

	if (fulltrip == 1)
	{
		fulltrip = ((groupdiscount * 2) * 0.95);
	}

	else if (fulltrip == 0)
	{
		fulltrip = groupdiscount;
	}

	else
	{
		do {
			cout << "\nBitte Warten sie einen moment... \n" << endl;

			for (int i = 3; i > 0; --i)
			{
				// Printing the remaining seconds
				cout << i << " seconds remaining" << endl;

				// Waiting for 1 second
				this_thread::sleep_for(chrono::seconds(1));
			}
		cout << "Wuerden sie gerne eine Hin- und Rueckfahrt kaufen? \n (Ja=1/Nein=0): ";
		cin >> fulltrip;
		} while (fulltrip != 0 && fulltrip != 1);
	}            

	cout << "\nGesamtpreis: " << setprecision(4) << fulltrip << " Euro bitte" << endl;
	                                
	
	return 0;
	
}


	









