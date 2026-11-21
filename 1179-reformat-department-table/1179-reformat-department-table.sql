# Write your MySQL query statement below
select id,
max(if(month="Jan",revenue,null)) as Jan_Revenue,
max(if(month="Feb",revenue,null)) as Feb_Revenue,
max(if(month="Mar",revenue,null)) as Mar_Revenue,
max(if(month="Apr",revenue,null)) as Apr_Revenue,
max(if(month="May",revenue,null)) as May_Revenue,
max(if(month="Jun",revenue,null)) as Jun_Revenue,
max(if(month="Jul",revenue,null)) as Jul_Revenue,
max(if(month="Aug",revenue,null)) as Aug_Revenue,
max(if(month="Sep",revenue,null)) as sep_revenue,
max(if(month="Oct",revenue,null)) as Oct_revenue,
max(if(month="Nov",revenue,null)) as Nov_revenue,
max(if(month="Dec",revenue,null)) as Dec_revenue
from Department
group by id;
