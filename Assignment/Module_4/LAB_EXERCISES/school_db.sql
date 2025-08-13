-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Aug 12, 2025 at 05:42 PM
-- Server version: 10.4.32-MariaDB
-- PHP Version: 8.0.30

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `school_db`
--

DELIMITER $$
--
-- Procedures
--
CREATE DEFINER=`root`@`localhost` PROCEDURE `CheckEmployeeDepartmentname` (IN `emp_id` INT)   BEGIN
    DECLARE dept_id INT;
    DECLARE msg VARCHAR(100);

    SELECT department_id INTO dept_id
    FROM employees
    WHERE employee_id = emp_id;

    IF dept_id = 10 THEN
        SET msg = 'Employee works in the Administration department.';
    ELSEIF dept_id = 20 THEN
        SET msg = 'Employee works in the Marketing department.';
    ELSE
        SET msg = 'Employee works in some other department.';
    END IF;

    SELECT msg AS Department_Message;

END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `DisplayCourses` ()   BEGIN
    DECLARE v_course_name VARCHAR(100);
    DECLARE done INT DEFAULT 0;
    DECLARE course_cursor CURSOR FOR SELECT course_name FROM courses;
    DECLARE CONTINUE HANDLER FOR NOT FOUND SET done = 1;

    OPEN course_cursor;

    read_loop: LOOP
        FETCH course_cursor INTO v_course_name;
        IF done = 1 THEN
            LEAVE read_loop;
        END IF;
        SELECT v_course_name AS Course_Name;
    END LOOP;

    CLOSE course_cursor;
END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `DisplayEmployeeNames` ()   BEGIN
    DECLARE done INT DEFAULT FALSE;
    DECLARE emp_name VARCHAR(100);
    DECLARE all_names TEXT DEFAULT '';

    DECLARE emp_cursor CURSOR FOR SELECT employee_name FROM employees;
    DECLARE CONTINUE HANDLER FOR NOT FOUND SET done = TRUE;

    OPEN emp_cursor;

    read_loop: LOOP
        FETCH emp_cursor INTO emp_name;
        IF done THEN
            LEAVE read_loop;
        END IF;
        SET all_names = CONCAT(all_names, emp_name, ', ');
    END LOOP read_loop;

    CLOSE emp_cursor;

    IF LENGTH(all_names) > 2 THEN
        SET all_names = LEFT(all_names, LENGTH(all_names) - 2);
    END IF;

    SELECT all_names AS EmployeeNames;
END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `GetCourseDetails` (IN `input_course_id` INT)   BEGIN
    SELECT *
    FROM courses
    WHERE course_id = input_course_id;
END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `GetEmployeeDetails` ()   BEGIN
    DECLARE done INT DEFAULT 0;
    DECLARE v_id INT;
    DECLARE v_name VARCHAR(100);
    DECLARE v_salary DECIMAL(10,2);
    DECLARE emp_cursor CURSOR FOR
        SELECT employee_id, employee_name, salary FROM employees;
    DECLARE CONTINUE HANDLER FOR NOT FOUND SET done = 1;

    OPEN emp_cursor;

    read_loop: LOOP
        FETCH emp_cursor INTO v_id, v_name, v_salary;
        IF done THEN
            LEAVE read_loop;
        END IF;
        SELECT v_id AS ID, v_name AS Name, v_salary AS Salary;
    END LOOP;

    CLOSE emp_cursor;
END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `GetEmployeenames` ()   BEGIN
    DECLARE v_emp_name VARCHAR(100);
    DECLARE v_salary DECIMAL(10,2);
    DECLARE done BOOLEAN DEFAULT FALSE;

    -- Declare cursor
    DECLARE emp_cursor CURSOR FOR
        SELECT employee_name, salary FROM employees;

    -- Handler to exit loop when no more rows
    DECLARE CONTINUE HANDLER FOR NOT FOUND SET done = TRUE;

    -- Open cursor
    OPEN emp_cursor;

    read_loop: LOOP
        FETCH emp_cursor INTO v_emp_name, v_salary;

        -- Exit when no more rows
        IF done THEN
            LEAVE read_loop;
        END IF;

        -- Show the details
        SELECT v_emp_name AS EmployeeName, v_salary AS Salary;
    END LOOP;

    -- Close cursor
    CLOSE emp_cursor;
END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `GetEmployeesByDepartmentname` (IN `dept_name` VARCHAR(50))   BEGIN
    SELECT *
    FROM employees
    WHERE department_name = dept_name;
END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `GetTotalEmployees` ()   BEGIN
  SELECT COUNT(*) AS total_employees FROM employees;
