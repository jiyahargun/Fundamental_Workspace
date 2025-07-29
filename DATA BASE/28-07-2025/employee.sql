-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Jul 29, 2025 at 06:56 AM
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
-- Database: `topstec`
--

-- --------------------------------------------------------

--
-- Table structure for table `employee`
--

CREATE TABLE `employee` (
  `id` int(11) NOT NULL,
  `empno` int(11) DEFAULT NULL,
  `Firstname` varchar(30) DEFAULT NULL,
  `LastName` varchar(30) DEFAULT NULL,
  `Designation` varchar(30) DEFAULT NULL,
  `Hiredate` varchar(30) DEFAULT NULL,
  `salary` int(11) DEFAULT NULL,
  `comm` varchar(20) DEFAULT NULL,
  `DeptNo` varchar(20) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `employee`
--

INSERT INTO `employee` (`id`, `empno`, `Firstname`, `LastName`, `Designation`, `Hiredate`, `salary`, `comm`, `DeptNo`) VALUES
(1, 1001, 'STEFAN', 'SALVATORE', 'BUSSINESS ANALYST', '17-NOV-97', 50000, '-', '40'),
(2, 1002, 'DIANA', 'LORRENCE', 'TECHNICAL ARCHITECT', '01-MAY-00', 70000, '-', '10'),
(3, 1003, 'JAMES', 'MADINSAON', 'MANAGER', '19-JUN-88', 80400, '-', '40'),
(4, 1004, 'JONES', 'NICK', 'HR ANALYST', '02-JAN-03', 47000, '-', '30'),
(5, 1005, 'LUCY ', 'GELLLER', 'HR ASSOCIATE', '13-JUL-08', 35000, '200', '30'),
(6, 1006, 'ISAAC', 'STEFAN', 'TRAINEE', '13-DEC-15', 20000, '-', '40'),
(7, 1007, 'JOHN', 'SMITH', 'CLERK', '17-DEC-15', 12000, '-', '10'),
(8, 1008, 'NANCY', 'GILLBERT', 'SALSMAN', '20-FEB-81', 18000, '300', '10');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `employee`
--
ALTER TABLE `employee`
  ADD PRIMARY KEY (`id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `employee`
--
ALTER TABLE `employee`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=9;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
