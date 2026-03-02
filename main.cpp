// COMSC-210 | Lab 15 | Barsbek
#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

class Movie {
private:
    string m_screenWriter{};
    string m_title{};
    int m_releasedYear{};
public:
    // Setter
    void setScreenWriter(const string& screenWriter) { m_screenWriter = screenWriter; }
    void setTitle(const string& title) { m_title = title; }
    void setReleasedYear(const int releasedYear) { m_releasedYear = releasedYear; }
    // Getter
    string getScreenWriter() const { return m_screenWriter; }
    string getTitle() const { return m_title; }
    int getReleasedYear() const {return m_releasedYear; }
};

int main() {
    return 0;
}