int power(int x, int y) {
	int answer = 1;
	for(int i =0; i < y; i++) {
		answer = answer*x;
	}
	return answer;
}
