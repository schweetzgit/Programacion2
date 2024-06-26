#include <stdio.h>
#include <stdlib.h>
union U{
	int n1, n2;
};
struct S{
	int n1, n2;
};
int main(){
	union U u;
	struct S s;
	u.n1 = 1;
	u.n2 = 2;
	s.n1 = 1;
	s.n2 = 2;
	printf ("\n union n1: %d\n", u.n1);
	printf (" union n2: %d\n", u.n2);
	printf (" struct n1: %d\n", s.n1);
	printf (" struct n2: %d\n", s.n2);
	printf (" sizeof (union S): %i\n", sizeof (union U));
	printf (" sizeof (struct S): %i\n", sizeof (struct S));
	system("pause");
	return 0;
}
