;; Auto-generated. Do not edit!


(when (boundp 'pal_control_msgs::RigidBodyTrajectoryGoal)
  (if (not (find-package "PAL_CONTROL_MSGS"))
    (make-package "PAL_CONTROL_MSGS"))
  (shadow 'RigidBodyTrajectoryGoal (find-package "PAL_CONTROL_MSGS")))
(unless (find-package "PAL_CONTROL_MSGS::RIGIDBODYTRAJECTORYGOAL")
  (make-package "PAL_CONTROL_MSGS::RIGIDBODYTRAJECTORYGOAL"))

(in-package "ROS")
;;//! \htmlinclude RigidBodyTrajectoryGoal.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass pal_control_msgs::RigidBodyTrajectoryGoal
  :super ros::object
  :slots (_header _interpolation_type _trajectory ))

(defmethod pal_control_msgs::RigidBodyTrajectoryGoal
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:interpolation_type __interpolation_type) 0)
    ((:trajectory __trajectory) ())
    )
   (send-super :init)
   (setq _header __header)
   (setq _interpolation_type (round __interpolation_type))
   (setq _trajectory __trajectory)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:interpolation_type
   (&optional __interpolation_type)
   (if __interpolation_type (setq _interpolation_type __interpolation_type)) _interpolation_type)
  (:trajectory
   (&rest __trajectory)
   (if (keywordp (car __trajectory))
       (send* _trajectory __trajectory)
     (progn
       (if __trajectory (setq _trajectory (car __trajectory)))
       _trajectory)))
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; int8 _interpolation_type
    1
    ;; pal_control_msgs/RigidBodyTrajectoryPoint[] _trajectory
    (apply #'+ (send-all _trajectory :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; int8 _interpolation_type
       (write-byte _interpolation_type s)
     ;; pal_control_msgs/RigidBodyTrajectoryPoint[] _trajectory
     (write-long (length _trajectory) s)
     (dolist (elem _trajectory)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; int8 _interpolation_type
     (setq _interpolation_type (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _interpolation_type 127) (setq _interpolation_type (- _interpolation_type 256)))
   ;; pal_control_msgs/RigidBodyTrajectoryPoint[] _trajectory
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _trajectory (let (r) (dotimes (i n) (push (instance pal_control_msgs::RigidBodyTrajectoryPoint :init) r)) r))
     (dolist (elem- _trajectory)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(setf (get pal_control_msgs::RigidBodyTrajectoryGoal :md5sum-) "247be78fedc0f995e25248af4042dd57")
(setf (get pal_control_msgs::RigidBodyTrajectoryGoal :datatype-) "pal_control_msgs/RigidBodyTrajectoryGoal")
(setf (get pal_control_msgs::RigidBodyTrajectoryGoal :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
Header header

# see PolynomialInterpolatorType
int8    interpolation_type

pal_control_msgs/RigidBodyTrajectoryPoint[]     trajectory

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

================================================================================
MSG: pal_control_msgs/RigidBodyTrajectoryPoint
duration                duration

geometry_msgs/Pose      pose
geometry_msgs/Twist     velocity
geometry_msgs/Accel     acceleration

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w

================================================================================
MSG: geometry_msgs/Twist
# This expresses velocity in free space broken into its linear and angular parts.
Vector3  linear
Vector3  angular

================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 
# It is only meant to represent a direction. Therefore, it does not
# make sense to apply a translation to it (e.g., when applying a 
# generic rigid transformation to a Vector3, tf2 will only apply the
# rotation). If you want your data to be translatable too, use the
# geometry_msgs/Point message instead.

float64 x
float64 y
float64 z
================================================================================
MSG: geometry_msgs/Accel
# This expresses acceleration in free space broken into its linear and angular parts.
Vector3  linear
Vector3  angular

")



(provide :pal_control_msgs/RigidBodyTrajectoryGoal "247be78fedc0f995e25248af4042dd57")


