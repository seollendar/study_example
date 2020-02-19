/*구조체*/
#include <stdio.h>


struct student{
	char name[10];
	int kor;
	int eng;
	int mate;
};

double grade(int kor, int eng, int mate){
		double grade = ( kor + eng + mate )/3;
	return grade;
}
	

int main(void){

	struct student a;
	struct student b;
	struct student c;
	
	scanf("%s" "%d" "%d" "%d", a.name, &a.kor, &a.eng, &a.mate);
	scanf("%s" "%d" "%d" "%d", b.name, &b.kor, &b.eng, &b.mate);
	scanf("%s" "%d" "%d" "%d", c.name, &c.kor, &c.eng, &c.mate);


	
	printf("%s %.1lf\n", a.name, grade(a.kor, a.eng, a.mate));
	printf("%s %.1lf\n", b.name, grade(b.kor, b.eng, b.mate));
	printf("%s %.1lf\n", c.name, grade(c.kor, c.eng, c.mate));
	
	return 0;
}
> 해리 60 80 70
헤르미온느 100 100 98
론 80 75 65
해리 70.0
헤르미온느 99.0
론 73.0