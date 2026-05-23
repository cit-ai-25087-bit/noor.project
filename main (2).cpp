#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // تهيئة مولد الأرقام العشوائية للكمبيوتر
    srand(time(0));

    int userChoice;
    int computerChoice;

    cout << "Welcome to Rock, Paper, Scissors Game" << endl;
    cout << "1. Rock" << endl;
    cout << "2. Paper" << endl;
    cout << "3. Scissors" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> userChoice;

    // التحقق من صحة الإدخال
    if (userChoice < 1 || userChoice > 3) {
        cout << "Invalid choice! Please run the program again." << endl;
        return 0;
    }

    // توليد اختيار الكمبيوتر (رقم عشوائي من 1 إلى 3)
    computerChoice = (rand() % 3) + 1;

    // عرض اختيار المستخدم
    cout << "You chose: ";
    if (userChoice == 1) cout << "Rock" << endl;
    if (userChoice == 2) cout << "Paper" << endl;
    if (userChoice == 3) cout << "Scissors" << endl;

    // عرض اختيار الكمبيوتر
    cout << "Computer chose: ";
    if (computerChoice == 1) cout << "Rock" << endl;
    if (computerChoice == 2) cout << "Paper" << endl;
    if (computerChoice == 3) cout << "Scissors" << endl;

    // تحديد النتيجة
    if (userChoice == computerChoice) {
        cout << "Result: Draw!" << endl;
    } 
    else if ((userChoice == 1 && computerChoice == 3) || 
             (userChoice == 2 && computerChoice == 1) || 
             (userChoice == 3 && computerChoice == 2)) {
        cout << "Result: You Win!" << endl;
    } 
    else {
        cout << "Result: Computer Wins!" << endl;
    }

    return 0;
}