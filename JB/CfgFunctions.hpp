class JB
{
	tag = "JB";
	class functions
	{
		file = "JB";
		class criticalSectionCreate;
		class criticalSectionEnter;
		class criticalSectionLeave;
		class remoteCall {};
		class remoteCallPreInit { preInit = 1; };
		class remoteExec {};
		class remoteExecGroupCreate {};
		class remoteExecGroupDelete {};
		class remoteExecPreInit { preInit = 1; };

		class actionHandlerPreInit { preInit = 1; };
		class actionHandlerAdd {};
		class actionHandlerRemove {};
		class airTransportPreInit { preInit = 1; };
		class airTransportInitializeVehicle {};
		class ammoInit {};
		class ammoInitPlayer {};
		class ammoInitTrolley {};
		class ammoPreInit { preInit = 1; };
		class carryObjectPickUp {};
		class carryObjectDrop {};
		class carryObjectInitObject {};
		class carryObjectInitPlayer {};
		class carryObjectPreInit { preInit = 1; };
		class chatAddEventHandler {};
		class chatPreInit { preInit = 1; };
		class chatRemoveEventHandler {};
		class concussBlastArea {};
		class concussKnockDownUnit {};
		class concussPreInit { preInit = 1; };
		class containerClear {};
		class containerClone {};
		class containerProviderInitializeSource {};
		class containerProviderPreInit { preInit = 1; };
		class containerInitPlayer {};
		class containerIsContainer {};
		class containerIsEmpty {};
		class containerIsLocked {};
		class containerLock {};
		class containerMass {};
		class containerUnlock {};
		class damagePulseInitObject {};
		class damagePulsePreInit { preInit = 1; };
		class detonateObject {};
		class detonateExplosive {};
		class detonateExplosives {};
		class detonateGetExplosives {};
		class detonateGetExplosivesEquivalent {};
		class detonatePreInit { preInit = 1; };
		class detonateSetDamage {};
		class displayName {};
		class distanceBetweenBoundingBoxes {};
		class distanceToArea {};
		class distanceToBoundingBox {};
		class distanceToObjectSurface {};
		class earplugsInitPlayer {};
		class ejectDeadBodies {};
		class ejectVehicleFromTriggerArea {};
		class ejectVehicleFromTriggerAreaCondition {};
		class eventCreate {};
		class eventExists {};
		class eventDelete {};
		class eventFire {};
		class eventAddHandler {};
		class eventRemoveHandler {};
		class faction {};
		class fire {};
		class flareInit {};
		class flarePreInit { preInit = 1; };
		class flipVehicle {};
		class flipVehicleCondition {};
		class flipVehiclePreInit { preInit = 1; };
		class fuelInitPlayer {};
		class fuelInitPump {};
		class fuelInitSupply {};
		class fuelPreInit { preInit = 1; };
		class getAnimationState {};
		class getInPoints {};
		class halo {};
		class haloInit {};
		class haloPreInit { preInit = 1; };
		class hearingGetLevel {};
		class hearingPreInit { preInit = 1; };
		class hearingSetLevel {};
		class holdActionGetValue {};
		class holdActionPreInit { preInit = 1; };
		class holdActionSetText {};
		class holdActionSetValue {};
		class holdActionStart {};
		class holdActionStop {};
		class increasedFuelConsumption {};
		class internalStoragePreInit { preInit = 1; };
		class internalStorageInitContainer {};
		class internalStorageInitCollapsibleObject {};
		class internalStorageInitPlayer {};
		class internalStoragePushObject {};
		class internalStoragePopObject {};
		class isOffensiveWeapon {};
		class limitSpeed {};
		class limitSpeedPreInit { preInit = 1; };
		class manualDriveInitPlayer {};
		class manualDrivePreInit { preInit = 1; };
		class mapPreInit { preInit = 1; };
		class matchAnimationState {};
		class medicalPreInit { preInit = 1; };
		class medicalInit {};
		class medicalInitAmbulance {};
		class missionParametersPreInit { preInit = 1; };
		class negatedTypeFilter {};
		class objectBoundsIntersect {};
		class objectVolume {};
		class passesTypeFilter {};
		class paradropSlungCargo {};
		class placeObjectInitializePlayer {};
		class placeObjectInitializeSource {};
		class placeObjectPreInit { preInit = 1; };
		class placeObjectRegisterTypes {};
		class popCargoChute {};
		class ragdoll {};
		class randomIndexFromWeightedArray {};
		class randomItemFromWeightedArray {};
		class regexMatch {};
		class repackInit {};
		class repairInit {};
		class repairPreInit { preInit = 1; };
		class replaceString {};
		class respawnVehicleInitialize {};
		class respawnVehiclePreInit { preInit = 1; };
		class respawnVehicleReturn {};
		class respawnVehicleWhenAbandoned {};
		class respawnVehicleWhenKilled {};
		class restrictedTargeting {};
		class searchRubbleInitPlayer {};
		class searchRubblePreInit { preInit = 1; };
		class serverListPreInit { preInit = 1; };
		class serviceVehicle {};
		class setVehicleVarName {};
		class setAnimationState {};
		class setBackpackCargoGlobal {};
		class showBlackScreenMessage {};
		class side {};
		class substituteEquipment {};
		class containerSubstitute {};
		class taruPodInit {};
		class taruPodPreInit { preInit = 1; };
		class teleportToTrigger {};
		class timeoutWaitUntil {};
		class tokenizePreInit { preInit = 1; };
		class tokenizeString {};
		class trimWhitespace {};
		class weaponControlPreInit { preInit = 1; };
		class weaponControlEnableWeapon {};
		class weaponControlInitializeVehicle {};
		class unitWhiteListBlackList {};
		class unitClusters {};
		class weaponOrientation {};
		class weaponSwayInit {};
	};
};