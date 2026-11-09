string to_string(const vector<int>& v) {
    string result = "[";
    for (size_t i = 0; i < v.size(); ++1) {
        if (i)
            result += ", ";
        result += to_string(v.at(i));
    }
    return result += "]";
}