/**
 * @file pixelToWorld.h
 * @author Madhu Narra Chittibabu (madhunc117@gmail.com)
 * @navigator Sharmitha Ganesan (sharmithaganesan08@gmail.com)
 * @brief Declaration of pixelToWorld class
 * @version 0.1
 * @date 2022-10-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef INCLUDE_PIXELTOWORLD_H_
#define INCLUDE_PIXELTOWORLD_H_

#include <vector>
#include <opencv2/opencv.hpp>
using cv::Mat;


class PixelToWorld {
 public:
        PixelToWorld();
        std::vector<int> pixelValues;
 private:
        /**
         * @brief computes the projection matrix to compute XYZ
         * 
         * @return vector<Mat> return the projection matrix
         */
        std::vector<double> transformationMat();

        /**
         * @brief calculate the world co-ordinates
         * 
         * @param tramsformaMatrix projection matrix
         * @return vector<Mat> XYZ co-ordinates
         */
        std::vector<int> worldPoints(std::vector<double> tramsformaMatrix);
        double focalLength;
};
#endif  // INCLUDE_PIXELTOWORLD_H_
