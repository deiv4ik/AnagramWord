#include <iostream>
#include <string>
#include <map>

using namespace std;

map<char, int> ChangeToMap(const string& text) {
    map<char, int> words;

    for (const char c : text) {
        if (!text.empty()) {
            ++words[c];
        }
    }
    return words;
}

bool CheckAnagram(const string& s1, const string& s2) {
    return ChangeToMap(s1) == ChangeToMap(s2);
}

void CheckIsTrue(bool value) {
    if (value) {
        cout << "Test passed :)"s << endl;
    } else {
        cout << "Test failed :("s << endl;
    }
}

int main() {
    CheckIsTrue(CheckAnagram("tea"s, "eat"s));
    CheckIsTrue(CheckAnagram("battle"s, "beatle"s));
    CheckIsTrue(CheckAnagram("lift"s, "elevator"s));
    CheckIsTrue(CheckAnagram("ocean"s, "canoe"s));
}
