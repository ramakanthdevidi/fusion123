/*
 * Copyright 1995, 2000 Perforce Software.  All rights reserved.
 *
 * This file is part of Perforce - the FAST SCM System.
 */

/* 
 * p4tags.h - definition of rpc variable names
 *
 * The P4Tag class contains nothing but static variables containing
 * the strings passed to the Rpc::SetVar() and Invoke() functions, to
 * save string space across files.
 */

struct P4Tag {

	// protocol levels

	static const char l_client[];
	static const char l_xfiles[];
	static const char l_proxy[];
	static const char l_server[];
	static const char l_server2[];
	static const char l_altSync[];

	// client service methods

	static const char c_Ack[];
	static const char c_AckMatch[];
	static const char c_ActionResolve[];
	static const char c_AltSync[];
	static const char c_CheckFile[];
	static const char c_ReconcileEdit[];
	static const char c_ChmodFile[];
	static const char c_CloseDiff[];
	static const char c_CloseFile[];
	static const char c_CloseMatch[];
	static const char c_CloseMerge[];
	static const char c_ConvertFile[];
	static const char c_Crypto[];
	static const char c_DeleteFile[];
	static const char c_EditData[];
	static const char c_ErrorPause[];
	static const char c_FstatInfo[];
	static const char c_FstatPartial[];
	static const char c_HandleError[];
	static const char c_InputData[];
	static const char c_Message[];
	static const char c_OpenDiff[];
	static const char c_OpenFile[];
	static const char c_OpenMatch[];
	static const char c_OpenMerge2[];
	static const char c_OpenMerge3[];
	static const char c_OpenUrl[];
	static const char c_OutputBinary[];
	static const char c_OutputData[];
	static const char c_OutputError[];
	static const char c_OutputInfo[];
	static const char c_OutputText[];
	static const char c_Ping[];
	static const char c_Progress[];
	static const char c_Prompt[];
	static const char c_MoveFile[];
	static const char c_ReconcileAdd[];
	static const char c_ReconcileFlush[];
	static const char c_ReceiveFiles[];
	static const char c_ExactMatch[];
	static const char c_ScanDir[];
	static const char c_SendFile[];
	static const char c_SetPassword[];
	static const char c_SSO[];
	static const char c_WriteDiff[];
	static const char c_WriteFile[];
	static const char c_WriteMatch[];
	static const char c_WriteMerge[];
	static const char c_WriteVarPartial[];

	// protocol service methods

	static const char p_compress1[];
	static const char p_compress2[];
	static const char p_echo[];
	static const char p_errorHandler[];
	static const char p_flush1[];
	static const char p_flush2[];
	static const char p_funcHandler[];
	static const char p_protocol[];
	static const char p_release[];
	static const char p_release2[];

	// variables known to the clients

