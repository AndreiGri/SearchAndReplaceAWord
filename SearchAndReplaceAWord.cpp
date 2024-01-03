#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    // Изменение кодировки терминала:
    system("chcp 1251 > nul");
    // Установка цвета фона терминала и цвета текста
    system("color 80");

    cout << endl;

    string text;
    string word;
    string newword;
    string result;
    cout << " Введите текст: ";
    getline(cin, text);
    cout << " Введите слово которое необходимо заменить: ";
    cin >> word;
    cout << " Введите слово на которое нужно заменить: ";
    cin >> newword;

    for (int i = 0; i < text.length(); i++) {
        bool match = true;
        for (int j = 0; j < word.length(); j++) {
            if (i + j >= text.length() || word[j] != text[i + j]) {
                match = false;
                break;
            }
        }
        if (!match) {
            result += text[i];
        }
        else {
            result += newword;
            i += word.length() - 1;
        }
    }

    cout << result << endl;

    // Задержка окна консоли:
    system("pause > nul");

    return 0;
}