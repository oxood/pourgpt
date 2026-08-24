class CfgPatches
{
	class RA_Weapons_Optics
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Optics"
		};
	};
};
class CfgVehicles
{
	class ItemOptics;
	class M4_CarryHandleOptic: ItemOptics
	{
		adsModifier[]={1.01,1.01,1.01};
		class OpticsInfo
		{
			PPDOFProperties[]={0,0,0,1};
			PPMaskProperties[]={0,0,0,0};
			PPLensProperties[]={0,0,0,0};
			PPBlurProperties=0;
		};
	};
	class BUISOptic: ItemOptics
	{
		adsModifier[]={1.01,1.01,1.01};
		class OpticsInfo
		{
			PPDOFProperties[]={0,0,0,1};
			PPMaskProperties[]={0,0,0,0};
			PPLensProperties[]={0,0,0,0};
			PPBlurProperties=0;
		};
	};
	class M68Optic: ItemOptics
	{
		adsModifier[]={1.03,1.03,1.03};
		inventorySlot[]=
		{
			"weaponOptics",
			"weaponOpticsCover",
			"weaponOpticsHandguard"
		};
		class OpticsInfo
		{
			PPDOFProperties[]={0,0,0,1};
			PPMaskProperties[]={0,0,0,0};
			PPLensProperties[]={0,0,0,0};
			PPBlurProperties=0;
		};
	};
	class FNP45_MRDSOptic: ItemOptics
	{
		adsModifier[]={1.01,1.01,1.01};
		class OpticsInfo
		{
			PPDOFProperties[]={0,0,0,1};
			PPMaskProperties[]={0,0,0,0};
			PPLensProperties[]={0,0,0,0};
			PPBlurProperties=0;
		};
	};
	class PistolOptic: ItemOptics
	{
		adsModifier[]={1.01,1.01,1.01};
		class OpticsInfo
		{
			PPDOFProperties[]={0,0,0,1};
			PPMaskProperties[]={0,0,0,0};
			PPLensProperties[]={0,0,0,0};
			PPBlurProperties=0;
		};
	};
	class M4_T3NRDSOptic: ItemOptics
	{
		adsModifier[]={1.025,1.025,1.025};
		inventorySlot[]=
		{
			"weaponOptics",
			"weaponOpticsCover",
			"weaponOpticsHandguard"
		};
		class OpticsInfo
		{
			PPDOFProperties[]={0,0,0,1};
			PPMaskProperties[]={0,0,0,0};
			PPLensProperties[]={0,0,0,0};
			PPBlurProperties=0;
		};
	};
	class ReflexOptic: ItemOptics
	{
		adsModifier[]={1.02,1.02,1.02};
		inventorySlot[]=
		{
			"weaponOptics",
			"weaponOpticsCover",
			"weaponOpticsHandguard"
		};
		class OpticsInfo
		{
			PPDOFProperties[]={0,0,0,1};
			PPMaskProperties[]={0,0,0,0};
			PPLensProperties[]={0,0,0,0};
			PPBlurProperties=0;
		};
	};
	class ACOGOptic: ItemOptics
	{
		adsModifier[]={1.04,1.04,1.04};
		inventorySlot[]=
		{
			"weaponOptics",
			"weaponOpticsCover"
		};
		class OpticsInfo
		{
			PPDOFProperties[]={0,0,0,1};
			PPMaskProperties[]={0,0,0,0};
			PPLensProperties[]={0,0,0,0};
			PPBlurProperties=0;
		};
		class OpticsInfoWeaponOverride
		{
			PPDOFProperties[]={0,0,0,1};
			PPMaskProperties[]={0,0,0,0};
			PPLensProperties[]={0,0,0,0};
			PPBlurProperties=0;
		};
	};
	class ACOGOptic_6x: ItemOptics
	{
		adsModifier[]={1.0599999,1.0599999,1.0599999};
		inventorySlot[]=
		{
			"weaponOptics",
			"weaponOpticsCover"
		};
		class OpticsInfo
		{
			PPDOFProperties[]={0,0,0,1};
		};
		class OpticsInfoWeaponOverride
		{
			PPDOFProperties[]={0,0,0,1};
			PPMaskProperties[]={0,0,0,0};
			PPLensProperties[]={0,0,0,0};
			PPBlurProperties=0;
		};
	};
	class PUScopeOptic: ItemOptics
	{
		adsModifier[]={1.04,1.04,1.04};
		class OpticsInfo
		{
			PPDOFProperties[]={0,0,0,1};
		};
	};
	class KashtanOptic: ItemOptics
	{
		adsModifier[]={1.04,1.04,1.04};
		class OpticsInfo
		{
			PPDOFProperties[]={0,0,0,1};
		};
	};
	class LongrangeOptic: ItemOptics
	{
		adsModifier[]={1.0599999,1.0599999,1.0599999};
		class OpticsInfo
		{
			PPDOFProperties[]={0,0,0,1};
			PPMaskProperties[]={0,0,0,0};
			PPLensProperties[]={0,0,0,0};
			PPBlurProperties=0;
		};
	};
	class MosinLRS: LongrangeOptic
	{
		inventorySlot="weaponOpticsMosin";
	};
	class HuntingOptic: ItemOptics
	{
		adsModifier[]={1.05,1.05,1.05};
		class OpticsInfo
		{
			PPDOFProperties[]={0,0,0,1};
			PPMaskProperties[]={0,0,0,0};
			PPLensProperties[]={0,0,0,0};
			PPBlurProperties=0;
		};
	};
	class PSO1Optic: ItemOptics
	{
		adsModifier[]={1.0599999,1.0599999,1.0599999};
		class OpticsInfo
		{
			PPDOFProperties[]={0,0,0,1};
			PPBlurProperties=0;
		};
	};
	class PSO11Optic: ItemOptics
	{
		adsModifier[]={1.0599999,1.0599999,1.0599999};
		class OpticsInfo
		{
			PPDOFProperties[]={0,0,0,1};
			PPBlurProperties=0;
		};
	};
	class KobraOptic: ItemOptics
	{
		adsModifier[]={1.03,1.03,1.03};
		class OpticsInfo
		{
			PPDOFProperties[]={0,0,0,1};
			PPMaskProperties[]={0,0,0,0};
			PPLensProperties[]={0,0,0,0};
			PPBlurProperties=0;
		};
	};
	class KazuarOptic: ItemOptics
	{
		adsModifier[]={1.0700001,1.0700001,1.0700001};
		class OpticsInfo
		{
			PPDOFProperties[]={0,0,0,1};
			PPMaskProperties[]={0,0,0,0};
			PPLensProperties[]={0,0,0,0};
			PPBlurProperties=0;
		};
	};
	class StarlightOptic: ItemOptics
	{
		adsModifier[]={1.0700001,1.0700001,1.0700001};
		inventorySlot[]=
		{
			"weaponOptics",
			"weaponOpticsCover"
		};
		class OpticsInfo
		{
			opticsZoomMin="0.3926/4";
			opticsZoomMax="0.3926/12";
			opticsZoomInit="0.3926/4";
			discretefov[]=
			{
				"0.3926/4",
				"0.3926/8",
				"0.3926/12"
			};
			PPDOFProperties[]={0,0,0,1};
			PPMaskProperties[]={0,0,0,0};
			PPLensProperties[]={0,0,0,0};
			PPBlurProperties=0;
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyPM2: ProxyAttachment
	{
		scope=2;
		inventorySlot="weaponOptics";
		model="RearmedServer\Attachments\Optics\PM2\PM2.p3d";
	};
	class ProxyPk_06: ProxyAttachment
	{
		scope=2;
		inventorySlot="weaponOpticsHandguard";
		model="RearmedServer\Attachments\Optics\Pk_06\Pk_06.p3d";
	};
	class ProxyUH1: ProxyAttachment
	{
		scope=2;
		inventorySlot="weaponOpticsCover";
		model="RearmedServer\Attachments\Optics\UH1\UH1.p3d";
	};
};
