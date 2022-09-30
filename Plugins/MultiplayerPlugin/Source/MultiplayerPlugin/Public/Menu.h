// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Interfaces/OnlineSessionInterface.h"

#include "Menu.generated.h"

UCLASS()
class MULTIPLAYERPLUGIN_API UMenu : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
		void MenuSetup(int32 NumberOfPublicConnections = 4, FString MatchType = FString(TEXT("Deathmatch")),
			FString LobbyPath = FString(TEXT("/Game/ThirdPerson/Maps/Lobby")));

	

protected:
	virtual bool Initialize() override;
	virtual void OnLevelRemovedFromWorld(ULevel* InLevel, UWorld* World) override;

	/**
	 * Callbacks fot the custom delegates on the MultiplayerSessionSubsystem.
	**/
	UFUNCTION()
		void OnCreateSession(bool bWasSucceful);
	UFUNCTION()
		void OnDestroySession(bool bWasSucceful);
	UFUNCTION()
		void OnStartSession(bool bWasSucceful);
	void OnFindSessions(const TArray<FOnlineSessionSearchResult>& SessionResults, bool bWasSucceful);
	void OnJoinSession(EOnJoinSessionCompleteResult::Type Result);

private:
	UPROPERTY(meta = (BindWidget))
		class UButton* HostButton;

	UPROPERTY(meta = (BindWidget))
		UButton* JoinButton;

	UFUNCTION()
		void HostButtonClicked();

	UFUNCTION()
		void JoinButtonClicked();

	class UMultiplayerSessionsSubsystem* MultiplayerSessionsSubsystem;

	void MenuTearDown();

	int32 PublicConnections{ 4 };
	FString TypeOfMatch{ TEXT("Deathmath") };
	FString PathToLobby{ TEXT("") };
};
