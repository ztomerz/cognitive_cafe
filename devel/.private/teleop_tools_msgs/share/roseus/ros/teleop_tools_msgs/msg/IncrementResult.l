;; Auto-generated. Do not edit!


(when (boundp 'teleop_tools_msgs::IncrementResult)
  (if (not (find-package "TELEOP_TOOLS_MSGS"))
    (make-package "TELEOP_TOOLS_MSGS"))
  (shadow 'IncrementResult (find-package "TELEOP_TOOLS_MSGS")))
(unless (find-package "TELEOP_TOOLS_MSGS::INCREMENTRESULT")
  (make-package "TELEOP_TOOLS_MSGS::INCREMENTRESULT"))

(in-package "ROS")
;;//! \htmlinclude IncrementResult.msg.html


(defclass teleop_tools_msgs::IncrementResult
  :super ros::object
  :slots ())

(defmethod teleop_tools_msgs::IncrementResult
  (:init
   (&key
    )
   (send-super :init)
   self)
  (:serialization-length
   ()
   (+
    0
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;;
   self)
  )

(setf (get teleop_tools_msgs::IncrementResult :md5sum-) "d41d8cd98f00b204e9800998ecf8427e")
(setf (get teleop_tools_msgs::IncrementResult :datatype-) "teleop_tools_msgs/IncrementResult")
(setf (get teleop_tools_msgs::IncrementResult :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======

")



(provide :teleop_tools_msgs/IncrementResult "d41d8cd98f00b204e9800998ecf8427e")

