#pragma once

class CVehicle;

class CCarCtrl
{
public:
	static void SwitchVehicleToRealPhysics(CVehicle*);
	static void AddToCarArray(int32 id, int32 vehclass);
	static void UpdateCarCount(CVehicle*, bool);
	static int32 ChooseCarModel(int32 vehclass);
	static bool JoinCarWithRoadSystemGotoCoors(CVehicle*, CVector, bool);
	static void JoinCarWithRoadSystem(CVehicle*);
	static void SteerAICarWithPhysics(CVehicle*);
	static void UpdateCarOnRails(CVehicle*);
	static bool MapCouldMoveInThisArea(float x, float y);
	static void ScanForPedDanger(CVehicle *veh);
	static void RemoveFromInterestingVehicleList(CVehicle*);

	static int32 &NumLawEnforcerCars;
	static int32 &NumAmbulancesOnDuty;
	static int32 &NumFiretrucksOnDuty;
	static int32 &NumRandomCars;
	static int32 &NumMissionCars;
	static int32 &NumParkedCars;
	static bool &bCarsGeneratedAroundCamera;
	static float &CarDensityMultiplier;
};
