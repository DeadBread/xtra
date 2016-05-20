#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Variants
{
    string one;
    string two;
    string three;
    string four;

    void out()
    {
        cout << one << '\n' << two << '\n' << three << '\n' << four << endl;
    }
};

int main() {

	cin.exceptions(istream::failbit |istream::badbit);

    setlocale(LC_ALL, "Russian");

    vector<string> questions;
    questions.resize(8);

    questions[0] = "Какое объявление переменной не является верным в C++";
    questions[1] = "какое средство библиотеки STL целесообразно использовать, когда необходимо"
            "применить какое-либо дейстие ко всем элементам контейнера?";
    questions[2] = "Как называется класс, содержащий только чисто виртуальные методы";
    questions[3] = "Обращение A::count допустимо, в случае, если поле count класса А объявлено с каким спецификатором?";
    questions[4] = "В чем основное отличие классов от структур C++?";
    questions[5] = "Метод с каким прототипом нужно объявить в классе А, чтобы следующая запись \"A obj = 5;\" была корректной?";
    questions[6] = "Что из перечисленного не является типом конструктора ?";
    questions[7] = "В чем преимущество операции \"at()\" для контейнера vector?";

    int answers[8] = {3,2,3,4,1,2,3,1};
    vector <int> mistakes(8,0);
    

    vector<string> explanations;
    explanations.resize(8);

    explanations[0] = "Имена переменных в языке C++ могут содержать в себе буквы, циифры и знаки подчеркивания, но никак не символ \"*\"";
    explanations[1] = "Итераторы - средство для доступа к элементам вектора. Оперировать ими проще, чем обычными индексами массива";
    explanations[2] = "Абстрактным называется, класс, сорежащий только виртуальные методы. Также такой класс может называться интерфейсным";
    explanations[3] = "Поля, объявленные со спецификатором const существуют в единственном экземпляре для всех объектов класса, поэтому можно осуществлять доступ к ним непосредственно по имени класса";
    explanations[4] = "Для класса спецификатором доступа по-умолчанию является private, для структур же - public, поля структры по-умолчанию открыты для изменений)";
    explanations[5] = "Для того, чтобы запись была корректной, класс А должен иметь конструктор, принимающий один интовый параметр";
    explanations[6] = "Не существует конструктора присваивания. Однако, есть соответствующий оператор, обозначаемый знаком \"=\"";
    explanations[7] = "Операция \"at\" нужна для доступа к элементам вектора с проверкой возможного выхода за границы. Работает она, к сожалению, в 10 раз медленнее обычной индексации";


    vector <Variants> all_variants;
    all_variants.resize(8);

    all_variants[0] = {"1 - int T_T", "2 - int O_o", "3 - int *_*", "4 - int _0_"};
    all_variants[1] = {"1 - контейнеры", "2 - итераторы", "3 - аллокаторы", "4 - аллигаторы"};
    all_variants[2] = {"1 - полиморфный", "2 - чистный", "3 - абстрактный", "4 - наследуемый"};
    all_variants[3] = {"1 - const", "2 - unsigned", "3 - private", "4 - static"};
    all_variants[4] = {"1 - спецификатор доступа по-умолчанию", "2 - у структур не бывает конструкторов",
                        "3 - в структурах невозможно инкапсуляция", "4 - никаких отличий нет"};
    all_variants[5] = {"1 - void A(int a)", "2 - A(int a)", "3 - int A(int a)", "4 - A operator = (int a)"};
    all_variants[6] = {"1 - по-умолчанию", "2 - преобразования", "3 - присваивания", "4 - копирования"};
    all_variants[7] = {"1 - есть остлеживание границ массива", "2 - высокая скорость работы",
                        "3 - преимуществ нет", "4 - такой операции нет"};

    int counter = 0;
    int ans;
    int score = 8;

    while (counter < 8)
    {
        try {
            cout << "question " << counter + 1 << endl;
            cout << questions[counter] << endl;
            all_variants[counter].out();

            cin >> ans;

            if ((ans < 0) || (ans > 4)) 
                throw (0);

            if (answers[counter] != ans)
            {
                mistakes[counter]++;
                score--;
            }

            counter++;
        }
        catch(...)
        {
        	cin.clear();
            cout << "wrong input! Try again" << endl;
            cin.ignore(100, '\n');
            continue;
        }
    }

    for (int l = 0; l < 8; l++)
        cout << mistakes[l] << endl;

    cout << "your score is " << score << endl;

    int i = 0;
    while (i < 8)
    {
        if (mistakes[i] > 0) {
            cout << i + 1 << ": Correct answer is " << answers[i] << endl;
            cout << endl;
            cout << explanations[i] << endl;
            cout << endl;
        }
        else {
            cout << i + 1 << ": Correct" << endl;
        }
        i++;
    }

    return 0;
}