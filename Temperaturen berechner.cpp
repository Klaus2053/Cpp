#include <iostream>
#include <iomanip>
using namespace std;

//Erstellt von Klaus Barth Rochol

int main() {
    int wahl;
    double temp;

    cout << "=== Temperaturberechner ===" << endl;
    cout << "1. Celsius -> Fahrenheit" << endl;
    cout << "2. Celsius -> Kelvin" << endl;
    cout << "3. Fahrenheit -> Celsius" << endl;
    cout << "4. Fahrenheit -> Kelvin" << endl;
    cout << "5. Kelvin -> Celsius" << endl;
    cout << "6. Kelvin -> Fahrenheit" << endl;
    cout << "Waehle eine Option (1-6): ";
    cin >> wahl;

    cout << "Gib die Temperatur ein: ";
    cin >> temp;

    cout << fixed << setprecision(2);

    if (wahl == 1) {
        double f = (temp * 9 / 5) + 32;
        cout << temp << " °C = " << f << " °F" << endl;
    }
    else if (wahl == 2) {
        double k = temp + 273.15;
        cout << temp << " °C = " << k << " K" << endl;
    }
    else if (wahl == 3) {
        double c = (temp - 32) * 5 / 9;
        cout << temp << " °F = " << c << " °C" << endl;
    }
    else if (wahl == 4) {
        double k = (temp - 32) * 5 / 9 + 273.15;
        cout << temp << " °F = " << k << " K" << endl;
    }
    else if (wahl == 5) {
        double c = temp - 273.15;
        cout << temp << " K = " << c << " °C" << endl;
    }
    else if (wahl == 6) {
        double f = (temp - 273.15) * 9 / 5 + 32;
        cout << temp << " K = " << f << " °F" << endl;
    }
    else {
        cout << "Ich gebe dir 6 optionen warum waehlst du eine siebte?!?!?!?" << endl;
    }

    return 0;
}
