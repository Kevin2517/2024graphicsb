#include <opencv/highgui.h>///�ϥ�Opencv������GUI�~��
int main()
{///�j�gI,�p�gpl
    IplImage * img = cvLoadImage("c:/pig.jpg");
///�j�gImage ���ɽЩ�bc:�ڥؿ���, pig.jpg
    cvShowImage("week05", img);
    cvWaitKey(0);
}
