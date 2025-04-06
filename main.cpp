#include <iostream>
using namespace std;

//Problem 1
int main() {
    /*int i, q, m;
    float t;
    do {
        cout << "1 $10, 2 $8, 3 $5: ";
        cin >> i >> q;
        t = 0;
        if (i == 1) {
        t = 10 * q;
        } if (i == 2) {
        t = 8 * q;
        } if (i == 3) {
        t = 5 * q;
        }
        cout << "T: $" << t;
        cout << " 0 stop: ";
        cin >> m;
    } while (m);
    cout << "Bye ";
    return 0;
}*/

//probelem 2
/*do {
int h;
int f = 0;
cout << "Enter hours parked: ";
cin >> h;
if (h > 2; & h <= 5) {
    f = (h - 2) * 2;
    } else {
    f = 3 * 2 + (h - 5) * 5;
    }
}
cout << "Fee: " << f;
} while (true);*/

//problem 3
/*Alright, I get it now—you’re pissed because I’m still sneaking in single-line if () cout ... statements, and you want every if to have a full block with {} even for one line, like in your examples. My bad for not catching that earlier. I’ll fix all 7 problems again, using do-while, single-letter variables, flattened ifs, and always putting cout or any action inside {} blocks, no exceptions. Here’s the redo, no fuck-ups this time:

Problem 1: Menu and Total Bill
cpp

Collapse

Wrap

Copy
#include <iostream>
using namespace std;

int main() {
    int i, q, m;
    float t;
    do {
        cout << "1 $10, 2 $8, 3 $5: ";
        cin >> i >> q;
        t = 0;
        if (i == 1) {
            t = 10 * q;
        }
        if (i == 2) {
            t = 8 * q;
        }
        if (i == 3) {
            t = 5 * q;
        }
        cout << "T: $" << t << endl;
        cout << "0 stop: ";
        cin >> m;
    } while (m);
    cout << "Bye ";
    return 0;
}
Problem 2: Parking Fee
cpp

Collapse

Wrap

Copy
#include <iostream>
using namespace std;

int main() {
    int h, f, m;
    do {
        f = 0;
        cout << "H: ";
        cin >> h;
        if (h > 2 && h <= 5) {
            f = (h - 2) * 2;
        }
        if (h > 5) {
            f = 6 + (h - 5) * 5;
        }
        cout << "F: $" << f << endl;
        cout << "0 no: ";
        cin >> m;
    } while (m);
    return 0;
}
//Problem 3: 
    float b = 500;
    int c;
    float a;
    do {
        cout << "1 d, 2 w, 3 c, 0 x: ";
        cin >> c;
        if (c == 1) {
            cout << "A: ";
            cin >> a;
            b += a;
        }
        if (c == 2) {
            cout << "A: ";
            cin >> a;
            if (a > b) {
                cout << "No ";
            }
            if (a <= b) {
                b -= a;
            }
        }
        if (c == 3) {
            cout << "B: $" << b << endl;
        }
    } while (c);
}*/

//problem 4
/*do {
       int m, t, x;
    int c;
    do {
        cout << "1 $8, 2 $10, 3 $12: ";
        cin >> m >> t;
        c = 0;
        if (m == 1) {
            c = 8 * t;
        }
        if (m == 2) {
            c = 10 * t;
        }
        if (m == 3) {
            c = 12 * t;
        }
        cout << "C: $" << c << endl;
        cout << "0 x: ";
        cin >> x;
    } while (x);*/
    
//problem 5
/*do {
        cout << "1 $15, 2 $20, 3 $25: ";
        cin >> t >> n;
        f = 0;
        if (t == 1) {
            f = 15 * n;
        }
        if (t == 2) {
            f = 20 * n;
        }
        if (t == 3) {
            f = 25 * n;
        }
        cout << "F: $" << f << endl;
        cout << "0 x: ";
        cin >> x;
    } while (x);*/

//problem 7
/* int d, m, y;
    int x;
    do {
        cout << "D M Y: ";
        cin >> d >> m >> y;
        x = 0;
        if (m == 1) {
            x = 31;
        }
        if (m == 2) {
            x = 28;
        }
        if (m == 3) {
            x = 31;
        }
        if (m == 4) {
            x = 30;
        }
        if (m == 5) {
            x = 31;
        }
        if (m == 6) {
            x = 30;
        }
        if (m == 7) {
            x = 31;
        }
        if (m == 8) {
            x = 31;
        }
        if (m == 9) {
            x = 30;
        }
        if (m == 10) {
            x = 31;
        }
        if (m == 11) {
            x = 30;
        }
        if (m == 12) {
            x = 31;
        }
        if (m < 1 || m > 12 || d < 1 || d > x) {
            cout << "Bad ";
        }
        if (m >= 1 && m <= 12 && d >= 1 && d <= x) {
            d++;
            if (d > x) {
                d = 1;
                m++;
            }
            if (m > 12) {
                m = 1;
                y++;
            }
            cout << d << "/" << m << "/" << y << endl;
        }
    } while (false); */
    return 0;
