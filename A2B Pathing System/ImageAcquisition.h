///////////////////////////////////////////////////////////
//  ImageAcquisition.h
//  Implementation of the Class ImageAcquisition
//  Created on:      17-Apr-2011 5:22:51 PM
//  Original author: peter.finn
///////////////////////////////////////////////////////////

#if !defined(EA_F06BFFF8_B909_48f9_B235_EE3F3D8C7005__INCLUDED_)
#define EA_F06BFFF8_B909_48f9_B235_EE3F3D8C7005__INCLUDED_

#include "iImageAcquisition.h"
//#include "Image.h"
#include "A2BUtilities.h"

#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv\cvaux.h>
#include <opencv\highgui.h>
#include <opencv\cxcore.h>

using namespace cv;

class ImageAcquisition : public iImageAcquisition
{

public:
	ImageAcquisition();
	ImageAcquisition( int Row, int Col );
	virtual ~ImageAcquisition();

	

	Mat getPlain();
	Mat getEdge();
	bool* getObstMap();
	//depricated!
	Mat getImage();
private:
	//VideoCapture m_capture;
	Mat * m_plainCur;
	Mat * m_edgeCur;
	bool * m_obstMap;

	void getImages();
	
	CvCapture * m_capture;
	
};
#endif // !defined(EA_F06BFFF8_B909_48f9_B235_EE3F3D8C7005__INCLUDED_)
