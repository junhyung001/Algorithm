#include<iostream>
#include<string>
using namespace std;

char Vowel[5] = {'a', 'e', 'i', 'o', 'u'};

//case 1 : 모음(a,e,i,o,u) 하나를 반드시 포함하여야 한다.
bool check_include_Vowel(string s){
    bool found;
    //문자열 크기만큼 반복하면서 모음이 포함되어있는지 확인
    for(int i=0; i< s.size(); i++){
        for(int j=0; j<5; j++){
            found = s[i] == Vowel[j];
            if (found == true){
                return true;
            }
        }
    }
    return false;
}

//case 2 : 모음이 3개 혹은 자음이 3개 연속으로 오면 안 된다.
bool check_three_sequence(string s) {
    int v_check = 0;
    int c_check = 0;

    for (int i = 0; i < s.size(); i++) {
        bool isVowel = false;
        for (int j = 0; j < 5; j++) {
            if (s[i] == Vowel[j]) {
                isVowel = true;
                break;
            }
        }
        if (isVowel) {
            v_check++;
            c_check = 0;
        } else {
            c_check++;
            v_check = 0;
        }

        if (v_check >= 3 || c_check >= 3) {
            return false;
        }
    }
    return true;
}

// case 3 : 같은 글자가 연속적으로 두번 오면 안되나, ee 와 oo는 허용한다.
bool check_conti_two_letters(string s){
    char prev_letter = s[0];

    for (int i=1; i<s.size(); i++){
        if(prev_letter == s[i] && prev_letter != 'e' && prev_letter != 'o'){
            return false;
        }
        prev_letter = s[i];
    }
    return true;
}

// 결과 출력
void print_result(bool condition,string result){
    if(condition == true){
        cout << "<" << result << "> "<< "is acceptable." << endl;
    }else{
        cout << "<" << result << "> " << "is not acceptable." << endl;  //오타 수정;;;;;
    }
}


int main(){
    string input;

    while (true){
        cin >> input;
        if(input.compare("end") == 0 ) {
            break;
        } 

        bool case1 = check_include_Vowel(input);
        bool case2 = check_three_sequence(input);
        bool case3 = check_conti_two_letters(input);

        bool total_conti = case1 && case2 && case3;
        print_result(total_conti, input);
    }

    return 0;
}