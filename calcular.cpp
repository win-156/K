#include <iostream>
#include <string>
#include <stack>
using namespace std;
// double kiem_tra_dau(string dau, double so_1, double so_2)
// {
//     char *dau_char = new char[dau.lenght()];
//     strcpy(dau_char, dau.c_str());
//     switch (dau_char)
//     {
//     case '+':
//         return so_1 + so_2;
//     case '-':
//         return so_1 - so_2;
//     case '*':
//         return so_1 * so_2;
//     case '/':
//         return so_1 / so_2;
//     default:
//         break;
//     }
// }
int Gop_so(string phep_toan, int &i)
{
    int so_int;
    string so;
    while (1)
    {   
        if (phep_toan[i] == ' '){
            break;
        }
        so += phep_toan[i];
        i++;
    }
    so_int = stoi(so);
    return so_int;
}
void dua_vao_stack(stack <int> &s, int i, string phep_toan)
{
    while (i < phep_toan.length())
    {
        int gop_xong = Gop_so(phep_toan, i);
        s.push(gop_xong);
        i+=3;
    }  
}
int main()
{
    stack <int> s_1;
    stack <string> s_2;

    string phep_toan;
    int i = 0;
    cout << "nhap vao phep toan: ";
    getline(cin, phep_toan);
    cout << phep_toan.length();
    dua_vao_stack(s_1, i, phep_toan);
    cout << s_1.top();
    return 0;
    r
}
