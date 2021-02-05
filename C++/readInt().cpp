char buff[1<<17];
char read(){
	static int idx = 1<<17;
	if(idx == 1<<17){
		fread(buff,1,1<<17,stdin);
		idx = 0;
	}
	return buff[idx++];
}
int readInt(){
	int sum = 0;
	char now = read();
	while(now >= '0' && now <= '9'){
		sum = sum*10+now-'0';
		now = read();
	}
	return sum;
}
int main() {
	n = readInt(), k =readInt();
}
