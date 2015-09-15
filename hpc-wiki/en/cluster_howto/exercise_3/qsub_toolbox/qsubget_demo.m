% load job id list created by qsubfeval_demo.m 
load jids.mat

out = {};
% retrieve output from each job
for i = 1:5
    out{i} = qsubget( jids{i} )
end

% print output from each job
for i = 1:5
    out{i}
end
