int solve(vector<int>arr, int b) {
	int ans = 0, n = arr.size();

	for (int i = 0; i < n; i++) {
		int curr = 0;
		for (int j = i; j < n; j++) {
			if (curr < b)ans++;
			curr += arr[j];
		}
	}
	return ans;
}