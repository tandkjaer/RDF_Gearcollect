class CfgPatches
{
	class RDF_Gearcollect
	{
		units[] = {"RDF_GEAR"};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_Modules_F"};
	};
};

class CfgFunctions
{
	class RDF
	{
		class Gearcollect
		{
			file = "\rdf_gearcollect\functions";
			class deltag_init{postInit=1;};
		};
	};
};
