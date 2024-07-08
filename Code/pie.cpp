#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> pies(n);
    for (int i = 0; i < n; ++i) {
        cin >> pies[i];
    }
    vector<int> mash;
    vector<int> pet;
    for (int i = 3; i <= n; i += 3) {
        mash.push_back(i - 1); 
    }
    for (int i = 7; i <= n; i += 7) {
        pet.push_back(i - 1); 
    }
    unordered_set<int> eaten; 
    int mashc = 0;
    int petc = 0;
    size_t ptrm = 0;
    size_t ptrp = 0;
    bool mashnow = true; 
    while (ptrm < mash.size() || ptrp < pet.size()) {
        if (mashnow) {
            if (ptrm < mash.size()) {
                int pienum = mash[ptrm];
                if (eaten.find(pienum) == eaten.end()) {
                    eaten.insert(pienum);
                    if (pies[pienum] == 1) {
                        mashc++;
                    }
                }
                ptrm++;
            }
            mashnow = false;
        } else {
            if (ptrp < pet.size()) {
                int pienum = pet[ptrp];
                if (eaten.find(pienum) == eaten.end()) {
                    eaten.insert(pienum);
                    if (pies[pienum] == 1) {
                        petc++;
                    }
                }
                ptrp++;
            }
            mashnow = true;
        }
    }
    
    cout << mashc << " " << petc << endl;
    
    return 0;
}
