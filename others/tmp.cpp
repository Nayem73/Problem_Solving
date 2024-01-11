select client.client_name
FROM client
where client.branch_id IN(
	select branch.branch_id
	FROM branch
	where branch.mgr_id IN(
		select employee.employee_id
		FROM employee
		where employee.first_name = "Michael" AND employee.last_name = "Scott"

	)
);