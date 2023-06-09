;; Auto-generated. Do not edit!


(when (boundp 'pal_control_msgs::MotionManagerGoal)
  (if (not (find-package "PAL_CONTROL_MSGS"))
    (make-package "PAL_CONTROL_MSGS"))
  (shadow 'MotionManagerGoal (find-package "PAL_CONTROL_MSGS")))
(unless (find-package "PAL_CONTROL_MSGS::MOTIONMANAGERGOAL")
  (make-package "PAL_CONTROL_MSGS::MOTIONMANAGERGOAL"))

(in-package "ROS")
;;//! \htmlinclude MotionManagerGoal.msg.html


(defclass pal_control_msgs::MotionManagerGoal
  :super ros::object
  :slots (_filename _plan _checkSafety _repeat _priority _queueTimeout ))

(defmethod pal_control_msgs::MotionManagerGoal
  (:init
   (&key
    ((:filename __filename) "")
    ((:plan __plan) nil)
    ((:checkSafety __checkSafety) nil)
    ((:repeat __repeat) nil)
    ((:priority __priority) 0)
    ((:queueTimeout __queueTimeout) 0)
    )
   (send-super :init)
   (setq _filename (string __filename))
   (setq _plan __plan)
   (setq _checkSafety __checkSafety)
   (setq _repeat __repeat)
   (setq _priority (round __priority))
   (setq _queueTimeout (round __queueTimeout))
   self)
  (:filename
   (&optional __filename)
   (if __filename (setq _filename __filename)) _filename)
  (:plan
   (&optional (__plan :null))
   (if (not (eq __plan :null)) (setq _plan __plan)) _plan)
  (:checkSafety
   (&optional (__checkSafety :null))
   (if (not (eq __checkSafety :null)) (setq _checkSafety __checkSafety)) _checkSafety)
  (:repeat
   (&optional (__repeat :null))
   (if (not (eq __repeat :null)) (setq _repeat __repeat)) _repeat)
  (:priority
   (&optional __priority)
   (if __priority (setq _priority __priority)) _priority)
  (:queueTimeout
   (&optional __queueTimeout)
   (if __queueTimeout (setq _queueTimeout __queueTimeout)) _queueTimeout)
  (:serialization-length
   ()
   (+
    ;; string _filename
    4 (length _filename)
    ;; bool _plan
    1
    ;; bool _checkSafety
    1
    ;; bool _repeat
    1
    ;; uint8 _priority
    1
    ;; int32 _queueTimeout
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _filename
       (write-long (length _filename) s) (princ _filename s)
     ;; bool _plan
       (if _plan (write-byte -1 s) (write-byte 0 s))
     ;; bool _checkSafety
       (if _checkSafety (write-byte -1 s) (write-byte 0 s))
     ;; bool _repeat
       (if _repeat (write-byte -1 s) (write-byte 0 s))
     ;; uint8 _priority
       (write-byte _priority s)
     ;; int32 _queueTimeout
       (write-long _queueTimeout s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _filename
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _filename (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; bool _plan
     (setq _plan (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _checkSafety
     (setq _checkSafety (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _repeat
     (setq _repeat (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; uint8 _priority
     (setq _priority (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; int32 _queueTimeout
     (setq _queueTimeout (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get pal_control_msgs::MotionManagerGoal :md5sum-) "6cfa0989c229a7ae793c273afdc78ead")
(setf (get pal_control_msgs::MotionManagerGoal :datatype-) "pal_control_msgs/MotionManagerGoal")
(setf (get pal_control_msgs::MotionManagerGoal :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
# Path to XML file containing motions for the robot
string filename

# True if a collision-free approach motion and trajectory validation are to be performed.
# If set to true but an approach motion is not required, it will not be computed.
bool plan

#True if safety around the robot must be checked using sensors such as the sonars and lasers
bool checkSafety

#True if the motion must be repeated until a new goal has been received
bool repeat

#priority of the motion, 0 is no priority, 100 is max priority
uint8 priority

#Specifies how long in miliseconds should the goal wait before forcing an execution. If a movement is being executed when the goal is received, it will wait the specified time or until the movement finishes to execute it.
# -1 Means wait forever until the previous movement has finished
int32 queueTimeout 


")



(provide :pal_control_msgs/MotionManagerGoal "6cfa0989c229a7ae793c273afdc78ead")