END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `GetTotalSales` ()   BEGIN
  SELECT IFNULL(SUM(order_amount), 0) AS total_sales FROM orders;
END$$

DELIMITER ;

-- --------------------------------------------------------

--
-- Table structure for table `courses`
--

CREATE TABLE `courses` (
  `course_id` int(11) NOT NULL,
  `course_name` varchar(50) DEFAULT NULL,
  `course_duration` varchar(50) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `courses`
--

INSERT INTO `courses` (`course_id`, `course_name`, `course_duration`) VALUES
(1, 'flutter', '6 months'),
(2, 'javaa', '8 months'),
(4, 'cybersecurity', '5 months'),
(5, 'abc', '6 months'),
(6, 'mnb', '5 months'),
(7, 'pqr', '6 months');

-- --------------------------------------------------------

--
-- Table structure for table `departments`
--

CREATE TABLE `departments` (
  `department_id` int(11) NOT NULL,
  `department_name` varchar(50) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `departments`
--

INSERT INTO `departments` (`department_id`, `department_name`) VALUES
(1, 'Human Resources'),
(2, 'Finance'),
(3, 'Engineering');

-- --------------------------------------------------------

--
-- Table structure for table `employees`
--

CREATE TABLE `employees` (
  `employee_id` int(11) NOT NULL,
  `employee_name` varchar(50) NOT NULL,
  `department_id` int(11) NOT NULL,
  `department_name` varchar(100) DEFAULT NULL,
  `salary` decimal(10,2) DEFAULT NULL,
  `last_modified` timestamp NOT NULL DEFAULT current_timestamp() ON UPDATE current_timestamp()
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `employees`
--

INSERT INTO `employees` (`employee_id`, `employee_name`, `department_id`, `department_name`, `salary`, `last_modified`) VALUES
(10, 'Alice', 0, NULL, NULL, '2025-08-12 15:27:19'),
(11, 'Bob', 0, NULL, NULL, '2025-08-12 15:27:19'),
(101, 'Abc', 1, 'Human Resources', 50000.00, '2025-08-12 14:00:13'),
(102, 'dfg', 3, 'Engineering', 35000.00, '2025-08-12 14:00:13'),
(103, 'New Name', 2, 'Finance', 40000.00, '2025-08-12 14:03:30'),
(104, 'mno', 3, 'Engineering', 55000.00, '2025-08-12 14:00:13');

--
-- Triggers `employees`
--
DELIMITER $$
CREATE TRIGGER `after_employee_insert` AFTER INSERT ON `employees` FOR EACH ROW BEGIN
    INSERT INTO employee_log (employee_id, employee_name, department_name, salary)
    VALUES (NEW.employee_id, NEW.employee_name, NEW.department_name, NEW.salary);
END
$$
DELIMITER ;
DELIMITER $$
CREATE TRIGGER `trg_update_last_modified` BEFORE UPDATE ON `employees` FOR EACH ROW BEGIN
    SET NEW.last_modified = CURRENT_TIMESTAMP;
END
$$
DELIMITER ;

-- --------------------------------------------------------

--
-- Stand-in structure for view `employee_department_salary_view`
-- (See below for the actual view)
--
CREATE TABLE `employee_department_salary_view` (
`employee_id` int(11)
,`employee_name` varchar(50)
,`department_name` varchar(50)
,`salary` decimal(10,2)
);

-- --------------------------------------------------------

--
-- Stand-in structure for view `employee_department_view`
-- (See below for the actual view)
--
CREATE TABLE `employee_department_view` (
`employee_id` int(11)
,`employee_name` varchar(50)
,`department_name` varchar(50)
);

-- --------------------------------------------------------

--
-- Table structure for table `employee_log`
--

CREATE TABLE `employee_log` (
  `employee_id` int(11) DEFAULT NULL,
  `employee_name` varchar(100) DEFAULT NULL,
  `department_name` varchar(100) DEFAULT NULL,
  `salary` decimal(10,2) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `employee_log`
--

INSERT INTO `employee_log` (`employee_id`, `employee_name`, `department_name`, `salary`) VALUES
(107, 'Jiya', 'Finance', 75000.00),
(10, 'Alice', NULL, NULL),
(11, 'Bob', NULL, NULL);

-- --------------------------------------------------------

--
-- Table structure for table `orders`
--

CREATE TABLE `orders` (
  `order_id` int(11) NOT NULL,
  `order_amount` decimal(10,2) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `orders`
--

INSERT INTO `orders` (`order_id`, `order_amount`) VALUES
(1, 100.50),
(2, 250.00),
(3, 349.99),
(4, 400.00);

-- --------------------------------------------------------

--
-- Table structure for table `students`
--

CREATE TABLE `students` (
  `student_id` int(11) NOT NULL,
  `student_name` varchar(50) DEFAULT NULL,
  `age` int(11) DEFAULT NULL,
  `class` varchar(50) DEFAULT NULL,
  `address` varchar(25) DEFAULT NULL,
  `teacher_id` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `students`
--

INSERT INTO `students` (`student_id`, `student_name`, `age`, `class`, `address`, `teacher_id`) VALUES
(1, 'Xyz ', 14, 'Mathematics', 'Near Central Park', NULL),
(2, 'Pqr ', 20, 'Science', 'Near River Bank', NULL),
(3, 'Lmn ', 15, 'History', 'Near City Mall', NULL),
(4, 'Stu ', 14, 'English Literature', 'Near School Gate', NULL),
(5, 'Rst ', 8, 'Computer Science', 'Near Bus Stop', NULL);

-- --------------------------------------------------------

--
-- Table structure for table `teachers`
--

CREATE TABLE `teachers` (
  `teacher_id` int(11) NOT NULL,
  `teacher_name` varchar(100) NOT NULL,
  `subject` varchar(100) NOT NULL,
  `email` varchar(100) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Structure for view `employee_department_salary_view`
--
DROP TABLE IF EXISTS `employee_department_salary_view`;

CREATE ALGORITHM=UNDEFINED DEFINER=`root`@`localhost` SQL SECURITY DEFINER VIEW `employee_department_salary_view`  AS SELECT `e`.`employee_id` AS `employee_id`, `e`.`employee_name` AS `employee_name`, `d`.`department_name` AS `department_name`, `e`.`salary` AS `salary` FROM (`employees` `e` join `departments` `d` on(`e`.`department_id` = `d`.`department_id`)) WHERE `e`.`salary` >= 50000 ;

-- --------------------------------------------------------

--
-- Structure for view `employee_department_view`
--
DROP TABLE IF EXISTS `employee_department_view`;

CREATE ALGORITHM=UNDEFINED DEFINER=`root`@`localhost` SQL SECURITY DEFINER VIEW `employee_department_view`  AS SELECT `e`.`employee_id` AS `employee_id`, `e`.`employee_name` AS `employee_name`, `d`.`department_name` AS `department_name` FROM (`employees` `e` join `departments` `d` on(`e`.`department_id` = `d`.`department_id`)) ;

--
-- Indexes for dumped tables
--

--
-- Indexes for table `courses`
--
ALTER TABLE `courses`
  ADD PRIMARY KEY (`course_id`);

--
-- Indexes for table `departments`
--
ALTER TABLE `departments`
  ADD PRIMARY KEY (`department_id`);

--
-- Indexes for table `employees`
--
ALTER TABLE `employees`
  ADD PRIMARY KEY (`employee_id`),
  ADD KEY `department_id` (`department_id`);

--
-- Indexes for table `orders`
--
ALTER TABLE `orders`
  ADD PRIMARY KEY (`order_id`);

--
-- Indexes for table `students`
--
ALTER TABLE `students`
  ADD PRIMARY KEY (`student_id`),
  ADD KEY `fk_teacher` (`teacher_id`);

--
-- Indexes for table `teachers`
--
ALTER TABLE `teachers`
  ADD PRIMARY KEY (`teacher_id`),
  ADD UNIQUE KEY `email` (`email`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `courses`
--
ALTER TABLE `courses`
  MODIFY `course_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=106;

--
-- AUTO_INCREMENT for table `departments`
--
ALTER TABLE `departments`
  MODIFY `department_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=4;

--
-- AUTO_INCREMENT for table `employees`
--
ALTER TABLE `employees`
  MODIFY `employee_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=114;

--
-- AUTO_INCREMENT for table `orders`
--
ALTER TABLE `orders`
  MODIFY `order_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;

--
-- AUTO_INCREMENT for table `students`
--
ALTER TABLE `students`
  MODIFY `student_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=6;

--
-- AUTO_INCREMENT for table `teachers`
--
ALTER TABLE `teachers`
  MODIFY `teacher_id` int(11) NOT NULL AUTO_INCREMENT;

--
-- Constraints for dumped tables
--

--
-- Constraints for table `employees`
--
ALTER TABLE `employees`
  ADD CONSTRAINT `employees_ibfk_1` FOREIGN KEY (`department_id`) REFERENCES `departments` (`department_id`);

--
-- Constraints for table `students`
--
ALTER TABLE `students`
  ADD CONSTRAINT `fk_teacher` FOREIGN KEY (`teacher_id`) REFERENCES `teachers` (`teacher_id`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
