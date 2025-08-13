-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Aug 13, 2025 at 07:28 AM
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
-- Database: `library_db`
--

DELIMITER $$
--
-- Procedures
--
CREATE DEFINER=`root`@`localhost` PROCEDURE `BookPriceOperations` ()   BEGIN
    -- Declare variables (no CONSTANT keyword in MySQL)
    DECLARE TAX_RATE DECIMAL(5,2) DEFAULT 0.10; -- 10% tax
    DECLARE DISCOUNT DECIMAL(5,2) DEFAULT 20.00; -- flat discount amount

    -- Variables to hold prices
    DECLARE original_price DECIMAL(10,2);
    DECLARE price_after_tax DECIMAL(10,2);
    DECLARE final_price DECIMAL(10,2);

    -- Get a book price (example: price of book with book_id = 101)
    SELECT price INTO original_price FROM books WHERE book_id = 101 LIMIT 1;

    -- Calculate price after adding tax
    SET price_after_tax = original_price + (original_price * TAX_RATE);

    -- Calculate final price after discount
    SET final_price = price_after_tax - DISCOUNT;

    -- Display all prices
    SELECT
        original_price AS OriginalPrice,
        price_after_tax AS PriceAfterTax,
        final_price AS FinalPriceAfterDiscount;
END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `CheckBookPrice` (IN `book_price` DECIMAL(10,2))   BEGIN
    IF book_price > 100 THEN
        SELECT 'The book price is above $100.' AS Message;
    ELSE
        SELECT 'The book price is $100 or below.' AS Message;
    END IF;
END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `GetBookPrice` (IN `p_book_id` INT, OUT `p_price` DECIMAL(10,2))   BEGIN
    SELECT price
    INTO p_price
    FROM books
    WHERE book_id = p_book_id;
END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `GetBooksAuthor` (IN `author_name` VARCHAR(100))   BEGIN
    DECLARE done INT DEFAULT FALSE;
    DECLARE v_title VARCHAR(255);

    -- Declare cursor for selecting titles by author
    DECLARE cur_books CURSOR FOR
        SELECT title FROM books WHERE author = author_name;

    -- Handler for cursor end
    DECLARE CONTINUE HANDLER FOR NOT FOUND SET done = TRUE;

    OPEN cur_books;

    read_loop: LOOP
        FETCH cur_books INTO v_title;
        IF done THEN
            LEAVE read_loop;
        END IF;
        
        -- Display the book title (prints to console in some clients)
        SELECT v_title AS 'Book Title';
    END LOOP;

    CLOSE cur_books;
END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `GetBooksByAuthor` (IN `author_name` VARCHAR(255))   BEGIN
    SELECT *
    FROM books
    WHERE author = author_name;
END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `GetTotalBooks` ()   BEGIN
    SELECT COUNT(*) AS total_books FROM books;
END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `InsertBook` ()   BEGIN
    INSERT INTO books (title, author, price) VALUES ('New Book Title', 'Author Name', 299.99);
    SELECT 'Book inserted successfully!' AS message;
END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `ShowBookDetails` ()   BEGIN
    -- Declare variables
    DECLARE book_id INT;
    DECLARE price DECIMAL(10,2);

    -- Assign values
    SET book_id = 101;
    SET price = 499.99;

    -- Display the results
    SELECT book_id AS BookID, price AS Price;
END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `ShowBooks` ()   BEGIN
    DECLARE done INT DEFAULT FALSE;
    DECLARE v_book_id INT;
    DECLARE v_title VARCHAR(255);
    DECLARE v_price DECIMAL(10,2);

    -- Cursor declare karo
    DECLARE cur_books CURSOR FOR SELECT book_id, title, price FROM books;
    DECLARE CONTINUE HANDLER FOR NOT FOUND SET done = TRUE;

    OPEN cur_books;

    read_loop: LOOP
        FETCH cur_books INTO v_book_id, v_title, v_price;
        IF done THEN
            LEAVE read_loop;
        END IF;
        -- Yahan aap SELECT karke print karwa sakte ho
        SELECT v_book_id AS BookID, v_title AS Title, v_price AS Price;
    END LOOP;

    CLOSE cur_books;
END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `ShowBooksinpro` ()   BEGIN
    DECLARE done INT DEFAULT FALSE;
 
    DECLARE v_title VARCHAR(255);
    DECLARE v_price DECIMAL(10,2);

    -- Cursor declare karo
    DECLARE cur_books CURSOR FOR SELECT  title, price FROM books;
    DECLARE CONTINUE HANDLER FOR NOT FOUND SET done = TRUE;

    OPEN cur_books;

    read_loop: LOOP
        FETCH cur_books INTO  v_title, v_price;
        IF done THEN
            LEAVE read_loop;
        END IF;
        -- Yahan aap SELECT karke print karwa sakte ho
        SELECT  v_title AS Title, v_price AS Price;
    END LOOP;

    CLOSE cur_books;
