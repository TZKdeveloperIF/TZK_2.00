	class Default {};

	class Gun73: Default {};
	class Gun105: Gun73 {};
	class Gun120: Gun105 {};
	class Gun125: Gun120 {};
	class Shell73: Default {};
	class Heat73: Shell73 {};
	class Shell105: Shell73 {};
	class Heat105: Shell105 {};
	class Shell120: Shell105 {};
	class Heat120: Shell120 {};
	class Shell125: Shell120 {};
	class Heat125: Shell125 {};

	class MGun: Default {};
	class Riffle: MGun {};
	class M16: Riffle {};
	class M4: Riffle {};
	class AK47: Riffle {};
	class AK47CZ: AK47 {};
	class AK74: Riffle {};
	class AK74SU: AK74 {};
	class HK: Riffle {};
	class BizonBase: Riffle {};
	class BizonMag: BizonBase {};
	class Bizon: BizonBase {};
	class SniperRiffle: Riffle {};
	class M21: SniperRiffle {};
	class SVDDragunov: SniperRiffle {};
	class Binocular: Default {};
	class NVGoggles: Binocular {};

	class MachineGun7_6: MGun {};
	class MachineGun7_6Manual: MachineGun7_6 {};
	class M60: MachineGun7_6Manual {};
	class PK: MachineGun7_6Manual {};
	class MachineGun12_7: MachineGun7_6 {};
	class Browning: MachineGun12_7 {};
	class MachineGun30: MachineGun7_6 {};
	class MachineGun30W: MachineGun30 {};
	class MachineGun30E: MachineGun30 {};
	class MachineGun30A10: MachineGun30 {};
	class MachineGun30A10Burst: MachineGun30A10 {};
	class VulcanCannon: MachineGun30 {};
	class ZsuCannon: MachineGun30 {};

	class GrenadeLauncher: Default {};
	class RiffleGrenadeLauncher: Default {};
	class M16GrenadeLauncher {};
	class AK47GrenadeLauncher {};
	class AK74GrenadeLauncher {};
	class Mortar: GrenadeLauncher {};
	class Flare: GrenadeLauncher {};
	class FlareGreen: Flare {};
	class FlareRed: Flare {};
	class FlareYellow: Flare {};

	class Throw: GrenadeLauncher {};
	class HandGrenade: GrenadeLauncher {};
	class SmokeShell: HandGrenade {};
	class SmokeShellRed: SmokeShell {};
	class SmokeShellGreen: SmokeShell {};

	class Put: Default {};
	class TimeBomb: Default {};
	class Mine: TimeBomb {};
	class MineE: TimeBomb {};
	class PipeBomb: TimeBomb {};

	class LaserDesignatorBase: Default {};
	class LaserDesignator: LaserDesignatorBase {};
	class LAWLauncher:Default {};
	class RPGLauncher: LAWLauncher {};
	class CarlGustavLauncher:LAWLauncher {};
	class AT4Launcher: CarlGustavLauncher {};
	
	class AT3Launcher: CarlGustavLauncher {};
	class ZuniLauncher38: AT3Launcher {};
	class Rocket57x64: ZuniLauncher38 {};
	class HellfireLauncher: AT3Launcher {};
	class HellfireLauncherCobra: HellfireLauncher {};
	class HellfireLauncherHind: HellfireLauncher {};
	class MaverickLauncher: HellfireLauncher {};
	class Ch29TLauncher: MaverickLauncher {};
	class AALauncher:CarlGustavLauncher {};
	class 9K32Launcher:AALauncher {};

	class Cannon25HE: Default {};
	class Cannon30HE: Default {};
	class Cannon30AP: Cannon30HE {};
	class Cannon30: Default {};
	class Mm1Base: GrenadeLauncher {};
	class MM1Magazine: Mm1Base {};
	class MM1: Mm1Base {};
	class 6G30Base: GrenadeLauncher {};
	class 6G30Magazine: 6G30Base {};
	class 6G30: 6G30Base {};
	class LaserGuidedBombLauncher: HellfireLauncher {};