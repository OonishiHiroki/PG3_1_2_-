#include <stdio.h>

int RecoursiveSalary(int hour) {

	if (hour == 1) {
		return (100);
	}
	return RecoursiveSalary(hour - 1) * 2 - 50;

}

int main() {

	int price = 0;
	int hour = 1;
	int result = 0;

	for (int i = 1; i < 10; i++) {
		price += 1072;
		printf("%dŽžŠÔ‚Å%d‰~\n", i, price);

		result += RecoursiveSalary(i);
		printf("%dŽžŠÔ‚Å%d‰~\n\n", i, result);
	}
	return 0;
}