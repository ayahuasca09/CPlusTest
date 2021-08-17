// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "CPluusPJHUD.generated.h"

UCLASS()
class ACPluusPJHUD : public AHUD
{
	GENERATED_BODY()

public:
	ACPluusPJHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

