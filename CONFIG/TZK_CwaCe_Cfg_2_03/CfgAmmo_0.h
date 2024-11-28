	class Default {};

	class BulletSingle: Default {};
	class BulletBurst: BulletSingle {};
	class BulletFullAuto: BulletBurst {};
	class BulletSilencedSingle: BulletSingle {};
	class BulletSilencedBurst: BulletBurst {};
	class BulletSniper: BulletSingle {};
	class Bullet7_6: BulletSingle {};
	class Bullet12_7: Bullet7_6 {};

	class BulletSingleW: BulletSingle {};
	class BulletBurstW: BulletBurst {};
	class BulletFullAutoW: BulletFullAuto {};
	class BulletSilencedSingleW: BulletSilencedSingle {};
	class BulletSilencedBurstW: BulletSilencedBurst {};
	class BulletSniperW: BulletSniper {};
	class Bullet7_6W: Bullet7_6 {};
	class Bullet12_7W: Bullet12_7 {};
	class BulletSingleE: BulletSingle {};
	class BulletBurstE: BulletBurst {};
	class BulletFullAutoE: BulletFullAuto {};
	class BulletSilencedSingleE: BulletSilencedSingle {};
	class BulletSilencedBurstE: BulletSilencedBurst {};
	class BulletSniperE: BulletSniper {};
	class Bullet7_6E: Bullet7_6 {};
	class Bullet12_7E: Bullet12_7 {};
	class BulletSingleG: BulletSingle {};
	class BulletBurstG: BulletBurst {};
	class BulletFullAutoG: BulletFullAuto {};
	class BulletSilencedSingleG: BulletSilencedSingle {};
	class BulletSilencedBurstG: BulletSilencedBurst {};
	class BulletSniperG: BulletSniper {};
	class Bullet7_6G: Bullet7_6 {};
	class Bullet12_7G: Bullet12_7 {};

	class Bizon: BulletSilencedSingle {};

	class ExplosiveBullet: BulletSingle {};
	class Bullet30: ExplosiveBullet {};
	class Bullet30W: Bullet30 {};
	class Bullet30E: Bullet30 {};
	class Bullet30A10: Bullet30W {};

	class Cannon25HE: ExplosiveBullet {}; //M2A2
	class Cannon30HE: ExplosiveBullet {}; //BMP2&Ka50
	class Cannon30AP: BulletSingle {};
	class Bullet4x20: ExplosiveBullet {}; //Vulcan. Slower rate and higher power
	class Bullet4x23: ExplosiveBullet {}; //Shilka(Zsu)

	class Shell: Default {};
	class Shell73: Shell {};
	class Shell105: Shell73 {};
	class Shell120: Shell105 {};
	class Shell125: Shell120 {};
	class Heat: Shell {};
	class Heat73: Heat {};
	class Heat105: Heat73 {};
	class Heat120: Heat105 {};
	class Heat125: Heat120 {};

	class AT3: Default {};
	class LAW: AT3 {};
	class RPG: LAW {};
	class CarlGustav: AT3 {};
	class AT4: CarlGustav {};
	class AA: CarlGustav {};
	class 9K32: AA {};

	class Hellfire: AT3 {};
	class HellfireApach: Hellfire {};
	class AT6: Hellfire {};
	class Zuni: Hellfire {};
	class Rocket57: Zuni {};
	class Maverick: Hellfire {};
	class Ch29T: Maverick {};

	class LaserDesignator: Default {};
	class LaserGuidedBomb: Default {};

	class Grenade: Default {};
	class GrenadeHand: Grenade {};
	class TimeBomb: Default {};
	class PipeBomb: TimeBomb {};
	class Mine: TimeBomb {};
	class MineE: Mine {};
	class MortarShell: Grenade {};
	class Flare: Grenade {};
	class FlareGreen: Flare {};
	class FlareYellow: Flare {};
	class SmokeShell: GrenadeHand {};
	class SmokeShellRed: SmokeShell {};
	class SmokeShellGreen: SmokeShell {};