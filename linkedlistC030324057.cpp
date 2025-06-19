#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

struct Pelanggan {
    string nama;
    string namaItem;
    int hargaItem;
};

struct Node {
    Pelanggan data;
    Node* next;
};

Node* head = nullptr;
