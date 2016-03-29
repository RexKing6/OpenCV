#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>
using namespace cv;
int main()
{
	Mat srcImage = imread("1.jpg");
	imshow("[原图]腐蚀操作", srcImage);
	Mat element = getStructuringElement(MORPH_RECT, Size(50, 50));
	Mat dstImage;
	erode(srcImage, dstImage, element);
	imshow("[效果图]腐蚀操作", dstImage);
	waitKey(0);
}
