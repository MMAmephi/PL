#include <iostream>

using namespace std;

int main()
{
    double **p;
    double v = 2.;
    p = (double **) malloc(sizeof (double));
    *p = (double *) malloc(sizeof (double));
    *p = &v;
    cout << **p << "\n" << v << "\n";
    cout << *p << "\n";
    cout << p << "\n";
    free(p);
    return 0;
}