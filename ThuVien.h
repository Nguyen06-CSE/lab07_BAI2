#define MAX 1000

typedef char chuoi[MAX];

void NhapChuoi(chuoi s);
void XoaKyTuTrangDauCuoi(chuoi s);
void KhuKyTuTrang(chuoi s);
void VietHoa(chuoi s);



void NhapChuoi(chuoi s)
{
    cin.ignore();
    gets_s(s, MAX);
}

void HoanVi(char& a, char& b) {
    char tmp = a;
    a = b;
    b = tmp;
}

void XoaKyTuTrangDauCuoi(chuoi s)
{
    int i = 0;
    while (s[i] == ' ') {
        ++i;
    }
    int j = 0;
    while (s[i] != '\0') {
        s[j++] = s[i++];
    }
    s[j] = '\0';   
    j--;  
    while (s[j] == ' ') {
        --j;
    }
    s[j + 1] = '\0';
    cout << s << endl;
}

void KhuKyTuTrang(chuoi s)
{
    int i = 0; 
    while (s[i] != NULL) {
        int j = i + 1;
        if (s[i] == ' ' && s[j] == ' '){
            while (s[j] != NULL) {
                s[j] = s[j + 1];
                ++j;
            }
        }
        else    ++i;
    }
    cout << s << endl;
}

void VietHoa(chuoi s) {
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 32;   
        }
        ++i;
    }
    if (s[0] >= 'a' && s[0] <= 'z') {
        s[0] -= 32;
    }
    i = 1;
    while (s[i] != '\0') {
        if (s[i] == ' ' && s[i + 1] >= 'a' && s[i + 1] <= 'z') {
            s[i + 1] -= 32;  
        }
        ++i;
    }
    cout << s;
}

