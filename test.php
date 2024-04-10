<?php

echo "Test ObjectGuid from uint64 string".PHP_EOL;
$guid = new ObjectGuid('17379391800917100580');
// dump 
var_dump($guid);
echo $guid->GetRawValueString().PHP_EOL;
echo $guid->GetEntry().PHP_EOL;
echo $guid->GetCounter().PHP_EOL;
echo $guid->GetTypeName().PHP_EOL;
echo $guid->ToString().PHP_EOL;
echo HighGuid::Item.PHP_EOL;
echo TypeID::PLAYER.PHP_EOL;

echo "Test ObjectGuid from type and counter".PHP_EOL;
$guid = new ObjectGuid('', HighGuid::Player, 54345);
// dump
var_dump($guid);
echo $guid->GetRawValueString().PHP_EOL;
echo $guid->GetEntry().PHP_EOL;
echo $guid->GetCounter().PHP_EOL;
echo $guid->GetTypeName().PHP_EOL;
echo $guid->ToString().PHP_EOL;
