#ifndef RACE_H_INCLUDE
#define RACE_H_INCLUDE

class race{
	private:
		const int trackLenght=15;
		const int numHorse=5;
		Horse horses[numHorse];
	public:
		Race();
		void run();
}
#endif 
