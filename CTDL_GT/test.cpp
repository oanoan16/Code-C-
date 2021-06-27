#include <stdio.h>
int main(){
	float f, s=0, t, t2;
	int a[10]={5, 10, 18, 32, 52, 80};
	int b[10]={5, 10, 15, 20, 25, 30};
	scanf("%f", &f);
	t2=f;
	int i=0;
	while (t2>=0){
		if (f>=a[i]){
			t= (float)a[i]*(float)b[i]/100;
			printf("%.3f %.3f(%d%%)\n", (float)a[i], t, b[i]);
		} 
		else {
			t=t2*b[i]/100;
			printf("%.3f %.3f(%d%%)\n", t2, t, b[i]);	
			break;
		}
		s+=t;
		t2=f-(float)a[i];
		i++;
	}
	printf("TONG THUE %.3f",s);
	return 0;
}