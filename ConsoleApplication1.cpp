#include <iostream>
#include <string>
using namespace std;

class Application {
public:
    static Application& GetInstance() {
        static Application instance;
        return instance;
    }
    void Initialize() {
        cout << "Додаток ініціалізується." << endl;
    }
    void StartRandomize() {
        cout << "Рандомізація запкщена." << endl;
    }
    void SetTitle(const string& title) {
        cout << "Заголовок встановлено на: " << title << endl;
    }
    void Exit() {
        cout << "додаток завершено." << endl;
    }
private:
    Application() {}
    Application(const Application&) = delete;
    Application& operator=(const Application&) = delete;
};

int main() {
    Application& app = Application::GetInstance();
    app.Initialize();
    app.StartRandomize();
    app.SetTitle("Мый додаток");
    string title = "Новий заголовок";
    app.SetTitle(title + " Неправильно!");
    app.Exit();
    return 0;
}