	static const char v_actionOwner[];
	static const char v_action[];
	static const char v_add[];
	static const char v_added[];
	static const char v_agentProgram[];
	static const char v_altSync[];
	static const char v_altSyncResults[];
	static const char v_altSyncVars[];
	static const char v_altSyncVersion[];
	static const char v_api[];
	static const char v_app[];
	static const char v_appliedJnl[];
	static const char v_appliedPos[];
	static const char v_andmap[];
	static const char v_associatedChange[];
	static const char v_attack[];
	static const char v_attr[];
	static const char v_authServer[];
	static const char v_autoLogin[];
	static const char v_autoTune[];
	static const char v_badAlloc[];
	static const char v_baseName[];
	static const char v_behindBytes[];
	static const char v_behindJnls[];
	static const char v_bits[];
	static const char v_blob[];
	static const char v_blockCount[];
	static const char v_branch[];
	static const char v_broker[];
	static const char v_bytesBehind[];
	static const char v_archiveFile[];
	static const char v_caddr[];
	static const char v_caseHandling[];
	static const char v_change[];
	static const char v_change2[];
	static const char v_changeIdentity[];
	static const char v_changeImportedBy[];
	static const char v_changeServer[];
	static const char v_changeType[];
	static const char v_changeView[];
	static const char v_charset[];
	static const char v_check[];
	static const char v_checkFile[];
	static const char v_checkpoint[];
	static const char v_checkLinks[];
	static const char v_checkLinksN[];
	static const char v_chmod[];
	static const char v_chunking[];
	static const char v_chunkMap[];
	static const char v_chunkMapHandle[];
	static const char v_chunkWrite[];
	static const char v_chunkMapWrite[];
	static const char v_chunkToken[];
	static const char v_clientAddress[];
	static const char v_clientCase[];
	static const char v_clientCwd[];
	static const char v_clientDepotFile[];
	static const char v_clientDepotRev[];
	static const char v_clientFile[];
	static const char v_clientHost[];
	static const char v_clientName[];
	static const char v_clientRoot[];
	static const char v_clientStatsFunc[];
	static const char v_clientStream[];
	static const char v_client[];
	static const char v_cmpfile[];
	static const char v_code[];
	static const char v_commandGroup[];
	static const char v_commit[];
	static const char v_commitAuthor[];
	static const char v_commitAuthorEmail[];
	static const char v_commits[];
	static const char v_committer[];
	static const char v_committerEmail[];
	static const char v_committerDate[];
	static const char v_compare[];
	static const char v_compCksum[];
	static const char v_componentDir[];
	static const char v_configurableName[];
	static const char v_configurableValue[];
	static const char v_configurables[];
	static const char v_confirm[];
	static const char v_conflict[];
	static const char v_copied[];
	static const char v_cumulative[];
	static const char v_count[];
	static const char v_counter[];
	static const char v_laddr[];
	static const char v_compression[];
	static const char v_current[];
	static const char v_cwd[];
	static const char v_daddr[];
	static const char v_data[];
	static const char v_data2[];		// p4 passwd
	static const char v_date[];
	static const char v_dbstat[];
	static const char v_decline[];
	static const char v_depotChange[];
	static const char v_depotRev[];
	static const char v_depotTime[];
	static const char v_desc[];
	static const char v_descKey[];		// original CL#
	static const char v_dhash[];
	static const char v_diffFlags[];
	static const char v_digest[];
	static const char v_digestType[];
	static const char v_digestTypeMD5[];
	static const char v_digestTypeGitText[];
	static const char v_digestTypeGitBinary[];
	static const char v_digestTypeSHA256[];
	static const char v_dir[];
	static const char v_disabled[];
	static const char v_effectiveComponentType[];
	static const char v_enableStreams[];
	static const char v_enableGraph[];
	static const char v_endFromChange[];
	static const char v_endFromRev[];
	static const char v_endToChange[];
	static const char v_endToRev[];
	static const char v_erev[];
	static const char v_executable[];
	static const char v_expandAndmaps[];
	static const char v_extensionsEnabled[];
	static const char v_externalAuth[];
	static const char v_extraTag[];
	static const char v_extraTagType[];
	static const char v_failoverSeen[];
	static const char v_false[];
	static const char v_fatal[];
	static const char v_field[];
	static const char v_fileCount[];
	static const char v_fileNum[];
	static const char v_fileSize[];
	static const char v_fileType[];
	static const char v_file[];
	static const char v_filter[];
	static const char v_flushHard[];
	static const char v_fmt[];
	static const char v_forceType[];
	static const char v_fromFile[];
	static const char v_fromLbrFile[];
	static const char v_fromLbrPath[];
	static const char v_fromLbrRev[];
	static const char v_fromLbrType[];
	static const char v_fromRev[];
	static const char v_fromStream[];
	static const char v_fseq[];
	static const char v_func[];
	static const char v_func2[];
	static const char v_handle[];
	static const char v_hash[];
	static const char v_hashType[];
	static const char v_haveRev[];
	static const char v_headAction[];
	static const char v_headChange[];
	static const char v_headCharset[];
	static const char v_headContent[];
	static const char v_headModTime[];
	static const char v_headRev[];
	static const char v_headTime[];
	static const char v_headType[];
	static const char v_hidden[];
	static const char v_himark[];
	static const char v_host[];
	static const char v_how[];
	static const char v_ignore[];
	static const char v_initroot[];
	static const char v_interface[];
	static const char v_ipv4Address[];
	static const char v_ipv6Address[];
	static const char v_isgroup[];
	static const char v_isMapped[];
	static const char v_isSparse[];
	static const char v_isTask[];
	static const char v_journalcopyFlags[];
	static const char v_job[];
	static const char v_jobstat[];
	static const char v_jnlBatchSize[];
	static const char v_journal[];
	static const char v_key[];
	static const char v_keywords[];
	static const char v_language[];
	static const char v_lazyCopyFile[];
	static const char v_lazyCopyRev[];
	static const char v_lbrFile[];		// also remote depot
	static const char v_lbrChange[];
	static const char v_lbrIsLazy[];	
	static const char v_lbrPath[];
	static const char v_lbrRefCount[];
	static const char v_lbrRelPath[];
	static const char v_lbrRelTo[];
	static const char v_lbrRelToPath[];
	static const char v_lbrReplication[];
	static const char v_lbrRev[];		// also remote depot
	static const char v_lbrType[];		// also remote depot
	static const char v_leof_num[];
	static const char v_leof_sequence[];
	static const char v_ldap[];
	static const char v_ldapAuth[];
	static const char v_level[];
	static const char v_lfmt[];
	static const char v_line[];
	static const char v_lineEnd[];
	static const char v_locale[];
	static const char v_lower[];
	static const char v_lockGlobal[];
	static const char v_lockId[];
	static const char v_lockOnCommit[];
	static const char v_lockStatus[];
	static const char v_macAddress[];
	static const char v_mangle[];
	static const char v_matchedLine[];
	static const char v_matchBegin[];
	static const char v_matchEnd[];
	static const char v_maxLockTime[];
	static const char v_maxOpenFiles[];
	static const char v_maxPauseTime[];
	static const char v_maxMem[];
	static const char v_maxResults[];
	static const char v_maxScanRows[];
	static const char v_maxValue[];
	static const char v_mergeAuto[];
	static const char v_mergeConfirm[];
	static const char v_mergeDecline[];
	static const char v_mergeHow[];
	static const char v_mergePerms[];
	static const char v_minClient[];
	static const char v_mode[];
	static const char v_monitor[];
	static const char v_move[];
	static const char v_name[];
	static const char v_newServerId[];
	static const char v_noBase[];
	static const char v_nocase[];
	static const char v_noclobber[];
	static const char v_noecho[];
	static const char v_noneFound[];
	static const char v_nonsequential[];
	static const char v_noprompt[];
	static const char v_offset[];
	static const char v_oid[];
	static const char v_op[];
	static const char v_open[];
	static const char v_os[];
	static const char v_otherAction[];
	static const char v_otherChange[];
	static const char v_otherLock[];
	static const char v_otherLockGlobal[];
	static const char v_otherLockOnCommit[];
	static const char v_otherOpen[];
	static const char v_ourLock[];
	static const char v_packName[];
	static const char v_parent[];
	static const char v_passFunc[];
	static const char v_password[];
	static const char v_path[];
	static const char v_path2[];
	static const char v_pathSource[];
	static const char v_pathType[];
	static const char v_peeking[];
	static const char v_perm[];
	static const char v_permmax[];
	static const char v_perms[];
	static const char v_port[];
	static const char v_preview[];
	static const char v_prog[];
	static const char v_progress[];
	static const char v_progressDone[];
	static const char v_progressHandle[];
	static const char v_progressType[];
	static const char v_progressUpdate[];
	static const char v_proxy[];
	static const char v_proxyAddress[];
	static const char v_proxyEncryption[];
	static const char v_proxyCertExpires[];
	static const char v_proxyRoot[];
	static const char v_proxyCacheRoot[];
	static const char v_proxyVersion[];
	static const char v_purge[];
	static const char v_pusher[];
	static const char v_rActionType[];
	static const char v_rActionMerge[];
	static const char v_rActionTheirs[];
	static const char v_rActionYours[];
	static const char v_rAutoResult[];
	static const char v_rOptAuto[];
	static const char v_rOptHelp[];
	static const char v_rOptMerge[];
	static const char v_rOptSkip[];
	static const char v_rOptTheirs[];
	static const char v_rOptYours[];
	static const char v_rPromptMerge[];
	static const char v_rPromptTheirs[];
	static const char v_rPromptType[];
	static const char v_rPromptYours[];
	static const char v_rUserError[];
	static const char v_rUserHelp[];
	static const char v_rUserPrompt[];
	static const char v_rUserResult[];
	static const char v_rMoveReaddIntegConflictIgnored[];
	static const char v_rMoveReaddIntegConflictSkip[];
	static const char v_rcvbuf[];
	static const char v_reason[];
	static const char v_recvFileBytes[];
	static const char v_recvFileCount[];
	static const char v_ref[];
	static const char v_remap[];
	static const char v_remoteFunc[];
	static const char v_remoteMap[];
	static const char v_remoteRange[];
	static const char v_repair[];
	static const char v_repo[];
	static const char v_repoName[];
	static const char v_reresolvable[];
	static const char v_resolved[];
	static const char v_resolveAction[];
	static const char v_resolveBaseFile[];
	static const char v_resolveBaseRev[];
	static const char v_resolveEndFromRev[];
	static const char v_resolveFlag[];
	static const char v_resolveFromFile[];
	static const char v_resolveStartFromRev[];
	static const char v_resolveType[];
	static const char v_rev[];
	static const char v_rev2[];
	static const char v_revertmovecheck[];
	static const char v_revertmovedirnotempty[];
	static const char v_revertmovermdir[];
	static const char v_rmdir[];
	static const char v_rseq[];
	static const char v_scanSize[];
	static const char v_scope[];
	static const char v_secondFactor[];
	static const char v_security[];
	static const char v_sendFileBytes[];
	static const char v_sendFileCount[];
	static const char v_skipped[];
	static const char v_snapped[];
	static const char v_sndbuf[];
	static const char v_sendspec[];
	static const char v_sequence[];
	static const char v_server[];
	static const char v_server2[];
	static const char v_serverID[];
	static const char v_serverAddress[];
	static const char v_serverCluster[];
	static const char v_serverDescription[];
	static const char v_serverDate[];
	static const char v_serverEncryption[];
	static const char v_serverCertExpires[];
	static const char v_serverName[];
	static const char v_serverOpts[];
	static const char v_serverRoot[];
	static const char v_serverType[];
	static const char v_serverUptime[];
	static const char v_serverLicense[];
	static const char v_serverLicenseIp[];
	static const char v_serverSize[];
	static const char v_serverVersion[];
	static const char v_sha[];
	static const char v_showAll[];
	static const char v_size[];
	static const char v_specdef[];
	static const char v_specstring[];
	static const char v_speccomment[];
	static const char v_specFormatted[];
	static const char v_spectype[];
	static const char v_srev[];
	static const char v_sso[];
	static const char v_ssoAuth[];
	static const char v_startFromChange[];
	static const char v_startFromRev[];
	static const char v_startToChange[];
	static const char v_startToRev[];
	static const char v_stat[];
	static const char v_status[];
	static const char v_svrname[];
	static const char v_svrRecType[];
	static const char v_symlink[];
	static const char v_symref[];
	static const char v_tableexcludelist[];
	static const char v_tag[];
	static const char v_tagJnl[];
	static const char v_targetAddr[];
	static const char v_targetDestAddr[];
	static const char v_targetSha[];
	static const char v_targetSvrID[];
	static const char v_targetType[];
	static const char v_theirName[];
	static const char v_theirTime[];
	static const char v_time[];
	static const char v_toFile[];
	static const char v_toStream[];
	static const char v_token[];
	static const char v_token2[];
	static const char v_total[];
	static const char v_totalFileCount[];
	static const char v_totalFileSize[];
	static const char v_track[];
	static const char v_trans[];
	static const char v_tree[];
	static const char v_true[];
	static const char v_truncate[];
	static const char v_type[];
	static const char v_type2[];
	static const char v_type3[];
	static const char v_type4[];
	static const char v_unicode[];
	static const char v_unmap[];
	static const char v_unresolved[];
	static const char v_upper[];
	static const char v_url[];
	static const char v_upgrade[];
	static const char v_user[];
	static const char v_userChanged[];
	static const char v_userName[];
	static const char v_utf8bom[];
	static const char v_version[];
	static const char v_warning[];
	static const char v_wingui[];
	static const char v_workRev[];
	static const char v_write[];
	static const char v_xfiles[];
	static const char v_yourName[];

