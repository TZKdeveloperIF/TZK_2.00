// Reduse smoke lasting time to get better performance

class CfgCloudlets {
	access = 1;
	// explosion of explosive ammo including cannon, shell and missile
	class Explosion {
		access = 3;
		cloudletDuration = 0.2;
		cloudletAnimPeriod = 0.5;
		cloudletSize = 1;
		cloudletAlpha = 1;
		cloudletGrowUp = 0.05;
		cloudletFadeIn = 0.01;
		cloudletFadeOut = 0.2;
		cloudletAccY = -0.2;
		cloudletMinYSpeed = 0;
		cloudletMaxYSpeed = 6;
		cloudletShape = "cl_fired";
		cloudletColor[] = {1,1,1,0};
		interval = 0.001;
		size = 4;
		sourceSize = 3;
		timeToLive = 0;
		initT = 2500;
		deltaT = -4000;
		class Table {
			class T14 {
				maxT = 1400;
				color[] = {0.91,0.5,0.17,0};
			};
			class T15 {
				maxT = 1500;
				color[] = {1,0.6,0.2,0};
			};
			class T16 {
				maxT = 1600;
				color[] = {1,0.71,0.3,0};
			};
			class T17 {
				maxT = 1700;
				color[] = {0.98,0.83,0.41,0};
			};
			class T18 {
				maxT = 1800;
				color[] = {0.98,0.91,0.54,0};
			};
			class T19 {
				maxT = 1900;
				color[] = {0.98,0.99,0.6,0};
			};
			class T20 {
				maxT = 2000;
				color[] = {0.96,0.99,0.72,0};
			};
			class T21 {
				maxT = 2100;
				color[] = {1,0.98,0.91,0};
			};
			class T22 {
				maxT = 2200;
				color[] = {1,1,1,0};
			};
		};
	};
	// upward black smoke
	class CraterSmoke1 {
		access = 3;
		interval = "0.05 / 	0.4";
		cloudletAnimPeriod = "1 * 	0.4";
		cloudletSize = 2;
		cloudletAlpha = 1;
		cloudletGrowUp = "1.0 * 	0.4";
		cloudletFadeIn = "0.1 * 	0.4";
		cloudletDuration = "3.0 * 	0.4";
		cloudletFadeOut = "1.5 * 	0.4";
		cloudletAccY = -0.1;
		cloudletMinYSpeed = "0.0 / 	0.4";
		cloudletMaxYSpeed = "5.0 / 	0.4";
		cloudletColor[] = {1,1,1,0};
		initT = 500;
		deltaT = "-50 * 	0.4";
		cloudletShape = "cl_basic";
		density = "1.0 / 0.7";
		size = 1;
		timeToLive = "0.4 * 	0.4";
		in = "0.0 * 	0.4";
		out = "0.0 * 	0.4";
		initYSpeed = "5.0 / 	0.4";
		class Table {
			class T0 {
				maxT = 0;
				color[] = {1,1,1,0};
			};
			class T1 {
				maxT = 500;
				color[] = {0.5,0.5,0.5,0};
			};
		};
	};
	// smokes at explosion position
	class CraterSmoke2 {
		access = 3;
		interval = "0.1 / 	0.1";
		cloudletAnimPeriod = "1 * 	0.1";
		cloudletSize = 2;
		cloudletAlpha = 1;
		cloudletGrowUp = "1.0 * 	0.1";
		cloudletFadeIn = "0.1 * 	0.1";
		cloudletDuration = "2.5 * 	0.1";
		cloudletFadeOut = "1.5 * 	0.1";
		cloudletAccY = -0.1;
		cloudletMinYSpeed = "0.0 / 	0.1";
		cloudletMaxYSpeed = "2.0 / 	0.1";
		cloudletColor[] = {1,1,1,0};
		initT = 0;
		deltaT = "0 * 	0.1";
		cloudletShape = "cl_basic";
		density = "1.0 / 0.7";
		size = 1;
		timeToLive = "1.0 * 	0.1";
		in = "0.0 * 	0.1";
		out = "2.0 * 	0.1";
		initYSpeed = "0 / 	0.1";
		class Table {
			class T0 {
				maxT = 0;
				color[] = {1,1,1,0};
			};
		};
	};
	// upward white smoke
	class CraterSmoke3 {
		access = 3;
		interval = "0.1 / 	0.4";
		cloudletAnimPeriod = "1 * 	0.4";
		cloudletSize = 1;
		cloudletAlpha = 0.3;
		cloudletGrowUp = "1.0 * 	0.4";
		cloudletFadeIn = "0.5 * 	0.4";
		cloudletDuration = "3 * 	0.4";
		cloudletFadeOut = "1 * 	0.4";
		cloudletAccY = "-0.1 * 	0.4";
		cloudletMinYSpeed = "0.0 / 	0.4";
		cloudletMaxYSpeed = "5.0 / 	0.4";
		cloudletColor[] = {1,1,1,0};
		initT = 500;
		deltaT = "-80 * 	0.4";
		cloudletShape = "cl_basic";
		density = "0.5 / 0.7";
		size = 1;
		timeToLive = "2.0 * 	0.4";
		in = "0.2 * 	0.4";
		out = "0.0 * 	0.4";
		initYSpeed = "5.0 / 	0.4";
		class Table {
			class T0 {
				maxT = 0;
				color[] = {1,1,1,0};
			};
		};
	};
	class CraterDustSmall {
		access = 3;
		interval = 0.01;
		cloudletSize = 1;
		cloudletAlpha = 0.6;
		cloudletDuration = 0.2;
		cloudletAnimPeriod = 1;
		cloudletGrowUp = 0.6;
		cloudletFadeIn = 0;
		cloudletFadeOut = 0.6;
		cloudletAccY = -3.5;
		cloudletMinYSpeed = -20;
		cloudletMaxYSpeed = 10;
		cloudletColor[] = {0.25,0.23,0.16,0};
		initT = 0;
		deltaT = 0;
		cloudletShape = "cl_basic";
		size = 0.2;
		sourceSize = 0.02;
		class Table {
			class T0 {
				maxT = 0;
				color[] = {1,1,1,0};
			};
		};
	};
	class CraterBlood: CraterDustSmall {
		access = 3;
		interval = 0.005;
		cloudletAlpha = 0.5;
		cloudletDuration = 0.1;
		cloudletAnimPeriod = 1;
		cloudletGrowUp = 0.3;
		cloudletFadeIn = 0;
		cloudletFadeOut = 0.3;
		cloudletAccY = -1;
		cloudletMinYSpeed = -10;
		cloudletMaxYSpeed = 10;
		cloudletShape = "cl_water";
		cloudletColor[] = {0.35,0,0.05,0};
		size = 0.15;
		sourceSize = 0.05;
	};
	class CraterWater: CraterDustSmall {
		access = 3;
		interval = 0.01;
		cloudletAlpha = 1;
		cloudletDuration = 0.3;
		cloudletAnimPeriod = 1;
		cloudletGrowUp = 0.3;
		cloudletFadeIn = 0;
		cloudletFadeOut = 0.2;
		cloudletAccY = -10;
		cloudletMinYSpeed = -100;
		cloudletMaxYSpeed = 100;
		cloudletShape = "cl_water";
		cloudletColor[] = {0.54,0.69,0.645,0};
		size = 0.02;
		sourceSize = 0.02;
	};
	class CraterDustBig: CraterDustSmall {
		access = 3;
		cloudletDuration = 2;
		cloudletGrowUp = 0.2;
		cloudletFadeIn = 0.2;
		cloudletFadeOut = 1.5;
		cloudletAccY = -8;
		cloudletMinYSpeed = -20;
		cloudletMaxYSpeed = 10;
	};
	class CloudletsMissile {
		access = 3;
		interval = 0.005;
		cloudletSize = 0.3;
		cloudletAlpha = 0.5;
		cloudletDuration = 0.0;
		cloudletAnimPeriod = 1;
		cloudletGrowUp = 0.0;
		cloudletFadeIn = 0;
		cloudletFadeOut = 0.0;
		cloudletAccY = 0;
		cloudletMinYSpeed = -10;
		cloudletMaxYSpeed = 10;
		cloudletColor[] = {1,1,1,0};
		initT = 0;
		deltaT = 0;
		cloudletShape = "missileSmoke";
		class Table {
			class T0 {
				maxT = 0;
				color[] = {1,1,1,0};
			};
		};
	};
	class CloudletsMissileManual: CloudletsMissile {
		cloudletSize = 0.5;
		cloudletAlpha = 0.4;
	};
	class CloudletsScud: CloudletsMissile {
		cloudletSize = 8;
		cloudletAlpha = 0.5;
		cloudletColor[] = {1,1,1,0};
		cloudletFadeIn = 0;
		cloudletDuration = 1.5;
		cloudletFadeOut = 0.5;
		cloudletGrowUp = 1;
		cloudletAccY = 0;
		cloudletMinYSpeed = -1000;
		cloudletMaxYSpeed = 1000;
		interval = 0.02;
		size = 8;
		sourceSize = 1;
	};
};
// Vehicle can define their own GunFire/GunClouds/MGunFire/MGunClouds but most of them simply inherit from below classes.
class WeaponFireGun {
	access = 3;
	cloudletDuration = 0.2;
	cloudletAnimPeriod = 1;
	cloudletSize = 1;
	cloudletAlpha = 1;
	cloudletGrowUp = 0.2;
	cloudletFadeIn = 0.01;
	cloudletFadeOut = 0.5;
	cloudletAccY = 0;
	cloudletMinYSpeed = -100;
	cloudletMaxYSpeed = 100;
	cloudletShape = "cl_fired";
	cloudletColor[] = {1,1,1,0};
	interval = 0.01;
	size = 3;
	sourceSize = 0.5;
	timeToLive = 0;
	initT = 4500;
	deltaT = -3000;
	class Table {
		class T0 {
			maxT = 0;
			color[] = {0.82,0.95,0.93,0};
		};
		class T1 {
			maxT = 200;
			color[] = {0.75,0.77,0.9,0};
		};
		class T2 {
			maxT = 400;
			color[] = {0.56,0.62,0.67,0};
		};
		class T3 {
			maxT = 600;
			color[] = {0.39,0.46,0.47,0};
		};
		class T4 {
			maxT = 800;
			color[] = {0.24,0.31,0.31,0};
		};
		class T5 {
			maxT = 1000;
			color[] = {0.23,0.31,0.29,0};
		};
		class T6 {
			maxT = 1500;
			color[] = {0.21,0.29,0.27,0};
		};
		class T7 {
			maxT = 2000;
			color[] = {0.19,0.23,0.21,0};
		};
		class T8 {
			maxT = 2300;
			color[] = {0.22,0.19,0.1,0};
		};
		class T9 {
			maxT = 2500;
			color[] = {0.35,0.2,0.02,0};
		};
		class T10 {
			maxT = 2600;
			color[] = {0.62,0.29,0.03,0};
		};
		class T11 {
			maxT = 2650;
			color[] = {0.59,0.35,0.05,0};
		};
		class T12 {
			maxT = 2700;
			color[] = {0.75,0.37,0.03,0};
		};
		class T13 {
			maxT = 2750;
			color[] = {0.88,0.34,0.03,0};
		};
		class T14 {
			maxT = 2800;
			color[] = {0.91,0.5,0.17,0};
		};
		class T15 {
			maxT = 2850;
			color[] = {1,0.6,0.2,0};
		};
		class T16 {
			maxT = 2900;
			color[] = {1,0.71,0.3,0};
		};
		class T17 {
			maxT = 2950;
			color[] = {0.98,0.83,0.41,0};
		};
		class T18 {
			maxT = 3000;
			color[] = {0.98,0.91,0.54,0};
		};
		class T19 {
			maxT = 3100;
			color[] = {0.98,0.99,0.6,0};
		};
		class T20 {
			maxT = 3300;
			color[] = {0.96,0.99,0.72,0};
		};
		class T21 {
			maxT = 3600;
			color[] = {1,0.98,0.91,0};
		};
		class T22 {
			maxT = 4200;
			color[] = {1,1,1,0};
		};
	};
};
class WeaponFireMGun: WeaponFireGun {
	cloudletDuration = 0;
	cloudletGrowUp = 0.06;
	cloudletFadeIn = 0;
	cloudletFadeOut = 0.12;
	interval = 0.005;
	size = 0.12;
	sourceSize = 0.01;
	initT = 3200;
	deltaT = -4000;
};
// General main gun clouds. 
class WeaponCloudsGun {
	access = 3;
	cloudletDuration = 0.3;
	cloudletAnimPeriod = 1;
	cloudletSize = 1;
	cloudletAlpha = 1;
	cloudletGrowUp = 1;
	cloudletFadeIn = 0.01;
	cloudletFadeOut = 1;
	cloudletAccY = 0.4;
	cloudletMinYSpeed = 0.2;
	cloudletMaxYSpeed = 0.8;
	cloudletShape = "cl_basic";
	cloudletColor[] = {1,1,1,0};
	interval = 0.05;
	size = 3;
	sourceSize = 0.5;
	timeToLive = 0;
	initT = 0;
	deltaT = 0;
	class Table {
		class T0 {
			maxT = 0;
			color[] = {1,1,1,0};
		};
	};
};
class WeaponCloudsMGun: WeaponCloudsGun {
	access = 3;
	cloudletGrowUp = 0.05;
	cloudletFadeIn = 0;
	cloudletFadeOut = 0.1;
	cloudletDuration = 0.05;
	cloudletAlpha = 0.3;
	cloudletAccY = 0;
	cloudletMinYSpeed = -100;
	cloudletMaxYSpeed = 100;
	interval = 0.02;
	size = 0.3;
	sourceSize = 0.02;
};