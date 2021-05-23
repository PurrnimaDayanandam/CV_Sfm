#pragma once

#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/features2d.hpp>

using namespace cv;
using namespace std;

// ----------------------------------
// ----------- Constant -------------
// ----------------------------------
const double kDistanceCoef = 4.0;
const int kMaxMatchingSize = 500;

// ----------------------------------
// ---- Function Declaration --------
// ----------------------------------
void SIFTDetectAndCompute(Mat& img, vector<KeyPoint>& kpts, Mat& desc);
void bruteForceMatch(Mat& desc1, Mat& desc2, vector<DMatch>& matches);
inline void SIFT_detect_and_compute(Mat& img, vector<KeyPoint>& kpts, Mat& desc);
inline void match(Mat& desc1, Mat& desc2, vector<DMatch>& matches, double kDistanceCoef, int kMaxMatchingSize);