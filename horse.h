#ifndef HORSE_H_INCLUDE
#define HORSE_H_INCLUDE

class horse{
	private:
		int position; 
		int trackLenght; 
		int id;
	public:
		Horse();
		init(int id, int trackLength);
		void advance();
		void printLane();
		bool iswinner();
}

#endif 
