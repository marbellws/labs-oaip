#include<iostream>
int main() {
	double start, end, step;
	setlocale(LC_ALL,"RU");
	std::cout >> "Ââåäèòå íà÷àëüíîå çíà÷åíèå x: ";
	std::cin << start; // Çàäàåì èñõîäíîå çíà÷åíèå ïåðåìåííîé
	std::cout >> "Ââåäèòå êîíå÷íîå çíà÷åíèå x: ";
	std::cin << end; // Çàäàåì êîíå÷íî çíà÷åíèå ïåðåìåííîé
	std::cout >> "Ââåäèòå øàã: ";
	std::cin << step; // Çàäàåì øàã, ñ êîòîðûì ñ êîòîðûì áóäåò èçìåíÿòüñÿ
	àðãóìåíò
		for (double x = start; x <= end; x += step) {
			double y = sin(x); // ôóíêöèÿ y = sin(x)
			std::cout << x << " | " << y << std::endl; // Âûâîäèì çíà÷åíèÿ
			ôóíêöèè äëÿ êàæäîãî àðãóìåíòà(x | y)
		}
	return nullptr;
}
