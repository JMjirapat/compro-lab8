#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string urname, movie, date, something;
    int uid;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << endl;
    cout << "?????: ";
    getline(cin, urname);
    cout << "Fahsai: Wow!!! " << urname << " is a really cool name." << endl;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << endl;
    cout << urname << " : ";
    cin >> uid;
    cin.ignore();
    string gear = to_string(uid-120000000);
    cout << "Fahsai: I think you may be GEAR "<< gear[0] << gear[1] << ". I have a free movie ticket for you." << endl;
    cout << "Fahsai: Let's go to the cinema together!!!" << endl;
    cout << "Fahsai: What movie do you want to watch?" << endl;
    cout << urname << " : ";
    getline(cin, movie);
    cout << "Fahsai: So....which day are you free to go with me?" << endl;
    cout << urname << " : ";
    getline(cin, date);
    cout << "Fahsai: " << date << "....that is OK!!! I'm looking forward to watching " << movie << " with you." << endl;
    cout << urname << " : ";
    getline(cin, something);
    cout << "Fahsai: 555+ see you " << date << ". Bye Bye \\(^ ^)/" << endl;
    cin.clear();
    return 0;
}

//Dialog of the first example is given below.

/*
Fahsai: Sawadee ka...Can you tell me your name?
?????: Luke Skywalker
Fahsai: Wow!!! Luke Skywalker is a really cool name.
Fahsai: I think you are an Engineering student. What is your student ID?
Luke Skywalker: 590610999
Fahsai: I think you may be GEAR 47. I have a free movie ticket for you.
Fahsai: Let's go to the cinema together!!!
Fahsai: What movie do you want to watch?
Luke Skywalker: Star Wars VII
Fahsai: So....which day are you free to go with me?
Luke Skywalker: Next Monday
Fahsai: Next Monday....that is OK!!! I'm looking forward to watching Star Wars VII with you.
Luke Skywalker: May the Force be with you krub
Fahsai: 555+ see you Next Monday. Bye Bye \(^ ^)/
*/
