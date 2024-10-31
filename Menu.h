
void XuatMenu();
int ChonMenu(int soMenu);
void XyLyMenu(int chon, chuoi s);
void ChayChuongTrinh();




void XuatMenu()
{
    cout << "_______________________MENU________________________\n"
        << "0. thoat khoi chuong trinh\n"
        << "1. nhap ten\n"
        << "2. nan ten\n"
        << "______________________________________________________\n";
}

int ChonMenu(int soMenu)
{
    int chon;
    do {
        cout << "nhap chon [0......" << soMenu << "] ";
        cin >> chon;
        if (chon >= 0 && chon <= soMenu) break;
    } while (true);
    return chon;
}

void XyLyMenu(int chon, chuoi s) {
    switch (chon) {
    case 0:
        cout << "thoat khoi chuong trinh\n";
        break;
    case 1:
        NhapChuoi(s);
        break;
    case 2:
        
        cout << "chuoi ban vua nhap la: " << s << endl;
        cout << "chuoi se duoc xoa ky tu trang o dau va cuoi chuoi: \n";
        XoaKyTuTrangDauCuoi(s);
        cout << "chuoi se duoc khu cac khoang trang du thua giua cac tu la: \n";
        KhuKyTuTrang(s);
        cout << "Chuoi se duoc viet hoa o dau moi tu: \n";
        VietHoa(s);
        break;
    default:
        break;
    }
    _getch();
}

void ChayChuongTrinh() {
    int soMenu = 2, chon;
    chuoi s;
    do {
        system("cls");
        XuatMenu();
        chon = ChonMenu(soMenu);
        XyLyMenu(chon, s);
    } while (chon != 0);
}