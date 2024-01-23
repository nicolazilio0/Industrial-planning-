(define (domain assignment_problem_2)
    (:requirements :strips :typing :negative-preconditions)

    (:types
        location - object ; defines a location
        work_station - object ; defines a work station
        box - object ; defines a box
        supply - object ; defines a general supply, will be extended
        robot - object ; defines a robot
        valve - supply ; defines a valve, inherits from supply
        bolt - supply ; defines a bolt, inherits from supply
        tool - supply ; defines a tool, inherits from supply
        warehouse - location ; defines a warehouse, inherits from location
        drone - robot ; defines a drone
        agv - robot  ; defines an agv
        num - object ; defines a num for counting 
        
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
        
        (is_bolt ?b - supply) ; used as a flag to check if a supply is a bolt
        (is_valve ?b - supply) ; used as a flag to check if a supply is a valve
        (is_tool ?b - supply) ; used as a flag to check if a supply is a tool 


        (capacity ?r - robot ?n - num) ; defines the capacity of a robot
        (prec ?n1 - num ?n2 - num) ; defines the precedence of a num
        (succ ?n1 - num ?n2 - num) ; defines the successor of a num

        (max_capacity ?n - num ?r - robot) ; defines the maximum capacity of a robot
        (min_capacity ?n - num  ?r - robot) ; defines the minimum capacity of a robot
    
    )

    ; moves a robot from one location to another
    (:action move_robot
        :parameters (?r - robot ?l1 - location ?l2 - location ?c - num)
        :precondition (and (atr ?r ?l1) (connected ?l1 ?l2) (free ?l2) (capacity ?r ?c) (min_capacity ?c ?r))
        :effect (and  (not (free ?l2)) (free ?l1) (atr ?r ?l2) (not (atr ?r ?l1)))
    )

    ; moves a robot from one location to another while carrying a box
     (:action move_box_and_robot
        :parameters (?r - robot ?l1 - location ?l2 - location ?b - box ?c - num)
        :precondition (and (atr ?r ?l1) (connected ?l1 ?l2) (free ?l2) (carries ?r ?b) (capacity ?r ?c) (not (min_capacity ?c ?r)) )
        :effect (and  (not (free ?l2)) (free ?l1) (atr ?r ?l2) (not (atr ?r ?l1)) (atbl ?b ?l2) )
    )

    ; pick up a box from a location and loads it on a robot
    (:action pick_box_from_location
        :parameters (?r - robot ?b - box ?l - location ?c0 - num ?c1 - num)
        :precondition (and (atr ?r ?l) (atbl ?b ?l) (capacity ?r ?c0) (not (max_capacity ?c0 ?r)) (succ ?c0 ?c1))
        :effect (and  (not (atbl ?b ?l)) (carries ?r ?b) (not (capacity ?r ?c0)) (capacity ?r ?c1) )
    )

    ; delivers the box to the work station
    (:action deliver_box_to_ws
        :parameters (?r - robot ?b - box ?ws - work_station ?l - location ?s - supply ?c0 - num ?c1 - num)
        :precondition (and (atr ?r ?l) (atws ?ws ?l)  (carries ?r ?b) (contains ?b ?s) (capacity ?r ?c0) (prec ?c0 ?c1) (not (min_capacity ?c0 ?r)))
        :effect (and  (not(carries ?r ?b)) (atbw ?b ?ws) (not(atbl ?b ?l)) (box_delivered ?b ?ws) (ats ?s ?l) (not (capacity ?r ?c0)) (capacity ?r ?c1) )
    )

    ; fills a box with a supply
    (:action fill_box
        :parameters (?r - robot ?b - box ?s - supply ?l - location) 
        :precondition (and (atbl ?b ?l) (atr ?r ?l) (empty ?b) (ats ?s ?l) )
        :effect (and (contains ?b ?s) (not (empty ?b)) (not (ats ?s ?l)))
    )

    ; empties a box that has been delivered to a work station and assigns the supply to the workstation
    (:action empty_box
        :parameters (?r - robot ?b - box ?s - supply ?l - location ?ws - work_station)
        :precondition (and (atr ?r ?l) (atws ?ws ?l) (contains ?b ?s) (ats ?s ?l) (box_delivered ?b ?ws) (ats ?s ?l) (not (loaded ?r)) )
        :effect (and (not (contains ?b ?s)) (empty ?b) (has ?ws ?s) (not (ats ?s ?l)) )
    )


    ; used to trigger the goal predicates once a supply reaches a work station
    (:action bolt_acquired
        :parameters (?ws - work_station ?s - supply)
        :precondition (and (has ?ws ?s) (is_bolt ?s))
        :effect (and (has_bolt ?ws))
    )
    
    (:action tool_acquired
        :parameters (?ws - work_station ?s - supply)
        :precondition (and (has ?ws ?s) (is_tool ?s))
        :effect (and (has_tool ?ws))
    )
    (:action valve_acquired
        :parameters (?ws - work_station ?s - supply)
        :precondition (and (has ?ws ?s) (is_valve ?s))
        :effect (and (has_valve ?ws))
    )
    

)