	// server-to-server or server-to-proxy variables
	// clients should not look at these

	static const char v_adjunctMsgs[];
	static const char v_allTamperCheck[];	// p4 submit
	static const char v_altArg[];		// p4 jobspec
	static const char v_altArg2[];		// p4 change
	static const char v_altArg3[];		// p4 stream
	static const char v_altArg4[];		// p4 extension
	static const char v_altArg5[];		// p4 extension
	static const char v_altArg6[];		// p4 extension
	static const char v_arg[];
	static const char v_asBinary[];		// p4 resolve
	static const char v_attrib[];		// p4 index
	static const char v_author[];		// proxy keyword handling
	static const char v_bkupInterval[];	// backup thread interval
	static const char v_baseDepotRec[];	// p4 resolve
	static const char v_changeNo[];		// p4 submit 
	static const char v_checkSum[];		// p4 submit 
	static const char v_checkTooFar[];	// auth license check
	static const char v_clientEntity[];
	static const char v_confirm2[];
	static const char v_dataHandle[];
	static const char v_delete[];		// p4 index
	static const char v_depotFile[];
	static const char v_depotFile2[];
	static const char v_depotName[];	// proxy
	static const char v_depotRec[];
	static const char v_do[];		// p4 diff
	static const char v_doForce[];		// p4 shelve
	static const char v_doPromote[];	// p4 shelve
	static const char v_fixStatus[];	// p4 change
	static const char v_force[];		// p4 submit
	static const char v_getFlag[];
	static const char v_haveGRec[];		// p4 sync graph
	static const char v_haveRec[];		// p4 sync
	static const char v_ignoreIsEdit[];	// p4 resolve
	static const char v_index[];
	static const char v_integRec[];
	static const char v_integRec2[];
	static const char v_ipaddr[];
	static const char v_keyVal[];		// p4 index
	static const char v_label[];
	static const char v_labelEntity[];
	static const char v_leaveUnchanged[];	// submit
	static const char v_lockAll[];		// admin
	static const char v_lockRec[];
	static const char v_message[];		// p4 diff
	static const char v_message2[];		// p4 release
	static const char v_movedFile[];
	static const char v_movedRev[];
	static const char v_needsFlushTransport[];
	static const char v_noretry[];		// p4 specs
	static const char v_pathPermissions[];  // readonly or writable status
	static const char v_peer[];
	static const char v_peerAddress[];
	static const char v_preserveCNums[];
	static const char v_propigate[];	// proxy chaining test
	static const char v_readonly[];
	static const char v_remoteFetch[];	// no on-demand fetch bg submit
	static const char v_reopen[];  		// submit
	static const char v_replace[];		// shelve
	static const char v_revertUnchanged[];  // submit
	static const char v_revRec[];		// proxy
	static const char v_revGRec[];		// proxy
	static const char v_revtime[];		// proxy invalidation
	static const char v_revver[];		// proxy rev table version
	static const char v_revgver[];		// proxy graphrev table version
	static const char v_role[];		// cluster role (svr svcs)
	static const char v_save[];		// revert
	static const char v_setViews[];		// set client views even if empty
	static const char v_shelved[];          // shelve (2009.2)
	static const char v_shelveFile[];
	static const char v_shelvedStream[];    // stream is shelved
	static const char v_state[];
	static const char v_stream[];       	// stream name
	static const char v_streamDir[];
	static const char v_streamFile[];
	static const char v_stream2[];       	// other stream name
	static const char v_streamViewChange[]; // stream view change used
	static const char v_submitted[];
	static const char v_table[];		// remote depot
	static const char v_traitCount[];	// submit
	static const char v_tzoffset[];		// server tz offset for proxy
	static const char v_output[];		// proxy print kind
	static const char v_unloadInterval[];	// unused client unload interval
	static const char v_value[];		// p4 index
	static const char v_writable[];
	static const char v_workRec[];
	static const char v_workRec2[];
	static const char v_workGRec[];
	static const char v_yourDepotRec[];	// p4 resolve
	static const char v_zksEntity[];	// zks socket write flock

