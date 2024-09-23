#include <iostream>
#include <vector>

using namespace std;

void printVector(const std::vector<int>& vec) {
    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
}

int main () 
{ 
int n = 10;

std::vector<int> a(n);
std::vector<int> b(n);

for (int i = 0; i < n; i++) {
    a[i] = rand() % 2;
    b[i] = rand() % 2;
}

std::cout << "A  : ";
printVector(a);
std::cout << "B  : ";
printVector(b);

std::vector<int> r_and(n);
std::vector<int> r_or(n);
std::vector<int> r_xor(n);

for (int i = 0; i < n; i++) {
    r_and[i] = a[i] & b[i];
    r_or[i] = a[i] | b[i];
    r_xor[i] = a[i] ^ b[i];
}

std::cout << "XOR: ";
printVector(r_xor);

 return 0;
}
