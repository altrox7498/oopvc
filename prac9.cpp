#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int main() {
    Mat img = imread("image.jpg");

    if (img.empty()) {
        cout << "Image not found!";
        return 0;
    }

    Mat gray, binary, blurImg;

    // 1. Grayscale Conversion
    cvtColor(img, gray, COLOR_BGR2GRAY);

    // 2. Thresholding
    threshold(gray, binary, 127, 255, THRESH_BINARY);

    // 3. Blurring
    blur(img, blurImg, Size(5, 5));

    // Display Images
    imshow("Original", img);
    imshow("Grayscale", gray);
    imshow("Threshold", binary);
    imshow("Blurred", blurImg);
    waitKey(0);
    return 0;
}
