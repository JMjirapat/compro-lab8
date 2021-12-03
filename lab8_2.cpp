#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string urname, movie, day_mov, something;
    int uid;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << endl;
    cout << "?????: ";
    getline(cin, urname);
    cout << "Fahsai: Wow!!! " << urname << " is a really cool name." << endl;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << endl;
    cout << urname << ": ";
    cin >> uid;
    cin.ignore();
    cout << "Fahsai: I think you may be GEAR "<< uid/10000000 - 12 << ". I have a free movie ticket for you." << endl;
    cout << "Fahsai: Let's go to the cinema together!!!" << endl;
    cout << "Fahsai: What movie do you want to watch?" << endl;
    cout << urname << ": ";
    getline(cin, movie);
    cout << "Fahsai: So....which day are you free to go with me?" << endl;
    cout << urname << ": ";
    getline(cin, day_mov);
    cout << "Fahsai: " << day_mov << "....that is OK!!! I'm looking forward to watching " << movie << " with you." << endl;
    cout << urname << ": ";
    getline(cin, something);
    cout << "Fahsai: 555+ see you " << day_mov << ". Bye Bye \\(^ ^)/" << endl;
    return 0;
}

