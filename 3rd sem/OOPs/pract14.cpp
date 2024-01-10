#include <iostream>
#include <fstream>

using namespace std;

struct Record {
    int id;
    double value;
};

void writeBinaryFile(const char* filename, const Record* records, int numRecords) {
    ofstream outFile(filename, ios::binary | ios::out);
    outFile.write(reinterpret_cast<const char*>(records), sizeof(Record) * numRecords);
}

void readBinaryFile(const char* filename, Record* records, int numRecords) {
    ifstream inFile(filename, ios::binary | ios::in);
    inFile.read(reinterpret_cast<char*>(records), sizeof(Record) * numRecords);
}

int main() {
    const char* filename = "records.dat";
    const int numRecords = 3;

    Record records[numRecords] = {{1, 3.14}, {2, 2.718}, {3, 1.618}};

    writeBinaryFile(filename, records, numRecords);
    cout << "Records written to file: " << filename << endl;

    Record readRecords[numRecords];
    readBinaryFile(filename, readRecords, numRecords);

    cout << "Records read from file:" << endl;
    for (int i = 0; i < numRecords; ++i) {
        cout << "ID: " << readRecords[i].id << ", Value: " << readRecords[i].value << endl;
    }

    return 0;
}
