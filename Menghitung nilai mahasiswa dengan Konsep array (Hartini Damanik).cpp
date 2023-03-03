#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

const int mhs = 10;

struct Mahasiswa {
    string nama;
    int kehadiran;
    int tugas;
    int formatif;
    int uts;
    int uas;
    float nilai_akhir;
    string grade;
};

bool compare(Mahasiswa m1, Mahasiswa m2) {
    return m1.nama < m2.nama;
}

int main() {
    Mahasiswa data[mhs];

    cout << "\t------------------------------------------- " << endl;
    cout << "\tPROGRAM MENGHITUNG NILAI AKHIR 10 MAHASISWA " << endl;
    cout << "\t------------------------------------------- \n\n" << endl;
    cout << "==========================================" << endl;

    for (int i = 0; i < mhs; i++) {
        cout << "Masukkan nama mahasiswa " << i+1 << ": ";
        cin >> data[i].nama;
        cout << "|Masukkan nilai untuk " << data[i].nama << endl;
        cout << "|Kehadiran" << ": ";
        cin >> data[i].kehadiran;
        cout << "|Tugas    " << ": ";
        cin >> data[i].tugas;
        cout << "|Formatif " << ": ";
        cin >> data[i].formatif;
        cout << "|UTS      " << ": ";
        cin >> data[i].uts;
        cout << "|UAS      " << ": ";
        cin >> data[i].uas;
        cout << "----------------------------------------\n" << endl;
        data[i].nilai_akhir = data[i].kehadiran * 0.1 + data[i].tugas * 0.2 + data[i].formatif * 0.2 + data[i].uts * 0.25 + data[i].uas * 0.25;

        if (data[i].nilai_akhir >= 90) {
            data[i].grade = "A";
        } else if (data[i].nilai_akhir >= 79) {
            data[i].grade = "B";
        } else if (data[i].nilai_akhir >= 69) {
            data[i].grade = "C";
        } else {
            data[i].grade = "D";
        }
    }

    sort(data, data + mhs, compare);

    cout << "\n=======================================" << endl;
    cout << "| Daftar Mahasiswa dan Nilai Akhir |" << endl;
    cout << "========================================" << endl;

    for (int i = 0; i < mhs; i++) {
        cout << "|" << data[i].nama << "\t|";
        cout << "\t" << data[i].nilai_akhir << "\t|";
        cout << "\t" << data[i].grade << "\t|" << endl;
    }

    cout << "========================================" << endl;

    return 0;
}

