/*
 * winhelp.h - define Windows Help context names.
 * Each definition is simply a string which matches up with the
 * section names in the Halibut source, and is used for HTML Help.
 */

/* Maximum length for WINHELP_CTX_foo strings */
#define WINHELP_CTX_MAXLEN 80

/* These are used in the cross-platform configuration dialog code. */

#define HELPCTX(x) P(WINHELP_CTX_ ## x)

#define WINHELP_CTX_no_help NULL

#define WINHELP_CTX_session_hostname "config-hostname"
#define WINHELP_CTX_session_privateip "config-privateip"
#define WINHELP_CTX_session_location "config-location"
#define WINHELP_CTX_session_bmcurl "config-bmcurl"
#define WINHELP_CTX_session_saved "config-saving"
#define WINHELP_CTX_session_coe "config-closeonexit"
#define WINHELP_CTX_logging_main "config-logging"
#define WINHELP_CTX_logging_filename "config-logfilename"
#define WINHELP_CTX_logging_exists "config-logfileexists"
#define WINHELP_CTX_logging_flush "config-logflush"
#define WINHELP_CTX_logging_header "config-logheader"
#define WINHELP_CTX_logging_ssh_omit_password "config-logssh"
#define WINHELP_CTX_logging_ssh_omit_data "config-logssh"
#define WINHELP_CTX_keyboard_backspace "config-backspace"
#define WINHELP_CTX_keyboard_homeend "config-homeend"
#define WINHELP_CTX_keyboard_funkeys "config-funkeys"
#define WINHELP_CTX_keyboard_appkeypad "config-appkeypad"
#define WINHELP_CTX_keyboard_appcursor "config-appcursor"
#define WINHELP_CTX_keyboard_nethack "config-nethack"
#define WINHELP_CTX_keyboard_compose "config-compose"
#define WINHELP_CTX_keyboard_ctrlalt "config-ctrlalt"
#define WINHELP_CTX_features_application "config-features-application"
#define WINHELP_CTX_features_mouse "config-features-mouse"
#define WINHELP_CTX_features_resize "config-features-resize"
#define WINHELP_CTX_features_altscreen "config-features-altscreen"
#define WINHELP_CTX_features_retitle "config-features-retitle"
#define WINHELP_CTX_features_qtitle "config-features-qtitle"
#define WINHELP_CTX_features_dbackspace "config-features-dbackspace"
#define WINHELP_CTX_features_charset "config-features-charset"
#define WINHELP_CTX_features_clearscroll "config-features-clearscroll"
#define WINHELP_CTX_features_arabicshaping "config-features-shaping"
#define WINHELP_CTX_features_bidi "config-features-bidi"
#define WINHELP_CTX_terminal_autowrap "config-autowrap"
#define WINHELP_CTX_terminal_decom "config-decom"
#define WINHELP_CTX_terminal_lfhascr "config-crlf"
#define WINHELP_CTX_terminal_crhaslf "config-lfcr"
#define WINHELP_CTX_terminal_bce "config-erase"
#define WINHELP_CTX_terminal_blink "config-blink"
#define WINHELP_CTX_terminal_answerback "config-answerback"
#define WINHELP_CTX_terminal_localecho "config-localecho"
#define WINHELP_CTX_terminal_localedit "config-localedit"
#define WINHELP_CTX_terminal_printing "config-printing"
#define WINHELP_CTX_supdup_location "supdup-location"
#define WINHELP_CTX_supdup_ascii "supdup-ascii"
#define WINHELP_CTX_supdup_more "supdup-more"
#define WINHELP_CTX_supdup_scroll "supdup-scroll"
#define WINHELP_CTX_bell_style "config-bellstyle"
#define WINHELP_CTX_bell_taskbar "config-belltaskbar"
#define WINHELP_CTX_bell_overload "config-bellovl"
#define WINHELP_CTX_window_size "config-winsize"
#define WINHELP_CTX_window_resize "config-winsizelock"
#define WINHELP_CTX_window_scrollback "config-scrollback"
#define WINHELP_CTX_window_erased "config-erasetoscrollback"
#define WINHELP_CTX_behaviour_closewarn "config-warnonclose"
#define WINHELP_CTX_behaviour_altf4 "config-altf4"
#define WINHELP_CTX_behaviour_altspace "config-altspace"
#define WINHELP_CTX_behaviour_altonly "config-altonly"
#define WINHELP_CTX_behaviour_alwaysontop "config-alwaysontop"
#define WINHELP_CTX_behaviour_altenter "config-fullscreen"
#define WINHELP_CTX_appearance_cursor "config-cursor"
#define WINHELP_CTX_appearance_font "config-font"
#define WINHELP_CTX_appearance_title "config-title"
#define WINHELP_CTX_appearance_hidemouse "config-mouseptr"
#define WINHELP_CTX_appearance_border "config-winborder"
#define WINHELP_CTX_connection_termtype "config-termtype"
#define WINHELP_CTX_connection_termspeed "config-termspeed"
#define WINHELP_CTX_connection_username "config-username"
#define WINHELP_CTX_connection_password "config-password"
#define WINHELP_CTX_connection_username_from_env "config-username-from-env"
#define WINHELP_CTX_connection_keepalive "config-keepalive"
#define WINHELP_CTX_connection_nodelay "config-nodelay"
#define WINHELP_CTX_connection_ipversion "config-address-family"
#define WINHELP_CTX_connection_tcpkeepalive "config-tcp-keepalives"
#define WINHELP_CTX_connection_loghost "config-loghost"
#define WINHELP_CTX_connection_pathhost "config-pathhost"
#define WINHELP_CTX_connection_pathlocal "config-pathlocal"
#define WINHELP_CTX_proxy_type "config-proxy-type"
#define WINHELP_CTX_proxy_main "config-proxy"
#define WINHELP_CTX_proxy_exclude "config-proxy-exclude"
#define WINHELP_CTX_proxy_dns "config-proxy-dns"
#define WINHELP_CTX_proxy_auth "config-proxy-auth"
#define WINHELP_CTX_proxy_command "config-proxy-command"
#define WINHELP_CTX_proxy_logging "config-proxy-logging"
#define WINHELP_CTX_telnet_environ "config-environ"
#define WINHELP_CTX_telnet_oldenviron "config-oldenviron"
#define WINHELP_CTX_telnet_passive "config-ptelnet"
#define WINHELP_CTX_telnet_specialkeys "config-telnetkey"
#define WINHELP_CTX_telnet_newline "config-telnetnl"
#define WINHELP_CTX_rlogin_localuser "config-rlogin-localuser"
#define WINHELP_CTX_ssh_nopty "config-ssh-pty"
#define WINHELP_CTX_ssh_ttymodes "config-ttymodes"
#define WINHELP_CTX_ssh_noshell "config-ssh-noshell"
#define WINHELP_CTX_ssh_ciphers "config-ssh-encryption"
#define WINHELP_CTX_ssh_protocol "config-ssh-prot"
#define WINHELP_CTX_ssh_command "config-command"
#define WINHELP_CTX_ssh_compress "config-ssh-comp"
#define WINHELP_CTX_ssh_share "config-ssh-sharing"
#define WINHELP_CTX_ssh_kexlist "config-ssh-kex-order"
#define WINHELP_CTX_ssh_hklist "config-ssh-hostkey-order"
#define WINHELP_CTX_ssh_hk_known "config-ssh-prefer-known-hostkeys"
#define WINHELP_CTX_ssh_gssapi_kex_delegation "config-ssh-kex-gssapi-delegation"
#define WINHELP_CTX_ssh_kex_repeat "config-ssh-kex-rekey"
#define WINHELP_CTX_ssh_kex_manual_hostkeys "config-ssh-kex-manual-hostkeys"
#define WINHELP_CTX_ssh_auth_bypass "config-ssh-noauth"
#define WINHELP_CTX_ssh_no_trivial_userauth "config-ssh-notrivialauth"
#define WINHELP_CTX_ssh_auth_banner "config-ssh-banner"
#define WINHELP_CTX_ssh_auth_privkey "config-ssh-privkey"
#define WINHELP_CTX_ssh_auth_agentfwd "config-ssh-agentfwd"
#define WINHELP_CTX_ssh_auth_changeuser "config-ssh-changeuser"
#define WINHELP_CTX_ssh_auth_pageant "config-ssh-tryagent"
#define WINHELP_CTX_ssh_auth_tis "config-ssh-tis"
#define WINHELP_CTX_ssh_auth_ki "config-ssh-ki"
#define WINHELP_CTX_ssh_gssapi "config-ssh-auth-gssapi"
#define WINHELP_CTX_ssh_gssapi_delegation "config-ssh-auth-gssapi-delegation"
#define WINHELP_CTX_ssh_gssapi_libraries "config-ssh-auth-gssapi-libraries"
#define WINHELP_CTX_selection_buttons "config-mouse"
#define WINHELP_CTX_selection_shiftdrag "config-mouseshift"
#define WINHELP_CTX_selection_rect "config-rectselect"
#define WINHELP_CTX_selection_linedraw "config-linedrawpaste"
#define WINHELP_CTX_selection_autocopy "config-selection-autocopy"
#define WINHELP_CTX_selection_clipactions "config-selection-clipactions"
#define WINHELP_CTX_selection_pastectrl "config-paste-ctrl-char"
#define WINHELP_CTX_copy_charclasses "config-charclasses"
#define WINHELP_CTX_copy_rtf "config-rtfcopy"
#define WINHELP_CTX_colours_ansi "config-ansicolour"
#define WINHELP_CTX_colours_xterm256 "config-xtermcolour"
#define WINHELP_CTX_colours_truecolour "config-truecolour"
#define WINHELP_CTX_colours_bold "config-boldcolour"
#define WINHELP_CTX_colours_system "config-syscolour"
#define WINHELP_CTX_colours_logpal "config-logpalette"
#define WINHELP_CTX_colours_config "config-colourcfg"
#define WINHELP_CTX_translation_codepage "config-charset"
#define WINHELP_CTX_translation_cjk_ambig_wide "config-cjk-ambig-wide"
#define WINHELP_CTX_translation_cyrillic "config-cyr"
#define WINHELP_CTX_translation_linedraw "config-linedraw"
#define WINHELP_CTX_translation_utf8linedraw "config-utf8linedraw"
#define WINHELP_CTX_ssh_tunnels_x11 "config-ssh-x11"
#define WINHELP_CTX_ssh_tunnels_x11auth "config-ssh-x11auth"
#define WINHELP_CTX_ssh_tunnels_xauthority "config-ssh-xauthority"
#define WINHELP_CTX_ssh_tunnels_portfwd "config-ssh-portfwd"
#define WINHELP_CTX_ssh_tunnels_portfwd_localhost "config-ssh-portfwd-localhost"
#define WINHELP_CTX_ssh_tunnels_portfwd_ipversion "config-ssh-portfwd-address-family"
#define WINHELP_CTX_ssh_bugs_ignore1 "config-ssh-bug-ignore1"
#define WINHELP_CTX_ssh_bugs_plainpw1 "config-ssh-bug-plainpw1"
#define WINHELP_CTX_ssh_bugs_rsa1 "config-ssh-bug-rsa1"
#define WINHELP_CTX_ssh_bugs_ignore2 "config-ssh-bug-ignore2"
#define WINHELP_CTX_ssh_bugs_hmac2 "config-ssh-bug-hmac2"
#define WINHELP_CTX_ssh_bugs_derivekey2 "config-ssh-bug-derivekey2"
#define WINHELP_CTX_ssh_bugs_rsapad2 "config-ssh-bug-sig"
#define WINHELP_CTX_ssh_bugs_pksessid2 "config-ssh-bug-pksessid2"
#define WINHELP_CTX_ssh_bugs_rekey2 "config-ssh-bug-rekey"
#define WINHELP_CTX_ssh_bugs_maxpkt2 "config-ssh-bug-maxpkt2"
#define WINHELP_CTX_ssh_bugs_winadj "config-ssh-bug-winadj"
#define WINHELP_CTX_ssh_bugs_chanreq "config-ssh-bug-chanreq"
#define WINHELP_CTX_ssh_bugs_oldgex2 "config-ssh-bug-oldgex2"
#define WINHELP_CTX_serial_line "config-serial-line"
#define WINHELP_CTX_serial_speed "config-serial-speed"
#define WINHELP_CTX_serial_databits "config-serial-databits"
#define WINHELP_CTX_serial_stopbits "config-serial-stopbits"
#define WINHELP_CTX_serial_parity "config-serial-parity"
#define WINHELP_CTX_serial_flow "config-serial-flow"

