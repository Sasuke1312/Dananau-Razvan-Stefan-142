#include <iostream>
using namespace std;
class vector{
    private:
        double *arr;
        int n;
    public:
        vector(int sz);
        ~vector();
        vector(int a, int sz);
        vector(vector &v);
        void read_vector();
        void show_vector();
        void re_vector(int x, int y);
        void sum_vector();
        void max_vector();
        friend int length(vector v);
        friend vector operator+(vector a, vector b);
        friend vector operator+(vector a);
        friend vector operator-(vector a, vector b);
        friend vector operator-(vector a);
        friend vector operator*(vector a, vector b);
        friend vector operator*(vector a, int b);
        friend vector operator+=(vector a, vector b);
        friend vector operator-=(vector a, vector b);
        friend vector operator==(vector a, vector b);
        friend vector operator!=(vector a, vector b);
        friend vector operator<(vector a, vector b);
        friend vector operator>(vector a, vector b);
        friend vector operator<=(vector a, vector b);
        friend vector operator>=(vector a, vector b);
 };
vector :: vector(int sz){
    n = sz;
    arr = new double[n + 1];
}
vector :: ~vector(){
    delete[] arr;
}
vector :: vector(int a, int sz){
    n = sz;
    arr = new double[n];
    for(int i = 1; i <= n; i ++)
        arr[i] = a;
}
vector :: vector(vector &v){
    n = v .n;
    arr = v.arr;
}
void vector :: read_vector(){
    for(int i = 1; i <= n; i ++)
        cin >> arr[i];
}
void vector :: show_vector(){
    for(int i = 1; i <= n; i ++)
        cout << arr[i] << " ";
}
void vector :: re_vector(int x, int y){
    n = y;
    for(int i = 1; i <= n; i ++)
        arr[i] = x;
}
void vector :: sum_vector(){
    double s = 0;
    for(int i = 1; i <= n; i ++)
        s += arr[i];
    cout << s;
}
void vector :: max_vector(){
    double m = arr[1];
    for(int i = 2; i <= n; i ++)
        if(arr[i] > m)
            m = arr[i];
    cout << m;
}
int length(vector v){
    return v.n;
}
vector operator+(vector a, vector b){
    if(a.n != b.n)
        cout << "Eroare";
    else{
        vector aux(a.n);
        for(int i = 1 ; i <= a.n; i ++)
            aux.arr[i] = a.arr[i] + b.arr[i];
        aux.show_vector();
    }
}
vector operator+(vector a){
    double s = 0;
    for(int i = 1; i <= a.n; i ++)
        s += a.arr[i];
    cout << s;
}
vector operator-(vector a, vector b){
    if(a.n != b.n)
        cout << "Eroare";
    else{
        vector aux(a.n);
        for(int i = 1; i <= a.n; i ++)
            aux.arr[i] = a.arr[i] - b.arr[i];
        aux.show_vector();
    }
}
vector operator-(vector a){
    vector aux(a.n);
    for(int i = 1; i <= a.n; i ++)
        aux.arr[i] = -a.arr[i];
    aux.show_vector();
}
vector operator*(vector a, vector b){
    if(a.n != b.n)
        cout << "Eroare";
    else{
        vector aux(a.n);
        for(int i = 1; i <= a.n; i ++)
            aux.arr[i] = a.arr[i] * b.arr[i];
        aux.show_vector();
    }
}
vector operator*(vector a, int b){
    vector aux(a.n);
    for(int i = 1; i <= a.n; i ++)
        aux.arr[i] = a.arr[i] * b;
    return aux;
}
vector operator+=(vector a, vector b){
    if(a.n != b.n)
        cout << "Eroare";
    else{
        for(int i = 1; i <= a.n; i ++)
            a.arr[i] += b.arr[i];
        return a;
    }
}
vector operator-=(vector a, vector b){
    for(int i = 1; i <= a.n; i ++)
        a.arr[i] -= b.arr[i];
}
vector operator==(vector a, vector b){
    if(a.n != b .n)
        cout << "Eroare";
    else{
        int p = 1;
        for(int i = 1; i <= a.n; i ++)
            if(a.arr[i] != b.arr[i]){
                p = 0;
                break;
            }
        if(p == 1)
            cout << "Vectorii sunt egali";
        else
            cout << "Vectorii nu sunt egali";
    }
}
vector operator!=(vector a, vector b){
    if(a.n != b.n)
        cout << "Eroare";
    else{
        int p = 0;
        for(int i = 1; i <= a.n; i ++)
            if(a.arr[i] != b.arr[i]){
                p = 1;
                break;
            }
        if(p == 0)
            cout << "Vectorii sunt egali";
        else
            cout << "Vectorii nu sunt egali";
    }
}
vector operator<(vector a, vector b){
    if(a.n != b.n)
        cout << "Eroare";
    else{
        int p = 1;
        for(int i = 1; i <= a.n; i ++)
            if(a.arr[i] >= b.arr[i]){
                p = 0;
                break;
            }
        if(p == 1)
            cout << "Adevarat";
        else
            cout << "Fals";
    }
}
vector operator>(vector a, vector b){
    if(a.n != b.n)
        cout << "Eroare";
    else{
        int p = 1;
        for(int i = 1; i <= a.n; i ++)
            if(a.arr[i] <= b.arr[i]){
                p = 0;
                break;
            }
        if(p == 1)
            cout << "Adevarat";
        else
            cout << "Fals";
    }

}
vector operator<=(vector a, vector b){
    if(a.n != b.n)
        cout << "Eroare";
    else{
        int p = 1;
        for(int i = 1; i <= a.n; i ++)
            if(a.arr[i] > b.arr[i]){
                p = 0;
                break;
            }
        if(p == 1)
            cout << "Adevarat";
        else
            cout << "Fals";
    }
}
vector operator>=(vector a, vector b){
    if(a.n != b.n)
        cout << "Eroare";
    else{
        int p = 1;
        for(int i = 1; i <= a.n; i ++)
            if(a.arr[i] < b.arr[i]){
                p = 0;
                break;
            }
    if(p == 1)
        cout << "Adevarat";
    else
        cout << "Fals";
    }
}
int a, b, n;
int main()
{
    vector v1(4);///citesc primul vector
    v1.read_vector();
    vector v2(4);///citesc al doilea vector
    v2.read_vector();
    vector v3(3);
    v3.read_vector();
    v1 += v2;
    v1.show_vector();///afisez suma lor
    cout << '\n';
    v1 < v2;/// verific daca al doilea este mai mare decat primul
    cout << '\n';
    +v1;///suma lui v1
    cout << '\n';
    v1 < v3;///afiseaza "eroare", deoarece nu au numar egal de componente
    return 0;
}
