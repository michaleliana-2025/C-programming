for (int i = 0; i < 3; i++) {
    for (int j = 0; j <= i; j++) {
        cout << "* ";
    }
    cout << "\n";
}

for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2 - i; j++) cout << "  ";
    for (int j = 0; j <= i; j++) cout << "* ";
    cout << "\n";
}

char ch = 'A';
for (int i = 0; i < 3; i++) {
    for (int j = 0; j <= i; j++) {
        cout << ch << " ";
        ch++;
    }
    cout << "\n";
}

int num = 1;
for (int i = 0; i < 3; i++) {
    for (int j = 0; j <= i; j++) {
        cout << num << " ";
        num++;
    }
    cout << "\n";
}

for (int i = 0; i < 3; i++) {
    for (int j = 0; j <= i; j++) {
        cout << (j + 1) << " ";
    }
    cout << "\n";
}


for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3 - i; j++) cout << "* ";
    cout << "\n";
}

for (int i = 0; i < 3; i++) {
    for (int j = 0; j < i; j++) cout << "  ";
    for (int j = 0; j < 3 - i; j++) cout << "* ";
    cout << "\n";
}

for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        if ((i == 1 && j != 1) || (j == 1 && i != 1)) {
            cout << "* ";
        } else {
            cout << "  ";
        }
    }
    cout << "\n";
}

for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        if (j == 0 || j == 2 || i == 1) {
            cout << "* ";
        } else {
            cout << "  ";
        }
    }
    cout << "\n";
}