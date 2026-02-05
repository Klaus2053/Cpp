#include <iostream>

using namespace std;

int main() {
    int Host, Player;

    // Spieler 1 gibt eine Zahl ein
    cout << "Spieler 1: Denke dir eine Zahl: ";
    cin >> Host;

    // Eingabevalidierung (optional, aber sinnvoll)
    if (Host < 1 or Host > 100)

    {
        cout << "Bitte gib eine Zahl ein!" << endl;
        return 1; // Programm mit Fehlercode beenden
    }

    /*do while ist anscheinend ein wiederhol bis es richtig ist mit den if kommand oder so*/
do {
        cout << "Spieler 2: Rate die Zahl: ";
        cin >> Player;

        if (Player < Host)
        {
        cout << "Zu klein!" << endl;
        }


        else if (Player > Host)
        {
        cout << "Zu groß!" << endl;
        }


        else
        {
        cout << "Richtig geraten!" << endl;
        }

}
    while (Player != Host);

    return 0;
}
