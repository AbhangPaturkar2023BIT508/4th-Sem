// Q9. WAP to find the MEAN value of a class Sample contains x and y variable by passing object to friend function

#include <iostream>
using namespace std;

class Sample {
private:
    int x;
    int y;

public:
    Sample(int a, int b){
        x = a;
        y = b;
    }

    friend void findMean(Sample &obj);
};

void findMean(Sample &obj) {
    int X = obj.x;
    int Y = obj.y;
    double mean = (X + Y) / 2 ;

    cout << "Mean of x and y: " << mean << endl;
}

int main() {
    Sample obj(10, 20);
    findMean(obj);

    return 0;
}
