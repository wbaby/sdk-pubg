// WidgetBlueprintGeneratedClass WebPopup.WebPopup_C
// Size: 0x4a8 (Inherited: 0x470)
struct UWebPopup_C : U*37b9c3312e {
	struct F*a6c93df757 UberGraphFrame; // 0x470(0x08)
	struct UImage* Image_1; // 0x478(0x08)
	struct UBorder* LoadingMaing; // 0x480(0x08)
	struct UBorder* MainButtonGroup; // 0x488(0x08)
	struct UBorder* WebViewBorder; // 0x490(0x08)
	struct FMulticastDelegate OnClosePopup; // 0x498(0x10)

	enum class ESlateVisibility UpdateButtonGroupVisibility_BP(); // Function WebPopup.WebPopup_C.UpdateButtonGroupVisibility_BP // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	struct FLinearColor UpdateBackgroundColor_BP(); // Function WebPopup.WebPopup_C.UpdateBackgroundColor_BP // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	struct FWebPopupParam PreSetting_BP(); // Function WebPopup.WebPopup_C.PreSetting_BP // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	struct FLinearColor SetPopupData(); // Function WebPopup.WebPopup_C.SetPopupData // Public|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
	void Destruct(); // Function WebPopup.WebPopup_C.Destruct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x370fbc
	void BndEvt__Button_Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WebPopup.WebPopup_C.BndEvt__Button_Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x370fbc
	void BndEvt__Button_Reload_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature(); // Function WebPopup.WebPopup_C.BndEvt__Button_Reload_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x370fbc
	void BndEvt__Button_Back_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature(); // Function WebPopup.WebPopup_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x370fbc
	void BndEvt__WebView_K2Node_ComponentBoundEvent_18_UIGTFinishLoadSignature__DelegateSignature(); // Function WebPopup.WebPopup_C.BndEvt__WebView_K2Node_ComponentBoundEvent_18_UIGTFinishLoadSignature__DelegateSignature // BlueprintEvent // @ game+0x370fbc
	void OnUpdateWebPopup(); // Function WebPopup.WebPopup_C.OnUpdateWebPopup // Event|Public|BlueprintEvent // @ game+0x370fbc
	void BndEvt__WebView_K2Node_ComponentBoundEvent_49_UIGTStartLoadingSignature__DelegateSignature(struct FString path, bool isMainFrame); // Function WebPopup.WebPopup_C.BndEvt__WebView_K2Node_ComponentBoundEvent_49_UIGTStartLoadingSignature__DelegateSignature // BlueprintEvent // @ game+0x370fbc
	void BndEvt__WebView_K2Node_ComponentBoundEvent_67_UIGTFailLoadSignature__DelegateSignature(); // Function WebPopup.WebPopup_C.BndEvt__WebView_K2Node_ComponentBoundEvent_67_UIGTFailLoadSignature__DelegateSignature // BlueprintEvent // @ game+0x370fbc
	void ExecuteUbergraph_WebPopup(int32 EntryPoint, struct FString _5c6cfaa940_path3, bool _5c6cfaa940_isMainFrame3, struct FWebPopupParam K2Node_Event_WebPopupParam, struct FString _5c6cfaa940_error, bool _5c6cfaa940_isMainFrame); // Function WebPopup.WebPopup_C.ExecuteUbergraph_WebPopup // HasDefaults // @ game+0x370fbc
	void OnClosePopup__DelegateSignature(struct UWebPopup_C* Widget); // Function WebPopup.WebPopup_C.OnClosePopup__DelegateSignature // Public|Delegate|BlueprintCallable|BlueprintEvent // @ game+0x370fbc
};
