#!/usr/bin/php
<?php
	function	ft_split($my_str)
	{
		$my_str = explode(" ", $my_str);
		$my_str = array_filter($my_str, strlen);
		sort($my_str);
		return $my_str;
	}

	$argv = array_slice($argv, 1);
	foreach ($argv as $elem)
		$tous = $tous." ".$elem;
	$tous = ft_split($tous);
	foreach ($tous as $elem)
		echo "$elem\n";
?>
