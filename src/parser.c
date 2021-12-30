#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 585
#define LARGE_STATE_COUNT 20
#define SYMBOL_COUNT 232
#define ALIAS_COUNT 0
#define TOKEN_COUNT 165
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 15
#define PRODUCTION_ID_COUNT 6

enum {
  aux_sym_body_token1 = 1,
  anon_sym_LPAREN = 2,
  anon_sym_COMMA = 3,
  anon_sym_RPAREN = 4,
  anon_sym_COLON = 5,
  sym__newline = 6,
  sym_comment = 7,
  sym_multiline_comment = 8,
  sym_identifier = 9,
  sym_mnemonic = 10,
  sym_bb_ref = 11,
  sym_stack_object = 12,
  sym_constant_pool_index = 13,
  sym_jump_table_index = 14,
  sym_string = 15,
  sym_number = 16,
  aux_sym_float_token1 = 17,
  aux_sym_float_token2 = 18,
  sym_var = 19,
  sym_physical_register = 20,
  sym_immediate_type = 21,
  sym_ir_block = 22,
  sym_external_symbol = 23,
  sym_global_var = 24,
  sym_ir_local_var = 25,
  sym_metadata_ref = 26,
  anon_sym_LBRACE = 27,
  anon_sym_RBRACE = 28,
  anon_sym_successors = 29,
  anon_sym_liveins = 30,
  anon_sym_EQ = 31,
  anon_sym_pre_DASHinstr_DASHsymbol = 32,
  anon_sym_post_DASHinstr_DASHsymbol = 33,
  anon_sym_heap_DASHalloc_DASHmarker = 34,
  anon_sym_debug_DASHinstr_DASHnumber = 35,
  anon_sym_debug_DASHlocation = 36,
  anon_sym_COLON_COLON = 37,
  anon_sym_LT = 38,
  anon_sym_mcsymbol = 39,
  anon_sym_GT = 40,
  anon_sym_LPAREN2 = 41,
  anon_sym_BANG = 42,
  anon_sym_null = 43,
  aux_sym_md_value_token1 = 44,
  anon_sym_PIPE = 45,
  anon_sym_STAR = 46,
  anon_sym_LBRACK = 47,
  anon_sym_RBRACK = 48,
  anon_sym_DOT = 49,
  anon_sym__ = 50,
  anon_sym_tied_DASHdef = 51,
  anon_sym_target_DASHflags = 52,
  sym_primitive_type = 53,
  anon_sym_x = 54,
  anon_sym_CustomRegMask = 55,
  anon_sym_same_value = 56,
  anon_sym_def_cfa_register = 57,
  anon_sym_restore = 58,
  anon_sym_undefined = 59,
  anon_sym_offset = 60,
  anon_sym_rel_offset = 61,
  anon_sym_def_cfa = 62,
  anon_sym_def_cfa_offset = 63,
  anon_sym_adjust_cfa_offset = 64,
  anon_sym_llvm_def_aspace_cfa = 65,
  anon_sym_register = 66,
  anon_sym_escape = 67,
  anon_sym_remember_state = 68,
  anon_sym_restore_state = 69,
  anon_sym_window_save = 70,
  anon_sym_negate_ra_sign_state = 71,
  anon_sym_true = 72,
  anon_sym_false = 73,
  anon_sym_intpred = 74,
  anon_sym_floatpred = 75,
  anon_sym_eq = 76,
  anon_sym_ne = 77,
  anon_sym_sgt = 78,
  anon_sym_sge = 79,
  anon_sym_slt = 80,
  anon_sym_sle = 81,
  anon_sym_ugt = 82,
  anon_sym_uge = 83,
  anon_sym_ult = 84,
  anon_sym_ule = 85,
  anon_sym_oeq = 86,
  anon_sym_ogt = 87,
  anon_sym_oge = 88,
  anon_sym_olt = 89,
  anon_sym_ole = 90,
  anon_sym_one = 91,
  anon_sym_ord = 92,
  anon_sym_uno = 93,
  anon_sym_ueq = 94,
  anon_sym_une = 95,
  anon_sym_shufflemask = 96,
  anon_sym_undef = 97,
  anon_sym_liveout = 98,
  anon_sym_target_DASHindex = 99,
  anon_sym_blockaddress = 100,
  anon_sym_intrinsic = 101,
  anon_sym_load = 102,
  anon_sym_store = 103,
  anon_sym_unknown_DASHsize = 104,
  anon_sym_on = 105,
  anon_sym_from = 106,
  anon_sym_into = 107,
  anon_sym_align = 108,
  anon_sym_basealign = 109,
  anon_sym_addrspace = 110,
  anon_sym_unknown_DASHaddress = 111,
  anon_sym_BQUOTE = 112,
  anon_sym_PLUS = 113,
  anon_sym_DASH = 114,
  anon_sym_call_DASHentry = 115,
  anon_sym_custom = 116,
  anon_sym_constant_DASHpool = 117,
  anon_sym_stack = 118,
  anon_sym_got = 119,
  anon_sym_jump_DASHtable = 120,
  anon_sym_volatile = 121,
  anon_sym_non_DASHtemporal = 122,
  anon_sym_dereferenceable = 123,
  anon_sym_invariant = 124,
  anon_sym_syncscope = 125,
  anon_sym_unordered = 126,
  anon_sym_monotonic = 127,
  anon_sym_acquire = 128,
  anon_sym_release = 129,
  anon_sym_acq_rel = 130,
  anon_sym_seq_cst = 131,
  anon_sym_implicit = 132,
  anon_sym_implicit_DASHdef = 133,
  anon_sym_def = 134,
  anon_sym_dead = 135,
  anon_sym_killed = 136,
  anon_sym_internal = 137,
  anon_sym_early_DASHclobber = 138,
  anon_sym_debug_DASHuse = 139,
  anon_sym_renamable = 140,
  anon_sym_frame_DASHsetup = 141,
  anon_sym_frame_DASHdestroy = 142,
  anon_sym_nnan = 143,
  anon_sym_ninf = 144,
  anon_sym_nsz = 145,
  anon_sym_arcp = 146,
  anon_sym_contract = 147,
  anon_sym_afn = 148,
  anon_sym_reassoc = 149,
  anon_sym_nuw = 150,
  anon_sym_nsw = 151,
  anon_sym_exact = 152,
  anon_sym_nofpexcept = 153,
  anon_sym_address_DASHtaken = 154,
  anon_sym_landing_DASHpad = 155,
  anon_sym_inlineasm_DASHbr_DASHindirect_DASHtarget = 156,
  anon_sym_ehfunclet_DASHentry = 157,
  anon_sym_bbsections = 158,
  anon_sym_half = 159,
  anon_sym_float = 160,
  anon_sym_double = 161,
  anon_sym_x86_fp80 = 162,
  anon_sym_fp128 = 163,
  anon_sym_ppc_fp128 = 164,
  sym_body = 165,
  sym_basic_block = 166,
  sym_label = 167,
  sym_float = 168,
  sym_register = 169,
  sym_bundle = 170,
  sym_successors = 171,
  sym_liveins = 172,
  sym_instruction = 173,
  sym_mc_symbol = 174,
  sym_metadata = 175,
  sym_md_value = 176,
  sym_register_operand = 177,
  sym_argument = 178,
  sym_machine_operand = 179,
  sym_subregister = 180,
  sym_registerclass = 181,
  sym_low_level_type = 182,
  sym_custom_regmask = 183,
  sym_cfi_operand = 184,
  sym_immediate = 185,
  sym_predicate = 186,
  sym_intpred = 187,
  sym_floatpred = 188,
  sym_shuffle_mask = 189,
  sym_liveout = 190,
  sym_target_index = 191,
  sym_block_address = 192,
  sym_intrinsic = 193,
  sym_memory_operand = 194,
  sym_mem_attribute = 195,
  sym_machine_pointer_info = 196,
  sym_ir_value = 197,
  sym_escaped_ir_value = 198,
  sym__escaped_ir_content = 199,
  sym_offset = 200,
  sym_memory_pseudo_source_value = 201,
  sym_memory_pseudo_source_value_keyword = 202,
  sym_memory_operand_flag = 203,
  sym_sync_scope = 204,
  sym_atomic_ordering = 205,
  sym_register_flag = 206,
  sym_instruction_flag = 207,
  sym_attribute = 208,
  sym_float_keyword = 209,
  aux_sym_body_repeat1 = 210,
  aux_sym_basic_block_repeat1 = 211,
  aux_sym_basic_block_repeat2 = 212,
  aux_sym_basic_block_repeat3 = 213,
  aux_sym_bundle_repeat1 = 214,
  aux_sym_successors_repeat1 = 215,
  aux_sym_liveins_repeat1 = 216,
  aux_sym_instruction_repeat1 = 217,
  aux_sym_instruction_repeat2 = 218,
  aux_sym_instruction_repeat3 = 219,
  aux_sym_instruction_repeat4 = 220,
  aux_sym_instruction_repeat5 = 221,
  aux_sym_instruction_repeat6 = 222,
  aux_sym_metadata_repeat1 = 223,
  aux_sym_register_operand_repeat1 = 224,
  aux_sym_argument_repeat1 = 225,
  aux_sym_custom_regmask_repeat1 = 226,
  aux_sym_cfi_operand_repeat1 = 227,
  aux_sym_shuffle_mask_repeat1 = 228,
  aux_sym_memory_operand_repeat1 = 229,
  aux_sym_memory_operand_repeat2 = 230,
  aux_sym_escaped_ir_value_repeat1 = 231,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_body_token1] = "body_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [sym__newline] = "_newline",
  [sym_comment] = "comment",
  [sym_multiline_comment] = "multiline_comment",
  [sym_identifier] = "identifier",
  [sym_mnemonic] = "mnemonic",
  [sym_bb_ref] = "bb_ref",
  [sym_stack_object] = "stack_object",
  [sym_constant_pool_index] = "constant_pool_index",
  [sym_jump_table_index] = "jump_table_index",
  [sym_string] = "string",
  [sym_number] = "number",
  [aux_sym_float_token1] = "float_token1",
  [aux_sym_float_token2] = "float_token2",
  [sym_var] = "var",
  [sym_physical_register] = "physical_register",
  [sym_immediate_type] = "immediate_type",
  [sym_ir_block] = "ir_block",
  [sym_external_symbol] = "external_symbol",
  [sym_global_var] = "global_var",
  [sym_ir_local_var] = "ir_local_var",
  [sym_metadata_ref] = "metadata_ref",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_successors] = "successors",
  [anon_sym_liveins] = "liveins",
  [anon_sym_EQ] = "=",
  [anon_sym_pre_DASHinstr_DASHsymbol] = "pre-instr-symbol",
  [anon_sym_post_DASHinstr_DASHsymbol] = "post-instr-symbol",
  [anon_sym_heap_DASHalloc_DASHmarker] = "heap-alloc-marker",
  [anon_sym_debug_DASHinstr_DASHnumber] = "debug-instr-number",
  [anon_sym_debug_DASHlocation] = "debug-location",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_LT] = "<",
  [anon_sym_mcsymbol] = "mcsymbol",
  [anon_sym_GT] = ">",
  [anon_sym_LPAREN2] = "(",
  [anon_sym_BANG] = "!",
  [anon_sym_null] = "null",
  [aux_sym_md_value_token1] = "md_value_token1",
  [anon_sym_PIPE] = "|",
  [anon_sym_STAR] = "*",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DOT] = ".",
  [anon_sym__] = "_",
  [anon_sym_tied_DASHdef] = "tied-def",
  [anon_sym_target_DASHflags] = "target-flags",
  [sym_primitive_type] = "primitive_type",
  [anon_sym_x] = "x",
  [anon_sym_CustomRegMask] = "CustomRegMask",
  [anon_sym_same_value] = "same_value",
  [anon_sym_def_cfa_register] = "def_cfa_register",
  [anon_sym_restore] = "restore",
  [anon_sym_undefined] = "undefined",
  [anon_sym_offset] = "offset",
  [anon_sym_rel_offset] = "rel_offset",
  [anon_sym_def_cfa] = "def_cfa",
  [anon_sym_def_cfa_offset] = "def_cfa_offset",
  [anon_sym_adjust_cfa_offset] = "adjust_cfa_offset",
  [anon_sym_llvm_def_aspace_cfa] = "llvm_def_aspace_cfa",
  [anon_sym_register] = "register",
  [anon_sym_escape] = "escape",
  [anon_sym_remember_state] = "remember_state",
  [anon_sym_restore_state] = "restore_state",
  [anon_sym_window_save] = "window_save",
  [anon_sym_negate_ra_sign_state] = "negate_ra_sign_state",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_intpred] = "intpred",
  [anon_sym_floatpred] = "floatpred",
  [anon_sym_eq] = "eq",
  [anon_sym_ne] = "ne",
  [anon_sym_sgt] = "sgt",
  [anon_sym_sge] = "sge",
  [anon_sym_slt] = "slt",
  [anon_sym_sle] = "sle",
  [anon_sym_ugt] = "ugt",
  [anon_sym_uge] = "uge",
  [anon_sym_ult] = "ult",
  [anon_sym_ule] = "ule",
  [anon_sym_oeq] = "oeq",
  [anon_sym_ogt] = "ogt",
  [anon_sym_oge] = "oge",
  [anon_sym_olt] = "olt",
  [anon_sym_ole] = "ole",
  [anon_sym_one] = "one",
  [anon_sym_ord] = "ord",
  [anon_sym_uno] = "uno",
  [anon_sym_ueq] = "ueq",
  [anon_sym_une] = "une",
  [anon_sym_shufflemask] = "shufflemask",
  [anon_sym_undef] = "undef",
  [anon_sym_liveout] = "liveout",
  [anon_sym_target_DASHindex] = "target-index",
  [anon_sym_blockaddress] = "blockaddress",
  [anon_sym_intrinsic] = "intrinsic",
  [anon_sym_load] = "load",
  [anon_sym_store] = "store",
  [anon_sym_unknown_DASHsize] = "unknown-size",
  [anon_sym_on] = "on",
  [anon_sym_from] = "from",
  [anon_sym_into] = "into",
  [anon_sym_align] = "align",
  [anon_sym_basealign] = "basealign",
  [anon_sym_addrspace] = "addrspace",
  [anon_sym_unknown_DASHaddress] = "unknown-address",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_call_DASHentry] = "call-entry",
  [anon_sym_custom] = "custom",
  [anon_sym_constant_DASHpool] = "constant-pool",
  [anon_sym_stack] = "stack",
  [anon_sym_got] = "got",
  [anon_sym_jump_DASHtable] = "jump-table",
  [anon_sym_volatile] = "volatile",
  [anon_sym_non_DASHtemporal] = "non-temporal",
  [anon_sym_dereferenceable] = "dereferenceable",
  [anon_sym_invariant] = "invariant",
  [anon_sym_syncscope] = "syncscope",
  [anon_sym_unordered] = "unordered",
  [anon_sym_monotonic] = "monotonic",
  [anon_sym_acquire] = "acquire",
  [anon_sym_release] = "release",
  [anon_sym_acq_rel] = "acq_rel",
  [anon_sym_seq_cst] = "seq_cst",
  [anon_sym_implicit] = "implicit",
  [anon_sym_implicit_DASHdef] = "implicit-def",
  [anon_sym_def] = "def",
  [anon_sym_dead] = "dead",
  [anon_sym_killed] = "killed",
  [anon_sym_internal] = "internal",
  [anon_sym_early_DASHclobber] = "early-clobber",
  [anon_sym_debug_DASHuse] = "debug-use",
  [anon_sym_renamable] = "renamable",
  [anon_sym_frame_DASHsetup] = "frame-setup",
  [anon_sym_frame_DASHdestroy] = "frame-destroy",
  [anon_sym_nnan] = "nnan",
  [anon_sym_ninf] = "ninf",
  [anon_sym_nsz] = "nsz",
  [anon_sym_arcp] = "arcp",
  [anon_sym_contract] = "contract",
  [anon_sym_afn] = "afn",
  [anon_sym_reassoc] = "reassoc",
  [anon_sym_nuw] = "nuw",
  [anon_sym_nsw] = "nsw",
  [anon_sym_exact] = "exact",
  [anon_sym_nofpexcept] = "nofpexcept",
  [anon_sym_address_DASHtaken] = "address-taken",
  [anon_sym_landing_DASHpad] = "landing-pad",
  [anon_sym_inlineasm_DASHbr_DASHindirect_DASHtarget] = "inlineasm-br-indirect-target",
  [anon_sym_ehfunclet_DASHentry] = "ehfunclet-entry",
  [anon_sym_bbsections] = "bbsections",
  [anon_sym_half] = "half",
  [anon_sym_float] = "float",
  [anon_sym_double] = "double",
  [anon_sym_x86_fp80] = "x86_fp80",
  [anon_sym_fp128] = "fp128",
  [anon_sym_ppc_fp128] = "ppc_fp128",
  [sym_body] = "body",
  [sym_basic_block] = "basic_block",
  [sym_label] = "label",
  [sym_float] = "float",
  [sym_register] = "register",
  [sym_bundle] = "bundle",
  [sym_successors] = "successors",
  [sym_liveins] = "liveins",
  [sym_instruction] = "instruction",
  [sym_mc_symbol] = "mc_symbol",
  [sym_metadata] = "metadata",
  [sym_md_value] = "md_value",
  [sym_register_operand] = "register_operand",
  [sym_argument] = "argument",
  [sym_machine_operand] = "machine_operand",
  [sym_subregister] = "subregister",
  [sym_registerclass] = "registerclass",
  [sym_low_level_type] = "low_level_type",
  [sym_custom_regmask] = "custom_regmask",
  [sym_cfi_operand] = "cfi_operand",
  [sym_immediate] = "immediate",
  [sym_predicate] = "predicate",
  [sym_intpred] = "intpred",
  [sym_floatpred] = "floatpred",
  [sym_shuffle_mask] = "shuffle_mask",
  [sym_liveout] = "liveout",
  [sym_target_index] = "target_index",
  [sym_block_address] = "block_address",
  [sym_intrinsic] = "intrinsic",
  [sym_memory_operand] = "memory_operand",
  [sym_mem_attribute] = "mem_attribute",
  [sym_machine_pointer_info] = "machine_pointer_info",
  [sym_ir_value] = "ir_value",
  [sym_escaped_ir_value] = "escaped_ir_value",
  [sym__escaped_ir_content] = "_escaped_ir_content",
  [sym_offset] = "offset",
  [sym_memory_pseudo_source_value] = "memory_pseudo_source_value",
  [sym_memory_pseudo_source_value_keyword] = "memory_pseudo_source_value_keyword",
  [sym_memory_operand_flag] = "memory_operand_flag",
  [sym_sync_scope] = "sync_scope",
  [sym_atomic_ordering] = "atomic_ordering",
  [sym_register_flag] = "register_flag",
  [sym_instruction_flag] = "instruction_flag",
  [sym_attribute] = "attribute",
  [sym_float_keyword] = "float_keyword",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_basic_block_repeat1] = "basic_block_repeat1",
  [aux_sym_basic_block_repeat2] = "basic_block_repeat2",
  [aux_sym_basic_block_repeat3] = "basic_block_repeat3",
  [aux_sym_bundle_repeat1] = "bundle_repeat1",
  [aux_sym_successors_repeat1] = "successors_repeat1",
  [aux_sym_liveins_repeat1] = "liveins_repeat1",
  [aux_sym_instruction_repeat1] = "instruction_repeat1",
  [aux_sym_instruction_repeat2] = "instruction_repeat2",
  [aux_sym_instruction_repeat3] = "instruction_repeat3",
  [aux_sym_instruction_repeat4] = "instruction_repeat4",
  [aux_sym_instruction_repeat5] = "instruction_repeat5",
  [aux_sym_instruction_repeat6] = "instruction_repeat6",
  [aux_sym_metadata_repeat1] = "metadata_repeat1",
  [aux_sym_register_operand_repeat1] = "register_operand_repeat1",
  [aux_sym_argument_repeat1] = "argument_repeat1",
  [aux_sym_custom_regmask_repeat1] = "custom_regmask_repeat1",
  [aux_sym_cfi_operand_repeat1] = "cfi_operand_repeat1",
  [aux_sym_shuffle_mask_repeat1] = "shuffle_mask_repeat1",
  [aux_sym_memory_operand_repeat1] = "memory_operand_repeat1",
  [aux_sym_memory_operand_repeat2] = "memory_operand_repeat2",
  [aux_sym_escaped_ir_value_repeat1] = "escaped_ir_value_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_body_token1] = aux_sym_body_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym__newline] = sym__newline,
  [sym_comment] = sym_comment,
  [sym_multiline_comment] = sym_multiline_comment,
  [sym_identifier] = sym_identifier,
  [sym_mnemonic] = sym_mnemonic,
  [sym_bb_ref] = sym_bb_ref,
  [sym_stack_object] = sym_stack_object,
  [sym_constant_pool_index] = sym_constant_pool_index,
  [sym_jump_table_index] = sym_jump_table_index,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [aux_sym_float_token1] = aux_sym_float_token1,
  [aux_sym_float_token2] = aux_sym_float_token2,
  [sym_var] = sym_var,
  [sym_physical_register] = sym_physical_register,
  [sym_immediate_type] = sym_immediate_type,
  [sym_ir_block] = sym_ir_block,
  [sym_external_symbol] = sym_external_symbol,
  [sym_global_var] = sym_global_var,
  [sym_ir_local_var] = sym_ir_local_var,
  [sym_metadata_ref] = sym_metadata_ref,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_successors] = anon_sym_successors,
  [anon_sym_liveins] = anon_sym_liveins,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_pre_DASHinstr_DASHsymbol] = anon_sym_pre_DASHinstr_DASHsymbol,
  [anon_sym_post_DASHinstr_DASHsymbol] = anon_sym_post_DASHinstr_DASHsymbol,
  [anon_sym_heap_DASHalloc_DASHmarker] = anon_sym_heap_DASHalloc_DASHmarker,
  [anon_sym_debug_DASHinstr_DASHnumber] = anon_sym_debug_DASHinstr_DASHnumber,
  [anon_sym_debug_DASHlocation] = anon_sym_debug_DASHlocation,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_mcsymbol] = anon_sym_mcsymbol,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LPAREN2] = anon_sym_LPAREN,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_null] = anon_sym_null,
  [aux_sym_md_value_token1] = aux_sym_md_value_token1,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym__] = anon_sym__,
  [anon_sym_tied_DASHdef] = anon_sym_tied_DASHdef,
  [anon_sym_target_DASHflags] = anon_sym_target_DASHflags,
  [sym_primitive_type] = sym_primitive_type,
  [anon_sym_x] = anon_sym_x,
  [anon_sym_CustomRegMask] = anon_sym_CustomRegMask,
  [anon_sym_same_value] = anon_sym_same_value,
  [anon_sym_def_cfa_register] = anon_sym_def_cfa_register,
  [anon_sym_restore] = anon_sym_restore,
  [anon_sym_undefined] = anon_sym_undefined,
  [anon_sym_offset] = anon_sym_offset,
  [anon_sym_rel_offset] = anon_sym_rel_offset,
  [anon_sym_def_cfa] = anon_sym_def_cfa,
  [anon_sym_def_cfa_offset] = anon_sym_def_cfa_offset,
  [anon_sym_adjust_cfa_offset] = anon_sym_adjust_cfa_offset,
  [anon_sym_llvm_def_aspace_cfa] = anon_sym_llvm_def_aspace_cfa,
  [anon_sym_register] = anon_sym_register,
  [anon_sym_escape] = anon_sym_escape,
  [anon_sym_remember_state] = anon_sym_remember_state,
  [anon_sym_restore_state] = anon_sym_restore_state,
  [anon_sym_window_save] = anon_sym_window_save,
  [anon_sym_negate_ra_sign_state] = anon_sym_negate_ra_sign_state,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_intpred] = anon_sym_intpred,
  [anon_sym_floatpred] = anon_sym_floatpred,
  [anon_sym_eq] = anon_sym_eq,
  [anon_sym_ne] = anon_sym_ne,
  [anon_sym_sgt] = anon_sym_sgt,
  [anon_sym_sge] = anon_sym_sge,
  [anon_sym_slt] = anon_sym_slt,
  [anon_sym_sle] = anon_sym_sle,
  [anon_sym_ugt] = anon_sym_ugt,
  [anon_sym_uge] = anon_sym_uge,
  [anon_sym_ult] = anon_sym_ult,
  [anon_sym_ule] = anon_sym_ule,
  [anon_sym_oeq] = anon_sym_oeq,
  [anon_sym_ogt] = anon_sym_ogt,
  [anon_sym_oge] = anon_sym_oge,
  [anon_sym_olt] = anon_sym_olt,
  [anon_sym_ole] = anon_sym_ole,
  [anon_sym_one] = anon_sym_one,
  [anon_sym_ord] = anon_sym_ord,
  [anon_sym_uno] = anon_sym_uno,
  [anon_sym_ueq] = anon_sym_ueq,
  [anon_sym_une] = anon_sym_une,
  [anon_sym_shufflemask] = anon_sym_shufflemask,
  [anon_sym_undef] = anon_sym_undef,
  [anon_sym_liveout] = anon_sym_liveout,
  [anon_sym_target_DASHindex] = anon_sym_target_DASHindex,
  [anon_sym_blockaddress] = anon_sym_blockaddress,
  [anon_sym_intrinsic] = anon_sym_intrinsic,
  [anon_sym_load] = anon_sym_load,
  [anon_sym_store] = anon_sym_store,
  [anon_sym_unknown_DASHsize] = anon_sym_unknown_DASHsize,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_into] = anon_sym_into,
  [anon_sym_align] = anon_sym_align,
  [anon_sym_basealign] = anon_sym_basealign,
  [anon_sym_addrspace] = anon_sym_addrspace,
  [anon_sym_unknown_DASHaddress] = anon_sym_unknown_DASHaddress,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_call_DASHentry] = anon_sym_call_DASHentry,
  [anon_sym_custom] = anon_sym_custom,
  [anon_sym_constant_DASHpool] = anon_sym_constant_DASHpool,
  [anon_sym_stack] = anon_sym_stack,
  [anon_sym_got] = anon_sym_got,
  [anon_sym_jump_DASHtable] = anon_sym_jump_DASHtable,
  [anon_sym_volatile] = anon_sym_volatile,
  [anon_sym_non_DASHtemporal] = anon_sym_non_DASHtemporal,
  [anon_sym_dereferenceable] = anon_sym_dereferenceable,
  [anon_sym_invariant] = anon_sym_invariant,
  [anon_sym_syncscope] = anon_sym_syncscope,
  [anon_sym_unordered] = anon_sym_unordered,
  [anon_sym_monotonic] = anon_sym_monotonic,
  [anon_sym_acquire] = anon_sym_acquire,
  [anon_sym_release] = anon_sym_release,
  [anon_sym_acq_rel] = anon_sym_acq_rel,
  [anon_sym_seq_cst] = anon_sym_seq_cst,
  [anon_sym_implicit] = anon_sym_implicit,
  [anon_sym_implicit_DASHdef] = anon_sym_implicit_DASHdef,
  [anon_sym_def] = anon_sym_def,
  [anon_sym_dead] = anon_sym_dead,
  [anon_sym_killed] = anon_sym_killed,
  [anon_sym_internal] = anon_sym_internal,
  [anon_sym_early_DASHclobber] = anon_sym_early_DASHclobber,
  [anon_sym_debug_DASHuse] = anon_sym_debug_DASHuse,
  [anon_sym_renamable] = anon_sym_renamable,
  [anon_sym_frame_DASHsetup] = anon_sym_frame_DASHsetup,
  [anon_sym_frame_DASHdestroy] = anon_sym_frame_DASHdestroy,
  [anon_sym_nnan] = anon_sym_nnan,
  [anon_sym_ninf] = anon_sym_ninf,
  [anon_sym_nsz] = anon_sym_nsz,
  [anon_sym_arcp] = anon_sym_arcp,
  [anon_sym_contract] = anon_sym_contract,
  [anon_sym_afn] = anon_sym_afn,
  [anon_sym_reassoc] = anon_sym_reassoc,
  [anon_sym_nuw] = anon_sym_nuw,
  [anon_sym_nsw] = anon_sym_nsw,
  [anon_sym_exact] = anon_sym_exact,
  [anon_sym_nofpexcept] = anon_sym_nofpexcept,
  [anon_sym_address_DASHtaken] = anon_sym_address_DASHtaken,
  [anon_sym_landing_DASHpad] = anon_sym_landing_DASHpad,
  [anon_sym_inlineasm_DASHbr_DASHindirect_DASHtarget] = anon_sym_inlineasm_DASHbr_DASHindirect_DASHtarget,
  [anon_sym_ehfunclet_DASHentry] = anon_sym_ehfunclet_DASHentry,
  [anon_sym_bbsections] = anon_sym_bbsections,
  [anon_sym_half] = anon_sym_half,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_x86_fp80] = anon_sym_x86_fp80,
  [anon_sym_fp128] = anon_sym_fp128,
  [anon_sym_ppc_fp128] = anon_sym_ppc_fp128,
  [sym_body] = sym_body,
  [sym_basic_block] = sym_basic_block,
  [sym_label] = sym_label,
  [sym_float] = sym_float,
  [sym_register] = sym_register,
  [sym_bundle] = sym_bundle,
  [sym_successors] = sym_successors,
  [sym_liveins] = sym_liveins,
  [sym_instruction] = sym_instruction,
  [sym_mc_symbol] = sym_mc_symbol,
  [sym_metadata] = sym_metadata,
  [sym_md_value] = sym_md_value,
  [sym_register_operand] = sym_register_operand,
  [sym_argument] = sym_argument,
  [sym_machine_operand] = sym_machine_operand,
  [sym_subregister] = sym_subregister,
  [sym_registerclass] = sym_registerclass,
  [sym_low_level_type] = sym_low_level_type,
  [sym_custom_regmask] = sym_custom_regmask,
  [sym_cfi_operand] = sym_cfi_operand,
  [sym_immediate] = sym_immediate,
  [sym_predicate] = sym_predicate,
  [sym_intpred] = sym_intpred,
  [sym_floatpred] = sym_floatpred,
  [sym_shuffle_mask] = sym_shuffle_mask,
  [sym_liveout] = sym_liveout,
  [sym_target_index] = sym_target_index,
  [sym_block_address] = sym_block_address,
  [sym_intrinsic] = sym_intrinsic,
  [sym_memory_operand] = sym_memory_operand,
  [sym_mem_attribute] = sym_mem_attribute,
  [sym_machine_pointer_info] = sym_machine_pointer_info,
  [sym_ir_value] = sym_ir_value,
  [sym_escaped_ir_value] = sym_escaped_ir_value,
  [sym__escaped_ir_content] = sym__escaped_ir_content,
  [sym_offset] = sym_offset,
  [sym_memory_pseudo_source_value] = sym_memory_pseudo_source_value,
  [sym_memory_pseudo_source_value_keyword] = sym_memory_pseudo_source_value_keyword,
  [sym_memory_operand_flag] = sym_memory_operand_flag,
  [sym_sync_scope] = sym_sync_scope,
  [sym_atomic_ordering] = sym_atomic_ordering,
  [sym_register_flag] = sym_register_flag,
  [sym_instruction_flag] = sym_instruction_flag,
  [sym_attribute] = sym_attribute,
  [sym_float_keyword] = sym_float_keyword,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym_basic_block_repeat1] = aux_sym_basic_block_repeat1,
  [aux_sym_basic_block_repeat2] = aux_sym_basic_block_repeat2,
  [aux_sym_basic_block_repeat3] = aux_sym_basic_block_repeat3,
  [aux_sym_bundle_repeat1] = aux_sym_bundle_repeat1,
  [aux_sym_successors_repeat1] = aux_sym_successors_repeat1,
  [aux_sym_liveins_repeat1] = aux_sym_liveins_repeat1,
  [aux_sym_instruction_repeat1] = aux_sym_instruction_repeat1,
  [aux_sym_instruction_repeat2] = aux_sym_instruction_repeat2,
  [aux_sym_instruction_repeat3] = aux_sym_instruction_repeat3,
  [aux_sym_instruction_repeat4] = aux_sym_instruction_repeat4,
  [aux_sym_instruction_repeat5] = aux_sym_instruction_repeat5,
  [aux_sym_instruction_repeat6] = aux_sym_instruction_repeat6,
  [aux_sym_metadata_repeat1] = aux_sym_metadata_repeat1,
  [aux_sym_register_operand_repeat1] = aux_sym_register_operand_repeat1,
  [aux_sym_argument_repeat1] = aux_sym_argument_repeat1,
  [aux_sym_custom_regmask_repeat1] = aux_sym_custom_regmask_repeat1,
  [aux_sym_cfi_operand_repeat1] = aux_sym_cfi_operand_repeat1,
  [aux_sym_shuffle_mask_repeat1] = aux_sym_shuffle_mask_repeat1,
  [aux_sym_memory_operand_repeat1] = aux_sym_memory_operand_repeat1,
  [aux_sym_memory_operand_repeat2] = aux_sym_memory_operand_repeat2,
  [aux_sym_escaped_ir_value_repeat1] = aux_sym_escaped_ir_value_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_body_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_mnemonic] = {
    .visible = true,
    .named = true,
  },
  [sym_bb_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_stack_object] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_pool_index] = {
    .visible = true,
    .named = true,
  },
  [sym_jump_table_index] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_float_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_var] = {
    .visible = true,
    .named = true,
  },
  [sym_physical_register] = {
    .visible = true,
    .named = true,
  },
  [sym_immediate_type] = {
    .visible = true,
    .named = true,
  },
  [sym_ir_block] = {
    .visible = true,
    .named = true,
  },
  [sym_external_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_global_var] = {
    .visible = true,
    .named = true,
  },
  [sym_ir_local_var] = {
    .visible = true,
    .named = true,
  },
  [sym_metadata_ref] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_successors] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_liveins] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pre_DASHinstr_DASHsymbol] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_post_DASHinstr_DASHsymbol] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_heap_DASHalloc_DASHmarker] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_debug_DASHinstr_DASHnumber] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_debug_DASHlocation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mcsymbol] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_md_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tied_DASHdef] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_target_DASHflags] = {
    .visible = true,
    .named = false,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CustomRegMask] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_same_value] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_def_cfa_register] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_restore] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_undefined] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_offset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rel_offset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_def_cfa] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_def_cfa_offset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_adjust_cfa_offset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_llvm_def_aspace_cfa] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_register] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_escape] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_remember_state] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_restore_state] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_window_save] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_negate_ra_sign_state] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_intpred] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_floatpred] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ne] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sgt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_slt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ugt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ult] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ule] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_oeq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ogt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_oge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_olt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ole] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_one] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ord] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uno] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ueq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_une] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shufflemask] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_undef] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_liveout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_target_DASHindex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blockaddress] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_intrinsic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_load] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_store] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unknown_DASHsize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_into] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_align] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_basealign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_addrspace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unknown_DASHaddress] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_call_DASHentry] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_custom] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constant_DASHpool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stack] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_got] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jump_DASHtable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_volatile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_non_DASHtemporal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dereferenceable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_invariant] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_syncscope] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unordered] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_monotonic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_acquire] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_release] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_acq_rel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_seq_cst] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_implicit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_implicit_DASHdef] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_def] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dead] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_killed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_internal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_early_DASHclobber] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_debug_DASHuse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_renamable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_frame_DASHsetup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_frame_DASHdestroy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nnan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ninf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nsz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_arcp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_afn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reassoc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nuw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nsw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exact] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nofpexcept] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_address_DASHtaken] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_landing_DASHpad] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inlineasm_DASHbr_DASHindirect_DASHtarget] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ehfunclet_DASHentry] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bbsections] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_half] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x86_fp80] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fp128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ppc_fp128] = {
    .visible = true,
    .named = false,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_basic_block] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_register] = {
    .visible = true,
    .named = true,
  },
  [sym_bundle] = {
    .visible = true,
    .named = true,
  },
  [sym_successors] = {
    .visible = true,
    .named = true,
  },
  [sym_liveins] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_mc_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_metadata] = {
    .visible = true,
    .named = true,
  },
  [sym_md_value] = {
    .visible = true,
    .named = true,
  },
  [sym_register_operand] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_machine_operand] = {
    .visible = true,
    .named = true,
  },
  [sym_subregister] = {
    .visible = true,
    .named = true,
  },
  [sym_registerclass] = {
    .visible = true,
    .named = true,
  },
  [sym_low_level_type] = {
    .visible = true,
    .named = true,
  },
  [sym_custom_regmask] = {
    .visible = true,
    .named = true,
  },
  [sym_cfi_operand] = {
    .visible = true,
    .named = true,
  },
  [sym_immediate] = {
    .visible = true,
    .named = true,
  },
  [sym_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_intpred] = {
    .visible = true,
    .named = true,
  },
  [sym_floatpred] = {
    .visible = true,
    .named = true,
  },
  [sym_shuffle_mask] = {
    .visible = true,
    .named = true,
  },
  [sym_liveout] = {
    .visible = true,
    .named = true,
  },
  [sym_target_index] = {
    .visible = true,
    .named = true,
  },
  [sym_block_address] = {
    .visible = true,
    .named = true,
  },
  [sym_intrinsic] = {
    .visible = true,
    .named = true,
  },
  [sym_memory_operand] = {
    .visible = true,
    .named = true,
  },
  [sym_mem_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_machine_pointer_info] = {
    .visible = true,
    .named = true,
  },
  [sym_ir_value] = {
    .visible = true,
    .named = true,
  },
  [sym_escaped_ir_value] = {
    .visible = true,
    .named = true,
  },
  [sym__escaped_ir_content] = {
    .visible = false,
    .named = true,
  },
  [sym_offset] = {
    .visible = true,
    .named = true,
  },
  [sym_memory_pseudo_source_value] = {
    .visible = true,
    .named = true,
  },
  [sym_memory_pseudo_source_value_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_memory_operand_flag] = {
    .visible = true,
    .named = true,
  },
  [sym_sync_scope] = {
    .visible = true,
    .named = true,
  },
  [sym_atomic_ordering] = {
    .visible = true,
    .named = true,
  },
  [sym_register_flag] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction_flag] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_float_keyword] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_basic_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_basic_block_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_basic_block_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bundle_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_successors_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_liveins_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_repeat4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_repeat5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_repeat6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_metadata_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_operand_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_custom_regmask_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cfi_operand_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shuffle_mask_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_memory_operand_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_memory_operand_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_escaped_ir_value_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_name = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 1},
  [2] =
    {field_name, 2},
  [3] =
    {field_name, 3},
  [4] =
    {field_name, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(761);
      if (lookahead == '\n') ADVANCE(768);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(1318);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '$') ADVANCE(753);
      if (lookahead == '%') ADVANCE(18);
      if (lookahead == '&') ADVANCE(21);
      if (lookahead == '(') ADVANCE(1317);
      if (lookahead == ')') ADVANCE(765);
      if (lookahead == '*') ADVANCE(1326);
      if (lookahead == '+') ADVANCE(1428);
      if (lookahead == ',') ADVANCE(764);
      if (lookahead == '-') ADVANCE(1429);
      if (lookahead == '.') ADVANCE(1329);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '0') ADVANCE(733);
      if (lookahead == ':') ADVANCE(767);
      if (lookahead == ';') ADVANCE(769);
      if (lookahead == '<') ADVANCE(1314);
      if (lookahead == '=') ADVANCE(1302);
      if (lookahead == '>') ADVANCE(1316);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == 'C') ADVANCE(708);
      if (lookahead == '[') ADVANCE(1327);
      if (lookahead == ']') ADVANCE(1328);
      if (lookahead == '_') ADVANCE(1330);
      if (lookahead == '`') ADVANCE(1427);
      if (lookahead == 'a') ADVANCE(174);
      if (lookahead == 'b') ADVANCE(101);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'd') ADVANCE(234);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == 'f') ADVANCE(103);
      if (lookahead == 'g') ADVANCE(511);
      if (lookahead == 'h') ADVANCE(110);
      if (lookahead == 'i') ADVANCE(447);
      if (lookahead == 'j') ADVANCE(709);
      if (lookahead == 'k') ADVANCE(388);
      if (lookahead == 'l') ADVANCE(109);
      if (lookahead == 'm') ADVANCE(182);
      if (lookahead == 'n') ADVANCE(235);
      if (lookahead == 'o') ADVANCE(272);
      if (lookahead == 'p') ADVANCE(1336);
      if (lookahead == 'r') ADVANCE(236);
      if (lookahead == 's') ADVANCE(1335);
      if (lookahead == 't') ADVANCE(105);
      if (lookahead == 'u') ADVANCE(64);
      if (lookahead == 'v') ADVANCE(516);
      if (lookahead == 'w') ADVANCE(390);
      if (lookahead == 'x') ADVANCE(1339);
      if (lookahead == '{') ADVANCE(1296);
      if (lookahead == '|') ADVANCE(1325);
      if (lookahead == '}') ADVANCE(1297);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(757)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(768);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(768);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '$') ADVANCE(753);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '&') ADVANCE(21);
      if (lookahead == ',') ADVANCE(764);
      if (lookahead == '-') ADVANCE(1206);
      if (lookahead == '.') ADVANCE(1207);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '0') ADVANCE(1215);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == ';') ADVANCE(769);
      if (lookahead == '<') ADVANCE(1314);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == 'C') ADVANCE(1178);
      if (lookahead == '_') ADVANCE(1331);
      if (lookahead == 'a') ADVANCE(878);
      if (lookahead == 'b') ADVANCE(1007);
      if (lookahead == 'd') ADVANCE(893);
      if (lookahead == 'e') ADVANCE(810);
      if (lookahead == 'f') ADVANCE(1012);
      if (lookahead == 'h') ADVANCE(815);
      if (lookahead == 'i') ADVANCE(1025);
      if (lookahead == 'k') ADVANCE(985);
      if (lookahead == 'l') ADVANCE(984);
      if (lookahead == 'n') ADVANCE(894);
      if (lookahead == 'o') ADVANCE(955);
      if (lookahead == 'p') ADVANCE(1070);
      if (lookahead == 'r') ADVANCE(895);
      if (lookahead == 's') ADVANCE(812);
      if (lookahead == 't') ADVANCE(817);
      if (lookahead == 'u') ADVANCE(1041);
      if (lookahead == 'w') ADVANCE(994);
      if (lookahead == 'x') ADVANCE(790);
      if (lookahead == '{') ADVANCE(1296);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(768);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '%') ADVANCE(19);
      if (lookahead == '(') ADVANCE(763);
      if (lookahead == ')') ADVANCE(765);
      if (lookahead == '+') ADVANCE(1428);
      if (lookahead == ',') ADVANCE(764);
      if (lookahead == '-') ADVANCE(1429);
      if (lookahead == '.') ADVANCE(1329);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(767);
      if (lookahead == ';') ADVANCE(769);
      if (lookahead == '=') ADVANCE(1302);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '`') ADVANCE(1427);
      if (lookahead == 'c') ADVANCE(95);
      if (lookahead == 'd') ADVANCE(267);
      if (lookahead == 'e') ADVANCE(564);
      if (lookahead == 'f') ADVANCE(102);
      if (lookahead == 'g') ADVANCE(511);
      if (lookahead == 'h') ADVANCE(274);
      if (lookahead == 'i') ADVANCE(497);
      if (lookahead == 'j') ADVANCE(709);
      if (lookahead == 'l') ADVANCE(514);
      if (lookahead == 'n') ADVANCE(268);
      if (lookahead == 'o') ADVANCE(273);
      if (lookahead == 'p') ADVANCE(538);
      if (lookahead == 's') ADVANCE(363);
      if (lookahead == 't') ADVANCE(577);
      if (lookahead == 'u') ADVANCE(278);
      if (lookahead == 'v') ADVANCE(516);
      if (lookahead == 'x') ADVANCE(1338);
      if (lookahead == '{') ADVANCE(1296);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(768);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(395);
      if (lookahead == '(') ADVANCE(1317);
      if (lookahead == ')') ADVANCE(765);
      if (lookahead == '+') ADVANCE(1428);
      if (lookahead == ',') ADVANCE(764);
      if (lookahead == '-') ADVANCE(1429);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == ';') ADVANCE(769);
      if (lookahead == 'a') ADVANCE(233);
      if (lookahead == 'b') ADVANCE(100);
      if (lookahead == 'd') ADVANCE(287);
      if (lookahead == 'e') ADVANCE(375);
      if (lookahead == 'h') ADVANCE(274);
      if (lookahead == 'i') ADVANCE(493);
      if (lookahead == 'l') ADVANCE(108);
      if (lookahead == 'p') ADVANCE(538);
      if (lookahead == '{') ADVANCE(1296);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(768);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(395);
      if (lookahead == ')') ADVANCE(765);
      if (lookahead == '+') ADVANCE(1428);
      if (lookahead == ',') ADVANCE(764);
      if (lookahead == '-') ADVANCE(1429);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == ';') ADVANCE(769);
      if (lookahead == 'a') ADVANCE(233);
      if (lookahead == 'b') ADVANCE(100);
      if (lookahead == 'd') ADVANCE(287);
      if (lookahead == 'e') ADVANCE(375);
      if (lookahead == 'h') ADVANCE(274);
      if (lookahead == 'i') ADVANCE(493);
      if (lookahead == 'l') ADVANCE(108);
      if (lookahead == 'p') ADVANCE(538);
      if (lookahead == '{') ADVANCE(1296);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(1318);
      if (lookahead == '%') ADVANCE(395);
      if (lookahead == '(') ADVANCE(763);
      if (lookahead == ')') ADVANCE(765);
      if (lookahead == '*') ADVANCE(1326);
      if (lookahead == ',') ADVANCE(764);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(766);
      if (lookahead == ';') ADVANCE(769);
      if (lookahead == '<') ADVANCE(1314);
      if (lookahead == '>') ADVANCE(1316);
      if (lookahead == '[') ADVANCE(1327);
      if (lookahead == ']') ADVANCE(1328);
      if (lookahead == 'n') ADVANCE(1323);
      if (lookahead == '{') ADVANCE(1296);
      if (lookahead == '|') ADVANCE(1325);
      if (lookahead == '}') ADVANCE(1297);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1324);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(1318);
      if (lookahead == '(') ADVANCE(1317);
      if (lookahead == ')') ADVANCE(765);
      if (lookahead == '*') ADVANCE(1326);
      if (lookahead == ',') ADVANCE(764);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(766);
      if (lookahead == ';') ADVANCE(769);
      if (lookahead == '<') ADVANCE(1314);
      if (lookahead == '>') ADVANCE(1316);
      if (lookahead == '[') ADVANCE(1327);
      if (lookahead == ']') ADVANCE(1328);
      if (lookahead == 'n') ADVANCE(1323);
      if (lookahead == '{') ADVANCE(1296);
      if (lookahead == '|') ADVANCE(1325);
      if (lookahead == '}') ADVANCE(1297);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1324);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(1318);
      if (lookahead == '(') ADVANCE(763);
      if (lookahead == ')') ADVANCE(765);
      if (lookahead == '*') ADVANCE(1326);
      if (lookahead == ',') ADVANCE(764);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(766);
      if (lookahead == ';') ADVANCE(769);
      if (lookahead == '<') ADVANCE(1314);
      if (lookahead == '>') ADVANCE(1316);
      if (lookahead == '[') ADVANCE(1327);
      if (lookahead == ']') ADVANCE(1328);
      if (lookahead == 'n') ADVANCE(1323);
      if (lookahead == '{') ADVANCE(1296);
      if (lookahead == '|') ADVANCE(1325);
      if (lookahead == '}') ADVANCE(1297);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1324);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '$') ADVANCE(753);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '&') ADVANCE(21);
      if (lookahead == '-') ADVANCE(1206);
      if (lookahead == '.') ADVANCE(1207);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '0') ADVANCE(1215);
      if (lookahead == ';') ADVANCE(769);
      if (lookahead == '<') ADVANCE(1314);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == 'C') ADVANCE(1178);
      if (lookahead == '_') ADVANCE(1331);
      if (lookahead == 'a') ADVANCE(878);
      if (lookahead == 'b') ADVANCE(1007);
      if (lookahead == 'd') ADVANCE(948);
      if (lookahead == 'e') ADVANCE(810);
      if (lookahead == 'f') ADVANCE(1012);
      if (lookahead == 'h') ADVANCE(816);
      if (lookahead == 'i') ADVANCE(1025);
      if (lookahead == 'k') ADVANCE(985);
      if (lookahead == 'l') ADVANCE(984);
      if (lookahead == 'n') ADVANCE(894);
      if (lookahead == 'o') ADVANCE(955);
      if (lookahead == 'p') ADVANCE(1078);
      if (lookahead == 'r') ADVANCE(895);
      if (lookahead == 's') ADVANCE(812);
      if (lookahead == 't') ADVANCE(817);
      if (lookahead == 'u') ADVANCE(1041);
      if (lookahead == 'w') ADVANCE(994);
      if (lookahead == 'x') ADVANCE(790);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '$') ADVANCE(753);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '&') ADVANCE(21);
      if (lookahead == '-') ADVANCE(1206);
      if (lookahead == '.') ADVANCE(1207);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '0') ADVANCE(1215);
      if (lookahead == ';') ADVANCE(769);
      if (lookahead == '<') ADVANCE(1314);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == 'C') ADVANCE(1178);
      if (lookahead == '_') ADVANCE(1331);
      if (lookahead == 'a') ADVANCE(878);
      if (lookahead == 'b') ADVANCE(1007);
      if (lookahead == 'd') ADVANCE(948);
      if (lookahead == 'e') ADVANCE(810);
      if (lookahead == 'f') ADVANCE(1012);
      if (lookahead == 'h') ADVANCE(816);
      if (lookahead == 'i') ADVANCE(1025);
      if (lookahead == 'k') ADVANCE(985);
      if (lookahead == 'l') ADVANCE(984);
      if (lookahead == 'n') ADVANCE(894);
      if (lookahead == 'o') ADVANCE(955);
      if (lookahead == 'p') ADVANCE(1078);
      if (lookahead == 'r') ADVANCE(895);
      if (lookahead == 's') ADVANCE(812);
      if (lookahead == 't') ADVANCE(849);
      if (lookahead == 'u') ADVANCE(1041);
      if (lookahead == 'w') ADVANCE(994);
      if (lookahead == 'x') ADVANCE(790);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(1212);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(1293);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(1274);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(1268);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(1271);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(1265);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1294);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1295);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == 'c') ADVANCE(1246);
      if (lookahead == 'f') ADVANCE(1239);
      if (lookahead == 'i') ADVANCE(1249);
      if (lookahead == 'j') ADVANCE(1255);
      if (lookahead == 's') ADVANCE(1252);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1257);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1258);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == 'f') ADVANCE(1282);
      if (lookahead == 'i') ADVANCE(1284);
      if (lookahead == 's') ADVANCE(1286);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1288);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(1284);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1288);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1269);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1272);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1266);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1267);
      END_STATE();
    case 24:
      if (lookahead == '$') ADVANCE(753);
      if (lookahead == '%') ADVANCE(754);
      if (lookahead == '(') ADVANCE(763);
      if (lookahead == ')') ADVANCE(765);
      if (lookahead == ',') ADVANCE(764);
      if (lookahead == '-') ADVANCE(747);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '0') ADVANCE(1215);
      if (lookahead == ';') ADVANCE(769);
      if (lookahead == '_') ADVANCE(1330);
      if (lookahead == 'a') ADVANCE(173);
      if (lookahead == 'd') ADVANCE(269);
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == 'f') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(448);
      if (lookahead == 'k') ADVANCE(388);
      if (lookahead == 'm') ADVANCE(515);
      if (lookahead == 'o') ADVANCE(474);
      if (lookahead == 'r') ADVANCE(270);
      if (lookahead == 's') ADVANCE(277);
      if (lookahead == 't') ADVANCE(577);
      if (lookahead == 'u') ADVANCE(475);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(24)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1216);
      END_STATE();
    case 25:
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '(') ADVANCE(763);
      if (lookahead == ')') ADVANCE(765);
      if (lookahead == '*') ADVANCE(1326);
      if (lookahead == ',') ADVANCE(764);
      if (lookahead == '-') ADVANCE(1206);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '0') ADVANCE(1215);
      if (lookahead == ';') ADVANCE(769);
      if (lookahead == '<') ADVANCE(1314);
      if (lookahead == '>') ADVANCE(1316);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '[') ADVANCE(1327);
      if (lookahead == ']') ADVANCE(1328);
      if (lookahead == '`') ADVANCE(1427);
      if (lookahead == '{') ADVANCE(1296);
      if (lookahead == '}') ADVANCE(1297);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(25)
      if (lookahead == 'i' ||
          lookahead == 'p' ||
          lookahead == 's') ADVANCE(1205);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1216);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 26:
      if (lookahead == '*') ADVANCE(28);
      END_STATE();
    case 27:
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '/') ADVANCE(770);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == '*') ADVANCE(27);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '+') ADVANCE(749);
      if (lookahead == '-') ADVANCE(748);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '0') ADVANCE(1213);
      if (lookahead == ';') ADVANCE(769);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29)
      if (lookahead == 's' ||
          lookahead == 'u') ADVANCE(63);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1214);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(402);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(220);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(353);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(156);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(401);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(159);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(142);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(561);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(705);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(462);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(191);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(310);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(684);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(626);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(483);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(688);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(722);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(172);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(687);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(554);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(330);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(384);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(397);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(225);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(655);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(657);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(155);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(404);
      END_STATE();
    case 58:
      if (lookahead == '.') ADVANCE(1218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 59:
      if (lookahead == '.') ADVANCE(23);
      END_STATE();
    case 60:
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ';') ADVANCE(769);
      if (lookahead == '<') ADVANCE(1314);
      if (lookahead == 't') ADVANCE(378);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(60)
      if (lookahead == 'p' ||
          lookahead == 's') ADVANCE(1337);
      END_STATE();
    case 61:
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ';') ADVANCE(769);
      if (lookahead == '_') ADVANCE(1331);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(61)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 62:
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ';') ADVANCE(769);
      if (lookahead == 'a') ADVANCE(962);
      if (lookahead == 'c') ADVANCE(1065);
      if (lookahead == 'e') ADVANCE(1199);
      if (lookahead == 'f') ADVANCE(1105);
      if (lookahead == 'n') ADVANCE(993);
      if (lookahead == 'r') ADVANCE(942);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(62)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 63:
      if (lookahead == '0') ADVANCE(733);
      END_STATE();
    case 64:
      if (lookahead == '0') ADVANCE(733);
      if (lookahead == 'e') ADVANCE(567);
      if (lookahead == 'g') ADVANCE(242);
      if (lookahead == 'l') ADVANCE(243);
      if (lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 65:
      if (lookahead == '0') ADVANCE(1504);
      END_STATE();
    case 66:
      if (lookahead == '1') ADVANCE(68);
      END_STATE();
    case 67:
      if (lookahead == '1') ADVANCE(69);
      END_STATE();
    case 68:
      if (lookahead == '2') ADVANCE(71);
      END_STATE();
    case 69:
      if (lookahead == '2') ADVANCE(73);
      END_STATE();
    case 70:
      if (lookahead == '6') ADVANCE(88);
      END_STATE();
    case 71:
      if (lookahead == '8') ADVANCE(1506);
      END_STATE();
    case 72:
      if (lookahead == '8') ADVANCE(65);
      END_STATE();
    case 73:
      if (lookahead == '8') ADVANCE(1508);
      END_STATE();
    case 74:
      if (lookahead == ':') ADVANCE(1313);
      END_STATE();
    case 75:
      if (lookahead == '>') ADVANCE(762);
      END_STATE();
    case 76:
      if (lookahead == 'M') ADVANCE(134);
      END_STATE();
    case 77:
      if (lookahead == 'R') ADVANCE(279);
      END_STATE();
    case 78:
      if (lookahead == '_') ADVANCE(727);
      END_STATE();
    case 79:
      if (lookahead == '_') ADVANCE(525);
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 80:
      if (lookahead == '_') ADVANCE(345);
      END_STATE();
    case 81:
      if (lookahead == '_') ADVANCE(585);
      END_STATE();
    case 82:
      if (lookahead == '_') ADVANCE(223);
      END_STATE();
    case 83:
      if (lookahead == '_') ADVANCE(634);
      END_STATE();
    case 84:
      if (lookahead == '_') ADVANCE(205);
      END_STATE();
    case 85:
      if (lookahead == '_') ADVANCE(649);
      END_STATE();
    case 86:
      if (lookahead == '_') ADVANCE(131);
      END_STATE();
    case 87:
      if (lookahead == '_') ADVANCE(590);
      if (lookahead == 'u') ADVANCE(393);
      END_STATE();
    case 88:
      if (lookahead == '_') ADVANCE(348);
      END_STATE();
    case 89:
      if (lookahead == '_') ADVANCE(200);
      END_STATE();
    case 90:
      if (lookahead == '_') ADVANCE(203);
      END_STATE();
    case 91:
      if (lookahead == '_') ADVANCE(653);
      END_STATE();
    case 92:
      if (lookahead == '_') ADVANCE(654);
      END_STATE();
    case 93:
      if (lookahead == '_') ADVANCE(547);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(423);
      if (lookahead == 'o') ADVANCE(467);
      if (lookahead == 'u') ADVANCE(652);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(423);
      if (lookahead == 'o') ADVANCE(508);
      if (lookahead == 'u') ADVANCE(652);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(579);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(579);
      if (lookahead == 'h') ADVANCE(344);
      if (lookahead == 'q') ADVANCE(1380);
      if (lookahead == 's') ADVANCE(199);
      if (lookahead == 'x') ADVANCE(116);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(1354);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(1360);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(617);
      if (lookahead == 'b') ADVANCE(621);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(617);
      if (lookahead == 'b') ADVANCE(621);
      if (lookahead == 'l') ADVANCE(521);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(442);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(442);
      if (lookahead == 'l') ADVANCE(522);
      if (lookahead == 'p') ADVANCE(66);
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(442);
      if (lookahead == 'r') ADVANCE(518);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(575);
      if (lookahead == 'i') ADVANCE(281);
      if (lookahead == 'r') ADVANCE(713);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(207);
      if (lookahead == 'b') ADVANCE(711);
      if (lookahead == 'f') ADVANCE(1453);
      if (lookahead == 'r') ADVANCE(286);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(207);
      if (lookahead == 'b') ADVANCE(721);
      if (lookahead == 'f') ADVANCE(1451);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(476);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(476);
      if (lookahead == 'i') ADVANCE(725);
      if (lookahead == 'l') ADVANCE(723);
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(421);
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(551);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(461);
      if (lookahead == 'o') ADVANCE(449);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(409);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(622);
      if (lookahead == 'g') ADVANCE(396);
      if (lookahead == 'l') ADVANCE(79);
      if (lookahead == 'm') ADVANCE(288);
      if (lookahead == 'n') ADVANCE(124);
      if (lookahead == 's') ADVANCE(675);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(183);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(661);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(369);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(469);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(181);
      if (lookahead == 'o') ADVANCE(584);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(686);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(580);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(694);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(458);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(629);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(439);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(620);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(414);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(656);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(214);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(441);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(623);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(416);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(598);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(726);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(555);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(488);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(428);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(494);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(690);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(639);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(691);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(693);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(596);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(704);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(232);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(232);
      if (lookahead == 's') ADVANCE(377);
      END_STATE();
    case 157:
      if (lookahead == 'b') ADVANCE(1233);
      if (lookahead == 'c') ADVANCE(1246);
      if (lookahead == 'f') ADVANCE(1239);
      if (lookahead == 'j') ADVANCE(1255);
      if (lookahead == 's') ADVANCE(1252);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1258);
      END_STATE();
    case 158:
      if (lookahead == 'b') ADVANCE(429);
      END_STATE();
    case 159:
      if (lookahead == 'b') ADVANCE(597);
      END_STATE();
    case 160:
      if (lookahead == 'b') ADVANCE(296);
      END_STATE();
    case 161:
      if (lookahead == 'b') ADVANCE(311);
      END_STATE();
    case 162:
      if (lookahead == 'b') ADVANCE(316);
      END_STATE();
    case 163:
      if (lookahead == 'b') ADVANCE(528);
      END_STATE();
    case 164:
      if (lookahead == 'b') ADVANCE(161);
      END_STATE();
    case 165:
      if (lookahead == 'b') ADVANCE(720);
      END_STATE();
    case 166:
      if (lookahead == 'b') ADVANCE(720);
      if (lookahead == 'r') ADVANCE(286);
      END_STATE();
    case 167:
      if (lookahead == 'b') ADVANCE(532);
      END_STATE();
    case 168:
      if (lookahead == 'b') ADVANCE(535);
      END_STATE();
    case 169:
      if (lookahead == 'b') ADVANCE(434);
      END_STATE();
    case 170:
      if (lookahead == 'b') ADVANCE(435);
      END_STATE();
    case 171:
      if (lookahead == 'b') ADVANCE(436);
      END_STATE();
    case 172:
      if (lookahead == 'b') ADVANCE(445);
      END_STATE();
    case 173:
      if (lookahead == 'c') ADVANCE(565);
      END_STATE();
    case 174:
      if (lookahead == 'c') ADVANCE(565);
      if (lookahead == 'd') ADVANCE(215);
      if (lookahead == 'f') ADVANCE(466);
      if (lookahead == 'l') ADVANCE(376);
      if (lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 175:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 176:
      if (lookahead == 'c') ADVANCE(411);
      END_STATE();
    case 177:
      if (lookahead == 'c') ADVANCE(1483);
      END_STATE();
    case 178:
      if (lookahead == 'c') ADVANCE(1414);
      END_STATE();
    case 179:
      if (lookahead == 'c') ADVANCE(1442);
      END_STATE();
    case 180:
      if (lookahead == 'c') ADVANCE(548);
      END_STATE();
    case 181:
      if (lookahead == 'c') ADVANCE(405);
      END_STATE();
    case 182:
      if (lookahead == 'c') ADVANCE(608);
      if (lookahead == 'o') ADVANCE(496);
      END_STATE();
    case 183:
      if (lookahead == 'c') ADVANCE(660);
      END_STATE();
    case 184:
      if (lookahead == 'c') ADVANCE(632);
      END_STATE();
    case 185:
      if (lookahead == 'c') ADVANCE(408);
      END_STATE();
    case 186:
      if (lookahead == 'c') ADVANCE(192);
      END_STATE();
    case 187:
      if (lookahead == 'c') ADVANCE(387);
      END_STATE();
    case 188:
      if (lookahead == 'c') ADVANCE(349);
      END_STATE();
    case 189:
      if (lookahead == 'c') ADVANCE(676);
      END_STATE();
    case 190:
      if (lookahead == 'c') ADVANCE(544);
      END_STATE();
    case 191:
      if (lookahead == 'c') ADVANCE(427);
      END_STATE();
    case 192:
      if (lookahead == 'c') ADVANCE(326);
      END_STATE();
    case 193:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 194:
      if (lookahead == 'c') ADVANCE(665);
      END_STATE();
    case 195:
      if (lookahead == 'c') ADVANCE(699);
      END_STATE();
    case 196:
      if (lookahead == 'c') ADVANCE(297);
      END_STATE();
    case 197:
      if (lookahead == 'c') ADVANCE(255);
      END_STATE();
    case 198:
      if (lookahead == 'c') ADVANCE(334);
      END_STATE();
    case 199:
      if (lookahead == 'c') ADVANCE(138);
      END_STATE();
    case 200:
      if (lookahead == 'c') ADVANCE(350);
      END_STATE();
    case 201:
      if (lookahead == 'c') ADVANCE(336);
      END_STATE();
    case 202:
      if (lookahead == 'c') ADVANCE(432);
      END_STATE();
    case 203:
      if (lookahead == 'c') ADVANCE(352);
      END_STATE();
    case 204:
      if (lookahead == 'c') ADVANCE(152);
      END_STATE();
    case 205:
      if (lookahead == 'c') ADVANCE(633);
      END_STATE();
    case 206:
      if (lookahead == 'd') ADVANCE(1397);
      END_STATE();
    case 207:
      if (lookahead == 'd') ADVANCE(1455);
      END_STATE();
    case 208:
      if (lookahead == 'd') ADVANCE(1416);
      END_STATE();
    case 209:
      if (lookahead == 'd') ADVANCE(1457);
      END_STATE();
    case 210:
      if (lookahead == 'd') ADVANCE(1376);
      END_STATE();
    case 211:
      if (lookahead == 'd') ADVANCE(1378);
      END_STATE();
    case 212:
      if (lookahead == 'd') ADVANCE(1348);
      END_STATE();
    case 213:
      if (lookahead == 'd') ADVANCE(1441);
      END_STATE();
    case 214:
      if (lookahead == 'd') ADVANCE(1494);
      END_STATE();
    case 215:
      if (lookahead == 'd') ADVANCE(569);
      if (lookahead == 'j') ADVANCE(719);
      END_STATE();
    case 216:
      if (lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 217:
      if (lookahead == 'd') ADVANCE(513);
      END_STATE();
    case 218:
      if (lookahead == 'd') ADVANCE(227);
      END_STATE();
    case 219:
      if (lookahead == 'd') ADVANCE(335);
      END_STATE();
    case 220:
      if (lookahead == 'd') ADVANCE(333);
      if (lookahead == 's') ADVANCE(317);
      END_STATE();
    case 221:
      if (lookahead == 'd') ADVANCE(276);
      END_STATE();
    case 222:
      if (lookahead == 'd') ADVANCE(292);
      if (lookahead == 'e') ADVANCE(1401);
      if (lookahead == 'k') ADVANCE(479);
      if (lookahead == 'o') ADVANCE(1399);
      END_STATE();
    case 223:
      if (lookahead == 'd') ADVANCE(300);
      END_STATE();
    case 224:
      if (lookahead == 'd') ADVANCE(381);
      END_STATE();
    case 225:
      if (lookahead == 'd') ADVANCE(302);
      END_STATE();
    case 226:
      if (lookahead == 'd') ADVANCE(306);
      END_STATE();
    case 227:
      if (lookahead == 'd') ADVANCE(604);
      END_STATE();
    case 228:
      if (lookahead == 'd') ADVANCE(308);
      if (lookahead == 'k') ADVANCE(504);
      if (lookahead == 'o') ADVANCE(581);
      END_STATE();
    case 229:
      if (lookahead == 'd') ADVANCE(399);
      END_STATE();
    case 230:
      if (lookahead == 'd') ADVANCE(605);
      END_STATE();
    case 231:
      if (lookahead == 'd') ADVANCE(606);
      END_STATE();
    case 232:
      if (lookahead == 'd') ADVANCE(230);
      END_STATE();
    case 233:
      if (lookahead == 'd') ADVANCE(231);
      if (lookahead == 'l') ADVANCE(376);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead == 'o') ADVANCE(710);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(1382);
      if (lookahead == 'i') ADVANCE(477);
      if (lookahead == 'n') ADVANCE(119);
      if (lookahead == 'o') ADVANCE(343);
      if (lookahead == 's') ADVANCE(728);
      if (lookahead == 'u') ADVANCE(426);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(1393);
      if (lookahead == 't') ADVANCE(1392);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(1395);
      if (lookahead == 't') ADVANCE(1394);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(1396);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(1384);
      if (lookahead == 't') ADVANCE(1383);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(1386);
      if (lookahead == 't') ADVANCE(1385);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(1388);
      if (lookahead == 't') ADVANCE(1387);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(1390);
      if (lookahead == 't') ADVANCE(1389);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(1401);
      if (lookahead == 'k') ADVANCE(501);
      if (lookahead == 'o') ADVANCE(1398);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(1374);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(1375);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(1417);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(1502);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(1364);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(1443);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(1444);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(1347);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(1436);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(1425);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(1463);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(1465);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(1440);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(1435);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(1342);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(1370);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(1418);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(1368);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(1366);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(1438);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(1372);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(1381);
      if (lookahead == 'o') ADVANCE(468);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(446);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(735);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(566);
      if (lookahead == 'f') ADVANCE(355);
      if (lookahead == 'g') ADVANCE(237);
      if (lookahead == 'l') ADVANCE(238);
      if (lookahead == 'n') ADVANCE(1420);
      if (lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(566);
      if (lookahead == 'g') ADVANCE(237);
      if (lookahead == 'l') ADVANCE(238);
      if (lookahead == 'n') ADVANCE(239);
      if (lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(734);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(568);
      if (lookahead == 't') ADVANCE(517);
      if (lookahead == 'y') ADVANCE(482);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(567);
      if (lookahead == 'g') ADVANCE(242);
      if (lookahead == 'l') ADVANCE(243);
      if (lookahead == 'n') ADVANCE(244);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(362);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(583);
      if (lookahead == 'o') ADVANCE(1422);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(583);
      if (lookahead == 'o') ADVANCE(1422);
      if (lookahead == 'p') ADVANCE(599);
      if (lookahead == 'r') ADVANCE(380);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(351);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(453);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(570);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(582);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(556);
      END_STATE();
    case 298:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 299:
      if (lookahead == 'e') ADVANCE(413);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(662);
      END_STATE();
    case 302:
      if (lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 303:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 304:
      if (lookahead == 'e') ADVANCE(678);
      END_STATE();
    case 305:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 306:
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 307:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 308:
      if (lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 309:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 310:
      if (lookahead == 'e') ADVANCE(487);
      END_STATE();
    case 311:
      if (lookahead == 'e') ADVANCE(571);
      END_STATE();
    case 312:
      if (lookahead == 'e') ADVANCE(572);
      END_STATE();
    case 313:
      if (lookahead == 'e') ADVANCE(472);
      END_STATE();
    case 314:
      if (lookahead == 'e') ADVANCE(573);
      END_STATE();
    case 315:
      if (lookahead == 'e') ADVANCE(703);
      END_STATE();
    case 316:
      if (lookahead == 'e') ADVANCE(574);
      END_STATE();
    case 317:
      if (lookahead == 'e') ADVANCE(677);
      END_STATE();
    case 318:
      if (lookahead == 'e') ADVANCE(669);
      END_STATE();
    case 319:
      if (lookahead == 'e') ADVANCE(670);
      END_STATE();
    case 320:
      if (lookahead == 'e') ADVANCE(671);
      END_STATE();
    case 321:
      if (lookahead == 'e') ADVANCE(672);
      END_STATE();
    case 322:
      if (lookahead == 'e') ADVANCE(457);
      END_STATE();
    case 323:
      if (lookahead == 'e') ADVANCE(624);
      END_STATE();
    case 324:
      if (lookahead == 'e') ADVANCE(624);
      if (lookahead == 's') ADVANCE(560);
      END_STATE();
    case 325:
      if (lookahead == 'e') ADVANCE(460);
      END_STATE();
    case 326:
      if (lookahead == 'e') ADVANCE(627);
      END_STATE();
    case 327:
      if (lookahead == 'e') ADVANCE(491);
      END_STATE();
    case 328:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 329:
      if (lookahead == 'e') ADVANCE(635);
      END_STATE();
    case 330:
      if (lookahead == 'e') ADVANCE(495);
      END_STATE();
    case 331:
      if (lookahead == 'e') ADVANCE(637);
      END_STATE();
    case 332:
      if (lookahead == 'e') ADVANCE(594);
      END_STATE();
    case 333:
      if (lookahead == 'e') ADVANCE(638);
      END_STATE();
    case 334:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 335:
      if (lookahead == 'e') ADVANCE(602);
      END_STATE();
    case 336:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 337:
      if (lookahead == 'f') ADVANCE(1498);
      END_STATE();
    case 338:
      if (lookahead == 'f') ADVANCE(1473);
      END_STATE();
    case 339:
      if (lookahead == 'f') ADVANCE(1406);
      END_STATE();
    case 340:
      if (lookahead == 'f') ADVANCE(1332);
      END_STATE();
    case 341:
      if (lookahead == 'f') ADVANCE(1449);
      END_STATE();
    case 342:
      if (lookahead == 'f') ADVANCE(1404);
      END_STATE();
    case 343:
      if (lookahead == 'f') ADVANCE(553);
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 344:
      if (lookahead == 'f') ADVANCE(717);
      END_STATE();
    case 345:
      if (lookahead == 'f') ADVANCE(562);
      END_STATE();
    case 346:
      if (lookahead == 'f') ADVANCE(86);
      END_STATE();
    case 347:
      if (lookahead == 'f') ADVANCE(354);
      END_STATE();
    case 348:
      if (lookahead == 'f') ADVANCE(550);
      END_STATE();
    case 349:
      if (lookahead == 'f') ADVANCE(98);
      END_STATE();
    case 350:
      if (lookahead == 'f') ADVANCE(125);
      END_STATE();
    case 351:
      if (lookahead == 'f') ADVANCE(332);
      END_STATE();
    case 352:
      if (lookahead == 'f') ADVANCE(99);
      END_STATE();
    case 353:
      if (lookahead == 'f') ADVANCE(430);
      if (lookahead == 'i') ADVANCE(500);
      END_STATE();
    case 354:
      if (lookahead == 'f') ADVANCE(431);
      END_STATE();
    case 355:
      if (lookahead == 'f') ADVANCE(631);
      END_STATE();
    case 356:
      if (lookahead == 'f') ADVANCE(642);
      END_STATE();
    case 357:
      if (lookahead == 'f') ADVANCE(643);
      END_STATE();
    case 358:
      if (lookahead == 'f') ADVANCE(644);
      END_STATE();
    case 359:
      if (lookahead == 'f') ADVANCE(356);
      END_STATE();
    case 360:
      if (lookahead == 'f') ADVANCE(357);
      END_STATE();
    case 361:
      if (lookahead == 'f') ADVANCE(358);
      END_STATE();
    case 362:
      if (lookahead == 'g') ADVANCE(76);
      END_STATE();
    case 363:
      if (lookahead == 'g') ADVANCE(240);
      if (lookahead == 'l') ADVANCE(241);
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 364:
      if (lookahead == 'g') ADVANCE(30);
      END_STATE();
    case 365:
      if (lookahead == 'g') ADVANCE(470);
      END_STATE();
    case 366:
      if (lookahead == 'g') ADVANCE(37);
      END_STATE();
    case 367:
      if (lookahead == 'g') ADVANCE(304);
      END_STATE();
    case 368:
      if (lookahead == 'g') ADVANCE(34);
      END_STATE();
    case 369:
      if (lookahead == 'g') ADVANCE(613);
      END_STATE();
    case 370:
      if (lookahead == 'g') ADVANCE(471);
      END_STATE();
    case 371:
      if (lookahead == 'g') ADVANCE(46);
      END_STATE();
    case 372:
      if (lookahead == 'g') ADVANCE(509);
      END_STATE();
    case 373:
      if (lookahead == 'g') ADVANCE(321);
      END_STATE();
    case 374:
      if (lookahead == 'g') ADVANCE(400);
      END_STATE();
    case 375:
      if (lookahead == 'h') ADVANCE(344);
      END_STATE();
    case 376:
      if (lookahead == 'i') ADVANCE(365);
      END_STATE();
    case 377:
      if (lookahead == 'i') ADVANCE(743);
      END_STATE();
    case 378:
      if (lookahead == 'i') ADVANCE(281);
      END_STATE();
    case 379:
      if (lookahead == 'i') ADVANCE(499);
      END_STATE();
    case 380:
      if (lookahead == 'i') ADVANCE(480);
      END_STATE();
    case 381:
      if (lookahead == 'i') ADVANCE(498);
      END_STATE();
    case 382:
      if (lookahead == 'i') ADVANCE(481);
      if (lookahead == 'o') ADVANCE(715);
      END_STATE();
    case 383:
      if (lookahead == 'i') ADVANCE(187);
      END_STATE();
    case 384:
      if (lookahead == 'i') ADVANCE(506);
      END_STATE();
    case 385:
      if (lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 386:
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 387:
      if (lookahead == 'i') ADVANCE(666);
      END_STATE();
    case 388:
      if (lookahead == 'i') ADVANCE(425);
      END_STATE();
    case 389:
      if (lookahead == 'i') ADVANCE(370);
      END_STATE();
    case 390:
      if (lookahead == 'i') ADVANCE(478);
      END_STATE();
    case 391:
      if (lookahead == 'i') ADVANCE(533);
      END_STATE();
    case 392:
      if (lookahead == 'i') ADVANCE(372);
      END_STATE();
    case 393:
      if (lookahead == 'i') ADVANCE(592);
      END_STATE();
    case 394:
      if (lookahead == 'i') ADVANCE(537);
      END_STATE();
    case 395:
      if (lookahead == 'i') ADVANCE(591);
      END_STATE();
    case 396:
      if (lookahead == 'i') ADVANCE(650);
      END_STATE();
    case 397:
      if (lookahead == 'i') ADVANCE(489);
      END_STATE();
    case 398:
      if (lookahead == 'i') ADVANCE(433);
      END_STATE();
    case 399:
      if (lookahead == 'i') ADVANCE(603);
      END_STATE();
    case 400:
      if (lookahead == 'i') ADVANCE(651);
      END_STATE();
    case 401:
      if (lookahead == 'i') ADVANCE(507);
      if (lookahead == 'l') ADVANCE(540);
      END_STATE();
    case 402:
      if (lookahead == 'i') ADVANCE(507);
      if (lookahead == 'l') ADVANCE(540);
      if (lookahead == 'u') ADVANCE(641);
      END_STATE();
    case 403:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 404:
      if (lookahead == 'i') ADVANCE(510);
      END_STATE();
    case 405:
      if (lookahead == 'k') ADVANCE(1433);
      END_STATE();
    case 406:
      if (lookahead == 'k') ADVANCE(1402);
      END_STATE();
    case 407:
      if (lookahead == 'k') ADVANCE(1340);
      END_STATE();
    case 408:
      if (lookahead == 'k') ADVANCE(59);
      END_STATE();
    case 409:
      if (lookahead == 'k') ADVANCE(313);
      END_STATE();
    case 410:
      if (lookahead == 'k') ADVANCE(314);
      END_STATE();
    case 411:
      if (lookahead == 'k') ADVANCE(126);
      END_STATE();
    case 412:
      if (lookahead == 'l') ADVANCE(1319);
      END_STATE();
    case 413:
      if (lookahead == 'l') ADVANCE(1445);
      END_STATE();
    case 414:
      if (lookahead == 'l') ADVANCE(1459);
      END_STATE();
    case 415:
      if (lookahead == 'l') ADVANCE(1315);
      END_STATE();
    case 416:
      if (lookahead == 'l') ADVANCE(1437);
      END_STATE();
    case 417:
      if (lookahead == 'l') ADVANCE(1432);
      END_STATE();
    case 418:
      if (lookahead == 'l') ADVANCE(1303);
      END_STATE();
    case 419:
      if (lookahead == 'l') ADVANCE(1305);
      END_STATE();
    case 420:
      if (lookahead == 'l') ADVANCE(740);
      END_STATE();
    case 421:
      if (lookahead == 'l') ADVANCE(337);
      END_STATE();
    case 422:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 423:
      if (lookahead == 'l') ADVANCE(422);
      END_STATE();
    case 424:
      if (lookahead == 'l') ADVANCE(383);
      END_STATE();
    case 425:
      if (lookahead == 'l') ADVANCE(440);
      END_STATE();
    case 426:
      if (lookahead == 'l') ADVANCE(412);
      if (lookahead == 'w') ADVANCE(1485);
      END_STATE();
    case 427:
      if (lookahead == 'l') ADVANCE(519);
      END_STATE();
    case 428:
      if (lookahead == 'l') ADVANCE(443);
      END_STATE();
    case 429:
      if (lookahead == 'l') ADVANCE(249);
      END_STATE();
    case 430:
      if (lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 431:
      if (lookahead == 'l') ADVANCE(325);
      END_STATE();
    case 432:
      if (lookahead == 'l') ADVANCE(315);
      END_STATE();
    case 433:
      if (lookahead == 'l') ADVANCE(254);
      END_STATE();
    case 434:
      if (lookahead == 'l') ADVANCE(257);
      END_STATE();
    case 435:
      if (lookahead == 'l') ADVANCE(259);
      END_STATE();
    case 436:
      if (lookahead == 'l') ADVANCE(265);
      END_STATE();
    case 437:
      if (lookahead == 'l') ADVANCE(379);
      END_STATE();
    case 438:
      if (lookahead == 'l') ADVANCE(379);
      if (lookahead == 't') ADVANCE(285);
      if (lookahead == 'v') ADVANCE(122);
      END_STATE();
    case 439:
      if (lookahead == 'l') ADVANCE(389);
      END_STATE();
    case 440:
      if (lookahead == 'l') ADVANCE(290);
      END_STATE();
    case 441:
      if (lookahead == 'l') ADVANCE(716);
      END_STATE();
    case 442:
      if (lookahead == 'l') ADVANCE(628);
      END_STATE();
    case 443:
      if (lookahead == 'l') ADVANCE(534);
      END_STATE();
    case 444:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 445:
      if (lookahead == 'l') ADVANCE(536);
      END_STATE();
    case 446:
      if (lookahead == 'l') ADVANCE(293);
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 447:
      if (lookahead == 'm') ADVANCE(552);
      if (lookahead == 'n') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1264);
      END_STATE();
    case 448:
      if (lookahead == 'm') ADVANCE(552);
      if (lookahead == 'n') ADVANCE(673);
      END_STATE();
    case 449:
      if (lookahead == 'm') ADVANCE(1421);
      END_STATE();
    case 450:
      if (lookahead == 'm') ADVANCE(77);
      END_STATE();
    case 451:
      if (lookahead == 'm') ADVANCE(1431);
      END_STATE();
    case 452:
      if (lookahead == 'm') ADVANCE(163);
      END_STATE();
    case 453:
      if (lookahead == 'm') ADVANCE(160);
      END_STATE();
    case 454:
      if (lookahead == 'm') ADVANCE(82);
      END_STATE();
    case 455:
      if (lookahead == 'm') ADVANCE(558);
      END_STATE();
    case 456:
      if (lookahead == 'm') ADVANCE(280);
      END_STATE();
    case 457:
      if (lookahead == 'm') ADVANCE(559);
      END_STATE();
    case 458:
      if (lookahead == 'm') ADVANCE(150);
      END_STATE();
    case 459:
      if (lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 460:
      if (lookahead == 'm') ADVANCE(129);
      END_STATE();
    case 461:
      if (lookahead == 'm') ADVANCE(291);
      END_STATE();
    case 462:
      if (lookahead == 'm') ADVANCE(136);
      END_STATE();
    case 463:
      if (lookahead == 'm') ADVANCE(162);
      END_STATE();
    case 464:
      if (lookahead == 'm') ADVANCE(167);
      END_STATE();
    case 465:
      if (lookahead == 'm') ADVANCE(168);
      END_STATE();
    case 466:
      if (lookahead == 'n') ADVANCE(1481);
      END_STATE();
    case 467:
      if (lookahead == 'n') ADVANCE(619);
      END_STATE();
    case 468:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 469:
      if (lookahead == 'n') ADVANCE(1471);
      END_STATE();
    case 470:
      if (lookahead == 'n') ADVANCE(1423);
      END_STATE();
    case 471:
      if (lookahead == 'n') ADVANCE(1424);
      END_STATE();
    case 472:
      if (lookahead == 'n') ADVANCE(1493);
      END_STATE();
    case 473:
      if (lookahead == 'n') ADVANCE(1311);
      END_STATE();
    case 474:
      if (lookahead == 'n') ADVANCE(1419);
      END_STATE();
    case 475:
      if (lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 476:
      if (lookahead == 'n') ADVANCE(224);
      END_STATE();
    case 477:
      if (lookahead == 'n') ADVANCE(338);
      END_STATE();
    case 478:
      if (lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 479:
      if (lookahead == 'n') ADVANCE(512);
      END_STATE();
    case 480:
      if (lookahead == 'n') ADVANCE(646);
      END_STATE();
    case 481:
      if (lookahead == 'n') ADVANCE(609);
      END_STATE();
    case 482:
      if (lookahead == 'n') ADVANCE(184);
      END_STATE();
    case 483:
      if (lookahead == 'n') ADVANCE(718);
      END_STATE();
    case 484:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 485:
      if (lookahead == 'n') ADVANCE(610);
      END_STATE();
    case 486:
      if (lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 487:
      if (lookahead == 'n') ADVANCE(680);
      END_STATE();
    case 488:
      if (lookahead == 'n') ADVANCE(681);
      END_STATE();
    case 489:
      if (lookahead == 'n') ADVANCE(229);
      END_STATE();
    case 490:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 491:
      if (lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 492:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 493:
      if (lookahead == 'n') ADVANCE(437);
      END_STATE();
    case 494:
      if (lookahead == 'n') ADVANCE(667);
      END_STATE();
    case 495:
      if (lookahead == 'n') ADVANCE(685);
      END_STATE();
    case 496:
      if (lookahead == 'n') ADVANCE(543);
      END_STATE();
    case 497:
      if (lookahead == 'n') ADVANCE(724);
      END_STATE();
    case 498:
      if (lookahead == 'n') ADVANCE(366);
      END_STATE();
    case 499:
      if (lookahead == 'n') ADVANCE(303);
      END_STATE();
    case 500:
      if (lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 501:
      if (lookahead == 'n') ADVANCE(539);
      END_STATE();
    case 502:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 503:
      if (lookahead == 'n') ADVANCE(386);
      END_STATE();
    case 504:
      if (lookahead == 'n') ADVANCE(541);
      END_STATE();
    case 505:
      if (lookahead == 'n') ADVANCE(307);
      END_STATE();
    case 506:
      if (lookahead == 'n') ADVANCE(636);
      END_STATE();
    case 507:
      if (lookahead == 'n') ADVANCE(647);
      END_STATE();
    case 508:
      if (lookahead == 'n') ADVANCE(618);
      END_STATE();
    case 509:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 510:
      if (lookahead == 'n') ADVANCE(658);
      END_STATE();
    case 511:
      if (lookahead == 'o') ADVANCE(659);
      END_STATE();
    case 512:
      if (lookahead == 'o') ADVANCE(730);
      END_STATE();
    case 513:
      if (lookahead == 'o') ADVANCE(729);
      END_STATE();
    case 514:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 515:
      if (lookahead == 'o') ADVANCE(496);
      END_STATE();
    case 516:
      if (lookahead == 'o') ADVANCE(444);
      END_STATE();
    case 517:
      if (lookahead == 'o') ADVANCE(584);
      END_STATE();
    case 518:
      if (lookahead == 'o') ADVANCE(449);
      END_STATE();
    case 519:
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 520:
      if (lookahead == 'o') ADVANCE(737);
      END_STATE();
    case 521:
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 522:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 523:
      if (lookahead == 'o') ADVANCE(450);
      END_STATE();
    case 524:
      if (lookahead == 'o') ADVANCE(451);
      END_STATE();
    case 525:
      if (lookahead == 'o') ADVANCE(359);
      END_STATE();
    case 526:
      if (lookahead == 'o') ADVANCE(587);
      END_STATE();
    case 527:
      if (lookahead == 'o') ADVANCE(601);
      END_STATE();
    case 528:
      if (lookahead == 'o') ADVANCE(415);
      END_STATE();
    case 529:
      if (lookahead == 'o') ADVANCE(503);
      END_STATE();
    case 530:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 531:
      if (lookahead == 'o') ADVANCE(417);
      END_STATE();
    case 532:
      if (lookahead == 'o') ADVANCE(418);
      END_STATE();
    case 533:
      if (lookahead == 'o') ADVANCE(485);
      END_STATE();
    case 534:
      if (lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 535:
      if (lookahead == 'o') ADVANCE(419);
      END_STATE();
    case 536:
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 537:
      if (lookahead == 'o') ADVANCE(473);
      END_STATE();
    case 538:
      if (lookahead == 'o') ADVANCE(616);
      if (lookahead == 'r') ADVANCE(275);
      END_STATE();
    case 539:
      if (lookahead == 'o') ADVANCE(731);
      END_STATE();
    case 540:
      if (lookahead == 'o') ADVANCE(204);
      END_STATE();
    case 541:
      if (lookahead == 'o') ADVANCE(732);
      END_STATE();
    case 542:
      if (lookahead == 'o') ADVANCE(531);
      END_STATE();
    case 543:
      if (lookahead == 'o') ADVANCE(679);
      END_STATE();
    case 544:
      if (lookahead == 'o') ADVANCE(557);
      END_STATE();
    case 545:
      if (lookahead == 'o') ADVANCE(593);
      END_STATE();
    case 546:
      if (lookahead == 'o') ADVANCE(360);
      if (lookahead == 'r') ADVANCE(282);
      END_STATE();
    case 547:
      if (lookahead == 'o') ADVANCE(361);
      END_STATE();
    case 548:
      if (lookahead == 'p') ADVANCE(1477);
      END_STATE();
    case 549:
      if (lookahead == 'p') ADVANCE(1467);
      END_STATE();
    case 550:
      if (lookahead == 'p') ADVANCE(72);
      END_STATE();
    case 551:
      if (lookahead == 'p') ADVANCE(36);
      END_STATE();
    case 552:
      if (lookahead == 'p') ADVANCE(424);
      END_STATE();
    case 553:
      if (lookahead == 'p') ADVANCE(271);
      END_STATE();
    case 554:
      if (lookahead == 'p') ADVANCE(542);
      END_STATE();
    case 555:
      if (lookahead == 'p') ADVANCE(250);
      END_STATE();
    case 556:
      if (lookahead == 'p') ADVANCE(668);
      END_STATE();
    case 557:
      if (lookahead == 'p') ADVANCE(258);
      END_STATE();
    case 558:
      if (lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 559:
      if (lookahead == 'p') ADVANCE(527);
      END_STATE();
    case 560:
      if (lookahead == 'p') ADVANCE(143);
      END_STATE();
    case 561:
      if (lookahead == 'p') ADVANCE(132);
      END_STATE();
    case 562:
      if (lookahead == 'p') ADVANCE(67);
      END_STATE();
    case 563:
      if (lookahead == 'p') ADVANCE(146);
      END_STATE();
    case 564:
      if (lookahead == 'q') ADVANCE(1380);
      END_STATE();
    case 565:
      if (lookahead == 'q') ADVANCE(87);
      END_STATE();
    case 566:
      if (lookahead == 'q') ADVANCE(1391);
      END_STATE();
    case 567:
      if (lookahead == 'q') ADVANCE(1400);
      END_STATE();
    case 568:
      if (lookahead == 'q') ADVANCE(84);
      END_STATE();
    case 569:
      if (lookahead == 'r') ADVANCE(324);
      END_STATE();
    case 570:
      if (lookahead == 'r') ADVANCE(1362);
      END_STATE();
    case 571:
      if (lookahead == 'r') ADVANCE(1461);
      END_STATE();
    case 572:
      if (lookahead == 'r') ADVANCE(1344);
      END_STATE();
    case 573:
      if (lookahead == 'r') ADVANCE(1307);
      END_STATE();
    case 574:
      if (lookahead == 'r') ADVANCE(1309);
      END_STATE();
    case 575:
      if (lookahead == 'r') ADVANCE(367);
      END_STATE();
    case 576:
      if (lookahead == 'r') ADVANCE(736);
      END_STATE();
    case 577:
      if (lookahead == 'r') ADVANCE(713);
      END_STATE();
    case 578:
      if (lookahead == 'r') ADVANCE(738);
      END_STATE();
    case 579:
      if (lookahead == 'r') ADVANCE(420);
      END_STATE();
    case 580:
      if (lookahead == 'r') ADVANCE(403);
      END_STATE();
    case 581:
      if (lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 582:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 583:
      if (lookahead == 'r') ADVANCE(502);
      END_STATE();
    case 584:
      if (lookahead == 'r') ADVANCE(248);
      END_STATE();
    case 585:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 586:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 587:
      if (lookahead == 'r') ADVANCE(611);
      END_STATE();
    case 588:
      if (lookahead == 'r') ADVANCE(520);
      END_STATE();
    case 589:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 590:
      if (lookahead == 'r') ADVANCE(299);
      END_STATE();
    case 591:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 592:
      if (lookahead == 'r') ADVANCE(251);
      END_STATE();
    case 593:
      if (lookahead == 'r') ADVANCE(253);
      END_STATE();
    case 594:
      if (lookahead == 'r') ADVANCE(327);
      END_STATE();
    case 595:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 596:
      if (lookahead == 'r') ADVANCE(373);
      END_STATE();
    case 597:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 598:
      if (lookahead == 'r') ADVANCE(410);
      END_STATE();
    case 599:
      if (lookahead == 'r') ADVANCE(298);
      END_STATE();
    case 600:
      if (lookahead == 'r') ADVANCE(305);
      END_STATE();
    case 601:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 602:
      if (lookahead == 'r') ADVANCE(309);
      END_STATE();
    case 603:
      if (lookahead == 'r') ADVANCE(328);
      END_STATE();
    case 604:
      if (lookahead == 'r') ADVANCE(329);
      END_STATE();
    case 605:
      if (lookahead == 'r') ADVANCE(331);
      END_STATE();
    case 606:
      if (lookahead == 'r') ADVANCE(323);
      END_STATE();
    case 607:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 608:
      if (lookahead == 's') ADVANCE(739);
      END_STATE();
    case 609:
      if (lookahead == 's') ADVANCE(1300);
      END_STATE();
    case 610:
      if (lookahead == 's') ADVANCE(1497);
      END_STATE();
    case 611:
      if (lookahead == 's') ADVANCE(1298);
      END_STATE();
    case 612:
      if (lookahead == 's') ADVANCE(1412);
      END_STATE();
    case 613:
      if (lookahead == 's') ADVANCE(1333);
      END_STATE();
    case 614:
      if (lookahead == 's') ADVANCE(1426);
      END_STATE();
    case 615:
      if (lookahead == 's') ADVANCE(674);
      END_STATE();
    case 616:
      if (lookahead == 's') ADVANCE(707);
      END_STATE();
    case 617:
      if (lookahead == 's') ADVANCE(289);
      END_STATE();
    case 618:
      if (lookahead == 's') ADVANCE(696);
      END_STATE();
    case 619:
      if (lookahead == 's') ADVANCE(696);
      if (lookahead == 't') ADVANCE(595);
      END_STATE();
    case 620:
      if (lookahead == 's') ADVANCE(406);
      END_STATE();
    case 621:
      if (lookahead == 's') ADVANCE(294);
      END_STATE();
    case 622:
      if (lookahead == 's') ADVANCE(645);
      END_STATE();
    case 623:
      if (lookahead == 's') ADVANCE(407);
      END_STATE();
    case 624:
      if (lookahead == 's') ADVANCE(648);
      END_STATE();
    case 625:
      if (lookahead == 's') ADVANCE(695);
      END_STATE();
    case 626:
      if (lookahead == 's') ADVANCE(377);
      END_STATE();
    case 627:
      if (lookahead == 's') ADVANCE(630);
      END_STATE();
    case 628:
      if (lookahead == 's') ADVANCE(247);
      END_STATE();
    case 629:
      if (lookahead == 's') ADVANCE(459);
      END_STATE();
    case 630:
      if (lookahead == 's') ADVANCE(526);
      END_STATE();
    case 631:
      if (lookahead == 's') ADVANCE(301);
      END_STATE();
    case 632:
      if (lookahead == 's') ADVANCE(190);
      END_STATE();
    case 633:
      if (lookahead == 's') ADVANCE(664);
      END_STATE();
    case 634:
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 635:
      if (lookahead == 's') ADVANCE(612);
      END_STATE();
    case 636:
      if (lookahead == 's') ADVANCE(682);
      END_STATE();
    case 637:
      if (lookahead == 's') ADVANCE(614);
      END_STATE();
    case 638:
      if (lookahead == 's') ADVANCE(683);
      END_STATE();
    case 639:
      if (lookahead == 's') ADVANCE(252);
      END_STATE();
    case 640:
      if (lookahead == 's') ADVANCE(700);
      END_STATE();
    case 641:
      if (lookahead == 's') ADVANCE(256);
      END_STATE();
    case 642:
      if (lookahead == 's') ADVANCE(318);
      END_STATE();
    case 643:
      if (lookahead == 's') ADVANCE(319);
      END_STATE();
    case 644:
      if (lookahead == 's') ADVANCE(320);
      END_STATE();
    case 645:
      if (lookahead == 's') ADVANCE(530);
      END_STATE();
    case 646:
      if (lookahead == 's') ADVANCE(385);
      END_STATE();
    case 647:
      if (lookahead == 's') ADVANCE(698);
      END_STATE();
    case 648:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 649:
      if (lookahead == 's') ADVANCE(392);
      END_STATE();
    case 650:
      if (lookahead == 's') ADVANCE(689);
      END_STATE();
    case 651:
      if (lookahead == 's') ADVANCE(692);
      END_STATE();
    case 652:
      if (lookahead == 's') ADVANCE(697);
      END_STATE();
    case 653:
      if (lookahead == 's') ADVANCE(701);
      END_STATE();
    case 654:
      if (lookahead == 's') ADVANCE(702);
      END_STATE();
    case 655:
      if (lookahead == 's') ADVANCE(741);
      END_STATE();
    case 656:
      if (lookahead == 's') ADVANCE(563);
      END_STATE();
    case 657:
      if (lookahead == 's') ADVANCE(742);
      END_STATE();
    case 658:
      if (lookahead == 's') ADVANCE(706);
      END_STATE();
    case 659:
      if (lookahead == 't') ADVANCE(1434);
      END_STATE();
    case 660:
      if (lookahead == 't') ADVANCE(1489);
      END_STATE();
    case 661:
      if (lookahead == 't') ADVANCE(1501);
      END_STATE();
    case 662:
      if (lookahead == 't') ADVANCE(1350);
      END_STATE();
    case 663:
      if (lookahead == 't') ADVANCE(1408);
      END_STATE();
    case 664:
      if (lookahead == 't') ADVANCE(1446);
      END_STATE();
    case 665:
      if (lookahead == 't') ADVANCE(1479);
      END_STATE();
    case 666:
      if (lookahead == 't') ADVANCE(1448);
      END_STATE();
    case 667:
      if (lookahead == 't') ADVANCE(1439);
      END_STATE();
    case 668:
      if (lookahead == 't') ADVANCE(1491);
      END_STATE();
    case 669:
      if (lookahead == 't') ADVANCE(1352);
      END_STATE();
    case 670:
      if (lookahead == 't') ADVANCE(1356);
      END_STATE();
    case 671:
      if (lookahead == 't') ADVANCE(1358);
      END_STATE();
    case 672:
      if (lookahead == 't') ADVANCE(1495);
      END_STATE();
    case 673:
      if (lookahead == 't') ADVANCE(284);
      END_STATE();
    case 674:
      if (lookahead == 't') ADVANCE(523);
      END_STATE();
    case 675:
      if (lookahead == 't') ADVANCE(545);
      END_STATE();
    case 676:
      if (lookahead == 't') ADVANCE(391);
      END_STATE();
    case 677:
      if (lookahead == 't') ADVANCE(714);
      END_STATE();
    case 678:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 679:
      if (lookahead == 't') ADVANCE(529);
      END_STATE();
    case 680:
      if (lookahead == 't') ADVANCE(576);
      END_STATE();
    case 681:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 682:
      if (lookahead == 't') ADVANCE(586);
      END_STATE();
    case 683:
      if (lookahead == 't') ADVANCE(588);
      END_STATE();
    case 684:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 685:
      if (lookahead == 't') ADVANCE(578);
      END_STATE();
    case 686:
      if (lookahead == 't') ADVANCE(283);
      END_STATE();
    case 687:
      if (lookahead == 't') ADVANCE(322);
      END_STATE();
    case 688:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 689:
      if (lookahead == 't') ADVANCE(295);
      END_STATE();
    case 690:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 691:
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 692:
      if (lookahead == 't') ADVANCE(312);
      END_STATE();
    case 693:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 694:
      if (lookahead == 't') ADVANCE(398);
      END_STATE();
    case 695:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 696:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 697:
      if (lookahead == 't') ADVANCE(524);
      END_STATE();
    case 698:
      if (lookahead == 't') ADVANCE(589);
      END_STATE();
    case 699:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 700:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 701:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 702:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 703:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 704:
      if (lookahead == 't') ADVANCE(394);
      END_STATE();
    case 705:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 706:
      if (lookahead == 't') ADVANCE(607);
      END_STATE();
    case 707:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 708:
      if (lookahead == 'u') ADVANCE(615);
      END_STATE();
    case 709:
      if (lookahead == 'u') ADVANCE(455);
      END_STATE();
    case 710:
      if (lookahead == 'u') ADVANCE(158);
      END_STATE();
    case 711:
      if (lookahead == 'u') ADVANCE(364);
      END_STATE();
    case 712:
      if (lookahead == 'u') ADVANCE(347);
      END_STATE();
    case 713:
      if (lookahead == 'u') ADVANCE(246);
      END_STATE();
    case 714:
      if (lookahead == 'u') ADVANCE(549);
      END_STATE();
    case 715:
      if (lookahead == 'u') ADVANCE(663);
      END_STATE();
    case 716:
      if (lookahead == 'u') ADVANCE(260);
      END_STATE();
    case 717:
      if (lookahead == 'u') ADVANCE(486);
      END_STATE();
    case 718:
      if (lookahead == 'u') ADVANCE(463);
      END_STATE();
    case 719:
      if (lookahead == 'u') ADVANCE(625);
      END_STATE();
    case 720:
      if (lookahead == 'u') ADVANCE(368);
      END_STATE();
    case 721:
      if (lookahead == 'u') ADVANCE(371);
      END_STATE();
    case 722:
      if (lookahead == 'u') ADVANCE(641);
      END_STATE();
    case 723:
      if (lookahead == 'v') ADVANCE(454);
      END_STATE();
    case 724:
      if (lookahead == 'v') ADVANCE(122);
      END_STATE();
    case 725:
      if (lookahead == 'v') ADVANCE(245);
      END_STATE();
    case 726:
      if (lookahead == 'v') ADVANCE(261);
      END_STATE();
    case 727:
      if (lookahead == 'v') ADVANCE(133);
      END_STATE();
    case 728:
      if (lookahead == 'w') ADVANCE(1487);
      if (lookahead == 'z') ADVANCE(1475);
      END_STATE();
    case 729:
      if (lookahead == 'w') ADVANCE(83);
      END_STATE();
    case 730:
      if (lookahead == 'w') ADVANCE(484);
      END_STATE();
    case 731:
      if (lookahead == 'w') ADVANCE(490);
      END_STATE();
    case 732:
      if (lookahead == 'w') ADVANCE(492);
      END_STATE();
    case 733:
      if (lookahead == 'x') ADVANCE(745);
      END_STATE();
    case 734:
      if (lookahead == 'x') ADVANCE(1410);
      END_STATE();
    case 735:
      if (lookahead == 'x') ADVANCE(196);
      END_STATE();
    case 736:
      if (lookahead == 'y') ADVANCE(1430);
      END_STATE();
    case 737:
      if (lookahead == 'y') ADVANCE(1469);
      END_STATE();
    case 738:
      if (lookahead == 'y') ADVANCE(1496);
      END_STATE();
    case 739:
      if (lookahead == 'y') ADVANCE(452);
      END_STATE();
    case 740:
      if (lookahead == 'y') ADVANCE(40);
      END_STATE();
    case 741:
      if (lookahead == 'y') ADVANCE(464);
      END_STATE();
    case 742:
      if (lookahead == 'y') ADVANCE(465);
      END_STATE();
    case 743:
      if (lookahead == 'z') ADVANCE(262);
      END_STATE();
    case 744:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1219);
      END_STATE();
    case 745:
      if (lookahead == 'H' ||
          ('K' <= lookahead && lookahead <= 'M') ||
          lookahead == 'R') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1220);
      END_STATE();
    case 746:
      if (lookahead == 'H' ||
          ('K' <= lookahead && lookahead <= 'M') ||
          lookahead == 'R') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1217);
      END_STATE();
    case 747:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1216);
      END_STATE();
    case 748:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1214);
      END_STATE();
    case 749:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 750:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1219);
      END_STATE();
    case 751:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1220);
      END_STATE();
    case 752:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1217);
      END_STATE();
    case 753:
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1263);
      END_STATE();
    case 754:
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1258);
      END_STATE();
    case 755:
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1209);
      END_STATE();
    case 756:
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1208);
      END_STATE();
    case 757:
      if (eof) ADVANCE(761);
      if (lookahead == '\n') ADVANCE(768);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(1318);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '$') ADVANCE(753);
      if (lookahead == '%') ADVANCE(18);
      if (lookahead == '&') ADVANCE(21);
      if (lookahead == '(') ADVANCE(763);
      if (lookahead == ')') ADVANCE(765);
      if (lookahead == '*') ADVANCE(1326);
      if (lookahead == '+') ADVANCE(1428);
      if (lookahead == ',') ADVANCE(764);
      if (lookahead == '-') ADVANCE(1429);
      if (lookahead == '.') ADVANCE(1329);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '0') ADVANCE(733);
      if (lookahead == ':') ADVANCE(767);
      if (lookahead == ';') ADVANCE(769);
      if (lookahead == '<') ADVANCE(1314);
      if (lookahead == '=') ADVANCE(1302);
      if (lookahead == '>') ADVANCE(1316);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == 'C') ADVANCE(708);
      if (lookahead == '[') ADVANCE(1327);
      if (lookahead == ']') ADVANCE(1328);
      if (lookahead == '_') ADVANCE(1330);
      if (lookahead == '`') ADVANCE(1427);
      if (lookahead == 'a') ADVANCE(174);
      if (lookahead == 'b') ADVANCE(101);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'd') ADVANCE(234);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == 'f') ADVANCE(103);
      if (lookahead == 'g') ADVANCE(511);
      if (lookahead == 'h') ADVANCE(110);
      if (lookahead == 'i') ADVANCE(447);
      if (lookahead == 'j') ADVANCE(709);
      if (lookahead == 'k') ADVANCE(388);
      if (lookahead == 'l') ADVANCE(109);
      if (lookahead == 'm') ADVANCE(182);
      if (lookahead == 'n') ADVANCE(235);
      if (lookahead == 'o') ADVANCE(272);
      if (lookahead == 'p') ADVANCE(1336);
      if (lookahead == 'r') ADVANCE(236);
      if (lookahead == 's') ADVANCE(1335);
      if (lookahead == 't') ADVANCE(105);
      if (lookahead == 'u') ADVANCE(64);
      if (lookahead == 'v') ADVANCE(516);
      if (lookahead == 'w') ADVANCE(390);
      if (lookahead == 'x') ADVANCE(1339);
      if (lookahead == '{') ADVANCE(1296);
      if (lookahead == '|') ADVANCE(1325);
      if (lookahead == '}') ADVANCE(1297);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(757)
      END_STATE();
    case 758:
      if (eof) ADVANCE(761);
      if (lookahead == '\n') ADVANCE(768);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '$') ADVANCE(753);
      if (lookahead == '%') ADVANCE(754);
      if (lookahead == '(') ADVANCE(763);
      if (lookahead == ')') ADVANCE(765);
      if (lookahead == ',') ADVANCE(764);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(766);
      if (lookahead == ';') ADVANCE(769);
      if (lookahead == '=') ADVANCE(1302);
      if (lookahead == '{') ADVANCE(1296);
      if (lookahead == '|') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(758)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 759:
      if (eof) ADVANCE(761);
      if (lookahead == '\n') ADVANCE(768);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(753);
      if (lookahead == '%') ADVANCE(754);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ';') ADVANCE(769);
      if (lookahead == '_') ADVANCE(1331);
      if (lookahead == 'a') ADVANCE(962);
      if (lookahead == 'c') ADVANCE(1065);
      if (lookahead == 'd') ADVANCE(909);
      if (lookahead == 'e') ADVANCE(811);
      if (lookahead == 'f') ADVANCE(1105);
      if (lookahead == 'i') ADVANCE(1026);
      if (lookahead == 'k') ADVANCE(985);
      if (lookahead == 'l') ADVANCE(996);
      if (lookahead == 'n') ADVANCE(993);
      if (lookahead == 'r') ADVANCE(908);
      if (lookahead == 's') ADVANCE(1183);
      if (lookahead == 'u') ADVANCE(1052);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(759)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 760:
      if (eof) ADVANCE(761);
      if (lookahead == '\n') ADVANCE(768);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(753);
      if (lookahead == '%') ADVANCE(754);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ';') ADVANCE(769);
      if (lookahead == '_') ADVANCE(1331);
      if (lookahead == 'a') ADVANCE(962);
      if (lookahead == 'c') ADVANCE(1065);
      if (lookahead == 'd') ADVANCE(909);
      if (lookahead == 'e') ADVANCE(811);
      if (lookahead == 'f') ADVANCE(1105);
      if (lookahead == 'i') ADVANCE(1026);
      if (lookahead == 'k') ADVANCE(985);
      if (lookahead == 'n') ADVANCE(993);
      if (lookahead == 'r') ADVANCE(908);
      if (lookahead == 'u') ADVANCE(1052);
      if (lookahead == '}') ADVANCE(1297);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(760)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_body_token1);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(1313);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(769);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_multiline_comment);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(1000);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(963);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(891);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(987);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(829);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(1044);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(871);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(1035);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(1116);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(1186);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(999);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(1142);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(1001);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(1505);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(787);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(788);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(791);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(793);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(804);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(789);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(1507);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(784);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(1509);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(833);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(915);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1194);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(957);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1124);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1073);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1098);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(830);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(887);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1121);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(959);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(873);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1140);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(877);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1141);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1075);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1094);
      if (lookahead == 's') ADVANCE(872);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1094);
      if (lookahead == 'x') ADVANCE(838);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1031);
      if (lookahead == 'h') ADVANCE(1185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1264);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1355);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1361);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1013);
      if (lookahead == 'e') ADVANCE(818);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1013);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1093);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1079);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(879);
      if (lookahead == 'b') ADVANCE(1180);
      if (lookahead == 'f') ADVANCE(1452);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(879);
      if (lookahead == 'b') ADVANCE(1187);
      if (lookahead == 'f') ADVANCE(1452);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(879);
      if (lookahead == 'b') ADVANCE(1187);
      if (lookahead == 'f') ADVANCE(1454);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1082);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1145);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1032);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1115);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1163);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(886);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(980);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1024);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1119);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1009);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1015);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1118);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(869);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(803);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1095);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1040);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(867);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1159);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1192);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1034);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1126);
      if (lookahead == 'n') ADVANCE(824);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1126);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(868);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1166);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1167);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1169);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(858);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1107);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(809);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1066);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(924);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(932);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(938);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(853);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1019);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1067);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1022);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(797);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1005);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1415);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1484);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(992);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(960);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1076);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(778);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1152);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1153);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(949);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(927);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1018);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(822);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(964);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(875);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(946);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(839);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(965);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1002);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1456);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1458);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1377);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1379);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1349);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(919);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1056);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(926);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(930);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(903);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(934);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(947);
      if (lookahead == 's') ADVANCE(941);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1106);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(819);
      if (lookahead == 'o') ADVANCE(1179);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(982);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(975);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(774);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1503);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1365);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1346);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1464);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1466);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1343);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1198);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1371);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1369);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1367);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1373);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(821);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1200);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1092);
      if (lookahead == 'p') ADVANCE(1100);
      if (lookahead == 'r') ADVANCE(986);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1092);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1028);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1061);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(974);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(796);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(880);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(983);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(951);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1123);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1087);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(800);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(881);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1099);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1146);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(961);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1084);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1157);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(882);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(952);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(883);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1088);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(773);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(954);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1089);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1090);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1149);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1091);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1150);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1151);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1161);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(843);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1171);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1033);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(995);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1129);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1132);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(820);
      if (lookahead == 'o') ADVANCE(1179);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(807);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(1499);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(1405);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(1450);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(1474);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(1407);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(956);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(1122);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(1086);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(968);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(1080);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(813);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(801);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(1039);
      if (lookahead == 'r') ADVANCE(865);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(1020);
      if (lookahead == 'i') ADVANCE(1050);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(850);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(814);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(1085);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(1133);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(1021);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(1134);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(1135);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(967);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(969);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(970);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(794);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(997);
      if (lookahead == 'l') ADVANCE(799);
      if (lookahead == 'm') ADVANCE(913);
      if (lookahead == 'n') ADVANCE(824);
      if (lookahead == 's') ADVANCE(1158);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(771);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1054);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(780);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(928);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1111);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(943);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(826);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(998);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1191);
      if (lookahead == 'l') ADVANCE(1190);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1016);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1042);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1051);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(863);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(861);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(977);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1063);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1148);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1045);
      if (lookahead == 'n') ADVANCE(837);
      if (lookahead == 'o') ADVANCE(966);
      if (lookahead == 's') ADVANCE(1195);
      if (lookahead == 'u') ADVANCE(1196);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1043);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1046);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1193);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1137);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1139);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1050);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1053);
      if (lookahead == 'l') ADVANCE(1071);
      if (lookahead == 'u') ADVANCE(1131);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1055);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'j') ADVANCE(1189);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(1403);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(1341);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(827);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(936);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1058);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1202);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1460);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1304);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1306);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1057);
      if (lookahead == 'p') ADVANCE(785);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(950);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(988);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1184);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1017);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(917);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1059);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(897);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(828);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(944);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(901);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1064);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1023);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1081);
      if (lookahead == 'n') ADVANCE(1144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1264);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1081);
      if (lookahead == 'n') ADVANCE(1170);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(795);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(852);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(802);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(851);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(916);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(848);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(825);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(933);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(836);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(854);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(857);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1312);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1482);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1472);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(884);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1136);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(885);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1188);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(953);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1172);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(931);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(831);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(889);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1125);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1128);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(808);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1143);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1197);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(823);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(860);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(855);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1201);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1182);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1027);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1038);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(866);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1047);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1010);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1011);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(862);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1102);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1117);
      if (lookahead == 'p') ADVANCE(859);
      if (lookahead == 'r') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1264);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(876);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1103);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(971);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(972);
      if (lookahead == 'r') ADVANCE(918);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(973);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1478);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1468);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1264);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(775);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(792);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1014);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(898);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(834);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1154);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(910);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1363);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1462);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1345);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1308);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1310);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1049);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(979);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1008);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1006);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(779);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(776);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(835);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(806);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(923);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1060);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1113);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(899);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(929);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(841);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(920);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(981);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(844);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(782);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1413);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1334);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1301);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1299);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1155);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1003);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1203);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1177);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1004);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1083);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1156);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(990);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(925);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1110);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(840);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1160);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1138);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1069);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1162);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1127);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1173);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(900);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1165);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(937);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(939);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(940);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(989);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1164);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1068);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1168);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1174);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1175);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1204);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1176);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(911);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1500);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1351);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1409);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1447);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1353);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1357);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1359);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1490);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1480);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1492);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1062);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(805);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(772);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1072);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(991);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1096);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1181);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1097);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(921);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1101);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(905);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(906);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(935);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(907);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(912);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(781);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1108);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(845);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(846);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(847);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1109);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(783);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1114);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(856);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(976);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1077);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1147);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(874);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(902);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(958);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1131);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(978);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1036);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1120);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(1029);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(914);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(904);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(832);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(1488);
      if (lookahead == 'z') ADVANCE(1476);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1207);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(1486);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(798);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1411);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(838);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(870);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1470);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(777);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1030);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1037);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1264);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1206);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(sym_bb_ref);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1208);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(sym_stack_object);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1209);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(sym_constant_pool_index);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1210);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(sym_jump_table_index);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1211);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1218);
      if (lookahead == 'x') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1214);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1214);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'x') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1216);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1216);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1217);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(744);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1218);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1219);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1220);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == '"') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1257);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1258);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == '"') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1257);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1258);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == '-') ADVANCE(1231);
      if (lookahead == '.') ADVANCE(1221);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1258);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == '-') ADVANCE(1250);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1258);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == '-') ADVANCE(1254);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1258);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == '.') ADVANCE(1210);
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1258);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == '.') ADVANCE(1211);
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1258);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == '.') ADVANCE(1222);
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1258);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'a') ADVANCE(1234);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1258);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'a') ADVANCE(1232);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1258);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'b') ADVANCE(1242);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1258);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'b') ADVANCE(1243);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1258);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'b') ADVANCE(1262);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1258);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'c') ADVANCE(1240);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1258);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'c') ADVANCE(1241);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1258);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'd') ADVANCE(1224);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1258);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'e') ADVANCE(1236);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1258);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'e') ADVANCE(1227);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1258);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'i') ADVANCE(1256);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1258);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'k') ADVANCE(1261);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1258);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'k') ADVANCE(1228);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1258);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'l') ADVANCE(1247);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1258);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'l') ADVANCE(1238);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1258);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'm') ADVANCE(1248);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1258);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'n') ADVANCE(1251);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1258);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'o') ADVANCE(1245);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1258);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'o') ADVANCE(1235);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1258);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'p') ADVANCE(1225);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1258);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'r') ADVANCE(1223);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1258);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 's') ADVANCE(1252);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1258);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 's') ADVANCE(1253);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1258);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 't') ADVANCE(1229);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1258);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 't') ADVANCE(1226);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1258);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 't') ADVANCE(1230);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1258);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'u') ADVANCE(1244);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1258);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'x') ADVANCE(1237);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1258);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(sym_var);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1257);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1258);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1258);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1209);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1208);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1259);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(755);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1260);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(756);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(sym_physical_register);
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1263);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(sym_immediate_type);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1264);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(sym_ir_block);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(sym_ir_block);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1266);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(sym_ir_block);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1267);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(sym_external_symbol);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(sym_external_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1269);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(sym_external_symbol);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(sym_global_var);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(sym_global_var);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1272);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(sym_global_var);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(sym_ir_local_var);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(sym_ir_local_var);
      if (lookahead == '"') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1289);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(sym_ir_local_var);
      if (lookahead == '-') ADVANCE(1285);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(sym_ir_local_var);
      if (lookahead == '.') ADVANCE(1275);
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(sym_ir_local_var);
      if (lookahead == 'a') ADVANCE(1279);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(sym_ir_local_var);
      if (lookahead == 'c') ADVANCE(1283);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(sym_ir_local_var);
      if (lookahead == 'd') ADVANCE(1276);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(sym_ir_local_var);
      if (lookahead == 'e') ADVANCE(1280);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(sym_ir_local_var);
      if (lookahead == 'i') ADVANCE(1287);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(sym_ir_local_var);
      if (lookahead == 'k') ADVANCE(1292);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(sym_ir_local_var);
      if (lookahead == 'r') ADVANCE(1277);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(sym_ir_local_var);
      if (lookahead == 's') ADVANCE(1286);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(sym_ir_local_var);
      if (lookahead == 't') ADVANCE(1278);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(sym_ir_local_var);
      if (lookahead == 'x') ADVANCE(1281);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(sym_ir_local_var);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1288);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(sym_ir_local_var);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1289);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(sym_ir_local_var);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1209);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(sym_ir_local_var);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(sym_ir_local_var);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1290);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(755);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(sym_metadata_ref);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(sym_metadata_ref);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1294);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(sym_metadata_ref);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1295);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(anon_sym_successors);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(anon_sym_successors);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(anon_sym_liveins);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(anon_sym_liveins);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(anon_sym_pre_DASHinstr_DASHsymbol);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(anon_sym_pre_DASHinstr_DASHsymbol);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(anon_sym_post_DASHinstr_DASHsymbol);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(anon_sym_post_DASHinstr_DASHsymbol);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(anon_sym_heap_DASHalloc_DASHmarker);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(anon_sym_heap_DASHalloc_DASHmarker);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(anon_sym_debug_DASHinstr_DASHnumber);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(anon_sym_debug_DASHinstr_DASHnumber);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(anon_sym_debug_DASHlocation);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(anon_sym_debug_DASHlocation);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(anon_sym_mcsymbol);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '"') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1294);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1295);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1324);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(aux_sym_md_value_token1);
      if (lookahead == 'l') ADVANCE(1320);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1324);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(aux_sym_md_value_token1);
      if (lookahead == 'l') ADVANCE(1321);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1324);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(aux_sym_md_value_token1);
      if (lookahead == 'u') ADVANCE(1322);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1324);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(aux_sym_md_value_token1);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1324);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(anon_sym_tied_DASHdef);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(anon_sym_target_DASHflags);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(anon_sym_target_DASHflags);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(sym_primitive_type);
      if (lookahead == '0') ADVANCE(1264);
      if (lookahead == 'a') ADVANCE(456);
      if (lookahead == 'e') ADVANCE(568);
      if (lookahead == 'g') ADVANCE(240);
      if (lookahead == 'h') ADVANCE(712);
      if (lookahead == 'l') ADVANCE(241);
      if (lookahead == 't') ADVANCE(120);
      if (lookahead == 'u') ADVANCE(186);
      if (lookahead == 'y') ADVANCE(482);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1264);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(sym_primitive_type);
      if (lookahead == 'o') ADVANCE(616);
      if (lookahead == 'p') ADVANCE(175);
      if (lookahead == 'r') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1264);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(sym_primitive_type);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1337);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == '8') ADVANCE(70);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(anon_sym_CustomRegMask);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(anon_sym_CustomRegMask);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(anon_sym_same_value);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(anon_sym_same_value);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(anon_sym_def_cfa_register);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(anon_sym_def_cfa_register);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(anon_sym_restore);
      if (lookahead == '_') ADVANCE(1130);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(anon_sym_restore);
      if (lookahead == '_') ADVANCE(640);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(anon_sym_undefined);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(anon_sym_undefined);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(anon_sym_offset);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(anon_sym_offset);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(anon_sym_rel_offset);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(anon_sym_rel_offset);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(anon_sym_def_cfa);
      if (lookahead == '_') ADVANCE(546);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(anon_sym_def_cfa);
      if (lookahead == '_') ADVANCE(1074);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(anon_sym_def_cfa_offset);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(anon_sym_def_cfa_offset);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(anon_sym_adjust_cfa_offset);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(anon_sym_adjust_cfa_offset);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(anon_sym_llvm_def_aspace_cfa);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(anon_sym_llvm_def_aspace_cfa);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(anon_sym_register);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(anon_sym_register);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(anon_sym_escape);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(anon_sym_escape);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(anon_sym_remember_state);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(anon_sym_remember_state);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(anon_sym_restore_state);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(anon_sym_restore_state);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(anon_sym_window_save);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(anon_sym_window_save);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(anon_sym_negate_ra_sign_state);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(anon_sym_negate_ra_sign_state);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(anon_sym_intpred);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(anon_sym_intpred);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(anon_sym_floatpred);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(anon_sym_floatpred);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(anon_sym_eq);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(anon_sym_ne);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(anon_sym_ne);
      if (lookahead == 'g') ADVANCE(121);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(anon_sym_sgt);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(anon_sym_sge);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(anon_sym_slt);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(anon_sym_sle);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(anon_sym_ugt);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(anon_sym_uge);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(anon_sym_ult);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(anon_sym_ule);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(anon_sym_oeq);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(anon_sym_ogt);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(anon_sym_oge);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(anon_sym_olt);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(anon_sym_ole);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(anon_sym_one);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(anon_sym_ord);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(anon_sym_uno);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(anon_sym_uno);
      if (lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(anon_sym_ueq);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(anon_sym_une);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(anon_sym_shufflemask);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(anon_sym_shufflemask);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(anon_sym_undef);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(anon_sym_undef);
      if (lookahead == 'i') ADVANCE(1048);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(anon_sym_undef);
      if (lookahead == 'i') ADVANCE(505);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(anon_sym_undef);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(anon_sym_liveout);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(anon_sym_liveout);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(anon_sym_target_DASHindex);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(anon_sym_target_DASHindex);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(anon_sym_blockaddress);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(anon_sym_blockaddress);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(anon_sym_intrinsic);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(anon_sym_intrinsic);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(anon_sym_store);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(anon_sym_unknown_DASHsize);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead == 'e') ADVANCE(1396);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(anon_sym_into);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(anon_sym_basealign);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(anon_sym_addrspace);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(anon_sym_unknown_DASHaddress);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(anon_sym_call_DASHentry);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(anon_sym_custom);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(anon_sym_constant_DASHpool);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(anon_sym_stack);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(anon_sym_got);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(anon_sym_jump_DASHtable);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(anon_sym_volatile);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(anon_sym_non_DASHtemporal);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(anon_sym_dereferenceable);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(anon_sym_invariant);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(anon_sym_syncscope);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(anon_sym_unordered);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(anon_sym_monotonic);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(anon_sym_acquire);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(anon_sym_release);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(anon_sym_acq_rel);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(anon_sym_seq_cst);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(anon_sym_implicit);
      if (lookahead == '-') ADVANCE(888);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(anon_sym_implicit);
      if (lookahead == '-') ADVANCE(226);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(anon_sym_implicit_DASHdef);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(anon_sym_implicit_DASHdef);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == '_') ADVANCE(864);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == '_') ADVANCE(188);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(anon_sym_dead);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(anon_sym_dead);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(anon_sym_killed);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(anon_sym_killed);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(anon_sym_internal);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(anon_sym_internal);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(anon_sym_early_DASHclobber);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(anon_sym_early_DASHclobber);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(anon_sym_debug_DASHuse);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(anon_sym_debug_DASHuse);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(anon_sym_renamable);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(anon_sym_renamable);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(anon_sym_frame_DASHsetup);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(anon_sym_frame_DASHsetup);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(anon_sym_frame_DASHdestroy);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(anon_sym_frame_DASHdestroy);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(anon_sym_nnan);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(anon_sym_nnan);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(anon_sym_ninf);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(anon_sym_ninf);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(anon_sym_nsz);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(anon_sym_nsz);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(anon_sym_arcp);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(anon_sym_arcp);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(anon_sym_contract);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(anon_sym_contract);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(anon_sym_afn);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(anon_sym_afn);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(anon_sym_reassoc);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(anon_sym_reassoc);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(anon_sym_nuw);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(anon_sym_nuw);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(anon_sym_nsw);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(anon_sym_nsw);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(anon_sym_exact);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(anon_sym_exact);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(anon_sym_nofpexcept);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(anon_sym_nofpexcept);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(anon_sym_address_DASHtaken);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(anon_sym_landing_DASHpad);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(anon_sym_inlineasm_DASHbr_DASHindirect_DASHtarget);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(anon_sym_ehfunclet_DASHentry);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(anon_sym_bbsections);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(anon_sym_half);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(anon_sym_half);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == 'p') ADVANCE(1104);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == 'p') ADVANCE(600);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(anon_sym_double);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(anon_sym_x86_fp80);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(anon_sym_x86_fp80);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(anon_sym_fp128);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(anon_sym_fp128);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(anon_sym_ppc_fp128);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(anon_sym_ppc_fp128);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 758},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 759},
  [21] = {.lex_state = 759},
  [22] = {.lex_state = 759},
  [23] = {.lex_state = 759},
  [24] = {.lex_state = 759},
  [25] = {.lex_state = 759},
  [26] = {.lex_state = 759},
  [27] = {.lex_state = 759},
  [28] = {.lex_state = 760},
  [29] = {.lex_state = 760},
  [30] = {.lex_state = 760},
  [31] = {.lex_state = 760},
  [32] = {.lex_state = 760},
  [33] = {.lex_state = 760},
  [34] = {.lex_state = 760},
  [35] = {.lex_state = 760},
  [36] = {.lex_state = 760},
  [37] = {.lex_state = 760},
  [38] = {.lex_state = 759},
  [39] = {.lex_state = 759},
  [40] = {.lex_state = 759},
  [41] = {.lex_state = 760},
  [42] = {.lex_state = 760},
  [43] = {.lex_state = 760},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 25},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 25},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 25},
  [61] = {.lex_state = 62},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 62},
  [64] = {.lex_state = 62},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 62},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 24},
  [77] = {.lex_state = 62},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 62},
  [82] = {.lex_state = 24},
  [83] = {.lex_state = 24},
  [84] = {.lex_state = 24},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 25},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 25},
  [89] = {.lex_state = 62},
  [90] = {.lex_state = 25},
  [91] = {.lex_state = 25},
  [92] = {.lex_state = 25},
  [93] = {.lex_state = 25},
  [94] = {.lex_state = 25},
  [95] = {.lex_state = 25},
  [96] = {.lex_state = 25},
  [97] = {.lex_state = 25},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 24},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 24},
  [105] = {.lex_state = 24},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 24},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 24},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 3},
  [140] = {.lex_state = 3},
  [141] = {.lex_state = 3},
  [142] = {.lex_state = 3},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 3},
  [146] = {.lex_state = 3},
  [147] = {.lex_state = 3},
  [148] = {.lex_state = 3},
  [149] = {.lex_state = 3},
  [150] = {.lex_state = 3},
  [151] = {.lex_state = 3},
  [152] = {.lex_state = 3},
  [153] = {.lex_state = 3},
  [154] = {.lex_state = 3},
  [155] = {.lex_state = 3},
  [156] = {.lex_state = 3},
  [157] = {.lex_state = 3},
  [158] = {.lex_state = 3},
  [159] = {.lex_state = 3},
  [160] = {.lex_state = 3},
  [161] = {.lex_state = 3},
  [162] = {.lex_state = 3},
  [163] = {.lex_state = 3},
  [164] = {.lex_state = 3},
  [165] = {.lex_state = 3},
  [166] = {.lex_state = 3},
  [167] = {.lex_state = 3},
  [168] = {.lex_state = 3},
  [169] = {.lex_state = 3},
  [170] = {.lex_state = 3},
  [171] = {.lex_state = 24},
  [172] = {.lex_state = 3},
  [173] = {.lex_state = 3},
  [174] = {.lex_state = 4},
  [175] = {.lex_state = 24},
  [176] = {.lex_state = 24},
  [177] = {.lex_state = 24},
  [178] = {.lex_state = 24},
  [179] = {.lex_state = 3},
  [180] = {.lex_state = 24},
  [181] = {.lex_state = 24},
  [182] = {.lex_state = 3},
  [183] = {.lex_state = 3},
  [184] = {.lex_state = 24},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 3},
  [187] = {.lex_state = 3},
  [188] = {.lex_state = 3},
  [189] = {.lex_state = 3},
  [190] = {.lex_state = 3},
  [191] = {.lex_state = 3},
  [192] = {.lex_state = 3},
  [193] = {.lex_state = 3},
  [194] = {.lex_state = 3},
  [195] = {.lex_state = 24},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 3},
  [198] = {.lex_state = 3},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 3},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 3},
  [206] = {.lex_state = 3},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 3},
  [209] = {.lex_state = 3},
  [210] = {.lex_state = 3},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 3},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 3},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 3},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 3},
  [223] = {.lex_state = 3},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 3},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 3},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 3},
  [230] = {.lex_state = 3},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 3},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 3},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 3},
  [237] = {.lex_state = 3},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 24},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 24},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 24},
  [253] = {.lex_state = 24},
  [254] = {.lex_state = 24},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 24},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 24},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 758},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 758},
  [275] = {.lex_state = 758},
  [276] = {.lex_state = 24},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 758},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 758},
  [283] = {.lex_state = 758},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 758},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 758},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 758},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 758},
  [302] = {.lex_state = 758},
  [303] = {.lex_state = 758},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 758},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 758},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 60},
  [317] = {.lex_state = 758},
  [318] = {.lex_state = 758},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 758},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 758},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 758},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 758},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 60},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 29},
  [336] = {.lex_state = 60},
  [337] = {.lex_state = 758},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 758},
  [341] = {.lex_state = 758},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 758},
  [347] = {.lex_state = 758},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 758},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 758},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 758},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 758},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 758},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 758},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 758},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 758},
  [368] = {.lex_state = 758},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 758},
  [372] = {.lex_state = 758},
  [373] = {.lex_state = 758},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 758},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 758},
  [381] = {.lex_state = 758},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 758},
  [386] = {.lex_state = 60},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 61},
  [392] = {.lex_state = 758},
  [393] = {.lex_state = 61},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 60},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 24},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 758},
  [423] = {.lex_state = 758},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 758},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 24},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 758},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 60},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 60},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 758},
  [448] = {.lex_state = 758},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 60},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 758},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 60},
  [459] = {.lex_state = 24},
  [460] = {.lex_state = 24},
  [461] = {.lex_state = 24},
  [462] = {.lex_state = 60},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 758},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 758},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 29},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 758},
  [478] = {.lex_state = 2},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 758},
  [482] = {.lex_state = 758},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 758},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 24},
  [495] = {.lex_state = 24},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 2},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 758},
  [500] = {.lex_state = 758},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 758},
  [503] = {.lex_state = 758},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 24},
  [508] = {.lex_state = 24},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 24},
  [512] = {.lex_state = 758},
  [513] = {.lex_state = 24},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 24},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 758},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 24},
  [521] = {.lex_state = 24},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 758},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 24},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 758},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 2},
  [531] = {.lex_state = 3},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 758},
  [534] = {.lex_state = 6},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 24},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 24},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 758},
  [548] = {.lex_state = 24},
  [549] = {.lex_state = 24},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 24},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 758},
  [555] = {.lex_state = 758},
  [556] = {.lex_state = 24},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 24},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 758},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 758},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 60},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 24},
  [569] = {.lex_state = 758},
  [570] = {.lex_state = 758},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 758},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 24},
  [576] = {.lex_state = 758},
  [577] = {.lex_state = 758},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 24},
  [580] = {.lex_state = 24},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 758},
  [583] = {.lex_state = 24},
  [584] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_stack_object] = ACTIONS(1),
    [sym_constant_pool_index] = ACTIONS(1),
    [sym_jump_table_index] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [aux_sym_float_token2] = ACTIONS(1),
    [sym_var] = ACTIONS(1),
    [sym_physical_register] = ACTIONS(1),
    [sym_immediate_type] = ACTIONS(1),
    [sym_ir_block] = ACTIONS(1),
    [sym_external_symbol] = ACTIONS(1),
    [sym_global_var] = ACTIONS(1),
    [sym_ir_local_var] = ACTIONS(1),
    [sym_metadata_ref] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_successors] = ACTIONS(1),
    [anon_sym_liveins] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_pre_DASHinstr_DASHsymbol] = ACTIONS(1),
    [anon_sym_post_DASHinstr_DASHsymbol] = ACTIONS(1),
    [anon_sym_heap_DASHalloc_DASHmarker] = ACTIONS(1),
    [anon_sym_debug_DASHinstr_DASHnumber] = ACTIONS(1),
    [anon_sym_debug_DASHlocation] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_mcsymbol] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_tied_DASHdef] = ACTIONS(1),
    [anon_sym_target_DASHflags] = ACTIONS(1),
    [sym_primitive_type] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [anon_sym_CustomRegMask] = ACTIONS(1),
    [anon_sym_same_value] = ACTIONS(1),
    [anon_sym_def_cfa_register] = ACTIONS(1),
    [anon_sym_restore] = ACTIONS(1),
    [anon_sym_undefined] = ACTIONS(1),
    [anon_sym_offset] = ACTIONS(1),
    [anon_sym_rel_offset] = ACTIONS(1),
    [anon_sym_def_cfa] = ACTIONS(1),
    [anon_sym_def_cfa_offset] = ACTIONS(1),
    [anon_sym_adjust_cfa_offset] = ACTIONS(1),
    [anon_sym_llvm_def_aspace_cfa] = ACTIONS(1),
    [anon_sym_register] = ACTIONS(1),
    [anon_sym_escape] = ACTIONS(1),
    [anon_sym_remember_state] = ACTIONS(1),
    [anon_sym_restore_state] = ACTIONS(1),
    [anon_sym_window_save] = ACTIONS(1),
    [anon_sym_negate_ra_sign_state] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_intpred] = ACTIONS(1),
    [anon_sym_floatpred] = ACTIONS(1),
    [anon_sym_eq] = ACTIONS(1),
    [anon_sym_ne] = ACTIONS(1),
    [anon_sym_sgt] = ACTIONS(1),
    [anon_sym_sge] = ACTIONS(1),
    [anon_sym_slt] = ACTIONS(1),
    [anon_sym_sle] = ACTIONS(1),
    [anon_sym_ugt] = ACTIONS(1),
    [anon_sym_uge] = ACTIONS(1),
    [anon_sym_ult] = ACTIONS(1),
    [anon_sym_ule] = ACTIONS(1),
    [anon_sym_oeq] = ACTIONS(1),
    [anon_sym_ogt] = ACTIONS(1),
    [anon_sym_oge] = ACTIONS(1),
    [anon_sym_olt] = ACTIONS(1),
    [anon_sym_ole] = ACTIONS(1),
    [anon_sym_one] = ACTIONS(1),
    [anon_sym_ord] = ACTIONS(1),
    [anon_sym_uno] = ACTIONS(1),
    [anon_sym_ueq] = ACTIONS(1),
    [anon_sym_une] = ACTIONS(1),
    [anon_sym_shufflemask] = ACTIONS(1),
    [anon_sym_undef] = ACTIONS(1),
    [anon_sym_liveout] = ACTIONS(1),
    [anon_sym_target_DASHindex] = ACTIONS(1),
    [anon_sym_blockaddress] = ACTIONS(1),
    [anon_sym_intrinsic] = ACTIONS(1),
    [anon_sym_load] = ACTIONS(1),
    [anon_sym_store] = ACTIONS(1),
    [anon_sym_unknown_DASHsize] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_into] = ACTIONS(1),
    [anon_sym_align] = ACTIONS(1),
    [anon_sym_basealign] = ACTIONS(1),
    [anon_sym_addrspace] = ACTIONS(1),
    [anon_sym_unknown_DASHaddress] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_call_DASHentry] = ACTIONS(1),
    [anon_sym_custom] = ACTIONS(1),
    [anon_sym_constant_DASHpool] = ACTIONS(1),
    [anon_sym_stack] = ACTIONS(1),
    [anon_sym_got] = ACTIONS(1),
    [anon_sym_jump_DASHtable] = ACTIONS(1),
    [anon_sym_volatile] = ACTIONS(1),
    [anon_sym_non_DASHtemporal] = ACTIONS(1),
    [anon_sym_dereferenceable] = ACTIONS(1),
    [anon_sym_invariant] = ACTIONS(1),
    [anon_sym_syncscope] = ACTIONS(1),
    [anon_sym_unordered] = ACTIONS(1),
    [anon_sym_monotonic] = ACTIONS(1),
    [anon_sym_acquire] = ACTIONS(1),
    [anon_sym_release] = ACTIONS(1),
    [anon_sym_acq_rel] = ACTIONS(1),
    [anon_sym_seq_cst] = ACTIONS(1),
    [anon_sym_implicit] = ACTIONS(1),
    [anon_sym_implicit_DASHdef] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_dead] = ACTIONS(1),
    [anon_sym_killed] = ACTIONS(1),
    [anon_sym_internal] = ACTIONS(1),
    [anon_sym_early_DASHclobber] = ACTIONS(1),
    [anon_sym_debug_DASHuse] = ACTIONS(1),
    [anon_sym_renamable] = ACTIONS(1),
    [anon_sym_frame_DASHsetup] = ACTIONS(1),
    [anon_sym_frame_DASHdestroy] = ACTIONS(1),
    [anon_sym_nnan] = ACTIONS(1),
    [anon_sym_ninf] = ACTIONS(1),
    [anon_sym_nsz] = ACTIONS(1),
    [anon_sym_arcp] = ACTIONS(1),
    [anon_sym_contract] = ACTIONS(1),
    [anon_sym_afn] = ACTIONS(1),
    [anon_sym_reassoc] = ACTIONS(1),
    [anon_sym_nuw] = ACTIONS(1),
    [anon_sym_nsw] = ACTIONS(1),
    [anon_sym_exact] = ACTIONS(1),
    [anon_sym_nofpexcept] = ACTIONS(1),
    [anon_sym_address_DASHtaken] = ACTIONS(1),
    [anon_sym_landing_DASHpad] = ACTIONS(1),
    [anon_sym_inlineasm_DASHbr_DASHindirect_DASHtarget] = ACTIONS(1),
    [anon_sym_ehfunclet_DASHentry] = ACTIONS(1),
    [anon_sym_bbsections] = ACTIONS(1),
    [anon_sym_half] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_x86_fp80] = ACTIONS(1),
    [anon_sym_fp128] = ACTIONS(1),
    [anon_sym_ppc_fp128] = ACTIONS(1),
  },
  [1] = {
    [sym_body] = STATE(584),
    [sym_basic_block] = STATE(275),
    [sym_label] = STATE(477),
    [aux_sym_body_repeat1] = STATE(275),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_body_token1] = ACTIONS(7),
    [sym__newline] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(11),
  },
  [2] = {
    [sym_mc_symbol] = STATE(114),
    [sym_metadata] = STATE(114),
    [sym_register_operand] = STATE(114),
    [sym_argument] = STATE(125),
    [sym_machine_operand] = STATE(188),
    [sym_custom_regmask] = STATE(114),
    [sym_cfi_operand] = STATE(114),
    [sym_immediate] = STATE(114),
    [sym_predicate] = STATE(114),
    [sym_shuffle_mask] = STATE(114),
    [sym_liveout] = STATE(114),
    [sym_target_index] = STATE(114),
    [sym_block_address] = STATE(114),
    [sym_intrinsic] = STATE(114),
    [sym_register_flag] = STATE(83),
    [sym_float_keyword] = STATE(335),
    [aux_sym_instruction_repeat4] = STATE(146),
    [aux_sym_instruction_repeat5] = STATE(215),
    [aux_sym_register_operand_repeat1] = STATE(83),
    [anon_sym_COMMA] = ACTIONS(13),
    [sym__newline] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [sym_mnemonic] = ACTIONS(17),
    [sym_bb_ref] = ACTIONS(19),
    [sym_stack_object] = ACTIONS(19),
    [sym_constant_pool_index] = ACTIONS(19),
    [sym_jump_table_index] = ACTIONS(19),
    [sym_number] = ACTIONS(17),
    [sym_var] = ACTIONS(21),
    [sym_physical_register] = ACTIONS(23),
    [sym_immediate_type] = ACTIONS(25),
    [sym_external_symbol] = ACTIONS(19),
    [sym_global_var] = ACTIONS(19),
    [sym_metadata_ref] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_pre_DASHinstr_DASHsymbol] = ACTIONS(29),
    [anon_sym_post_DASHinstr_DASHsymbol] = ACTIONS(29),
    [anon_sym_heap_DASHalloc_DASHmarker] = ACTIONS(31),
    [anon_sym_debug_DASHinstr_DASHnumber] = ACTIONS(33),
    [anon_sym_debug_DASHlocation] = ACTIONS(31),
    [anon_sym_COLON_COLON] = ACTIONS(35),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_target_DASHflags] = ACTIONS(41),
    [anon_sym_CustomRegMask] = ACTIONS(43),
    [anon_sym_same_value] = ACTIONS(45),
    [anon_sym_def_cfa_register] = ACTIONS(45),
    [anon_sym_restore] = ACTIONS(45),
    [anon_sym_undefined] = ACTIONS(45),
    [anon_sym_offset] = ACTIONS(47),
    [anon_sym_rel_offset] = ACTIONS(47),
    [anon_sym_def_cfa] = ACTIONS(47),
    [anon_sym_def_cfa_offset] = ACTIONS(49),
    [anon_sym_adjust_cfa_offset] = ACTIONS(49),
    [anon_sym_llvm_def_aspace_cfa] = ACTIONS(51),
    [anon_sym_register] = ACTIONS(53),
    [anon_sym_escape] = ACTIONS(55),
    [anon_sym_remember_state] = ACTIONS(57),
    [anon_sym_restore_state] = ACTIONS(57),
    [anon_sym_window_save] = ACTIONS(57),
    [anon_sym_negate_ra_sign_state] = ACTIONS(57),
    [anon_sym_intpred] = ACTIONS(59),
    [anon_sym_floatpred] = ACTIONS(61),
    [anon_sym_shufflemask] = ACTIONS(63),
    [anon_sym_undef] = ACTIONS(65),
    [anon_sym_liveout] = ACTIONS(67),
    [anon_sym_target_DASHindex] = ACTIONS(69),
    [anon_sym_blockaddress] = ACTIONS(71),
    [anon_sym_intrinsic] = ACTIONS(73),
    [anon_sym_implicit] = ACTIONS(65),
    [anon_sym_implicit_DASHdef] = ACTIONS(65),
    [anon_sym_def] = ACTIONS(65),
    [anon_sym_dead] = ACTIONS(65),
    [anon_sym_killed] = ACTIONS(65),
    [anon_sym_internal] = ACTIONS(65),
    [anon_sym_early_DASHclobber] = ACTIONS(65),
    [anon_sym_debug_DASHuse] = ACTIONS(65),
    [anon_sym_renamable] = ACTIONS(65),
    [anon_sym_half] = ACTIONS(75),
    [anon_sym_float] = ACTIONS(75),
    [anon_sym_double] = ACTIONS(75),
    [anon_sym_x86_fp80] = ACTIONS(75),
    [anon_sym_fp128] = ACTIONS(75),
    [anon_sym_ppc_fp128] = ACTIONS(75),
  },
  [3] = {
    [sym_mc_symbol] = STATE(114),
    [sym_metadata] = STATE(114),
    [sym_register_operand] = STATE(114),
    [sym_argument] = STATE(120),
    [sym_machine_operand] = STATE(188),
    [sym_custom_regmask] = STATE(114),
    [sym_cfi_operand] = STATE(114),
    [sym_immediate] = STATE(114),
    [sym_predicate] = STATE(114),
    [sym_shuffle_mask] = STATE(114),
    [sym_liveout] = STATE(114),
    [sym_target_index] = STATE(114),
    [sym_block_address] = STATE(114),
    [sym_intrinsic] = STATE(114),
    [sym_register_flag] = STATE(83),
    [sym_float_keyword] = STATE(335),
    [aux_sym_instruction_repeat4] = STATE(153),
    [aux_sym_instruction_repeat5] = STATE(213),
    [aux_sym_register_operand_repeat1] = STATE(83),
    [anon_sym_COMMA] = ACTIONS(77),
    [sym__newline] = ACTIONS(79),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [sym_mnemonic] = ACTIONS(17),
    [sym_bb_ref] = ACTIONS(19),
    [sym_stack_object] = ACTIONS(19),
    [sym_constant_pool_index] = ACTIONS(19),
    [sym_jump_table_index] = ACTIONS(19),
    [sym_number] = ACTIONS(17),
    [sym_var] = ACTIONS(21),
    [sym_physical_register] = ACTIONS(23),
    [sym_immediate_type] = ACTIONS(25),
    [sym_external_symbol] = ACTIONS(19),
    [sym_global_var] = ACTIONS(19),
    [sym_metadata_ref] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_pre_DASHinstr_DASHsymbol] = ACTIONS(29),
    [anon_sym_post_DASHinstr_DASHsymbol] = ACTIONS(29),
    [anon_sym_heap_DASHalloc_DASHmarker] = ACTIONS(31),
    [anon_sym_debug_DASHinstr_DASHnumber] = ACTIONS(33),
    [anon_sym_debug_DASHlocation] = ACTIONS(31),
    [anon_sym_COLON_COLON] = ACTIONS(81),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_target_DASHflags] = ACTIONS(41),
    [anon_sym_CustomRegMask] = ACTIONS(43),
    [anon_sym_same_value] = ACTIONS(45),
    [anon_sym_def_cfa_register] = ACTIONS(45),
    [anon_sym_restore] = ACTIONS(45),
    [anon_sym_undefined] = ACTIONS(45),
    [anon_sym_offset] = ACTIONS(47),
    [anon_sym_rel_offset] = ACTIONS(47),
    [anon_sym_def_cfa] = ACTIONS(47),
    [anon_sym_def_cfa_offset] = ACTIONS(49),
    [anon_sym_adjust_cfa_offset] = ACTIONS(49),
    [anon_sym_llvm_def_aspace_cfa] = ACTIONS(51),
    [anon_sym_register] = ACTIONS(53),
    [anon_sym_escape] = ACTIONS(55),
    [anon_sym_remember_state] = ACTIONS(57),
    [anon_sym_restore_state] = ACTIONS(57),
    [anon_sym_window_save] = ACTIONS(57),
    [anon_sym_negate_ra_sign_state] = ACTIONS(57),
    [anon_sym_intpred] = ACTIONS(59),
    [anon_sym_floatpred] = ACTIONS(61),
    [anon_sym_shufflemask] = ACTIONS(63),
    [anon_sym_undef] = ACTIONS(65),
    [anon_sym_liveout] = ACTIONS(67),
    [anon_sym_target_DASHindex] = ACTIONS(69),
    [anon_sym_blockaddress] = ACTIONS(71),
    [anon_sym_intrinsic] = ACTIONS(73),
    [anon_sym_implicit] = ACTIONS(65),
    [anon_sym_implicit_DASHdef] = ACTIONS(65),
    [anon_sym_def] = ACTIONS(65),
    [anon_sym_dead] = ACTIONS(65),
    [anon_sym_killed] = ACTIONS(65),
    [anon_sym_internal] = ACTIONS(65),
    [anon_sym_early_DASHclobber] = ACTIONS(65),
    [anon_sym_debug_DASHuse] = ACTIONS(65),
    [anon_sym_renamable] = ACTIONS(65),
    [anon_sym_half] = ACTIONS(75),
    [anon_sym_float] = ACTIONS(75),
    [anon_sym_double] = ACTIONS(75),
    [anon_sym_x86_fp80] = ACTIONS(75),
    [anon_sym_fp128] = ACTIONS(75),
    [anon_sym_ppc_fp128] = ACTIONS(75),
  },
  [4] = {
    [sym_mc_symbol] = STATE(114),
    [sym_metadata] = STATE(114),
    [sym_register_operand] = STATE(114),
    [sym_argument] = STATE(117),
    [sym_machine_operand] = STATE(188),
    [sym_custom_regmask] = STATE(114),
    [sym_cfi_operand] = STATE(114),
    [sym_immediate] = STATE(114),
    [sym_predicate] = STATE(114),
    [sym_shuffle_mask] = STATE(114),
    [sym_liveout] = STATE(114),
    [sym_target_index] = STATE(114),
    [sym_block_address] = STATE(114),
    [sym_intrinsic] = STATE(114),
    [sym_register_flag] = STATE(83),
    [sym_float_keyword] = STATE(335),
    [aux_sym_instruction_repeat4] = STATE(145),
    [aux_sym_instruction_repeat5] = STATE(219),
    [aux_sym_register_operand_repeat1] = STATE(83),
    [anon_sym_COMMA] = ACTIONS(83),
    [sym__newline] = ACTIONS(85),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [sym_mnemonic] = ACTIONS(17),
    [sym_bb_ref] = ACTIONS(19),
    [sym_stack_object] = ACTIONS(19),
    [sym_constant_pool_index] = ACTIONS(19),
    [sym_jump_table_index] = ACTIONS(19),
    [sym_number] = ACTIONS(17),
    [sym_var] = ACTIONS(21),
    [sym_physical_register] = ACTIONS(23),
    [sym_immediate_type] = ACTIONS(25),
    [sym_external_symbol] = ACTIONS(19),
    [sym_global_var] = ACTIONS(19),
    [sym_metadata_ref] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_pre_DASHinstr_DASHsymbol] = ACTIONS(29),
    [anon_sym_post_DASHinstr_DASHsymbol] = ACTIONS(29),
    [anon_sym_heap_DASHalloc_DASHmarker] = ACTIONS(31),
    [anon_sym_debug_DASHinstr_DASHnumber] = ACTIONS(33),
    [anon_sym_debug_DASHlocation] = ACTIONS(31),
    [anon_sym_COLON_COLON] = ACTIONS(87),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_target_DASHflags] = ACTIONS(41),
    [anon_sym_CustomRegMask] = ACTIONS(43),
    [anon_sym_same_value] = ACTIONS(45),
    [anon_sym_def_cfa_register] = ACTIONS(45),
    [anon_sym_restore] = ACTIONS(45),
    [anon_sym_undefined] = ACTIONS(45),
    [anon_sym_offset] = ACTIONS(47),
    [anon_sym_rel_offset] = ACTIONS(47),
    [anon_sym_def_cfa] = ACTIONS(47),
    [anon_sym_def_cfa_offset] = ACTIONS(49),
    [anon_sym_adjust_cfa_offset] = ACTIONS(49),
    [anon_sym_llvm_def_aspace_cfa] = ACTIONS(51),
    [anon_sym_register] = ACTIONS(53),
    [anon_sym_escape] = ACTIONS(55),
    [anon_sym_remember_state] = ACTIONS(57),
    [anon_sym_restore_state] = ACTIONS(57),
    [anon_sym_window_save] = ACTIONS(57),
    [anon_sym_negate_ra_sign_state] = ACTIONS(57),
    [anon_sym_intpred] = ACTIONS(59),
    [anon_sym_floatpred] = ACTIONS(61),
    [anon_sym_shufflemask] = ACTIONS(63),
    [anon_sym_undef] = ACTIONS(65),
    [anon_sym_liveout] = ACTIONS(67),
    [anon_sym_target_DASHindex] = ACTIONS(69),
    [anon_sym_blockaddress] = ACTIONS(71),
    [anon_sym_intrinsic] = ACTIONS(73),
    [anon_sym_implicit] = ACTIONS(65),
    [anon_sym_implicit_DASHdef] = ACTIONS(65),
    [anon_sym_def] = ACTIONS(65),
    [anon_sym_dead] = ACTIONS(65),
    [anon_sym_killed] = ACTIONS(65),
    [anon_sym_internal] = ACTIONS(65),
    [anon_sym_early_DASHclobber] = ACTIONS(65),
    [anon_sym_debug_DASHuse] = ACTIONS(65),
    [anon_sym_renamable] = ACTIONS(65),
    [anon_sym_half] = ACTIONS(75),
    [anon_sym_float] = ACTIONS(75),
    [anon_sym_double] = ACTIONS(75),
    [anon_sym_x86_fp80] = ACTIONS(75),
    [anon_sym_fp128] = ACTIONS(75),
    [anon_sym_ppc_fp128] = ACTIONS(75),
  },
  [5] = {
    [sym_mc_symbol] = STATE(114),
    [sym_metadata] = STATE(114),
    [sym_register_operand] = STATE(114),
    [sym_argument] = STATE(124),
    [sym_machine_operand] = STATE(188),
    [sym_custom_regmask] = STATE(114),
    [sym_cfi_operand] = STATE(114),
    [sym_immediate] = STATE(114),
    [sym_predicate] = STATE(114),
    [sym_shuffle_mask] = STATE(114),
    [sym_liveout] = STATE(114),
    [sym_target_index] = STATE(114),
    [sym_block_address] = STATE(114),
    [sym_intrinsic] = STATE(114),
    [sym_register_flag] = STATE(83),
    [sym_float_keyword] = STATE(335),
    [aux_sym_instruction_repeat4] = STATE(161),
    [aux_sym_instruction_repeat5] = STATE(196),
    [aux_sym_register_operand_repeat1] = STATE(83),
    [anon_sym_COMMA] = ACTIONS(89),
    [sym__newline] = ACTIONS(91),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [sym_mnemonic] = ACTIONS(17),
    [sym_bb_ref] = ACTIONS(19),
    [sym_stack_object] = ACTIONS(19),
    [sym_constant_pool_index] = ACTIONS(19),
    [sym_jump_table_index] = ACTIONS(19),
    [sym_number] = ACTIONS(17),
    [sym_var] = ACTIONS(21),
    [sym_physical_register] = ACTIONS(23),
    [sym_immediate_type] = ACTIONS(25),
    [sym_external_symbol] = ACTIONS(19),
    [sym_global_var] = ACTIONS(19),
    [sym_metadata_ref] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(91),
    [anon_sym_pre_DASHinstr_DASHsymbol] = ACTIONS(29),
    [anon_sym_post_DASHinstr_DASHsymbol] = ACTIONS(29),
    [anon_sym_heap_DASHalloc_DASHmarker] = ACTIONS(31),
    [anon_sym_debug_DASHinstr_DASHnumber] = ACTIONS(33),
    [anon_sym_debug_DASHlocation] = ACTIONS(31),
    [anon_sym_COLON_COLON] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_target_DASHflags] = ACTIONS(41),
    [anon_sym_CustomRegMask] = ACTIONS(43),
    [anon_sym_same_value] = ACTIONS(45),
    [anon_sym_def_cfa_register] = ACTIONS(45),
    [anon_sym_restore] = ACTIONS(45),
    [anon_sym_undefined] = ACTIONS(45),
    [anon_sym_offset] = ACTIONS(47),
    [anon_sym_rel_offset] = ACTIONS(47),
    [anon_sym_def_cfa] = ACTIONS(47),
    [anon_sym_def_cfa_offset] = ACTIONS(49),
    [anon_sym_adjust_cfa_offset] = ACTIONS(49),
    [anon_sym_llvm_def_aspace_cfa] = ACTIONS(51),
    [anon_sym_register] = ACTIONS(53),
    [anon_sym_escape] = ACTIONS(55),
    [anon_sym_remember_state] = ACTIONS(57),
    [anon_sym_restore_state] = ACTIONS(57),
    [anon_sym_window_save] = ACTIONS(57),
    [anon_sym_negate_ra_sign_state] = ACTIONS(57),
    [anon_sym_intpred] = ACTIONS(59),
    [anon_sym_floatpred] = ACTIONS(61),
    [anon_sym_shufflemask] = ACTIONS(63),
    [anon_sym_undef] = ACTIONS(65),
    [anon_sym_liveout] = ACTIONS(67),
    [anon_sym_target_DASHindex] = ACTIONS(69),
    [anon_sym_blockaddress] = ACTIONS(71),
    [anon_sym_intrinsic] = ACTIONS(73),
    [anon_sym_implicit] = ACTIONS(65),
    [anon_sym_implicit_DASHdef] = ACTIONS(65),
    [anon_sym_def] = ACTIONS(65),
    [anon_sym_dead] = ACTIONS(65),
    [anon_sym_killed] = ACTIONS(65),
    [anon_sym_internal] = ACTIONS(65),
    [anon_sym_early_DASHclobber] = ACTIONS(65),
    [anon_sym_debug_DASHuse] = ACTIONS(65),
    [anon_sym_renamable] = ACTIONS(65),
    [anon_sym_half] = ACTIONS(75),
    [anon_sym_float] = ACTIONS(75),
    [anon_sym_double] = ACTIONS(75),
    [anon_sym_x86_fp80] = ACTIONS(75),
    [anon_sym_fp128] = ACTIONS(75),
    [anon_sym_ppc_fp128] = ACTIONS(75),
  },
  [6] = {
    [sym_mc_symbol] = STATE(114),
    [sym_metadata] = STATE(114),
    [sym_register_operand] = STATE(114),
    [sym_argument] = STATE(128),
    [sym_machine_operand] = STATE(188),
    [sym_custom_regmask] = STATE(114),
    [sym_cfi_operand] = STATE(114),
    [sym_immediate] = STATE(114),
    [sym_predicate] = STATE(114),
    [sym_shuffle_mask] = STATE(114),
    [sym_liveout] = STATE(114),
    [sym_target_index] = STATE(114),
    [sym_block_address] = STATE(114),
    [sym_intrinsic] = STATE(114),
    [sym_register_flag] = STATE(83),
    [sym_float_keyword] = STATE(335),
    [aux_sym_instruction_repeat4] = STATE(143),
    [aux_sym_instruction_repeat5] = STATE(221),
    [aux_sym_register_operand_repeat1] = STATE(83),
    [anon_sym_COMMA] = ACTIONS(95),
    [sym__newline] = ACTIONS(97),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [sym_mnemonic] = ACTIONS(17),
    [sym_bb_ref] = ACTIONS(19),
    [sym_stack_object] = ACTIONS(19),
    [sym_constant_pool_index] = ACTIONS(19),
    [sym_jump_table_index] = ACTIONS(19),
    [sym_number] = ACTIONS(17),
    [sym_var] = ACTIONS(21),
    [sym_physical_register] = ACTIONS(23),
    [sym_immediate_type] = ACTIONS(25),
    [sym_external_symbol] = ACTIONS(19),
    [sym_global_var] = ACTIONS(19),
    [sym_metadata_ref] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_pre_DASHinstr_DASHsymbol] = ACTIONS(29),
    [anon_sym_post_DASHinstr_DASHsymbol] = ACTIONS(29),
    [anon_sym_heap_DASHalloc_DASHmarker] = ACTIONS(31),
    [anon_sym_debug_DASHinstr_DASHnumber] = ACTIONS(33),
    [anon_sym_debug_DASHlocation] = ACTIONS(31),
    [anon_sym_COLON_COLON] = ACTIONS(99),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_target_DASHflags] = ACTIONS(41),
    [anon_sym_CustomRegMask] = ACTIONS(43),
    [anon_sym_same_value] = ACTIONS(45),
    [anon_sym_def_cfa_register] = ACTIONS(45),
    [anon_sym_restore] = ACTIONS(45),
    [anon_sym_undefined] = ACTIONS(45),
    [anon_sym_offset] = ACTIONS(47),
    [anon_sym_rel_offset] = ACTIONS(47),
    [anon_sym_def_cfa] = ACTIONS(47),
    [anon_sym_def_cfa_offset] = ACTIONS(49),
    [anon_sym_adjust_cfa_offset] = ACTIONS(49),
    [anon_sym_llvm_def_aspace_cfa] = ACTIONS(51),
    [anon_sym_register] = ACTIONS(53),
    [anon_sym_escape] = ACTIONS(55),
    [anon_sym_remember_state] = ACTIONS(57),
    [anon_sym_restore_state] = ACTIONS(57),
    [anon_sym_window_save] = ACTIONS(57),
    [anon_sym_negate_ra_sign_state] = ACTIONS(57),
    [anon_sym_intpred] = ACTIONS(59),
    [anon_sym_floatpred] = ACTIONS(61),
    [anon_sym_shufflemask] = ACTIONS(63),
    [anon_sym_undef] = ACTIONS(65),
    [anon_sym_liveout] = ACTIONS(67),
    [anon_sym_target_DASHindex] = ACTIONS(69),
    [anon_sym_blockaddress] = ACTIONS(71),
    [anon_sym_intrinsic] = ACTIONS(73),
    [anon_sym_implicit] = ACTIONS(65),
    [anon_sym_implicit_DASHdef] = ACTIONS(65),
    [anon_sym_def] = ACTIONS(65),
    [anon_sym_dead] = ACTIONS(65),
    [anon_sym_killed] = ACTIONS(65),
    [anon_sym_internal] = ACTIONS(65),
    [anon_sym_early_DASHclobber] = ACTIONS(65),
    [anon_sym_debug_DASHuse] = ACTIONS(65),
    [anon_sym_renamable] = ACTIONS(65),
    [anon_sym_half] = ACTIONS(75),
    [anon_sym_float] = ACTIONS(75),
    [anon_sym_double] = ACTIONS(75),
    [anon_sym_x86_fp80] = ACTIONS(75),
    [anon_sym_fp128] = ACTIONS(75),
    [anon_sym_ppc_fp128] = ACTIONS(75),
  },
  [7] = {
    [sym_mc_symbol] = STATE(114),
    [sym_metadata] = STATE(114),
    [sym_register_operand] = STATE(114),
    [sym_argument] = STATE(190),
    [sym_machine_operand] = STATE(188),
    [sym_custom_regmask] = STATE(114),
    [sym_cfi_operand] = STATE(114),
    [sym_immediate] = STATE(114),
    [sym_predicate] = STATE(114),
    [sym_shuffle_mask] = STATE(114),
    [sym_liveout] = STATE(114),
    [sym_target_index] = STATE(114),
    [sym_block_address] = STATE(114),
    [sym_intrinsic] = STATE(114),
    [sym_register_flag] = STATE(83),
    [sym_float_keyword] = STATE(335),
    [aux_sym_register_operand_repeat1] = STATE(83),
    [sym__newline] = ACTIONS(101),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [sym_mnemonic] = ACTIONS(17),
    [sym_bb_ref] = ACTIONS(19),
    [sym_stack_object] = ACTIONS(19),
    [sym_constant_pool_index] = ACTIONS(19),
    [sym_jump_table_index] = ACTIONS(19),
    [sym_number] = ACTIONS(17),
    [sym_var] = ACTIONS(21),
    [sym_physical_register] = ACTIONS(23),
    [sym_immediate_type] = ACTIONS(25),
    [sym_external_symbol] = ACTIONS(19),
    [sym_global_var] = ACTIONS(19),
    [sym_metadata_ref] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(101),
    [anon_sym_pre_DASHinstr_DASHsymbol] = ACTIONS(103),
    [anon_sym_post_DASHinstr_DASHsymbol] = ACTIONS(103),
    [anon_sym_heap_DASHalloc_DASHmarker] = ACTIONS(105),
    [anon_sym_debug_DASHinstr_DASHnumber] = ACTIONS(107),
    [anon_sym_debug_DASHlocation] = ACTIONS(105),
    [anon_sym_COLON_COLON] = ACTIONS(109),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_target_DASHflags] = ACTIONS(41),
    [anon_sym_CustomRegMask] = ACTIONS(43),
    [anon_sym_same_value] = ACTIONS(45),
    [anon_sym_def_cfa_register] = ACTIONS(45),
    [anon_sym_restore] = ACTIONS(45),
    [anon_sym_undefined] = ACTIONS(45),
    [anon_sym_offset] = ACTIONS(47),
    [anon_sym_rel_offset] = ACTIONS(47),
    [anon_sym_def_cfa] = ACTIONS(47),
    [anon_sym_def_cfa_offset] = ACTIONS(49),
    [anon_sym_adjust_cfa_offset] = ACTIONS(49),
    [anon_sym_llvm_def_aspace_cfa] = ACTIONS(51),
    [anon_sym_register] = ACTIONS(53),
    [anon_sym_escape] = ACTIONS(55),
    [anon_sym_remember_state] = ACTIONS(57),
    [anon_sym_restore_state] = ACTIONS(57),
    [anon_sym_window_save] = ACTIONS(57),
    [anon_sym_negate_ra_sign_state] = ACTIONS(57),
    [anon_sym_intpred] = ACTIONS(59),
    [anon_sym_floatpred] = ACTIONS(61),
    [anon_sym_shufflemask] = ACTIONS(63),
    [anon_sym_undef] = ACTIONS(65),
    [anon_sym_liveout] = ACTIONS(67),
    [anon_sym_target_DASHindex] = ACTIONS(69),
    [anon_sym_blockaddress] = ACTIONS(71),
    [anon_sym_intrinsic] = ACTIONS(73),
    [anon_sym_implicit] = ACTIONS(65),
    [anon_sym_implicit_DASHdef] = ACTIONS(65),
    [anon_sym_def] = ACTIONS(65),
    [anon_sym_dead] = ACTIONS(65),
    [anon_sym_killed] = ACTIONS(65),
    [anon_sym_internal] = ACTIONS(65),
    [anon_sym_early_DASHclobber] = ACTIONS(65),
    [anon_sym_debug_DASHuse] = ACTIONS(65),
    [anon_sym_renamable] = ACTIONS(65),
    [anon_sym_half] = ACTIONS(75),
    [anon_sym_float] = ACTIONS(75),
    [anon_sym_double] = ACTIONS(75),
    [anon_sym_x86_fp80] = ACTIONS(75),
    [anon_sym_fp128] = ACTIONS(75),
    [anon_sym_ppc_fp128] = ACTIONS(75),
  },
  [8] = {
    [sym_mc_symbol] = STATE(114),
    [sym_metadata] = STATE(114),
    [sym_register_operand] = STATE(114),
    [sym_argument] = STATE(190),
    [sym_machine_operand] = STATE(188),
    [sym_custom_regmask] = STATE(114),
    [sym_cfi_operand] = STATE(114),
    [sym_immediate] = STATE(114),
    [sym_predicate] = STATE(114),
    [sym_shuffle_mask] = STATE(114),
    [sym_liveout] = STATE(114),
    [sym_target_index] = STATE(114),
    [sym_block_address] = STATE(114),
    [sym_intrinsic] = STATE(114),
    [sym_register_flag] = STATE(83),
    [sym_float_keyword] = STATE(335),
    [aux_sym_register_operand_repeat1] = STATE(83),
    [sym__newline] = ACTIONS(111),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [sym_mnemonic] = ACTIONS(17),
    [sym_bb_ref] = ACTIONS(19),
    [sym_stack_object] = ACTIONS(19),
    [sym_constant_pool_index] = ACTIONS(19),
    [sym_jump_table_index] = ACTIONS(19),
    [sym_number] = ACTIONS(17),
    [sym_var] = ACTIONS(21),
    [sym_physical_register] = ACTIONS(23),
    [sym_immediate_type] = ACTIONS(25),
    [sym_external_symbol] = ACTIONS(19),
    [sym_global_var] = ACTIONS(19),
    [sym_metadata_ref] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_pre_DASHinstr_DASHsymbol] = ACTIONS(103),
    [anon_sym_post_DASHinstr_DASHsymbol] = ACTIONS(103),
    [anon_sym_heap_DASHalloc_DASHmarker] = ACTIONS(105),
    [anon_sym_debug_DASHinstr_DASHnumber] = ACTIONS(107),
    [anon_sym_debug_DASHlocation] = ACTIONS(105),
    [anon_sym_COLON_COLON] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_target_DASHflags] = ACTIONS(41),
    [anon_sym_CustomRegMask] = ACTIONS(43),
    [anon_sym_same_value] = ACTIONS(45),
    [anon_sym_def_cfa_register] = ACTIONS(45),
    [anon_sym_restore] = ACTIONS(45),
    [anon_sym_undefined] = ACTIONS(45),
    [anon_sym_offset] = ACTIONS(47),
    [anon_sym_rel_offset] = ACTIONS(47),
    [anon_sym_def_cfa] = ACTIONS(47),
    [anon_sym_def_cfa_offset] = ACTIONS(49),
    [anon_sym_adjust_cfa_offset] = ACTIONS(49),
    [anon_sym_llvm_def_aspace_cfa] = ACTIONS(51),
    [anon_sym_register] = ACTIONS(53),
    [anon_sym_escape] = ACTIONS(55),
    [anon_sym_remember_state] = ACTIONS(57),
    [anon_sym_restore_state] = ACTIONS(57),
    [anon_sym_window_save] = ACTIONS(57),
    [anon_sym_negate_ra_sign_state] = ACTIONS(57),
    [anon_sym_intpred] = ACTIONS(59),
    [anon_sym_floatpred] = ACTIONS(61),
    [anon_sym_shufflemask] = ACTIONS(63),
    [anon_sym_undef] = ACTIONS(65),
    [anon_sym_liveout] = ACTIONS(67),
    [anon_sym_target_DASHindex] = ACTIONS(69),
    [anon_sym_blockaddress] = ACTIONS(71),
    [anon_sym_intrinsic] = ACTIONS(73),
    [anon_sym_implicit] = ACTIONS(65),
    [anon_sym_implicit_DASHdef] = ACTIONS(65),
    [anon_sym_def] = ACTIONS(65),
    [anon_sym_dead] = ACTIONS(65),
    [anon_sym_killed] = ACTIONS(65),
    [anon_sym_internal] = ACTIONS(65),
    [anon_sym_early_DASHclobber] = ACTIONS(65),
    [anon_sym_debug_DASHuse] = ACTIONS(65),
    [anon_sym_renamable] = ACTIONS(65),
    [anon_sym_half] = ACTIONS(75),
    [anon_sym_float] = ACTIONS(75),
    [anon_sym_double] = ACTIONS(75),
    [anon_sym_x86_fp80] = ACTIONS(75),
    [anon_sym_fp128] = ACTIONS(75),
    [anon_sym_ppc_fp128] = ACTIONS(75),
  },
  [9] = {
    [sym_mc_symbol] = STATE(114),
    [sym_metadata] = STATE(114),
    [sym_register_operand] = STATE(114),
    [sym_argument] = STATE(190),
    [sym_machine_operand] = STATE(188),
    [sym_custom_regmask] = STATE(114),
    [sym_cfi_operand] = STATE(114),
    [sym_immediate] = STATE(114),
    [sym_predicate] = STATE(114),
    [sym_shuffle_mask] = STATE(114),
    [sym_liveout] = STATE(114),
    [sym_target_index] = STATE(114),
    [sym_block_address] = STATE(114),
    [sym_intrinsic] = STATE(114),
    [sym_register_flag] = STATE(83),
    [sym_float_keyword] = STATE(335),
    [aux_sym_register_operand_repeat1] = STATE(83),
    [sym__newline] = ACTIONS(115),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [sym_mnemonic] = ACTIONS(17),
    [sym_bb_ref] = ACTIONS(19),
    [sym_stack_object] = ACTIONS(19),
    [sym_constant_pool_index] = ACTIONS(19),
    [sym_jump_table_index] = ACTIONS(19),
    [sym_number] = ACTIONS(17),
    [sym_var] = ACTIONS(21),
    [sym_physical_register] = ACTIONS(23),
    [sym_immediate_type] = ACTIONS(25),
    [sym_external_symbol] = ACTIONS(19),
    [sym_global_var] = ACTIONS(19),
    [sym_metadata_ref] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(115),
    [anon_sym_pre_DASHinstr_DASHsymbol] = ACTIONS(103),
    [anon_sym_post_DASHinstr_DASHsymbol] = ACTIONS(103),
    [anon_sym_heap_DASHalloc_DASHmarker] = ACTIONS(105),
    [anon_sym_debug_DASHinstr_DASHnumber] = ACTIONS(107),
    [anon_sym_debug_DASHlocation] = ACTIONS(105),
    [anon_sym_COLON_COLON] = ACTIONS(117),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_target_DASHflags] = ACTIONS(41),
    [anon_sym_CustomRegMask] = ACTIONS(43),
    [anon_sym_same_value] = ACTIONS(45),
    [anon_sym_def_cfa_register] = ACTIONS(45),
    [anon_sym_restore] = ACTIONS(45),
    [anon_sym_undefined] = ACTIONS(45),
    [anon_sym_offset] = ACTIONS(47),
    [anon_sym_rel_offset] = ACTIONS(47),
    [anon_sym_def_cfa] = ACTIONS(47),
    [anon_sym_def_cfa_offset] = ACTIONS(49),
    [anon_sym_adjust_cfa_offset] = ACTIONS(49),
    [anon_sym_llvm_def_aspace_cfa] = ACTIONS(51),
    [anon_sym_register] = ACTIONS(53),
    [anon_sym_escape] = ACTIONS(55),
    [anon_sym_remember_state] = ACTIONS(57),
    [anon_sym_restore_state] = ACTIONS(57),
    [anon_sym_window_save] = ACTIONS(57),
    [anon_sym_negate_ra_sign_state] = ACTIONS(57),
    [anon_sym_intpred] = ACTIONS(59),
    [anon_sym_floatpred] = ACTIONS(61),
    [anon_sym_shufflemask] = ACTIONS(63),
    [anon_sym_undef] = ACTIONS(65),
    [anon_sym_liveout] = ACTIONS(67),
    [anon_sym_target_DASHindex] = ACTIONS(69),
    [anon_sym_blockaddress] = ACTIONS(71),
    [anon_sym_intrinsic] = ACTIONS(73),
    [anon_sym_implicit] = ACTIONS(65),
    [anon_sym_implicit_DASHdef] = ACTIONS(65),
    [anon_sym_def] = ACTIONS(65),
    [anon_sym_dead] = ACTIONS(65),
    [anon_sym_killed] = ACTIONS(65),
    [anon_sym_internal] = ACTIONS(65),
    [anon_sym_early_DASHclobber] = ACTIONS(65),
    [anon_sym_debug_DASHuse] = ACTIONS(65),
    [anon_sym_renamable] = ACTIONS(65),
    [anon_sym_half] = ACTIONS(75),
    [anon_sym_float] = ACTIONS(75),
    [anon_sym_double] = ACTIONS(75),
    [anon_sym_x86_fp80] = ACTIONS(75),
    [anon_sym_fp128] = ACTIONS(75),
    [anon_sym_ppc_fp128] = ACTIONS(75),
  },
  [10] = {
    [sym_mc_symbol] = STATE(114),
    [sym_metadata] = STATE(114),
    [sym_register_operand] = STATE(114),
    [sym_argument] = STATE(190),
    [sym_machine_operand] = STATE(188),
    [sym_custom_regmask] = STATE(114),
    [sym_cfi_operand] = STATE(114),
    [sym_immediate] = STATE(114),
    [sym_predicate] = STATE(114),
    [sym_shuffle_mask] = STATE(114),
    [sym_liveout] = STATE(114),
    [sym_target_index] = STATE(114),
    [sym_block_address] = STATE(114),
    [sym_intrinsic] = STATE(114),
    [sym_register_flag] = STATE(83),
    [sym_float_keyword] = STATE(335),
    [aux_sym_register_operand_repeat1] = STATE(83),
    [sym__newline] = ACTIONS(119),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [sym_mnemonic] = ACTIONS(17),
    [sym_bb_ref] = ACTIONS(19),
    [sym_stack_object] = ACTIONS(19),
    [sym_constant_pool_index] = ACTIONS(19),
    [sym_jump_table_index] = ACTIONS(19),
    [sym_number] = ACTIONS(17),
    [sym_var] = ACTIONS(21),
    [sym_physical_register] = ACTIONS(23),
    [sym_immediate_type] = ACTIONS(25),
    [sym_external_symbol] = ACTIONS(19),
    [sym_global_var] = ACTIONS(19),
    [sym_metadata_ref] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_pre_DASHinstr_DASHsymbol] = ACTIONS(103),
    [anon_sym_post_DASHinstr_DASHsymbol] = ACTIONS(103),
    [anon_sym_heap_DASHalloc_DASHmarker] = ACTIONS(105),
    [anon_sym_debug_DASHinstr_DASHnumber] = ACTIONS(107),
    [anon_sym_debug_DASHlocation] = ACTIONS(105),
    [anon_sym_COLON_COLON] = ACTIONS(121),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_target_DASHflags] = ACTIONS(41),
    [anon_sym_CustomRegMask] = ACTIONS(43),
    [anon_sym_same_value] = ACTIONS(45),
    [anon_sym_def_cfa_register] = ACTIONS(45),
    [anon_sym_restore] = ACTIONS(45),
    [anon_sym_undefined] = ACTIONS(45),
    [anon_sym_offset] = ACTIONS(47),
    [anon_sym_rel_offset] = ACTIONS(47),
    [anon_sym_def_cfa] = ACTIONS(47),
    [anon_sym_def_cfa_offset] = ACTIONS(49),
    [anon_sym_adjust_cfa_offset] = ACTIONS(49),
    [anon_sym_llvm_def_aspace_cfa] = ACTIONS(51),
    [anon_sym_register] = ACTIONS(53),
    [anon_sym_escape] = ACTIONS(55),
    [anon_sym_remember_state] = ACTIONS(57),
    [anon_sym_restore_state] = ACTIONS(57),
    [anon_sym_window_save] = ACTIONS(57),
    [anon_sym_negate_ra_sign_state] = ACTIONS(57),
    [anon_sym_intpred] = ACTIONS(59),
    [anon_sym_floatpred] = ACTIONS(61),
    [anon_sym_shufflemask] = ACTIONS(63),
    [anon_sym_undef] = ACTIONS(65),
    [anon_sym_liveout] = ACTIONS(67),
    [anon_sym_target_DASHindex] = ACTIONS(69),
    [anon_sym_blockaddress] = ACTIONS(71),
    [anon_sym_intrinsic] = ACTIONS(73),
    [anon_sym_implicit] = ACTIONS(65),
    [anon_sym_implicit_DASHdef] = ACTIONS(65),
    [anon_sym_def] = ACTIONS(65),
    [anon_sym_dead] = ACTIONS(65),
    [anon_sym_killed] = ACTIONS(65),
    [anon_sym_internal] = ACTIONS(65),
    [anon_sym_early_DASHclobber] = ACTIONS(65),
    [anon_sym_debug_DASHuse] = ACTIONS(65),
    [anon_sym_renamable] = ACTIONS(65),
    [anon_sym_half] = ACTIONS(75),
    [anon_sym_float] = ACTIONS(75),
    [anon_sym_double] = ACTIONS(75),
    [anon_sym_x86_fp80] = ACTIONS(75),
    [anon_sym_fp128] = ACTIONS(75),
    [anon_sym_ppc_fp128] = ACTIONS(75),
  },
  [11] = {
    [sym_mc_symbol] = STATE(114),
    [sym_metadata] = STATE(114),
    [sym_register_operand] = STATE(114),
    [sym_argument] = STATE(190),
    [sym_machine_operand] = STATE(188),
    [sym_custom_regmask] = STATE(114),
    [sym_cfi_operand] = STATE(114),
    [sym_immediate] = STATE(114),
    [sym_predicate] = STATE(114),
    [sym_shuffle_mask] = STATE(114),
    [sym_liveout] = STATE(114),
    [sym_target_index] = STATE(114),
    [sym_block_address] = STATE(114),
    [sym_intrinsic] = STATE(114),
    [sym_register_flag] = STATE(83),
    [sym_float_keyword] = STATE(335),
    [aux_sym_register_operand_repeat1] = STATE(83),
    [sym__newline] = ACTIONS(123),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [sym_mnemonic] = ACTIONS(17),
    [sym_bb_ref] = ACTIONS(19),
    [sym_stack_object] = ACTIONS(19),
    [sym_constant_pool_index] = ACTIONS(19),
    [sym_jump_table_index] = ACTIONS(19),
    [sym_number] = ACTIONS(17),
    [sym_var] = ACTIONS(21),
    [sym_physical_register] = ACTIONS(23),
    [sym_immediate_type] = ACTIONS(25),
    [sym_external_symbol] = ACTIONS(19),
    [sym_global_var] = ACTIONS(19),
    [sym_metadata_ref] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(123),
    [anon_sym_pre_DASHinstr_DASHsymbol] = ACTIONS(103),
    [anon_sym_post_DASHinstr_DASHsymbol] = ACTIONS(103),
    [anon_sym_heap_DASHalloc_DASHmarker] = ACTIONS(105),
    [anon_sym_debug_DASHinstr_DASHnumber] = ACTIONS(107),
    [anon_sym_debug_DASHlocation] = ACTIONS(105),
    [anon_sym_COLON_COLON] = ACTIONS(125),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_target_DASHflags] = ACTIONS(41),
    [anon_sym_CustomRegMask] = ACTIONS(43),
    [anon_sym_same_value] = ACTIONS(45),
    [anon_sym_def_cfa_register] = ACTIONS(45),
    [anon_sym_restore] = ACTIONS(45),
    [anon_sym_undefined] = ACTIONS(45),
    [anon_sym_offset] = ACTIONS(47),
    [anon_sym_rel_offset] = ACTIONS(47),
    [anon_sym_def_cfa] = ACTIONS(47),
    [anon_sym_def_cfa_offset] = ACTIONS(49),
    [anon_sym_adjust_cfa_offset] = ACTIONS(49),
    [anon_sym_llvm_def_aspace_cfa] = ACTIONS(51),
    [anon_sym_register] = ACTIONS(53),
    [anon_sym_escape] = ACTIONS(55),
    [anon_sym_remember_state] = ACTIONS(57),
    [anon_sym_restore_state] = ACTIONS(57),
    [anon_sym_window_save] = ACTIONS(57),
    [anon_sym_negate_ra_sign_state] = ACTIONS(57),
    [anon_sym_intpred] = ACTIONS(59),
    [anon_sym_floatpred] = ACTIONS(61),
    [anon_sym_shufflemask] = ACTIONS(63),
    [anon_sym_undef] = ACTIONS(65),
    [anon_sym_liveout] = ACTIONS(67),
    [anon_sym_target_DASHindex] = ACTIONS(69),
    [anon_sym_blockaddress] = ACTIONS(71),
    [anon_sym_intrinsic] = ACTIONS(73),
    [anon_sym_implicit] = ACTIONS(65),
    [anon_sym_implicit_DASHdef] = ACTIONS(65),
    [anon_sym_def] = ACTIONS(65),
    [anon_sym_dead] = ACTIONS(65),
    [anon_sym_killed] = ACTIONS(65),
    [anon_sym_internal] = ACTIONS(65),
    [anon_sym_early_DASHclobber] = ACTIONS(65),
    [anon_sym_debug_DASHuse] = ACTIONS(65),
    [anon_sym_renamable] = ACTIONS(65),
    [anon_sym_half] = ACTIONS(75),
    [anon_sym_float] = ACTIONS(75),
    [anon_sym_double] = ACTIONS(75),
    [anon_sym_x86_fp80] = ACTIONS(75),
    [anon_sym_fp128] = ACTIONS(75),
    [anon_sym_ppc_fp128] = ACTIONS(75),
  },
  [12] = {
    [sym_mc_symbol] = STATE(114),
    [sym_metadata] = STATE(114),
    [sym_register_operand] = STATE(114),
    [sym_argument] = STATE(190),
    [sym_machine_operand] = STATE(188),
    [sym_custom_regmask] = STATE(114),
    [sym_cfi_operand] = STATE(114),
    [sym_immediate] = STATE(114),
    [sym_predicate] = STATE(114),
    [sym_shuffle_mask] = STATE(114),
    [sym_liveout] = STATE(114),
    [sym_target_index] = STATE(114),
    [sym_block_address] = STATE(114),
    [sym_intrinsic] = STATE(114),
    [sym_register_flag] = STATE(83),
    [sym_float_keyword] = STATE(335),
    [aux_sym_register_operand_repeat1] = STATE(83),
    [sym__newline] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [sym_mnemonic] = ACTIONS(17),
    [sym_bb_ref] = ACTIONS(19),
    [sym_stack_object] = ACTIONS(19),
    [sym_constant_pool_index] = ACTIONS(19),
    [sym_jump_table_index] = ACTIONS(19),
    [sym_number] = ACTIONS(17),
    [sym_var] = ACTIONS(21),
    [sym_physical_register] = ACTIONS(23),
    [sym_immediate_type] = ACTIONS(25),
    [sym_external_symbol] = ACTIONS(19),
    [sym_global_var] = ACTIONS(19),
    [sym_metadata_ref] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_pre_DASHinstr_DASHsymbol] = ACTIONS(103),
    [anon_sym_post_DASHinstr_DASHsymbol] = ACTIONS(103),
    [anon_sym_heap_DASHalloc_DASHmarker] = ACTIONS(105),
    [anon_sym_debug_DASHinstr_DASHnumber] = ACTIONS(107),
    [anon_sym_debug_DASHlocation] = ACTIONS(105),
    [anon_sym_COLON_COLON] = ACTIONS(129),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_target_DASHflags] = ACTIONS(41),
    [anon_sym_CustomRegMask] = ACTIONS(43),
    [anon_sym_same_value] = ACTIONS(45),
    [anon_sym_def_cfa_register] = ACTIONS(45),
    [anon_sym_restore] = ACTIONS(45),
    [anon_sym_undefined] = ACTIONS(45),
    [anon_sym_offset] = ACTIONS(47),
    [anon_sym_rel_offset] = ACTIONS(47),
    [anon_sym_def_cfa] = ACTIONS(47),
    [anon_sym_def_cfa_offset] = ACTIONS(49),
    [anon_sym_adjust_cfa_offset] = ACTIONS(49),
    [anon_sym_llvm_def_aspace_cfa] = ACTIONS(51),
    [anon_sym_register] = ACTIONS(53),
    [anon_sym_escape] = ACTIONS(55),
    [anon_sym_remember_state] = ACTIONS(57),
    [anon_sym_restore_state] = ACTIONS(57),
    [anon_sym_window_save] = ACTIONS(57),
    [anon_sym_negate_ra_sign_state] = ACTIONS(57),
    [anon_sym_intpred] = ACTIONS(59),
    [anon_sym_floatpred] = ACTIONS(61),
    [anon_sym_shufflemask] = ACTIONS(63),
    [anon_sym_undef] = ACTIONS(65),
    [anon_sym_liveout] = ACTIONS(67),
    [anon_sym_target_DASHindex] = ACTIONS(69),
    [anon_sym_blockaddress] = ACTIONS(71),
    [anon_sym_intrinsic] = ACTIONS(73),
    [anon_sym_implicit] = ACTIONS(65),
    [anon_sym_implicit_DASHdef] = ACTIONS(65),
    [anon_sym_def] = ACTIONS(65),
    [anon_sym_dead] = ACTIONS(65),
    [anon_sym_killed] = ACTIONS(65),
    [anon_sym_internal] = ACTIONS(65),
    [anon_sym_early_DASHclobber] = ACTIONS(65),
    [anon_sym_debug_DASHuse] = ACTIONS(65),
    [anon_sym_renamable] = ACTIONS(65),
    [anon_sym_half] = ACTIONS(75),
    [anon_sym_float] = ACTIONS(75),
    [anon_sym_double] = ACTIONS(75),
    [anon_sym_x86_fp80] = ACTIONS(75),
    [anon_sym_fp128] = ACTIONS(75),
    [anon_sym_ppc_fp128] = ACTIONS(75),
  },
  [13] = {
    [sym_mc_symbol] = STATE(114),
    [sym_metadata] = STATE(114),
    [sym_register_operand] = STATE(114),
    [sym_argument] = STATE(190),
    [sym_machine_operand] = STATE(188),
    [sym_custom_regmask] = STATE(114),
    [sym_cfi_operand] = STATE(114),
    [sym_immediate] = STATE(114),
    [sym_predicate] = STATE(114),
    [sym_shuffle_mask] = STATE(114),
    [sym_liveout] = STATE(114),
    [sym_target_index] = STATE(114),
    [sym_block_address] = STATE(114),
    [sym_intrinsic] = STATE(114),
    [sym_register_flag] = STATE(83),
    [sym_float_keyword] = STATE(335),
    [aux_sym_register_operand_repeat1] = STATE(83),
    [sym__newline] = ACTIONS(131),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [sym_mnemonic] = ACTIONS(17),
    [sym_bb_ref] = ACTIONS(19),
    [sym_stack_object] = ACTIONS(19),
    [sym_constant_pool_index] = ACTIONS(19),
    [sym_jump_table_index] = ACTIONS(19),
    [sym_number] = ACTIONS(17),
    [sym_var] = ACTIONS(21),
    [sym_physical_register] = ACTIONS(23),
    [sym_immediate_type] = ACTIONS(25),
    [sym_external_symbol] = ACTIONS(19),
    [sym_global_var] = ACTIONS(19),
    [sym_metadata_ref] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_pre_DASHinstr_DASHsymbol] = ACTIONS(103),
    [anon_sym_post_DASHinstr_DASHsymbol] = ACTIONS(103),
    [anon_sym_heap_DASHalloc_DASHmarker] = ACTIONS(105),
    [anon_sym_debug_DASHinstr_DASHnumber] = ACTIONS(107),
    [anon_sym_debug_DASHlocation] = ACTIONS(105),
    [anon_sym_COLON_COLON] = ACTIONS(133),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_target_DASHflags] = ACTIONS(41),
    [anon_sym_CustomRegMask] = ACTIONS(43),
    [anon_sym_same_value] = ACTIONS(45),
    [anon_sym_def_cfa_register] = ACTIONS(45),
    [anon_sym_restore] = ACTIONS(45),
    [anon_sym_undefined] = ACTIONS(45),
    [anon_sym_offset] = ACTIONS(47),
    [anon_sym_rel_offset] = ACTIONS(47),
    [anon_sym_def_cfa] = ACTIONS(47),
    [anon_sym_def_cfa_offset] = ACTIONS(49),
    [anon_sym_adjust_cfa_offset] = ACTIONS(49),
    [anon_sym_llvm_def_aspace_cfa] = ACTIONS(51),
    [anon_sym_register] = ACTIONS(53),
    [anon_sym_escape] = ACTIONS(55),
    [anon_sym_remember_state] = ACTIONS(57),
    [anon_sym_restore_state] = ACTIONS(57),
    [anon_sym_window_save] = ACTIONS(57),
    [anon_sym_negate_ra_sign_state] = ACTIONS(57),
    [anon_sym_intpred] = ACTIONS(59),
    [anon_sym_floatpred] = ACTIONS(61),
    [anon_sym_shufflemask] = ACTIONS(63),
    [anon_sym_undef] = ACTIONS(65),
    [anon_sym_liveout] = ACTIONS(67),
    [anon_sym_target_DASHindex] = ACTIONS(69),
    [anon_sym_blockaddress] = ACTIONS(71),
    [anon_sym_intrinsic] = ACTIONS(73),
    [anon_sym_implicit] = ACTIONS(65),
    [anon_sym_implicit_DASHdef] = ACTIONS(65),
    [anon_sym_def] = ACTIONS(65),
    [anon_sym_dead] = ACTIONS(65),
    [anon_sym_killed] = ACTIONS(65),
    [anon_sym_internal] = ACTIONS(65),
    [anon_sym_early_DASHclobber] = ACTIONS(65),
    [anon_sym_debug_DASHuse] = ACTIONS(65),
    [anon_sym_renamable] = ACTIONS(65),
    [anon_sym_half] = ACTIONS(75),
    [anon_sym_float] = ACTIONS(75),
    [anon_sym_double] = ACTIONS(75),
    [anon_sym_x86_fp80] = ACTIONS(75),
    [anon_sym_fp128] = ACTIONS(75),
    [anon_sym_ppc_fp128] = ACTIONS(75),
  },
  [14] = {
    [sym_mc_symbol] = STATE(114),
    [sym_metadata] = STATE(114),
    [sym_register_operand] = STATE(114),
    [sym_argument] = STATE(190),
    [sym_machine_operand] = STATE(188),
    [sym_custom_regmask] = STATE(114),
    [sym_cfi_operand] = STATE(114),
    [sym_immediate] = STATE(114),
    [sym_predicate] = STATE(114),
    [sym_shuffle_mask] = STATE(114),
    [sym_liveout] = STATE(114),
    [sym_target_index] = STATE(114),
    [sym_block_address] = STATE(114),
    [sym_intrinsic] = STATE(114),
    [sym_register_flag] = STATE(83),
    [sym_float_keyword] = STATE(335),
    [aux_sym_register_operand_repeat1] = STATE(83),
    [sym__newline] = ACTIONS(135),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [sym_mnemonic] = ACTIONS(17),
    [sym_bb_ref] = ACTIONS(19),
    [sym_stack_object] = ACTIONS(19),
    [sym_constant_pool_index] = ACTIONS(19),
    [sym_jump_table_index] = ACTIONS(19),
    [sym_number] = ACTIONS(17),
    [sym_var] = ACTIONS(21),
    [sym_physical_register] = ACTIONS(23),
    [sym_immediate_type] = ACTIONS(25),
    [sym_external_symbol] = ACTIONS(19),
    [sym_global_var] = ACTIONS(19),
    [sym_metadata_ref] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(135),
    [anon_sym_pre_DASHinstr_DASHsymbol] = ACTIONS(103),
    [anon_sym_post_DASHinstr_DASHsymbol] = ACTIONS(103),
    [anon_sym_heap_DASHalloc_DASHmarker] = ACTIONS(105),
    [anon_sym_debug_DASHinstr_DASHnumber] = ACTIONS(107),
    [anon_sym_debug_DASHlocation] = ACTIONS(105),
    [anon_sym_COLON_COLON] = ACTIONS(137),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_target_DASHflags] = ACTIONS(41),
    [anon_sym_CustomRegMask] = ACTIONS(43),
    [anon_sym_same_value] = ACTIONS(45),
    [anon_sym_def_cfa_register] = ACTIONS(45),
    [anon_sym_restore] = ACTIONS(45),
    [anon_sym_undefined] = ACTIONS(45),
    [anon_sym_offset] = ACTIONS(47),
    [anon_sym_rel_offset] = ACTIONS(47),
    [anon_sym_def_cfa] = ACTIONS(47),
    [anon_sym_def_cfa_offset] = ACTIONS(49),
    [anon_sym_adjust_cfa_offset] = ACTIONS(49),
    [anon_sym_llvm_def_aspace_cfa] = ACTIONS(51),
    [anon_sym_register] = ACTIONS(53),
    [anon_sym_escape] = ACTIONS(55),
    [anon_sym_remember_state] = ACTIONS(57),
    [anon_sym_restore_state] = ACTIONS(57),
    [anon_sym_window_save] = ACTIONS(57),
    [anon_sym_negate_ra_sign_state] = ACTIONS(57),
    [anon_sym_intpred] = ACTIONS(59),
    [anon_sym_floatpred] = ACTIONS(61),
    [anon_sym_shufflemask] = ACTIONS(63),
    [anon_sym_undef] = ACTIONS(65),
    [anon_sym_liveout] = ACTIONS(67),
    [anon_sym_target_DASHindex] = ACTIONS(69),
    [anon_sym_blockaddress] = ACTIONS(71),
    [anon_sym_intrinsic] = ACTIONS(73),
    [anon_sym_implicit] = ACTIONS(65),
    [anon_sym_implicit_DASHdef] = ACTIONS(65),
    [anon_sym_def] = ACTIONS(65),
    [anon_sym_dead] = ACTIONS(65),
    [anon_sym_killed] = ACTIONS(65),
    [anon_sym_internal] = ACTIONS(65),
    [anon_sym_early_DASHclobber] = ACTIONS(65),
    [anon_sym_debug_DASHuse] = ACTIONS(65),
    [anon_sym_renamable] = ACTIONS(65),
    [anon_sym_half] = ACTIONS(75),
    [anon_sym_float] = ACTIONS(75),
    [anon_sym_double] = ACTIONS(75),
    [anon_sym_x86_fp80] = ACTIONS(75),
    [anon_sym_fp128] = ACTIONS(75),
    [anon_sym_ppc_fp128] = ACTIONS(75),
  },
  [15] = {
    [sym_mc_symbol] = STATE(114),
    [sym_metadata] = STATE(114),
    [sym_register_operand] = STATE(114),
    [sym_argument] = STATE(190),
    [sym_machine_operand] = STATE(188),
    [sym_custom_regmask] = STATE(114),
    [sym_cfi_operand] = STATE(114),
    [sym_immediate] = STATE(114),
    [sym_predicate] = STATE(114),
    [sym_shuffle_mask] = STATE(114),
    [sym_liveout] = STATE(114),
    [sym_target_index] = STATE(114),
    [sym_block_address] = STATE(114),
    [sym_intrinsic] = STATE(114),
    [sym_register_flag] = STATE(83),
    [sym_float_keyword] = STATE(335),
    [aux_sym_register_operand_repeat1] = STATE(83),
    [sym__newline] = ACTIONS(139),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [sym_mnemonic] = ACTIONS(17),
    [sym_bb_ref] = ACTIONS(19),
    [sym_stack_object] = ACTIONS(19),
    [sym_constant_pool_index] = ACTIONS(19),
    [sym_jump_table_index] = ACTIONS(19),
    [sym_number] = ACTIONS(17),
    [sym_var] = ACTIONS(21),
    [sym_physical_register] = ACTIONS(23),
    [sym_immediate_type] = ACTIONS(25),
    [sym_external_symbol] = ACTIONS(19),
    [sym_global_var] = ACTIONS(19),
    [sym_metadata_ref] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_pre_DASHinstr_DASHsymbol] = ACTIONS(103),
    [anon_sym_post_DASHinstr_DASHsymbol] = ACTIONS(103),
    [anon_sym_heap_DASHalloc_DASHmarker] = ACTIONS(105),
    [anon_sym_debug_DASHinstr_DASHnumber] = ACTIONS(107),
    [anon_sym_debug_DASHlocation] = ACTIONS(105),
    [anon_sym_COLON_COLON] = ACTIONS(141),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_target_DASHflags] = ACTIONS(41),
    [anon_sym_CustomRegMask] = ACTIONS(43),
    [anon_sym_same_value] = ACTIONS(45),
    [anon_sym_def_cfa_register] = ACTIONS(45),
    [anon_sym_restore] = ACTIONS(45),
    [anon_sym_undefined] = ACTIONS(45),
    [anon_sym_offset] = ACTIONS(47),
    [anon_sym_rel_offset] = ACTIONS(47),
    [anon_sym_def_cfa] = ACTIONS(47),
    [anon_sym_def_cfa_offset] = ACTIONS(49),
    [anon_sym_adjust_cfa_offset] = ACTIONS(49),
    [anon_sym_llvm_def_aspace_cfa] = ACTIONS(51),
    [anon_sym_register] = ACTIONS(53),
    [anon_sym_escape] = ACTIONS(55),
    [anon_sym_remember_state] = ACTIONS(57),
    [anon_sym_restore_state] = ACTIONS(57),
    [anon_sym_window_save] = ACTIONS(57),
    [anon_sym_negate_ra_sign_state] = ACTIONS(57),
    [anon_sym_intpred] = ACTIONS(59),
    [anon_sym_floatpred] = ACTIONS(61),
    [anon_sym_shufflemask] = ACTIONS(63),
    [anon_sym_undef] = ACTIONS(65),
    [anon_sym_liveout] = ACTIONS(67),
    [anon_sym_target_DASHindex] = ACTIONS(69),
    [anon_sym_blockaddress] = ACTIONS(71),
    [anon_sym_intrinsic] = ACTIONS(73),
    [anon_sym_implicit] = ACTIONS(65),
    [anon_sym_implicit_DASHdef] = ACTIONS(65),
    [anon_sym_def] = ACTIONS(65),
    [anon_sym_dead] = ACTIONS(65),
    [anon_sym_killed] = ACTIONS(65),
    [anon_sym_internal] = ACTIONS(65),
    [anon_sym_early_DASHclobber] = ACTIONS(65),
    [anon_sym_debug_DASHuse] = ACTIONS(65),
    [anon_sym_renamable] = ACTIONS(65),
    [anon_sym_half] = ACTIONS(75),
    [anon_sym_float] = ACTIONS(75),
    [anon_sym_double] = ACTIONS(75),
    [anon_sym_x86_fp80] = ACTIONS(75),
    [anon_sym_fp128] = ACTIONS(75),
    [anon_sym_ppc_fp128] = ACTIONS(75),
  },
  [16] = {
    [sym_mc_symbol] = STATE(114),
    [sym_metadata] = STATE(114),
    [sym_register_operand] = STATE(114),
    [sym_argument] = STATE(190),
    [sym_machine_operand] = STATE(188),
    [sym_custom_regmask] = STATE(114),
    [sym_cfi_operand] = STATE(114),
    [sym_immediate] = STATE(114),
    [sym_predicate] = STATE(114),
    [sym_shuffle_mask] = STATE(114),
    [sym_liveout] = STATE(114),
    [sym_target_index] = STATE(114),
    [sym_block_address] = STATE(114),
    [sym_intrinsic] = STATE(114),
    [sym_register_flag] = STATE(83),
    [sym_float_keyword] = STATE(335),
    [aux_sym_register_operand_repeat1] = STATE(83),
    [sym__newline] = ACTIONS(143),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [sym_mnemonic] = ACTIONS(17),
    [sym_bb_ref] = ACTIONS(19),
    [sym_stack_object] = ACTIONS(19),
    [sym_constant_pool_index] = ACTIONS(19),
    [sym_jump_table_index] = ACTIONS(19),
    [sym_number] = ACTIONS(17),
    [sym_var] = ACTIONS(21),
    [sym_physical_register] = ACTIONS(23),
    [sym_immediate_type] = ACTIONS(25),
    [sym_external_symbol] = ACTIONS(19),
    [sym_global_var] = ACTIONS(19),
    [sym_metadata_ref] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(143),
    [anon_sym_pre_DASHinstr_DASHsymbol] = ACTIONS(103),
    [anon_sym_post_DASHinstr_DASHsymbol] = ACTIONS(103),
    [anon_sym_heap_DASHalloc_DASHmarker] = ACTIONS(105),
    [anon_sym_debug_DASHinstr_DASHnumber] = ACTIONS(107),
    [anon_sym_debug_DASHlocation] = ACTIONS(105),
    [anon_sym_COLON_COLON] = ACTIONS(145),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_target_DASHflags] = ACTIONS(41),
    [anon_sym_CustomRegMask] = ACTIONS(43),
    [anon_sym_same_value] = ACTIONS(45),
    [anon_sym_def_cfa_register] = ACTIONS(45),
    [anon_sym_restore] = ACTIONS(45),
    [anon_sym_undefined] = ACTIONS(45),
    [anon_sym_offset] = ACTIONS(47),
    [anon_sym_rel_offset] = ACTIONS(47),
    [anon_sym_def_cfa] = ACTIONS(47),
    [anon_sym_def_cfa_offset] = ACTIONS(49),
    [anon_sym_adjust_cfa_offset] = ACTIONS(49),
    [anon_sym_llvm_def_aspace_cfa] = ACTIONS(51),
    [anon_sym_register] = ACTIONS(53),
    [anon_sym_escape] = ACTIONS(55),
    [anon_sym_remember_state] = ACTIONS(57),
    [anon_sym_restore_state] = ACTIONS(57),
    [anon_sym_window_save] = ACTIONS(57),
    [anon_sym_negate_ra_sign_state] = ACTIONS(57),
    [anon_sym_intpred] = ACTIONS(59),
    [anon_sym_floatpred] = ACTIONS(61),
    [anon_sym_shufflemask] = ACTIONS(63),
    [anon_sym_undef] = ACTIONS(65),
    [anon_sym_liveout] = ACTIONS(67),
    [anon_sym_target_DASHindex] = ACTIONS(69),
    [anon_sym_blockaddress] = ACTIONS(71),
    [anon_sym_intrinsic] = ACTIONS(73),
    [anon_sym_implicit] = ACTIONS(65),
    [anon_sym_implicit_DASHdef] = ACTIONS(65),
    [anon_sym_def] = ACTIONS(65),
    [anon_sym_dead] = ACTIONS(65),
    [anon_sym_killed] = ACTIONS(65),
    [anon_sym_internal] = ACTIONS(65),
    [anon_sym_early_DASHclobber] = ACTIONS(65),
    [anon_sym_debug_DASHuse] = ACTIONS(65),
    [anon_sym_renamable] = ACTIONS(65),
    [anon_sym_half] = ACTIONS(75),
    [anon_sym_float] = ACTIONS(75),
    [anon_sym_double] = ACTIONS(75),
    [anon_sym_x86_fp80] = ACTIONS(75),
    [anon_sym_fp128] = ACTIONS(75),
    [anon_sym_ppc_fp128] = ACTIONS(75),
  },
  [17] = {
    [sym_mc_symbol] = STATE(114),
    [sym_metadata] = STATE(114),
    [sym_register_operand] = STATE(114),
    [sym_argument] = STATE(190),
    [sym_machine_operand] = STATE(188),
    [sym_custom_regmask] = STATE(114),
    [sym_cfi_operand] = STATE(114),
    [sym_immediate] = STATE(114),
    [sym_predicate] = STATE(114),
    [sym_shuffle_mask] = STATE(114),
    [sym_liveout] = STATE(114),
    [sym_target_index] = STATE(114),
    [sym_block_address] = STATE(114),
    [sym_intrinsic] = STATE(114),
    [sym_register_flag] = STATE(83),
    [sym_float_keyword] = STATE(335),
    [aux_sym_register_operand_repeat1] = STATE(83),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [sym_mnemonic] = ACTIONS(17),
    [sym_bb_ref] = ACTIONS(19),
    [sym_stack_object] = ACTIONS(19),
    [sym_constant_pool_index] = ACTIONS(19),
    [sym_jump_table_index] = ACTIONS(19),
    [sym_number] = ACTIONS(17),
    [sym_var] = ACTIONS(21),
    [sym_physical_register] = ACTIONS(23),
    [sym_immediate_type] = ACTIONS(25),
    [sym_external_symbol] = ACTIONS(19),
    [sym_global_var] = ACTIONS(19),
    [sym_metadata_ref] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_target_DASHflags] = ACTIONS(41),
    [anon_sym_CustomRegMask] = ACTIONS(43),
    [anon_sym_same_value] = ACTIONS(45),
    [anon_sym_def_cfa_register] = ACTIONS(45),
    [anon_sym_restore] = ACTIONS(45),
    [anon_sym_undefined] = ACTIONS(45),
    [anon_sym_offset] = ACTIONS(47),
    [anon_sym_rel_offset] = ACTIONS(47),
    [anon_sym_def_cfa] = ACTIONS(47),
    [anon_sym_def_cfa_offset] = ACTIONS(49),
    [anon_sym_adjust_cfa_offset] = ACTIONS(49),
    [anon_sym_llvm_def_aspace_cfa] = ACTIONS(51),
    [anon_sym_register] = ACTIONS(53),
    [anon_sym_escape] = ACTIONS(55),
    [anon_sym_remember_state] = ACTIONS(57),
    [anon_sym_restore_state] = ACTIONS(57),
    [anon_sym_window_save] = ACTIONS(57),
    [anon_sym_negate_ra_sign_state] = ACTIONS(57),
    [anon_sym_intpred] = ACTIONS(59),
    [anon_sym_floatpred] = ACTIONS(61),
    [anon_sym_shufflemask] = ACTIONS(63),
    [anon_sym_undef] = ACTIONS(65),
    [anon_sym_liveout] = ACTIONS(67),
    [anon_sym_target_DASHindex] = ACTIONS(69),
    [anon_sym_blockaddress] = ACTIONS(71),
    [anon_sym_intrinsic] = ACTIONS(73),
    [anon_sym_implicit] = ACTIONS(65),
    [anon_sym_implicit_DASHdef] = ACTIONS(65),
    [anon_sym_def] = ACTIONS(65),
    [anon_sym_dead] = ACTIONS(65),
    [anon_sym_killed] = ACTIONS(65),
    [anon_sym_internal] = ACTIONS(65),
    [anon_sym_early_DASHclobber] = ACTIONS(65),
    [anon_sym_debug_DASHuse] = ACTIONS(65),
    [anon_sym_renamable] = ACTIONS(65),
    [anon_sym_half] = ACTIONS(75),
    [anon_sym_float] = ACTIONS(75),
    [anon_sym_double] = ACTIONS(75),
    [anon_sym_x86_fp80] = ACTIONS(75),
    [anon_sym_fp128] = ACTIONS(75),
    [anon_sym_ppc_fp128] = ACTIONS(75),
  },
  [18] = {
    [sym_mc_symbol] = STATE(114),
    [sym_metadata] = STATE(114),
    [sym_register_operand] = STATE(114),
    [sym_machine_operand] = STATE(186),
    [sym_custom_regmask] = STATE(114),
    [sym_cfi_operand] = STATE(114),
    [sym_immediate] = STATE(114),
    [sym_predicate] = STATE(114),
    [sym_shuffle_mask] = STATE(114),
    [sym_liveout] = STATE(114),
    [sym_target_index] = STATE(114),
    [sym_block_address] = STATE(114),
    [sym_intrinsic] = STATE(114),
    [sym_register_flag] = STATE(83),
    [sym_float_keyword] = STATE(335),
    [aux_sym_register_operand_repeat1] = STATE(83),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [sym_mnemonic] = ACTIONS(17),
    [sym_bb_ref] = ACTIONS(19),
    [sym_stack_object] = ACTIONS(19),
    [sym_constant_pool_index] = ACTIONS(19),
    [sym_jump_table_index] = ACTIONS(19),
    [sym_number] = ACTIONS(17),
    [sym_var] = ACTIONS(21),
    [sym_physical_register] = ACTIONS(23),
    [sym_immediate_type] = ACTIONS(25),
    [sym_external_symbol] = ACTIONS(19),
    [sym_global_var] = ACTIONS(19),
    [sym_metadata_ref] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_CustomRegMask] = ACTIONS(43),
    [anon_sym_same_value] = ACTIONS(45),
    [anon_sym_def_cfa_register] = ACTIONS(45),
    [anon_sym_restore] = ACTIONS(45),
    [anon_sym_undefined] = ACTIONS(45),
    [anon_sym_offset] = ACTIONS(47),
    [anon_sym_rel_offset] = ACTIONS(47),
    [anon_sym_def_cfa] = ACTIONS(47),
    [anon_sym_def_cfa_offset] = ACTIONS(49),
    [anon_sym_adjust_cfa_offset] = ACTIONS(49),
    [anon_sym_llvm_def_aspace_cfa] = ACTIONS(51),
    [anon_sym_register] = ACTIONS(53),
    [anon_sym_escape] = ACTIONS(55),
    [anon_sym_remember_state] = ACTIONS(57),
    [anon_sym_restore_state] = ACTIONS(57),
    [anon_sym_window_save] = ACTIONS(57),
    [anon_sym_negate_ra_sign_state] = ACTIONS(57),
    [anon_sym_intpred] = ACTIONS(59),
    [anon_sym_floatpred] = ACTIONS(61),
    [anon_sym_shufflemask] = ACTIONS(63),
    [anon_sym_undef] = ACTIONS(65),
    [anon_sym_liveout] = ACTIONS(67),
    [anon_sym_target_DASHindex] = ACTIONS(69),
    [anon_sym_blockaddress] = ACTIONS(71),
    [anon_sym_intrinsic] = ACTIONS(73),
    [anon_sym_implicit] = ACTIONS(65),
    [anon_sym_implicit_DASHdef] = ACTIONS(65),
    [anon_sym_def] = ACTIONS(65),
    [anon_sym_dead] = ACTIONS(65),
    [anon_sym_killed] = ACTIONS(65),
    [anon_sym_internal] = ACTIONS(65),
    [anon_sym_early_DASHclobber] = ACTIONS(65),
    [anon_sym_debug_DASHuse] = ACTIONS(65),
    [anon_sym_renamable] = ACTIONS(65),
    [anon_sym_half] = ACTIONS(75),
    [anon_sym_float] = ACTIONS(75),
    [anon_sym_double] = ACTIONS(75),
    [anon_sym_x86_fp80] = ACTIONS(75),
    [anon_sym_fp128] = ACTIONS(75),
    [anon_sym_ppc_fp128] = ACTIONS(75),
  },
  [19] = {
    [sym_mc_symbol] = STATE(114),
    [sym_metadata] = STATE(114),
    [sym_register_operand] = STATE(114),
    [sym_machine_operand] = STATE(189),
    [sym_custom_regmask] = STATE(114),
    [sym_cfi_operand] = STATE(114),
    [sym_immediate] = STATE(114),
    [sym_predicate] = STATE(114),
    [sym_shuffle_mask] = STATE(114),
    [sym_liveout] = STATE(114),
    [sym_target_index] = STATE(114),
    [sym_block_address] = STATE(114),
    [sym_intrinsic] = STATE(114),
    [sym_register_flag] = STATE(83),
    [sym_float_keyword] = STATE(335),
    [aux_sym_register_operand_repeat1] = STATE(83),
    [sym_comment] = ACTIONS(3),
    [sym_multiline_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [sym_mnemonic] = ACTIONS(17),
    [sym_bb_ref] = ACTIONS(19),
    [sym_stack_object] = ACTIONS(19),
    [sym_constant_pool_index] = ACTIONS(19),
    [sym_jump_table_index] = ACTIONS(19),
    [sym_number] = ACTIONS(17),
    [sym_var] = ACTIONS(21),
    [sym_physical_register] = ACTIONS(23),
    [sym_immediate_type] = ACTIONS(25),
    [sym_external_symbol] = ACTIONS(19),
    [sym_global_var] = ACTIONS(19),
    [sym_metadata_ref] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym__] = ACTIONS(39),
    [anon_sym_CustomRegMask] = ACTIONS(43),
    [anon_sym_same_value] = ACTIONS(45),
    [anon_sym_def_cfa_register] = ACTIONS(45),
    [anon_sym_restore] = ACTIONS(45),
    [anon_sym_undefined] = ACTIONS(45),
    [anon_sym_offset] = ACTIONS(47),
    [anon_sym_rel_offset] = ACTIONS(47),
    [anon_sym_def_cfa] = ACTIONS(47),
    [anon_sym_def_cfa_offset] = ACTIONS(49),
    [anon_sym_adjust_cfa_offset] = ACTIONS(49),
    [anon_sym_llvm_def_aspace_cfa] = ACTIONS(51),
    [anon_sym_register] = ACTIONS(53),
    [anon_sym_escape] = ACTIONS(55),
    [anon_sym_remember_state] = ACTIONS(57),
    [anon_sym_restore_state] = ACTIONS(57),
    [anon_sym_window_save] = ACTIONS(57),
    [anon_sym_negate_ra_sign_state] = ACTIONS(57),
    [anon_sym_intpred] = ACTIONS(59),
    [anon_sym_floatpred] = ACTIONS(61),
    [anon_sym_shufflemask] = ACTIONS(63),
    [anon_sym_undef] = ACTIONS(65),
    [anon_sym_liveout] = ACTIONS(67),
    [anon_sym_target_DASHindex] = ACTIONS(69),
    [anon_sym_blockaddress] = ACTIONS(71),
    [anon_sym_intrinsic] = ACTIONS(73),
    [anon_sym_implicit] = ACTIONS(65),
    [anon_sym_implicit_DASHdef] = ACTIONS(65),
    [anon_sym_def] = ACTIONS(65),
    [anon_sym_dead] = ACTIONS(65),
    [anon_sym_killed] = ACTIONS(65),
    [anon_sym_internal] = ACTIONS(65),
    [anon_sym_early_DASHclobber] = ACTIONS(65),
    [anon_sym_debug_DASHuse] = ACTIONS(65),
    [anon_sym_renamable] = ACTIONS(65),
    [anon_sym_half] = ACTIONS(75),
    [anon_sym_float] = ACTIONS(75),
    [anon_sym_double] = ACTIONS(75),
    [anon_sym_x86_fp80] = ACTIONS(75),
    [anon_sym_fp128] = ACTIONS(75),
    [anon_sym_ppc_fp128] = ACTIONS(75),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(23), 1,
      sym_physical_register,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    ACTIONS(149), 1,
      sym__newline,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym_var,
    ACTIONS(157), 1,
      anon_sym_successors,
    ACTIONS(159), 1,
      anon_sym_liveins,
    STATE(27), 1,
      aux_sym_basic_block_repeat2,
    STATE(31), 1,
      aux_sym_basic_block_repeat3,
    STATE(411), 1,
      sym_instruction,
    STATE(416), 1,
      sym_register_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    STATE(81), 2,
      sym_instruction_flag,
      aux_sym_instruction_repeat2,
    STATE(82), 2,
      sym_register_flag,
      aux_sym_register_operand_repeat1,
    STATE(564), 2,
      sym_successors,
      sym_liveins,
    ACTIONS(65), 10,
      anon_sym_undef,
      anon_sym_implicit,
      anon_sym_implicit_DASHdef,
      anon_sym_def,
      anon_sym_dead,
      anon_sym_killed,
      anon_sym_internal,
      anon_sym_early_DASHclobber,
      anon_sym_debug_DASHuse,
      anon_sym_renamable,
    ACTIONS(161), 13,
      anon_sym_frame_DASHsetup,
      anon_sym_frame_DASHdestroy,
      anon_sym_nnan,
      anon_sym_ninf,
      anon_sym_nsz,
      anon_sym_arcp,
      anon_sym_contract,
      anon_sym_afn,
      anon_sym_reassoc,
      anon_sym_nuw,
      anon_sym_nsw,
      anon_sym_exact,
      anon_sym_nofpexcept,
  [80] = 18,
    ACTIONS(23), 1,
      sym_physical_register,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(155), 1,
      sym_var,
    ACTIONS(157), 1,
      anon_sym_successors,
    ACTIONS(159), 1,
      anon_sym_liveins,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    ACTIONS(165), 1,
      sym__newline,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(37), 1,
      aux_sym_basic_block_repeat3,
    STATE(38), 1,
      aux_sym_basic_block_repeat2,
    STATE(411), 1,
      sym_instruction,
    STATE(416), 1,
      sym_register_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    STATE(81), 2,
      sym_instruction_flag,
      aux_sym_instruction_repeat2,
    STATE(82), 2,
      sym_register_flag,
      aux_sym_register_operand_repeat1,
    STATE(564), 2,
      sym_successors,
      sym_liveins,
    ACTIONS(65), 10,
      anon_sym_undef,
      anon_sym_implicit,
      anon_sym_implicit_DASHdef,
      anon_sym_def,
      anon_sym_dead,
      anon_sym_killed,
      anon_sym_internal,
      anon_sym_early_DASHclobber,
      anon_sym_debug_DASHuse,
      anon_sym_renamable,
    ACTIONS(161), 13,
      anon_sym_frame_DASHsetup,
      anon_sym_frame_DASHdestroy,
      anon_sym_nnan,
      anon_sym_ninf,
      anon_sym_nsz,
      anon_sym_arcp,
      anon_sym_contract,
      anon_sym_afn,
      anon_sym_reassoc,
      anon_sym_nuw,
      anon_sym_nsw,
      anon_sym_exact,
      anon_sym_nofpexcept,
  [160] = 18,
    ACTIONS(23), 1,
      sym_physical_register,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(155), 1,
      sym_var,
    ACTIONS(157), 1,
      anon_sym_successors,
    ACTIONS(159), 1,
      anon_sym_liveins,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    ACTIONS(173), 1,
      sym__newline,
    ACTIONS(176), 1,
      sym_identifier,
    STATE(25), 1,
      aux_sym_basic_block_repeat2,
    STATE(33), 1,
      aux_sym_basic_block_repeat3,
    STATE(411), 1,
      sym_instruction,
    STATE(416), 1,
      sym_register_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    STATE(81), 2,
      sym_instruction_flag,
      aux_sym_instruction_repeat2,
    STATE(82), 2,
      sym_register_flag,
      aux_sym_register_operand_repeat1,
    STATE(564), 2,
      sym_successors,
      sym_liveins,
    ACTIONS(65), 10,
      anon_sym_undef,
      anon_sym_implicit,
      anon_sym_implicit_DASHdef,
      anon_sym_def,
      anon_sym_dead,
      anon_sym_killed,
      anon_sym_internal,
      anon_sym_early_DASHclobber,
      anon_sym_debug_DASHuse,
      anon_sym_renamable,
    ACTIONS(161), 13,
      anon_sym_frame_DASHsetup,
      anon_sym_frame_DASHdestroy,
      anon_sym_nnan,
      anon_sym_ninf,
      anon_sym_nsz,
      anon_sym_arcp,
      anon_sym_contract,
      anon_sym_afn,
      anon_sym_reassoc,
      anon_sym_nuw,
      anon_sym_nsw,
      anon_sym_exact,
      anon_sym_nofpexcept,
  [240] = 18,
    ACTIONS(23), 1,
      sym_physical_register,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(155), 1,
      sym_var,
    ACTIONS(157), 1,
      anon_sym_successors,
    ACTIONS(159), 1,
      anon_sym_liveins,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    ACTIONS(165), 1,
      sym__newline,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(26), 1,
      aux_sym_basic_block_repeat2,
    STATE(37), 1,
      aux_sym_basic_block_repeat3,
    STATE(411), 1,
      sym_instruction,
    STATE(416), 1,
      sym_register_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    STATE(81), 2,
      sym_instruction_flag,
      aux_sym_instruction_repeat2,
    STATE(82), 2,
      sym_register_flag,
      aux_sym_register_operand_repeat1,
    STATE(564), 2,
      sym_successors,
      sym_liveins,
    ACTIONS(65), 10,
      anon_sym_undef,
      anon_sym_implicit,
      anon_sym_implicit_DASHdef,
      anon_sym_def,
      anon_sym_dead,
      anon_sym_killed,
      anon_sym_internal,
      anon_sym_early_DASHclobber,
      anon_sym_debug_DASHuse,
      anon_sym_renamable,
    ACTIONS(161), 13,
      anon_sym_frame_DASHsetup,
      anon_sym_frame_DASHdestroy,
      anon_sym_nnan,
      anon_sym_ninf,
      anon_sym_nsz,
      anon_sym_arcp,
      anon_sym_contract,
      anon_sym_afn,
      anon_sym_reassoc,
      anon_sym_nuw,
      anon_sym_nsw,
      anon_sym_exact,
      anon_sym_nofpexcept,
  [320] = 18,
    ACTIONS(23), 1,
      sym_physical_register,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(155), 1,
      sym_var,
    ACTIONS(157), 1,
      anon_sym_successors,
    ACTIONS(159), 1,
      anon_sym_liveins,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    ACTIONS(181), 1,
      sym__newline,
    ACTIONS(184), 1,
      sym_identifier,
    STATE(21), 1,
      aux_sym_basic_block_repeat2,
    STATE(34), 1,
      aux_sym_basic_block_repeat3,
    STATE(411), 1,
      sym_instruction,
    STATE(416), 1,
      sym_register_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    STATE(81), 2,
      sym_instruction_flag,
      aux_sym_instruction_repeat2,
    STATE(82), 2,
      sym_register_flag,
      aux_sym_register_operand_repeat1,
    STATE(564), 2,
      sym_successors,
      sym_liveins,
    ACTIONS(65), 10,
      anon_sym_undef,
      anon_sym_implicit,
      anon_sym_implicit_DASHdef,
      anon_sym_def,
      anon_sym_dead,
      anon_sym_killed,
      anon_sym_internal,
      anon_sym_early_DASHclobber,
      anon_sym_debug_DASHuse,
      anon_sym_renamable,
    ACTIONS(161), 13,
      anon_sym_frame_DASHsetup,
      anon_sym_frame_DASHdestroy,
      anon_sym_nnan,
      anon_sym_ninf,
      anon_sym_nsz,
      anon_sym_arcp,
      anon_sym_contract,
      anon_sym_afn,
      anon_sym_reassoc,
      anon_sym_nuw,
      anon_sym_nsw,
      anon_sym_exact,
      anon_sym_nofpexcept,
  [400] = 18,
    ACTIONS(23), 1,
      sym_physical_register,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(155), 1,
      sym_var,
    ACTIONS(157), 1,
      anon_sym_successors,
    ACTIONS(159), 1,
      anon_sym_liveins,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    ACTIONS(181), 1,
      sym__newline,
    ACTIONS(184), 1,
      sym_identifier,
    STATE(34), 1,
      aux_sym_basic_block_repeat3,
    STATE(38), 1,
      aux_sym_basic_block_repeat2,
    STATE(411), 1,
      sym_instruction,
    STATE(416), 1,
      sym_register_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    STATE(81), 2,
      sym_instruction_flag,
      aux_sym_instruction_repeat2,
    STATE(82), 2,
      sym_register_flag,
      aux_sym_register_operand_repeat1,
    STATE(564), 2,
      sym_successors,
      sym_liveins,
    ACTIONS(65), 10,
      anon_sym_undef,
      anon_sym_implicit,
      anon_sym_implicit_DASHdef,
      anon_sym_def,
      anon_sym_dead,
      anon_sym_killed,
      anon_sym_internal,
      anon_sym_early_DASHclobber,
      anon_sym_debug_DASHuse,
      anon_sym_renamable,
    ACTIONS(161), 13,
      anon_sym_frame_DASHsetup,
      anon_sym_frame_DASHdestroy,
      anon_sym_nnan,
      anon_sym_ninf,
      anon_sym_nsz,
      anon_sym_arcp,
      anon_sym_contract,
      anon_sym_afn,
      anon_sym_reassoc,
      anon_sym_nuw,
      anon_sym_nsw,
      anon_sym_exact,
      anon_sym_nofpexcept,
  [480] = 18,
    ACTIONS(23), 1,
      sym_physical_register,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(155), 1,
      sym_var,
    ACTIONS(157), 1,
      anon_sym_successors,
    ACTIONS(159), 1,
      anon_sym_liveins,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
    ACTIONS(189), 1,
      sym__newline,
    ACTIONS(192), 1,
      sym_identifier,
    STATE(35), 1,
      aux_sym_basic_block_repeat3,
    STATE(38), 1,
      aux_sym_basic_block_repeat2,
    STATE(411), 1,
      sym_instruction,
    STATE(416), 1,
      sym_register_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    STATE(81), 2,
      sym_instruction_flag,
      aux_sym_instruction_repeat2,
    STATE(82), 2,
      sym_register_flag,
      aux_sym_register_operand_repeat1,
    STATE(564), 2,
      sym_successors,
      sym_liveins,
    ACTIONS(65), 10,
      anon_sym_undef,
      anon_sym_implicit,
      anon_sym_implicit_DASHdef,
      anon_sym_def,
      anon_sym_dead,
      anon_sym_killed,
      anon_sym_internal,
      anon_sym_early_DASHclobber,
      anon_sym_debug_DASHuse,
      anon_sym_renamable,
    ACTIONS(161), 13,
      anon_sym_frame_DASHsetup,
      anon_sym_frame_DASHdestroy,
      anon_sym_nnan,
      anon_sym_ninf,
      anon_sym_nsz,
      anon_sym_arcp,
      anon_sym_contract,
      anon_sym_afn,
      anon_sym_reassoc,
      anon_sym_nuw,
      anon_sym_nsw,
      anon_sym_exact,
      anon_sym_nofpexcept,
  [560] = 18,
    ACTIONS(23), 1,
      sym_physical_register,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(155), 1,
      sym_var,
    ACTIONS(157), 1,
      anon_sym_successors,
    ACTIONS(159), 1,
      anon_sym_liveins,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    ACTIONS(197), 1,
      sym__newline,
    ACTIONS(200), 1,
      sym_identifier,
    STATE(30), 1,
      aux_sym_basic_block_repeat3,
    STATE(38), 1,
      aux_sym_basic_block_repeat2,
    STATE(411), 1,
      sym_instruction,
    STATE(416), 1,
      sym_register_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    STATE(81), 2,
      sym_instruction_flag,
      aux_sym_instruction_repeat2,
    STATE(82), 2,
      sym_register_flag,
      aux_sym_register_operand_repeat1,
    STATE(564), 2,
      sym_successors,
      sym_liveins,
    ACTIONS(65), 10,
      anon_sym_undef,
      anon_sym_implicit,
      anon_sym_implicit_DASHdef,
      anon_sym_def,
      anon_sym_dead,
      anon_sym_killed,
      anon_sym_internal,
      anon_sym_early_DASHclobber,
      anon_sym_debug_DASHuse,
      anon_sym_renamable,
    ACTIONS(161), 13,
      anon_sym_frame_DASHsetup,
      anon_sym_frame_DASHdestroy,
      anon_sym_nnan,
      anon_sym_ninf,
      anon_sym_nsz,
      anon_sym_arcp,
      anon_sym_contract,
      anon_sym_afn,
      anon_sym_reassoc,
      anon_sym_nuw,
      anon_sym_nsw,
      anon_sym_exact,
      anon_sym_nofpexcept,
  [640] = 14,
    ACTIONS(23), 1,
      sym_physical_register,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(155), 1,
      sym_var,
    ACTIONS(203), 1,
      sym__newline,
    ACTIONS(205), 1,
      sym_identifier,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      aux_sym_bundle_repeat1,
    STATE(416), 1,
      sym_register_operand,
    STATE(572), 1,
      sym_instruction,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    STATE(81), 2,
      sym_instruction_flag,
      aux_sym_instruction_repeat2,
    STATE(82), 2,
      sym_register_flag,
      aux_sym_register_operand_repeat1,
    ACTIONS(65), 10,
      anon_sym_undef,
      anon_sym_implicit,
      anon_sym_implicit_DASHdef,
      anon_sym_def,
      anon_sym_dead,
      anon_sym_killed,
      anon_sym_internal,
      anon_sym_early_DASHclobber,
      anon_sym_debug_DASHuse,
      anon_sym_renamable,
    ACTIONS(161), 13,
      anon_sym_frame_DASHsetup,
      anon_sym_frame_DASHdestroy,
      anon_sym_nnan,
      anon_sym_ninf,
      anon_sym_nsz,
      anon_sym_arcp,
      anon_sym_contract,
      anon_sym_afn,
      anon_sym_reassoc,
      anon_sym_nuw,
      anon_sym_nsw,
      anon_sym_exact,
      anon_sym_nofpexcept,
  [707] = 14,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    ACTIONS(211), 1,
      sym__newline,
    ACTIONS(214), 1,
      sym_identifier,
    ACTIONS(217), 1,
      sym_var,
    ACTIONS(220), 1,
      sym_physical_register,
    ACTIONS(223), 1,
      anon_sym__,
    STATE(29), 1,
      aux_sym_basic_block_repeat3,
    STATE(411), 1,
      sym_instruction,
    STATE(416), 1,
      sym_register_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    STATE(81), 2,
      sym_instruction_flag,
      aux_sym_instruction_repeat2,
    STATE(82), 2,
      sym_register_flag,
      aux_sym_register_operand_repeat1,
    ACTIONS(226), 10,
      anon_sym_undef,
      anon_sym_implicit,
      anon_sym_implicit_DASHdef,
      anon_sym_def,
      anon_sym_dead,
      anon_sym_killed,
      anon_sym_internal,
      anon_sym_early_DASHclobber,
      anon_sym_debug_DASHuse,
      anon_sym_renamable,
    ACTIONS(229), 13,
      anon_sym_frame_DASHsetup,
      anon_sym_frame_DASHdestroy,
      anon_sym_nnan,
      anon_sym_ninf,
      anon_sym_nsz,
      anon_sym_arcp,
      anon_sym_contract,
      anon_sym_afn,
      anon_sym_reassoc,
      anon_sym_nuw,
      anon_sym_nsw,
      anon_sym_exact,
      anon_sym_nofpexcept,
  [774] = 14,
    ACTIONS(23), 1,
      sym_physical_register,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(155), 1,
      sym_var,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(232), 1,
      sym__newline,
    STATE(29), 1,
      aux_sym_basic_block_repeat3,
    STATE(411), 1,
      sym_instruction,
    STATE(416), 1,
      sym_register_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    STATE(81), 2,
      sym_instruction_flag,
      aux_sym_instruction_repeat2,
    STATE(82), 2,
      sym_register_flag,
      aux_sym_register_operand_repeat1,
    ACTIONS(65), 10,
      anon_sym_undef,
      anon_sym_implicit,
      anon_sym_implicit_DASHdef,
      anon_sym_def,
      anon_sym_dead,
      anon_sym_killed,
      anon_sym_internal,
      anon_sym_early_DASHclobber,
      anon_sym_debug_DASHuse,
      anon_sym_renamable,
    ACTIONS(161), 13,
      anon_sym_frame_DASHsetup,
      anon_sym_frame_DASHdestroy,
      anon_sym_nnan,
      anon_sym_ninf,
      anon_sym_nsz,
      anon_sym_arcp,
      anon_sym_contract,
      anon_sym_afn,
      anon_sym_reassoc,
      anon_sym_nuw,
      anon_sym_nsw,
      anon_sym_exact,
      anon_sym_nofpexcept,
  [841] = 14,
    ACTIONS(23), 1,
      sym_physical_register,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(155), 1,
      sym_var,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    ACTIONS(200), 1,
      sym_identifier,
    ACTIONS(235), 1,
      sym__newline,
    STATE(29), 1,
      aux_sym_basic_block_repeat3,
    STATE(411), 1,
      sym_instruction,
    STATE(416), 1,
      sym_register_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    STATE(81), 2,
      sym_instruction_flag,
      aux_sym_instruction_repeat2,
    STATE(82), 2,
      sym_register_flag,
      aux_sym_register_operand_repeat1,
    ACTIONS(65), 10,
      anon_sym_undef,
      anon_sym_implicit,
      anon_sym_implicit_DASHdef,
      anon_sym_def,
      anon_sym_dead,
      anon_sym_killed,
      anon_sym_internal,
      anon_sym_early_DASHclobber,
      anon_sym_debug_DASHuse,
      anon_sym_renamable,
    ACTIONS(161), 13,
      anon_sym_frame_DASHsetup,
      anon_sym_frame_DASHdestroy,
      anon_sym_nnan,
      anon_sym_ninf,
      anon_sym_nsz,
      anon_sym_arcp,
      anon_sym_contract,
      anon_sym_afn,
      anon_sym_reassoc,
      anon_sym_nuw,
      anon_sym_nsw,
      anon_sym_exact,
      anon_sym_nofpexcept,
  [908] = 14,
    ACTIONS(23), 1,
      sym_physical_register,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(155), 1,
      sym_var,
    ACTIONS(205), 1,
      sym_identifier,
    ACTIONS(238), 1,
      sym__newline,
    ACTIONS(240), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      aux_sym_bundle_repeat1,
    STATE(416), 1,
      sym_register_operand,
    STATE(572), 1,
      sym_instruction,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    STATE(81), 2,
      sym_instruction_flag,
      aux_sym_instruction_repeat2,
    STATE(82), 2,
      sym_register_flag,
      aux_sym_register_operand_repeat1,
    ACTIONS(65), 10,
      anon_sym_undef,
      anon_sym_implicit,
      anon_sym_implicit_DASHdef,
      anon_sym_def,
      anon_sym_dead,
      anon_sym_killed,
      anon_sym_internal,
      anon_sym_early_DASHclobber,
      anon_sym_debug_DASHuse,
      anon_sym_renamable,
    ACTIONS(161), 13,
      anon_sym_frame_DASHsetup,
      anon_sym_frame_DASHdestroy,
      anon_sym_nnan,
      anon_sym_ninf,
      anon_sym_nsz,
      anon_sym_arcp,
      anon_sym_contract,
      anon_sym_afn,
      anon_sym_reassoc,
      anon_sym_nuw,
      anon_sym_nsw,
      anon_sym_exact,
      anon_sym_nofpexcept,
  [975] = 14,
    ACTIONS(23), 1,
      sym_physical_register,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(155), 1,
      sym_var,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    ACTIONS(184), 1,
      sym_identifier,
    ACTIONS(242), 1,
      sym__newline,
    STATE(29), 1,
      aux_sym_basic_block_repeat3,
    STATE(411), 1,
      sym_instruction,
    STATE(416), 1,
      sym_register_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    STATE(81), 2,
      sym_instruction_flag,
      aux_sym_instruction_repeat2,
    STATE(82), 2,
      sym_register_flag,
      aux_sym_register_operand_repeat1,
    ACTIONS(65), 10,
      anon_sym_undef,
      anon_sym_implicit,
      anon_sym_implicit_DASHdef,
      anon_sym_def,
      anon_sym_dead,
      anon_sym_killed,
      anon_sym_internal,
      anon_sym_early_DASHclobber,
      anon_sym_debug_DASHuse,
      anon_sym_renamable,
    ACTIONS(161), 13,
      anon_sym_frame_DASHsetup,
      anon_sym_frame_DASHdestroy,
      anon_sym_nnan,
      anon_sym_ninf,
      anon_sym_nsz,
      anon_sym_arcp,
      anon_sym_contract,
      anon_sym_afn,
      anon_sym_reassoc,
      anon_sym_nuw,
      anon_sym_nsw,
      anon_sym_exact,
      anon_sym_nofpexcept,
  [1042] = 14,
    ACTIONS(23), 1,
      sym_physical_register,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(155), 1,
      sym_var,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(245), 1,
      sym__newline,
    STATE(29), 1,
      aux_sym_basic_block_repeat3,
    STATE(411), 1,
      sym_instruction,
    STATE(416), 1,
      sym_register_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    STATE(81), 2,
      sym_instruction_flag,
      aux_sym_instruction_repeat2,
    STATE(82), 2,
      sym_register_flag,
      aux_sym_register_operand_repeat1,
    ACTIONS(65), 10,
      anon_sym_undef,
      anon_sym_implicit,
      anon_sym_implicit_DASHdef,
      anon_sym_def,
      anon_sym_dead,
      anon_sym_killed,
      anon_sym_internal,
      anon_sym_early_DASHclobber,
      anon_sym_debug_DASHuse,
      anon_sym_renamable,
    ACTIONS(161), 13,
      anon_sym_frame_DASHsetup,
      anon_sym_frame_DASHdestroy,
      anon_sym_nnan,
      anon_sym_ninf,
      anon_sym_nsz,
      anon_sym_arcp,
      anon_sym_contract,
      anon_sym_afn,
      anon_sym_reassoc,
      anon_sym_nuw,
      anon_sym_nsw,
      anon_sym_exact,
      anon_sym_nofpexcept,
  [1109] = 14,
    ACTIONS(23), 1,
      sym_physical_register,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(155), 1,
      sym_var,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
    ACTIONS(250), 1,
      sym__newline,
    ACTIONS(253), 1,
      sym_identifier,
    STATE(29), 1,
      aux_sym_basic_block_repeat3,
    STATE(411), 1,
      sym_instruction,
    STATE(416), 1,
      sym_register_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    STATE(81), 2,
      sym_instruction_flag,
      aux_sym_instruction_repeat2,
    STATE(82), 2,
      sym_register_flag,
      aux_sym_register_operand_repeat1,
    ACTIONS(65), 10,
      anon_sym_undef,
      anon_sym_implicit,
      anon_sym_implicit_DASHdef,
      anon_sym_def,
      anon_sym_dead,
      anon_sym_killed,
      anon_sym_internal,
      anon_sym_early_DASHclobber,
      anon_sym_debug_DASHuse,
      anon_sym_renamable,
    ACTIONS(161), 13,
      anon_sym_frame_DASHsetup,
      anon_sym_frame_DASHdestroy,
      anon_sym_nnan,
      anon_sym_ninf,
      anon_sym_nsz,
      anon_sym_arcp,
      anon_sym_contract,
      anon_sym_afn,
      anon_sym_reassoc,
      anon_sym_nuw,
      anon_sym_nsw,
      anon_sym_exact,
      anon_sym_nofpexcept,
  [1176] = 14,
    ACTIONS(256), 1,
      sym__newline,
    ACTIONS(259), 1,
      sym_identifier,
    ACTIONS(262), 1,
      sym_var,
    ACTIONS(265), 1,
      sym_physical_register,
    ACTIONS(268), 1,
      anon_sym_RBRACE,
    ACTIONS(270), 1,
      anon_sym__,
    STATE(36), 1,
      aux_sym_bundle_repeat1,
    STATE(416), 1,
      sym_register_operand,
    STATE(572), 1,
      sym_instruction,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    STATE(81), 2,
      sym_instruction_flag,
      aux_sym_instruction_repeat2,
    STATE(82), 2,
      sym_register_flag,
      aux_sym_register_operand_repeat1,
    ACTIONS(273), 10,
      anon_sym_undef,
      anon_sym_implicit,
      anon_sym_implicit_DASHdef,
      anon_sym_def,
      anon_sym_dead,
      anon_sym_killed,
      anon_sym_internal,
      anon_sym_early_DASHclobber,
      anon_sym_debug_DASHuse,
      anon_sym_renamable,
    ACTIONS(276), 13,
      anon_sym_frame_DASHsetup,
      anon_sym_frame_DASHdestroy,
      anon_sym_nnan,
      anon_sym_ninf,
      anon_sym_nsz,
      anon_sym_arcp,
      anon_sym_contract,
      anon_sym_afn,
      anon_sym_reassoc,
      anon_sym_nuw,
      anon_sym_nsw,
      anon_sym_exact,
      anon_sym_nofpexcept,
  [1243] = 14,
    ACTIONS(23), 1,
      sym_physical_register,
    ACTIONS(39), 1,
      anon_sym__,
    ACTIONS(155), 1,
      sym_var,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
    ACTIONS(192), 1,
      sym_identifier,
    ACTIONS(279), 1,
      sym__newline,
    STATE(29), 1,
      aux_sym_basic_block_repeat3,
    STATE(411), 1,
      sym_instruction,
    STATE(416), 1,
      sym_register_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    STATE(81), 2,
      sym_instruction_flag,
      aux_sym_instruction_repeat2,
    STATE(82), 2,
      sym_register_flag,
      aux_sym_register_operand_repeat1,
    ACTIONS(65), 10,
      anon_sym_undef,
      anon_sym_implicit,
      anon_sym_implicit_DASHdef,
      anon_sym_def,
      anon_sym_dead,
      anon_sym_killed,
      anon_sym_internal,
      anon_sym_early_DASHclobber,
      anon_sym_debug_DASHuse,
      anon_sym_renamable,
    ACTIONS(161), 13,
      anon_sym_frame_DASHsetup,
      anon_sym_frame_DASHdestroy,
      anon_sym_nnan,
      anon_sym_ninf,
      anon_sym_nsz,
      anon_sym_arcp,
      anon_sym_contract,
      anon_sym_afn,
      anon_sym_reassoc,
      anon_sym_nuw,
      anon_sym_nsw,
      anon_sym_exact,
      anon_sym_nofpexcept,
  [1310] = 8,
    ACTIONS(284), 1,
      sym__newline,
    ACTIONS(289), 1,
      anon_sym_successors,
    ACTIONS(292), 1,
      anon_sym_liveins,
    STATE(38), 1,
      aux_sym_basic_block_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    STATE(564), 2,
      sym_successors,
      sym_liveins,
    ACTIONS(282), 3,
      ts_builtin_sym_end,
      sym_var,
      sym_physical_register,
    ACTIONS(287), 25,
      sym_identifier,
      anon_sym__,
      anon_sym_undef,
      anon_sym_implicit,
      anon_sym_implicit_DASHdef,
      anon_sym_def,
      anon_sym_dead,
      anon_sym_killed,
      anon_sym_internal,
      anon_sym_early_DASHclobber,
      anon_sym_debug_DASHuse,
      anon_sym_renamable,
      anon_sym_frame_DASHsetup,
      anon_sym_frame_DASHdestroy,
      anon_sym_nnan,
      anon_sym_ninf,
      anon_sym_nsz,
      anon_sym_arcp,
      anon_sym_contract,
      anon_sym_afn,
      anon_sym_reassoc,
      anon_sym_nuw,
      anon_sym_nsw,
      anon_sym_exact,
      anon_sym_nofpexcept,
  [1363] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(301), 2,
      anon_sym_successors,
      anon_sym_liveins,
    ACTIONS(295), 4,
      ts_builtin_sym_end,
      sym__newline,
      sym_var,
      sym_physical_register,
    ACTIONS(298), 25,
      sym_identifier,
      anon_sym__,
      anon_sym_undef,
      anon_sym_implicit,
      anon_sym_implicit_DASHdef,
      anon_sym_def,
      anon_sym_dead,
      anon_sym_killed,
      anon_sym_internal,
      anon_sym_early_DASHclobber,
      anon_sym_debug_DASHuse,
      anon_sym_renamable,
      anon_sym_frame_DASHsetup,
      anon_sym_frame_DASHdestroy,
      anon_sym_nnan,
      anon_sym_ninf,
      anon_sym_nsz,
      anon_sym_arcp,
      anon_sym_contract,
      anon_sym_afn,
      anon_sym_reassoc,
      anon_sym_nuw,
      anon_sym_nsw,
      anon_sym_exact,
      anon_sym_nofpexcept,
  [1405] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(282), 4,
      ts_builtin_sym_end,
      sym__newline,
      sym_var,
      sym_physical_register,
    ACTIONS(287), 27,
      sym_identifier,
      anon_sym_successors,
      anon_sym_liveins,
      anon_sym__,
      anon_sym_undef,
      anon_sym_implicit,
      anon_sym_implicit_DASHdef,
      anon_sym_def,
      anon_sym_dead,
      anon_sym_killed,
      anon_sym_internal,
      anon_sym_early_DASHclobber,
      anon_sym_debug_DASHuse,
      anon_sym_renamable,
      anon_sym_frame_DASHsetup,
      anon_sym_frame_DASHdestroy,
      anon_sym_nnan,
      anon_sym_ninf,
      anon_sym_nsz,
      anon_sym_arcp,
      anon_sym_contract,
      anon_sym_afn,
      anon_sym_reassoc,
      anon_sym_nuw,
      anon_sym_nsw,
      anon_sym_exact,
      anon_sym_nofpexcept,
  [1445] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(209), 4,
      ts_builtin_sym_end,
      sym__newline,
      sym_var,
      sym_physical_register,
    ACTIONS(303), 25,
      sym_identifier,
      anon_sym__,
      anon_sym_undef,
      anon_sym_implicit,
      anon_sym_implicit_DASHdef,
      anon_sym_def,
      anon_sym_dead,
      anon_sym_killed,
      anon_sym_internal,
      anon_sym_early_DASHclobber,
      anon_sym_debug_DASHuse,
      anon_sym_renamable,
      anon_sym_frame_DASHsetup,
      anon_sym_frame_DASHdestroy,
      anon_sym_nnan,
      anon_sym_ninf,
      anon_sym_nsz,
      anon_sym_arcp,
      anon_sym_contract,
      anon_sym_afn,
      anon_sym_reassoc,
      anon_sym_nuw,
      anon_sym_nsw,
      anon_sym_exact,
      anon_sym_nofpexcept,
  [1483] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(268), 4,
      sym__newline,
      sym_var,
      sym_physical_register,
      anon_sym_RBRACE,
    ACTIONS(305), 25,
      sym_identifier,
      anon_sym__,
      anon_sym_undef,
      anon_sym_implicit,
      anon_sym_implicit_DASHdef,
      anon_sym_def,
      anon_sym_dead,
      anon_sym_killed,
      anon_sym_internal,
      anon_sym_early_DASHclobber,
      anon_sym_debug_DASHuse,
      anon_sym_renamable,
      anon_sym_frame_DASHsetup,
      anon_sym_frame_DASHdestroy,
      anon_sym_nnan,
      anon_sym_ninf,
      anon_sym_nsz,
      anon_sym_arcp,
      anon_sym_contract,
      anon_sym_afn,
      anon_sym_reassoc,
      anon_sym_nuw,
      anon_sym_nsw,
      anon_sym_exact,
      anon_sym_nofpexcept,
  [1521] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(307), 4,
      ts_builtin_sym_end,
      sym__newline,
      sym_var,
      sym_physical_register,
    ACTIONS(309), 25,
      sym_identifier,
      anon_sym__,
      anon_sym_undef,
      anon_sym_implicit,
      anon_sym_implicit_DASHdef,
      anon_sym_def,
      anon_sym_dead,
      anon_sym_killed,
      anon_sym_internal,
      anon_sym_early_DASHclobber,
      anon_sym_debug_DASHuse,
      anon_sym_renamable,
      anon_sym_frame_DASHsetup,
      anon_sym_frame_DASHdestroy,
      anon_sym_nnan,
      anon_sym_ninf,
      anon_sym_nsz,
      anon_sym_arcp,
      anon_sym_contract,
      anon_sym_afn,
      anon_sym_reassoc,
      anon_sym_nuw,
      anon_sym_nsw,
      anon_sym_exact,
      anon_sym_nofpexcept,
  [1559] = 12,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      sym_metadata_ref,
    ACTIONS(322), 1,
      anon_sym_LBRACE,
    ACTIONS(325), 1,
      anon_sym_LT,
    ACTIONS(328), 1,
      anon_sym_BANG,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    STATE(75), 1,
      sym_metadata,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(331), 2,
      anon_sym_null,
      aux_sym_md_value_token1,
    STATE(44), 2,
      sym_md_value,
      aux_sym_metadata_repeat1,
    ACTIONS(314), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_STAR,
    ACTIONS(317), 4,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_GT,
      anon_sym_RBRACK,
  [1605] = 9,
    ACTIONS(337), 1,
      anon_sym_LPAREN,
    ACTIONS(348), 1,
      anon_sym_LBRACE,
    ACTIONS(351), 1,
      anon_sym_LT,
    ACTIONS(354), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(345), 2,
      sym_identifier,
      sym_number,
    STATE(45), 2,
      sym__escaped_ir_content,
      aux_sym_escaped_ir_value_repeat1,
    ACTIONS(340), 5,
      anon_sym_COMMA,
      sym_immediate_type,
      sym_global_var,
      sym_ir_local_var,
      anon_sym_STAR,
    ACTIONS(343), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_GT,
      anon_sym_RBRACK,
      anon_sym_BQUOTE,
  [1644] = 4,
    ACTIONS(361), 1,
      anon_sym_LPAREN2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(357), 4,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_null,
      aux_sym_md_value_token1,
    ACTIONS(359), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      sym_metadata_ref,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [1672] = 3,
    STATE(540), 1,
      sym_floatpred,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(363), 16,
      anon_sym_true,
      anon_sym_false,
      anon_sym_ugt,
      anon_sym_uge,
      anon_sym_ult,
      anon_sym_ule,
      anon_sym_oeq,
      anon_sym_ogt,
      anon_sym_oge,
      anon_sym_olt,
      anon_sym_ole,
      anon_sym_one,
      anon_sym_ord,
      anon_sym_uno,
      anon_sym_ueq,
      anon_sym_une,
  [1698] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(367), 3,
      anon_sym_BANG,
      anon_sym_null,
      aux_sym_md_value_token1,
    ACTIONS(365), 13,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      sym_metadata_ref,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [1723] = 12,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_metadata_ref,
    ACTIONS(375), 1,
      anon_sym_LBRACE,
    ACTIONS(377), 1,
      anon_sym_LT,
    ACTIONS(379), 1,
      anon_sym_BANG,
    ACTIONS(383), 1,
      anon_sym_LBRACK,
    ACTIONS(385), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      sym_metadata,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(381), 2,
      anon_sym_null,
      aux_sym_md_value_token1,
    STATE(44), 2,
      sym_md_value,
      aux_sym_metadata_repeat1,
    ACTIONS(371), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_STAR,
  [1766] = 12,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_metadata_ref,
    ACTIONS(375), 1,
      anon_sym_LBRACE,
    ACTIONS(377), 1,
      anon_sym_LT,
    ACTIONS(379), 1,
      anon_sym_BANG,
    ACTIONS(383), 1,
      anon_sym_LBRACK,
    ACTIONS(385), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      sym_metadata,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(381), 2,
      anon_sym_null,
      aux_sym_md_value_token1,
    STATE(44), 2,
      sym_md_value,
      aux_sym_metadata_repeat1,
    ACTIONS(371), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_STAR,
  [1809] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(389), 2,
      sym_identifier,
      sym_number,
    ACTIONS(387), 14,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_immediate_type,
      sym_global_var,
      sym_ir_local_var,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_BQUOTE,
  [1834] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(393), 3,
      anon_sym_BANG,
      anon_sym_null,
      aux_sym_md_value_token1,
    ACTIONS(391), 13,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      sym_metadata_ref,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [1859] = 12,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_metadata_ref,
    ACTIONS(375), 1,
      anon_sym_LBRACE,
    ACTIONS(377), 1,
      anon_sym_LT,
    ACTIONS(379), 1,
      anon_sym_BANG,
    ACTIONS(383), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      sym_metadata,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(381), 2,
      anon_sym_null,
      aux_sym_md_value_token1,
    STATE(44), 2,
      sym_md_value,
      aux_sym_metadata_repeat1,
    ACTIONS(371), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_STAR,
  [1902] = 12,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_metadata_ref,
    ACTIONS(375), 1,
      anon_sym_LBRACE,
    ACTIONS(377), 1,
      anon_sym_LT,
    ACTIONS(379), 1,
      anon_sym_BANG,
    ACTIONS(383), 1,
      anon_sym_LBRACK,
    ACTIONS(397), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      sym_metadata,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(381), 2,
      anon_sym_null,
      aux_sym_md_value_token1,
    STATE(53), 2,
      sym_md_value,
      aux_sym_metadata_repeat1,
    ACTIONS(371), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_STAR,
  [1945] = 12,
    ACTIONS(399), 1,
      sym_stack_object,
    ACTIONS(403), 1,
      sym_ir_local_var,
    ACTIONS(405), 1,
      anon_sym_BQUOTE,
    ACTIONS(407), 1,
      anon_sym_call_DASHentry,
    ACTIONS(409), 1,
      anon_sym_custom,
    STATE(242), 1,
      sym_machine_pointer_info,
    STATE(387), 1,
      sym_memory_pseudo_source_value_keyword,
    STATE(388), 1,
      sym_escaped_ir_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(401), 2,
      sym_global_var,
      anon_sym_unknown_DASHaddress,
    STATE(389), 2,
      sym_ir_value,
      sym_memory_pseudo_source_value,
    ACTIONS(411), 4,
      anon_sym_constant_DASHpool,
      anon_sym_stack,
      anon_sym_got,
      anon_sym_jump_DASHtable,
  [1988] = 12,
    ACTIONS(399), 1,
      sym_stack_object,
    ACTIONS(403), 1,
      sym_ir_local_var,
    ACTIONS(405), 1,
      anon_sym_BQUOTE,
    ACTIONS(407), 1,
      anon_sym_call_DASHentry,
    ACTIONS(409), 1,
      anon_sym_custom,
    STATE(258), 1,
      sym_machine_pointer_info,
    STATE(387), 1,
      sym_memory_pseudo_source_value_keyword,
    STATE(388), 1,
      sym_escaped_ir_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(401), 2,
      sym_global_var,
      anon_sym_unknown_DASHaddress,
    STATE(389), 2,
      sym_ir_value,
      sym_memory_pseudo_source_value,
    ACTIONS(411), 4,
      anon_sym_constant_DASHpool,
      anon_sym_stack,
      anon_sym_got,
      anon_sym_jump_DASHtable,
  [2031] = 12,
    ACTIONS(399), 1,
      sym_stack_object,
    ACTIONS(403), 1,
      sym_ir_local_var,
    ACTIONS(405), 1,
      anon_sym_BQUOTE,
    ACTIONS(407), 1,
      anon_sym_call_DASHentry,
    ACTIONS(409), 1,
      anon_sym_custom,
    STATE(245), 1,
      sym_machine_pointer_info,
    STATE(387), 1,
      sym_memory_pseudo_source_value_keyword,
    STATE(388), 1,
      sym_escaped_ir_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(401), 2,
      sym_global_var,
      anon_sym_unknown_DASHaddress,
    STATE(389), 2,
      sym_ir_value,
      sym_memory_pseudo_source_value,
    ACTIONS(411), 4,
      anon_sym_constant_DASHpool,
      anon_sym_stack,
      anon_sym_got,
      anon_sym_jump_DASHtable,
  [2074] = 12,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_metadata_ref,
    ACTIONS(375), 1,
      anon_sym_LBRACE,
    ACTIONS(377), 1,
      anon_sym_LT,
    ACTIONS(379), 1,
      anon_sym_BANG,
    ACTIONS(383), 1,
      anon_sym_LBRACK,
    ACTIONS(413), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      sym_metadata,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(381), 2,
      anon_sym_null,
      aux_sym_md_value_token1,
    STATE(44), 2,
      sym_md_value,
      aux_sym_metadata_repeat1,
    ACTIONS(371), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_STAR,
  [2117] = 12,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_metadata_ref,
    ACTIONS(375), 1,
      anon_sym_LBRACE,
    ACTIONS(377), 1,
      anon_sym_LT,
    ACTIONS(379), 1,
      anon_sym_BANG,
    ACTIONS(383), 1,
      anon_sym_LBRACK,
    ACTIONS(415), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      sym_metadata,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(381), 2,
      anon_sym_null,
      aux_sym_md_value_token1,
    STATE(49), 2,
      sym_md_value,
      aux_sym_metadata_repeat1,
    ACTIONS(371), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_STAR,
  [2160] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(419), 2,
      sym_identifier,
      sym_number,
    ACTIONS(417), 14,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_immediate_type,
      sym_global_var,
      sym_ir_local_var,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_BQUOTE,
  [2185] = 4,
    ACTIONS(421), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    STATE(72), 2,
      sym_instruction_flag,
      aux_sym_instruction_repeat2,
    ACTIONS(161), 13,
      anon_sym_frame_DASHsetup,
      anon_sym_frame_DASHdestroy,
      anon_sym_nnan,
      anon_sym_ninf,
      anon_sym_nsz,
      anon_sym_arcp,
      anon_sym_contract,
      anon_sym_afn,
      anon_sym_reassoc,
      anon_sym_nuw,
      anon_sym_nsw,
      anon_sym_exact,
      anon_sym_nofpexcept,
  [2212] = 12,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_metadata_ref,
    ACTIONS(375), 1,
      anon_sym_LBRACE,
    ACTIONS(377), 1,
      anon_sym_LT,
    ACTIONS(379), 1,
      anon_sym_BANG,
    ACTIONS(383), 1,
      anon_sym_LBRACK,
    ACTIONS(415), 1,
      anon_sym_GT,
    STATE(75), 1,
      sym_metadata,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(381), 2,
      anon_sym_null,
      aux_sym_md_value_token1,
    STATE(71), 2,
      sym_md_value,
      aux_sym_metadata_repeat1,
    ACTIONS(371), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_STAR,
  [2255] = 4,
    ACTIONS(423), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    STATE(72), 2,
      sym_instruction_flag,
      aux_sym_instruction_repeat2,
    ACTIONS(161), 13,
      anon_sym_frame_DASHsetup,
      anon_sym_frame_DASHdestroy,
      anon_sym_nnan,
      anon_sym_ninf,
      anon_sym_nsz,
      anon_sym_arcp,
      anon_sym_contract,
      anon_sym_afn,
      anon_sym_reassoc,
      anon_sym_nuw,
      anon_sym_nsw,
      anon_sym_exact,
      anon_sym_nofpexcept,
  [2282] = 4,
    ACTIONS(423), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    STATE(61), 2,
      sym_instruction_flag,
      aux_sym_instruction_repeat2,
    ACTIONS(161), 13,
      anon_sym_frame_DASHsetup,
      anon_sym_frame_DASHdestroy,
      anon_sym_nnan,
      anon_sym_ninf,
      anon_sym_nsz,
      anon_sym_arcp,
      anon_sym_contract,
      anon_sym_afn,
      anon_sym_reassoc,
      anon_sym_nuw,
      anon_sym_nsw,
      anon_sym_exact,
      anon_sym_nofpexcept,
  [2309] = 12,
    ACTIONS(399), 1,
      sym_stack_object,
    ACTIONS(403), 1,
      sym_ir_local_var,
    ACTIONS(405), 1,
      anon_sym_BQUOTE,
    ACTIONS(407), 1,
      anon_sym_call_DASHentry,
    ACTIONS(409), 1,
      anon_sym_custom,
    STATE(247), 1,
      sym_machine_pointer_info,
    STATE(387), 1,
      sym_memory_pseudo_source_value_keyword,
    STATE(388), 1,
      sym_escaped_ir_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(401), 2,
      sym_global_var,
      anon_sym_unknown_DASHaddress,
    STATE(389), 2,
      sym_ir_value,
      sym_memory_pseudo_source_value,
    ACTIONS(411), 4,
      anon_sym_constant_DASHpool,
      anon_sym_stack,
      anon_sym_got,
      anon_sym_jump_DASHtable,
  [2352] = 12,
    ACTIONS(399), 1,
      sym_stack_object,
    ACTIONS(403), 1,
      sym_ir_local_var,
    ACTIONS(405), 1,
      anon_sym_BQUOTE,
    ACTIONS(407), 1,
      anon_sym_call_DASHentry,
    ACTIONS(409), 1,
      anon_sym_custom,
    STATE(259), 1,
      sym_machine_pointer_info,
    STATE(387), 1,
      sym_memory_pseudo_source_value_keyword,
    STATE(388), 1,
      sym_escaped_ir_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(401), 2,
      sym_global_var,
      anon_sym_unknown_DASHaddress,
    STATE(389), 2,
      sym_ir_value,
      sym_memory_pseudo_source_value,
    ACTIONS(411), 4,
      anon_sym_constant_DASHpool,
      anon_sym_stack,
      anon_sym_got,
      anon_sym_jump_DASHtable,
  [2395] = 12,
    ACTIONS(399), 1,
      sym_stack_object,
    ACTIONS(403), 1,
      sym_ir_local_var,
    ACTIONS(405), 1,
      anon_sym_BQUOTE,
    ACTIONS(407), 1,
      anon_sym_call_DASHentry,
    ACTIONS(409), 1,
      anon_sym_custom,
    STATE(277), 1,
      sym_machine_pointer_info,
    STATE(387), 1,
      sym_memory_pseudo_source_value_keyword,
    STATE(388), 1,
      sym_escaped_ir_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(401), 2,
      sym_global_var,
      anon_sym_unknown_DASHaddress,
    STATE(389), 2,
      sym_ir_value,
      sym_memory_pseudo_source_value,
    ACTIONS(411), 4,
      anon_sym_constant_DASHpool,
      anon_sym_stack,
      anon_sym_got,
      anon_sym_jump_DASHtable,
  [2438] = 12,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_metadata_ref,
    ACTIONS(375), 1,
      anon_sym_LBRACE,
    ACTIONS(377), 1,
      anon_sym_LT,
    ACTIONS(379), 1,
      anon_sym_BANG,
    ACTIONS(383), 1,
      anon_sym_LBRACK,
    ACTIONS(385), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      sym_metadata,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(381), 2,
      anon_sym_null,
      aux_sym_md_value_token1,
    STATE(44), 2,
      sym_md_value,
      aux_sym_metadata_repeat1,
    ACTIONS(371), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_STAR,
  [2481] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(427), 3,
      anon_sym_BANG,
      anon_sym_null,
      aux_sym_md_value_token1,
    ACTIONS(425), 13,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      sym_metadata_ref,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [2506] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(431), 3,
      anon_sym_BANG,
      anon_sym_null,
      aux_sym_md_value_token1,
    ACTIONS(429), 13,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      sym_metadata_ref,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [2531] = 12,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_metadata_ref,
    ACTIONS(375), 1,
      anon_sym_LBRACE,
    ACTIONS(377), 1,
      anon_sym_LT,
    ACTIONS(379), 1,
      anon_sym_BANG,
    ACTIONS(383), 1,
      anon_sym_LBRACK,
    ACTIONS(385), 1,
      anon_sym_GT,
    STATE(75), 1,
      sym_metadata,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(381), 2,
      anon_sym_null,
      aux_sym_md_value_token1,
    STATE(44), 2,
      sym_md_value,
      aux_sym_metadata_repeat1,
    ACTIONS(371), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_STAR,
  [2574] = 4,
    ACTIONS(433), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    STATE(72), 2,
      sym_instruction_flag,
      aux_sym_instruction_repeat2,
    ACTIONS(435), 13,
      anon_sym_frame_DASHsetup,
      anon_sym_frame_DASHdestroy,
      anon_sym_nnan,
      anon_sym_ninf,
      anon_sym_nsz,
      anon_sym_arcp,
      anon_sym_contract,
      anon_sym_afn,
      anon_sym_reassoc,
      anon_sym_nuw,
      anon_sym_nsw,
      anon_sym_exact,
      anon_sym_nofpexcept,
  [2601] = 12,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_metadata_ref,
    ACTIONS(375), 1,
      anon_sym_LBRACE,
    ACTIONS(377), 1,
      anon_sym_LT,
    ACTIONS(379), 1,
      anon_sym_BANG,
    ACTIONS(383), 1,
      anon_sym_LBRACK,
    ACTIONS(438), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      sym_metadata,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(381), 2,
      anon_sym_null,
      aux_sym_md_value_token1,
    STATE(58), 2,
      sym_md_value,
      aux_sym_metadata_repeat1,
    ACTIONS(371), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_STAR,
  [2644] = 12,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_metadata_ref,
    ACTIONS(375), 1,
      anon_sym_LBRACE,
    ACTIONS(377), 1,
      anon_sym_LT,
    ACTIONS(379), 1,
      anon_sym_BANG,
    ACTIONS(383), 1,
      anon_sym_LBRACK,
    ACTIONS(415), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      sym_metadata,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(381), 2,
      anon_sym_null,
      aux_sym_md_value_token1,
    STATE(50), 2,
      sym_md_value,
      aux_sym_metadata_repeat1,
    ACTIONS(371), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_STAR,
  [2687] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(442), 3,
      anon_sym_BANG,
      anon_sym_null,
      aux_sym_md_value_token1,
    ACTIONS(440), 13,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      sym_metadata_ref,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [2712] = 8,
    ACTIONS(23), 1,
      sym_physical_register,
    ACTIONS(65), 1,
      anon_sym_implicit,
    ACTIONS(155), 1,
      sym_var,
    ACTIONS(444), 1,
      anon_sym__,
    STATE(486), 1,
      sym_register_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    STATE(82), 2,
      sym_register_flag,
      aux_sym_register_operand_repeat1,
    ACTIONS(446), 9,
      anon_sym_undef,
      anon_sym_implicit_DASHdef,
      anon_sym_def,
      anon_sym_dead,
      anon_sym_killed,
      anon_sym_internal,
      anon_sym_early_DASHclobber,
      anon_sym_debug_DASHuse,
      anon_sym_renamable,
  [2747] = 4,
    ACTIONS(448), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    STATE(63), 2,
      sym_instruction_flag,
      aux_sym_instruction_repeat2,
    ACTIONS(161), 13,
      anon_sym_frame_DASHsetup,
      anon_sym_frame_DASHdestroy,
      anon_sym_nnan,
      anon_sym_ninf,
      anon_sym_nsz,
      anon_sym_arcp,
      anon_sym_contract,
      anon_sym_afn,
      anon_sym_reassoc,
      anon_sym_nuw,
      anon_sym_nsw,
      anon_sym_exact,
      anon_sym_nofpexcept,
  [2774] = 12,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      sym_metadata_ref,
    ACTIONS(375), 1,
      anon_sym_LBRACE,
    ACTIONS(377), 1,
      anon_sym_LT,
    ACTIONS(379), 1,
      anon_sym_BANG,
    ACTIONS(383), 1,
      anon_sym_LBRACK,
    ACTIONS(415), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      sym_metadata,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(381), 2,
      anon_sym_null,
      aux_sym_md_value_token1,
    STATE(68), 2,
      sym_md_value,
      aux_sym_metadata_repeat1,
    ACTIONS(371), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_STAR,
  [2817] = 12,
    ACTIONS(399), 1,
      sym_stack_object,
    ACTIONS(403), 1,
      sym_ir_local_var,
    ACTIONS(405), 1,
      anon_sym_BQUOTE,
    ACTIONS(407), 1,
      anon_sym_call_DASHentry,
    ACTIONS(409), 1,
      anon_sym_custom,
    STATE(250), 1,
      sym_machine_pointer_info,
    STATE(387), 1,
      sym_memory_pseudo_source_value_keyword,
    STATE(388), 1,
      sym_escaped_ir_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(401), 2,
      sym_global_var,
      anon_sym_unknown_DASHaddress,
    STATE(389), 2,
      sym_ir_value,
      sym_memory_pseudo_source_value,
    ACTIONS(411), 4,
      anon_sym_constant_DASHpool,
      anon_sym_stack,
      anon_sym_got,
      anon_sym_jump_DASHtable,
  [2860] = 12,
    ACTIONS(399), 1,
      sym_stack_object,
    ACTIONS(403), 1,
      sym_ir_local_var,
    ACTIONS(405), 1,
      anon_sym_BQUOTE,
    ACTIONS(407), 1,
      anon_sym_call_DASHentry,
    ACTIONS(409), 1,
      anon_sym_custom,
    STATE(263), 1,
      sym_machine_pointer_info,
    STATE(387), 1,
      sym_memory_pseudo_source_value_keyword,
    STATE(388), 1,
      sym_escaped_ir_value,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(401), 2,
      sym_global_var,
      anon_sym_unknown_DASHaddress,
    STATE(389), 2,
      sym_ir_value,
      sym_memory_pseudo_source_value,
    ACTIONS(411), 4,
      anon_sym_constant_DASHpool,
      anon_sym_stack,
      anon_sym_got,
      anon_sym_jump_DASHtable,
  [2903] = 4,
    ACTIONS(450), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    STATE(72), 2,
      sym_instruction_flag,
      aux_sym_instruction_repeat2,
    ACTIONS(161), 13,
      anon_sym_frame_DASHsetup,
      anon_sym_frame_DASHdestroy,
      anon_sym_nnan,
      anon_sym_ninf,
      anon_sym_nsz,
      anon_sym_arcp,
      anon_sym_contract,
      anon_sym_afn,
      anon_sym_reassoc,
      anon_sym_nuw,
      anon_sym_nsw,
      anon_sym_exact,
      anon_sym_nofpexcept,
  [2930] = 7,
    ACTIONS(65), 1,
      anon_sym_implicit,
    ACTIONS(452), 1,
      sym_var,
    ACTIONS(454), 1,
      sym_physical_register,
    ACTIONS(456), 1,
      anon_sym__,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    STATE(84), 2,
      sym_register_flag,
      aux_sym_register_operand_repeat1,
    ACTIONS(446), 9,
      anon_sym_undef,
      anon_sym_implicit_DASHdef,
      anon_sym_def,
      anon_sym_dead,
      anon_sym_killed,
      anon_sym_internal,
      anon_sym_early_DASHclobber,
      anon_sym_debug_DASHuse,
      anon_sym_renamable,
  [2962] = 7,
    ACTIONS(65), 1,
      anon_sym_implicit,
    ACTIONS(454), 1,
      sym_physical_register,
    ACTIONS(456), 1,
      anon_sym__,
    ACTIONS(458), 1,
      sym_var,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    STATE(84), 2,
      sym_register_flag,
      aux_sym_register_operand_repeat1,
    ACTIONS(446), 9,
      anon_sym_undef,
      anon_sym_implicit_DASHdef,
      anon_sym_def,
      anon_sym_dead,
      anon_sym_killed,
      anon_sym_internal,
      anon_sym_early_DASHclobber,
      anon_sym_debug_DASHuse,
      anon_sym_renamable,
  [2994] = 5,
    ACTIONS(465), 1,
      anon_sym_implicit,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    STATE(84), 2,
      sym_register_flag,
      aux_sym_register_operand_repeat1,
    ACTIONS(460), 3,
      sym_var,
      sym_physical_register,
      anon_sym__,
    ACTIONS(462), 9,
      anon_sym_undef,
      anon_sym_implicit_DASHdef,
      anon_sym_def,
      anon_sym_dead,
      anon_sym_killed,
      anon_sym_internal,
      anon_sym_early_DASHclobber,
      anon_sym_debug_DASHuse,
      anon_sym_renamable,
  [3022] = 4,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
    ACTIONS(472), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(470), 12,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3047] = 9,
    ACTIONS(474), 1,
      anon_sym_LPAREN,
    ACTIONS(480), 1,
      anon_sym_LBRACE,
    ACTIONS(482), 1,
      anon_sym_LT,
    ACTIONS(484), 1,
      anon_sym_LBRACK,
    ACTIONS(486), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(478), 2,
      sym_identifier,
      sym_number,
    STATE(92), 2,
      sym__escaped_ir_content,
      aux_sym_escaped_ir_value_repeat1,
    ACTIONS(476), 5,
      anon_sym_COMMA,
      sym_immediate_type,
      sym_global_var,
      sym_ir_local_var,
      anon_sym_STAR,
  [3082] = 4,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(492), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(490), 12,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3107] = 9,
    ACTIONS(474), 1,
      anon_sym_LPAREN,
    ACTIONS(480), 1,
      anon_sym_LBRACE,
    ACTIONS(482), 1,
      anon_sym_LT,
    ACTIONS(484), 1,
      anon_sym_LBRACK,
    ACTIONS(496), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(498), 2,
      sym_identifier,
      sym_number,
    STATE(45), 2,
      sym__escaped_ir_content,
      aux_sym_escaped_ir_value_repeat1,
    ACTIONS(494), 5,
      anon_sym_COMMA,
      sym_immediate_type,
      sym_global_var,
      sym_ir_local_var,
      anon_sym_STAR,
  [3142] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(500), 14,
      sym_identifier,
      anon_sym_frame_DASHsetup,
      anon_sym_frame_DASHdestroy,
      anon_sym_nnan,
      anon_sym_ninf,
      anon_sym_nsz,
      anon_sym_arcp,
      anon_sym_contract,
      anon_sym_afn,
      anon_sym_reassoc,
      anon_sym_nuw,
      anon_sym_nsw,
      anon_sym_exact,
      anon_sym_nofpexcept,
  [3163] = 9,
    ACTIONS(474), 1,
      anon_sym_LPAREN,
    ACTIONS(480), 1,
      anon_sym_LBRACE,
    ACTIONS(482), 1,
      anon_sym_LT,
    ACTIONS(484), 1,
      anon_sym_LBRACK,
    ACTIONS(496), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(498), 2,
      sym_identifier,
      sym_number,
    STATE(45), 2,
      sym__escaped_ir_content,
      aux_sym_escaped_ir_value_repeat1,
    ACTIONS(494), 5,
      anon_sym_COMMA,
      sym_immediate_type,
      sym_global_var,
      sym_ir_local_var,
      anon_sym_STAR,
  [3198] = 9,
    ACTIONS(474), 1,
      anon_sym_LPAREN,
    ACTIONS(480), 1,
      anon_sym_LBRACE,
    ACTIONS(482), 1,
      anon_sym_LT,
    ACTIONS(484), 1,
      anon_sym_LBRACK,
    ACTIONS(496), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(498), 2,
      sym_identifier,
      sym_number,
    STATE(45), 2,
      sym__escaped_ir_content,
      aux_sym_escaped_ir_value_repeat1,
    ACTIONS(494), 5,
      anon_sym_COMMA,
      sym_immediate_type,
      sym_global_var,
      sym_ir_local_var,
      anon_sym_STAR,
  [3233] = 9,
    ACTIONS(474), 1,
      anon_sym_LPAREN,
    ACTIONS(480), 1,
      anon_sym_LBRACE,
    ACTIONS(482), 1,
      anon_sym_LT,
    ACTIONS(484), 1,
      anon_sym_LBRACK,
    ACTIONS(502), 1,
      anon_sym_BQUOTE,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(498), 2,
      sym_identifier,
      sym_number,
    STATE(45), 2,
      sym__escaped_ir_content,
      aux_sym_escaped_ir_value_repeat1,
    ACTIONS(494), 5,
      anon_sym_COMMA,
      sym_immediate_type,
      sym_global_var,
      sym_ir_local_var,
      anon_sym_STAR,
  [3268] = 9,
    ACTIONS(474), 1,
      anon_sym_LPAREN,
    ACTIONS(480), 1,
      anon_sym_LBRACE,
    ACTIONS(482), 1,
      anon_sym_LT,
    ACTIONS(484), 1,
      anon_sym_LBRACK,
    ACTIONS(508), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(506), 2,
      sym_identifier,
      sym_number,
    STATE(97), 2,
      sym__escaped_ir_content,
      aux_sym_escaped_ir_value_repeat1,
    ACTIONS(504), 5,
      anon_sym_COMMA,
      sym_immediate_type,
      sym_global_var,
      sym_ir_local_var,
      anon_sym_STAR,
  [3303] = 9,
    ACTIONS(474), 1,
      anon_sym_LPAREN,
    ACTIONS(480), 1,
      anon_sym_LBRACE,
    ACTIONS(482), 1,
      anon_sym_LT,
    ACTIONS(484), 1,
      anon_sym_LBRACK,
    ACTIONS(508), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(512), 2,
      sym_identifier,
      sym_number,
    STATE(91), 2,
      sym__escaped_ir_content,
      aux_sym_escaped_ir_value_repeat1,
    ACTIONS(510), 5,
      anon_sym_COMMA,
      sym_immediate_type,
      sym_global_var,
      sym_ir_local_var,
      anon_sym_STAR,
  [3338] = 9,
    ACTIONS(474), 1,
      anon_sym_LPAREN,
    ACTIONS(480), 1,
      anon_sym_LBRACE,
    ACTIONS(482), 1,
      anon_sym_LT,
    ACTIONS(484), 1,
      anon_sym_LBRACK,
    ACTIONS(508), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(516), 2,
      sym_identifier,
      sym_number,
    STATE(90), 2,
      sym__escaped_ir_content,
      aux_sym_escaped_ir_value_repeat1,
    ACTIONS(514), 5,
      anon_sym_COMMA,
      sym_immediate_type,
      sym_global_var,
      sym_ir_local_var,
      anon_sym_STAR,
  [3373] = 9,
    ACTIONS(474), 1,
      anon_sym_LPAREN,
    ACTIONS(480), 1,
      anon_sym_LBRACE,
    ACTIONS(482), 1,
      anon_sym_LT,
    ACTIONS(484), 1,
      anon_sym_LBRACK,
    ACTIONS(508), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(520), 2,
      sym_identifier,
      sym_number,
    STATE(88), 2,
      sym__escaped_ir_content,
      aux_sym_escaped_ir_value_repeat1,
    ACTIONS(518), 5,
      anon_sym_COMMA,
      sym_immediate_type,
      sym_global_var,
      sym_ir_local_var,
      anon_sym_STAR,
  [3408] = 9,
    ACTIONS(474), 1,
      anon_sym_LPAREN,
    ACTIONS(480), 1,
      anon_sym_LBRACE,
    ACTIONS(482), 1,
      anon_sym_LT,
    ACTIONS(484), 1,
      anon_sym_LBRACK,
    ACTIONS(496), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(498), 2,
      sym_identifier,
      sym_number,
    STATE(45), 2,
      sym__escaped_ir_content,
      aux_sym_escaped_ir_value_repeat1,
    ACTIONS(494), 5,
      anon_sym_COMMA,
      sym_immediate_type,
      sym_global_var,
      sym_ir_local_var,
      anon_sym_STAR,
  [3443] = 3,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(470), 12,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3465] = 4,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(522), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(490), 11,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3489] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(524), 13,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3509] = 3,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(528), 12,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3531] = 8,
    ACTIONS(530), 1,
      anon_sym_LPAREN,
    ACTIONS(534), 1,
      anon_sym_store,
    ACTIONS(536), 1,
      anon_sym_syncscope,
    STATE(180), 1,
      sym_sync_scope,
    STATE(181), 1,
      sym_atomic_ordering,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(532), 2,
      sym_number,
      anon_sym_unknown_DASHsize,
    ACTIONS(538), 6,
      anon_sym_unordered,
      anon_sym_monotonic,
      anon_sym_acquire,
      anon_sym_release,
      anon_sym_acq_rel,
      anon_sym_seq_cst,
  [3563] = 3,
    ACTIONS(540), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(542), 12,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3585] = 3,
    ACTIONS(546), 1,
      anon_sym_implicit,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(544), 12,
      sym_var,
      sym_physical_register,
      anon_sym__,
      anon_sym_undef,
      anon_sym_implicit_DASHdef,
      anon_sym_def,
      anon_sym_dead,
      anon_sym_killed,
      anon_sym_internal,
      anon_sym_early_DASHclobber,
      anon_sym_debug_DASHuse,
      anon_sym_renamable,
  [3607] = 8,
    ACTIONS(536), 1,
      anon_sym_syncscope,
    ACTIONS(548), 1,
      anon_sym_LPAREN,
    ACTIONS(552), 1,
      anon_sym_store,
    STATE(175), 1,
      sym_atomic_ordering,
    STATE(176), 1,
      sym_sync_scope,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(550), 2,
      sym_number,
      anon_sym_unknown_DASHsize,
    ACTIONS(538), 6,
      anon_sym_unordered,
      anon_sym_monotonic,
      anon_sym_acquire,
      anon_sym_release,
      anon_sym_acq_rel,
      anon_sym_seq_cst,
  [3639] = 3,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(490), 12,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3661] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(554), 13,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3681] = 3,
    ACTIONS(556), 1,
      anon_sym_LPAREN2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(359), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3703] = 4,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
    ACTIONS(558), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(470), 11,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3727] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(429), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3746] = 10,
    ACTIONS(129), 1,
      anon_sym_COLON_COLON,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    ACTIONS(566), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    STATE(162), 1,
      aux_sym_instruction_repeat4,
    STATE(172), 1,
      aux_sym_instruction_repeat3,
    STATE(204), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(127), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(562), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(564), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [3781] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(568), 12,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3800] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(425), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3819] = 4,
    STATE(187), 1,
      sym_offset,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(572), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(570), 9,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
  [3842] = 10,
    ACTIONS(117), 1,
      anon_sym_COLON_COLON,
    ACTIONS(566), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(574), 1,
      anon_sym_COMMA,
    STATE(148), 1,
      aux_sym_instruction_repeat4,
    STATE(172), 1,
      aux_sym_instruction_repeat3,
    STATE(218), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(115), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(562), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(564), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [3877] = 4,
    ACTIONS(576), 1,
      anon_sym_COMMA,
    STATE(131), 1,
      aux_sym_cfi_operand_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(579), 10,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3900] = 10,
    ACTIONS(566), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(581), 1,
      anon_sym_COMMA,
    ACTIONS(585), 1,
      anon_sym_COLON_COLON,
    STATE(115), 1,
      aux_sym_instruction_repeat3,
    STATE(165), 1,
      aux_sym_instruction_repeat4,
    STATE(203), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(562), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(564), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(583), 2,
      sym__newline,
      anon_sym_LBRACE,
  [3935] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(542), 12,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3954] = 7,
    ACTIONS(536), 1,
      anon_sym_syncscope,
    ACTIONS(587), 1,
      anon_sym_LPAREN,
    STATE(177), 1,
      sym_atomic_ordering,
    STATE(178), 1,
      sym_sync_scope,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(589), 2,
      sym_number,
      anon_sym_unknown_DASHsize,
    ACTIONS(538), 6,
      anon_sym_unordered,
      anon_sym_monotonic,
      anon_sym_acquire,
      anon_sym_release,
      anon_sym_acq_rel,
      anon_sym_seq_cst,
  [3983] = 10,
    ACTIONS(566), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    ACTIONS(595), 1,
      anon_sym_COLON_COLON,
    STATE(130), 1,
      aux_sym_instruction_repeat3,
    STATE(140), 1,
      aux_sym_instruction_repeat4,
    STATE(226), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(562), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(564), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(593), 2,
      sym__newline,
      anon_sym_LBRACE,
  [4018] = 10,
    ACTIONS(145), 1,
      anon_sym_COLON_COLON,
    ACTIONS(566), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(597), 1,
      anon_sym_COMMA,
    STATE(164), 1,
      aux_sym_instruction_repeat4,
    STATE(172), 1,
      aux_sym_instruction_repeat3,
    STATE(199), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(143), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(562), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(564), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [4053] = 4,
    ACTIONS(599), 1,
      anon_sym_COMMA,
    STATE(122), 1,
      aux_sym_cfi_operand_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(602), 10,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4076] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(604), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4095] = 10,
    ACTIONS(566), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(606), 1,
      anon_sym_COMMA,
    ACTIONS(610), 1,
      anon_sym_COLON_COLON,
    STATE(133), 1,
      aux_sym_instruction_repeat3,
    STATE(144), 1,
      aux_sym_instruction_repeat4,
    STATE(233), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(562), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(564), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(608), 2,
      sym__newline,
      anon_sym_LBRACE,
  [4130] = 10,
    ACTIONS(566), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(612), 1,
      anon_sym_COMMA,
    ACTIONS(616), 1,
      anon_sym_COLON_COLON,
    STATE(111), 1,
      aux_sym_instruction_repeat3,
    STATE(151), 1,
      aux_sym_instruction_repeat4,
    STATE(224), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(562), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(564), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(614), 2,
      sym__newline,
      anon_sym_LBRACE,
  [4165] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(618), 12,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4184] = 4,
    STATE(191), 1,
      sym_offset,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(572), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(620), 9,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
  [4207] = 10,
    ACTIONS(566), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(622), 1,
      anon_sym_COMMA,
    ACTIONS(626), 1,
      anon_sym_COLON_COLON,
    STATE(121), 1,
      aux_sym_instruction_repeat3,
    STATE(155), 1,
      aux_sym_instruction_repeat4,
    STATE(216), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(562), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(564), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(624), 2,
      sym__newline,
      anon_sym_LBRACE,
  [4242] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(628), 12,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4261] = 10,
    ACTIONS(109), 1,
      anon_sym_COLON_COLON,
    ACTIONS(566), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(630), 1,
      anon_sym_COMMA,
    STATE(139), 1,
      aux_sym_instruction_repeat4,
    STATE(172), 1,
      aux_sym_instruction_repeat3,
    STATE(228), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(101), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(562), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(564), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [4296] = 4,
    ACTIONS(632), 1,
      anon_sym_COMMA,
    STATE(122), 1,
      aux_sym_cfi_operand_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(635), 10,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4319] = 7,
    ACTIONS(536), 1,
      anon_sym_syncscope,
    ACTIONS(548), 1,
      anon_sym_LPAREN,
    STATE(175), 1,
      sym_atomic_ordering,
    STATE(176), 1,
      sym_sync_scope,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(550), 2,
      sym_number,
      anon_sym_unknown_DASHsize,
    ACTIONS(538), 6,
      anon_sym_unordered,
      anon_sym_monotonic,
      anon_sym_acquire,
      anon_sym_release,
      anon_sym_acq_rel,
      anon_sym_seq_cst,
  [4348] = 10,
    ACTIONS(133), 1,
      anon_sym_COLON_COLON,
    ACTIONS(566), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(637), 1,
      anon_sym_COMMA,
    STATE(152), 1,
      aux_sym_instruction_repeat4,
    STATE(172), 1,
      aux_sym_instruction_repeat3,
    STATE(212), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(131), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(562), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(564), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [4383] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(639), 12,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4402] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(641), 11,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4420] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(643), 11,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4438] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(645), 11,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4456] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(647), 11,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4474] = 9,
    ACTIONS(137), 1,
      anon_sym_COLON_COLON,
    ACTIONS(566), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      aux_sym_instruction_repeat4,
    STATE(201), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(135), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(562), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(564), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [4506] = 9,
    ACTIONS(109), 1,
      anon_sym_COLON_COLON,
    ACTIONS(566), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(651), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      aux_sym_instruction_repeat4,
    STATE(228), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(101), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(562), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(564), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [4538] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(653), 11,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4556] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(655), 11,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4574] = 9,
    ACTIONS(566), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(626), 1,
      anon_sym_COLON_COLON,
    ACTIONS(657), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      aux_sym_instruction_repeat4,
    STATE(216), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(562), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(564), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(624), 2,
      sym__newline,
      anon_sym_LBRACE,
  [4606] = 9,
    ACTIONS(133), 1,
      anon_sym_COLON_COLON,
    ACTIONS(566), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(659), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      aux_sym_instruction_repeat4,
    STATE(212), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(131), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(562), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(564), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [4638] = 9,
    ACTIONS(566), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(585), 1,
      anon_sym_COLON_COLON,
    ACTIONS(661), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      aux_sym_instruction_repeat4,
    STATE(203), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(562), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(564), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(583), 2,
      sym__newline,
      anon_sym_LBRACE,
  [4670] = 9,
    ACTIONS(566), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(616), 1,
      anon_sym_COLON_COLON,
    ACTIONS(663), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      aux_sym_instruction_repeat4,
    STATE(224), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(562), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(564), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(614), 2,
      sym__newline,
      anon_sym_LBRACE,
  [4702] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(665), 11,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4720] = 9,
    ACTIONS(113), 1,
      anon_sym_COLON_COLON,
    ACTIONS(566), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(667), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      aux_sym_instruction_repeat4,
    STATE(231), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(111), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(562), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(564), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [4752] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(602), 11,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4770] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(669), 11,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4788] = 9,
    ACTIONS(129), 1,
      anon_sym_COLON_COLON,
    ACTIONS(566), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(671), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      aux_sym_instruction_repeat4,
    STATE(204), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(127), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(562), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(564), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [4820] = 9,
    ACTIONS(125), 1,
      anon_sym_COLON_COLON,
    ACTIONS(566), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(673), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      aux_sym_instruction_repeat4,
    STATE(211), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(123), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(562), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(564), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [4852] = 9,
    ACTIONS(566), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(595), 1,
      anon_sym_COLON_COLON,
    ACTIONS(675), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      aux_sym_instruction_repeat4,
    STATE(226), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(562), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(564), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(593), 2,
      sym__newline,
      anon_sym_LBRACE,
  [4884] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(677), 11,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4902] = 9,
    ACTIONS(145), 1,
      anon_sym_COLON_COLON,
    ACTIONS(566), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(679), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      aux_sym_instruction_repeat4,
    STATE(199), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(143), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(562), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(564), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [4934] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(681), 11,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4952] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(683), 11,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4970] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(685), 11,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4988] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(687), 11,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5006] = 3,
    STATE(540), 1,
      sym_intpred,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(689), 10,
      anon_sym_eq,
      anon_sym_ne,
      anon_sym_sgt,
      anon_sym_sge,
      anon_sym_slt,
      anon_sym_sle,
      anon_sym_ugt,
      anon_sym_uge,
      anon_sym_ult,
      anon_sym_ule,
  [5026] = 9,
    ACTIONS(566), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(610), 1,
      anon_sym_COLON_COLON,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      aux_sym_instruction_repeat4,
    STATE(233), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(562), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(564), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(608), 2,
      sym__newline,
      anon_sym_LBRACE,
  [5058] = 9,
    ACTIONS(121), 1,
      anon_sym_COLON_COLON,
    ACTIONS(566), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(693), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      aux_sym_instruction_repeat4,
    STATE(207), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(119), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(562), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(564), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [5090] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(695), 11,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5108] = 9,
    ACTIONS(141), 1,
      anon_sym_COLON_COLON,
    ACTIONS(566), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(697), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      aux_sym_instruction_repeat4,
    STATE(235), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(139), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(562), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(564), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [5140] = 9,
    ACTIONS(117), 1,
      anon_sym_COLON_COLON,
    ACTIONS(566), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(699), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      aux_sym_instruction_repeat4,
    STATE(218), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(115), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(562), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(564), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [5172] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(701), 11,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5190] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(579), 11,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5208] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(703), 11,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5226] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(705), 11,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5244] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(707), 11,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5262] = 5,
    ACTIONS(709), 1,
      anon_sym_LPAREN,
    STATE(461), 1,
      sym_atomic_ordering,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(711), 2,
      sym_number,
      anon_sym_unknown_DASHsize,
    ACTIONS(538), 6,
      anon_sym_unordered,
      anon_sym_monotonic,
      anon_sym_acquire,
      anon_sym_release,
      anon_sym_acq_rel,
      anon_sym_seq_cst,
  [5285] = 4,
    ACTIONS(713), 1,
      anon_sym_COMMA,
    STATE(172), 1,
      aux_sym_instruction_repeat3,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(716), 8,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
  [5306] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(718), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
  [5323] = 5,
    ACTIONS(720), 1,
      anon_sym_RPAREN,
    STATE(394), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(724), 3,
      anon_sym_align,
      anon_sym_basealign,
      anon_sym_bbsections,
    ACTIONS(722), 5,
      sym_ir_block,
      anon_sym_address_DASHtaken,
      anon_sym_landing_DASHpad,
      anon_sym_inlineasm_DASHbr_DASHindirect_DASHtarget,
      anon_sym_ehfunclet_DASHentry,
  [5346] = 5,
    ACTIONS(587), 1,
      anon_sym_LPAREN,
    STATE(402), 1,
      sym_atomic_ordering,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(589), 2,
      sym_number,
      anon_sym_unknown_DASHsize,
    ACTIONS(538), 6,
      anon_sym_unordered,
      anon_sym_monotonic,
      anon_sym_acquire,
      anon_sym_release,
      anon_sym_acq_rel,
      anon_sym_seq_cst,
  [5369] = 5,
    ACTIONS(587), 1,
      anon_sym_LPAREN,
    STATE(177), 1,
      sym_atomic_ordering,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(589), 2,
      sym_number,
      anon_sym_unknown_DASHsize,
    ACTIONS(538), 6,
      anon_sym_unordered,
      anon_sym_monotonic,
      anon_sym_acquire,
      anon_sym_release,
      anon_sym_acq_rel,
      anon_sym_seq_cst,
  [5392] = 5,
    ACTIONS(726), 1,
      anon_sym_LPAREN,
    STATE(459), 1,
      sym_atomic_ordering,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(728), 2,
      sym_number,
      anon_sym_unknown_DASHsize,
    ACTIONS(538), 6,
      anon_sym_unordered,
      anon_sym_monotonic,
      anon_sym_acquire,
      anon_sym_release,
      anon_sym_acq_rel,
      anon_sym_seq_cst,
  [5415] = 5,
    ACTIONS(726), 1,
      anon_sym_LPAREN,
    STATE(171), 1,
      sym_atomic_ordering,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(728), 2,
      sym_number,
      anon_sym_unknown_DASHsize,
    ACTIONS(538), 6,
      anon_sym_unordered,
      anon_sym_monotonic,
      anon_sym_acquire,
      anon_sym_release,
      anon_sym_acq_rel,
      anon_sym_seq_cst,
  [5438] = 5,
    ACTIONS(730), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      aux_sym_instruction_repeat4,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(735), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(733), 6,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
  [5461] = 5,
    ACTIONS(548), 1,
      anon_sym_LPAREN,
    STATE(175), 1,
      sym_atomic_ordering,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(550), 2,
      sym_number,
      anon_sym_unknown_DASHsize,
    ACTIONS(538), 6,
      anon_sym_unordered,
      anon_sym_monotonic,
      anon_sym_acquire,
      anon_sym_release,
      anon_sym_acq_rel,
      anon_sym_seq_cst,
  [5484] = 5,
    ACTIONS(548), 1,
      anon_sym_LPAREN,
    STATE(460), 1,
      sym_atomic_ordering,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(550), 2,
      sym_number,
      anon_sym_unknown_DASHsize,
    ACTIONS(538), 6,
      anon_sym_unordered,
      anon_sym_monotonic,
      anon_sym_acquire,
      anon_sym_release,
      anon_sym_acq_rel,
      anon_sym_seq_cst,
  [5507] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(738), 9,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
  [5523] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(742), 2,
      anon_sym_load,
      anon_sym_store,
    STATE(193), 2,
      sym_memory_operand_flag,
      aux_sym_memory_operand_repeat1,
    ACTIONS(740), 5,
      sym_string,
      anon_sym_volatile,
      anon_sym_non_DASHtemporal,
      anon_sym_dereferenceable,
      anon_sym_invariant,
  [5543] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(744), 9,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_unknown_DASHsize,
      anon_sym_unordered,
      anon_sym_monotonic,
      anon_sym_acquire,
      anon_sym_release,
      anon_sym_acq_rel,
      anon_sym_seq_cst,
  [5559] = 4,
    STATE(492), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(724), 3,
      anon_sym_align,
      anon_sym_basealign,
      anon_sym_bbsections,
    ACTIONS(722), 5,
      sym_ir_block,
      anon_sym_address_DASHtaken,
      anon_sym_landing_DASHpad,
      anon_sym_inlineasm_DASHbr_DASHindirect_DASHtarget,
      anon_sym_ehfunclet_DASHentry,
  [5579] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(746), 9,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
  [5595] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(620), 9,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
  [5611] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(748), 9,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
  [5627] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(750), 9,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
  [5643] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(716), 9,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
  [5659] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(752), 9,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
  [5675] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(757), 2,
      anon_sym_load,
      anon_sym_store,
    STATE(192), 2,
      sym_memory_operand_flag,
      aux_sym_memory_operand_repeat1,
    ACTIONS(754), 5,
      sym_string,
      anon_sym_volatile,
      anon_sym_non_DASHtemporal,
      anon_sym_dereferenceable,
      anon_sym_invariant,
  [5695] = 4,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(759), 2,
      anon_sym_load,
      anon_sym_store,
    STATE(192), 2,
      sym_memory_operand_flag,
      aux_sym_memory_operand_repeat1,
    ACTIONS(740), 5,
      sym_string,
      anon_sym_volatile,
      anon_sym_non_DASHtemporal,
      anon_sym_dereferenceable,
      anon_sym_invariant,
  [5715] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(733), 9,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
  [5731] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(761), 9,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_unknown_DASHsize,
      anon_sym_unordered,
      anon_sym_monotonic,
      anon_sym_acquire,
      anon_sym_release,
      anon_sym_acq_rel,
      anon_sym_seq_cst,
  [5747] = 7,
    ACTIONS(566), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(610), 1,
      anon_sym_COLON_COLON,
    ACTIONS(763), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(564), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(608), 2,
      sym__newline,
      anon_sym_LBRACE,
  [5772] = 6,
    ACTIONS(626), 1,
      anon_sym_COLON_COLON,
    ACTIONS(769), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(624), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(765), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(767), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [5795] = 6,
    ACTIONS(769), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(773), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(765), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(767), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(771), 2,
      sym__newline,
      anon_sym_LBRACE,
  [5818] = 7,
    ACTIONS(141), 1,
      anon_sym_COLON_COLON,
    ACTIONS(566), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(775), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(139), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(564), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [5843] = 6,
    ACTIONS(777), 1,
      anon_sym_COMMA,
    ACTIONS(785), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    STATE(200), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(782), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(780), 3,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
  [5866] = 7,
    ACTIONS(566), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(773), 1,
      anon_sym_COLON_COLON,
    ACTIONS(788), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(564), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(771), 2,
      sym__newline,
      anon_sym_LBRACE,
  [5891] = 6,
    ACTIONS(117), 1,
      anon_sym_COLON_COLON,
    ACTIONS(769), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(115), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(765), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(767), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [5914] = 7,
    ACTIONS(117), 1,
      anon_sym_COLON_COLON,
    ACTIONS(566), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(790), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(115), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(564), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [5939] = 7,
    ACTIONS(121), 1,
      anon_sym_COLON_COLON,
    ACTIONS(566), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(792), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(119), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(564), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [5964] = 6,
    ACTIONS(121), 1,
      anon_sym_COLON_COLON,
    ACTIONS(769), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(119), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(765), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(767), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [5987] = 6,
    ACTIONS(769), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(796), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(765), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(767), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(794), 2,
      sym__newline,
      anon_sym_LBRACE,
  [6010] = 7,
    ACTIONS(566), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(796), 1,
      anon_sym_COLON_COLON,
    ACTIONS(798), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(564), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(794), 2,
      sym__newline,
      anon_sym_LBRACE,
  [6035] = 6,
    ACTIONS(125), 1,
      anon_sym_COLON_COLON,
    ACTIONS(769), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(123), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(765), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(767), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [6058] = 6,
    ACTIONS(769), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(802), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(765), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(767), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(800), 2,
      sym__newline,
      anon_sym_LBRACE,
  [6081] = 6,
    ACTIONS(585), 1,
      anon_sym_COLON_COLON,
    ACTIONS(769), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(583), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(765), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(767), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [6104] = 7,
    ACTIONS(566), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(802), 1,
      anon_sym_COLON_COLON,
    ACTIONS(804), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(564), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(800), 2,
      sym__newline,
      anon_sym_LBRACE,
  [6129] = 7,
    ACTIONS(125), 1,
      anon_sym_COLON_COLON,
    ACTIONS(566), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(806), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(123), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(564), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [6154] = 7,
    ACTIONS(566), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(595), 1,
      anon_sym_COLON_COLON,
    ACTIONS(808), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(564), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(593), 2,
      sym__newline,
      anon_sym_LBRACE,
  [6179] = 6,
    ACTIONS(595), 1,
      anon_sym_COLON_COLON,
    ACTIONS(769), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(593), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(765), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(767), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [6202] = 7,
    ACTIONS(566), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(616), 1,
      anon_sym_COLON_COLON,
    ACTIONS(810), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(564), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(614), 2,
      sym__newline,
      anon_sym_LBRACE,
  [6227] = 7,
    ACTIONS(145), 1,
      anon_sym_COLON_COLON,
    ACTIONS(566), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(812), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(143), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(564), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [6252] = 6,
    ACTIONS(141), 1,
      anon_sym_COLON_COLON,
    ACTIONS(769), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(139), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(765), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(767), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [6275] = 7,
    ACTIONS(113), 1,
      anon_sym_COLON_COLON,
    ACTIONS(566), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(814), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(111), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(564), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [6300] = 7,
    ACTIONS(566), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(585), 1,
      anon_sym_COLON_COLON,
    ACTIONS(816), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(564), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(583), 2,
      sym__newline,
      anon_sym_LBRACE,
  [6325] = 6,
    ACTIONS(129), 1,
      anon_sym_COLON_COLON,
    ACTIONS(769), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(127), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(765), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(767), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [6348] = 7,
    ACTIONS(566), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(626), 1,
      anon_sym_COLON_COLON,
    ACTIONS(818), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(564), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(624), 2,
      sym__newline,
      anon_sym_LBRACE,
  [6373] = 6,
    ACTIONS(113), 1,
      anon_sym_COLON_COLON,
    ACTIONS(769), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(111), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(765), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(767), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [6396] = 6,
    ACTIONS(137), 1,
      anon_sym_COLON_COLON,
    ACTIONS(769), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(135), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(765), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(767), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [6419] = 7,
    ACTIONS(129), 1,
      anon_sym_COLON_COLON,
    ACTIONS(566), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(820), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(127), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(564), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [6444] = 6,
    ACTIONS(610), 1,
      anon_sym_COLON_COLON,
    ACTIONS(769), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(608), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(765), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(767), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [6467] = 7,
    ACTIONS(109), 1,
      anon_sym_COLON_COLON,
    ACTIONS(566), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(822), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(101), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(564), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [6492] = 6,
    ACTIONS(109), 1,
      anon_sym_COLON_COLON,
    ACTIONS(769), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(101), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(765), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(767), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [6515] = 7,
    ACTIONS(137), 1,
      anon_sym_COLON_COLON,
    ACTIONS(566), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(824), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(135), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(564), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [6540] = 6,
    ACTIONS(769), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(828), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(765), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(767), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(826), 2,
      sym__newline,
      anon_sym_LBRACE,
  [6563] = 6,
    ACTIONS(769), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(832), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(765), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(767), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(830), 2,
      sym__newline,
      anon_sym_LBRACE,
  [6586] = 7,
    ACTIONS(566), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(828), 1,
      anon_sym_COLON_COLON,
    ACTIONS(834), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(564), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(826), 2,
      sym__newline,
      anon_sym_LBRACE,
  [6611] = 6,
    ACTIONS(616), 1,
      anon_sym_COLON_COLON,
    ACTIONS(769), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(614), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(765), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(767), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [6634] = 7,
    ACTIONS(133), 1,
      anon_sym_COLON_COLON,
    ACTIONS(566), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(836), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(131), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(564), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [6659] = 6,
    ACTIONS(133), 1,
      anon_sym_COLON_COLON,
    ACTIONS(769), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(131), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(765), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(767), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [6682] = 7,
    ACTIONS(566), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(832), 1,
      anon_sym_COLON_COLON,
    ACTIONS(838), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(564), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(830), 2,
      sym__newline,
      anon_sym_LBRACE,
  [6707] = 6,
    ACTIONS(145), 1,
      anon_sym_COLON_COLON,
    ACTIONS(769), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(143), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(765), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(767), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [6730] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(840), 7,
      sym_string,
      anon_sym_load,
      anon_sym_store,
      anon_sym_volatile,
      anon_sym_non_DASHtemporal,
      anon_sym_dereferenceable,
      anon_sym_invariant,
  [6744] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(780), 7,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
  [6758] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(842), 7,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
  [6772] = 5,
    ACTIONS(121), 1,
      anon_sym_COLON_COLON,
    ACTIONS(769), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(119), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(767), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [6791] = 5,
    ACTIONS(769), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(846), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(767), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(844), 2,
      sym__newline,
      anon_sym_LBRACE,
  [6810] = 6,
    ACTIONS(848), 1,
      anon_sym_COMMA,
    ACTIONS(850), 1,
      anon_sym_RPAREN,
    STATE(430), 1,
      sym_offset,
    STATE(431), 1,
      aux_sym_memory_operand_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(572), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6831] = 5,
    ACTIONS(848), 1,
      anon_sym_COMMA,
    ACTIONS(850), 1,
      anon_sym_RPAREN,
    STATE(431), 1,
      aux_sym_memory_operand_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(852), 3,
      anon_sym_on,
      anon_sym_from,
      anon_sym_into,
  [6850] = 5,
    ACTIONS(769), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(856), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(767), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(854), 2,
      sym__newline,
      anon_sym_LBRACE,
  [6869] = 6,
    ACTIONS(848), 1,
      anon_sym_COMMA,
    ACTIONS(858), 1,
      anon_sym_RPAREN,
    STATE(419), 1,
      sym_offset,
    STATE(420), 1,
      aux_sym_memory_operand_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(572), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6890] = 5,
    ACTIONS(113), 1,
      anon_sym_COLON_COLON,
    ACTIONS(769), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(111), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(767), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [6909] = 6,
    ACTIONS(848), 1,
      anon_sym_COMMA,
    ACTIONS(860), 1,
      anon_sym_RPAREN,
    STATE(465), 1,
      sym_offset,
    STATE(467), 1,
      aux_sym_memory_operand_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(572), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6930] = 5,
    ACTIONS(848), 1,
      anon_sym_COMMA,
    ACTIONS(862), 1,
      anon_sym_RPAREN,
    STATE(451), 1,
      aux_sym_memory_operand_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(864), 3,
      anon_sym_on,
      anon_sym_from,
      anon_sym_into,
  [6949] = 5,
    ACTIONS(137), 1,
      anon_sym_COLON_COLON,
    ACTIONS(769), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(135), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(767), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [6968] = 6,
    ACTIONS(848), 1,
      anon_sym_COMMA,
    ACTIONS(866), 1,
      anon_sym_RPAREN,
    STATE(412), 1,
      sym_offset,
    STATE(414), 1,
      aux_sym_memory_operand_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(572), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6989] = 5,
    ACTIONS(109), 1,
      anon_sym_COLON_COLON,
    ACTIONS(769), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(101), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(767), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [7008] = 5,
    ACTIONS(848), 1,
      anon_sym_COMMA,
    ACTIONS(868), 1,
      anon_sym_RPAREN,
    STATE(399), 1,
      aux_sym_memory_operand_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(870), 3,
      anon_sym_on,
      anon_sym_from,
      anon_sym_into,
  [7027] = 5,
    ACTIONS(848), 1,
      anon_sym_COMMA,
    ACTIONS(872), 1,
      anon_sym_RPAREN,
    STATE(442), 1,
      aux_sym_memory_operand_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(874), 3,
      anon_sym_on,
      anon_sym_from,
      anon_sym_into,
  [7046] = 5,
    ACTIONS(848), 1,
      anon_sym_COMMA,
    ACTIONS(866), 1,
      anon_sym_RPAREN,
    STATE(414), 1,
      aux_sym_memory_operand_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(876), 3,
      anon_sym_on,
      anon_sym_from,
      anon_sym_into,
  [7065] = 5,
    ACTIONS(769), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(880), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(767), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(878), 2,
      sym__newline,
      anon_sym_LBRACE,
  [7084] = 5,
    ACTIONS(129), 1,
      anon_sym_COLON_COLON,
    ACTIONS(769), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(127), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(767), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [7103] = 5,
    ACTIONS(769), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(884), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(767), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(882), 2,
      sym__newline,
      anon_sym_LBRACE,
  [7122] = 6,
    ACTIONS(848), 1,
      anon_sym_COMMA,
    ACTIONS(872), 1,
      anon_sym_RPAREN,
    STATE(442), 1,
      aux_sym_memory_operand_repeat2,
    STATE(444), 1,
      sym_offset,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(572), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [7143] = 6,
    ACTIONS(848), 1,
      anon_sym_COMMA,
    ACTIONS(886), 1,
      anon_sym_RPAREN,
    STATE(408), 1,
      sym_offset,
    STATE(409), 1,
      aux_sym_memory_operand_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(572), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [7164] = 5,
    ACTIONS(848), 1,
      anon_sym_COMMA,
    ACTIONS(858), 1,
      anon_sym_RPAREN,
    STATE(420), 1,
      aux_sym_memory_operand_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(888), 3,
      anon_sym_on,
      anon_sym_from,
      anon_sym_into,
  [7183] = 5,
    ACTIONS(769), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(828), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(767), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(826), 2,
      sym__newline,
      anon_sym_LBRACE,
  [7202] = 5,
    ACTIONS(141), 1,
      anon_sym_COLON_COLON,
    ACTIONS(769), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(139), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(767), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [7221] = 6,
    ACTIONS(848), 1,
      anon_sym_COMMA,
    ACTIONS(890), 1,
      anon_sym_RPAREN,
    STATE(405), 1,
      sym_offset,
    STATE(406), 1,
      aux_sym_memory_operand_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(572), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [7242] = 5,
    ACTIONS(848), 1,
      anon_sym_COMMA,
    ACTIONS(860), 1,
      anon_sym_RPAREN,
    STATE(467), 1,
      aux_sym_memory_operand_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(892), 3,
      anon_sym_on,
      anon_sym_from,
      anon_sym_into,
  [7261] = 5,
    ACTIONS(133), 1,
      anon_sym_COLON_COLON,
    ACTIONS(769), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(131), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(767), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [7280] = 5,
    ACTIONS(769), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(802), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(767), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(800), 2,
      sym__newline,
      anon_sym_LBRACE,
  [7299] = 5,
    ACTIONS(769), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(896), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(767), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(894), 2,
      sym__newline,
      anon_sym_LBRACE,
  [7318] = 5,
    ACTIONS(117), 1,
      anon_sym_COLON_COLON,
    ACTIONS(769), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(115), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(767), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [7337] = 6,
    ACTIONS(898), 1,
      ts_builtin_sym_end,
    ACTIONS(900), 1,
      sym__newline,
    ACTIONS(903), 1,
      sym_identifier,
    STATE(477), 1,
      sym_label,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    STATE(269), 2,
      sym_basic_block,
      aux_sym_body_repeat1,
  [7358] = 5,
    ACTIONS(769), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(773), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(767), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(771), 2,
      sym__newline,
      anon_sym_LBRACE,
  [7377] = 5,
    ACTIONS(769), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(832), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(767), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(830), 2,
      sym__newline,
      anon_sym_LBRACE,
  [7396] = 5,
    ACTIONS(769), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(796), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(767), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(794), 2,
      sym__newline,
      anon_sym_LBRACE,
  [7415] = 5,
    ACTIONS(125), 1,
      anon_sym_COLON_COLON,
    ACTIONS(769), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(123), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(767), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [7434] = 6,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(906), 1,
      ts_builtin_sym_end,
    ACTIONS(908), 1,
      sym__newline,
    STATE(477), 1,
      sym_label,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    STATE(269), 2,
      sym_basic_block,
      aux_sym_body_repeat1,
  [7455] = 6,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(908), 1,
      sym__newline,
    ACTIONS(910), 1,
      ts_builtin_sym_end,
    STATE(477), 1,
      sym_label,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    STATE(269), 2,
      sym_basic_block,
      aux_sym_body_repeat1,
  [7476] = 5,
    ACTIONS(848), 1,
      anon_sym_COMMA,
    ACTIONS(912), 1,
      anon_sym_RPAREN,
    STATE(445), 1,
      aux_sym_memory_operand_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(914), 3,
      anon_sym_on,
      anon_sym_from,
      anon_sym_into,
  [7495] = 6,
    ACTIONS(848), 1,
      anon_sym_COMMA,
    ACTIONS(912), 1,
      anon_sym_RPAREN,
    STATE(445), 1,
      aux_sym_memory_operand_repeat2,
    STATE(454), 1,
      sym_offset,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(572), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [7516] = 6,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(910), 1,
      ts_builtin_sym_end,
    ACTIONS(916), 1,
      sym__newline,
    STATE(477), 1,
      sym_label,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    STATE(274), 2,
      sym_basic_block,
      aux_sym_body_repeat1,
  [7537] = 5,
    ACTIONS(145), 1,
      anon_sym_COLON_COLON,
    ACTIONS(769), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(143), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(767), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [7556] = 4,
    ACTIONS(918), 1,
      sym_metadata_ref,
    STATE(484), 1,
      sym_mem_attribute,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(920), 3,
      anon_sym_align,
      anon_sym_basealign,
      anon_sym_addrspace,
  [7572] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(894), 2,
      sym__newline,
      anon_sym_LBRACE,
  [7587] = 4,
    ACTIONS(924), 1,
      anon_sym_RPAREN,
    STATE(440), 1,
      sym_register,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(926), 2,
      sym_var,
      sym_physical_register,
  [7602] = 4,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
    ACTIONS(928), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(470), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [7617] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(930), 2,
      sym__newline,
      anon_sym_LBRACE,
  [7632] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(284), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(932), 2,
      sym__newline,
      anon_sym_LBRACE,
  [7647] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(932), 2,
      sym__newline,
      anon_sym_LBRACE,
  [7662] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(934), 2,
      sym__newline,
      anon_sym_LBRACE,
  [7677] = 4,
    ACTIONS(936), 1,
      anon_sym_LPAREN,
    STATE(285), 1,
      sym_memory_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(938), 2,
      sym__newline,
      anon_sym_LBRACE,
  [7692] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(286), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(938), 2,
      sym__newline,
      anon_sym_LBRACE,
  [7707] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(938), 2,
      sym__newline,
      anon_sym_LBRACE,
  [7722] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(287), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(940), 2,
      sym__newline,
      anon_sym_LBRACE,
  [7737] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(940), 2,
      sym__newline,
      anon_sym_LBRACE,
  [7752] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(942), 2,
      sym__newline,
      anon_sym_LBRACE,
  [7767] = 4,
    ACTIONS(936), 1,
      anon_sym_LPAREN,
    STATE(355), 1,
      sym_memory_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(143), 2,
      sym__newline,
      anon_sym_LBRACE,
  [7782] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(356), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(143), 2,
      sym__newline,
      anon_sym_LBRACE,
  [7797] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(944), 2,
      sym__newline,
      anon_sym_LBRACE,
  [7812] = 4,
    ACTIONS(936), 1,
      anon_sym_LPAREN,
    STATE(289), 1,
      sym_memory_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(854), 2,
      sym__newline,
      anon_sym_LBRACE,
  [7827] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(290), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(854), 2,
      sym__newline,
      anon_sym_LBRACE,
  [7842] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(854), 2,
      sym__newline,
      anon_sym_LBRACE,
  [7857] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(344), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(794), 2,
      sym__newline,
      anon_sym_LBRACE,
  [7872] = 4,
    ACTIONS(936), 1,
      anon_sym_LPAREN,
    STATE(345), 1,
      sym_memory_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(794), 2,
      sym__newline,
      anon_sym_LBRACE,
  [7887] = 4,
    ACTIONS(936), 1,
      anon_sym_LPAREN,
    STATE(291), 1,
      sym_memory_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(946), 2,
      sym__newline,
      anon_sym_LBRACE,
  [7902] = 4,
    ACTIONS(936), 1,
      anon_sym_LPAREN,
    STATE(364), 1,
      sym_memory_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(608), 2,
      sym__newline,
      anon_sym_LBRACE,
  [7917] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(292), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(946), 2,
      sym__newline,
      anon_sym_LBRACE,
  [7932] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(946), 2,
      sym__newline,
      anon_sym_LBRACE,
  [7947] = 4,
    ACTIONS(948), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(951), 2,
      sym__newline,
      anon_sym_LBRACE,
  [7962] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(293), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(953), 2,
      sym__newline,
      anon_sym_LBRACE,
  [7977] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(376), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(135), 2,
      sym__newline,
      anon_sym_LBRACE,
  [7992] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(135), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8007] = 4,
    ACTIONS(936), 1,
      anon_sym_LPAREN,
    STATE(377), 1,
      sym_memory_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(135), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8022] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(953), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8037] = 4,
    ACTIONS(936), 1,
      anon_sym_LPAREN,
    STATE(360), 1,
      sym_memory_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(614), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8052] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(794), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8067] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(296), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(955), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8082] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(309), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(101), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8097] = 5,
    ACTIONS(957), 1,
      anon_sym_LT,
    ACTIONS(959), 1,
      anon_sym_tied_DASHdef,
    ACTIONS(961), 1,
      sym_primitive_type,
    STATE(505), 1,
      sym_low_level_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [8114] = 4,
    ACTIONS(936), 1,
      anon_sym_LPAREN,
    STATE(308), 1,
      sym_memory_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(101), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8129] = 4,
    ACTIONS(936), 1,
      anon_sym_LPAREN,
    STATE(295), 1,
      sym_memory_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(624), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8144] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(955), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8159] = 4,
    ACTIONS(936), 1,
      anon_sym_LPAREN,
    STATE(298), 1,
      sym_memory_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(826), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8174] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(299), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(826), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8189] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(826), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8204] = 4,
    ACTIONS(936), 1,
      anon_sym_LPAREN,
    STATE(304), 1,
      sym_memory_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(878), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8219] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(305), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(878), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8234] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(878), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8249] = 4,
    ACTIONS(936), 1,
      anon_sym_LPAREN,
    STATE(307), 1,
      sym_memory_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(963), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8264] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(311), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(963), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8279] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(963), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8294] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(965), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8309] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(967), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8320] = 4,
    ACTIONS(936), 1,
      anon_sym_LPAREN,
    STATE(314), 1,
      sym_memory_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(969), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8335] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(319), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(969), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8350] = 5,
    ACTIONS(957), 1,
      anon_sym_LT,
    ACTIONS(961), 1,
      sym_primitive_type,
    ACTIONS(971), 1,
      anon_sym_tied_DASHdef,
    STATE(557), 1,
      sym_low_level_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [8367] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(969), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8382] = 4,
    ACTIONS(975), 1,
      aux_sym_float_token1,
    STATE(127), 1,
      sym_float,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(973), 2,
      sym_number,
      aux_sym_float_token2,
  [8397] = 5,
    ACTIONS(957), 1,
      anon_sym_LT,
    ACTIONS(961), 1,
      sym_primitive_type,
    ACTIONS(977), 1,
      anon_sym_tied_DASHdef,
    STATE(553), 1,
      sym_low_level_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [8414] = 4,
    ACTIONS(936), 1,
      anon_sym_LPAREN,
    STATE(321), 1,
      sym_memory_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(111), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8429] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(111), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8444] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(322), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(111), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8459] = 4,
    ACTIONS(979), 1,
      sym__newline,
    STATE(380), 1,
      sym_register,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(981), 2,
      sym_var,
      sym_physical_register,
  [8474] = 4,
    ACTIONS(936), 1,
      anon_sym_LPAREN,
    STATE(324), 1,
      sym_memory_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(800), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8489] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(325), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(800), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8504] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(800), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8519] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(844), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8534] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(384), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(844), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8549] = 4,
    ACTIONS(936), 1,
      anon_sym_LPAREN,
    STATE(382), 1,
      sym_memory_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(844), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8564] = 4,
    ACTIONS(936), 1,
      anon_sym_LPAREN,
    STATE(327), 1,
      sym_memory_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(882), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8579] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(328), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(882), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8594] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(882), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8609] = 4,
    ACTIONS(936), 1,
      anon_sym_LPAREN,
    STATE(300), 1,
      sym_memory_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(119), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8624] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(329), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(983), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8639] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(983), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8654] = 4,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(985), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(490), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [8669] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(987), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8680] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(375), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(139), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8695] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(139), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8710] = 4,
    ACTIONS(936), 1,
      anon_sym_LPAREN,
    STATE(374), 1,
      sym_memory_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(139), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8725] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(989), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8736] = 4,
    ACTIONS(936), 1,
      anon_sym_LPAREN,
    STATE(383), 1,
      sym_memory_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(127), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8751] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(379), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(127), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8766] = 4,
    ACTIONS(936), 1,
      anon_sym_LPAREN,
    STATE(332), 1,
      sym_memory_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(894), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8781] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(334), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(894), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8796] = 4,
    ACTIONS(936), 1,
      anon_sym_LPAREN,
    STATE(370), 1,
      sym_memory_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(131), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8811] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(369), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(131), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8826] = 4,
    ACTIONS(991), 1,
      anon_sym_RPAREN,
    STATE(418), 1,
      sym_register,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(926), 2,
      sym_var,
      sym_physical_register,
  [8841] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(338), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(115), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8856] = 4,
    ACTIONS(936), 1,
      anon_sym_LPAREN,
    STATE(339), 1,
      sym_memory_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(115), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8871] = 4,
    ACTIONS(936), 1,
      anon_sym_LPAREN,
    STATE(342), 1,
      sym_memory_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(123), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8886] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(123), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8901] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(343), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(123), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8916] = 5,
    ACTIONS(993), 1,
      anon_sym_LPAREN,
    ACTIONS(995), 1,
      anon_sym_COMMA,
    ACTIONS(997), 1,
      sym__newline,
    STATE(457), 1,
      aux_sym_successors_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [8933] = 4,
    ACTIONS(936), 1,
      anon_sym_LPAREN,
    STATE(366), 1,
      sym_memory_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(583), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8948] = 4,
    ACTIONS(936), 1,
      anon_sym_LPAREN,
    STATE(348), 1,
      sym_memory_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(830), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8963] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(349), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(830), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8978] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(830), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8993] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(771), 2,
      sym__newline,
      anon_sym_LBRACE,
  [9008] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(281), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(771), 2,
      sym__newline,
      anon_sym_LBRACE,
  [9023] = 4,
    ACTIONS(936), 1,
      anon_sym_LPAREN,
    STATE(362), 1,
      sym_memory_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(771), 2,
      sym__newline,
      anon_sym_LBRACE,
  [9038] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(119), 2,
      sym__newline,
      anon_sym_LBRACE,
  [9053] = 5,
    ACTIONS(999), 1,
      anon_sym_COMMA,
    ACTIONS(1001), 1,
      anon_sym_COLON,
    ACTIONS(1003), 1,
      sym__newline,
    STATE(450), 1,
      aux_sym_liveins_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [9070] = 4,
    ACTIONS(936), 1,
      anon_sym_LPAREN,
    STATE(351), 1,
      sym_memory_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(1005), 2,
      sym__newline,
      anon_sym_LBRACE,
  [9085] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(352), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(1005), 2,
      sym__newline,
      anon_sym_LBRACE,
  [9100] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(313), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(119), 2,
      sym__newline,
      anon_sym_LBRACE,
  [9115] = 4,
    ACTIONS(922), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(1005), 2,
      sym__newline,
      anon_sym_LBRACE,
  [9130] = 4,
    ACTIONS(936), 1,
      anon_sym_LPAREN,
    STATE(315), 1,
      sym_memory_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(593), 2,
      sym__newline,
      anon_sym_LBRACE,
  [9145] = 5,
    ACTIONS(957), 1,
      anon_sym_LT,
    ACTIONS(961), 1,
      sym_primitive_type,
    ACTIONS(1007), 1,
      anon_sym_tied_DASHdef,
    STATE(581), 1,
      sym_low_level_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [9162] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(1009), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9173] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(1011), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9184] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(1013), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9195] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(1015), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9206] = 3,
    STATE(101), 1,
      sym_registerclass,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(1017), 2,
      sym_identifier,
      anon_sym__,
  [9218] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(604), 3,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym__newline,
  [9228] = 3,
    STATE(103), 1,
      sym_registerclass,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(1017), 2,
      sym_identifier,
      anon_sym__,
  [9240] = 4,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1021), 1,
      anon_sym_RPAREN,
    STATE(428), 1,
      aux_sym_basic_block_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [9254] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(1023), 3,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
  [9264] = 4,
    ACTIONS(1025), 1,
      anon_sym_COMMA,
    ACTIONS(1028), 1,
      anon_sym_RPAREN,
    STATE(396), 1,
      aux_sym_memory_operand_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [9278] = 4,
    ACTIONS(1030), 1,
      anon_sym_COMMA,
    ACTIONS(1032), 1,
      anon_sym_RPAREN,
    STATE(471), 1,
      aux_sym_shuffle_mask_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [9292] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(1034), 3,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
  [9302] = 4,
    ACTIONS(848), 1,
      anon_sym_COMMA,
    ACTIONS(912), 1,
      anon_sym_RPAREN,
    STATE(396), 1,
      aux_sym_memory_operand_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [9316] = 4,
    ACTIONS(957), 1,
      anon_sym_LT,
    ACTIONS(961), 1,
      sym_primitive_type,
    STATE(510), 1,
      sym_low_level_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [9330] = 4,
    ACTIONS(848), 1,
      anon_sym_COMMA,
    ACTIONS(1036), 1,
      anon_sym_RPAREN,
    STATE(396), 1,
      aux_sym_memory_operand_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [9344] = 3,
    ACTIONS(726), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(728), 2,
      sym_number,
      anon_sym_unknown_DASHsize,
  [9356] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(1038), 3,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
  [9366] = 4,
    ACTIONS(1040), 1,
      anon_sym_COMMA,
    ACTIONS(1043), 1,
      anon_sym_EQ,
    STATE(404), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [9380] = 4,
    ACTIONS(848), 1,
      anon_sym_COMMA,
    ACTIONS(1045), 1,
      anon_sym_RPAREN,
    STATE(401), 1,
      aux_sym_memory_operand_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [9394] = 4,
    ACTIONS(848), 1,
      anon_sym_COMMA,
    ACTIONS(1045), 1,
      anon_sym_RPAREN,
    STATE(396), 1,
      aux_sym_memory_operand_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [9408] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(1047), 3,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
  [9418] = 4,
    ACTIONS(848), 1,
      anon_sym_COMMA,
    ACTIONS(890), 1,
      anon_sym_RPAREN,
    STATE(406), 1,
      aux_sym_memory_operand_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [9432] = 4,
    ACTIONS(848), 1,
      anon_sym_COMMA,
    ACTIONS(890), 1,
      anon_sym_RPAREN,
    STATE(396), 1,
      aux_sym_memory_operand_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [9446] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(1049), 3,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
  [9456] = 4,
    ACTIONS(1051), 1,
      sym__newline,
    ACTIONS(1053), 1,
      anon_sym_LBRACE,
    STATE(529), 1,
      sym_bundle,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [9470] = 4,
    ACTIONS(848), 1,
      anon_sym_COMMA,
    ACTIONS(886), 1,
      anon_sym_RPAREN,
    STATE(409), 1,
      aux_sym_memory_operand_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [9484] = 4,
    ACTIONS(995), 1,
      anon_sym_COMMA,
    ACTIONS(1055), 1,
      sym__newline,
    STATE(424), 1,
      aux_sym_successors_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [9498] = 4,
    ACTIONS(848), 1,
      anon_sym_COMMA,
    ACTIONS(886), 1,
      anon_sym_RPAREN,
    STATE(396), 1,
      aux_sym_memory_operand_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [9512] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(1057), 3,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
  [9522] = 4,
    ACTIONS(1059), 1,
      anon_sym_COMMA,
    ACTIONS(1061), 1,
      anon_sym_EQ,
    STATE(468), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [9536] = 4,
    ACTIONS(1063), 1,
      anon_sym_COMMA,
    ACTIONS(1065), 1,
      anon_sym_RPAREN,
    STATE(432), 1,
      aux_sym_argument_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [9550] = 4,
    ACTIONS(1067), 1,
      anon_sym_COMMA,
    ACTIONS(1069), 1,
      anon_sym_RPAREN,
    STATE(436), 1,
      aux_sym_custom_regmask_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [9564] = 4,
    ACTIONS(848), 1,
      anon_sym_COMMA,
    ACTIONS(866), 1,
      anon_sym_RPAREN,
    STATE(414), 1,
      aux_sym_memory_operand_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [9578] = 4,
    ACTIONS(848), 1,
      anon_sym_COMMA,
    ACTIONS(866), 1,
      anon_sym_RPAREN,
    STATE(396), 1,
      aux_sym_memory_operand_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [9592] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(1071), 3,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
  [9602] = 3,
    ACTIONS(1073), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(1075), 2,
      anon_sym_COMMA,
      sym__newline,
  [9614] = 3,
    STATE(150), 1,
      sym_register,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(926), 2,
      sym_var,
      sym_physical_register,
  [9626] = 4,
    ACTIONS(1075), 1,
      sym__newline,
    ACTIONS(1077), 1,
      anon_sym_COMMA,
    STATE(424), 1,
      aux_sym_successors_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [9640] = 3,
    ACTIONS(1082), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(1080), 2,
      anon_sym_COMMA,
      sym__newline,
  [9652] = 4,
    ACTIONS(999), 1,
      anon_sym_COMMA,
    ACTIONS(1084), 1,
      sym__newline,
    STATE(453), 1,
      aux_sym_liveins_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [9666] = 4,
    ACTIONS(1080), 1,
      sym__newline,
    ACTIONS(1086), 1,
      anon_sym_COMMA,
    STATE(427), 1,
      aux_sym_liveins_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [9680] = 4,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1089), 1,
      anon_sym_RPAREN,
    STATE(455), 1,
      aux_sym_basic_block_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [9694] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(1091), 3,
      sym_number,
      anon_sym_true,
      anon_sym_false,
  [9704] = 4,
    ACTIONS(848), 1,
      anon_sym_COMMA,
    ACTIONS(858), 1,
      anon_sym_RPAREN,
    STATE(420), 1,
      aux_sym_memory_operand_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [9718] = 4,
    ACTIONS(848), 1,
      anon_sym_COMMA,
    ACTIONS(858), 1,
      anon_sym_RPAREN,
    STATE(396), 1,
      aux_sym_memory_operand_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [9732] = 4,
    ACTIONS(1063), 1,
      anon_sym_COMMA,
    ACTIONS(1093), 1,
      anon_sym_RPAREN,
    STATE(474), 1,
      aux_sym_argument_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [9746] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(1095), 3,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
  [9756] = 4,
    ACTIONS(1067), 1,
      anon_sym_COMMA,
    ACTIONS(1097), 1,
      anon_sym_RPAREN,
    STATE(473), 1,
      aux_sym_custom_regmask_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [9770] = 3,
    STATE(483), 1,
      sym_register,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(926), 2,
      sym_var,
      sym_physical_register,
  [9782] = 4,
    ACTIONS(1067), 1,
      anon_sym_COMMA,
    ACTIONS(1099), 1,
      anon_sym_RPAREN,
    STATE(473), 1,
      aux_sym_custom_regmask_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [9796] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(951), 3,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
  [9806] = 4,
    ACTIONS(957), 1,
      anon_sym_LT,
    ACTIONS(961), 1,
      sym_primitive_type,
    STATE(544), 1,
      sym_low_level_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [9820] = 4,
    ACTIONS(1030), 1,
      anon_sym_COMMA,
    ACTIONS(1101), 1,
      anon_sym_RPAREN,
    STATE(397), 1,
      aux_sym_shuffle_mask_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [9834] = 4,
    ACTIONS(1067), 1,
      anon_sym_COMMA,
    ACTIONS(1103), 1,
      anon_sym_RPAREN,
    STATE(434), 1,
      aux_sym_custom_regmask_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [9848] = 4,
    ACTIONS(957), 1,
      anon_sym_LT,
    ACTIONS(961), 1,
      sym_primitive_type,
    STATE(519), 1,
      sym_low_level_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [9862] = 4,
    ACTIONS(848), 1,
      anon_sym_COMMA,
    ACTIONS(850), 1,
      anon_sym_RPAREN,
    STATE(396), 1,
      aux_sym_memory_operand_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [9876] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(1105), 3,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
  [9886] = 4,
    ACTIONS(848), 1,
      anon_sym_COMMA,
    ACTIONS(850), 1,
      anon_sym_RPAREN,
    STATE(431), 1,
      aux_sym_memory_operand_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [9900] = 4,
    ACTIONS(848), 1,
      anon_sym_COMMA,
    ACTIONS(860), 1,
      anon_sym_RPAREN,
    STATE(396), 1,
      aux_sym_memory_operand_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [9914] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(1107), 3,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
  [9924] = 3,
    STATE(167), 1,
      sym_register,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(926), 2,
      sym_var,
      sym_physical_register,
  [9936] = 3,
    STATE(535), 1,
      sym_register,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(926), 2,
      sym_var,
      sym_physical_register,
  [9948] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(1109), 3,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
  [9958] = 4,
    ACTIONS(999), 1,
      anon_sym_COMMA,
    ACTIONS(1111), 1,
      sym__newline,
    STATE(427), 1,
      aux_sym_liveins_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [9972] = 4,
    ACTIONS(848), 1,
      anon_sym_COMMA,
    ACTIONS(868), 1,
      anon_sym_RPAREN,
    STATE(396), 1,
      aux_sym_memory_operand_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [9986] = 4,
    ACTIONS(957), 1,
      anon_sym_LT,
    ACTIONS(961), 1,
      sym_primitive_type,
    STATE(578), 1,
      sym_low_level_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10000] = 4,
    ACTIONS(999), 1,
      anon_sym_COMMA,
    ACTIONS(1113), 1,
      sym__newline,
    STATE(427), 1,
      aux_sym_liveins_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10014] = 4,
    ACTIONS(848), 1,
      anon_sym_COMMA,
    ACTIONS(860), 1,
      anon_sym_RPAREN,
    STATE(467), 1,
      aux_sym_memory_operand_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10028] = 4,
    ACTIONS(1115), 1,
      anon_sym_COMMA,
    ACTIONS(1118), 1,
      anon_sym_RPAREN,
    STATE(455), 1,
      aux_sym_basic_block_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10042] = 3,
    STATE(425), 1,
      sym_register,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(981), 2,
      sym_var,
      sym_physical_register,
  [10054] = 4,
    ACTIONS(995), 1,
      anon_sym_COMMA,
    ACTIONS(1120), 1,
      sym__newline,
    STATE(424), 1,
      aux_sym_successors_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10068] = 4,
    ACTIONS(957), 1,
      anon_sym_LT,
    ACTIONS(961), 1,
      sym_primitive_type,
    STATE(506), 1,
      sym_low_level_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10082] = 3,
    ACTIONS(709), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(711), 2,
      sym_number,
      anon_sym_unknown_DASHsize,
  [10094] = 3,
    ACTIONS(587), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(589), 2,
      sym_number,
      anon_sym_unknown_DASHsize,
  [10106] = 3,
    ACTIONS(1122), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(1124), 2,
      sym_number,
      anon_sym_unknown_DASHsize,
  [10118] = 4,
    ACTIONS(957), 1,
      anon_sym_LT,
    ACTIONS(961), 1,
      sym_primitive_type,
    STATE(527), 1,
      sym_low_level_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10132] = 4,
    ACTIONS(995), 1,
      anon_sym_COMMA,
    ACTIONS(1126), 1,
      sym__newline,
    STATE(413), 1,
      aux_sym_successors_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10146] = 3,
    STATE(537), 1,
      sym_register,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(926), 2,
      sym_var,
      sym_physical_register,
  [10158] = 4,
    ACTIONS(848), 1,
      anon_sym_COMMA,
    ACTIONS(872), 1,
      anon_sym_RPAREN,
    STATE(442), 1,
      aux_sym_memory_operand_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10172] = 3,
    STATE(538), 1,
      sym_register,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(926), 2,
      sym_var,
      sym_physical_register,
  [10184] = 4,
    ACTIONS(848), 1,
      anon_sym_COMMA,
    ACTIONS(872), 1,
      anon_sym_RPAREN,
    STATE(396), 1,
      aux_sym_memory_operand_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10198] = 4,
    ACTIONS(1059), 1,
      anon_sym_COMMA,
    ACTIONS(1128), 1,
      anon_sym_EQ,
    STATE(404), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10212] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(1130), 3,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
  [10222] = 3,
    ACTIONS(769), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(767), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [10234] = 4,
    ACTIONS(1132), 1,
      anon_sym_COMMA,
    ACTIONS(1135), 1,
      anon_sym_RPAREN,
    STATE(471), 1,
      aux_sym_shuffle_mask_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10248] = 3,
    ACTIONS(1139), 1,
      aux_sym_float_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(1137), 2,
      sym_number,
      aux_sym_float_token2,
  [10260] = 4,
    ACTIONS(1141), 1,
      anon_sym_COMMA,
    ACTIONS(1144), 1,
      anon_sym_RPAREN,
    STATE(473), 1,
      aux_sym_custom_regmask_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10274] = 4,
    ACTIONS(1146), 1,
      anon_sym_COMMA,
    ACTIONS(1149), 1,
      anon_sym_RPAREN,
    STATE(474), 1,
      aux_sym_argument_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10288] = 3,
    ACTIONS(27), 1,
      sym_metadata_ref,
    STATE(238), 1,
      sym_metadata,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10299] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(1151), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10308] = 3,
    ACTIONS(1153), 1,
      anon_sym_LPAREN,
    ACTIONS(1155), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10319] = 3,
    ACTIONS(1157), 1,
      sym__newline,
    ACTIONS(1159), 1,
      sym_bb_ref,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10330] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(1135), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10339] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(1161), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10348] = 3,
    ACTIONS(1163), 1,
      sym_identifier,
    STATE(101), 1,
      sym_subregister,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10359] = 3,
    ACTIONS(1163), 1,
      sym_identifier,
    STATE(103), 1,
      sym_subregister,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10370] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(1144), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10379] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(1028), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10388] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(1149), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10397] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(1043), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [10406] = 3,
    ACTIONS(27), 1,
      sym_metadata_ref,
    STATE(476), 1,
      sym_metadata,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10417] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(1165), 2,
      sym_external_symbol,
      sym_global_var,
  [10426] = 3,
    ACTIONS(936), 1,
      anon_sym_LPAREN,
    STATE(437), 1,
      sym_memory_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10437] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(1167), 2,
      anon_sym_COMMA,
      sym__newline,
  [10446] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(1169), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10455] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(1118), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10464] = 3,
    ACTIONS(37), 1,
      anon_sym_LT,
    STATE(194), 1,
      sym_mc_symbol,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10475] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(1171), 2,
      sym_number,
      anon_sym_undef,
  [10484] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(1173), 2,
      sym_number,
      anon_sym_undef,
  [10493] = 3,
    ACTIONS(27), 1,
      sym_metadata_ref,
    STATE(239), 1,
      sym_metadata,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10504] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(765), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
  [10513] = 3,
    ACTIONS(37), 1,
      anon_sym_LT,
    STATE(182), 1,
      sym_mc_symbol,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10524] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(1175), 2,
      anon_sym_LPAREN,
      anon_sym_COLON,
  [10533] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(1177), 2,
      sym_identifier,
      sym_string,
  [10542] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
    ACTIONS(1179), 2,
      anon_sym_COMMA,
      sym__newline,
  [10551] = 2,
    ACTIONS(1181), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10559] = 2,
    ACTIONS(1183), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10567] = 2,
    ACTIONS(1185), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10575] = 2,
    ACTIONS(1187), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10583] = 2,
    ACTIONS(1124), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10591] = 2,
    ACTIONS(1189), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10599] = 2,
    ACTIONS(1191), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10607] = 2,
    ACTIONS(1193), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10615] = 2,
    ACTIONS(711), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10623] = 2,
    ACTIONS(1195), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10631] = 2,
    ACTIONS(1197), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10639] = 2,
    ACTIONS(1199), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10647] = 2,
    ACTIONS(1201), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10655] = 2,
    ACTIONS(1203), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10663] = 2,
    ACTIONS(1205), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10671] = 2,
    ACTIONS(1207), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10679] = 2,
    ACTIONS(1209), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10687] = 2,
    ACTIONS(589), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10695] = 2,
    ACTIONS(1211), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10703] = 2,
    ACTIONS(1213), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10711] = 2,
    ACTIONS(1215), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10719] = 2,
    ACTIONS(1217), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10727] = 2,
    ACTIONS(1219), 1,
      anon_sym_mcsymbol,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10735] = 2,
    ACTIONS(1221), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10743] = 2,
    ACTIONS(1223), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10751] = 2,
    ACTIONS(1225), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10759] = 2,
    ACTIONS(1227), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10767] = 2,
    ACTIONS(1229), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10775] = 2,
    ACTIONS(1231), 1,
      sym_bb_ref,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10783] = 2,
    ACTIONS(1233), 1,
      anon_sym_x,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10791] = 2,
    ACTIONS(1235), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10799] = 2,
    ACTIONS(1237), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10807] = 2,
    ACTIONS(1239), 1,
      sym_ir_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10815] = 2,
    ACTIONS(1241), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10823] = 2,
    ACTIONS(1165), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10831] = 2,
    ACTIONS(1243), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10839] = 2,
    ACTIONS(1245), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10847] = 2,
    ACTIONS(1247), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10855] = 2,
    ACTIONS(1249), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10863] = 2,
    ACTIONS(1251), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10871] = 2,
    ACTIONS(1253), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10879] = 2,
    ACTIONS(1255), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10887] = 2,
    ACTIONS(1257), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10895] = 2,
    ACTIONS(1259), 1,
      sym_global_var,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10903] = 2,
    ACTIONS(1261), 1,
      sym_global_var,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10911] = 2,
    ACTIONS(1263), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10919] = 2,
    ACTIONS(1265), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10927] = 2,
    ACTIONS(1267), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10935] = 2,
    ACTIONS(1269), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10943] = 2,
    ACTIONS(1271), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10951] = 2,
    ACTIONS(1273), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10959] = 2,
    ACTIONS(1275), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10967] = 2,
    ACTIONS(1277), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10975] = 2,
    ACTIONS(1279), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10983] = 2,
    ACTIONS(1281), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10991] = 2,
    ACTIONS(1283), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [10999] = 2,
    ACTIONS(1285), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [11007] = 2,
    ACTIONS(1287), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [11015] = 2,
    ACTIONS(1289), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [11023] = 2,
    ACTIONS(1291), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [11031] = 2,
    ACTIONS(1293), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [11039] = 2,
    ACTIONS(1295), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [11047] = 2,
    ACTIONS(1297), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [11055] = 2,
    ACTIONS(1299), 1,
      sym_primitive_type,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [11063] = 2,
    ACTIONS(1301), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [11071] = 2,
    ACTIONS(415), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [11079] = 2,
    ACTIONS(1303), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [11087] = 2,
    ACTIONS(1305), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [11095] = 2,
    ACTIONS(1307), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [11103] = 2,
    ACTIONS(1309), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [11111] = 2,
    ACTIONS(1311), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [11119] = 2,
    ACTIONS(1313), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [11127] = 2,
    ACTIONS(1315), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [11135] = 2,
    ACTIONS(1317), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [11143] = 2,
    ACTIONS(1319), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [11151] = 2,
    ACTIONS(1321), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [11159] = 2,
    ACTIONS(728), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [11167] = 2,
    ACTIONS(1323), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [11175] = 2,
    ACTIONS(1325), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [11183] = 2,
    ACTIONS(1327), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [11191] = 2,
    ACTIONS(1329), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [11199] = 2,
    ACTIONS(1331), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
  [11207] = 2,
    ACTIONS(1333), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_multiline_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(20)] = 0,
  [SMALL_STATE(21)] = 80,
  [SMALL_STATE(22)] = 160,
  [SMALL_STATE(23)] = 240,
  [SMALL_STATE(24)] = 320,
  [SMALL_STATE(25)] = 400,
  [SMALL_STATE(26)] = 480,
  [SMALL_STATE(27)] = 560,
  [SMALL_STATE(28)] = 640,
  [SMALL_STATE(29)] = 707,
  [SMALL_STATE(30)] = 774,
  [SMALL_STATE(31)] = 841,
  [SMALL_STATE(32)] = 908,
  [SMALL_STATE(33)] = 975,
  [SMALL_STATE(34)] = 1042,
  [SMALL_STATE(35)] = 1109,
  [SMALL_STATE(36)] = 1176,
  [SMALL_STATE(37)] = 1243,
  [SMALL_STATE(38)] = 1310,
  [SMALL_STATE(39)] = 1363,
  [SMALL_STATE(40)] = 1405,
  [SMALL_STATE(41)] = 1445,
  [SMALL_STATE(42)] = 1483,
  [SMALL_STATE(43)] = 1521,
  [SMALL_STATE(44)] = 1559,
  [SMALL_STATE(45)] = 1605,
  [SMALL_STATE(46)] = 1644,
  [SMALL_STATE(47)] = 1672,
  [SMALL_STATE(48)] = 1698,
  [SMALL_STATE(49)] = 1723,
  [SMALL_STATE(50)] = 1766,
  [SMALL_STATE(51)] = 1809,
  [SMALL_STATE(52)] = 1834,
  [SMALL_STATE(53)] = 1859,
  [SMALL_STATE(54)] = 1902,
  [SMALL_STATE(55)] = 1945,
  [SMALL_STATE(56)] = 1988,
  [SMALL_STATE(57)] = 2031,
  [SMALL_STATE(58)] = 2074,
  [SMALL_STATE(59)] = 2117,
  [SMALL_STATE(60)] = 2160,
  [SMALL_STATE(61)] = 2185,
  [SMALL_STATE(62)] = 2212,
  [SMALL_STATE(63)] = 2255,
  [SMALL_STATE(64)] = 2282,
  [SMALL_STATE(65)] = 2309,
  [SMALL_STATE(66)] = 2352,
  [SMALL_STATE(67)] = 2395,
  [SMALL_STATE(68)] = 2438,
  [SMALL_STATE(69)] = 2481,
  [SMALL_STATE(70)] = 2506,
  [SMALL_STATE(71)] = 2531,
  [SMALL_STATE(72)] = 2574,
  [SMALL_STATE(73)] = 2601,
  [SMALL_STATE(74)] = 2644,
  [SMALL_STATE(75)] = 2687,
  [SMALL_STATE(76)] = 2712,
  [SMALL_STATE(77)] = 2747,
  [SMALL_STATE(78)] = 2774,
  [SMALL_STATE(79)] = 2817,
  [SMALL_STATE(80)] = 2860,
  [SMALL_STATE(81)] = 2903,
  [SMALL_STATE(82)] = 2930,
  [SMALL_STATE(83)] = 2962,
  [SMALL_STATE(84)] = 2994,
  [SMALL_STATE(85)] = 3022,
  [SMALL_STATE(86)] = 3047,
  [SMALL_STATE(87)] = 3082,
  [SMALL_STATE(88)] = 3107,
  [SMALL_STATE(89)] = 3142,
  [SMALL_STATE(90)] = 3163,
  [SMALL_STATE(91)] = 3198,
  [SMALL_STATE(92)] = 3233,
  [SMALL_STATE(93)] = 3268,
  [SMALL_STATE(94)] = 3303,
  [SMALL_STATE(95)] = 3338,
  [SMALL_STATE(96)] = 3373,
  [SMALL_STATE(97)] = 3408,
  [SMALL_STATE(98)] = 3443,
  [SMALL_STATE(99)] = 3465,
  [SMALL_STATE(100)] = 3489,
  [SMALL_STATE(101)] = 3509,
  [SMALL_STATE(102)] = 3531,
  [SMALL_STATE(103)] = 3563,
  [SMALL_STATE(104)] = 3585,
  [SMALL_STATE(105)] = 3607,
  [SMALL_STATE(106)] = 3639,
  [SMALL_STATE(107)] = 3661,
  [SMALL_STATE(108)] = 3681,
  [SMALL_STATE(109)] = 3703,
  [SMALL_STATE(110)] = 3727,
  [SMALL_STATE(111)] = 3746,
  [SMALL_STATE(112)] = 3781,
  [SMALL_STATE(113)] = 3800,
  [SMALL_STATE(114)] = 3819,
  [SMALL_STATE(115)] = 3842,
  [SMALL_STATE(116)] = 3877,
  [SMALL_STATE(117)] = 3900,
  [SMALL_STATE(118)] = 3935,
  [SMALL_STATE(119)] = 3954,
  [SMALL_STATE(120)] = 3983,
  [SMALL_STATE(121)] = 4018,
  [SMALL_STATE(122)] = 4053,
  [SMALL_STATE(123)] = 4076,
  [SMALL_STATE(124)] = 4095,
  [SMALL_STATE(125)] = 4130,
  [SMALL_STATE(126)] = 4165,
  [SMALL_STATE(127)] = 4184,
  [SMALL_STATE(128)] = 4207,
  [SMALL_STATE(129)] = 4242,
  [SMALL_STATE(130)] = 4261,
  [SMALL_STATE(131)] = 4296,
  [SMALL_STATE(132)] = 4319,
  [SMALL_STATE(133)] = 4348,
  [SMALL_STATE(134)] = 4383,
  [SMALL_STATE(135)] = 4402,
  [SMALL_STATE(136)] = 4420,
  [SMALL_STATE(137)] = 4438,
  [SMALL_STATE(138)] = 4456,
  [SMALL_STATE(139)] = 4474,
  [SMALL_STATE(140)] = 4506,
  [SMALL_STATE(141)] = 4538,
  [SMALL_STATE(142)] = 4556,
  [SMALL_STATE(143)] = 4574,
  [SMALL_STATE(144)] = 4606,
  [SMALL_STATE(145)] = 4638,
  [SMALL_STATE(146)] = 4670,
  [SMALL_STATE(147)] = 4702,
  [SMALL_STATE(148)] = 4720,
  [SMALL_STATE(149)] = 4752,
  [SMALL_STATE(150)] = 4770,
  [SMALL_STATE(151)] = 4788,
  [SMALL_STATE(152)] = 4820,
  [SMALL_STATE(153)] = 4852,
  [SMALL_STATE(154)] = 4884,
  [SMALL_STATE(155)] = 4902,
  [SMALL_STATE(156)] = 4934,
  [SMALL_STATE(157)] = 4952,
  [SMALL_STATE(158)] = 4970,
  [SMALL_STATE(159)] = 4988,
  [SMALL_STATE(160)] = 5006,
  [SMALL_STATE(161)] = 5026,
  [SMALL_STATE(162)] = 5058,
  [SMALL_STATE(163)] = 5090,
  [SMALL_STATE(164)] = 5108,
  [SMALL_STATE(165)] = 5140,
  [SMALL_STATE(166)] = 5172,
  [SMALL_STATE(167)] = 5190,
  [SMALL_STATE(168)] = 5208,
  [SMALL_STATE(169)] = 5226,
  [SMALL_STATE(170)] = 5244,
  [SMALL_STATE(171)] = 5262,
  [SMALL_STATE(172)] = 5285,
  [SMALL_STATE(173)] = 5306,
  [SMALL_STATE(174)] = 5323,
  [SMALL_STATE(175)] = 5346,
  [SMALL_STATE(176)] = 5369,
  [SMALL_STATE(177)] = 5392,
  [SMALL_STATE(178)] = 5415,
  [SMALL_STATE(179)] = 5438,
  [SMALL_STATE(180)] = 5461,
  [SMALL_STATE(181)] = 5484,
  [SMALL_STATE(182)] = 5507,
  [SMALL_STATE(183)] = 5523,
  [SMALL_STATE(184)] = 5543,
  [SMALL_STATE(185)] = 5559,
  [SMALL_STATE(186)] = 5579,
  [SMALL_STATE(187)] = 5595,
  [SMALL_STATE(188)] = 5611,
  [SMALL_STATE(189)] = 5627,
  [SMALL_STATE(190)] = 5643,
  [SMALL_STATE(191)] = 5659,
  [SMALL_STATE(192)] = 5675,
  [SMALL_STATE(193)] = 5695,
  [SMALL_STATE(194)] = 5715,
  [SMALL_STATE(195)] = 5731,
  [SMALL_STATE(196)] = 5747,
  [SMALL_STATE(197)] = 5772,
  [SMALL_STATE(198)] = 5795,
  [SMALL_STATE(199)] = 5818,
  [SMALL_STATE(200)] = 5843,
  [SMALL_STATE(201)] = 5866,
  [SMALL_STATE(202)] = 5891,
  [SMALL_STATE(203)] = 5914,
  [SMALL_STATE(204)] = 5939,
  [SMALL_STATE(205)] = 5964,
  [SMALL_STATE(206)] = 5987,
  [SMALL_STATE(207)] = 6010,
  [SMALL_STATE(208)] = 6035,
  [SMALL_STATE(209)] = 6058,
  [SMALL_STATE(210)] = 6081,
  [SMALL_STATE(211)] = 6104,
  [SMALL_STATE(212)] = 6129,
  [SMALL_STATE(213)] = 6154,
  [SMALL_STATE(214)] = 6179,
  [SMALL_STATE(215)] = 6202,
  [SMALL_STATE(216)] = 6227,
  [SMALL_STATE(217)] = 6252,
  [SMALL_STATE(218)] = 6275,
  [SMALL_STATE(219)] = 6300,
  [SMALL_STATE(220)] = 6325,
  [SMALL_STATE(221)] = 6348,
  [SMALL_STATE(222)] = 6373,
  [SMALL_STATE(223)] = 6396,
  [SMALL_STATE(224)] = 6419,
  [SMALL_STATE(225)] = 6444,
  [SMALL_STATE(226)] = 6467,
  [SMALL_STATE(227)] = 6492,
  [SMALL_STATE(228)] = 6515,
  [SMALL_STATE(229)] = 6540,
  [SMALL_STATE(230)] = 6563,
  [SMALL_STATE(231)] = 6586,
  [SMALL_STATE(232)] = 6611,
  [SMALL_STATE(233)] = 6634,
  [SMALL_STATE(234)] = 6659,
  [SMALL_STATE(235)] = 6682,
  [SMALL_STATE(236)] = 6707,
  [SMALL_STATE(237)] = 6730,
  [SMALL_STATE(238)] = 6744,
  [SMALL_STATE(239)] = 6758,
  [SMALL_STATE(240)] = 6772,
  [SMALL_STATE(241)] = 6791,
  [SMALL_STATE(242)] = 6810,
  [SMALL_STATE(243)] = 6831,
  [SMALL_STATE(244)] = 6850,
  [SMALL_STATE(245)] = 6869,
  [SMALL_STATE(246)] = 6890,
  [SMALL_STATE(247)] = 6909,
  [SMALL_STATE(248)] = 6930,
  [SMALL_STATE(249)] = 6949,
  [SMALL_STATE(250)] = 6968,
  [SMALL_STATE(251)] = 6989,
  [SMALL_STATE(252)] = 7008,
  [SMALL_STATE(253)] = 7027,
  [SMALL_STATE(254)] = 7046,
  [SMALL_STATE(255)] = 7065,
  [SMALL_STATE(256)] = 7084,
  [SMALL_STATE(257)] = 7103,
  [SMALL_STATE(258)] = 7122,
  [SMALL_STATE(259)] = 7143,
  [SMALL_STATE(260)] = 7164,
  [SMALL_STATE(261)] = 7183,
  [SMALL_STATE(262)] = 7202,
  [SMALL_STATE(263)] = 7221,
  [SMALL_STATE(264)] = 7242,
  [SMALL_STATE(265)] = 7261,
  [SMALL_STATE(266)] = 7280,
  [SMALL_STATE(267)] = 7299,
  [SMALL_STATE(268)] = 7318,
  [SMALL_STATE(269)] = 7337,
  [SMALL_STATE(270)] = 7358,
  [SMALL_STATE(271)] = 7377,
  [SMALL_STATE(272)] = 7396,
  [SMALL_STATE(273)] = 7415,
  [SMALL_STATE(274)] = 7434,
  [SMALL_STATE(275)] = 7455,
  [SMALL_STATE(276)] = 7476,
  [SMALL_STATE(277)] = 7495,
  [SMALL_STATE(278)] = 7516,
  [SMALL_STATE(279)] = 7537,
  [SMALL_STATE(280)] = 7556,
  [SMALL_STATE(281)] = 7572,
  [SMALL_STATE(282)] = 7587,
  [SMALL_STATE(283)] = 7602,
  [SMALL_STATE(284)] = 7617,
  [SMALL_STATE(285)] = 7632,
  [SMALL_STATE(286)] = 7647,
  [SMALL_STATE(287)] = 7662,
  [SMALL_STATE(288)] = 7677,
  [SMALL_STATE(289)] = 7692,
  [SMALL_STATE(290)] = 7707,
  [SMALL_STATE(291)] = 7722,
  [SMALL_STATE(292)] = 7737,
  [SMALL_STATE(293)] = 7752,
  [SMALL_STATE(294)] = 7767,
  [SMALL_STATE(295)] = 7782,
  [SMALL_STATE(296)] = 7797,
  [SMALL_STATE(297)] = 7812,
  [SMALL_STATE(298)] = 7827,
  [SMALL_STATE(299)] = 7842,
  [SMALL_STATE(300)] = 7857,
  [SMALL_STATE(301)] = 7872,
  [SMALL_STATE(302)] = 7887,
  [SMALL_STATE(303)] = 7902,
  [SMALL_STATE(304)] = 7917,
  [SMALL_STATE(305)] = 7932,
  [SMALL_STATE(306)] = 7947,
  [SMALL_STATE(307)] = 7962,
  [SMALL_STATE(308)] = 7977,
  [SMALL_STATE(309)] = 7992,
  [SMALL_STATE(310)] = 8007,
  [SMALL_STATE(311)] = 8022,
  [SMALL_STATE(312)] = 8037,
  [SMALL_STATE(313)] = 8052,
  [SMALL_STATE(314)] = 8067,
  [SMALL_STATE(315)] = 8082,
  [SMALL_STATE(316)] = 8097,
  [SMALL_STATE(317)] = 8114,
  [SMALL_STATE(318)] = 8129,
  [SMALL_STATE(319)] = 8144,
  [SMALL_STATE(320)] = 8159,
  [SMALL_STATE(321)] = 8174,
  [SMALL_STATE(322)] = 8189,
  [SMALL_STATE(323)] = 8204,
  [SMALL_STATE(324)] = 8219,
  [SMALL_STATE(325)] = 8234,
  [SMALL_STATE(326)] = 8249,
  [SMALL_STATE(327)] = 8264,
  [SMALL_STATE(328)] = 8279,
  [SMALL_STATE(329)] = 8294,
  [SMALL_STATE(330)] = 8309,
  [SMALL_STATE(331)] = 8320,
  [SMALL_STATE(332)] = 8335,
  [SMALL_STATE(333)] = 8350,
  [SMALL_STATE(334)] = 8367,
  [SMALL_STATE(335)] = 8382,
  [SMALL_STATE(336)] = 8397,
  [SMALL_STATE(337)] = 8414,
  [SMALL_STATE(338)] = 8429,
  [SMALL_STATE(339)] = 8444,
  [SMALL_STATE(340)] = 8459,
  [SMALL_STATE(341)] = 8474,
  [SMALL_STATE(342)] = 8489,
  [SMALL_STATE(343)] = 8504,
  [SMALL_STATE(344)] = 8519,
  [SMALL_STATE(345)] = 8534,
  [SMALL_STATE(346)] = 8549,
  [SMALL_STATE(347)] = 8564,
  [SMALL_STATE(348)] = 8579,
  [SMALL_STATE(349)] = 8594,
  [SMALL_STATE(350)] = 8609,
  [SMALL_STATE(351)] = 8624,
  [SMALL_STATE(352)] = 8639,
  [SMALL_STATE(353)] = 8654,
  [SMALL_STATE(354)] = 8669,
  [SMALL_STATE(355)] = 8680,
  [SMALL_STATE(356)] = 8695,
  [SMALL_STATE(357)] = 8710,
  [SMALL_STATE(358)] = 8725,
  [SMALL_STATE(359)] = 8736,
  [SMALL_STATE(360)] = 8751,
  [SMALL_STATE(361)] = 8766,
  [SMALL_STATE(362)] = 8781,
  [SMALL_STATE(363)] = 8796,
  [SMALL_STATE(364)] = 8811,
  [SMALL_STATE(365)] = 8826,
  [SMALL_STATE(366)] = 8841,
  [SMALL_STATE(367)] = 8856,
  [SMALL_STATE(368)] = 8871,
  [SMALL_STATE(369)] = 8886,
  [SMALL_STATE(370)] = 8901,
  [SMALL_STATE(371)] = 8916,
  [SMALL_STATE(372)] = 8933,
  [SMALL_STATE(373)] = 8948,
  [SMALL_STATE(374)] = 8963,
  [SMALL_STATE(375)] = 8978,
  [SMALL_STATE(376)] = 8993,
  [SMALL_STATE(377)] = 9008,
  [SMALL_STATE(378)] = 9023,
  [SMALL_STATE(379)] = 9038,
  [SMALL_STATE(380)] = 9053,
  [SMALL_STATE(381)] = 9070,
  [SMALL_STATE(382)] = 9085,
  [SMALL_STATE(383)] = 9100,
  [SMALL_STATE(384)] = 9115,
  [SMALL_STATE(385)] = 9130,
  [SMALL_STATE(386)] = 9145,
  [SMALL_STATE(387)] = 9162,
  [SMALL_STATE(388)] = 9173,
  [SMALL_STATE(389)] = 9184,
  [SMALL_STATE(390)] = 9195,
  [SMALL_STATE(391)] = 9206,
  [SMALL_STATE(392)] = 9218,
  [SMALL_STATE(393)] = 9228,
  [SMALL_STATE(394)] = 9240,
  [SMALL_STATE(395)] = 9254,
  [SMALL_STATE(396)] = 9264,
  [SMALL_STATE(397)] = 9278,
  [SMALL_STATE(398)] = 9292,
  [SMALL_STATE(399)] = 9302,
  [SMALL_STATE(400)] = 9316,
  [SMALL_STATE(401)] = 9330,
  [SMALL_STATE(402)] = 9344,
  [SMALL_STATE(403)] = 9356,
  [SMALL_STATE(404)] = 9366,
  [SMALL_STATE(405)] = 9380,
  [SMALL_STATE(406)] = 9394,
  [SMALL_STATE(407)] = 9408,
  [SMALL_STATE(408)] = 9418,
  [SMALL_STATE(409)] = 9432,
  [SMALL_STATE(410)] = 9446,
  [SMALL_STATE(411)] = 9456,
  [SMALL_STATE(412)] = 9470,
  [SMALL_STATE(413)] = 9484,
  [SMALL_STATE(414)] = 9498,
  [SMALL_STATE(415)] = 9512,
  [SMALL_STATE(416)] = 9522,
  [SMALL_STATE(417)] = 9536,
  [SMALL_STATE(418)] = 9550,
  [SMALL_STATE(419)] = 9564,
  [SMALL_STATE(420)] = 9578,
  [SMALL_STATE(421)] = 9592,
  [SMALL_STATE(422)] = 9602,
  [SMALL_STATE(423)] = 9614,
  [SMALL_STATE(424)] = 9626,
  [SMALL_STATE(425)] = 9640,
  [SMALL_STATE(426)] = 9652,
  [SMALL_STATE(427)] = 9666,
  [SMALL_STATE(428)] = 9680,
  [SMALL_STATE(429)] = 9694,
  [SMALL_STATE(430)] = 9704,
  [SMALL_STATE(431)] = 9718,
  [SMALL_STATE(432)] = 9732,
  [SMALL_STATE(433)] = 9746,
  [SMALL_STATE(434)] = 9756,
  [SMALL_STATE(435)] = 9770,
  [SMALL_STATE(436)] = 9782,
  [SMALL_STATE(437)] = 9796,
  [SMALL_STATE(438)] = 9806,
  [SMALL_STATE(439)] = 9820,
  [SMALL_STATE(440)] = 9834,
  [SMALL_STATE(441)] = 9848,
  [SMALL_STATE(442)] = 9862,
  [SMALL_STATE(443)] = 9876,
  [SMALL_STATE(444)] = 9886,
  [SMALL_STATE(445)] = 9900,
  [SMALL_STATE(446)] = 9914,
  [SMALL_STATE(447)] = 9924,
  [SMALL_STATE(448)] = 9936,
  [SMALL_STATE(449)] = 9948,
  [SMALL_STATE(450)] = 9958,
  [SMALL_STATE(451)] = 9972,
  [SMALL_STATE(452)] = 9986,
  [SMALL_STATE(453)] = 10000,
  [SMALL_STATE(454)] = 10014,
  [SMALL_STATE(455)] = 10028,
  [SMALL_STATE(456)] = 10042,
  [SMALL_STATE(457)] = 10054,
  [SMALL_STATE(458)] = 10068,
  [SMALL_STATE(459)] = 10082,
  [SMALL_STATE(460)] = 10094,
  [SMALL_STATE(461)] = 10106,
  [SMALL_STATE(462)] = 10118,
  [SMALL_STATE(463)] = 10132,
  [SMALL_STATE(464)] = 10146,
  [SMALL_STATE(465)] = 10158,
  [SMALL_STATE(466)] = 10172,
  [SMALL_STATE(467)] = 10184,
  [SMALL_STATE(468)] = 10198,
  [SMALL_STATE(469)] = 10212,
  [SMALL_STATE(470)] = 10222,
  [SMALL_STATE(471)] = 10234,
  [SMALL_STATE(472)] = 10248,
  [SMALL_STATE(473)] = 10260,
  [SMALL_STATE(474)] = 10274,
  [SMALL_STATE(475)] = 10288,
  [SMALL_STATE(476)] = 10299,
  [SMALL_STATE(477)] = 10308,
  [SMALL_STATE(478)] = 10319,
  [SMALL_STATE(479)] = 10330,
  [SMALL_STATE(480)] = 10339,
  [SMALL_STATE(481)] = 10348,
  [SMALL_STATE(482)] = 10359,
  [SMALL_STATE(483)] = 10370,
  [SMALL_STATE(484)] = 10379,
  [SMALL_STATE(485)] = 10388,
  [SMALL_STATE(486)] = 10397,
  [SMALL_STATE(487)] = 10406,
  [SMALL_STATE(488)] = 10417,
  [SMALL_STATE(489)] = 10426,
  [SMALL_STATE(490)] = 10437,
  [SMALL_STATE(491)] = 10446,
  [SMALL_STATE(492)] = 10455,
  [SMALL_STATE(493)] = 10464,
  [SMALL_STATE(494)] = 10475,
  [SMALL_STATE(495)] = 10484,
  [SMALL_STATE(496)] = 10493,
  [SMALL_STATE(497)] = 10504,
  [SMALL_STATE(498)] = 10513,
  [SMALL_STATE(499)] = 10524,
  [SMALL_STATE(500)] = 10533,
  [SMALL_STATE(501)] = 10542,
  [SMALL_STATE(502)] = 10551,
  [SMALL_STATE(503)] = 10559,
  [SMALL_STATE(504)] = 10567,
  [SMALL_STATE(505)] = 10575,
  [SMALL_STATE(506)] = 10583,
  [SMALL_STATE(507)] = 10591,
  [SMALL_STATE(508)] = 10599,
  [SMALL_STATE(509)] = 10607,
  [SMALL_STATE(510)] = 10615,
  [SMALL_STATE(511)] = 10623,
  [SMALL_STATE(512)] = 10631,
  [SMALL_STATE(513)] = 10639,
  [SMALL_STATE(514)] = 10647,
  [SMALL_STATE(515)] = 10655,
  [SMALL_STATE(516)] = 10663,
  [SMALL_STATE(517)] = 10671,
  [SMALL_STATE(518)] = 10679,
  [SMALL_STATE(519)] = 10687,
  [SMALL_STATE(520)] = 10695,
  [SMALL_STATE(521)] = 10703,
  [SMALL_STATE(522)] = 10711,
  [SMALL_STATE(523)] = 10719,
  [SMALL_STATE(524)] = 10727,
  [SMALL_STATE(525)] = 10735,
  [SMALL_STATE(526)] = 10743,
  [SMALL_STATE(527)] = 10751,
  [SMALL_STATE(528)] = 10759,
  [SMALL_STATE(529)] = 10767,
  [SMALL_STATE(530)] = 10775,
  [SMALL_STATE(531)] = 10783,
  [SMALL_STATE(532)] = 10791,
  [SMALL_STATE(533)] = 10799,
  [SMALL_STATE(534)] = 10807,
  [SMALL_STATE(535)] = 10815,
  [SMALL_STATE(536)] = 10823,
  [SMALL_STATE(537)] = 10831,
  [SMALL_STATE(538)] = 10839,
  [SMALL_STATE(539)] = 10847,
  [SMALL_STATE(540)] = 10855,
  [SMALL_STATE(541)] = 10863,
  [SMALL_STATE(542)] = 10871,
  [SMALL_STATE(543)] = 10879,
  [SMALL_STATE(544)] = 10887,
  [SMALL_STATE(545)] = 10895,
  [SMALL_STATE(546)] = 10903,
  [SMALL_STATE(547)] = 10911,
  [SMALL_STATE(548)] = 10919,
  [SMALL_STATE(549)] = 10927,
  [SMALL_STATE(550)] = 10935,
  [SMALL_STATE(551)] = 10943,
  [SMALL_STATE(552)] = 10951,
  [SMALL_STATE(553)] = 10959,
  [SMALL_STATE(554)] = 10967,
  [SMALL_STATE(555)] = 10975,
  [SMALL_STATE(556)] = 10983,
  [SMALL_STATE(557)] = 10991,
  [SMALL_STATE(558)] = 10999,
  [SMALL_STATE(559)] = 11007,
  [SMALL_STATE(560)] = 11015,
  [SMALL_STATE(561)] = 11023,
  [SMALL_STATE(562)] = 11031,
  [SMALL_STATE(563)] = 11039,
  [SMALL_STATE(564)] = 11047,
  [SMALL_STATE(565)] = 11055,
  [SMALL_STATE(566)] = 11063,
  [SMALL_STATE(567)] = 11071,
  [SMALL_STATE(568)] = 11079,
  [SMALL_STATE(569)] = 11087,
  [SMALL_STATE(570)] = 11095,
  [SMALL_STATE(571)] = 11103,
  [SMALL_STATE(572)] = 11111,
  [SMALL_STATE(573)] = 11119,
  [SMALL_STATE(574)] = 11127,
  [SMALL_STATE(575)] = 11135,
  [SMALL_STATE(576)] = 11143,
  [SMALL_STATE(577)] = 11151,
  [SMALL_STATE(578)] = 11159,
  [SMALL_STATE(579)] = 11167,
  [SMALL_STATE(580)] = 11175,
  [SMALL_STATE(581)] = 11183,
  [SMALL_STATE(582)] = 11191,
  [SMALL_STATE(583)] = 11199,
  [SMALL_STATE(584)] = 11207,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, .production_id = 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(526),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(513),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(539),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(547),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(555),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(561),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(563),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(570),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(573),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(577),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 5, .production_id = 5),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, .production_id = 4),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, .production_id = 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, .production_id = 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 8, .production_id = 5),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 7, .production_id = 5),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, .production_id = 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 7, .production_id = 4),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, .production_id = 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 6, .production_id = 4),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 5, .production_id = 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 6, .production_id = 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 5, .production_id = 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_block, 2),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_basic_block, 2), SHIFT(39),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_basic_block, 2), SHIFT(2),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(576),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(569),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_block, 6),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_basic_block, 6), SHIFT(39),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_basic_block, 6), SHIFT(2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_block, 4),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_basic_block, 4), SHIFT(39),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_basic_block, 4), SHIFT(2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_block, 5),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_basic_block, 5), SHIFT(39),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_basic_block, 5), SHIFT(2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_block, 7),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_basic_block, 7), SHIFT(39),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_basic_block, 7), SHIFT(2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_block, 3),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_basic_block, 3), SHIFT(39),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_basic_block, 3), SHIFT(2),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_basic_block_repeat3, 2),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_block_repeat3, 2), SHIFT_REPEAT(29),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_basic_block_repeat3, 2), SHIFT_REPEAT(2),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_block_repeat3, 2), SHIFT_REPEAT(283),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_block_repeat3, 2), SHIFT_REPEAT(85),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_basic_block_repeat3, 2), SHIFT_REPEAT(98),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_basic_block_repeat3, 2), SHIFT_REPEAT(104),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_basic_block_repeat3, 2), SHIFT_REPEAT(89),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_basic_block, 4), SHIFT(29),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_basic_block, 3), SHIFT(29),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_basic_block, 5), SHIFT(29),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_basic_block, 6), SHIFT(29),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_block, 8),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_basic_block, 8), SHIFT(29),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_basic_block, 8), SHIFT(2),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bundle_repeat1, 2), SHIFT_REPEAT(36),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_bundle_repeat1, 2), SHIFT_REPEAT(2),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bundle_repeat1, 2), SHIFT_REPEAT(283),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bundle_repeat1, 2), SHIFT_REPEAT(85),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bundle_repeat1, 2),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_bundle_repeat1, 2), SHIFT_REPEAT(98),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_bundle_repeat1, 2), SHIFT_REPEAT(104),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_bundle_repeat1, 2), SHIFT_REPEAT(89),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_basic_block, 7), SHIFT(29),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_basic_block_repeat2, 2),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_block_repeat2, 2), SHIFT_REPEAT(38),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_basic_block_repeat2, 2),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_basic_block_repeat2, 2), SHIFT_REPEAT(576),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_basic_block_repeat2, 2), SHIFT_REPEAT(569),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_block_repeat2, 1), REDUCE(aux_sym_basic_block_repeat3, 1),
  [298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_basic_block_repeat2, 1), REDUCE(aux_sym_basic_block_repeat3, 1),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_basic_block_repeat2, 1),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_basic_block_repeat3, 2),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bundle_repeat1, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_basic_block_repeat3, 3),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_basic_block_repeat3, 3),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(74),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(75),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(46),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(78),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(62),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(567),
  [331] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(75),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(59),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_escaped_ir_value_repeat1, 2), SHIFT_REPEAT(96),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_escaped_ir_value_repeat1, 2), SHIFT_REPEAT(45),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_escaped_ir_value_repeat1, 2),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_escaped_ir_value_repeat1, 2), SHIFT_REPEAT(45),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_escaped_ir_value_repeat1, 2), SHIFT_REPEAT(95),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_escaped_ir_value_repeat1, 2), SHIFT_REPEAT(94),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_escaped_ir_value_repeat1, 2), SHIFT_REPEAT(93),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metadata, 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_md_value, 3),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_md_value, 3),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(567),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escaped_ir_content, 3),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escaped_ir_content, 3),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_md_value, 2),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_md_value, 2),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escaped_ir_content, 2),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escaped_ir_content, 2),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 4),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metadata, 4),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 3),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metadata, 3),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_repeat2, 2),
  [435] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat2, 2), SHIFT_REPEAT(89),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_md_value, 1),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_md_value, 1),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_register_operand_repeat1, 2),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_register_operand_repeat1, 2), SHIFT_REPEAT(104),
  [465] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_register_operand_repeat1, 2), SHIFT_REPEAT(104),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register_operand, 1),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register_operand, 2),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_flag, 1),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subregister, 1),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register_operand, 3),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register_operand, 4),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register_flag, 1),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register_flag, 1),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_registerclass, 1),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register_operand, 6),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_operand, 1),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [576] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_cfi_operand, 2), SHIFT(549),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cfi_operand, 2),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 6, .production_id = 5),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, .production_id = 2),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [599] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cfi_operand_repeat1, 2), SHIFT_REPEAT(549),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cfi_operand_repeat1, 2),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 1),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 5, .production_id = 4),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 1),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register_operand, 5),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_operand, 2),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, .production_id = 3),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register_operand, 8),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_cfi_operand, 3), SHIFT(549),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cfi_operand, 3),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register_operand, 7),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_address, 6),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shuffle_mask, 5),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate, 2),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_regmask, 3),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cfi_operand, 6),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cfi_operand, 1),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cfi_operand, 4),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_liveout, 3),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_regmask, 5),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shuffle_mask, 4),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 4),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_liveout, 5),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intrinsic, 4),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_regmask, 4),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_liveout, 4),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_index, 4),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mc_symbol, 4),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [713] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat3, 2), SHIFT_REPEAT(17),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat3, 2),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 2),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [730] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat4, 2), SHIFT_REPEAT(497),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat4, 2),
  [735] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat4, 2), SHIFT_REPEAT(493),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat4, 3),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_ordering, 1),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 6),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 5),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_operand, 3),
  [754] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_memory_operand_repeat1, 2), SHIFT_REPEAT(237),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_memory_operand_repeat1, 2),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sync_scope, 4),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 6, .production_id = 2),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [777] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat5, 2), SHIFT_REPEAT(470),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat5, 2),
  [782] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat5, 2), SHIFT_REPEAT(475),
  [785] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat5, 2), SHIFT_REPEAT(526),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 5, .production_id = 1),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 8, .production_id = 4),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 9, .production_id = 5),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 7, .production_id = 3),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_operand_flag, 1),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat5, 3),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 6, .production_id = 1),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 10, .production_id = 5),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 9, .production_id = 4),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 8, .production_id = 3),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 7, .production_id = 2),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [900] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(269),
  [903] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(499),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 13, .production_id = 5),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 12, .production_id = 5),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 12, .production_id = 4),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 11, .production_id = 5),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 11, .production_id = 4),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 11, .production_id = 3),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 10, .production_id = 2),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 10, .production_id = 4),
  [948] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat6, 2), SHIFT_REPEAT(489),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat6, 2),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 10, .production_id = 3),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 9, .production_id = 2),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 9, .production_id = 3),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 9, .production_id = 1),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_ir_value, 3),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 8, .production_id = 2),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [973] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_liveins, 2),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 8, .production_id = 1),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_pseudo_source_value, 2),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_ir_value, 2),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_successors, 3),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_liveins, 3),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 7, .production_id = 1),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_pseudo_source_value, 1),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ir_value, 1),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_pointer_info, 1),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_pseudo_source_value_keyword, 1),
  [1017] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_operand, 5),
  [1025] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_memory_operand_repeat2, 2), SHIFT_REPEAT(280),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_memory_operand_repeat2, 2),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_operand, 15),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_operand, 14),
  [1040] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(76),
  [1043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_operand, 13),
  [1049] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_operand, 12),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_successors, 7),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_operand, 11),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_operand, 10),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_successors_repeat1, 2),
  [1077] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_successors_repeat1, 2), SHIFT_REPEAT(530),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_liveins_repeat1, 2),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_liveins, 5),
  [1086] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_liveins_repeat1, 2), SHIFT_REPEAT(456),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_operand, 9),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_operand, 6),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_operand, 8),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_operand, 4),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_liveins, 4),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_liveins, 6),
  [1115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_block_repeat1, 2), SHIFT_REPEAT(185),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_basic_block_repeat1, 2),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_successors, 4),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_successors, 6),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_operand, 7),
  [1132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shuffle_mask_repeat1, 2), SHIFT_REPEAT(495),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shuffle_mask_repeat1, 2),
  [1137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_keyword, 1),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_keyword, 1),
  [1141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_regmask_repeat1, 2), SHIFT_REPEAT(435),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_custom_regmask_repeat1, 2),
  [1146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(533),
  [1149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2),
  [1151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mem_attribute, 2),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_successors, 2),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_liveins_repeat1, 4),
  [1169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_successors_repeat1, 5),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle, 3),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floatpred, 1),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intpred, 1),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_low_level_type, 1),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_low_level_type, 5),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle, 2),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1333] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_llvm_mir(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
