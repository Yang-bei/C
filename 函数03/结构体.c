#include <stdio.h>
struct peo
{
	char name[20];
	char tele[12];
	char sex[5];
	int high;
};

struct st
{
	struct peo p;
	int num;
	float f;
};

void print2(struct peo* sp)
{
	printf("%s %s %s %d\n",sp->name,sp->tele,sp->sex,sp->high);
}

void print1(struct peo p)
{
	printf("%s %s %s %d\n",p.name,p.tele,p.sex,p.high);
}

int main()
{
	struct peo p1={"张三","15545698523","男",181};
	struct st s={{"lisi","15545698523","女",166},100,3.14};
	
	printf("%s %s %s %d\n",p1.name,p1.tele,p1.sex,p1.high);
	printf("%s %s %s %d %d %f\n", s.p.name,s.p.tele,s.p.sex,s.p.high,s.num,s.f);                                             
	
	print1(p1);
	print2(&p1);
	
	return 0;
}