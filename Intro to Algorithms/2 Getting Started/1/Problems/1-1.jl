using Plots

t = Float64[ 10^6, 60 * 10^6, 60^2 * 10^6, 24* 60^2 * 10^6, 30* 24* 60^2 * 10^6, 
    365 * 24* 60^2 * 10^6, 10* 365 * 24* 60^2 * 10^6]

n = zeros(Float64,(8,7))

n[2,:] = t .^ 2
n[3,:] = t
n[5,:] = sqrt.(t)
n[6,:] = t .^ (1/3)
n[7,:] = log2.(t)

plot(t,n')