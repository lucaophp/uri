#include <iostream>
 
using namespace std;
 
int main() {
 
    int seg;
    cin >> seg;
    struct TData{
        int hora;
        int minuto;
        int segundo;
    } res;
    res.hora = seg / 3600;
    seg -= res.hora * 3600;
    res.minuto = seg / 60;
    seg -= res.minuto * 60;
    res.segundo = seg;
    cout << res.hora << ":" << res.minuto << ":" << res.segundo << endl;
 
    return 0;
}
