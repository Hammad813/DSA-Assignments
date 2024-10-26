#include <iostream>
using namespace std;
class Line {
private:
    double a; 
    double b; 
public:
    Line(double slope, double intercept) {
        a = slope;
        b = intercept;
    }
    double intersect(Line otherLine) {
        if (a == otherLine.a) {
            cout << "The lines are parallel and do not intersect." << endl;
            return -1;
        }
        return (otherLine.b - b) / (a - otherLine.a);
    }
    void display() {
        cout << "y = " << a << "x + " << b << endl;
    }
};

int main() {
    Line line1(2.0, 3.0); 
    Line line2(1.0, 5.0);

    cout << "Line 1: "; line1.display();
    cout << "Line 2: "; line2.display();

    double intersectionX = line1.intersect(line2);
    if (intersectionX != -1) {
        cout << "The lines intersect at x = " << intersectionX << endl;
    }
    return 0;
}