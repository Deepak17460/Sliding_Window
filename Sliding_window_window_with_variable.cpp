int solve(vector<int> &A, const int &k) {
	int n = A.size();
	int i = 0, j = 0, sum = 0;
	int mx = INT_MIN;
	while (j < n) {
		sum += A[j];
		if (sum < k) {
			j++;
		} else if (sum == k) {
			mx = max(mx, j - i + 1);
			j++;
		} else if (sum > k) {
			while (sum > k) {
				sum = sum - A[i];
				i++;
			}
			j++;
		}
	}
	return mx;
}
