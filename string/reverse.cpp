// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str;
//     cout << "Enter a string: ";
//     getline(cin, str);  // input line with spaces

//     string word = "";
//     string result = "";

//     // Traverse from end to start
//     for (int i = str.length() - 1; i >= 0; i--) {
//         if (str[i] == ' ') {
//             result += word + " ";
//             word = "";
//         } else {
//             word = str[i] + word;  // build word in correct order
//         }
//     }

//     result += word; // add last word
//     cout << "Reversed string: " << result << endl;

//     return 0;
// }




#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    cout << "Enter a string: ";
    getline(cin, sentence);
    
    cout << "Reversed string: ";
    
    string word = "";
    
    // Read from right to left
    for (int i = sentence.length() - 1; i >= 0; i--) {
        
        if (sentence[i] != ' ') {
            // Add character to front of word
            word = sentence[i] + word;
        } 
        else {
            // Found a space, print the word
            cout << word << " ";
            word = "";  // Reset word
        }
    }
    
    // Print the last word
    cout << word << endl;
}