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

void inisialisasiData() {
    Node* n1 = new Node{{"Arin", "Diamond FF", 155000}, nullptr};
    Node* n2 = new Node{{"Adel", "UC PUBG", 140000}, nullptr};
    Node* n3 = new Node{{"Aulia", "Diamond ML", 90000}, nullptr};

    head = n1;
    n1->next = n2;
    n2->next = n3;

    cout << "Data pelanggan berhasil dimasukkan.\n";
    getch();
}
