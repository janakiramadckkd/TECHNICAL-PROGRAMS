using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int x=1;
	    x=x<<k;
	    n=n|x;
	    cout<<n<<endl;
	}
	return 0;
}