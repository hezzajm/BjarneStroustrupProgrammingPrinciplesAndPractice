#include <iostream>
#include <string>

using namespace std;

int main() {
    string first_name;
    string friend_name;
    char friend_sex = 0;

    cout << "What is your name?" << endl;
    cin >> first_name;

    cout << "Dear " <<
    first_name << ", how are you?" << std::endl;

    cout << "Please name another friend" << endl;
    cin >> friend_name;

    cout << "Have you seen " << friend_name << " lately?" << endl;
    cout << "Enter m if the friend is male and an f is the friend is female" << endl;
    cin >> friend_sex;

    if(friend_sex == 'm'){
        cout << "If you see " << friend_name << " please ask him to call me" << endl;
    }

    if(friend_sex == 'f'){
        cout << "If you see " << friend_name << "Please ask hem to call me";
    }
    int age = 0;
    cout << "\nHow old are you?" << endl;
    cin >> age;
    if(age < 0 || age > 110){
        throw std::invalid_argument("you're kidding");
    }

    cout << "I hear you just had a birthday and you are " << age << " years old" << endl;

    if(age < 12){
        cout << "Next year you will be " << age +1 << endl;
    }
    if(age > 17){
        cout << "Next year you will be able to vote" << endl;
    }

    if(age > 70){
        cout << "I hope you are enjoying retirement" << endl;
    }
    cout << "Yours sincerely,\n\n" << "Henry" << endl;


    return 0;
}
