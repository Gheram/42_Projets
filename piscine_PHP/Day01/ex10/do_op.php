#!/usr/bin/php
<?php
	if($argc == 4)
	{
		if (trim($argv[2]) == "+")
		{
			$result = $argv[1] + $argv[3];
			echo "$result\n";
		}
		if (trim($argv[2]) == "-")
		{
			$result = $argv[1] - $argv[3];
			echo "$result\n";
		}
		if (trim($argv[2]) == "*")
		{
			$result = $argv[1] * $argv[3];
			echo "$result\n";
		}
		if (trim($argv[2]) == "/")
		{
			if ($argv[3] == 0)
				exit();
			$result = $argv[1] / $argv[3];
			echo "$result\n";
		}
		if (trim($argv[2]) == "%")
		{
			if ($argv[3] == 0)
				exit();
			$result = $argv[1] % $argv[3];
			echo "$result\n";
		}
	}
	else
		echo "Incorrect Parameters\n";
?>
