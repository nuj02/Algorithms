# Week 6
using Plots

## Solve forced spring equation
t = LinRange(0,10,1001) #time discretization
h = t[2] #step size
y_explicit = zeros(2,length(t)) # y[1,1] = y(0), y[1,2] = y'(0)
y_implicit = zeros(2,length(t)) # y[1,1] = y(0), y[1,2] = y'(0)

function d2ydt2(t, y) 
    return -y + 0.1 * sin(t)
end

for i = 2:length(t)
    y_explicit[:,i] = y_explicit[:,i-1] + h * [y_explicit[2,i-1]; d2ydt2(t[i-1], y_explicit[1,i-1])]
end

plot(t, y_explicit[1,:],
     title = "Forced Spring Equation", 
     xlabel="Time", 
     ylabel="Displacement",
     label = "Forward Euler")