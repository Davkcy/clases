#include <string>
using namespace std;

class Student {
public:
  explicit Student(string n, int a);
  Student() : name(""), age(0) {}

  void setName(string n) { 
    name = n; 
  }
  string getName() const { 
    return name;
  }

  void setAge(int a) { 
    age = a;
  }
  int getAge() const { 
    return age;
  }

  bool isOlder() const { 
    return age > 17;
  }

private:
  string name;
  int age;
};
