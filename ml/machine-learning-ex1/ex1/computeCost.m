function J = computeCost(X, y, theta)
%COMPUTECOST Compute cost for linear regression
%   J = COMPUTECOST(X, y, theta) computes the cost of using theta as the
%   parameter for linear regression to fit the data points in X and y

% Initialize some useful values
m = length(y); % number of training examples

% You need to return the following variables correctly 
J = 0;

% ====================== YOUR CODE HERE ======================
% Instructions: Compute the cost of a particular choice of theta
%               You should set J to the cost.
% Y =  X * theta;
% cost = Y - y;
% cost = cost.^2;
% J = sum(cost) / 2 / length(Y);
J = (X * theta - y)' * (X * theta - y) / 2 / m;
% =========================================================================

end