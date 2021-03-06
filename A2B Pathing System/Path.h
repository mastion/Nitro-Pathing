#ifndef _PATH_HH
#define _PATH_HH

#include <opencv2/imgproc/imgproc.hpp>
using cv::Point;

#include "PathVector.h"

#include <vector>
using std::vector;

class Path
{

public:
	Path();
	virtual ~Path();
	Path( const Path & cpy);
	Path& operator=(const Path & cpy);

	void addVector(PathVector vector);
	vector<Point> & getPathPoints();
	PathVector getPathVector(int i);
	int	getPathVSize();

private:
	vector<PathVector> m_path;
	vector<Point> m_pathPoints;
};


#endif

