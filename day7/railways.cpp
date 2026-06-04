#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

class Passenger {
public:
    int id;
    string name;

    Passenger(int id, string name) {
        this->id = id;
        this->name = name;
    }
};

class RailwayBooking {
private:
    vector<Passenger> confirmed;
    vector<Passenger> rac;
    vector<Passenger> waiting;

    const int CONFIRMED_LIMIT = 2;
    const int RAC_LIMIT = 2;
    const int TOTAL_TICKETS = 5;

public:

    void bookTicket(string name) {

        int id = confirmed.size() + rac.size() + waiting.size() + 1;
        Passenger p(id, name);

        if (confirmed.size() < CONFIRMED_LIMIT) {
            confirmed.push_back(p);
            cout << "Ticket Confirmed for "
                 << name << endl;
        }
        else if (rac.size() < RAC_LIMIT) {
            rac.push_back(p);
            cout << "Ticket in RAC for "
                 << name << endl;
        }
        else if ((confirmed.size() + rac.size() + waiting.size()) < TOTAL_TICKETS) {
            waiting.push_back(p);
            cout << "Added to Waiting List: "
                 << name << endl;
        }
        else {
            cout << "No Tickets Available for "
                 << name << endl;
        }
    }

    void cancelTicket(int id) {
        for (int i = 0; i < confirmed.size(); i++) {
            if (confirmed[i].id == id) {
                cout << "Cancelled Ticket of " << confirmed[i].name << endl;
                confirmed.erase(confirmed.begin() + i);

                // Move RAC -> Confirmed
                if (!rac.empty()) {
                    confirmed.push_back(rac.front());
                    rac.erase(rac.begin());

                    // Move Waiting -> RAC
                    if (!waiting.empty()) {
                        rac.push_back(waiting.front());
                        waiting.erase(waiting.begin());
                    }
                }
                return;
            }
        }

        cout << "Passenger ID not found!" << endl;
    }

    void display() {

        cout << "\n===== CONFIRMED =====\n";
        for (auto p : confirmed)
            cout << p.id << " " << p.name << endl;

        cout << "\n===== RAC =====\n";
        for (auto p : rac)
            cout << p.id << " " << p.name << endl;

        cout << "\n===== WAITING =====\n";
        for (auto p : waiting)
            cout << p.id << " " << p.name << endl;
    }
};

int main() {

    RailwayBooking system;

    system.bookTicket("Ram");
    system.bookTicket("Shyam");
    system.bookTicket("Aman");
    system.bookTicket("Ravi");
    system.bookTicket("Kiran");
    system.bookTicket("Raj"); // No ticket

    system.display();

    cout << "\nCancelling Passenger ID 1\n";
    system.cancelTicket(1);

    system.display();

    return 0;
}