-- Creating the database

CREATE DATABASE Property;
GO

USE Property;
GO

CREATE TABLE country (
initials_country CHAR(2) NOT NULL PRIMARY KEY,
name_country VARCHAR(50) NOT NULL
); 
GO

CREATE TABLE range_property (
code_range INTEGER NOT NULL PRIMARY KEY,
name_range VARCHAR(50) NOT NULL,
value_minimum DECIMAL(8,2) NOT NULL,
value_maximum DECIMAL(9,2) NOT NULL
);
GO

CREATE TABLE city (
code_city INTEGER NOT NULL PRIMARY KEY,
name_city VARCHAR(80) NOT NULL,
-- FK
initials_country CHAR(2) NOT NULL,
FOREIGN KEY (initials_country) REFERENCES country(initials_country)
);
GO

CREATE TABLE neighborhood (
code_neighborhood INTEGER NOT NULL PRIMARY KEY,
name_neighborhood VARCHAR(80) NOT NULL,
-- FKS
code_city INTEGER NOT NULL,
initials_country CHAR(2) NOT NULL,
FOREIGN KEY (code_city) REFERENCES city(code_city),
FOREIGN KEY (initials_country) REFERENCES country(initials_country)
);
GO

CREATE TABLE buyers (
code_buyer INTEGER NOT NULL PRIMARY KEY,
name_buyer VARCHAR(80) NOT NULL,
name_address_buyer VARCHAR(100) NOT NULL, 
number_cpfbuyer DECIMAL(11,0) NOT NULL,
telephone_buyer BIGINT NOT NULL,
-- FKS
code_city INTEGER NOT NULL,
code_neighborhood INTEGER NOT NULL,
initials_country CHAR(2) NOT NULL,
FOREIGN KEY (code_city) REFERENCES city(code_city),
FOREIGN KEY (code_neighborhood) REFERENCES neighborhood(code_neighborhood),
FOREIGN KEY (initials_country) REFERENCES country(initials_country)
);
GO

CREATE TABLE salesman (
code_salesman INTEGER NOT NULL PRIMARY KEY,
name_salesman VARCHAR(80) NOT NULL,
name_address VARCHAR(100) NOT NULL,
number_cpf DECIMAL(11,0) NOT NULL,
telephone BIGINT NOT NULL,
birth_date DATE NOT NULL,
-- FKS
code_city INTEGER NOT NULL,
code_neighborhood INTEGER NOT NULL,
initials_country CHAR(2) NOT NULL,
FOREIGN KEY (code_city) REFERENCES city(code_city),
FOREIGN KEY (code_neighborhood) REFERENCES neighborhood(code_neighborhood),
FOREIGN KEY (initials_country) REFERENCES country(initials_country)
);
GO

CREATE TABLE property (
code_property INTEGER NOT NULL PRIMARY KEY,
name_address VARCHAR(100) NOT NULL,
number_useful_area INTEGER NOT NULL,
number_total_area INTEGER NOT NULL,
value_price DECIMAL(12,2) NOT NULL,
status_sold VARCHAR(1) NOT NULL,
date_launch DATE NOT NULL,
-- FKS
code_salesman INTEGER NOT NULL,
code_city INTEGER NOT NULL,
code_neighborhood INTEGER NOT NULL,
initials_country CHAR(2) NOT NULL,
FOREIGN KEY (code_salesman) REFERENCES salesman(code_salesman),
FOREIGN KEY (code_city) REFERENCES city(code_city),
FOREIGN KEY (code_neighborhood) REFERENCES neighborhood(code_neighborhood),
FOREIGN KEY (initials_country) REFERENCES country(initials_country)
);
GO

CREATE TABLE offer(
code_offer INTEGER NOT NULL PRIMARY KEY,
value_offer DECIMAL(12,2) NOT NULL,
date_offer DATE NOT NULL,
-- FKS
code_buyer INTEGER NOT NULL,
code_property INTEGER NOT NULL,
FOREIGN KEY (code_buyer) REFERENCES buyers(code_buyer),
FOREIGN KEY (code_property) REFERENCES property(code_property)
);
GO

----------------------------------------------------------------------------
-- Part 1 - Inserting all Brazilian countries in the country Table

