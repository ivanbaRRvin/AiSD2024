//L519_198
//������������� ������� ���������� ���������������� 
//��-201 ������� ������ ������������

const int MAX_V = 1000;
int reachable_ancestor[MAX_V + 1];
int tree_out_degree[MAX_V + 1];

void process_vertex_early(int v) {
    reachable_ancestor[v] = v;
}