	// server user commands
	
	static const char u_add[];
	static const char u_admin[];
	static const char u_branch[];
	static const char u_branches[];
	static const char u_change[];
	static const char u_changes[];
	static const char u_client[];
	static const char u_clients[];
	static const char u_copy[];
	static const char u_counter[];
	static const char u_counters[];
	static const char u_delete[];
	static const char u_depot[];
	static const char u_depots[];
	static const char u_describe[];
	static const char u_diff[];
	static const char u_diff2[];
	static const char u_dirs[];
	static const char u_edit[];
	static const char u_failover[];
	static const char u_fetch[];
	static const char u_filelog[];
	static const char u_files[];
	static const char u_fix[];
	static const char u_fixes[];
	static const char u_flush[];
	static const char u_fstat[];
	static const char u_group[];
	static const char u_groups[];
	static const char u_have[];
	static const char u_help[];
	static const char u_info[];
	static const char u_integrate[];
	static const char u_integrated[];
	static const char u_interchanges[];
	static const char u_job[];
	static const char u_jobs[];
	static const char u_jobspec[];
	static const char u_label[];
	static const char u_labels[];
	static const char u_labelsync[];
	static const char u_lock[];
	static const char u_merge[];
	static const char u_obliterate[];
	static const char u_opened[];
	static const char u_passwd[];
	static const char u_print[];
	static const char u_protect[];
	static const char u_push[];
	static const char u_reconcile[];
	static const char u_remote[];
	static const char u_remotes[];
	static const char u_rename[];
	static const char u_reopen[];
	static const char u_resolve[];
	static const char u_resolved[];
	static const char u_resubmit[];
	static const char u_revert[];
	static const char u_review[];
	static const char u_reviews[];
	static const char u_set[];
	static const char u_stream[];
	static const char u_streams[];
	static const char u_submit[];
	static const char u_switch[];
	static const char u_sync[];
	static const char u_triggers[];
	static const char u_typemap[];
	static const char u_undo[];
	static const char u_unlock[];
	static const char u_unsubmit[];
	static const char u_unzip[];
	static const char u_user[];
	static const char u_users[];
	static const char u_verify[];
	static const char u_where[];
	static const char u_zip[];

	// server-p4zk message fields
	static const char z_clusterid[];
	static const char z_clusterrole[];
	static const char z_genNum[];
	static const char z_jnlnum[];
	static const char z_jnloffst[];
	static const char z_p4port[];
	static const char z_p4target[];
	static const char z_pid[];
	static const char z_serverid[];
	static const char z_zkhostport[];
	static const char z_zkconnecttime[];
	static const char z_brokercfg[];
} ;

