% Plotting demand forecast data
demand_forecast = [10, 15, 20, 12, 8];
periods = 1:length(demand_forecast);

figure;
bar(periods, demand_forecast, 'b');
xlabel('Periods');
ylabel('Demand Forecast');
title('Demand Forecast Over Time');

% Example: Plotting total cost variation over iterations (assuming)
total_costs = [50, 75, 100, 80, 60];  % Example total costs corresponding to each period

figure;
plot(periods, total_costs, '-o', 'LineWidth', 2, 'MarkerEdgeColor', 'k', 'MarkerFaceColor', 'g', 'MarkerSize', 8);
xlabel('Periods');
ylabel('Total Cost ($)');
title('Total Cost Variation Over Time');
grid on;
