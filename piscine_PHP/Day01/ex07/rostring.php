#!/usr/bin/php
<?php
	if ($argc > 1)
	{
		$words = array_filter(explode(" ", $argv[1]), strlen);
		if (count($words) > 1)
		{
			$del = array_splice($words, 0, 1);
			$words = array_merge($words, $del);
		}
		echo implode(" ", $words)."\n";
	}
?>
