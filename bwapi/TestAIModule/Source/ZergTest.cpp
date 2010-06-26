#include "ZergTest.h"
#include "MorphTest.h"
#include "BuildTest.h"
#include "ResearchTest.h"
#include "UpgradeTest.h"
using namespace std;
using namespace BWAPI;
void ZergTest::onStart()
{
  BWAssert(Broodwar->isMultiplayer()==false);
  BWAssert(Broodwar->isReplay()==false);
  Broodwar->sendText("show me the money");
  Broodwar->sendText("show me the money");
  Broodwar->setLocalSpeed(0);
  this->addTestCase(new MorphTest(UnitTypes::Zerg_Drone));
  this->addTestCase(new BuildTest(UnitTypes::Zerg_Hatchery));
  this->addTestCase(new MorphTest(UnitTypes::Zerg_Drone));
  this->addTestCase(new BuildTest(UnitTypes::Zerg_Hatchery));
  this->addTestCase(new MorphTest(UnitTypes::Zerg_Drone));
  this->addTestCase(new BuildTest(UnitTypes::Zerg_Creep_Colony));
  this->addTestCase(new MorphTest(UnitTypes::Zerg_Drone));
  this->addTestCase(new BuildTest(UnitTypes::Zerg_Creep_Colony));
  this->addTestCase(new MorphTest(UnitTypes::Zerg_Drone));
  this->addTestCase(new BuildTest(UnitTypes::Zerg_Creep_Colony));
  this->addTestCase(new MorphTest(UnitTypes::Zerg_Drone));
  this->addTestCase(new BuildTest(UnitTypes::Zerg_Extractor));
  this->addTestCase(new MorphTest(UnitTypes::Zerg_Drone));
  this->addTestCase(new BuildTest(UnitTypes::Zerg_Spawning_Pool));
  this->addTestCase(new MorphTest(UnitTypes::Zerg_Drone));
  this->addTestCase(new BuildTest(UnitTypes::Zerg_Evolution_Chamber));
  this->addTestCase(new MorphTest(UnitTypes::Zerg_Drone));
  this->addTestCase(new BuildTest(UnitTypes::Zerg_Hydralisk_Den));

  this->addTestCase(new MorphTest(UnitTypes::Zerg_Sunken_Colony));
  this->addTestCase(new MorphTest(UnitTypes::Zerg_Spore_Colony));
  this->addTestCase(new MorphTest(UnitTypes::Zerg_Lair));
  this->addTestCase(new MorphTest(UnitTypes::Zerg_Lair));

  this->addTestCase(new MorphTest(UnitTypes::Zerg_Drone));
  this->addTestCase(new BuildTest(UnitTypes::Zerg_Spire));
  this->addTestCase(new MorphTest(UnitTypes::Zerg_Drone));
  this->addTestCase(new BuildTest(UnitTypes::Zerg_Spire));
  this->addTestCase(new MorphTest(UnitTypes::Zerg_Drone));
  this->addTestCase(new BuildTest(UnitTypes::Zerg_Queens_Nest));

  this->addTestCase(new MorphTest(UnitTypes::Zerg_Hive));
  this->addTestCase(new MorphTest(UnitTypes::Zerg_Greater_Spire));

  this->addTestCase(new MorphTest(UnitTypes::Zerg_Drone));
  this->addTestCase(new BuildTest(UnitTypes::Zerg_Nydus_Canal));
  //add test case for Build Nydus Canal exit...
  this->addTestCase(new MorphTest(UnitTypes::Zerg_Drone));
  this->addTestCase(new BuildTest(UnitTypes::Zerg_Ultralisk_Cavern));
  this->addTestCase(new MorphTest(UnitTypes::Zerg_Drone));
  this->addTestCase(new BuildTest(UnitTypes::Zerg_Defiler_Mound));

  this->addTestCase(new MorphTest(UnitTypes::Zerg_Drone));
  this->addTestCase(new MorphTest(UnitTypes::Zerg_Zergling));
  this->addTestCase(new MorphTest(UnitTypes::Zerg_Overlord));
  this->addTestCase(new MorphTest(UnitTypes::Zerg_Overlord));
  this->addTestCase(new MorphTest(UnitTypes::Zerg_Overlord));
  this->addTestCase(new MorphTest(UnitTypes::Zerg_Overlord));
  this->addTestCase(new MorphTest(UnitTypes::Zerg_Hydralisk));
  this->addTestCase(new MorphTest(UnitTypes::Zerg_Hydralisk));
  this->addTestCase(new MorphTest(UnitTypes::Zerg_Mutalisk));
  this->addTestCase(new MorphTest(UnitTypes::Zerg_Mutalisk));
  this->addTestCase(new MorphTest(UnitTypes::Zerg_Mutalisk));
  this->addTestCase(new MorphTest(UnitTypes::Zerg_Scourge));
  this->addTestCase(new MorphTest(UnitTypes::Zerg_Queen));
  this->addTestCase(new MorphTest(UnitTypes::Zerg_Ultralisk));
  this->addTestCase(new MorphTest(UnitTypes::Zerg_Defiler));
  this->addTestCase(new MorphTest(UnitTypes::Zerg_Devourer));
  this->addTestCase(new MorphTest(UnitTypes::Zerg_Guardian));

  this->addTestCase(new ResearchTest(TechTypes::Burrowing));
  this->addTestCase(new UpgradeTest(UpgradeTypes::Ventral_Sacs));
  this->addTestCase(new UpgradeTest(UpgradeTypes::Antennae));
  this->addTestCase(new UpgradeTest(UpgradeTypes::Pneumatized_Carapace));

  this->addTestCase(new UpgradeTest(UpgradeTypes::Metabolic_Boost));
  this->addTestCase(new UpgradeTest(UpgradeTypes::Adrenal_Glands));

  this->addTestCase(new UpgradeTest(UpgradeTypes::Muscular_Augments));
  this->addTestCase(new UpgradeTest(UpgradeTypes::Grooved_Spines));
  this->addTestCase(new ResearchTest(TechTypes::Lurker_Aspect));

  this->addTestCase(new ResearchTest(TechTypes::Spawn_Broodlings));
  this->addTestCase(new ResearchTest(TechTypes::Ensnare));
  this->addTestCase(new UpgradeTest(UpgradeTypes::Gamete_Meiosis));

  this->addTestCase(new UpgradeTest(UpgradeTypes::Anabolic_Synthesis));
  this->addTestCase(new UpgradeTest(UpgradeTypes::Chitinous_Plating));

  this->addTestCase(new ResearchTest(TechTypes::Plague));
  this->addTestCase(new ResearchTest(TechTypes::Consume));
  this->addTestCase(new UpgradeTest(UpgradeTypes::Metasynaptic_Node));
  for(int l=0;l<3;l++)
  {
    this->addTestCase(new UpgradeTest(UpgradeTypes::Zerg_Melee_Attacks));
    this->addTestCase(new UpgradeTest(UpgradeTypes::Zerg_Missile_Attacks));
    this->addTestCase(new UpgradeTest(UpgradeTypes::Zerg_Carapace));
    this->addTestCase(new UpgradeTest(UpgradeTypes::Zerg_Flyer_Attacks));
    this->addTestCase(new UpgradeTest(UpgradeTypes::Zerg_Flyer_Carapace));
  }

}