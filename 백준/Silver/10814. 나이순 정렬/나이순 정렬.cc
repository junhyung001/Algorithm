#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

struct member {
    int age;
    string name;
};

int main(){
    int n;
    cin >> n;

    vector<member> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i].age >> v[i].name;
    }

    stable_sort(v.begin(), v.end(), [](member a, member b){
        return a.age < b.age;
    });

    for (int i = 0; i < n; i++) {
        cout << v[i].age << " " << v[i].name << "\n";
    }
}