function visualization(position)
RobotRadius = 1; %desired robot radius
StartPos = position; %starting position of the robot/robots. Enter a vector (for 1 robot) of a matrix (for n robots) having the form [positionX_robot1 positionY_robot1;positionX_robot2 positionY_robot2; ... ...; positionX_robotN positionY_robotN;] 
Nrobots = numel(StartPos(:,1)); %take the number of robots in simulation
colors = ["red", "blue", "green", "cyan", "magenta", "black", "yellow", "#EDB120"]; %different possible robot colors


for i=1:Nrobots
    
    % create the ith robot 
    pos = [StartPos(i,:)-RobotRadius 2*RobotRadius 2*RobotRadius]; %position of the robot by considering its radius
    r = rectangle('Position',pos,'Curvature',[1 1], 'FaceColor', colors(i), 'Edgecolor','none'); %graph of the robot as it were a kind of circle, for simplicity
    
    axis([0 100 0 100]) %axis of the graph: x axis from 0 to 100, the same for y
    title('Robots simulation');
    figure(1); hold on;
    %pause(0.5); 
    %clf
    
    

end
