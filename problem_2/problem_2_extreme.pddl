(define (problem problem_2_2) (:domain assignment_problem_2)
(:objects 
    agv1 agv2 agv3 - agv
    drone1 drone2 drone3 drone4 - drone
    l1 l2 l3 l4 l5 l6 l7 l8 l9 l10 l11 l12 l13 l14  - location
    centralwarehouse - warehouse
    b1 b2 b3 b4 b5 b6 b7 b8 b9 b10 - box
    valve1 valve2 valve3 valve4 valve5 valve6 valve7 valve8 valve9 - valve
    bolt1 bolt2 bolt3 bolt4 bolt5 bolt6 bolt7 bolt8 bolt9 - bolt
    tool1 tool2 tool3 tool4 tool5 tool6 tool7 tool8 tool9 - tool
    ws1 ws2 ws3 ws4 ws5 ws6 ws7 ws8 ws9 ws10 ws11 ws12 ws13 ws14 ws15 - work_station
    s0 s1 s2 s3 - num

    ) 

(:init

    ; defines counting method
    (succ s0 s1)
    (succ s1 s2)
    (succ s2 s3)  
    (prec s1 s0)
    (prec s2 s1)
    (prec s3 s2)

    ; defines capacity of each robot
    (max_capacity s3 agv1)
    (min_capacity s0 agv1)
    (max_capacity s3 agv2)
    (min_capacity s0 agv2)
    (max_capacity s3 agv3)
    (min_capacity s0 agv3)
    (max_capacity s2 drone1)
    (min_capacity s0 drone1)
    (max_capacity s1 drone2)
    (min_capacity s0 drone2)
    (max_capacity s1 drone3)
    (min_capacity s0 drone3)
    (max_capacity s1 drone4)
    (min_capacity s0 drone4)

    ; define initial capacity of each robot to be 0
    (capacity agv1 s0 )
    (capacity agv2 s0 )
    (capacity agv3 s0 )
    (capacity drone1 s0 )
    (capacity drone2 s0 )
    (capacity drone3 s0 )
    (capacity drone4 s0 )

    ; robot starts at central warehouse
    (atr drone1 centralwarehouse)
    (atr agv1 centralwarehouse)
    (atr drone2 centralwarehouse)
    (atr agv2 centralwarehouse)
    (atr drone3 centralwarehouse)
    (atr agv3 centralwarehouse)
    (atr drone4 centralwarehouse)

    ; all locations are initially free
    (free l1)
    (free l2)
    (free l3)
    (free l4)
    (free l5)
    (free l6)
    (free l7)
    (free l8)
    (free l9)
    (free l10)
    (free l11)
    (free l12)
    (free l13)
    (free l14)

    ; all supplies are at central warehouse
    (ats valve1 centralwarehouse)
    (ats valve2 centralwarehouse)
    (ats valve3 centralwarehouse)
    (ats valve4 centralwarehouse)
    (ats valve5 centralwarehouse)
    (ats valve6 centralwarehouse)
    (ats valve7 centralwarehouse)
    (ats valve8 centralwarehouse)
    (ats valve9 centralwarehouse)

    (ats bolt1 centralwarehouse)
    (ats bolt2 centralwarehouse)
    (ats bolt3 centralwarehouse)
    (ats bolt4 centralwarehouse)
    (ats bolt5 centralwarehouse)
    (ats bolt6 centralwarehouse)
    (ats bolt7 centralwarehouse)
    (ats bolt8 centralwarehouse)
    (ats bolt9 centralwarehouse)

    (ats tool1 centralwarehouse)
    (ats tool2 centralwarehouse)
    (ats tool3 centralwarehouse)
    (ats tool4 centralwarehouse)
    (ats tool5 centralwarehouse)
    (ats tool6 centralwarehouse)
    (ats tool7 centralwarehouse)
    (ats tool8 centralwarehouse)
    (ats tool9 centralwarehouse)

    ; definition of the sub-class for each sulpply
    (is_bolt bolt1)
    (is_bolt bolt2)
    (is_bolt bolt3)
    (is_bolt bolt4)
    (is_bolt bolt5)
    (is_bolt bolt6)
    (is_bolt bolt7)
    (is_bolt bolt8)
    (is_bolt bolt9)

    (is_valve valve1)
    (is_valve valve2)
    (is_valve valve3)
    (is_valve valve4)
    (is_valve valve5)
    (is_valve valve6)
    (is_valve valve7)
    (is_valve valve8)
    (is_valve valve9)

    (is_tool tool1)
    (is_tool tool2)
    (is_tool tool3)
    (is_tool tool4)
    (is_tool tool5)
    (is_tool tool6)
    (is_tool tool7)
    (is_tool tool8)
    (is_tool tool9)

    ; all boxes are at central warehouse
    (atbl b1 centralwarehouse)
    (atbl b2 centralwarehouse)
    (atbl b3 centralwarehouse)
    (atbl b4 centralwarehouse)
    (atbl b5 centralwarehouse)
    (atbl b6 centralwarehouse)
    (atbl b7 centralwarehouse)
    (atbl b8 centralwarehouse)
    (atbl b9 centralwarehouse)
    (atbl b10 centralwarehouse)

    ; all boxes are empty
    (empty b1)
    (empty b2)
    (empty b3)
    (empty b4)
    (empty b5)
    (empty b6)
    (empty b7)
    (empty b8)
    (empty b9)
    (empty b10)

    ; create map
    (connected centralwarehouse l1)
    (connected centralwarehouse l2)
    (connected centralwarehouse l3)
    (connected l3 l4)
    (connected l4 l3)
    (connected l1 centralwarehouse)
    (connected l2 centralwarehouse)
    (connected l3 centralwarehouse)
    (connected l4 l5)
    (connected l5 l4)
    (connected l5 l6)
    (connected l6 l5)
    (connected l6 l1)
    (connected l1 l6)
    (connected l2 l7)
    (connected l7 l2)
    (connected l7 l8)
    (connected l8 l7)
    (connected l8 centralwarehouse)
    (connected centralwarehouse l8)
    (connected l9 centralwarehouse)
    (connected centralwarehouse l9)
    (connected l9 l10)
    (connected l10 l9)
    (connected l11 centralwarehouse)
    (connected centralwarehouse l11)
    (connected l11 l12)
    (connected l12 l11)
    (connected l13 l5)
    (connected l5 l13)
    (connected l6 l14)
    (connected l14 l6)

    ; put workstation at location
    (atws ws1 l1)
    (atws ws2 l2)
    (atws ws3 l3)
    (atws ws4 l4)
    (atws ws5 l4)
    (atws ws6 l5)
    (atws ws7 l5)
    (atws ws8 l6)
    (atws ws9 l6)
    (atws ws10 l6)
    (atws ws11 l7)
    (atws ws12 l8)
    (atws ws13 l10)
    (atws ws14 l10)
    (atws ws15 l12)

)

(:goal (and

    (has_bolt ws3)
    (has_tool ws2)
    (has_bolt ws2)
    (has_valve ws1)
    (has_bolt ws5)
    (has_tool ws4)
    (has_bolt ws6)
    (has_tool ws6)
    (has_valve ws6)
    (has_bolt ws7)
    (has_tool ws7)
    (has_valve ws7)
    (has_bolt ws8)
    (has_tool ws9)
    (has_bolt ws9)
    
))


)
