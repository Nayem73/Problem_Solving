void rec(vector<int> &v, vector<int> cur) {

	int n = v.size();
	vector<bool> isPresent(n);
	for (int X : cur) {
		isPresent[X] = true;
	}

	for (int i = 0; i < (int)v.size(); i++) {
		if (!isPresent[v[i]]) {
			rec(v, cur+v[i]);
		}
	}

}

void rec(vector<int> &v, string cur) {

	int n = v.size();
	vector<bool> isPresent(n);
	for (char X : cur) {
		isPresent[X-'0'] = true;
	}

	for (int i = 0; i < (int)v.size(); i++) {
		if (!isPresent[v[i]]) {
			string s = to_string(v[i]);
			rec(v, cur+s);
		}
	}

}