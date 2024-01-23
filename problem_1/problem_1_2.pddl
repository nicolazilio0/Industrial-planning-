(define (problem problem_1) (:domain assignment_problem_1)
(:objects 
    r1 r2 r3 - robot
    l1 l2 l3 l4 l5 l6 - location
    centralwarehouse - warehouse
    b1 b2 b3 b4 b5 b6 - box
    valve1 valve2 valve3 valve4 valve5 valve6 - valve
    bolt1 bolt2 bolt3 bolt4 bolt5 bolt6 - bolt
    tool1 tool2 tool3 tool4 tool5 tool6 - tool
    ws1 ws2 ws3 ws4 ws5 ws6 ws7 ws8 ws9 ws10 - work_station

    )

(:init
    ; robot starts at central warehouse
    (atr r1 centralwarehouse)
    (atr r2 centralwarehouse)
    (atr r3 centralwarehouse)

    ; all locations are initially free
    (free l1)
    (free l2)
    (free l3)
    (free l4)
    (free l5)
    (free l6)


    ; all supplies are at central warehouse
    (ats valve1 centralwarehouse)
    (ats valve2 centralwarehouse)
    (ats valve3 centralwarehouse)
    (ats valve4 centralwarehouse)
    (ats valve5 centralwarehouse)
    (ats valve6 centralwarehouse)
    (ats bolt1 centralwarehouse)
    (ats bolt2 centralwarehouse)
    (ats bolt3 centralwarehouse)
    (ats bolt4 centralwarehouse)
    (ats bolt5 centralwarehouse)
    (ats bolt6 centralwarehouse)
    (ats tool1 centralwarehouse)
    (ats tool2 centralwarehouse)
    (ats tool3 centralwarehouse)
    (ats tool4 centralwarehouse)
    (ats tool5 centralwarehouse)
    (ats tool6 centralwarehouse)

    ; defines the hierarcy of supplies
    (is_bolt bolt1)
    (is_bolt bolt2)
    (is_bolt bolt3)
    (is_bolt bolt4)
    (is_bolt bolt5)
    (is_bolt bolt6)
    (is_valve valve1)
    (is_valve valve2)
    (is_valve valve3)
    (is_valve valve4)
    (is_valve valve5)
    (is_valve valve6)
    (is_tool tool1)
    (is_tool tool2)
    (is_tool tool3)
    (is_tool tool4)
    (is_tool tool5)
    (is_tool tool6)

    ; all boxes are at central warehouse
    (atbl b1 centralwarehouse)
    (atbl b2 centralwarehouse)
    (atbl b3 centralwarehouse)
    (atbl b4 centralwarehouse)
    (atbl b5 centralwarehouse)
    (atbl b6 centralwarehouse)
    
    ; all boxes are empty
    (empty b1)
    (empty b2)
    (empty b3)
    (empty b4)
    (empty b5)
    (empty b6)

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
))

)
