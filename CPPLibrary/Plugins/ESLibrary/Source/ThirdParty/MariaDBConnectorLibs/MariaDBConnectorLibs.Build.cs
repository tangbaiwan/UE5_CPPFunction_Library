// Fill out your copyright notice in the Description page of Project Settings.

using System.IO;
using UnrealBuildTool;

public class MariaDBConnectorLibs: ModuleRules
{
	public MariaDBConnectorLibs(ReadOnlyTargetRules Target) : base(Target)
	{
		Type = ModuleType.External;

        PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "MariaDB_Connector_C_64-bit", "include"));

        if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			// Add the import library
			PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "MariaDB_Connector_C_64-bit", "lib"));
			//PublicAdditionalLibraries.Add("libmariadb.lib");
			string PathInc = Path.Combine(ModuleDirectory, "MariaDB_Connector_C_64-bit", "lib");
			PublicAdditionalLibraries.Add(PathInc+ "/mariadbclient.lib");	
			
			// Delay-load the DLL, so we can load it from the right place first	
			//PublicDelayLoadDLLs.Add("libmariadb.dll");				
			
			//PublicLibraryPaths.Add(Path.Combine(ModuleDirectory, "MariaDB Connector C 64-bit", "lib", "plugin"));
			// Delay-load the DLL, so we can load it from the right place first		
			//PublicDelayLoadDLLs.Add("dialog.dll");
			//PublicDelayLoadDLLs.Add("mysqlclearpassword.dll");
					
		}	
	}
}
