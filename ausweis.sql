CREATE TABLE `perso` (
	`PersoID` INT(11) NOT NULL AUTO_INCREMENT COMMENT 'Einmalige PersoID',
	`SpielerUID` VARCHAR(50) NOT NULL COMMENT 'Verweis mit Fremdschlüssel auf fwfvs_rpg_Spielertabelle',
	`Spielername` VARCHAR(256) NOT NULL COMMENT 'Konvertierter Name des Spielers',
	`Originalname` VARCHAR(256) NOT NULL COMMENT 'Hinterlegter Name des Spielers für diese Fraktion. Kann nur mit diesem Namen als Profilname beitreten.',
	`Spielerfraktion` VARCHAR(50) NOT NULL COMMENT 'Hinterlegte Spielerfraktion des Personalausweises eines Spielers',
	`Persodaten` TEXT NOT NULL COMMENT 'Enthaltene Persodaten',
	`Mobilfunknummer` VARCHAR(25) NOT NULL,
	`Ausstelldatum` DATETIME NOT NULL DEFAULT CURRENT_TIMESTAMP,
	PRIMARY KEY (`SpielerUID`, `Spielerfraktion`, `Mobilfunknummer`),
	UNIQUE INDEX `PersoID` (`PersoID`)
) COLLATE='latin1_swedish_ci' ENGINE=InnoDB AUTO_INCREMENT=0;
