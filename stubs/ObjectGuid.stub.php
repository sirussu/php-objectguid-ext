<?php

/** @generate-class-entries*/

class HighGuid
{
    public const int Item = 0x4000;
    public const int Container = 0x4000;
    public const int Player = 0x0000;
    public const int GameObject = 0xF110;
    public const int Transport = 0xF120;
    public const int Unit = 0xF130;
    public const int Pet = 0xF140;
    public const int Vehicle = 0xF150;
    public const int DynamicObject = 0xF100;
    public const int Corpse = 0xF101;
    public const int Mo_Transport = 0x1FC0;
    public const int Instance = 0x1F40;
    public const int Group = 0x1F50;
}

class TypeID
{
    public const int OBJECT = 0;
    public const int ITEM = 1;
    public const int CONTAINER = 2;
    public const int UNIT = 3;
    public const int PLAYER = 4;
    public const int GAMEOBJECT = 5;
    public const int DYNAMICOBJECT = 6;
    public const int CORPSE = 7;
}

/**
 * @strict-properties
 */
class ObjectGuid
{
    public function __construct(string $guid, string $hi = "", string $lo = "")
    {
    }

    public function GetRawValueString(): string
    {
    }

    public function GetEntry(): int
    {
    }

    public function GetCounter(): int
    {
    }

    public function GetTypeName(): string
    {
    }

    public function ToString(): string
    {
    }

    public function IsEmpty(): bool
    {
    }

    public function IsCreature(): bool
    {
    }

    public function IsPet(): bool
    {
    }

    public function IsVehicle(): bool
    {
    }

    public function IsCreatureOrPet(): bool
    {
    }

    public function IsCreatureOrVehicle(): bool
    {
    }

    public function IsAnyTypeCreature(): bool
    {
    }

    public function IsPlayer(): bool
    {
    }

    public function IsUnit(): bool
    {
    }

    public function IsItem(): bool
    {
    }

    public function IsGameObject(): bool
    {
    }

    public function IsDynamicObject(): bool
    {
    }

    public function IsCorpse(): bool
    {
    }

    public function IsTransport(): bool
    {
    }

    public function IsMOTransport(): bool
    {
    }

    public function IsAnyTypeGameObject(): bool
    {
    }

    public function IsInstance(): bool
    {
    }

    public function IsGroup(): bool
    {
    }
    
}