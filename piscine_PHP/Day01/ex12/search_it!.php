#!/usr/bin/php
<?php
	foreach ($argv as $elem)
	{
		$tab = explode(":", $elem);
		if ($argv[1] == $tab[0])
			$ret = $tab[1];
	}
	if ($ret)
		echo $ret."\n";
?>
