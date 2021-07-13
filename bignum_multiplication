string multip(string a, string b){
	int A= a.size(), B= b.size(); 
	vector<int> v(A + B + 1);

	FOR(i, 1, A)
	FOR(j, 1, B)
		v[i+j] += IN(a[i-1]) * IN(b[j-1]);
	DOWN(i, A+B, 2){
		v[i-1] += v[i] / 10;
		v[i] %= 10; 
	}		
	
	string c= (v[1]==0 ? "" : ST(v[1]));
	FOR(i, 2, A+B) c += ST(v[i]);	
	return c;
}
