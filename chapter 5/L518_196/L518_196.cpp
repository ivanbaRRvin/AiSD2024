//L518_196
//����� �����
//��-201 ������� ������ ������������

void process_edge(int x, int y, int* parent, bool& finished) {
    if (parent[x] != y) {
        cout << "Cycle from " << y << " to " << x << ": ";
        find_path(y, x, parent);
        cout << endl << endl;
        finished = true;
    }
}

