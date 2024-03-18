#include <opencv/highgui.h>///使用Opencv的高級GUI外掛
int main()
{///大寫I,小寫pl
    IplImage * img = cvLoadImage("c:/pig.jpg");
///大寫Image 圖檔請放在c:根目錄裡, pig.jpg
    cvShowImage("week05", img);
    cvWaitKey(0);
}
