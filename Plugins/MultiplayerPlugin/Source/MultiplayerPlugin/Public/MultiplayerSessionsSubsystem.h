// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Interfaces/OnlineSessionInterface.h"

#include "MultiplayerSessionsSubsystem.generated.h"


/**
 *  Declaring our ouwn custom delegates for the Menu class to bind callbacks to.
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMultiplayerOnCreateSessionComplete, bool, bWasSucceful);
DECLARE_MULTICAST_DELEGATE_TwoParams(FMultiplayerOnFindSessionsComplete,
										const TArray<FOnlineSessionSearchResult>& SessionResults,
										bool bWasSucceful);
DECLARE_MULTICAST_DELEGATE_OneParam(FMultiplayerJoinSessionComplete, EOnJoinSessionCompleteResult::Type Result);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMultiplayerDestroySessionComplete, bool, bWasSucceful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMultiplayerStartSessionComplete, bool, bWasSucceful);

UCLASS()
class MULTIPLAYERPLUGIN_API UMultiplayerSessionsSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	
public:
	UMultiplayerSessionsSubsystem();

	/**
	 * Methods to handle session functionality. The Menu class will call these 
	**/
	void CreateSession(int32 NumPublicConnections, FString MatchType);
	void FindSessions(int32 MaxSearchResults);
	void JoinSession(const FOnlineSessionSearchResult& SessionResult);
	void DestroySession();
	void StartSession();

	FMultiplayerOnCreateSessionComplete MultiplayerOnCreateSessionComplete;
	FMultiplayerOnFindSessionsComplete  MultiplayerOnFindSessionsComplete;
	FMultiplayerJoinSessionComplete MultiplayerOnJoinSessionComplete;
	FMultiplayerDestroySessionComplete MultiplayerOnDestroySessionComplete;
	FMultiplayerStartSessionComplete MultiplayerOnStartSessionComplete;
protected:
	/**
	 * Internal callbacks for the delegates we'll add to the Online Session Interface delegate list.
	 * Thise don't need to be called outside of this class.
	*/
	void OnCreateSessionComplete(FName SessionName, bool bWasSucceful);
	void OnFindSessionsComplete(bool bWasSucceful);
	void OnJoinSessionComplete(FName SessionName, EOnJoinSessionCompleteResult::Type);
	void OnDestroySessionComplete(FName SessionName, bool bWasSucceful);
	void OnStartSessionComplete(FName SessionName, bool bWasSucceful);

public:
	IOnlineSessionPtr SessionInterface;

	/**
	 * To add to the Online Session Interface delegate list.
	 * We'll bind our MultiplayerSessionSubsystem internal callbacks to these.
	*/
	FOnCreateSessionCompleteDelegate  CreateSessionCompleteDelegate;
	FDelegateHandle CreateSessionCompleteDelegateHandle;
	FOnFindSessionsCompleteDelegate   FindSessionsCompleteDelegate;
	FDelegateHandle FindSessionsCompleteDelegateHandle;
	FOnJoinSessionCompleteDelegate    JoinSessionCompleteDelegate;
	FDelegateHandle JoinSessionCompleteDelegateHandle;
	FOnDestroySessionCompleteDelegate DestroySessionCompleteDelegate;
	FDelegateHandle DestroySessionCompleteDelegateHandle;
	FOnStartSessionCompleteDelegate   StartSessionCompleteDelegate;
	FDelegateHandle StartSessionCompleteDelegateHandle;

	TSharedPtr<FOnlineSessionSettings> LastSessionSettings;
	TSharedPtr<FOnlineSessionSearch> LastSessionSearch;

	bool bCreateSessionOnDestroy{ false };
	int32 LastNumPublicConnections;
	FString LastMatchType;
};
