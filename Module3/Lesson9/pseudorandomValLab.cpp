#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(void) {
	int maxball;
	int ballsno;

	cout << "Max ball number? ";
	cin >> maxball;
	cout << "How many balls? ";
	cin >> ballsno;
	srand(time(NULL));

    //check if inputs are valid
    while(maxball < ballsno) {
        cout << "Max ball number must be greater than or equal to the number of balls" << endl;
        cout << "Max ball number? ";
        cin >> maxball;
        cout << "How many balls? ";
        cin >> ballsno;
    }

	int* balls = new int[ballsno];
    
    //draw the number of balls
    for(int i = 0; i < ballsno; i++) {
        //draw ball
        balls[i] = (rand() % maxball) + 1;

        //check for duplicates
        for(int j = 0; j < i; j++) {
            if(balls[i] == balls[j]) {
                //reject duplicate and restart draw
                i--;
                break;
            }
        }
    }
    
    //print balls
    for(int i = 0; i < ballsno; i++) {
        cout << balls[i] << " ";
    }
    cout << endl;
	return 0;
}