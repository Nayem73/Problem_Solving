// needs testing
select admissions.patient_id, admissions.diagnosis
from admissions
group by admissions.diagnosis
having count(admissions.patient_id) > 1;

// here, cant we use having instead of where?
SELECT patients.allergies
FROM patients
WHERE patients.allergies IS NOT NULL
GROUP BY patients.allergies
ORDER BY COUNT(patients.allergies) DESC

//here, cant I just not use the select statement?
select world.name
from world
where world.population IN(
  select world.population
  from world
  where world.population > 5* (select AVG(world.area) from world)

);
//mine
select world.name
from world
where world.population IN(
	select world.population
	from world
	where world.population > 5 * AVG(world.area)
);

//will the MAX work there?
select world.name
from world
where world.gdp > MAX(
	select world.gdp
	from world
	where world.continent = 'Europe'
);


//instead of
select world.name
from world
where world.gdp > (
	select MAX(world.gdp)
	from world
	where world.continent = 'Europe'
);




/// ---------------------------

select patients.province_id, sum(patients.height)
from patients
group by patients.province_id
having sum(patients.height) >= 7000;


select patients.first_name, patients.second_name, count(*)
from patients
group by patients.first_name, patients.second_name
having count(*) > 1


select world.country
from world
where world.continent IN(
	select world.continent
	from continent
	where world.country = 'Bhutan'
);

select world.country
from world
where world.continent = (select world.continent from world where world.country = 'Bhutan')


select world.country
from world
where world.population > (
	select world.population
	from world
	where world.country = 'Russia'
);

select world.country
from world
where world.population > (select world.population from world where world.country = "United Kingdom")
	AND world.population < (select world.population from world where world.country = "Germany");


select world.country
from world
where world.population > (
	select world.population
	from world
	where world.country = 'United Kingdom'
) AND world.population < (
	select world.population
	from world
	where world.country = 'Germany'
);


select world.name
from world
where world.gdp > (
	select MAX(world.gdp)
	from world
	where world.continent = 'Europe'
);

select sum(world.population)
form world;


select world.continent, count(world.name)
from world
group by world.continent;

select world.continent, sum(world.population)
from world
group by world.continent;

select world.continent, count(world.name)
from world
where world.population >= 200000000
group by world.continent;

select world.continent, sum(world.population)
from world
group by world.continent
having sum(world.population) >= 500000000


create database world;
