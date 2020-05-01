/* ----------------------------------------------------------------------------

 * QuadricSLAM Copyright 2020, ARC Centre of Excellence for Robotic Vision, Queensland University of Technology (QUT)
 * Brisbane, QLD 4000
 * All Rights Reserved
 * Authors: Lachlan Nicholson, et al. (see THANKS for the full author list)
 * See LICENSE for the license information

 * -------------------------------------------------------------------------- */

/**
 * @file System.h
 * @date Apr 14, 2020
 * @author Lachlan Nicholson
 * @brief containing the systems front and back end
 */

#pragma once

#include <quadricslam/base/Dataset.h>

#include <gtsam/base/Matrix.h>
#include <gtsam/nonlinear/NonlinearFactorGraph.h>

#include <vector>

namespace gtsam {

/**
 * @class BackEnd
 * A simple test class (double)
 */
class BackEnd {
  public:
  
    /** 
     * Static function to optimise the graph
     * optionally test sensitivity
    */
    static Values offline(NonlinearFactorGraph graph, Values initialEstimate, bool testSensitivity = false);
};


/**
 * @class FrontEnd
 * A simple test class (double)
 */
class FrontEnd {
  public:

    /** 
     * Static function to build factor graph / estimate
    */
    static void begin(SimulatedDataset dataset);
};





} // namespace gtsam