END$$

CREATE DEFINER=`root`@`localhost` PROCEDURE `show_all_members` ()   BEGIN
    DECLARE done INT DEFAULT FALSE;
    DECLARE v_member_id INT;
    DECLARE v_member_name VARCHAR(255);
    DECLARE v_email VARCHAR(255);
    
    -- Declare cursor for members
    DECLARE cur_members CURSOR FOR SELECT member_id, member_name, email FROM members;
    DECLARE CONTINUE HANDLER FOR NOT FOUND SET done = TRUE;
    
    OPEN cur_members;
    
    read_loop: LOOP
        FETCH cur_members INTO v_member_id, v_member_name, v_email;
        IF done THEN
            LEAVE read_loop;
        END IF;
        -- Output the fetched record
        SELECT CONCAT('Member ID: ', v_member_id, ', Name: ', v_member_name, ', Email: ', v_email) AS member_info;
    END LOOP;
    
    CLOSE cur_members;
END$$

DELIMITER ;

-- --------------------------------------------------------

--
-- Table structure for table `authors`
--

CREATE TABLE `authors` (
  `author_id` int(11) NOT NULL,
  `first_name` varchar(50) DEFAULT NULL,
  `last_name` varchar(50) DEFAULT NULL,
  `country` varchar(50) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `authors`
--

INSERT INTO `authors` (`author_id`, `first_name`, `last_name`, `country`) VALUES
(1, 'abc', 'xyz', 'UK'),
(2, 'Mno', 'kkk', 'USA'),
(3, 'pqr', 'nnnn', 'india');

-- --------------------------------------------------------

--
-- Table structure for table `books`
--

CREATE TABLE `books` (
  `book_id` int(11) NOT NULL,
  `title` varchar(50) DEFAULT NULL,
  `author` varchar(50) DEFAULT NULL,
  `publisher` varchar(50) DEFAULT NULL,
  `year_of_publication` year(4) DEFAULT NULL,
  `price` decimal(10,2) DEFAULT NULL,
  `genre` varchar(100) DEFAULT NULL,
  `author_id` int(11) DEFAULT NULL,
  `last_modified` datetime DEFAULT NULL
) ;

--
-- Dumping data for table `books`
--

INSERT INTO `books` (`book_id`, `title`, `author`, `publisher`, `year_of_publication`, `price`, `genre`, `author_id`, `last_modified`) VALUES
(1, 'Book One', 'Author A', 'Publisher X', '2001', 133.10, 'Fiction', 1, NULL),
(7, 'Book Three', 'Author C', 'Publisher Z', '2010', 266.20, 'Fiction', 2, NULL),
(8, 'Book Four', 'Author D', 'Publisher M', '2023', 250.00, 'Fiction', 3, NULL),
(9, 'Book Five', 'Author E', 'Publisher N', '2020', 60.00, 'Fiction', 4, NULL),
(121, 'Book One', 'Author A', 'cccccccccccccccccccc', '2020', 500.00, 'Fiction', 5, '2025-08-13 09:59:59'),
(122, 'Book Two', 'Author B', 'cccccccccc', '2019', 600.00, 'Fiction', 6, NULL),
(124, 'Book Four', 'Author D', 'mnop', '2022', 800.00, 'Fiction', 8, NULL),
(126, 'New Book Title', 'Author Name', NULL, NULL, 299.99, NULL, NULL, NULL),
(127, 'Book A', 'Author A', NULL, NULL, 100.00, NULL, NULL, NULL),
(128, 'Book B', 'Author B', NULL, NULL, 150.00, NULL, NULL, NULL),
(129, 'Book C', 'Author C', NULL, NULL, 120.00, NULL, NULL, NULL),
(130, 'Book D', 'Author D', NULL, NULL, 130.00, NULL, NULL, NULL);

--
-- Triggers `books`
--
DELIMITER $$
CREATE TRIGGER `after_books_delete` AFTER DELETE ON `books` FOR EACH ROW BEGIN
    INSERT INTO log_changes (operation_type, table_name, deleted_book_id, deleted_book_title)
    VALUES ('DELETE', 'books', OLD.book_id, OLD.title);
END
$$
DELIMITER ;
DELIMITER $$
CREATE TRIGGER `trg_update_last_modified` BEFORE UPDATE ON `books` FOR EACH ROW BEGIN
    SET NEW.last_modified = NOW();
END
$$
DELIMITER ;

-- --------------------------------------------------------

--
-- Stand-in structure for view `booksview`
-- (See below for the actual view)
--
CREATE TABLE `booksview` (
`title` varchar(50)
,`author` varchar(50)
,`price` decimal(10,2)
);

-- --------------------------------------------------------

--
-- Table structure for table `log_changes`
--

CREATE TABLE `log_changes` (
  `id` int(11) NOT NULL,
  `operation_type` varchar(20) DEFAULT NULL,
  `table_name` varchar(50) DEFAULT NULL,
  `deleted_book_id` int(11) DEFAULT NULL,
  `deleted_book_title` varchar(255) DEFAULT NULL,
  `deleted_at` timestamp NOT NULL DEFAULT current_timestamp()
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `log_changes`
--

INSERT INTO `log_changes` (`id`, `operation_type`, `table_name`, `deleted_book_id`, `deleted_book_title`, `deleted_at`) VALUES
(1, 'DELETE', 'books', 123, 'Book Three', '2025-08-13 04:33:27');

-- --------------------------------------------------------

--
-- Table structure for table `members`
--

CREATE TABLE `members` (
  `member_id` int(11) NOT NULL,
  `member_name` varchar(255) DEFAULT NULL,
  `date_of_membership` date DEFAULT NULL,
  `email` varchar(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `members`
--

INSERT INTO `members` (`member_id`, `member_name`, `date_of_membership`, `email`) VALUES
(1, 'Member One', '2021-01-10', 'member1@example.com'),
(2, 'Member Two', '2018-03-15', 'member2@example.com'),
(3, 'Member Three', '2022-06-20', 'member3@example.com'),
(4, 'Member Four', '2019-02-05', 'member4@example.com'),
(5, 'Member Five', '2023-07-12', 'member5@example.com'),
(101, 'John Doe', NULL, 'john.doe@example.com');

-- --------------------------------------------------------

--
-- Stand-in structure for view `membersbefore2020`
-- (See below for the actual view)
--
CREATE TABLE `membersbefore2020` (
`member_id` int(11)
,`member_name` varchar(255)
,`date_of_membership` date
,`email` varchar(255)
);

-- --------------------------------------------------------

--
-- Table structure for table `members_backup`
--

CREATE TABLE `members_backup` (
  `member_id` int(11) NOT NULL DEFAULT 0,
  `member_name` varchar(255) DEFAULT NULL,
  `date_of_membership` date DEFAULT NULL,
  `email` varchar(100) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `members_backup`
--

INSERT INTO `members_backup` (`member_id`, `member_name`, `date_of_membership`, `email`) VALUES
(1, 'Member One', '2021-01-10', 'member1@example.com'),
(3, 'Member Three', '2022-06-20', 'member3@example.com'),
(5, 'Member Five', '2023-07-12', 'member5@example.com');

-- --------------------------------------------------------

--
-- Table structure for table `publishers`
--

CREATE TABLE `publishers` (
  `publisher_id` int(11) NOT NULL,
  `publisher_name` varchar(25) DEFAULT NULL,
  `contact_number` varchar(20) DEFAULT NULL,
  `address` varchar(25) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Structure for view `booksview`
--
DROP TABLE IF EXISTS `booksview`;

CREATE ALGORITHM=UNDEFINED DEFINER=`root`@`localhost` SQL SECURITY DEFINER VIEW `booksview`  AS SELECT `books`.`title` AS `title`, `books`.`author` AS `author`, `books`.`price` AS `price` FROM `books` ;

-- --------------------------------------------------------

--
-- Structure for view `membersbefore2020`
--
DROP TABLE IF EXISTS `membersbefore2020`;

CREATE ALGORITHM=UNDEFINED DEFINER=`root`@`localhost` SQL SECURITY DEFINER VIEW `membersbefore2020`  AS SELECT `members`.`member_id` AS `member_id`, `members`.`member_name` AS `member_name`, `members`.`date_of_membership` AS `date_of_membership`, `members`.`email` AS `email` FROM `members` WHERE `members`.`date_of_membership` < '2020-01-01' ;

--
-- Indexes for dumped tables
--

--
-- Indexes for table `authors`
--
ALTER TABLE `authors`
  ADD PRIMARY KEY (`author_id`);

--
-- Indexes for table `books`
--
ALTER TABLE `books`
  ADD PRIMARY KEY (`book_id`);

--
-- Indexes for table `log_changes`
--
ALTER TABLE `log_changes`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `members`
--
ALTER TABLE `members`
  ADD PRIMARY KEY (`member_id`);

--
-- Indexes for table `publishers`
--
ALTER TABLE `publishers`
  ADD PRIMARY KEY (`publisher_id`),
  ADD UNIQUE KEY `contact_number` (`contact_number`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `authors`
--
ALTER TABLE `authors`
  MODIFY `author_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=4;

--
-- AUTO_INCREMENT for table `books`
--
ALTER TABLE `books`
  MODIFY `book_id` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `log_changes`
--
ALTER TABLE `log_changes`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=2;

--
-- AUTO_INCREMENT for table `members`
--
ALTER TABLE `members`
  MODIFY `member_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=102;

--
-- AUTO_INCREMENT for table `publishers`
--
ALTER TABLE `publishers`
  MODIFY `publisher_id` int(11) NOT NULL AUTO_INCREMENT;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
