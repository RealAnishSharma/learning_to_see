#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main(int, char**)
{
    VideoCapture cap(0); // open the default camera
    if(!cap.isOpened()){  // check if we succeeded
        cout << "Did not succeed! :(" << endl;
        return -1;
    }
    
    Mat frame;
    cap >> frame; // get a new frame from camera
    // cvtColor(frame, edges, COLOR_BGR2GRAY);
    // GaussianBlur(edges, edges, Size(7,7), 1.5, 1.5);
    // Canny(edges, edges, 0, 30, 3);
    imshow("Frame", frame);
    while(waitKey(1)==int('q')){}
    
    // the camera will be deinitialized automatically in VideoCapture destructor
    return 0;
}