#define WINHELP_CTX_pageant_general "pageant"
#define WINHELP_CTX_pageant_keylist "pageant-mainwin-keylist"
#define WINHELP_CTX_pageant_addkey "pageant-mainwin-addkey"
#define WINHELP_CTX_pageant_remkey "pageant-mainwin-remkey"
#define WINHELP_CTX_pageant_deferred "pageant-deferred-decryption"
#define WINHELP_CTX_pgpfingerprints "pgpkeys"
#define WINHELP_CTX_puttygen_general "pubkey-puttygen"
#define WINHELP_CTX_puttygen_keytype "puttygen-keytype"
#define WINHELP_CTX_puttygen_bits "puttygen-strength"
#define WINHELP_CTX_puttygen_generate "puttygen-generate"
#define WINHELP_CTX_puttygen_fingerprint "puttygen-fingerprint"
#define WINHELP_CTX_puttygen_comment "puttygen-comment"
#define WINHELP_CTX_puttygen_passphrase "puttygen-passphrase"
#define WINHELP_CTX_puttygen_savepriv "puttygen-savepriv"
#define WINHELP_CTX_puttygen_savepub "puttygen-savepub"
#define WINHELP_CTX_puttygen_pastekey "puttygen-pastekey"
#define WINHELP_CTX_puttygen_load "puttygen-load"
#define WINHELP_CTX_puttygen_conversions "puttygen-conversions"
#define WINHELP_CTX_puttygen_ppkver "puttygen-save-ppk-version"
#define WINHELP_CTX_puttygen_kdfparam "puttygen-save-passphrase-hashing"

/* These are used in Windows-specific bits of the frontend.
 * We (ab)use "help context identifiers" (dwContextId) to identify them. */

#define HELPCTXID(x) WINHELP_CTXID_ ## x

#define WINHELP_CTXID_no_help 0
#define WINHELP_CTX_errors_hostkey_absent "errors-hostkey-absent"
#define WINHELP_CTXID_errors_hostkey_absent 1
#define WINHELP_CTX_errors_hostkey_changed "errors-hostkey-wrong"
#define WINHELP_CTXID_errors_hostkey_changed 2
#define WINHELP_CTX_errors_cantloadkey "errors-cant-load-key"
#define WINHELP_CTXID_errors_cantloadkey 3
#define WINHELP_CTX_option_cleanup "using-cleanup"
#define WINHELP_CTXID_option_cleanup 4
#define WINHELP_CTX_pgp_fingerprints "pgpkeys"
#define WINHELP_CTXID_pgp_fingerprints 5
