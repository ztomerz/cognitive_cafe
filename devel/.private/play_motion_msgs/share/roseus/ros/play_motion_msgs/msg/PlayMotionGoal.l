;; Auto-generated. Do not edit!


(when (boundp 'play_motion_msgs::PlayMotionGoal)
  (if (not (find-package "PLAY_MOTION_MSGS"))
    (make-package "PLAY_MOTION_MSGS"))
  (shadow 'PlayMotionGoal (find-package "PLAY_MOTION_MSGS")))
(unless (find-package "PLAY_MOTION_MSGS::PLAYMOTIONGOAL")
  (make-package "PLAY_MOTION_MSGS::PLAYMOTIONGOAL"))

(in-package "ROS")
;;//! \htmlinclude PlayMotionGoal.msg.html


(defclass play_motion_msgs::PlayMotionGoal
  :super ros::object
  :slots (_motion_name _skip_planning _priority ))

(defmethod play_motion_msgs::PlayMotionGoal
  (:init
   (&key
    ((:motion_name __motion_name) "")
    ((:skip_planning __skip_planning) nil)
    ((:priority __priority) 0)
    )
   (send-super :init)
   (setq _motion_name (string __motion_name))
   (setq _skip_planning __skip_planning)
   (setq _priority (round __priority))
   self)
  (:motion_name
   (&optional __motion_name)
   (if __motion_name (setq _motion_name __motion_name)) _motion_name)
  (:skip_planning
   (&optional (__skip_planning :null))
   (if (not (eq __skip_planning :null)) (setq _skip_planning __skip_planning)) _skip_planning)
  (:priority
   (&optional __priority)
   (if __priority (setq _priority __priority)) _priority)
  (:serialization-length
   ()
   (+
    ;; string _motion_name
    4 (length _motion_name)
    ;; bool _skip_planning
    1
    ;; int32 _priority
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _motion_name
       (write-long (length _motion_name) s) (princ _motion_name s)
     ;; bool _skip_planning
       (if _skip_planning (write-byte -1 s) (write-byte 0 s))
     ;; int32 _priority
       (write-long _priority s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _motion_name
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _motion_name (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; bool _skip_planning
     (setq _skip_planning (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; int32 _priority
     (setq _priority (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get play_motion_msgs::PlayMotionGoal :md5sum-) "803175b562438759e071140087987d02")
(setf (get play_motion_msgs::PlayMotionGoal :datatype-) "play_motion_msgs/PlayMotionGoal")
(setf (get play_motion_msgs::PlayMotionGoal :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
string motion_name
bool skip_planning
int32 priority

")



(provide :play_motion_msgs/PlayMotionGoal "803175b562438759e071140087987d02")


