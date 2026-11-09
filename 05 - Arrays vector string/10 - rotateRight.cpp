void rotateRight(vector<int>& v) {
    if (v.size() > 1) {
        int tmp = v.back();
        for (size_t i = v.size() - 1; i > 0; --i) {
            v.at(i) = v.at(i-1);
        }
        v.at(0) = tmp;
    }
}