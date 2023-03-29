#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;

int main()
{
	VideoCapture cap(0);

	if (!cap.isOpened()) { cout << "�������� ���� �� ����" << endl; }

	namedWindow("frame", 1);
	for (;;)
	{
		Mat frame;
		cap >> frame;
		frame += Scalar(100, 0, 0);
		imshow("frame", frame);
		if (waitKey(30) >= 0) break;
	}
	return 0;
}