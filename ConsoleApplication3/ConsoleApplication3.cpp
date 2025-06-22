#include <iostream>
#include <cstring>
#include <conio.h>
#include <locale.h>

using namespace std;

class Strlen {
public:
    void run() {
        cout << "=== Тест strlen() ===" << endl;
        const char* s1 = "Hello, World!";
        cout << "Строка: \"" << s1 << "\"" << endl;
        cout << "Ожидаемая длина: 13" << endl;
        cout << "Фактическая длина: " << strlen(s1) << endl << endl;
    }
};

class Strcmp {
public:
    void run() {
        cout << "=== Тест strcmp() ===" << endl;
        const char* s1 = "apple";
        const char* s2 = "banana";
        cout << "Сравнение: \"" << s1 << "\" и \"" << s2 << "\"" << endl;
        cout << "Ожидаемый результат: отрицательное число" << endl;
        cout << "Фактический результат: " << strcmp(s1, s2) << endl << endl;
    }
};

class Strncmp {
public:
    void run() {
        cout << "=== Тест strncmp() ===" << endl;
        const char* s1 = "abcd";
        const char* s2 = "abef";
        cout << "Сравнение первых 3 символов: \"" << s1 << "\" и \"" << s2 << "\"" << endl;
        cout << "Ожидаемый результат: 0" << endl;
        cout << "Фактический результат: " << strncmp(s2, s1, 3) << endl << endl;
    }
};

class Strcpy {
public:
    void run() {
        cout << "=== Тест strcpy_s() ===" << endl;
        char dest[20] = "initial";
        const char* src = "copied";
        cout << "До копирования: \"" << dest << "\"" << endl;
        strcpy_s(dest, src);
        cout << "После копирования: \"" << dest << "\"" << endl << endl;
    }
};

class Strncpy {
public:
    void run() {
        cout << "=== Тест strncpy_s() ===" << endl;
        char dest[20] = "initial";
        const char* src = "partial";
        cout << "До копирования: \"" << dest << "\"" << endl;
        strncpy_s(dest, src, 4);
        dest[4] = '\0';
        cout << "После копирования 4 символов: \"" << dest << "\"" << endl << endl;
    }
};

class Strcat {
public:
    void run() {
        cout << "=== Тест strcat_s() ===" << endl;
        char dest[20] = "Hello";
        const char* src = " World!";
        cout << "До конкатенации: \"" << dest << "\"" << endl;
        strcat_s(dest, src);
        cout << "После конкатенации: \"" << dest << "\"" << endl << endl;
    }
};

class Strncat {
public:
    void run() {
        cout << "=== Тест strncat_s() ===" << endl;
        char dest[20] = "Hello";
        const char* src = " World Wide Web";
        cout << "До конкатенации: \"" << dest << "\"" << endl;
        strncat_s(dest, src, 6);
        cout << "После конкатенации 6 символов: \"" << dest << "\"" << endl << endl;
    }
};

class Strchr {  
public:  
   void run() {  
       cout << "=== Тест strchr() ===" << endl;  
       const char* s = "Searching";  
       char ch = 'c';  
       cout << "Строка: \"" << s << "\", поиск '" << ch << "'" << endl;  
       const char* result = strchr(s, ch);  
       if (result) {  
           int position = result - s + 1;  
           cout << "Ожидаемая позиция: " << position << "-й символ" << endl;  
       } else {  
           cout << "Ожидаемая позиция: символ не найден" << endl;  
       }  
       cout << "Фактический результат: \"" << (result ? result : "nullptr") << "\"" << endl << endl;  
   }  
};

class Strrchr {  
public:  
   void run() {  
       cout << "=== Тест strrchr() ===" << endl;  
       const char* s = "bookkeeper";  
       char ch = 'k';  
       cout << "Строка: \"" << s << "\", поиск последнего '" << ch << "'" << endl;  
       const char* result = strrchr(s, ch);  
       if (result) {  
           int position = result - s + 1;  
           cout << "Ожидаемая позиция: " << position << "-й символ" << endl;  
       } else {  
           cout << "Ожидаемая позиция: символ не найден" << endl;  
       }  
       cout << "Фактический результат: \"" << (result ? result : "nullptr") << "\"" << endl << endl;  
   }  
};

class Strpbrk {
public:
    void run() {
        cout << "=== Тест strpbrk() ===" << endl;
        const char* s = "hello world";
        const char* chars = "aeiou";
        cout << "Строка: \"" << s << "\", символы для поиска: \"" << chars << "\"" << endl;
        cout << "Ожидаемый результат: ' ' в позиции 1" << endl;//ERROR fix id
        const char* result = strpbrk(s, chars);
        cout << "Фактический результат: \"" << (result ? result : "nullptr") << "\"" << endl << endl;
    }
};

class Strstr {
public:
    void run() {
        cout << "=== Тест strstr() ===" << endl;
        const char* s = "C++ programming is fun";
        const char* substr = "program";
        cout << "Строка: \"" << s << "\", поиск подстроки \"" << substr << "\"" << endl;
        cout << "Ожидаемый результат: найденная подстрока" << endl;
        const char* result = strstr(s, substr);
        cout << "Фактический результат: \"" << (result ? result : "nullptr") << "\"" << endl << endl;
    }
};

int main() {
    setlocale(LC_ALL, "RU");

    Strlen().run();
    Strcmp().run();
    Strncmp().run();
    Strcpy().run();
    Strncpy().run();
    Strcat().run();
    Strncat().run();
    Strchr().run();
    Strrchr().run();
    Strpbrk().run();
    Strstr().run();

    cout << "Тестирование завершено. Нажмите любую клавишу для выхода...";
    return 0;
}
