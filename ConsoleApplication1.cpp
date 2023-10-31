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
        cout << "������� ������������." << endl;
    }
    void StartRandomize() {
        cout << "����������� ��������." << endl;
    }
    void SetTitle(const string& title) {
        cout << "��������� ����������� ��: " << title << endl;
    }
    void Exit() {
        cout << "������� ���������." << endl;
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
    app.SetTitle("��� �������");
    string title = "����� ���������";
    app.SetTitle(title + " �����������!");
    app.Exit();
    return 0;
}
