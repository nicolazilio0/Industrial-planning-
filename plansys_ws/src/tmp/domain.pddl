(define (domain assignment_problem_4)
    (:requirements :strips :typing :durative-actions :negative-preconditions)

    (:types
        location ; defines a location
        work_station ; defines a work station
        box ; defines a box
        supply ; defines a general supply, will be extended
        robot ; defines a robot
        valve - supply
        bolt - supply
        tool - supply
        warehouse - location
        drone - robot ; defines a drone
        agv - robot  ; defines an agv
        num  ; defines a num for counting        
        )
 


    (:predicates
        
        (atwa ?x - warehouse ?l - location) ; Defines where the warehouse is
        (atws ?x - work_station ?l - location) ; Defines where the work station is
        (atbl ?x - box ?l - location) ; Defines where the box is
        (atbw ?x - box ?l - work_station) ; Defines where the box is
        (ats ?x - supply ?l - location) ; Defines where the supply is
        (atr ?x - robot ?l - location) ; Defines where the robot is
        (contains ?x - box ?y - supply) ; Defines what the box contains

        (has ?ws - work_station ?s - supply) ; Defines what the work station has
        (box_delivered ?b - box ?ws - work_station) ; Defines what boxes have been delivered to the work station


        (carries ?r - robot ?b - box) ; Defines what the robot carries

        (connected ?l1 - location ?l2 - location) ; Defines what locations are connected
        
        (free ?l - location)
        (loaded ?r - robot) ; defines if a robot is loaded
        (empty ?b - box) ; defines if a box is empty
        (has_bolt ?ws - work_station) ; defines if a work station has a bolt
        (has_tool ?ws - work_station) ; defines if a work station has a bolt
        (has_valve ?ws - work_station) ; defines if a work station has a bolt

        (is_bolt ?b - supply)
        (is_valve ?b - supply)
        (is_tool ?b - supply)


        (capacity ?r - robot ?n - num) ; defines the capacity of a robot
        (prec ?n1 - num ?n2 - num) ; defines the precedence of a num
        (succ ?n1 - num ?n2 - num) ; defines the successor of a num
        (max_capacity_for_robot ?r - robot ?n - num) ; defines the maximum capacity of a robot

        (max_capacity ?n - num ?r - robot) ; defines the maximum capacity of a robot
        (min_capacity ?n - num  ?r - robot) ; defines the minimum capacity of a robot
        (busy ?r - robot) ; defines if a robot is busy
    )

    ; moves a robot from one location to another
    
    (:durative-action move_robot
        :parameters (?r - robot ?l1 - location ?l2 - location ?c - num)
        :duration (= ?duration 4)
        :condition (and 
            (at start (and  (atr ?r ?l1) (connected ?l1 ?l2) (free ?l2) (capacity ?r ?c) (min_capacity ?c ?r)
            ))
            (over all (and  (connected ?l1 ?l2) (free ?l2) (capacity ?r ?c) (min_capacity ?c ?r)
            ))
        
        )
        :effect (and 
            (at start (and  (free ?l1) (not (atr ?r ?l1))
            ))
            (at end (and  (not (free ?l2))  (atr ?r ?l2)
            ))
        )
    )
    
    (:durative-action move_box_and_robot
        :parameters (?r - robot ?l1 - location ?l2 - location ?b - box ?c - num)
        :duration (= ?duration 4)
        :condition (and 
            (at start (and (atr ?r ?l1) (connected ?l1 ?l2)  (free ?l2) (carries ?r ?b) (capacity ?r ?c) (not (min_capacity ?c ?r)) 
            ))
            (over all (and (connected ?l1 ?l2) (free ?l2) (carries ?r ?b) (capacity ?r ?c) (not (min_capacity ?c ?r)) 
            ))
          
        )
        :effect (and 
            (at start (and  (free ?l1) (not (atr ?r ?l1))
            ))

            (at end (and  (not (free ?l2))   (atr ?r ?l2) (atbl ?b ?l2)
            ))
        )
    )
    

    (:durative-action pick_box_from_loc
        :parameters (?r - robot ?b - box ?l - location ?c0 - num ?c1 - num)
        :duration (= ?duration 1)
        :condition (and 
            (at start (and (and (atr ?r ?l) (atbl ?b ?l) (not (busy ?r)) (capacity ?r ?c0) (not (max_capacity ?c0 ?r)) (succ ?c0 ?c1))
            ))
            (over all (and (and (atr ?r ?l) (atbl ?b ?l) )
            ))
           
        )
        :effect (and 
            (at start (and (not (capacity ?r ?c0))  (busy ?r) (capacity ?r ?c1) 
            ))
            (at end (and (not (atbl ?b ?l)) (not (busy ?r))  (carries ?r ?b)  
            ))
        )
    )
    (:durative-action deliver_box_to_ws
        :parameters (?r - robot ?b - box ?ws - work_station ?l - location ?s - supply ?c0 - num ?c1 - num)
        :duration (= ?duration 1)
        :condition (and 
            (at start (and (atr ?r ?l) (atws ?ws ?l) (not (busy ?r))  (carries ?r ?b) (contains ?b ?s) (capacity ?r ?c0) (prec ?c0 ?c1) (not (min_capacity ?c0 ?r))
            ))
            (over all (and (atr ?r ?l) (atws ?ws ?l)  (contains ?b ?s) (prec ?c0 ?c1) (not (min_capacity ?c0 ?r))
            ))
          
        )
        :effect (and 
            (at start (and  (atbw ?b ?ws) (not(atbl ?b ?l)) (busy ?r) (not (capacity ?r ?c0)) (capacity ?r ?c1)
            ))
            (at end (and (not(carries ?r ?b)) (not (busy ?r)) (box_delivered ?b ?ws) (ats ?s ?l) 
            ))
        )
    )
    
    (:durative-action fill_box
        :parameters (?r - robot ?b - box ?s - supply ?l - location) 
        :duration (= ?duration 2)
        :condition (and 
            (at start (and (atbl ?b ?l) (not (busy ?r)) (atr ?r ?l) (empty ?b) (ats ?s ?l)
            ))
            (over all (and (atbl ?b ?l) (atr ?r ?l) 
            ))
        
        )
        :effect (and 
            (at start (and (not (ats ?s ?l)) (busy ?r)

            ))
            (at end (and (contains ?b ?s) (not (busy ?r)) (not (empty ?b))

            ))
        )
    )
    
    (:durative-action empty_box
        :parameters (?r - robot ?b - box ?s - supply ?l - location ?ws - work_station)
        :duration (= ?duration 2)
        :condition (and 
            (at start (and (atr ?r ?l) (atws ?ws ?l) (not (busy ?r)) (contains ?b ?s)   (box_delivered ?b ?ws) (ats ?s ?l)
            ))
            (over all (and (atr ?r ?l) (atws ?ws ?l)  (box_delivered ?b ?ws)
            ))
         
        )
        :effect (and 
            (at start (and (not (ats ?s ?l)) (busy ?r)
            ))
            (at end (and (not (contains ?b ?s))(not (busy ?r)) (empty ?b) (has ?ws ?s) (not (ats ?s ?l))
            ))
        )
    )
    
    (:durative-action bolt_acquired
        :parameters (?ws - work_station ?s - supply)
        :duration (= ?duration 0.1)
        :condition (and 
            (at start (and  (has ?ws ?s) (is_bolt ?s)
            ))
         
        )
        :effect (and 
        
            (at end (and (has_bolt ?ws)
            ))
        )
    )
        (:durative-action tool_acquired
        :parameters (?ws - work_station ?s - supply)
        :duration (= ?duration 0.1)
        :condition (and 
            (at start (and  (has ?ws ?s) (is_tool ?s)
            ))
         
        )
        :effect (and 
        
            (at end (and (has_tool ?ws)
            ))
        )
    )    (:durative-action valve_acquired
        :parameters (?ws - work_station ?s - supply)
        :duration (= ?duration 0.1)
        :condition (and 
            (at start (and  (has ?ws ?s) (is_valve ?s)
            ))
         
        )
        :effect (and 
        
            (at end (and (has_valve ?ws)
            ))
        )
    )



    
    


)













