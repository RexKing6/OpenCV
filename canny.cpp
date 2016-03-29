#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>
using namespace cv;
int main()
{
	Mat srcImage = imread("1.jpg");
	imshow("[原图]Canny边缘检测", srcImage);
	Mat edge,grayImage;
	cvtColor(srcImage, grayImage, COLOR_BGR2GRAY);
	blur(grayImage,edge, Size(3, 3));
	Canny(edge, edge, 3, 9, 3);
	imshow("[效果图]Canny边缘检测", edge);
	waitKey(0);
	return 0;
}
