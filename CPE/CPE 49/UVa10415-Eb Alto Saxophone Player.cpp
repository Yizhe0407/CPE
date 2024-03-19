#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

vector<int> count_finger_presses(const string& song) {
    vector<int> fingers(11, 0); // Index 0 is not used, so we have 11 fingers
    vector<int> last_press(11, 0);

    for (char note : song) {
        vector<int> press;
        int finger_press = 0;
        switch (note) {
            case 'c':
                press = {2, 3, 4, 7, 8, 9, 10};
                break;
            case 'd':
                press = {2, 3, 4, 7, 8, 9};
                break;
            case 'e':
                press = {2, 3, 4, 7, 8};
                break;
            case 'f':
                press = {2, 3, 4, 7};
                break;
            case 'g':
                press = {2, 3, 4};
                break;
            case 'a':
                press = {2, 3};
                break;
            case 'b':
                press = {2};
                break;
            case 'C':
                press = {3};
                break;
            case 'D':
                press = {1, 2, 3, 4, 7, 8, 9};
                break;
            case 'E':
                press = {1, 2, 3, 4, 7, 8};
                break;
            case 'F':
                press = {1, 2, 3, 4, 7};
                break;
            case 'G':
                press = {1, 2, 3, 4};
                break;
            case 'A':
                press = {1, 2, 3};
                break;
            case 'B':
                press = {1, 2};
                break;
        }

        for (int p : press) {
            if (last_press[p] == 0) {
                fingers[p]++;
            }
        }

        last_press.assign(11, 0);
        for (int p : press) {
            last_press[p] = 1;
        }
    }

    return vector<int>(fingers.begin() + 1, fingers.end()); // Exclude the unused index 0
}

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after the integer

    for (int i = 0; i < t; ++i) {
        string song;
        getline(cin, song);
        vector<int> result = count_finger_presses(song);
        for (int j = 0; j < result.size(); ++j) {
            cout << result[j];
            if (j != result.size() - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
