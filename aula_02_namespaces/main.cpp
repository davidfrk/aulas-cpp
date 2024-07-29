#include <iostream>

namespace namespace_a {
  int add (int a, int b) {
    return a + b;
  }

  int variable = 1;
}

namespace namespace_b {
  int add (int a, int b) {
    return a + b + 100;
  }

  float add (float a, float b) {
    return a + b;
  }

  namespace nested_namespace {
    int add (int a, int b) {
      return a + b + 200;
    }

    int variable = 2;
  }
}

using namespace std;
using namespace namespace_a;
using namespace namespace_b;

namespace nested = namespace_b::nested_namespace;

struct MyStruct {
  int i;
};

int main() {
  int myAge = variable;
  MyStruct firstStruct;

  std::cout << "Digite sua idade: ";
  std::cin >> myAge;
  std::cout << "Minha idade: " << myAge << endl;
  std::cout << "Minha idade adicionada: " << nested::add(myAge, 1) << endl;
  cout << add(1.1f, 1.2f) << endl;

  return 0;
}