INSERT INTO country
VALUES
	('AC', 'Acre'),
	('AL', 'Alagoas'),
	('AP', 'Amapa'),
	('AM', 'Amazonas'),
	('BA', 'Bahia'),
	('CE', 'Ceara'),
	('ES', 'Espirito Santo'),
	('GO', 'Goias'),
	('MA', 'Maranhao'),
	('MT', 'Mato Grosso'),
	('MS', 'Mato Grosso do Sul'),
	('MG', 'Minas Gerais'),
	('PA', 'Para'),
	('PB', 'Paraiba'),
	('PR', 'Parana'),
	('PE', 'Pernambuco'),
	('PI', 'Piaui'),
	('RR', 'Roraima'),
	('RO', 'Rondonia'),
	('RJ', 'Rio de Janeiro'),
	('RN', 'Rio Grande do Norte'),
	('RS', 'Rio Grande do Sul'),
	('SC', 'Santa Catarina'),
	('SP', 'Sao Paulo'),
	('SE', 'Sergipe'),
	('TO', 'Tocantins')
GO

----------------------------------------------------------------------------
-- Part 2 - Inserting all Brazilian capitals and two main municipalities in each county in the city table

INSERT INTO city
VALUES
	(1, 'Rio Branco', 'AC'),
	(2, 'Brasilia', 'AC'),
	(3, 'Cruzeiro do Sul', 'AC'),
	(4, 'Maceio', 'AL' ),
	(5, 'Arapiraca', 'AL'),
	(6, 'Rio Largo', 'AL'),
	(7, 'Macapa', 'AP'),
	(8, 'Santana', 'AP'),
	(9, 'Laranjal do Jari', 'AP'),
	(10, 'Manaus', 'AM'),
	(11, 'Alvaraes', 'AM'),
	(12, 'Barcelos', 'AM'),
	(13, 'Salvador', 'BA'),
	(14, 'Feira de Santana', 'BA'),
	(15, 'Vitoria da Conquista', 'BA'),
	(16, 'Fortaleza', 'CE'),
	(17, 'Caucaia', 'CE'),
	(18, 'Juazeiro do Norte', 'CE'),
	(19, 'Vitoria', 'ES'),
	(20, 'Serra', 'ES'),
	(21, 'Vila Velha', 'ES' ),
	(22, 'Goiania', 'GO'),
	(23, 'Abadia de Goias', 'GO'),
	(24, 'Bom Jesus de Goias', 'GO'),
	(25, 'Sao Luis', 'MA'),
	(26, 'Imperatriz', 'MA'),
	(27, 'Sao Jose do Ribamar', 'MA'),
	(28, 'Cuiaba', 'MT'),
	(29, 'Varzea Grande', 'MT'),
	(30, 'Rondonopolis', 'MT'),
	(31, 'Campo Grande', 'MS'),
	(32, 'Dourados', 'MS'),
	(33, 'Tres Lagoas','MS'),
	(34, 'Belo Horizonte', 'MG'),
	(35, 'Uberlendia', 'MG'),
	(36, 'Juiz de Fora', 'MG'),
	(37, 'Belem', 'PA'),
	(38, 'Santarem', 'PA'),
	(39, 'Maraba', 'PA'),
	(40, 'Joao Pessoa', 'PB'),
	(41, 'Campina Grande', 'PB'),
	(42, 'Santa Rita', 'PB'),
	(43, 'Curitiba', 'PR'),
	(44, 'Londrina', 'PR'),
	(45, 'Maringa', 'PR'),
	(46, 'Recife', 'PE'),
	(47, 'Caruaru', 'PE'),
	(48, 'Olinda', 'PE'),
	(49, 'Teresina', 'PI'),
	(50, 'Acaua', 'PI'),
	(51, 'Agricolandia', 'PI'),
	(52, 'Rio de Janeiro', 'RJ'),
	(53, 'Volta Redonda', 'RJ'),
	(54, 'Niteroi', 'RJ'),
	(55, 'Natal', 'RN'),
	(56, 'Mossoro', 'RN'),
	(57, 'Parnamirim', 'RN'),
	(58, 'Porto Alegre', 'RS'),
	(59, 'Pelotas', 'RS'),
	(60, 'Farroupilha', 'RS'),
	(61, 'Porto Velho', 'RO'),
	(62, 'Costa Marques', 'RO'),
	(63, 'Vilhena', 'RO'),
	(64, 'Boa Vista', 'RR'),
	(65, 'Pacaraima', 'RR'),
	(66, 'Canta', 'RR'),
	(67, 'Florianopolis', 'SC'),
	(68, 'Laguna', 'SC'),
	(69, 'Porto Velho', 'SC'),
	(70, 'Sao Paulo', 'SP'),
	(71, 'Guarulhos', 'SP'),
	(72, 'Osasco', 'SP'),
	(73, 'Aracaju', 'SE'),
	(74, 'Sao Francisco', 'SE'),
	(75, 'Macambira', 'SE'),
	(76, 'Palmas', 'TO'),
	(77, 'Novo Alegre', 'TO'),
	(78, 'Sampaio', 'TO')
GO