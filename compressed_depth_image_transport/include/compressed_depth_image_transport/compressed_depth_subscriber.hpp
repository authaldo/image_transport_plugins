// Copyright (c) 2012, Willow Garage, Inc.
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
//    * Redistributions of source code must retain the above copyright
//      notice, this list of conditions and the following disclaimer.
//
//    * Redistributions in binary form must reproduce the above copyright
//      notice, this list of conditions and the following disclaimer in the
//      documentation and/or other materials provided with the distribution.
//
//    * Neither the name of the copyright holder nor the names of its
//      contributors may be used to endorse or promote products derived from
//      this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.

#ifndef COMPRESSED_DEPTH_IMAGE_TRANSPORT__COMPRESSED_DEPTH_SUBSCRIBER_HPP_
#define COMPRESSED_DEPTH_IMAGE_TRANSPORT__COMPRESSED_DEPTH_SUBSCRIBER_HPP_

#include <string>

#include <rclcpp/node.hpp>
#include <sensor_msgs/msg/image.hpp>
#include <sensor_msgs/msg/compressed_image.hpp>
#include <image_transport/simple_subscriber_plugin.hpp>

namespace compressed_depth_image_transport
{

class CompressedDepthSubscriber
  : public image_transport::SimpleSubscriberPlugin<sensor_msgs::msg::CompressedImage>
{
public:
  virtual ~CompressedDepthSubscriber() {}

  virtual std::string getTransportName() const
  {
    return "compressedDepth";
  }

protected:
  virtual void internalCallback(
    const sensor_msgs::msg::CompressedImage::ConstSharedPtr & message,
    const Callback & user_cb);
};

}  // namespace compressed_depth_image_transport
#endif  // COMPRESSED_DEPTH_IMAGE_TRANSPORT__COMPRESSED_DEPTH_SUBSCRIBER_HPP_
