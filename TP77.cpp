#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

vector<int> GenerarVector(int n);
vector<int> Por10YRestar30(vector<int> A);
int EsUno(vector<int> B);
void MostrarVector(vector<int> A);

int main()
{
    vector<int> A;
    vector<int> B;
    int N=100, multiplo, suma;
    float prom;
    A = GenerarVector(N);
    B = Por10YRestar30(A);
    MostrarVector(A);
    MostrarVector(B);
    cout << "Es uno: " << EsUno(B) << endl;
    return 0;
}

vector<int> GenerarVector(int n)
{
    vector<int> V;
    int e;
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        e = rand() % 100;
        V.push_back(e);
    }
    return V;
}

vector<int> Por10YRestar30(vector<int> A)
{
    vector<int> B;
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i]%2==0 && A[i]>20)
        {
            int e = A[i] * 10;
            B.push_back(e);
        }
        if (A[i]%2!=0 && A[i]<60)
        {
            int e = A[i] - 30;
            B.push_back(e);
        }
    }
    return B;
}

int EsUno(vector<int> B)
{
    int esuno=0;
    for (int i = 0; i < B.size(); i++)
    {
        if (B[i] == 1)
        {
            esuno++;
        }
    }
    return esuno;
}

void MostrarVector(vector<int> A)
{
    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i] << "/";
    }
    cout << endl;
}