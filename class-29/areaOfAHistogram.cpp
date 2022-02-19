// areaOfAHistogram.cpp
class Solution {
public:
	int largestRectangleArea(vector<int>& arr) {

		int ans = arr[0];

		stack<int>st;
		int i = 0;
		while (i < arr.size()) {

			// pushing
			if (st.empty() || arr[st.top()] < arr[i]) {
				//storing index in stack
				// cout<<i<<" ";
				st.push(i++);
			} else {
				//popping
				int tp = st.top();
				st.pop();
				ans = max(ans, arr[tp] * (st.empty() ? i : i - st.top() - 1) );
				cout << ans << " ";
			}
		}
		while (!st.empty()) {
			int tp = st.top();
			st.pop();
			ans = max(ans, arr[tp] * (st.empty() ? i : i - st.top() - 1) );
		}
		return ans;
	}
};