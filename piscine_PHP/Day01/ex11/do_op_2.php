#!/usr/bin/php
<?php
	if ($argc == 2)
	{
		if(strpos($argv[1], "*"))
		{
			$tab = explode("*", $argv[1]);
			if (is_numeric(trim($tab[0])) && is_numeric(trim($tab[1])))
				echo $tab[0] * $tab[1]."\n";
			else
				echo "Syntax Error\n";
		}
		else if(strpos($argv[1], "/"))
		{
			$tab = explode("/", $argv[1]);
			if ($tab[1] == 0)
			{
				echo "Syntax Error\n";
				exit (0);
			}
			if (is_numeric(trim($tab[0])) && is_numeric(trim($tab[1])))
				echo $tab[0] / $tab[1]."\n";
			else
				echo "Syntax Error\n";
		}
		else if(strpos($argv[1], "-"))
		{
			$tab = explode("-", $argv[1]);
			if (is_numeric(trim($tab[0])) && is_numeric(trim($tab[1])))
				echo $tab[0] - $tab[1]."\n";
			else
				echo "Syntax Error\n";
		}
		else if(strpos($argv[1], "+"))
		{
			$tab = explode("+", $argv[1]);
			if (is_numeric(trim($tab[0])) && is_numeric(trim($tab[1])))
				echo $tab[0] + $tab[1]."\n";
			else
				echo "Syntax Error\n";
		}
		else if(strpos($argv[1], "%"))
		{
			$tab = explode("%", $argv[1]);
			if ($tab[1] == 0)
			{
				echo "Syntax Error\n";
				exit (0);
			}
			if (is_numeric(trim($tab[0])) && is_numeric(trim($tab[1])))
				echo $tab[0] % $tab[1]."\n";
			else
				echo "Syntax Error\n";
		}
		else
			echo "Syntax Error\n";
	}
	else
		echo "Incorrect Parameters\n";
?>
