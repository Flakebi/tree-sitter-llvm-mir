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
#define STATE_COUNT 601
#define LARGE_STATE_COUNT 20
#define SYMBOL_COUNT 237
#define ALIAS_COUNT 0
#define TOKEN_COUNT 168
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
  anon_sym_SLASH_STAR = 8,
  aux_sym_multiline_comment_token1 = 9,
  aux_sym_multiline_comment_token2 = 10,
  anon_sym_STAR_SLASH = 11,
  sym_identifier = 12,
  sym_mnemonic = 13,
  sym_bb_ref = 14,
  sym_stack_object = 15,
  sym_constant_pool_index = 16,
  sym_jump_table_index = 17,
  sym_string = 18,
  sym_number = 19,
  aux_sym_float_token1 = 20,
  aux_sym_float_token2 = 21,
  sym_var = 22,
  sym_physical_register = 23,
  sym_immediate_type = 24,
  sym_ir_block = 25,
  sym_external_symbol = 26,
  sym_global_var = 27,
  sym_ir_local_var = 28,
  sym_metadata_ref = 29,
  anon_sym_LBRACE = 30,
  anon_sym_RBRACE = 31,
  anon_sym_successors = 32,
  anon_sym_liveins = 33,
  anon_sym_EQ = 34,
  anon_sym_pre_DASHinstr_DASHsymbol = 35,
  anon_sym_post_DASHinstr_DASHsymbol = 36,
  anon_sym_heap_DASHalloc_DASHmarker = 37,
  anon_sym_debug_DASHinstr_DASHnumber = 38,
  anon_sym_debug_DASHlocation = 39,
  anon_sym_COLON_COLON = 40,
  anon_sym_LT = 41,
  anon_sym_mcsymbol = 42,
  anon_sym_GT = 43,
  anon_sym_LPAREN2 = 44,
  anon_sym_BANG = 45,
  anon_sym_null = 46,
  aux_sym_md_value_token1 = 47,
  anon_sym_PIPE = 48,
  anon_sym_STAR = 49,
  anon_sym_LBRACK = 50,
  anon_sym_RBRACK = 51,
  anon_sym_DOT = 52,
  anon_sym__ = 53,
  anon_sym_tied_DASHdef = 54,
  anon_sym_target_DASHflags = 55,
  sym_primitive_type = 56,
  anon_sym_x = 57,
  anon_sym_CustomRegMask = 58,
  anon_sym_same_value = 59,
  anon_sym_def_cfa_register = 60,
  anon_sym_restore = 61,
  anon_sym_undefined = 62,
  anon_sym_offset = 63,
  anon_sym_rel_offset = 64,
  anon_sym_def_cfa = 65,
  anon_sym_def_cfa_offset = 66,
  anon_sym_adjust_cfa_offset = 67,
  anon_sym_llvm_def_aspace_cfa = 68,
  anon_sym_register = 69,
  anon_sym_escape = 70,
  anon_sym_remember_state = 71,
  anon_sym_restore_state = 72,
  anon_sym_window_save = 73,
  anon_sym_negate_ra_sign_state = 74,
  anon_sym_true = 75,
  anon_sym_false = 76,
  anon_sym_intpred = 77,
  anon_sym_floatpred = 78,
  anon_sym_eq = 79,
  anon_sym_ne = 80,
  anon_sym_sgt = 81,
  anon_sym_sge = 82,
  anon_sym_slt = 83,
  anon_sym_sle = 84,
  anon_sym_ugt = 85,
  anon_sym_uge = 86,
  anon_sym_ult = 87,
  anon_sym_ule = 88,
  anon_sym_oeq = 89,
  anon_sym_ogt = 90,
  anon_sym_oge = 91,
  anon_sym_olt = 92,
  anon_sym_ole = 93,
  anon_sym_one = 94,
  anon_sym_ord = 95,
  anon_sym_uno = 96,
  anon_sym_ueq = 97,
  anon_sym_une = 98,
  anon_sym_shufflemask = 99,
  anon_sym_undef = 100,
  anon_sym_liveout = 101,
  anon_sym_target_DASHindex = 102,
  anon_sym_blockaddress = 103,
  anon_sym_intrinsic = 104,
  anon_sym_load = 105,
  anon_sym_store = 106,
  anon_sym_unknown_DASHsize = 107,
  anon_sym_on = 108,
  anon_sym_from = 109,
  anon_sym_into = 110,
  anon_sym_align = 111,
  anon_sym_basealign = 112,
  anon_sym_addrspace = 113,
  anon_sym_unknown_DASHaddress = 114,
  anon_sym_BQUOTE = 115,
  anon_sym_PLUS = 116,
  anon_sym_DASH = 117,
  anon_sym_call_DASHentry = 118,
  anon_sym_custom = 119,
  anon_sym_constant_DASHpool = 120,
  anon_sym_stack = 121,
  anon_sym_got = 122,
  anon_sym_jump_DASHtable = 123,
  anon_sym_volatile = 124,
  anon_sym_non_DASHtemporal = 125,
  anon_sym_dereferenceable = 126,
  anon_sym_invariant = 127,
  anon_sym_syncscope = 128,
  anon_sym_unordered = 129,
  anon_sym_monotonic = 130,
  anon_sym_acquire = 131,
  anon_sym_release = 132,
  anon_sym_acq_rel = 133,
  anon_sym_seq_cst = 134,
  anon_sym_implicit = 135,
  anon_sym_implicit_DASHdef = 136,
  anon_sym_def = 137,
  anon_sym_dead = 138,
  anon_sym_killed = 139,
  anon_sym_internal = 140,
  anon_sym_early_DASHclobber = 141,
  anon_sym_debug_DASHuse = 142,
  anon_sym_renamable = 143,
  anon_sym_frame_DASHsetup = 144,
  anon_sym_frame_DASHdestroy = 145,
  anon_sym_nnan = 146,
  anon_sym_ninf = 147,
  anon_sym_nsz = 148,
  anon_sym_arcp = 149,
  anon_sym_contract = 150,
  anon_sym_afn = 151,
  anon_sym_reassoc = 152,
  anon_sym_nuw = 153,
  anon_sym_nsw = 154,
  anon_sym_exact = 155,
  anon_sym_nofpexcept = 156,
  anon_sym_address_DASHtaken = 157,
  anon_sym_landing_DASHpad = 158,
  anon_sym_inlineasm_DASHbr_DASHindirect_DASHtarget = 159,
  anon_sym_ehfunclet_DASHentry = 160,
  anon_sym_bbsections = 161,
  anon_sym_half = 162,
  anon_sym_float = 163,
  anon_sym_double = 164,
  anon_sym_x86_fp80 = 165,
  anon_sym_fp128 = 166,
  anon_sym_ppc_fp128 = 167,
  sym_body = 168,
  sym_basic_block = 169,
  sym_multiline_comment = 170,
  sym_label = 171,
  sym_float = 172,
  sym_register = 173,
  sym_bundle = 174,
  sym_successors = 175,
  sym_liveins = 176,
  sym_instruction = 177,
  sym_mc_symbol = 178,
  sym_metadata = 179,
  sym_md_value = 180,
  sym_register_operand = 181,
  sym_argument = 182,
  sym_machine_operand = 183,
  sym_subregister = 184,
  sym_registerclass = 185,
  sym_low_level_type = 186,
  sym_custom_regmask = 187,
  sym_cfi_operand = 188,
  sym_immediate = 189,
  sym_predicate = 190,
  sym_intpred = 191,
  sym_floatpred = 192,
  sym_shuffle_mask = 193,
  sym_liveout = 194,
  sym_target_index = 195,
  sym_block_address = 196,
  sym_intrinsic = 197,
  sym_memory_operand = 198,
  sym_mem_attribute = 199,
  sym_machine_pointer_info = 200,
  sym_ir_value = 201,
  sym_escaped_ir_value = 202,
  sym__escaped_ir_content = 203,
  sym_offset = 204,
  sym_memory_pseudo_source_value = 205,
  sym_memory_pseudo_source_value_keyword = 206,
  sym_memory_operand_flag = 207,
  sym_sync_scope = 208,
  sym_atomic_ordering = 209,
  sym_register_flag = 210,
  sym_instruction_flag = 211,
  sym_attribute = 212,
  sym_float_keyword = 213,
  aux_sym_body_repeat1 = 214,
  aux_sym_basic_block_repeat1 = 215,
  aux_sym_basic_block_repeat2 = 216,
  aux_sym_basic_block_repeat3 = 217,
  aux_sym_multiline_comment_repeat1 = 218,
  aux_sym_bundle_repeat1 = 219,
  aux_sym_successors_repeat1 = 220,
  aux_sym_liveins_repeat1 = 221,
  aux_sym_instruction_repeat1 = 222,
  aux_sym_instruction_repeat2 = 223,
  aux_sym_instruction_repeat3 = 224,
  aux_sym_instruction_repeat4 = 225,
  aux_sym_instruction_repeat5 = 226,
  aux_sym_instruction_repeat6 = 227,
  aux_sym_metadata_repeat1 = 228,
  aux_sym_register_operand_repeat1 = 229,
  aux_sym_argument_repeat1 = 230,
  aux_sym_custom_regmask_repeat1 = 231,
  aux_sym_cfi_operand_repeat1 = 232,
  aux_sym_shuffle_mask_repeat1 = 233,
  aux_sym_memory_operand_repeat1 = 234,
  aux_sym_memory_operand_repeat2 = 235,
  aux_sym_escaped_ir_value_repeat1 = 236,
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
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_multiline_comment_token1] = "multiline_comment_token1",
  [aux_sym_multiline_comment_token2] = "multiline_comment_token2",
  [anon_sym_STAR_SLASH] = "*/",
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
  [sym_multiline_comment] = "multiline_comment",
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
  [aux_sym_multiline_comment_repeat1] = "multiline_comment_repeat1",
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
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_multiline_comment_token1] = aux_sym_multiline_comment_token1,
  [aux_sym_multiline_comment_token2] = aux_sym_multiline_comment_token2,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
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
  [sym_multiline_comment] = sym_multiline_comment,
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
  [aux_sym_multiline_comment_repeat1] = aux_sym_multiline_comment_repeat1,
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
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_multiline_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multiline_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR_SLASH] = {
    .visible = true,
    .named = false,
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
  [sym_multiline_comment] = {
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
  [aux_sym_multiline_comment_repeat1] = {
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
      if (eof) ADVANCE(762);
      if (lookahead == '\n') ADVANCE(769);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(1324);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '$') ADVANCE(754);
      if (lookahead == '%') ADVANCE(18);
      if (lookahead == '&') ADVANCE(21);
      if (lookahead == '(') ADVANCE(1323);
      if (lookahead == ')') ADVANCE(766);
      if (lookahead == '*') ADVANCE(1333);
      if (lookahead == '+') ADVANCE(1435);
      if (lookahead == ',') ADVANCE(765);
      if (lookahead == '-') ADVANCE(1436);
      if (lookahead == '.') ADVANCE(1336);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '0') ADVANCE(734);
      if (lookahead == ':') ADVANCE(768);
      if (lookahead == ';') ADVANCE(770);
      if (lookahead == '<') ADVANCE(1320);
      if (lookahead == '=') ADVANCE(1308);
      if (lookahead == '>') ADVANCE(1322);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == 'C') ADVANCE(709);
      if (lookahead == '[') ADVANCE(1334);
      if (lookahead == ']') ADVANCE(1335);
      if (lookahead == '_') ADVANCE(1337);
      if (lookahead == '`') ADVANCE(1434);
      if (lookahead == 'a') ADVANCE(175);
      if (lookahead == 'b') ADVANCE(102);
      if (lookahead == 'c') ADVANCE(95);
      if (lookahead == 'd') ADVANCE(235);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'f') ADVANCE(104);
      if (lookahead == 'g') ADVANCE(512);
      if (lookahead == 'h') ADVANCE(111);
      if (lookahead == 'i') ADVANCE(448);
      if (lookahead == 'j') ADVANCE(710);
      if (lookahead == 'k') ADVANCE(389);
      if (lookahead == 'l') ADVANCE(110);
      if (lookahead == 'm') ADVANCE(183);
      if (lookahead == 'n') ADVANCE(236);
      if (lookahead == 'o') ADVANCE(273);
      if (lookahead == 'p') ADVANCE(1343);
      if (lookahead == 'r') ADVANCE(237);
      if (lookahead == 's') ADVANCE(1342);
      if (lookahead == 't') ADVANCE(106);
      if (lookahead == 'u') ADVANCE(65);
      if (lookahead == 'v') ADVANCE(517);
      if (lookahead == 'w') ADVANCE(391);
      if (lookahead == 'x') ADVANCE(1346);
      if (lookahead == '{') ADVANCE(1302);
      if (lookahead == '|') ADVANCE(1331);
      if (lookahead == '}') ADVANCE(1303);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(758)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(769);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(769);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '$') ADVANCE(754);
      if (lookahead == '%') ADVANCE(158);
      if (lookahead == '&') ADVANCE(21);
      if (lookahead == ',') ADVANCE(765);
      if (lookahead == '-') ADVANCE(1212);
      if (lookahead == '.') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '0') ADVANCE(1221);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == ';') ADVANCE(770);
      if (lookahead == '<') ADVANCE(1320);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == 'C') ADVANCE(1184);
      if (lookahead == '_') ADVANCE(1338);
      if (lookahead == 'a') ADVANCE(884);
      if (lookahead == 'b') ADVANCE(1013);
      if (lookahead == 'd') ADVANCE(899);
      if (lookahead == 'e') ADVANCE(816);
      if (lookahead == 'f') ADVANCE(1018);
      if (lookahead == 'h') ADVANCE(821);
      if (lookahead == 'i') ADVANCE(1031);
      if (lookahead == 'k') ADVANCE(991);
      if (lookahead == 'l') ADVANCE(990);
      if (lookahead == 'n') ADVANCE(900);
      if (lookahead == 'o') ADVANCE(961);
      if (lookahead == 'p') ADVANCE(1076);
      if (lookahead == 'r') ADVANCE(901);
      if (lookahead == 's') ADVANCE(818);
      if (lookahead == 't') ADVANCE(823);
      if (lookahead == 'u') ADVANCE(1047);
      if (lookahead == 'w') ADVANCE(1000);
      if (lookahead == 'x') ADVANCE(796);
      if (lookahead == '{') ADVANCE(1302);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(769);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '%') ADVANCE(19);
      if (lookahead == '(') ADVANCE(764);
      if (lookahead == ')') ADVANCE(766);
      if (lookahead == '+') ADVANCE(1435);
      if (lookahead == ',') ADVANCE(765);
      if (lookahead == '-') ADVANCE(1436);
      if (lookahead == '.') ADVANCE(1336);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(768);
      if (lookahead == ';') ADVANCE(770);
      if (lookahead == '=') ADVANCE(1308);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '`') ADVANCE(1434);
      if (lookahead == 'c') ADVANCE(96);
      if (lookahead == 'd') ADVANCE(268);
      if (lookahead == 'e') ADVANCE(565);
      if (lookahead == 'f') ADVANCE(103);
      if (lookahead == 'g') ADVANCE(512);
      if (lookahead == 'h') ADVANCE(275);
      if (lookahead == 'i') ADVANCE(498);
      if (lookahead == 'j') ADVANCE(710);
      if (lookahead == 'l') ADVANCE(515);
      if (lookahead == 'n') ADVANCE(269);
      if (lookahead == 'o') ADVANCE(274);
      if (lookahead == 'p') ADVANCE(539);
      if (lookahead == 's') ADVANCE(364);
      if (lookahead == 't') ADVANCE(578);
      if (lookahead == 'u') ADVANCE(279);
      if (lookahead == 'v') ADVANCE(517);
      if (lookahead == 'x') ADVANCE(1345);
      if (lookahead == '{') ADVANCE(1302);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(769);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(396);
      if (lookahead == '(') ADVANCE(1323);
      if (lookahead == ')') ADVANCE(766);
      if (lookahead == '+') ADVANCE(1435);
      if (lookahead == ',') ADVANCE(765);
      if (lookahead == '-') ADVANCE(1436);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == ';') ADVANCE(770);
      if (lookahead == 'a') ADVANCE(234);
      if (lookahead == 'b') ADVANCE(101);
      if (lookahead == 'd') ADVANCE(288);
      if (lookahead == 'e') ADVANCE(376);
      if (lookahead == 'h') ADVANCE(275);
      if (lookahead == 'i') ADVANCE(494);
      if (lookahead == 'l') ADVANCE(109);
      if (lookahead == 'p') ADVANCE(539);
      if (lookahead == '{') ADVANCE(1302);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(769);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(396);
      if (lookahead == ')') ADVANCE(766);
      if (lookahead == '+') ADVANCE(1435);
      if (lookahead == ',') ADVANCE(765);
      if (lookahead == '-') ADVANCE(1436);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == ';') ADVANCE(770);
      if (lookahead == 'a') ADVANCE(234);
      if (lookahead == 'b') ADVANCE(101);
      if (lookahead == 'd') ADVANCE(288);
      if (lookahead == 'e') ADVANCE(376);
      if (lookahead == 'h') ADVANCE(275);
      if (lookahead == 'i') ADVANCE(494);
      if (lookahead == 'l') ADVANCE(109);
      if (lookahead == 'p') ADVANCE(539);
      if (lookahead == '{') ADVANCE(1302);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(1324);
      if (lookahead == '%') ADVANCE(396);
      if (lookahead == '(') ADVANCE(764);
      if (lookahead == ')') ADVANCE(766);
      if (lookahead == '*') ADVANCE(1332);
      if (lookahead == ',') ADVANCE(765);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(767);
      if (lookahead == ';') ADVANCE(770);
      if (lookahead == '<') ADVANCE(1320);
      if (lookahead == '>') ADVANCE(1322);
      if (lookahead == '[') ADVANCE(1334);
      if (lookahead == ']') ADVANCE(1335);
      if (lookahead == 'n') ADVANCE(1329);
      if (lookahead == '{') ADVANCE(1302);
      if (lookahead == '|') ADVANCE(1331);
      if (lookahead == '}') ADVANCE(1303);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(1324);
      if (lookahead == '(') ADVANCE(1323);
      if (lookahead == ')') ADVANCE(766);
      if (lookahead == '*') ADVANCE(1332);
      if (lookahead == ',') ADVANCE(765);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(767);
      if (lookahead == ';') ADVANCE(770);
      if (lookahead == '<') ADVANCE(1320);
      if (lookahead == '>') ADVANCE(1322);
      if (lookahead == '[') ADVANCE(1334);
      if (lookahead == ']') ADVANCE(1335);
      if (lookahead == 'n') ADVANCE(1329);
      if (lookahead == '{') ADVANCE(1302);
      if (lookahead == '|') ADVANCE(1331);
      if (lookahead == '}') ADVANCE(1303);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(1324);
      if (lookahead == '(') ADVANCE(764);
      if (lookahead == ')') ADVANCE(766);
      if (lookahead == '*') ADVANCE(1332);
      if (lookahead == ',') ADVANCE(765);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(767);
      if (lookahead == ';') ADVANCE(770);
      if (lookahead == '<') ADVANCE(1320);
      if (lookahead == '>') ADVANCE(1322);
      if (lookahead == '[') ADVANCE(1334);
      if (lookahead == ']') ADVANCE(1335);
      if (lookahead == 'n') ADVANCE(1329);
      if (lookahead == '{') ADVANCE(1302);
      if (lookahead == '|') ADVANCE(1331);
      if (lookahead == '}') ADVANCE(1303);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '\\') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '$') ADVANCE(754);
      if (lookahead == '%') ADVANCE(158);
      if (lookahead == '&') ADVANCE(21);
      if (lookahead == '-') ADVANCE(1212);
      if (lookahead == '.') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '0') ADVANCE(1221);
      if (lookahead == ';') ADVANCE(770);
      if (lookahead == '<') ADVANCE(1320);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == 'C') ADVANCE(1184);
      if (lookahead == '_') ADVANCE(1338);
      if (lookahead == 'a') ADVANCE(884);
      if (lookahead == 'b') ADVANCE(1013);
      if (lookahead == 'd') ADVANCE(954);
      if (lookahead == 'e') ADVANCE(816);
      if (lookahead == 'f') ADVANCE(1018);
      if (lookahead == 'h') ADVANCE(822);
      if (lookahead == 'i') ADVANCE(1031);
      if (lookahead == 'k') ADVANCE(991);
      if (lookahead == 'l') ADVANCE(990);
      if (lookahead == 'n') ADVANCE(900);
      if (lookahead == 'o') ADVANCE(961);
      if (lookahead == 'p') ADVANCE(1084);
      if (lookahead == 'r') ADVANCE(901);
      if (lookahead == 's') ADVANCE(818);
      if (lookahead == 't') ADVANCE(823);
      if (lookahead == 'u') ADVANCE(1047);
      if (lookahead == 'w') ADVANCE(1000);
      if (lookahead == 'x') ADVANCE(796);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '$') ADVANCE(754);
      if (lookahead == '%') ADVANCE(158);
      if (lookahead == '&') ADVANCE(21);
      if (lookahead == '-') ADVANCE(1212);
      if (lookahead == '.') ADVANCE(1213);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '0') ADVANCE(1221);
      if (lookahead == ';') ADVANCE(770);
      if (lookahead == '<') ADVANCE(1320);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == 'C') ADVANCE(1184);
      if (lookahead == '_') ADVANCE(1338);
      if (lookahead == 'a') ADVANCE(884);
      if (lookahead == 'b') ADVANCE(1013);
      if (lookahead == 'd') ADVANCE(954);
      if (lookahead == 'e') ADVANCE(816);
      if (lookahead == 'f') ADVANCE(1018);
      if (lookahead == 'h') ADVANCE(822);
      if (lookahead == 'i') ADVANCE(1031);
      if (lookahead == 'k') ADVANCE(991);
      if (lookahead == 'l') ADVANCE(990);
      if (lookahead == 'n') ADVANCE(900);
      if (lookahead == 'o') ADVANCE(961);
      if (lookahead == 'p') ADVANCE(1084);
      if (lookahead == 'r') ADVANCE(901);
      if (lookahead == 's') ADVANCE(818);
      if (lookahead == 't') ADVANCE(855);
      if (lookahead == 'u') ADVANCE(1047);
      if (lookahead == 'w') ADVANCE(1000);
      if (lookahead == 'x') ADVANCE(796);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(1218);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(1299);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(1280);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(1274);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(1277);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(1271);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1300);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1301);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == 'c') ADVANCE(1252);
      if (lookahead == 'f') ADVANCE(1245);
      if (lookahead == 'i') ADVANCE(1255);
      if (lookahead == 'j') ADVANCE(1261);
      if (lookahead == 's') ADVANCE(1258);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1263);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == 'f') ADVANCE(1288);
      if (lookahead == 'i') ADVANCE(1290);
      if (lookahead == 's') ADVANCE(1292);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1294);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1297);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(1290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1294);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1297);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1275);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1276);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1278);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1272);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 24:
      if (lookahead == '$') ADVANCE(754);
      if (lookahead == '%') ADVANCE(755);
      if (lookahead == '(') ADVANCE(764);
      if (lookahead == ')') ADVANCE(766);
      if (lookahead == ',') ADVANCE(765);
      if (lookahead == '-') ADVANCE(748);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '0') ADVANCE(1221);
      if (lookahead == ';') ADVANCE(770);
      if (lookahead == '_') ADVANCE(1337);
      if (lookahead == 'a') ADVANCE(174);
      if (lookahead == 'd') ADVANCE(270);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == 'f') ADVANCE(105);
      if (lookahead == 'i') ADVANCE(449);
      if (lookahead == 'k') ADVANCE(389);
      if (lookahead == 'm') ADVANCE(516);
      if (lookahead == 'o') ADVANCE(475);
      if (lookahead == 'r') ADVANCE(271);
      if (lookahead == 's') ADVANCE(278);
      if (lookahead == 't') ADVANCE(578);
      if (lookahead == 'u') ADVANCE(476);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(24)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1222);
      END_STATE();
    case 25:
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '(') ADVANCE(764);
      if (lookahead == ')') ADVANCE(766);
      if (lookahead == '*') ADVANCE(1332);
      if (lookahead == ',') ADVANCE(765);
      if (lookahead == '-') ADVANCE(1212);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '0') ADVANCE(1221);
      if (lookahead == ';') ADVANCE(770);
      if (lookahead == '<') ADVANCE(1320);
      if (lookahead == '>') ADVANCE(1322);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '[') ADVANCE(1334);
      if (lookahead == ']') ADVANCE(1335);
      if (lookahead == '`') ADVANCE(1434);
      if (lookahead == '{') ADVANCE(1302);
      if (lookahead == '}') ADVANCE(1303);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(25)
      if (lookahead == 'i' ||
          lookahead == 'p' ||
          lookahead == 's') ADVANCE(1211);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1222);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 26:
      if (lookahead == '*') ADVANCE(771);
      END_STATE();
    case 27:
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '/') ADVANCE(773);
      if (lookahead == ';') ADVANCE(770);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(774);
      if (lookahead != 0) ADVANCE(772);
      END_STATE();
    case 28:
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '/') ADVANCE(776);
      if (lookahead != 0) ADVANCE(775);
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(775);
      END_STATE();
    case 30:
      if (lookahead == '+') ADVANCE(750);
      if (lookahead == '-') ADVANCE(749);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '0') ADVANCE(1219);
      if (lookahead == ';') ADVANCE(770);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(30)
      if (lookahead == 's' ||
          lookahead == 'u') ADVANCE(64);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1220);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(403);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(221);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(354);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(157);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(402);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(160);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(143);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(562);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(706);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(463);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(192);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(311);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(685);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(627);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(484);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(689);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(723);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(173);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(688);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(555);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(331);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(385);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(398);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(226);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(656);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(658);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(156);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(405);
      END_STATE();
    case 59:
      if (lookahead == '.') ADVANCE(1224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 60:
      if (lookahead == '.') ADVANCE(23);
      END_STATE();
    case 61:
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ';') ADVANCE(770);
      if (lookahead == '<') ADVANCE(1320);
      if (lookahead == 't') ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(61)
      if (lookahead == 'p' ||
          lookahead == 's') ADVANCE(1344);
      END_STATE();
    case 62:
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ';') ADVANCE(770);
      if (lookahead == '_') ADVANCE(1338);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(62)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 63:
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ';') ADVANCE(770);
      if (lookahead == 'a') ADVANCE(968);
      if (lookahead == 'c') ADVANCE(1071);
      if (lookahead == 'e') ADVANCE(1205);
      if (lookahead == 'f') ADVANCE(1111);
      if (lookahead == 'n') ADVANCE(999);
      if (lookahead == 'r') ADVANCE(948);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(63)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 64:
      if (lookahead == '0') ADVANCE(734);
      END_STATE();
    case 65:
      if (lookahead == '0') ADVANCE(734);
      if (lookahead == 'e') ADVANCE(568);
      if (lookahead == 'g') ADVANCE(243);
      if (lookahead == 'l') ADVANCE(244);
      if (lookahead == 'n') ADVANCE(223);
      END_STATE();
    case 66:
      if (lookahead == '0') ADVANCE(1511);
      END_STATE();
    case 67:
      if (lookahead == '1') ADVANCE(69);
      END_STATE();
    case 68:
      if (lookahead == '1') ADVANCE(70);
      END_STATE();
    case 69:
      if (lookahead == '2') ADVANCE(72);
      END_STATE();
    case 70:
      if (lookahead == '2') ADVANCE(74);
      END_STATE();
    case 71:
      if (lookahead == '6') ADVANCE(89);
      END_STATE();
    case 72:
      if (lookahead == '8') ADVANCE(1513);
      END_STATE();
    case 73:
      if (lookahead == '8') ADVANCE(66);
      END_STATE();
    case 74:
      if (lookahead == '8') ADVANCE(1515);
      END_STATE();
    case 75:
      if (lookahead == ':') ADVANCE(1319);
      END_STATE();
    case 76:
      if (lookahead == '>') ADVANCE(763);
      END_STATE();
    case 77:
      if (lookahead == 'M') ADVANCE(135);
      END_STATE();
    case 78:
      if (lookahead == 'R') ADVANCE(280);
      END_STATE();
    case 79:
      if (lookahead == '_') ADVANCE(728);
      END_STATE();
    case 80:
      if (lookahead == '_') ADVANCE(526);
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 81:
      if (lookahead == '_') ADVANCE(346);
      END_STATE();
    case 82:
      if (lookahead == '_') ADVANCE(586);
      END_STATE();
    case 83:
      if (lookahead == '_') ADVANCE(224);
      END_STATE();
    case 84:
      if (lookahead == '_') ADVANCE(635);
      END_STATE();
    case 85:
      if (lookahead == '_') ADVANCE(206);
      END_STATE();
    case 86:
      if (lookahead == '_') ADVANCE(650);
      END_STATE();
    case 87:
      if (lookahead == '_') ADVANCE(132);
      END_STATE();
    case 88:
      if (lookahead == '_') ADVANCE(591);
      if (lookahead == 'u') ADVANCE(394);
      END_STATE();
    case 89:
      if (lookahead == '_') ADVANCE(349);
      END_STATE();
    case 90:
      if (lookahead == '_') ADVANCE(201);
      END_STATE();
    case 91:
      if (lookahead == '_') ADVANCE(204);
      END_STATE();
    case 92:
      if (lookahead == '_') ADVANCE(654);
      END_STATE();
    case 93:
      if (lookahead == '_') ADVANCE(655);
      END_STATE();
    case 94:
      if (lookahead == '_') ADVANCE(548);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(424);
      if (lookahead == 'o') ADVANCE(468);
      if (lookahead == 'u') ADVANCE(653);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(424);
      if (lookahead == 'o') ADVANCE(509);
      if (lookahead == 'u') ADVANCE(653);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(580);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(580);
      if (lookahead == 'h') ADVANCE(345);
      if (lookahead == 'q') ADVANCE(1387);
      if (lookahead == 's') ADVANCE(200);
      if (lookahead == 'x') ADVANCE(117);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(1361);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(1367);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(618);
      if (lookahead == 'b') ADVANCE(622);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(618);
      if (lookahead == 'b') ADVANCE(622);
      if (lookahead == 'l') ADVANCE(522);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(443);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(443);
      if (lookahead == 'l') ADVANCE(523);
      if (lookahead == 'p') ADVANCE(67);
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(443);
      if (lookahead == 'r') ADVANCE(519);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(576);
      if (lookahead == 'i') ADVANCE(282);
      if (lookahead == 'r') ADVANCE(714);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(208);
      if (lookahead == 'b') ADVANCE(712);
      if (lookahead == 'f') ADVANCE(1460);
      if (lookahead == 'r') ADVANCE(287);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(208);
      if (lookahead == 'b') ADVANCE(722);
      if (lookahead == 'f') ADVANCE(1458);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(477);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(477);
      if (lookahead == 'i') ADVANCE(726);
      if (lookahead == 'l') ADVANCE(724);
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(422);
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(552);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(462);
      if (lookahead == 'o') ADVANCE(450);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(410);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(623);
      if (lookahead == 'g') ADVANCE(397);
      if (lookahead == 'l') ADVANCE(80);
      if (lookahead == 'm') ADVANCE(289);
      if (lookahead == 'n') ADVANCE(125);
      if (lookahead == 's') ADVANCE(676);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(662);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(370);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(470);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(182);
      if (lookahead == 'o') ADVANCE(585);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(687);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(581);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(695);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(459);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(219);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(630);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(440);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(621);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(415);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(657);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(442);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(624);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(417);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(599);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(727);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(556);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(489);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(429);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(495);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(691);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(640);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(692);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(694);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(597);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(705);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(233);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(233);
      if (lookahead == 's') ADVANCE(378);
      END_STATE();
    case 158:
      if (lookahead == 'b') ADVANCE(1239);
      if (lookahead == 'c') ADVANCE(1252);
      if (lookahead == 'f') ADVANCE(1245);
      if (lookahead == 'j') ADVANCE(1261);
      if (lookahead == 's') ADVANCE(1258);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 159:
      if (lookahead == 'b') ADVANCE(430);
      END_STATE();
    case 160:
      if (lookahead == 'b') ADVANCE(598);
      END_STATE();
    case 161:
      if (lookahead == 'b') ADVANCE(297);
      END_STATE();
    case 162:
      if (lookahead == 'b') ADVANCE(312);
      END_STATE();
    case 163:
      if (lookahead == 'b') ADVANCE(317);
      END_STATE();
    case 164:
      if (lookahead == 'b') ADVANCE(529);
      END_STATE();
    case 165:
      if (lookahead == 'b') ADVANCE(162);
      END_STATE();
    case 166:
      if (lookahead == 'b') ADVANCE(721);
      END_STATE();
    case 167:
      if (lookahead == 'b') ADVANCE(721);
      if (lookahead == 'r') ADVANCE(287);
      END_STATE();
    case 168:
      if (lookahead == 'b') ADVANCE(533);
      END_STATE();
    case 169:
      if (lookahead == 'b') ADVANCE(536);
      END_STATE();
    case 170:
      if (lookahead == 'b') ADVANCE(435);
      END_STATE();
    case 171:
      if (lookahead == 'b') ADVANCE(436);
      END_STATE();
    case 172:
      if (lookahead == 'b') ADVANCE(437);
      END_STATE();
    case 173:
      if (lookahead == 'b') ADVANCE(446);
      END_STATE();
    case 174:
      if (lookahead == 'c') ADVANCE(566);
      END_STATE();
    case 175:
      if (lookahead == 'c') ADVANCE(566);
      if (lookahead == 'd') ADVANCE(216);
      if (lookahead == 'f') ADVANCE(467);
      if (lookahead == 'l') ADVANCE(377);
      if (lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 176:
      if (lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 177:
      if (lookahead == 'c') ADVANCE(412);
      END_STATE();
    case 178:
      if (lookahead == 'c') ADVANCE(1490);
      END_STATE();
    case 179:
      if (lookahead == 'c') ADVANCE(1421);
      END_STATE();
    case 180:
      if (lookahead == 'c') ADVANCE(1449);
      END_STATE();
    case 181:
      if (lookahead == 'c') ADVANCE(549);
      END_STATE();
    case 182:
      if (lookahead == 'c') ADVANCE(406);
      END_STATE();
    case 183:
      if (lookahead == 'c') ADVANCE(609);
      if (lookahead == 'o') ADVANCE(497);
      END_STATE();
    case 184:
      if (lookahead == 'c') ADVANCE(661);
      END_STATE();
    case 185:
      if (lookahead == 'c') ADVANCE(633);
      END_STATE();
    case 186:
      if (lookahead == 'c') ADVANCE(409);
      END_STATE();
    case 187:
      if (lookahead == 'c') ADVANCE(193);
      END_STATE();
    case 188:
      if (lookahead == 'c') ADVANCE(388);
      END_STATE();
    case 189:
      if (lookahead == 'c') ADVANCE(350);
      END_STATE();
    case 190:
      if (lookahead == 'c') ADVANCE(677);
      END_STATE();
    case 191:
      if (lookahead == 'c') ADVANCE(545);
      END_STATE();
    case 192:
      if (lookahead == 'c') ADVANCE(428);
      END_STATE();
    case 193:
      if (lookahead == 'c') ADVANCE(327);
      END_STATE();
    case 194:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 195:
      if (lookahead == 'c') ADVANCE(666);
      END_STATE();
    case 196:
      if (lookahead == 'c') ADVANCE(700);
      END_STATE();
    case 197:
      if (lookahead == 'c') ADVANCE(298);
      END_STATE();
    case 198:
      if (lookahead == 'c') ADVANCE(256);
      END_STATE();
    case 199:
      if (lookahead == 'c') ADVANCE(335);
      END_STATE();
    case 200:
      if (lookahead == 'c') ADVANCE(139);
      END_STATE();
    case 201:
      if (lookahead == 'c') ADVANCE(351);
      END_STATE();
    case 202:
      if (lookahead == 'c') ADVANCE(337);
      END_STATE();
    case 203:
      if (lookahead == 'c') ADVANCE(433);
      END_STATE();
    case 204:
      if (lookahead == 'c') ADVANCE(353);
      END_STATE();
    case 205:
      if (lookahead == 'c') ADVANCE(153);
      END_STATE();
    case 206:
      if (lookahead == 'c') ADVANCE(634);
      END_STATE();
    case 207:
      if (lookahead == 'd') ADVANCE(1404);
      END_STATE();
    case 208:
      if (lookahead == 'd') ADVANCE(1462);
      END_STATE();
    case 209:
      if (lookahead == 'd') ADVANCE(1423);
      END_STATE();
    case 210:
      if (lookahead == 'd') ADVANCE(1464);
      END_STATE();
    case 211:
      if (lookahead == 'd') ADVANCE(1383);
      END_STATE();
    case 212:
      if (lookahead == 'd') ADVANCE(1385);
      END_STATE();
    case 213:
      if (lookahead == 'd') ADVANCE(1355);
      END_STATE();
    case 214:
      if (lookahead == 'd') ADVANCE(1448);
      END_STATE();
    case 215:
      if (lookahead == 'd') ADVANCE(1501);
      END_STATE();
    case 216:
      if (lookahead == 'd') ADVANCE(570);
      if (lookahead == 'j') ADVANCE(720);
      END_STATE();
    case 217:
      if (lookahead == 'd') ADVANCE(54);
      END_STATE();
    case 218:
      if (lookahead == 'd') ADVANCE(514);
      END_STATE();
    case 219:
      if (lookahead == 'd') ADVANCE(228);
      END_STATE();
    case 220:
      if (lookahead == 'd') ADVANCE(336);
      END_STATE();
    case 221:
      if (lookahead == 'd') ADVANCE(334);
      if (lookahead == 's') ADVANCE(318);
      END_STATE();
    case 222:
      if (lookahead == 'd') ADVANCE(277);
      END_STATE();
    case 223:
      if (lookahead == 'd') ADVANCE(293);
      if (lookahead == 'e') ADVANCE(1408);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead == 'o') ADVANCE(1406);
      END_STATE();
    case 224:
      if (lookahead == 'd') ADVANCE(301);
      END_STATE();
    case 225:
      if (lookahead == 'd') ADVANCE(382);
      END_STATE();
    case 226:
      if (lookahead == 'd') ADVANCE(303);
      END_STATE();
    case 227:
      if (lookahead == 'd') ADVANCE(307);
      END_STATE();
    case 228:
      if (lookahead == 'd') ADVANCE(605);
      END_STATE();
    case 229:
      if (lookahead == 'd') ADVANCE(309);
      if (lookahead == 'k') ADVANCE(505);
      if (lookahead == 'o') ADVANCE(582);
      END_STATE();
    case 230:
      if (lookahead == 'd') ADVANCE(400);
      END_STATE();
    case 231:
      if (lookahead == 'd') ADVANCE(606);
      END_STATE();
    case 232:
      if (lookahead == 'd') ADVANCE(607);
      END_STATE();
    case 233:
      if (lookahead == 'd') ADVANCE(231);
      END_STATE();
    case 234:
      if (lookahead == 'd') ADVANCE(232);
      if (lookahead == 'l') ADVANCE(377);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(711);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(1389);
      if (lookahead == 'i') ADVANCE(478);
      if (lookahead == 'n') ADVANCE(120);
      if (lookahead == 'o') ADVANCE(344);
      if (lookahead == 's') ADVANCE(729);
      if (lookahead == 'u') ADVANCE(427);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(1400);
      if (lookahead == 't') ADVANCE(1399);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(1402);
      if (lookahead == 't') ADVANCE(1401);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(1403);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(1391);
      if (lookahead == 't') ADVANCE(1390);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(1393);
      if (lookahead == 't') ADVANCE(1392);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(1395);
      if (lookahead == 't') ADVANCE(1394);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(1397);
      if (lookahead == 't') ADVANCE(1396);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(1408);
      if (lookahead == 'k') ADVANCE(502);
      if (lookahead == 'o') ADVANCE(1405);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(1381);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(1382);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(1424);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(1509);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(1371);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(1450);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(1451);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(1354);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(1443);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(1432);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(1470);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(1472);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(1447);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(1442);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(1349);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(1377);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(1425);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(1375);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(1373);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(1445);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(1379);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(1388);
      if (lookahead == 'o') ADVANCE(469);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(447);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(736);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(567);
      if (lookahead == 'f') ADVANCE(356);
      if (lookahead == 'g') ADVANCE(238);
      if (lookahead == 'l') ADVANCE(239);
      if (lookahead == 'n') ADVANCE(1427);
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(567);
      if (lookahead == 'g') ADVANCE(238);
      if (lookahead == 'l') ADVANCE(239);
      if (lookahead == 'n') ADVANCE(240);
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(735);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(569);
      if (lookahead == 't') ADVANCE(518);
      if (lookahead == 'y') ADVANCE(483);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(568);
      if (lookahead == 'g') ADVANCE(243);
      if (lookahead == 'l') ADVANCE(244);
      if (lookahead == 'n') ADVANCE(245);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(363);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(375);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(584);
      if (lookahead == 'o') ADVANCE(1429);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(584);
      if (lookahead == 'o') ADVANCE(1429);
      if (lookahead == 'p') ADVANCE(600);
      if (lookahead == 'r') ADVANCE(381);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(352);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(454);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(571);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(583);
      END_STATE();
    case 298:
      if (lookahead == 'e') ADVANCE(557);
      END_STATE();
    case 299:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(414);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(347);
      END_STATE();
    case 302:
      if (lookahead == 'e') ADVANCE(663);
      END_STATE();
    case 303:
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 304:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 305:
      if (lookahead == 'e') ADVANCE(679);
      END_STATE();
    case 306:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 307:
      if (lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 308:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 309:
      if (lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 310:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 311:
      if (lookahead == 'e') ADVANCE(488);
      END_STATE();
    case 312:
      if (lookahead == 'e') ADVANCE(572);
      END_STATE();
    case 313:
      if (lookahead == 'e') ADVANCE(573);
      END_STATE();
    case 314:
      if (lookahead == 'e') ADVANCE(473);
      END_STATE();
    case 315:
      if (lookahead == 'e') ADVANCE(574);
      END_STATE();
    case 316:
      if (lookahead == 'e') ADVANCE(704);
      END_STATE();
    case 317:
      if (lookahead == 'e') ADVANCE(575);
      END_STATE();
    case 318:
      if (lookahead == 'e') ADVANCE(678);
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
      if (lookahead == 'e') ADVANCE(673);
      END_STATE();
    case 323:
      if (lookahead == 'e') ADVANCE(458);
      END_STATE();
    case 324:
      if (lookahead == 'e') ADVANCE(625);
      END_STATE();
    case 325:
      if (lookahead == 'e') ADVANCE(625);
      if (lookahead == 's') ADVANCE(561);
      END_STATE();
    case 326:
      if (lookahead == 'e') ADVANCE(461);
      END_STATE();
    case 327:
      if (lookahead == 'e') ADVANCE(628);
      END_STATE();
    case 328:
      if (lookahead == 'e') ADVANCE(492);
      END_STATE();
    case 329:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 330:
      if (lookahead == 'e') ADVANCE(636);
      END_STATE();
    case 331:
      if (lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 332:
      if (lookahead == 'e') ADVANCE(638);
      END_STATE();
    case 333:
      if (lookahead == 'e') ADVANCE(595);
      END_STATE();
    case 334:
      if (lookahead == 'e') ADVANCE(639);
      END_STATE();
    case 335:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 336:
      if (lookahead == 'e') ADVANCE(603);
      END_STATE();
    case 337:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 338:
      if (lookahead == 'f') ADVANCE(1505);
      END_STATE();
    case 339:
      if (lookahead == 'f') ADVANCE(1480);
      END_STATE();
    case 340:
      if (lookahead == 'f') ADVANCE(1413);
      END_STATE();
    case 341:
      if (lookahead == 'f') ADVANCE(1339);
      END_STATE();
    case 342:
      if (lookahead == 'f') ADVANCE(1456);
      END_STATE();
    case 343:
      if (lookahead == 'f') ADVANCE(1411);
      END_STATE();
    case 344:
      if (lookahead == 'f') ADVANCE(554);
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 345:
      if (lookahead == 'f') ADVANCE(718);
      END_STATE();
    case 346:
      if (lookahead == 'f') ADVANCE(563);
      END_STATE();
    case 347:
      if (lookahead == 'f') ADVANCE(87);
      END_STATE();
    case 348:
      if (lookahead == 'f') ADVANCE(355);
      END_STATE();
    case 349:
      if (lookahead == 'f') ADVANCE(551);
      END_STATE();
    case 350:
      if (lookahead == 'f') ADVANCE(99);
      END_STATE();
    case 351:
      if (lookahead == 'f') ADVANCE(126);
      END_STATE();
    case 352:
      if (lookahead == 'f') ADVANCE(333);
      END_STATE();
    case 353:
      if (lookahead == 'f') ADVANCE(100);
      END_STATE();
    case 354:
      if (lookahead == 'f') ADVANCE(431);
      if (lookahead == 'i') ADVANCE(501);
      END_STATE();
    case 355:
      if (lookahead == 'f') ADVANCE(432);
      END_STATE();
    case 356:
      if (lookahead == 'f') ADVANCE(632);
      END_STATE();
    case 357:
      if (lookahead == 'f') ADVANCE(643);
      END_STATE();
    case 358:
      if (lookahead == 'f') ADVANCE(644);
      END_STATE();
    case 359:
      if (lookahead == 'f') ADVANCE(645);
      END_STATE();
    case 360:
      if (lookahead == 'f') ADVANCE(357);
      END_STATE();
    case 361:
      if (lookahead == 'f') ADVANCE(358);
      END_STATE();
    case 362:
      if (lookahead == 'f') ADVANCE(359);
      END_STATE();
    case 363:
      if (lookahead == 'g') ADVANCE(77);
      END_STATE();
    case 364:
      if (lookahead == 'g') ADVANCE(241);
      if (lookahead == 'l') ADVANCE(242);
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 365:
      if (lookahead == 'g') ADVANCE(31);
      END_STATE();
    case 366:
      if (lookahead == 'g') ADVANCE(471);
      END_STATE();
    case 367:
      if (lookahead == 'g') ADVANCE(38);
      END_STATE();
    case 368:
      if (lookahead == 'g') ADVANCE(305);
      END_STATE();
    case 369:
      if (lookahead == 'g') ADVANCE(35);
      END_STATE();
    case 370:
      if (lookahead == 'g') ADVANCE(614);
      END_STATE();
    case 371:
      if (lookahead == 'g') ADVANCE(472);
      END_STATE();
    case 372:
      if (lookahead == 'g') ADVANCE(47);
      END_STATE();
    case 373:
      if (lookahead == 'g') ADVANCE(510);
      END_STATE();
    case 374:
      if (lookahead == 'g') ADVANCE(322);
      END_STATE();
    case 375:
      if (lookahead == 'g') ADVANCE(401);
      END_STATE();
    case 376:
      if (lookahead == 'h') ADVANCE(345);
      END_STATE();
    case 377:
      if (lookahead == 'i') ADVANCE(366);
      END_STATE();
    case 378:
      if (lookahead == 'i') ADVANCE(744);
      END_STATE();
    case 379:
      if (lookahead == 'i') ADVANCE(282);
      END_STATE();
    case 380:
      if (lookahead == 'i') ADVANCE(500);
      END_STATE();
    case 381:
      if (lookahead == 'i') ADVANCE(481);
      END_STATE();
    case 382:
      if (lookahead == 'i') ADVANCE(499);
      END_STATE();
    case 383:
      if (lookahead == 'i') ADVANCE(482);
      if (lookahead == 'o') ADVANCE(716);
      END_STATE();
    case 384:
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 385:
      if (lookahead == 'i') ADVANCE(507);
      END_STATE();
    case 386:
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 387:
      if (lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 388:
      if (lookahead == 'i') ADVANCE(667);
      END_STATE();
    case 389:
      if (lookahead == 'i') ADVANCE(426);
      END_STATE();
    case 390:
      if (lookahead == 'i') ADVANCE(371);
      END_STATE();
    case 391:
      if (lookahead == 'i') ADVANCE(479);
      END_STATE();
    case 392:
      if (lookahead == 'i') ADVANCE(534);
      END_STATE();
    case 393:
      if (lookahead == 'i') ADVANCE(373);
      END_STATE();
    case 394:
      if (lookahead == 'i') ADVANCE(593);
      END_STATE();
    case 395:
      if (lookahead == 'i') ADVANCE(538);
      END_STATE();
    case 396:
      if (lookahead == 'i') ADVANCE(592);
      END_STATE();
    case 397:
      if (lookahead == 'i') ADVANCE(651);
      END_STATE();
    case 398:
      if (lookahead == 'i') ADVANCE(490);
      END_STATE();
    case 399:
      if (lookahead == 'i') ADVANCE(434);
      END_STATE();
    case 400:
      if (lookahead == 'i') ADVANCE(604);
      END_STATE();
    case 401:
      if (lookahead == 'i') ADVANCE(652);
      END_STATE();
    case 402:
      if (lookahead == 'i') ADVANCE(508);
      if (lookahead == 'l') ADVANCE(541);
      END_STATE();
    case 403:
      if (lookahead == 'i') ADVANCE(508);
      if (lookahead == 'l') ADVANCE(541);
      if (lookahead == 'u') ADVANCE(642);
      END_STATE();
    case 404:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 405:
      if (lookahead == 'i') ADVANCE(511);
      END_STATE();
    case 406:
      if (lookahead == 'k') ADVANCE(1440);
      END_STATE();
    case 407:
      if (lookahead == 'k') ADVANCE(1409);
      END_STATE();
    case 408:
      if (lookahead == 'k') ADVANCE(1347);
      END_STATE();
    case 409:
      if (lookahead == 'k') ADVANCE(60);
      END_STATE();
    case 410:
      if (lookahead == 'k') ADVANCE(314);
      END_STATE();
    case 411:
      if (lookahead == 'k') ADVANCE(315);
      END_STATE();
    case 412:
      if (lookahead == 'k') ADVANCE(127);
      END_STATE();
    case 413:
      if (lookahead == 'l') ADVANCE(1325);
      END_STATE();
    case 414:
      if (lookahead == 'l') ADVANCE(1452);
      END_STATE();
    case 415:
      if (lookahead == 'l') ADVANCE(1466);
      END_STATE();
    case 416:
      if (lookahead == 'l') ADVANCE(1321);
      END_STATE();
    case 417:
      if (lookahead == 'l') ADVANCE(1444);
      END_STATE();
    case 418:
      if (lookahead == 'l') ADVANCE(1439);
      END_STATE();
    case 419:
      if (lookahead == 'l') ADVANCE(1309);
      END_STATE();
    case 420:
      if (lookahead == 'l') ADVANCE(1311);
      END_STATE();
    case 421:
      if (lookahead == 'l') ADVANCE(741);
      END_STATE();
    case 422:
      if (lookahead == 'l') ADVANCE(338);
      END_STATE();
    case 423:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 424:
      if (lookahead == 'l') ADVANCE(423);
      END_STATE();
    case 425:
      if (lookahead == 'l') ADVANCE(384);
      END_STATE();
    case 426:
      if (lookahead == 'l') ADVANCE(441);
      END_STATE();
    case 427:
      if (lookahead == 'l') ADVANCE(413);
      if (lookahead == 'w') ADVANCE(1492);
      END_STATE();
    case 428:
      if (lookahead == 'l') ADVANCE(520);
      END_STATE();
    case 429:
      if (lookahead == 'l') ADVANCE(444);
      END_STATE();
    case 430:
      if (lookahead == 'l') ADVANCE(250);
      END_STATE();
    case 431:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 432:
      if (lookahead == 'l') ADVANCE(326);
      END_STATE();
    case 433:
      if (lookahead == 'l') ADVANCE(316);
      END_STATE();
    case 434:
      if (lookahead == 'l') ADVANCE(255);
      END_STATE();
    case 435:
      if (lookahead == 'l') ADVANCE(258);
      END_STATE();
    case 436:
      if (lookahead == 'l') ADVANCE(260);
      END_STATE();
    case 437:
      if (lookahead == 'l') ADVANCE(266);
      END_STATE();
    case 438:
      if (lookahead == 'l') ADVANCE(380);
      END_STATE();
    case 439:
      if (lookahead == 'l') ADVANCE(380);
      if (lookahead == 't') ADVANCE(286);
      if (lookahead == 'v') ADVANCE(123);
      END_STATE();
    case 440:
      if (lookahead == 'l') ADVANCE(390);
      END_STATE();
    case 441:
      if (lookahead == 'l') ADVANCE(291);
      END_STATE();
    case 442:
      if (lookahead == 'l') ADVANCE(717);
      END_STATE();
    case 443:
      if (lookahead == 'l') ADVANCE(629);
      END_STATE();
    case 444:
      if (lookahead == 'l') ADVANCE(535);
      END_STATE();
    case 445:
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 446:
      if (lookahead == 'l') ADVANCE(537);
      END_STATE();
    case 447:
      if (lookahead == 'l') ADVANCE(294);
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 448:
      if (lookahead == 'm') ADVANCE(553);
      if (lookahead == 'n') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1270);
      END_STATE();
    case 449:
      if (lookahead == 'm') ADVANCE(553);
      if (lookahead == 'n') ADVANCE(674);
      END_STATE();
    case 450:
      if (lookahead == 'm') ADVANCE(1428);
      END_STATE();
    case 451:
      if (lookahead == 'm') ADVANCE(78);
      END_STATE();
    case 452:
      if (lookahead == 'm') ADVANCE(1438);
      END_STATE();
    case 453:
      if (lookahead == 'm') ADVANCE(164);
      END_STATE();
    case 454:
      if (lookahead == 'm') ADVANCE(161);
      END_STATE();
    case 455:
      if (lookahead == 'm') ADVANCE(83);
      END_STATE();
    case 456:
      if (lookahead == 'm') ADVANCE(559);
      END_STATE();
    case 457:
      if (lookahead == 'm') ADVANCE(281);
      END_STATE();
    case 458:
      if (lookahead == 'm') ADVANCE(560);
      END_STATE();
    case 459:
      if (lookahead == 'm') ADVANCE(151);
      END_STATE();
    case 460:
      if (lookahead == 'm') ADVANCE(36);
      END_STATE();
    case 461:
      if (lookahead == 'm') ADVANCE(130);
      END_STATE();
    case 462:
      if (lookahead == 'm') ADVANCE(292);
      END_STATE();
    case 463:
      if (lookahead == 'm') ADVANCE(137);
      END_STATE();
    case 464:
      if (lookahead == 'm') ADVANCE(163);
      END_STATE();
    case 465:
      if (lookahead == 'm') ADVANCE(168);
      END_STATE();
    case 466:
      if (lookahead == 'm') ADVANCE(169);
      END_STATE();
    case 467:
      if (lookahead == 'n') ADVANCE(1488);
      END_STATE();
    case 468:
      if (lookahead == 'n') ADVANCE(620);
      END_STATE();
    case 469:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 470:
      if (lookahead == 'n') ADVANCE(1478);
      END_STATE();
    case 471:
      if (lookahead == 'n') ADVANCE(1430);
      END_STATE();
    case 472:
      if (lookahead == 'n') ADVANCE(1431);
      END_STATE();
    case 473:
      if (lookahead == 'n') ADVANCE(1500);
      END_STATE();
    case 474:
      if (lookahead == 'n') ADVANCE(1317);
      END_STATE();
    case 475:
      if (lookahead == 'n') ADVANCE(1426);
      END_STATE();
    case 476:
      if (lookahead == 'n') ADVANCE(229);
      END_STATE();
    case 477:
      if (lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 478:
      if (lookahead == 'n') ADVANCE(339);
      END_STATE();
    case 479:
      if (lookahead == 'n') ADVANCE(218);
      END_STATE();
    case 480:
      if (lookahead == 'n') ADVANCE(513);
      END_STATE();
    case 481:
      if (lookahead == 'n') ADVANCE(647);
      END_STATE();
    case 482:
      if (lookahead == 'n') ADVANCE(610);
      END_STATE();
    case 483:
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 484:
      if (lookahead == 'n') ADVANCE(719);
      END_STATE();
    case 485:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 486:
      if (lookahead == 'n') ADVANCE(611);
      END_STATE();
    case 487:
      if (lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 488:
      if (lookahead == 'n') ADVANCE(681);
      END_STATE();
    case 489:
      if (lookahead == 'n') ADVANCE(682);
      END_STATE();
    case 490:
      if (lookahead == 'n') ADVANCE(230);
      END_STATE();
    case 491:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 492:
      if (lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 493:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 494:
      if (lookahead == 'n') ADVANCE(438);
      END_STATE();
    case 495:
      if (lookahead == 'n') ADVANCE(668);
      END_STATE();
    case 496:
      if (lookahead == 'n') ADVANCE(686);
      END_STATE();
    case 497:
      if (lookahead == 'n') ADVANCE(544);
      END_STATE();
    case 498:
      if (lookahead == 'n') ADVANCE(725);
      END_STATE();
    case 499:
      if (lookahead == 'n') ADVANCE(367);
      END_STATE();
    case 500:
      if (lookahead == 'n') ADVANCE(304);
      END_STATE();
    case 501:
      if (lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 502:
      if (lookahead == 'n') ADVANCE(540);
      END_STATE();
    case 503:
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 504:
      if (lookahead == 'n') ADVANCE(387);
      END_STATE();
    case 505:
      if (lookahead == 'n') ADVANCE(542);
      END_STATE();
    case 506:
      if (lookahead == 'n') ADVANCE(308);
      END_STATE();
    case 507:
      if (lookahead == 'n') ADVANCE(637);
      END_STATE();
    case 508:
      if (lookahead == 'n') ADVANCE(648);
      END_STATE();
    case 509:
      if (lookahead == 'n') ADVANCE(619);
      END_STATE();
    case 510:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 511:
      if (lookahead == 'n') ADVANCE(659);
      END_STATE();
    case 512:
      if (lookahead == 'o') ADVANCE(660);
      END_STATE();
    case 513:
      if (lookahead == 'o') ADVANCE(731);
      END_STATE();
    case 514:
      if (lookahead == 'o') ADVANCE(730);
      END_STATE();
    case 515:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 516:
      if (lookahead == 'o') ADVANCE(497);
      END_STATE();
    case 517:
      if (lookahead == 'o') ADVANCE(445);
      END_STATE();
    case 518:
      if (lookahead == 'o') ADVANCE(585);
      END_STATE();
    case 519:
      if (lookahead == 'o') ADVANCE(450);
      END_STATE();
    case 520:
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 521:
      if (lookahead == 'o') ADVANCE(738);
      END_STATE();
    case 522:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 523:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 524:
      if (lookahead == 'o') ADVANCE(451);
      END_STATE();
    case 525:
      if (lookahead == 'o') ADVANCE(452);
      END_STATE();
    case 526:
      if (lookahead == 'o') ADVANCE(360);
      END_STATE();
    case 527:
      if (lookahead == 'o') ADVANCE(588);
      END_STATE();
    case 528:
      if (lookahead == 'o') ADVANCE(602);
      END_STATE();
    case 529:
      if (lookahead == 'o') ADVANCE(416);
      END_STATE();
    case 530:
      if (lookahead == 'o') ADVANCE(504);
      END_STATE();
    case 531:
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 532:
      if (lookahead == 'o') ADVANCE(418);
      END_STATE();
    case 533:
      if (lookahead == 'o') ADVANCE(419);
      END_STATE();
    case 534:
      if (lookahead == 'o') ADVANCE(486);
      END_STATE();
    case 535:
      if (lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 536:
      if (lookahead == 'o') ADVANCE(420);
      END_STATE();
    case 537:
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 538:
      if (lookahead == 'o') ADVANCE(474);
      END_STATE();
    case 539:
      if (lookahead == 'o') ADVANCE(617);
      if (lookahead == 'r') ADVANCE(276);
      END_STATE();
    case 540:
      if (lookahead == 'o') ADVANCE(732);
      END_STATE();
    case 541:
      if (lookahead == 'o') ADVANCE(205);
      END_STATE();
    case 542:
      if (lookahead == 'o') ADVANCE(733);
      END_STATE();
    case 543:
      if (lookahead == 'o') ADVANCE(532);
      END_STATE();
    case 544:
      if (lookahead == 'o') ADVANCE(680);
      END_STATE();
    case 545:
      if (lookahead == 'o') ADVANCE(558);
      END_STATE();
    case 546:
      if (lookahead == 'o') ADVANCE(594);
      END_STATE();
    case 547:
      if (lookahead == 'o') ADVANCE(361);
      if (lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 548:
      if (lookahead == 'o') ADVANCE(362);
      END_STATE();
    case 549:
      if (lookahead == 'p') ADVANCE(1484);
      END_STATE();
    case 550:
      if (lookahead == 'p') ADVANCE(1474);
      END_STATE();
    case 551:
      if (lookahead == 'p') ADVANCE(73);
      END_STATE();
    case 552:
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 553:
      if (lookahead == 'p') ADVANCE(425);
      END_STATE();
    case 554:
      if (lookahead == 'p') ADVANCE(272);
      END_STATE();
    case 555:
      if (lookahead == 'p') ADVANCE(543);
      END_STATE();
    case 556:
      if (lookahead == 'p') ADVANCE(251);
      END_STATE();
    case 557:
      if (lookahead == 'p') ADVANCE(669);
      END_STATE();
    case 558:
      if (lookahead == 'p') ADVANCE(259);
      END_STATE();
    case 559:
      if (lookahead == 'p') ADVANCE(39);
      END_STATE();
    case 560:
      if (lookahead == 'p') ADVANCE(528);
      END_STATE();
    case 561:
      if (lookahead == 'p') ADVANCE(144);
      END_STATE();
    case 562:
      if (lookahead == 'p') ADVANCE(133);
      END_STATE();
    case 563:
      if (lookahead == 'p') ADVANCE(68);
      END_STATE();
    case 564:
      if (lookahead == 'p') ADVANCE(147);
      END_STATE();
    case 565:
      if (lookahead == 'q') ADVANCE(1387);
      END_STATE();
    case 566:
      if (lookahead == 'q') ADVANCE(88);
      END_STATE();
    case 567:
      if (lookahead == 'q') ADVANCE(1398);
      END_STATE();
    case 568:
      if (lookahead == 'q') ADVANCE(1407);
      END_STATE();
    case 569:
      if (lookahead == 'q') ADVANCE(85);
      END_STATE();
    case 570:
      if (lookahead == 'r') ADVANCE(325);
      END_STATE();
    case 571:
      if (lookahead == 'r') ADVANCE(1369);
      END_STATE();
    case 572:
      if (lookahead == 'r') ADVANCE(1468);
      END_STATE();
    case 573:
      if (lookahead == 'r') ADVANCE(1351);
      END_STATE();
    case 574:
      if (lookahead == 'r') ADVANCE(1313);
      END_STATE();
    case 575:
      if (lookahead == 'r') ADVANCE(1315);
      END_STATE();
    case 576:
      if (lookahead == 'r') ADVANCE(368);
      END_STATE();
    case 577:
      if (lookahead == 'r') ADVANCE(737);
      END_STATE();
    case 578:
      if (lookahead == 'r') ADVANCE(714);
      END_STATE();
    case 579:
      if (lookahead == 'r') ADVANCE(739);
      END_STATE();
    case 580:
      if (lookahead == 'r') ADVANCE(421);
      END_STATE();
    case 581:
      if (lookahead == 'r') ADVANCE(404);
      END_STATE();
    case 582:
      if (lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 583:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 584:
      if (lookahead == 'r') ADVANCE(503);
      END_STATE();
    case 585:
      if (lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 586:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 587:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 588:
      if (lookahead == 'r') ADVANCE(612);
      END_STATE();
    case 589:
      if (lookahead == 'r') ADVANCE(521);
      END_STATE();
    case 590:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 591:
      if (lookahead == 'r') ADVANCE(300);
      END_STATE();
    case 592:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 593:
      if (lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 594:
      if (lookahead == 'r') ADVANCE(254);
      END_STATE();
    case 595:
      if (lookahead == 'r') ADVANCE(328);
      END_STATE();
    case 596:
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 597:
      if (lookahead == 'r') ADVANCE(374);
      END_STATE();
    case 598:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 599:
      if (lookahead == 'r') ADVANCE(411);
      END_STATE();
    case 600:
      if (lookahead == 'r') ADVANCE(299);
      END_STATE();
    case 601:
      if (lookahead == 'r') ADVANCE(306);
      END_STATE();
    case 602:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 603:
      if (lookahead == 'r') ADVANCE(310);
      END_STATE();
    case 604:
      if (lookahead == 'r') ADVANCE(329);
      END_STATE();
    case 605:
      if (lookahead == 'r') ADVANCE(330);
      END_STATE();
    case 606:
      if (lookahead == 'r') ADVANCE(332);
      END_STATE();
    case 607:
      if (lookahead == 'r') ADVANCE(324);
      END_STATE();
    case 608:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 609:
      if (lookahead == 's') ADVANCE(740);
      END_STATE();
    case 610:
      if (lookahead == 's') ADVANCE(1306);
      END_STATE();
    case 611:
      if (lookahead == 's') ADVANCE(1504);
      END_STATE();
    case 612:
      if (lookahead == 's') ADVANCE(1304);
      END_STATE();
    case 613:
      if (lookahead == 's') ADVANCE(1419);
      END_STATE();
    case 614:
      if (lookahead == 's') ADVANCE(1340);
      END_STATE();
    case 615:
      if (lookahead == 's') ADVANCE(1433);
      END_STATE();
    case 616:
      if (lookahead == 's') ADVANCE(675);
      END_STATE();
    case 617:
      if (lookahead == 's') ADVANCE(708);
      END_STATE();
    case 618:
      if (lookahead == 's') ADVANCE(290);
      END_STATE();
    case 619:
      if (lookahead == 's') ADVANCE(697);
      END_STATE();
    case 620:
      if (lookahead == 's') ADVANCE(697);
      if (lookahead == 't') ADVANCE(596);
      END_STATE();
    case 621:
      if (lookahead == 's') ADVANCE(407);
      END_STATE();
    case 622:
      if (lookahead == 's') ADVANCE(295);
      END_STATE();
    case 623:
      if (lookahead == 's') ADVANCE(646);
      END_STATE();
    case 624:
      if (lookahead == 's') ADVANCE(408);
      END_STATE();
    case 625:
      if (lookahead == 's') ADVANCE(649);
      END_STATE();
    case 626:
      if (lookahead == 's') ADVANCE(696);
      END_STATE();
    case 627:
      if (lookahead == 's') ADVANCE(378);
      END_STATE();
    case 628:
      if (lookahead == 's') ADVANCE(631);
      END_STATE();
    case 629:
      if (lookahead == 's') ADVANCE(248);
      END_STATE();
    case 630:
      if (lookahead == 's') ADVANCE(460);
      END_STATE();
    case 631:
      if (lookahead == 's') ADVANCE(527);
      END_STATE();
    case 632:
      if (lookahead == 's') ADVANCE(302);
      END_STATE();
    case 633:
      if (lookahead == 's') ADVANCE(191);
      END_STATE();
    case 634:
      if (lookahead == 's') ADVANCE(665);
      END_STATE();
    case 635:
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 636:
      if (lookahead == 's') ADVANCE(613);
      END_STATE();
    case 637:
      if (lookahead == 's') ADVANCE(683);
      END_STATE();
    case 638:
      if (lookahead == 's') ADVANCE(615);
      END_STATE();
    case 639:
      if (lookahead == 's') ADVANCE(684);
      END_STATE();
    case 640:
      if (lookahead == 's') ADVANCE(253);
      END_STATE();
    case 641:
      if (lookahead == 's') ADVANCE(701);
      END_STATE();
    case 642:
      if (lookahead == 's') ADVANCE(257);
      END_STATE();
    case 643:
      if (lookahead == 's') ADVANCE(319);
      END_STATE();
    case 644:
      if (lookahead == 's') ADVANCE(320);
      END_STATE();
    case 645:
      if (lookahead == 's') ADVANCE(321);
      END_STATE();
    case 646:
      if (lookahead == 's') ADVANCE(531);
      END_STATE();
    case 647:
      if (lookahead == 's') ADVANCE(386);
      END_STATE();
    case 648:
      if (lookahead == 's') ADVANCE(699);
      END_STATE();
    case 649:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 650:
      if (lookahead == 's') ADVANCE(393);
      END_STATE();
    case 651:
      if (lookahead == 's') ADVANCE(690);
      END_STATE();
    case 652:
      if (lookahead == 's') ADVANCE(693);
      END_STATE();
    case 653:
      if (lookahead == 's') ADVANCE(698);
      END_STATE();
    case 654:
      if (lookahead == 's') ADVANCE(702);
      END_STATE();
    case 655:
      if (lookahead == 's') ADVANCE(703);
      END_STATE();
    case 656:
      if (lookahead == 's') ADVANCE(742);
      END_STATE();
    case 657:
      if (lookahead == 's') ADVANCE(564);
      END_STATE();
    case 658:
      if (lookahead == 's') ADVANCE(743);
      END_STATE();
    case 659:
      if (lookahead == 's') ADVANCE(707);
      END_STATE();
    case 660:
      if (lookahead == 't') ADVANCE(1441);
      END_STATE();
    case 661:
      if (lookahead == 't') ADVANCE(1496);
      END_STATE();
    case 662:
      if (lookahead == 't') ADVANCE(1508);
      END_STATE();
    case 663:
      if (lookahead == 't') ADVANCE(1357);
      END_STATE();
    case 664:
      if (lookahead == 't') ADVANCE(1415);
      END_STATE();
    case 665:
      if (lookahead == 't') ADVANCE(1453);
      END_STATE();
    case 666:
      if (lookahead == 't') ADVANCE(1486);
      END_STATE();
    case 667:
      if (lookahead == 't') ADVANCE(1455);
      END_STATE();
    case 668:
      if (lookahead == 't') ADVANCE(1446);
      END_STATE();
    case 669:
      if (lookahead == 't') ADVANCE(1498);
      END_STATE();
    case 670:
      if (lookahead == 't') ADVANCE(1359);
      END_STATE();
    case 671:
      if (lookahead == 't') ADVANCE(1363);
      END_STATE();
    case 672:
      if (lookahead == 't') ADVANCE(1365);
      END_STATE();
    case 673:
      if (lookahead == 't') ADVANCE(1502);
      END_STATE();
    case 674:
      if (lookahead == 't') ADVANCE(285);
      END_STATE();
    case 675:
      if (lookahead == 't') ADVANCE(524);
      END_STATE();
    case 676:
      if (lookahead == 't') ADVANCE(546);
      END_STATE();
    case 677:
      if (lookahead == 't') ADVANCE(392);
      END_STATE();
    case 678:
      if (lookahead == 't') ADVANCE(715);
      END_STATE();
    case 679:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 680:
      if (lookahead == 't') ADVANCE(530);
      END_STATE();
    case 681:
      if (lookahead == 't') ADVANCE(577);
      END_STATE();
    case 682:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 683:
      if (lookahead == 't') ADVANCE(587);
      END_STATE();
    case 684:
      if (lookahead == 't') ADVANCE(589);
      END_STATE();
    case 685:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 686:
      if (lookahead == 't') ADVANCE(579);
      END_STATE();
    case 687:
      if (lookahead == 't') ADVANCE(284);
      END_STATE();
    case 688:
      if (lookahead == 't') ADVANCE(323);
      END_STATE();
    case 689:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 690:
      if (lookahead == 't') ADVANCE(296);
      END_STATE();
    case 691:
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 692:
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 693:
      if (lookahead == 't') ADVANCE(313);
      END_STATE();
    case 694:
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 695:
      if (lookahead == 't') ADVANCE(399);
      END_STATE();
    case 696:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 697:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 698:
      if (lookahead == 't') ADVANCE(525);
      END_STATE();
    case 699:
      if (lookahead == 't') ADVANCE(590);
      END_STATE();
    case 700:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 701:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 702:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 703:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 704:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 705:
      if (lookahead == 't') ADVANCE(395);
      END_STATE();
    case 706:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 707:
      if (lookahead == 't') ADVANCE(608);
      END_STATE();
    case 708:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 709:
      if (lookahead == 'u') ADVANCE(616);
      END_STATE();
    case 710:
      if (lookahead == 'u') ADVANCE(456);
      END_STATE();
    case 711:
      if (lookahead == 'u') ADVANCE(159);
      END_STATE();
    case 712:
      if (lookahead == 'u') ADVANCE(365);
      END_STATE();
    case 713:
      if (lookahead == 'u') ADVANCE(348);
      END_STATE();
    case 714:
      if (lookahead == 'u') ADVANCE(247);
      END_STATE();
    case 715:
      if (lookahead == 'u') ADVANCE(550);
      END_STATE();
    case 716:
      if (lookahead == 'u') ADVANCE(664);
      END_STATE();
    case 717:
      if (lookahead == 'u') ADVANCE(261);
      END_STATE();
    case 718:
      if (lookahead == 'u') ADVANCE(487);
      END_STATE();
    case 719:
      if (lookahead == 'u') ADVANCE(464);
      END_STATE();
    case 720:
      if (lookahead == 'u') ADVANCE(626);
      END_STATE();
    case 721:
      if (lookahead == 'u') ADVANCE(369);
      END_STATE();
    case 722:
      if (lookahead == 'u') ADVANCE(372);
      END_STATE();
    case 723:
      if (lookahead == 'u') ADVANCE(642);
      END_STATE();
    case 724:
      if (lookahead == 'v') ADVANCE(455);
      END_STATE();
    case 725:
      if (lookahead == 'v') ADVANCE(123);
      END_STATE();
    case 726:
      if (lookahead == 'v') ADVANCE(246);
      END_STATE();
    case 727:
      if (lookahead == 'v') ADVANCE(262);
      END_STATE();
    case 728:
      if (lookahead == 'v') ADVANCE(134);
      END_STATE();
    case 729:
      if (lookahead == 'w') ADVANCE(1494);
      if (lookahead == 'z') ADVANCE(1482);
      END_STATE();
    case 730:
      if (lookahead == 'w') ADVANCE(84);
      END_STATE();
    case 731:
      if (lookahead == 'w') ADVANCE(485);
      END_STATE();
    case 732:
      if (lookahead == 'w') ADVANCE(491);
      END_STATE();
    case 733:
      if (lookahead == 'w') ADVANCE(493);
      END_STATE();
    case 734:
      if (lookahead == 'x') ADVANCE(746);
      END_STATE();
    case 735:
      if (lookahead == 'x') ADVANCE(1417);
      END_STATE();
    case 736:
      if (lookahead == 'x') ADVANCE(197);
      END_STATE();
    case 737:
      if (lookahead == 'y') ADVANCE(1437);
      END_STATE();
    case 738:
      if (lookahead == 'y') ADVANCE(1476);
      END_STATE();
    case 739:
      if (lookahead == 'y') ADVANCE(1503);
      END_STATE();
    case 740:
      if (lookahead == 'y') ADVANCE(453);
      END_STATE();
    case 741:
      if (lookahead == 'y') ADVANCE(41);
      END_STATE();
    case 742:
      if (lookahead == 'y') ADVANCE(465);
      END_STATE();
    case 743:
      if (lookahead == 'y') ADVANCE(466);
      END_STATE();
    case 744:
      if (lookahead == 'z') ADVANCE(263);
      END_STATE();
    case 745:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1225);
      END_STATE();
    case 746:
      if (lookahead == 'H' ||
          ('K' <= lookahead && lookahead <= 'M') ||
          lookahead == 'R') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1226);
      END_STATE();
    case 747:
      if (lookahead == 'H' ||
          ('K' <= lookahead && lookahead <= 'M') ||
          lookahead == 'R') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1223);
      END_STATE();
    case 748:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1222);
      END_STATE();
    case 749:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1220);
      END_STATE();
    case 750:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 751:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1225);
      END_STATE();
    case 752:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1226);
      END_STATE();
    case 753:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1223);
      END_STATE();
    case 754:
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 755:
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 756:
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1215);
      END_STATE();
    case 757:
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1214);
      END_STATE();
    case 758:
      if (eof) ADVANCE(762);
      if (lookahead == '\n') ADVANCE(769);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(1324);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '$') ADVANCE(754);
      if (lookahead == '%') ADVANCE(18);
      if (lookahead == '&') ADVANCE(21);
      if (lookahead == '(') ADVANCE(764);
      if (lookahead == ')') ADVANCE(766);
      if (lookahead == '*') ADVANCE(1333);
      if (lookahead == '+') ADVANCE(1435);
      if (lookahead == ',') ADVANCE(765);
      if (lookahead == '-') ADVANCE(1436);
      if (lookahead == '.') ADVANCE(1336);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '0') ADVANCE(734);
      if (lookahead == ':') ADVANCE(768);
      if (lookahead == ';') ADVANCE(770);
      if (lookahead == '<') ADVANCE(1320);
      if (lookahead == '=') ADVANCE(1308);
      if (lookahead == '>') ADVANCE(1322);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == 'C') ADVANCE(709);
      if (lookahead == '[') ADVANCE(1334);
      if (lookahead == ']') ADVANCE(1335);
      if (lookahead == '_') ADVANCE(1337);
      if (lookahead == '`') ADVANCE(1434);
      if (lookahead == 'a') ADVANCE(175);
      if (lookahead == 'b') ADVANCE(102);
      if (lookahead == 'c') ADVANCE(95);
      if (lookahead == 'd') ADVANCE(235);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'f') ADVANCE(104);
      if (lookahead == 'g') ADVANCE(512);
      if (lookahead == 'h') ADVANCE(111);
      if (lookahead == 'i') ADVANCE(448);
      if (lookahead == 'j') ADVANCE(710);
      if (lookahead == 'k') ADVANCE(389);
      if (lookahead == 'l') ADVANCE(110);
      if (lookahead == 'm') ADVANCE(183);
      if (lookahead == 'n') ADVANCE(236);
      if (lookahead == 'o') ADVANCE(273);
      if (lookahead == 'p') ADVANCE(1343);
      if (lookahead == 'r') ADVANCE(237);
      if (lookahead == 's') ADVANCE(1342);
      if (lookahead == 't') ADVANCE(106);
      if (lookahead == 'u') ADVANCE(65);
      if (lookahead == 'v') ADVANCE(517);
      if (lookahead == 'w') ADVANCE(391);
      if (lookahead == 'x') ADVANCE(1346);
      if (lookahead == '{') ADVANCE(1302);
      if (lookahead == '|') ADVANCE(1331);
      if (lookahead == '}') ADVANCE(1303);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(758)
      END_STATE();
    case 759:
      if (eof) ADVANCE(762);
      if (lookahead == '\n') ADVANCE(769);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '$') ADVANCE(754);
      if (lookahead == '%') ADVANCE(755);
      if (lookahead == '(') ADVANCE(764);
      if (lookahead == ')') ADVANCE(766);
      if (lookahead == ',') ADVANCE(765);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(767);
      if (lookahead == ';') ADVANCE(770);
      if (lookahead == '=') ADVANCE(1308);
      if (lookahead == '{') ADVANCE(1302);
      if (lookahead == '|') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(759)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 760:
      if (eof) ADVANCE(762);
      if (lookahead == '\n') ADVANCE(769);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(754);
      if (lookahead == '%') ADVANCE(755);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ';') ADVANCE(770);
      if (lookahead == '_') ADVANCE(1338);
      if (lookahead == 'a') ADVANCE(968);
      if (lookahead == 'c') ADVANCE(1071);
      if (lookahead == 'd') ADVANCE(915);
      if (lookahead == 'e') ADVANCE(817);
      if (lookahead == 'f') ADVANCE(1111);
      if (lookahead == 'i') ADVANCE(1032);
      if (lookahead == 'k') ADVANCE(991);
      if (lookahead == 'l') ADVANCE(1002);
      if (lookahead == 'n') ADVANCE(999);
      if (lookahead == 'r') ADVANCE(914);
      if (lookahead == 's') ADVANCE(1189);
      if (lookahead == 'u') ADVANCE(1058);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(760)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 761:
      if (eof) ADVANCE(762);
      if (lookahead == '\n') ADVANCE(769);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(754);
      if (lookahead == '%') ADVANCE(755);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ';') ADVANCE(770);
      if (lookahead == '_') ADVANCE(1338);
      if (lookahead == 'a') ADVANCE(968);
      if (lookahead == 'c') ADVANCE(1071);
      if (lookahead == 'd') ADVANCE(915);
      if (lookahead == 'e') ADVANCE(817);
      if (lookahead == 'f') ADVANCE(1111);
      if (lookahead == 'i') ADVANCE(1032);
      if (lookahead == 'k') ADVANCE(991);
      if (lookahead == 'n') ADVANCE(999);
      if (lookahead == 'r') ADVANCE(914);
      if (lookahead == 'u') ADVANCE(1058);
      if (lookahead == '}') ADVANCE(1303);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(761)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_body_token1);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(1319);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(770);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_multiline_comment_token1);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_multiline_comment_token1);
      if (lookahead == '*') ADVANCE(771);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_multiline_comment_token1);
      if (lookahead == '/') ADVANCE(773);
      if (lookahead == ';') ADVANCE(770);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(774);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(772);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_multiline_comment_token2);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(1006);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(969);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(897);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(993);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(835);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(1050);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(877);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(1041);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(1122);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(1192);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(1005);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(1148);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(1007);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(1512);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(793);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(794);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(797);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(799);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(810);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(795);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(1514);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(790);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(1516);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(839);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(921);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1200);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(963);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1130);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1079);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1104);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(836);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(893);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1127);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(965);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(879);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1146);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(883);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1147);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(1081);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1100);
      if (lookahead == 's') ADVANCE(878);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1100);
      if (lookahead == 'x') ADVANCE(844);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1037);
      if (lookahead == 'h') ADVANCE(1191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1270);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1362);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1368);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1019);
      if (lookahead == 'e') ADVANCE(824);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1019);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1099);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1085);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(885);
      if (lookahead == 'b') ADVANCE(1186);
      if (lookahead == 'f') ADVANCE(1459);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(885);
      if (lookahead == 'b') ADVANCE(1193);
      if (lookahead == 'f') ADVANCE(1459);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(885);
      if (lookahead == 'b') ADVANCE(1193);
      if (lookahead == 'f') ADVANCE(1461);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1088);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1151);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1038);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1121);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1169);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(986);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1030);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1125);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1015);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1021);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1124);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(875);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(809);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1101);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1046);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(873);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1165);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1198);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1040);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1132);
      if (lookahead == 'n') ADVANCE(830);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1132);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(874);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1172);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1173);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1175);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(864);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1113);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(815);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1072);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(930);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(938);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(944);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(859);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1025);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1073);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1028);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(803);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1011);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1422);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1491);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(998);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(966);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1082);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(784);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1158);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1159);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(955);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(933);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1024);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(828);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(970);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(881);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(952);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(845);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(971);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1008);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1463);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1465);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1384);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1386);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1356);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(925);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1062);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(898);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(932);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(936);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(909);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(940);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(953);
      if (lookahead == 's') ADVANCE(947);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(825);
      if (lookahead == 'o') ADVANCE(1185);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(988);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(981);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(780);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1510);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1372);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1353);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1471);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1473);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1350);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1204);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1378);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1376);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1374);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1380);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(848);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(827);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1206);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1098);
      if (lookahead == 'p') ADVANCE(1106);
      if (lookahead == 'r') ADVANCE(992);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1098);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1034);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1067);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(980);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(802);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(886);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(989);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(957);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1129);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1093);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(806);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(887);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1105);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1152);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(967);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1090);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1163);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(888);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(958);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(889);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1094);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(779);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(960);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1095);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1096);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1155);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1097);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1156);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1157);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1167);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(849);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1177);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1039);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1001);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1135);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1138);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(826);
      if (lookahead == 'o') ADVANCE(1185);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(813);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(1506);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(1412);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(1457);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(1481);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(1414);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(962);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(1128);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(1092);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(974);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(1086);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(819);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(807);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(1045);
      if (lookahead == 'r') ADVANCE(871);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(1026);
      if (lookahead == 'i') ADVANCE(1056);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(856);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(820);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(1091);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(1139);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(1027);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(1140);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(1141);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(973);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(975);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(976);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(800);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1003);
      if (lookahead == 'l') ADVANCE(805);
      if (lookahead == 'm') ADVANCE(919);
      if (lookahead == 'n') ADVANCE(830);
      if (lookahead == 's') ADVANCE(1164);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(777);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1060);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(934);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1117);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(949);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(832);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1004);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1197);
      if (lookahead == 'l') ADVANCE(1196);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1022);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1048);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1057);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(869);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(867);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(983);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1069);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1154);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1051);
      if (lookahead == 'n') ADVANCE(843);
      if (lookahead == 'o') ADVANCE(972);
      if (lookahead == 's') ADVANCE(1201);
      if (lookahead == 'u') ADVANCE(1202);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1049);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1052);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1199);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1143);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1145);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1056);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1059);
      if (lookahead == 'l') ADVANCE(1077);
      if (lookahead == 'u') ADVANCE(1137);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1061);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'j') ADVANCE(1195);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(1410);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(1348);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(833);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(942);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1064);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1208);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1467);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1310);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1312);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1063);
      if (lookahead == 'p') ADVANCE(791);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(956);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(994);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1190);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1023);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(923);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1065);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(903);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(834);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(950);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(907);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1070);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1029);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1087);
      if (lookahead == 'n') ADVANCE(1150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1270);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1087);
      if (lookahead == 'n') ADVANCE(1176);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(801);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(858);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(808);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(857);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(922);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(854);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(831);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(939);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(860);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(863);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1318);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1489);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1479);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(890);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1142);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(891);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1194);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(959);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1118);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1178);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(937);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(837);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(895);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1131);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(896);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1134);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(814);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1149);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1203);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(829);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(861);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1207);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1188);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1033);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1044);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(872);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1053);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1016);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1017);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(868);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1108);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1123);
      if (lookahead == 'p') ADVANCE(865);
      if (lookahead == 'r') ADVANCE(902);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1270);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(882);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1109);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(977);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(978);
      if (lookahead == 'r') ADVANCE(924);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(979);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1485);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1475);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1270);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(781);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(798);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1020);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(904);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(840);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1160);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(916);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(792);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1370);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1469);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1352);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1314);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1316);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1055);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(985);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1014);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1012);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(785);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(782);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(841);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(812);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(929);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1066);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1119);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(905);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(935);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(847);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(926);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(987);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(850);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(788);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1420);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1341);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1307);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1305);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1161);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1009);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1209);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1183);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1010);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1089);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1162);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(996);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(931);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1116);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(846);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1166);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1144);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1075);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1168);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1133);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1179);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(906);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1171);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(943);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(945);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(946);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(995);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1170);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1074);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1174);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1180);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1181);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1210);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1182);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(917);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1507);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1358);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1416);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1454);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1360);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1364);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1366);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1497);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1487);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1499);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1068);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(811);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(778);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1078);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(997);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1102);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1187);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1103);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(928);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(927);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1107);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(911);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(912);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(941);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(913);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(918);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(787);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1114);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(851);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(852);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(853);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1115);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(789);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1120);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(862);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(982);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1083);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1153);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(880);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(908);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(964);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1137);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(984);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1042);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1126);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(1035);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(920);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(910);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(951);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(838);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(1495);
      if (lookahead == 'z') ADVANCE(1483);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1213);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(1493);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(804);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1418);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(844);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(876);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1477);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(783);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1036);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1043);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1270);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1212);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(sym_bb_ref);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1214);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(sym_stack_object);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1215);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(sym_constant_pool_index);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1216);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(sym_jump_table_index);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1217);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1224);
      if (lookahead == 'x') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1220);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(1224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1220);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'x') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1222);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1222);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1223);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1224);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1225);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1226);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == '"') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1263);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == '"') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1263);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == '-') ADVANCE(1237);
      if (lookahead == '.') ADVANCE(1227);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == '-') ADVANCE(1256);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == '-') ADVANCE(1260);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == '.') ADVANCE(1216);
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == '.') ADVANCE(1217);
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == '.') ADVANCE(1228);
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'a') ADVANCE(1240);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'a') ADVANCE(1238);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'b') ADVANCE(1248);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'b') ADVANCE(1249);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'b') ADVANCE(1268);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'c') ADVANCE(1246);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'c') ADVANCE(1247);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'd') ADVANCE(1230);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'e') ADVANCE(1242);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'e') ADVANCE(1233);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'i') ADVANCE(1262);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'k') ADVANCE(1267);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'k') ADVANCE(1234);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'l') ADVANCE(1253);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'l') ADVANCE(1244);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'm') ADVANCE(1254);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'n') ADVANCE(1257);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'o') ADVANCE(1251);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'o') ADVANCE(1241);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'p') ADVANCE(1231);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'r') ADVANCE(1229);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 's') ADVANCE(1258);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 's') ADVANCE(1259);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 't') ADVANCE(1235);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 't') ADVANCE(1232);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 't') ADVANCE(1236);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'u') ADVANCE(1250);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == 'x') ADVANCE(1243);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(sym_var);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1263);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1215);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1214);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(756);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(sym_var);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(757);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(sym_physical_register);
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(sym_immediate_type);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1270);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(sym_ir_block);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(sym_ir_block);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1272);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(sym_ir_block);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(sym_external_symbol);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(sym_external_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1275);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(sym_external_symbol);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1276);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(sym_global_var);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(sym_global_var);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1278);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(sym_global_var);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(sym_ir_local_var);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(sym_ir_local_var);
      if (lookahead == '"') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1295);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1297);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(sym_ir_local_var);
      if (lookahead == '-') ADVANCE(1291);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1297);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(sym_ir_local_var);
      if (lookahead == '.') ADVANCE(1281);
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1297);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(sym_ir_local_var);
      if (lookahead == 'a') ADVANCE(1285);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1297);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(sym_ir_local_var);
      if (lookahead == 'c') ADVANCE(1289);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1297);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(sym_ir_local_var);
      if (lookahead == 'd') ADVANCE(1282);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1297);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(sym_ir_local_var);
      if (lookahead == 'e') ADVANCE(1286);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1297);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(sym_ir_local_var);
      if (lookahead == 'i') ADVANCE(1293);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1297);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(sym_ir_local_var);
      if (lookahead == 'k') ADVANCE(1298);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1297);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(sym_ir_local_var);
      if (lookahead == 'r') ADVANCE(1283);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1297);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(sym_ir_local_var);
      if (lookahead == 's') ADVANCE(1292);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1297);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(sym_ir_local_var);
      if (lookahead == 't') ADVANCE(1284);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1297);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(sym_ir_local_var);
      if (lookahead == 'x') ADVANCE(1287);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1297);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(sym_ir_local_var);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1294);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(sym_ir_local_var);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1295);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1297);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(sym_ir_local_var);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1215);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(sym_ir_local_var);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1297);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(sym_ir_local_var);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1296);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(756);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(sym_metadata_ref);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(sym_metadata_ref);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1300);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(sym_metadata_ref);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1301);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(anon_sym_successors);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(anon_sym_successors);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(anon_sym_liveins);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(anon_sym_liveins);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(anon_sym_pre_DASHinstr_DASHsymbol);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(anon_sym_pre_DASHinstr_DASHsymbol);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(anon_sym_post_DASHinstr_DASHsymbol);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(anon_sym_post_DASHinstr_DASHsymbol);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(anon_sym_heap_DASHalloc_DASHmarker);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(anon_sym_heap_DASHalloc_DASHmarker);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(anon_sym_debug_DASHinstr_DASHnumber);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(anon_sym_debug_DASHinstr_DASHnumber);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(anon_sym_debug_DASHlocation);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(anon_sym_debug_DASHlocation);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(anon_sym_mcsymbol);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '"') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1300);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1301);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(aux_sym_md_value_token1);
      if (lookahead == 'l') ADVANCE(1326);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(aux_sym_md_value_token1);
      if (lookahead == 'l') ADVANCE(1327);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(aux_sym_md_value_token1);
      if (lookahead == 'u') ADVANCE(1328);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(aux_sym_md_value_token1);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '/') ADVANCE(776);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(anon_sym_tied_DASHdef);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(anon_sym_target_DASHflags);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(anon_sym_target_DASHflags);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(sym_primitive_type);
      if (lookahead == '0') ADVANCE(1270);
      if (lookahead == 'a') ADVANCE(457);
      if (lookahead == 'e') ADVANCE(569);
      if (lookahead == 'g') ADVANCE(241);
      if (lookahead == 'h') ADVANCE(713);
      if (lookahead == 'l') ADVANCE(242);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == 'u') ADVANCE(187);
      if (lookahead == 'y') ADVANCE(483);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1270);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(sym_primitive_type);
      if (lookahead == 'o') ADVANCE(617);
      if (lookahead == 'p') ADVANCE(176);
      if (lookahead == 'r') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1270);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(sym_primitive_type);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1344);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == '8') ADVANCE(71);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(anon_sym_CustomRegMask);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(anon_sym_CustomRegMask);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(anon_sym_same_value);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(anon_sym_same_value);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(anon_sym_def_cfa_register);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(anon_sym_def_cfa_register);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(anon_sym_restore);
      if (lookahead == '_') ADVANCE(1136);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(anon_sym_restore);
      if (lookahead == '_') ADVANCE(641);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(anon_sym_undefined);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(anon_sym_undefined);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(anon_sym_offset);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(anon_sym_offset);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(anon_sym_rel_offset);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(anon_sym_rel_offset);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(anon_sym_def_cfa);
      if (lookahead == '_') ADVANCE(547);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(anon_sym_def_cfa);
      if (lookahead == '_') ADVANCE(1080);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(anon_sym_def_cfa_offset);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(anon_sym_def_cfa_offset);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(anon_sym_adjust_cfa_offset);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(anon_sym_adjust_cfa_offset);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(anon_sym_llvm_def_aspace_cfa);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(anon_sym_llvm_def_aspace_cfa);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(anon_sym_register);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(anon_sym_register);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(anon_sym_escape);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(anon_sym_escape);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(anon_sym_remember_state);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(anon_sym_remember_state);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(anon_sym_restore_state);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(anon_sym_restore_state);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(anon_sym_window_save);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(anon_sym_window_save);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(anon_sym_negate_ra_sign_state);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(anon_sym_negate_ra_sign_state);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(anon_sym_intpred);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(anon_sym_intpred);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(anon_sym_floatpred);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(anon_sym_floatpred);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(anon_sym_eq);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(anon_sym_ne);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(anon_sym_ne);
      if (lookahead == 'g') ADVANCE(122);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(anon_sym_sgt);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(anon_sym_sge);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(anon_sym_slt);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(anon_sym_sle);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(anon_sym_ugt);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(anon_sym_uge);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(anon_sym_ult);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(anon_sym_ule);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(anon_sym_oeq);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(anon_sym_ogt);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(anon_sym_oge);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(anon_sym_olt);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(anon_sym_ole);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(anon_sym_one);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(anon_sym_ord);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(anon_sym_uno);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(anon_sym_uno);
      if (lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(anon_sym_ueq);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(anon_sym_une);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(anon_sym_shufflemask);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(anon_sym_shufflemask);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(anon_sym_undef);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(anon_sym_undef);
      if (lookahead == 'i') ADVANCE(1054);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(anon_sym_undef);
      if (lookahead == 'i') ADVANCE(506);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(anon_sym_undef);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(anon_sym_liveout);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(anon_sym_liveout);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(anon_sym_target_DASHindex);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(anon_sym_target_DASHindex);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(anon_sym_blockaddress);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(anon_sym_blockaddress);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(anon_sym_intrinsic);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(anon_sym_intrinsic);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(anon_sym_store);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(anon_sym_unknown_DASHsize);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead == 'e') ADVANCE(1403);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(anon_sym_into);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(anon_sym_basealign);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(anon_sym_addrspace);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(anon_sym_unknown_DASHaddress);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(anon_sym_call_DASHentry);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(anon_sym_custom);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(anon_sym_constant_DASHpool);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(anon_sym_stack);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(anon_sym_got);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(anon_sym_jump_DASHtable);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(anon_sym_volatile);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(anon_sym_non_DASHtemporal);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(anon_sym_dereferenceable);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(anon_sym_invariant);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(anon_sym_syncscope);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(anon_sym_unordered);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(anon_sym_monotonic);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(anon_sym_acquire);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(anon_sym_release);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(anon_sym_acq_rel);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(anon_sym_seq_cst);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(anon_sym_implicit);
      if (lookahead == '-') ADVANCE(894);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(anon_sym_implicit);
      if (lookahead == '-') ADVANCE(227);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(anon_sym_implicit_DASHdef);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(anon_sym_implicit_DASHdef);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == '_') ADVANCE(870);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == '_') ADVANCE(189);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(anon_sym_dead);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(anon_sym_dead);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(anon_sym_killed);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(anon_sym_killed);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(anon_sym_internal);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(anon_sym_internal);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(anon_sym_early_DASHclobber);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(anon_sym_early_DASHclobber);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(anon_sym_debug_DASHuse);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(anon_sym_debug_DASHuse);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(anon_sym_renamable);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(anon_sym_renamable);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(anon_sym_frame_DASHsetup);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(anon_sym_frame_DASHsetup);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(anon_sym_frame_DASHdestroy);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(anon_sym_frame_DASHdestroy);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(anon_sym_nnan);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(anon_sym_nnan);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(anon_sym_ninf);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(anon_sym_ninf);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(anon_sym_nsz);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(anon_sym_nsz);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(anon_sym_arcp);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(anon_sym_arcp);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(anon_sym_contract);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(anon_sym_contract);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(anon_sym_afn);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(anon_sym_afn);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(anon_sym_reassoc);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(anon_sym_reassoc);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(anon_sym_nuw);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(anon_sym_nuw);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(anon_sym_nsw);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(anon_sym_nsw);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(anon_sym_exact);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(anon_sym_exact);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(anon_sym_nofpexcept);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(anon_sym_nofpexcept);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(anon_sym_address_DASHtaken);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(anon_sym_landing_DASHpad);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(anon_sym_inlineasm_DASHbr_DASHindirect_DASHtarget);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(anon_sym_ehfunclet_DASHentry);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(anon_sym_bbsections);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(anon_sym_half);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(anon_sym_half);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == 'p') ADVANCE(1110);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == 'p') ADVANCE(601);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(anon_sym_double);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(anon_sym_x86_fp80);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(anon_sym_x86_fp80);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(anon_sym_fp128);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(anon_sym_fp128);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(anon_sym_ppc_fp128);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(anon_sym_ppc_fp128);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 759},
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
  [20] = {.lex_state = 760},
  [21] = {.lex_state = 760},
  [22] = {.lex_state = 760},
  [23] = {.lex_state = 760},
  [24] = {.lex_state = 760},
  [25] = {.lex_state = 760},
  [26] = {.lex_state = 760},
  [27] = {.lex_state = 760},
  [28] = {.lex_state = 761},
  [29] = {.lex_state = 761},
  [30] = {.lex_state = 761},
  [31] = {.lex_state = 761},
  [32] = {.lex_state = 761},
  [33] = {.lex_state = 761},
  [34] = {.lex_state = 761},
  [35] = {.lex_state = 761},
  [36] = {.lex_state = 761},
  [37] = {.lex_state = 761},
  [38] = {.lex_state = 760},
  [39] = {.lex_state = 760},
  [40] = {.lex_state = 760},
  [41] = {.lex_state = 760},
  [42] = {.lex_state = 761},
  [43] = {.lex_state = 761},
  [44] = {.lex_state = 761},
  [45] = {.lex_state = 761},
  [46] = {.lex_state = 761},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 25},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 25},
  [58] = {.lex_state = 25},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 25},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 63},
  [68] = {.lex_state = 63},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 63},
  [74] = {.lex_state = 63},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 63},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 25},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 24},
  [86] = {.lex_state = 63},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 24},
  [89] = {.lex_state = 24},
  [90] = {.lex_state = 24},
  [91] = {.lex_state = 25},
  [92] = {.lex_state = 25},
  [93] = {.lex_state = 25},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 63},
  [96] = {.lex_state = 63},
  [97] = {.lex_state = 25},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 25},
  [100] = {.lex_state = 25},
  [101] = {.lex_state = 25},
  [102] = {.lex_state = 25},
  [103] = {.lex_state = 25},
  [104] = {.lex_state = 25},
  [105] = {.lex_state = 24},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 24},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 24},
  [113] = {.lex_state = 24},
  [114] = {.lex_state = 4},
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
  [127] = {.lex_state = 24},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 3},
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
  [171] = {.lex_state = 3},
  [172] = {.lex_state = 3},
  [173] = {.lex_state = 3},
  [174] = {.lex_state = 3},
  [175] = {.lex_state = 3},
  [176] = {.lex_state = 3},
  [177] = {.lex_state = 3},
  [178] = {.lex_state = 3},
  [179] = {.lex_state = 24},
  [180] = {.lex_state = 3},
  [181] = {.lex_state = 4},
  [182] = {.lex_state = 24},
  [183] = {.lex_state = 24},
  [184] = {.lex_state = 24},
  [185] = {.lex_state = 24},
  [186] = {.lex_state = 24},
  [187] = {.lex_state = 3},
  [188] = {.lex_state = 3},
  [189] = {.lex_state = 24},
  [190] = {.lex_state = 3},
  [191] = {.lex_state = 3},
  [192] = {.lex_state = 24},
  [193] = {.lex_state = 3},
  [194] = {.lex_state = 3},
  [195] = {.lex_state = 3},
  [196] = {.lex_state = 3},
  [197] = {.lex_state = 3},
  [198] = {.lex_state = 24},
  [199] = {.lex_state = 3},
  [200] = {.lex_state = 3},
  [201] = {.lex_state = 3},
  [202] = {.lex_state = 3},
  [203] = {.lex_state = 4},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 3},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 3},
  [208] = {.lex_state = 3},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 3},
  [212] = {.lex_state = 3},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 3},
  [215] = {.lex_state = 3},
  [216] = {.lex_state = 3},
  [217] = {.lex_state = 3},
  [218] = {.lex_state = 3},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 3},
  [221] = {.lex_state = 3},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 3},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 3},
  [227] = {.lex_state = 3},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 3},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 3},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 3},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 3},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 3},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 3},
  [248] = {.lex_state = 3},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 24},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 24},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 24},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 24},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 759},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 24},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 24},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 24},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 759},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 759},
  [286] = {.lex_state = 759},
  [287] = {.lex_state = 24},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 759},
  [291] = {.lex_state = 759},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 759},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 27},
  [296] = {.lex_state = 27},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 759},
  [302] = {.lex_state = 759},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 759},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 759},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 759},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 759},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 759},
  [325] = {.lex_state = 759},
  [326] = {.lex_state = 759},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 759},
  [330] = {.lex_state = 61},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 759},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 61},
  [340] = {.lex_state = 759},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 759},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 759},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 759},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 759},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 30},
  [353] = {.lex_state = 759},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 759},
  [361] = {.lex_state = 61},
  [362] = {.lex_state = 27},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 759},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 759},
  [367] = {.lex_state = 759},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 759},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 759},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 759},
  [377] = {.lex_state = 759},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 759},
  [380] = {.lex_state = 759},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 759},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 759},
  [386] = {.lex_state = 759},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 759},
  [393] = {.lex_state = 759},
  [394] = {.lex_state = 61},
  [395] = {.lex_state = 759},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 759},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 759},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 61},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 27},
  [412] = {.lex_state = 759},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 61},
  [415] = {.lex_state = 24},
  [416] = {.lex_state = 24},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 62},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 61},
  [430] = {.lex_state = 759},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 62},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 759},
  [439] = {.lex_state = 759},
  [440] = {.lex_state = 61},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 759},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 759},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 759},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 759},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 61},
  [470] = {.lex_state = 24},
  [471] = {.lex_state = 759},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 61},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 30},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 759},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 24},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 24},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 24},
  [492] = {.lex_state = 2},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 2},
  [496] = {.lex_state = 759},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 759},
  [508] = {.lex_state = 24},
  [509] = {.lex_state = 759},
  [510] = {.lex_state = 759},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 759},
  [514] = {.lex_state = 759},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 24},
  [517] = {.lex_state = 3},
  [518] = {.lex_state = 759},
  [519] = {.lex_state = 24},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 24},
  [522] = {.lex_state = 759},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 2},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 24},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 24},
  [530] = {.lex_state = 24},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 759},
  [533] = {.lex_state = 759},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 759},
  [536] = {.lex_state = 759},
  [537] = {.lex_state = 759},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 759},
  [540] = {.lex_state = 759},
  [541] = {.lex_state = 759},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 24},
  [545] = {.lex_state = 24},
  [546] = {.lex_state = 6},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 24},
  [555] = {.lex_state = 759},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 759},
  [559] = {.lex_state = 759},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 24},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 24},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 759},
  [568] = {.lex_state = 24},
  [569] = {.lex_state = 24},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 24},
  [573] = {.lex_state = 24},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 61},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 24},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 759},
  [580] = {.lex_state = 759},
  [581] = {.lex_state = 759},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 759},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 24},
  [588] = {.lex_state = 24},
  [589] = {.lex_state = 24},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 24},
  [598] = {.lex_state = 0},
  [599] = {(TSStateId)(-1)},
  [600] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_multiline_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
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
    [sym_body] = STATE(596),
    [sym_basic_block] = STATE(405),
    [sym_multiline_comment] = STATE(1),
    [sym_label] = STATE(513),
    [aux_sym_body_repeat1] = STATE(286),
    [ts_builtin_sym_end] = ACTIONS(7),
    [aux_sym_body_token1] = ACTIONS(9),
    [sym__newline] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [sym_identifier] = ACTIONS(13),
  },
  [2] = {
    [sym_multiline_comment] = STATE(2),
    [sym_mc_symbol] = STATE(138),
    [sym_metadata] = STATE(138),
    [sym_register_operand] = STATE(138),
    [sym_argument] = STATE(128),
    [sym_machine_operand] = STATE(190),
    [sym_custom_regmask] = STATE(138),
    [sym_cfi_operand] = STATE(138),
    [sym_immediate] = STATE(138),
    [sym_predicate] = STATE(138),
    [sym_shuffle_mask] = STATE(138),
    [sym_liveout] = STATE(138),
    [sym_target_index] = STATE(138),
    [sym_block_address] = STATE(138),
    [sym_intrinsic] = STATE(138),
    [sym_register_flag] = STATE(113),
    [sym_float_keyword] = STATE(352),
    [aux_sym_instruction_repeat4] = STATE(163),
    [aux_sym_instruction_repeat5] = STATE(244),
    [aux_sym_register_operand_repeat1] = STATE(90),
    [anon_sym_COMMA] = ACTIONS(15),
    [sym__newline] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [sym_identifier] = ACTIONS(19),
    [sym_mnemonic] = ACTIONS(19),
    [sym_bb_ref] = ACTIONS(21),
    [sym_stack_object] = ACTIONS(21),
    [sym_constant_pool_index] = ACTIONS(21),
    [sym_jump_table_index] = ACTIONS(21),
    [sym_number] = ACTIONS(19),
    [sym_var] = ACTIONS(23),
    [sym_physical_register] = ACTIONS(25),
    [sym_immediate_type] = ACTIONS(27),
    [sym_external_symbol] = ACTIONS(21),
    [sym_global_var] = ACTIONS(21),
    [sym_metadata_ref] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_pre_DASHinstr_DASHsymbol] = ACTIONS(31),
    [anon_sym_post_DASHinstr_DASHsymbol] = ACTIONS(31),
    [anon_sym_heap_DASHalloc_DASHmarker] = ACTIONS(33),
    [anon_sym_debug_DASHinstr_DASHnumber] = ACTIONS(35),
    [anon_sym_debug_DASHlocation] = ACTIONS(33),
    [anon_sym_COLON_COLON] = ACTIONS(37),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym__] = ACTIONS(41),
    [anon_sym_target_DASHflags] = ACTIONS(43),
    [anon_sym_CustomRegMask] = ACTIONS(45),
    [anon_sym_same_value] = ACTIONS(47),
    [anon_sym_def_cfa_register] = ACTIONS(47),
    [anon_sym_restore] = ACTIONS(47),
    [anon_sym_undefined] = ACTIONS(47),
    [anon_sym_offset] = ACTIONS(49),
    [anon_sym_rel_offset] = ACTIONS(49),
    [anon_sym_def_cfa] = ACTIONS(49),
    [anon_sym_def_cfa_offset] = ACTIONS(51),
    [anon_sym_adjust_cfa_offset] = ACTIONS(51),
    [anon_sym_llvm_def_aspace_cfa] = ACTIONS(53),
    [anon_sym_register] = ACTIONS(55),
    [anon_sym_escape] = ACTIONS(57),
    [anon_sym_remember_state] = ACTIONS(59),
    [anon_sym_restore_state] = ACTIONS(59),
    [anon_sym_window_save] = ACTIONS(59),
    [anon_sym_negate_ra_sign_state] = ACTIONS(59),
    [anon_sym_intpred] = ACTIONS(61),
    [anon_sym_floatpred] = ACTIONS(63),
    [anon_sym_shufflemask] = ACTIONS(65),
    [anon_sym_undef] = ACTIONS(67),
    [anon_sym_liveout] = ACTIONS(69),
    [anon_sym_target_DASHindex] = ACTIONS(71),
    [anon_sym_blockaddress] = ACTIONS(73),
    [anon_sym_intrinsic] = ACTIONS(75),
    [anon_sym_implicit] = ACTIONS(67),
    [anon_sym_implicit_DASHdef] = ACTIONS(67),
    [anon_sym_def] = ACTIONS(67),
    [anon_sym_dead] = ACTIONS(67),
    [anon_sym_killed] = ACTIONS(67),
    [anon_sym_internal] = ACTIONS(67),
    [anon_sym_early_DASHclobber] = ACTIONS(67),
    [anon_sym_debug_DASHuse] = ACTIONS(67),
    [anon_sym_renamable] = ACTIONS(67),
    [anon_sym_half] = ACTIONS(77),
    [anon_sym_float] = ACTIONS(77),
    [anon_sym_double] = ACTIONS(77),
    [anon_sym_x86_fp80] = ACTIONS(77),
    [anon_sym_fp128] = ACTIONS(77),
    [anon_sym_ppc_fp128] = ACTIONS(77),
  },
  [3] = {
    [sym_multiline_comment] = STATE(3),
    [sym_mc_symbol] = STATE(138),
    [sym_metadata] = STATE(138),
    [sym_register_operand] = STATE(138),
    [sym_argument] = STATE(126),
    [sym_machine_operand] = STATE(190),
    [sym_custom_regmask] = STATE(138),
    [sym_cfi_operand] = STATE(138),
    [sym_immediate] = STATE(138),
    [sym_predicate] = STATE(138),
    [sym_shuffle_mask] = STATE(138),
    [sym_liveout] = STATE(138),
    [sym_target_index] = STATE(138),
    [sym_block_address] = STATE(138),
    [sym_intrinsic] = STATE(138),
    [sym_register_flag] = STATE(113),
    [sym_float_keyword] = STATE(352),
    [aux_sym_instruction_repeat4] = STATE(147),
    [aux_sym_instruction_repeat5] = STATE(242),
    [aux_sym_register_operand_repeat1] = STATE(90),
    [anon_sym_COMMA] = ACTIONS(79),
    [sym__newline] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [sym_identifier] = ACTIONS(19),
    [sym_mnemonic] = ACTIONS(19),
    [sym_bb_ref] = ACTIONS(21),
    [sym_stack_object] = ACTIONS(21),
    [sym_constant_pool_index] = ACTIONS(21),
    [sym_jump_table_index] = ACTIONS(21),
    [sym_number] = ACTIONS(19),
    [sym_var] = ACTIONS(23),
    [sym_physical_register] = ACTIONS(25),
    [sym_immediate_type] = ACTIONS(27),
    [sym_external_symbol] = ACTIONS(21),
    [sym_global_var] = ACTIONS(21),
    [sym_metadata_ref] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_pre_DASHinstr_DASHsymbol] = ACTIONS(31),
    [anon_sym_post_DASHinstr_DASHsymbol] = ACTIONS(31),
    [anon_sym_heap_DASHalloc_DASHmarker] = ACTIONS(33),
    [anon_sym_debug_DASHinstr_DASHnumber] = ACTIONS(35),
    [anon_sym_debug_DASHlocation] = ACTIONS(33),
    [anon_sym_COLON_COLON] = ACTIONS(83),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym__] = ACTIONS(41),
    [anon_sym_target_DASHflags] = ACTIONS(43),
    [anon_sym_CustomRegMask] = ACTIONS(45),
    [anon_sym_same_value] = ACTIONS(47),
    [anon_sym_def_cfa_register] = ACTIONS(47),
    [anon_sym_restore] = ACTIONS(47),
    [anon_sym_undefined] = ACTIONS(47),
    [anon_sym_offset] = ACTIONS(49),
    [anon_sym_rel_offset] = ACTIONS(49),
    [anon_sym_def_cfa] = ACTIONS(49),
    [anon_sym_def_cfa_offset] = ACTIONS(51),
    [anon_sym_adjust_cfa_offset] = ACTIONS(51),
    [anon_sym_llvm_def_aspace_cfa] = ACTIONS(53),
    [anon_sym_register] = ACTIONS(55),
    [anon_sym_escape] = ACTIONS(57),
    [anon_sym_remember_state] = ACTIONS(59),
    [anon_sym_restore_state] = ACTIONS(59),
    [anon_sym_window_save] = ACTIONS(59),
    [anon_sym_negate_ra_sign_state] = ACTIONS(59),
    [anon_sym_intpred] = ACTIONS(61),
    [anon_sym_floatpred] = ACTIONS(63),
    [anon_sym_shufflemask] = ACTIONS(65),
    [anon_sym_undef] = ACTIONS(67),
    [anon_sym_liveout] = ACTIONS(69),
    [anon_sym_target_DASHindex] = ACTIONS(71),
    [anon_sym_blockaddress] = ACTIONS(73),
    [anon_sym_intrinsic] = ACTIONS(75),
    [anon_sym_implicit] = ACTIONS(67),
    [anon_sym_implicit_DASHdef] = ACTIONS(67),
    [anon_sym_def] = ACTIONS(67),
    [anon_sym_dead] = ACTIONS(67),
    [anon_sym_killed] = ACTIONS(67),
    [anon_sym_internal] = ACTIONS(67),
    [anon_sym_early_DASHclobber] = ACTIONS(67),
    [anon_sym_debug_DASHuse] = ACTIONS(67),
    [anon_sym_renamable] = ACTIONS(67),
    [anon_sym_half] = ACTIONS(77),
    [anon_sym_float] = ACTIONS(77),
    [anon_sym_double] = ACTIONS(77),
    [anon_sym_x86_fp80] = ACTIONS(77),
    [anon_sym_fp128] = ACTIONS(77),
    [anon_sym_ppc_fp128] = ACTIONS(77),
  },
  [4] = {
    [sym_multiline_comment] = STATE(4),
    [sym_mc_symbol] = STATE(138),
    [sym_metadata] = STATE(138),
    [sym_register_operand] = STATE(138),
    [sym_argument] = STATE(131),
    [sym_machine_operand] = STATE(190),
    [sym_custom_regmask] = STATE(138),
    [sym_cfi_operand] = STATE(138),
    [sym_immediate] = STATE(138),
    [sym_predicate] = STATE(138),
    [sym_shuffle_mask] = STATE(138),
    [sym_liveout] = STATE(138),
    [sym_target_index] = STATE(138),
    [sym_block_address] = STATE(138),
    [sym_intrinsic] = STATE(138),
    [sym_register_flag] = STATE(113),
    [sym_float_keyword] = STATE(352),
    [aux_sym_instruction_repeat4] = STATE(144),
    [aux_sym_instruction_repeat5] = STATE(233),
    [aux_sym_register_operand_repeat1] = STATE(90),
    [anon_sym_COMMA] = ACTIONS(85),
    [sym__newline] = ACTIONS(87),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [sym_identifier] = ACTIONS(19),
    [sym_mnemonic] = ACTIONS(19),
    [sym_bb_ref] = ACTIONS(21),
    [sym_stack_object] = ACTIONS(21),
    [sym_constant_pool_index] = ACTIONS(21),
    [sym_jump_table_index] = ACTIONS(21),
    [sym_number] = ACTIONS(19),
    [sym_var] = ACTIONS(23),
    [sym_physical_register] = ACTIONS(25),
    [sym_immediate_type] = ACTIONS(27),
    [sym_external_symbol] = ACTIONS(21),
    [sym_global_var] = ACTIONS(21),
    [sym_metadata_ref] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(87),
    [anon_sym_pre_DASHinstr_DASHsymbol] = ACTIONS(31),
    [anon_sym_post_DASHinstr_DASHsymbol] = ACTIONS(31),
    [anon_sym_heap_DASHalloc_DASHmarker] = ACTIONS(33),
    [anon_sym_debug_DASHinstr_DASHnumber] = ACTIONS(35),
    [anon_sym_debug_DASHlocation] = ACTIONS(33),
    [anon_sym_COLON_COLON] = ACTIONS(89),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym__] = ACTIONS(41),
    [anon_sym_target_DASHflags] = ACTIONS(43),
    [anon_sym_CustomRegMask] = ACTIONS(45),
    [anon_sym_same_value] = ACTIONS(47),
    [anon_sym_def_cfa_register] = ACTIONS(47),
    [anon_sym_restore] = ACTIONS(47),
    [anon_sym_undefined] = ACTIONS(47),
    [anon_sym_offset] = ACTIONS(49),
    [anon_sym_rel_offset] = ACTIONS(49),
    [anon_sym_def_cfa] = ACTIONS(49),
    [anon_sym_def_cfa_offset] = ACTIONS(51),
    [anon_sym_adjust_cfa_offset] = ACTIONS(51),
    [anon_sym_llvm_def_aspace_cfa] = ACTIONS(53),
    [anon_sym_register] = ACTIONS(55),
    [anon_sym_escape] = ACTIONS(57),
    [anon_sym_remember_state] = ACTIONS(59),
    [anon_sym_restore_state] = ACTIONS(59),
    [anon_sym_window_save] = ACTIONS(59),
    [anon_sym_negate_ra_sign_state] = ACTIONS(59),
    [anon_sym_intpred] = ACTIONS(61),
    [anon_sym_floatpred] = ACTIONS(63),
    [anon_sym_shufflemask] = ACTIONS(65),
    [anon_sym_undef] = ACTIONS(67),
    [anon_sym_liveout] = ACTIONS(69),
    [anon_sym_target_DASHindex] = ACTIONS(71),
    [anon_sym_blockaddress] = ACTIONS(73),
    [anon_sym_intrinsic] = ACTIONS(75),
    [anon_sym_implicit] = ACTIONS(67),
    [anon_sym_implicit_DASHdef] = ACTIONS(67),
    [anon_sym_def] = ACTIONS(67),
    [anon_sym_dead] = ACTIONS(67),
    [anon_sym_killed] = ACTIONS(67),
    [anon_sym_internal] = ACTIONS(67),
    [anon_sym_early_DASHclobber] = ACTIONS(67),
    [anon_sym_debug_DASHuse] = ACTIONS(67),
    [anon_sym_renamable] = ACTIONS(67),
    [anon_sym_half] = ACTIONS(77),
    [anon_sym_float] = ACTIONS(77),
    [anon_sym_double] = ACTIONS(77),
    [anon_sym_x86_fp80] = ACTIONS(77),
    [anon_sym_fp128] = ACTIONS(77),
    [anon_sym_ppc_fp128] = ACTIONS(77),
  },
  [5] = {
    [sym_multiline_comment] = STATE(5),
    [sym_mc_symbol] = STATE(138),
    [sym_metadata] = STATE(138),
    [sym_register_operand] = STATE(138),
    [sym_argument] = STATE(124),
    [sym_machine_operand] = STATE(190),
    [sym_custom_regmask] = STATE(138),
    [sym_cfi_operand] = STATE(138),
    [sym_immediate] = STATE(138),
    [sym_predicate] = STATE(138),
    [sym_shuffle_mask] = STATE(138),
    [sym_liveout] = STATE(138),
    [sym_target_index] = STATE(138),
    [sym_block_address] = STATE(138),
    [sym_intrinsic] = STATE(138),
    [sym_register_flag] = STATE(113),
    [sym_float_keyword] = STATE(352),
    [aux_sym_instruction_repeat4] = STATE(176),
    [aux_sym_instruction_repeat5] = STATE(238),
    [aux_sym_register_operand_repeat1] = STATE(90),
    [anon_sym_COMMA] = ACTIONS(91),
    [sym__newline] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [sym_identifier] = ACTIONS(19),
    [sym_mnemonic] = ACTIONS(19),
    [sym_bb_ref] = ACTIONS(21),
    [sym_stack_object] = ACTIONS(21),
    [sym_constant_pool_index] = ACTIONS(21),
    [sym_jump_table_index] = ACTIONS(21),
    [sym_number] = ACTIONS(19),
    [sym_var] = ACTIONS(23),
    [sym_physical_register] = ACTIONS(25),
    [sym_immediate_type] = ACTIONS(27),
    [sym_external_symbol] = ACTIONS(21),
    [sym_global_var] = ACTIONS(21),
    [sym_metadata_ref] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_pre_DASHinstr_DASHsymbol] = ACTIONS(31),
    [anon_sym_post_DASHinstr_DASHsymbol] = ACTIONS(31),
    [anon_sym_heap_DASHalloc_DASHmarker] = ACTIONS(33),
    [anon_sym_debug_DASHinstr_DASHnumber] = ACTIONS(35),
    [anon_sym_debug_DASHlocation] = ACTIONS(33),
    [anon_sym_COLON_COLON] = ACTIONS(95),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym__] = ACTIONS(41),
    [anon_sym_target_DASHflags] = ACTIONS(43),
    [anon_sym_CustomRegMask] = ACTIONS(45),
    [anon_sym_same_value] = ACTIONS(47),
    [anon_sym_def_cfa_register] = ACTIONS(47),
    [anon_sym_restore] = ACTIONS(47),
    [anon_sym_undefined] = ACTIONS(47),
    [anon_sym_offset] = ACTIONS(49),
    [anon_sym_rel_offset] = ACTIONS(49),
    [anon_sym_def_cfa] = ACTIONS(49),
    [anon_sym_def_cfa_offset] = ACTIONS(51),
    [anon_sym_adjust_cfa_offset] = ACTIONS(51),
    [anon_sym_llvm_def_aspace_cfa] = ACTIONS(53),
    [anon_sym_register] = ACTIONS(55),
    [anon_sym_escape] = ACTIONS(57),
    [anon_sym_remember_state] = ACTIONS(59),
    [anon_sym_restore_state] = ACTIONS(59),
    [anon_sym_window_save] = ACTIONS(59),
    [anon_sym_negate_ra_sign_state] = ACTIONS(59),
    [anon_sym_intpred] = ACTIONS(61),
    [anon_sym_floatpred] = ACTIONS(63),
    [anon_sym_shufflemask] = ACTIONS(65),
    [anon_sym_undef] = ACTIONS(67),
    [anon_sym_liveout] = ACTIONS(69),
    [anon_sym_target_DASHindex] = ACTIONS(71),
    [anon_sym_blockaddress] = ACTIONS(73),
    [anon_sym_intrinsic] = ACTIONS(75),
    [anon_sym_implicit] = ACTIONS(67),
    [anon_sym_implicit_DASHdef] = ACTIONS(67),
    [anon_sym_def] = ACTIONS(67),
    [anon_sym_dead] = ACTIONS(67),
    [anon_sym_killed] = ACTIONS(67),
    [anon_sym_internal] = ACTIONS(67),
    [anon_sym_early_DASHclobber] = ACTIONS(67),
    [anon_sym_debug_DASHuse] = ACTIONS(67),
    [anon_sym_renamable] = ACTIONS(67),
    [anon_sym_half] = ACTIONS(77),
    [anon_sym_float] = ACTIONS(77),
    [anon_sym_double] = ACTIONS(77),
    [anon_sym_x86_fp80] = ACTIONS(77),
    [anon_sym_fp128] = ACTIONS(77),
    [anon_sym_ppc_fp128] = ACTIONS(77),
  },
  [6] = {
    [sym_multiline_comment] = STATE(6),
    [sym_mc_symbol] = STATE(138),
    [sym_metadata] = STATE(138),
    [sym_register_operand] = STATE(138),
    [sym_argument] = STATE(139),
    [sym_machine_operand] = STATE(190),
    [sym_custom_regmask] = STATE(138),
    [sym_cfi_operand] = STATE(138),
    [sym_immediate] = STATE(138),
    [sym_predicate] = STATE(138),
    [sym_shuffle_mask] = STATE(138),
    [sym_liveout] = STATE(138),
    [sym_target_index] = STATE(138),
    [sym_block_address] = STATE(138),
    [sym_intrinsic] = STATE(138),
    [sym_register_flag] = STATE(113),
    [sym_float_keyword] = STATE(352),
    [aux_sym_instruction_repeat4] = STATE(156),
    [aux_sym_instruction_repeat5] = STATE(243),
    [aux_sym_register_operand_repeat1] = STATE(90),
    [anon_sym_COMMA] = ACTIONS(97),
    [sym__newline] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [sym_identifier] = ACTIONS(19),
    [sym_mnemonic] = ACTIONS(19),
    [sym_bb_ref] = ACTIONS(21),
    [sym_stack_object] = ACTIONS(21),
    [sym_constant_pool_index] = ACTIONS(21),
    [sym_jump_table_index] = ACTIONS(21),
    [sym_number] = ACTIONS(19),
    [sym_var] = ACTIONS(23),
    [sym_physical_register] = ACTIONS(25),
    [sym_immediate_type] = ACTIONS(27),
    [sym_external_symbol] = ACTIONS(21),
    [sym_global_var] = ACTIONS(21),
    [sym_metadata_ref] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_pre_DASHinstr_DASHsymbol] = ACTIONS(31),
    [anon_sym_post_DASHinstr_DASHsymbol] = ACTIONS(31),
    [anon_sym_heap_DASHalloc_DASHmarker] = ACTIONS(33),
    [anon_sym_debug_DASHinstr_DASHnumber] = ACTIONS(35),
    [anon_sym_debug_DASHlocation] = ACTIONS(33),
    [anon_sym_COLON_COLON] = ACTIONS(101),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym__] = ACTIONS(41),
    [anon_sym_target_DASHflags] = ACTIONS(43),
    [anon_sym_CustomRegMask] = ACTIONS(45),
    [anon_sym_same_value] = ACTIONS(47),
    [anon_sym_def_cfa_register] = ACTIONS(47),
    [anon_sym_restore] = ACTIONS(47),
    [anon_sym_undefined] = ACTIONS(47),
    [anon_sym_offset] = ACTIONS(49),
    [anon_sym_rel_offset] = ACTIONS(49),
    [anon_sym_def_cfa] = ACTIONS(49),
    [anon_sym_def_cfa_offset] = ACTIONS(51),
    [anon_sym_adjust_cfa_offset] = ACTIONS(51),
    [anon_sym_llvm_def_aspace_cfa] = ACTIONS(53),
    [anon_sym_register] = ACTIONS(55),
    [anon_sym_escape] = ACTIONS(57),
    [anon_sym_remember_state] = ACTIONS(59),
    [anon_sym_restore_state] = ACTIONS(59),
    [anon_sym_window_save] = ACTIONS(59),
    [anon_sym_negate_ra_sign_state] = ACTIONS(59),
    [anon_sym_intpred] = ACTIONS(61),
    [anon_sym_floatpred] = ACTIONS(63),
    [anon_sym_shufflemask] = ACTIONS(65),
    [anon_sym_undef] = ACTIONS(67),
    [anon_sym_liveout] = ACTIONS(69),
    [anon_sym_target_DASHindex] = ACTIONS(71),
    [anon_sym_blockaddress] = ACTIONS(73),
    [anon_sym_intrinsic] = ACTIONS(75),
    [anon_sym_implicit] = ACTIONS(67),
    [anon_sym_implicit_DASHdef] = ACTIONS(67),
    [anon_sym_def] = ACTIONS(67),
    [anon_sym_dead] = ACTIONS(67),
    [anon_sym_killed] = ACTIONS(67),
    [anon_sym_internal] = ACTIONS(67),
    [anon_sym_early_DASHclobber] = ACTIONS(67),
    [anon_sym_debug_DASHuse] = ACTIONS(67),
    [anon_sym_renamable] = ACTIONS(67),
    [anon_sym_half] = ACTIONS(77),
    [anon_sym_float] = ACTIONS(77),
    [anon_sym_double] = ACTIONS(77),
    [anon_sym_x86_fp80] = ACTIONS(77),
    [anon_sym_fp128] = ACTIONS(77),
    [anon_sym_ppc_fp128] = ACTIONS(77),
  },
  [7] = {
    [sym_multiline_comment] = STATE(7),
    [sym_mc_symbol] = STATE(138),
    [sym_metadata] = STATE(138),
    [sym_register_operand] = STATE(138),
    [sym_argument] = STATE(201),
    [sym_machine_operand] = STATE(190),
    [sym_custom_regmask] = STATE(138),
    [sym_cfi_operand] = STATE(138),
    [sym_immediate] = STATE(138),
    [sym_predicate] = STATE(138),
    [sym_shuffle_mask] = STATE(138),
    [sym_liveout] = STATE(138),
    [sym_target_index] = STATE(138),
    [sym_block_address] = STATE(138),
    [sym_intrinsic] = STATE(138),
    [sym_register_flag] = STATE(113),
    [sym_float_keyword] = STATE(352),
    [aux_sym_register_operand_repeat1] = STATE(90),
    [sym__newline] = ACTIONS(103),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [sym_identifier] = ACTIONS(19),
    [sym_mnemonic] = ACTIONS(19),
    [sym_bb_ref] = ACTIONS(21),
    [sym_stack_object] = ACTIONS(21),
    [sym_constant_pool_index] = ACTIONS(21),
    [sym_jump_table_index] = ACTIONS(21),
    [sym_number] = ACTIONS(19),
    [sym_var] = ACTIONS(23),
    [sym_physical_register] = ACTIONS(25),
    [sym_immediate_type] = ACTIONS(27),
    [sym_external_symbol] = ACTIONS(21),
    [sym_global_var] = ACTIONS(21),
    [sym_metadata_ref] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_pre_DASHinstr_DASHsymbol] = ACTIONS(105),
    [anon_sym_post_DASHinstr_DASHsymbol] = ACTIONS(105),
    [anon_sym_heap_DASHalloc_DASHmarker] = ACTIONS(107),
    [anon_sym_debug_DASHinstr_DASHnumber] = ACTIONS(109),
    [anon_sym_debug_DASHlocation] = ACTIONS(107),
    [anon_sym_COLON_COLON] = ACTIONS(111),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym__] = ACTIONS(41),
    [anon_sym_target_DASHflags] = ACTIONS(43),
    [anon_sym_CustomRegMask] = ACTIONS(45),
    [anon_sym_same_value] = ACTIONS(47),
    [anon_sym_def_cfa_register] = ACTIONS(47),
    [anon_sym_restore] = ACTIONS(47),
    [anon_sym_undefined] = ACTIONS(47),
    [anon_sym_offset] = ACTIONS(49),
    [anon_sym_rel_offset] = ACTIONS(49),
    [anon_sym_def_cfa] = ACTIONS(49),
    [anon_sym_def_cfa_offset] = ACTIONS(51),
    [anon_sym_adjust_cfa_offset] = ACTIONS(51),
    [anon_sym_llvm_def_aspace_cfa] = ACTIONS(53),
    [anon_sym_register] = ACTIONS(55),
    [anon_sym_escape] = ACTIONS(57),
    [anon_sym_remember_state] = ACTIONS(59),
    [anon_sym_restore_state] = ACTIONS(59),
    [anon_sym_window_save] = ACTIONS(59),
    [anon_sym_negate_ra_sign_state] = ACTIONS(59),
    [anon_sym_intpred] = ACTIONS(61),
    [anon_sym_floatpred] = ACTIONS(63),
    [anon_sym_shufflemask] = ACTIONS(65),
    [anon_sym_undef] = ACTIONS(67),
    [anon_sym_liveout] = ACTIONS(69),
    [anon_sym_target_DASHindex] = ACTIONS(71),
    [anon_sym_blockaddress] = ACTIONS(73),
    [anon_sym_intrinsic] = ACTIONS(75),
    [anon_sym_implicit] = ACTIONS(67),
    [anon_sym_implicit_DASHdef] = ACTIONS(67),
    [anon_sym_def] = ACTIONS(67),
    [anon_sym_dead] = ACTIONS(67),
    [anon_sym_killed] = ACTIONS(67),
    [anon_sym_internal] = ACTIONS(67),
    [anon_sym_early_DASHclobber] = ACTIONS(67),
    [anon_sym_debug_DASHuse] = ACTIONS(67),
    [anon_sym_renamable] = ACTIONS(67),
    [anon_sym_half] = ACTIONS(77),
    [anon_sym_float] = ACTIONS(77),
    [anon_sym_double] = ACTIONS(77),
    [anon_sym_x86_fp80] = ACTIONS(77),
    [anon_sym_fp128] = ACTIONS(77),
    [anon_sym_ppc_fp128] = ACTIONS(77),
  },
  [8] = {
    [sym_multiline_comment] = STATE(8),
    [sym_mc_symbol] = STATE(138),
    [sym_metadata] = STATE(138),
    [sym_register_operand] = STATE(138),
    [sym_argument] = STATE(201),
    [sym_machine_operand] = STATE(190),
    [sym_custom_regmask] = STATE(138),
    [sym_cfi_operand] = STATE(138),
    [sym_immediate] = STATE(138),
    [sym_predicate] = STATE(138),
    [sym_shuffle_mask] = STATE(138),
    [sym_liveout] = STATE(138),
    [sym_target_index] = STATE(138),
    [sym_block_address] = STATE(138),
    [sym_intrinsic] = STATE(138),
    [sym_register_flag] = STATE(113),
    [sym_float_keyword] = STATE(352),
    [aux_sym_register_operand_repeat1] = STATE(90),
    [sym__newline] = ACTIONS(113),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [sym_identifier] = ACTIONS(19),
    [sym_mnemonic] = ACTIONS(19),
    [sym_bb_ref] = ACTIONS(21),
    [sym_stack_object] = ACTIONS(21),
    [sym_constant_pool_index] = ACTIONS(21),
    [sym_jump_table_index] = ACTIONS(21),
    [sym_number] = ACTIONS(19),
    [sym_var] = ACTIONS(23),
    [sym_physical_register] = ACTIONS(25),
    [sym_immediate_type] = ACTIONS(27),
    [sym_external_symbol] = ACTIONS(21),
    [sym_global_var] = ACTIONS(21),
    [sym_metadata_ref] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(113),
    [anon_sym_pre_DASHinstr_DASHsymbol] = ACTIONS(105),
    [anon_sym_post_DASHinstr_DASHsymbol] = ACTIONS(105),
    [anon_sym_heap_DASHalloc_DASHmarker] = ACTIONS(107),
    [anon_sym_debug_DASHinstr_DASHnumber] = ACTIONS(109),
    [anon_sym_debug_DASHlocation] = ACTIONS(107),
    [anon_sym_COLON_COLON] = ACTIONS(115),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym__] = ACTIONS(41),
    [anon_sym_target_DASHflags] = ACTIONS(43),
    [anon_sym_CustomRegMask] = ACTIONS(45),
    [anon_sym_same_value] = ACTIONS(47),
    [anon_sym_def_cfa_register] = ACTIONS(47),
    [anon_sym_restore] = ACTIONS(47),
    [anon_sym_undefined] = ACTIONS(47),
    [anon_sym_offset] = ACTIONS(49),
    [anon_sym_rel_offset] = ACTIONS(49),
    [anon_sym_def_cfa] = ACTIONS(49),
    [anon_sym_def_cfa_offset] = ACTIONS(51),
    [anon_sym_adjust_cfa_offset] = ACTIONS(51),
    [anon_sym_llvm_def_aspace_cfa] = ACTIONS(53),
    [anon_sym_register] = ACTIONS(55),
    [anon_sym_escape] = ACTIONS(57),
    [anon_sym_remember_state] = ACTIONS(59),
    [anon_sym_restore_state] = ACTIONS(59),
    [anon_sym_window_save] = ACTIONS(59),
    [anon_sym_negate_ra_sign_state] = ACTIONS(59),
    [anon_sym_intpred] = ACTIONS(61),
    [anon_sym_floatpred] = ACTIONS(63),
    [anon_sym_shufflemask] = ACTIONS(65),
    [anon_sym_undef] = ACTIONS(67),
    [anon_sym_liveout] = ACTIONS(69),
    [anon_sym_target_DASHindex] = ACTIONS(71),
    [anon_sym_blockaddress] = ACTIONS(73),
    [anon_sym_intrinsic] = ACTIONS(75),
    [anon_sym_implicit] = ACTIONS(67),
    [anon_sym_implicit_DASHdef] = ACTIONS(67),
    [anon_sym_def] = ACTIONS(67),
    [anon_sym_dead] = ACTIONS(67),
    [anon_sym_killed] = ACTIONS(67),
    [anon_sym_internal] = ACTIONS(67),
    [anon_sym_early_DASHclobber] = ACTIONS(67),
    [anon_sym_debug_DASHuse] = ACTIONS(67),
    [anon_sym_renamable] = ACTIONS(67),
    [anon_sym_half] = ACTIONS(77),
    [anon_sym_float] = ACTIONS(77),
    [anon_sym_double] = ACTIONS(77),
    [anon_sym_x86_fp80] = ACTIONS(77),
    [anon_sym_fp128] = ACTIONS(77),
    [anon_sym_ppc_fp128] = ACTIONS(77),
  },
  [9] = {
    [sym_multiline_comment] = STATE(9),
    [sym_mc_symbol] = STATE(138),
    [sym_metadata] = STATE(138),
    [sym_register_operand] = STATE(138),
    [sym_argument] = STATE(201),
    [sym_machine_operand] = STATE(190),
    [sym_custom_regmask] = STATE(138),
    [sym_cfi_operand] = STATE(138),
    [sym_immediate] = STATE(138),
    [sym_predicate] = STATE(138),
    [sym_shuffle_mask] = STATE(138),
    [sym_liveout] = STATE(138),
    [sym_target_index] = STATE(138),
    [sym_block_address] = STATE(138),
    [sym_intrinsic] = STATE(138),
    [sym_register_flag] = STATE(113),
    [sym_float_keyword] = STATE(352),
    [aux_sym_register_operand_repeat1] = STATE(90),
    [sym__newline] = ACTIONS(117),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [sym_identifier] = ACTIONS(19),
    [sym_mnemonic] = ACTIONS(19),
    [sym_bb_ref] = ACTIONS(21),
    [sym_stack_object] = ACTIONS(21),
    [sym_constant_pool_index] = ACTIONS(21),
    [sym_jump_table_index] = ACTIONS(21),
    [sym_number] = ACTIONS(19),
    [sym_var] = ACTIONS(23),
    [sym_physical_register] = ACTIONS(25),
    [sym_immediate_type] = ACTIONS(27),
    [sym_external_symbol] = ACTIONS(21),
    [sym_global_var] = ACTIONS(21),
    [sym_metadata_ref] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_pre_DASHinstr_DASHsymbol] = ACTIONS(105),
    [anon_sym_post_DASHinstr_DASHsymbol] = ACTIONS(105),
    [anon_sym_heap_DASHalloc_DASHmarker] = ACTIONS(107),
    [anon_sym_debug_DASHinstr_DASHnumber] = ACTIONS(109),
    [anon_sym_debug_DASHlocation] = ACTIONS(107),
    [anon_sym_COLON_COLON] = ACTIONS(119),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym__] = ACTIONS(41),
    [anon_sym_target_DASHflags] = ACTIONS(43),
    [anon_sym_CustomRegMask] = ACTIONS(45),
    [anon_sym_same_value] = ACTIONS(47),
    [anon_sym_def_cfa_register] = ACTIONS(47),
    [anon_sym_restore] = ACTIONS(47),
    [anon_sym_undefined] = ACTIONS(47),
    [anon_sym_offset] = ACTIONS(49),
    [anon_sym_rel_offset] = ACTIONS(49),
    [anon_sym_def_cfa] = ACTIONS(49),
    [anon_sym_def_cfa_offset] = ACTIONS(51),
    [anon_sym_adjust_cfa_offset] = ACTIONS(51),
    [anon_sym_llvm_def_aspace_cfa] = ACTIONS(53),
    [anon_sym_register] = ACTIONS(55),
    [anon_sym_escape] = ACTIONS(57),
    [anon_sym_remember_state] = ACTIONS(59),
    [anon_sym_restore_state] = ACTIONS(59),
    [anon_sym_window_save] = ACTIONS(59),
    [anon_sym_negate_ra_sign_state] = ACTIONS(59),
    [anon_sym_intpred] = ACTIONS(61),
    [anon_sym_floatpred] = ACTIONS(63),
    [anon_sym_shufflemask] = ACTIONS(65),
    [anon_sym_undef] = ACTIONS(67),
    [anon_sym_liveout] = ACTIONS(69),
    [anon_sym_target_DASHindex] = ACTIONS(71),
    [anon_sym_blockaddress] = ACTIONS(73),
    [anon_sym_intrinsic] = ACTIONS(75),
    [anon_sym_implicit] = ACTIONS(67),
    [anon_sym_implicit_DASHdef] = ACTIONS(67),
    [anon_sym_def] = ACTIONS(67),
    [anon_sym_dead] = ACTIONS(67),
    [anon_sym_killed] = ACTIONS(67),
    [anon_sym_internal] = ACTIONS(67),
    [anon_sym_early_DASHclobber] = ACTIONS(67),
    [anon_sym_debug_DASHuse] = ACTIONS(67),
    [anon_sym_renamable] = ACTIONS(67),
    [anon_sym_half] = ACTIONS(77),
    [anon_sym_float] = ACTIONS(77),
    [anon_sym_double] = ACTIONS(77),
    [anon_sym_x86_fp80] = ACTIONS(77),
    [anon_sym_fp128] = ACTIONS(77),
    [anon_sym_ppc_fp128] = ACTIONS(77),
  },
  [10] = {
    [sym_multiline_comment] = STATE(10),
    [sym_mc_symbol] = STATE(138),
    [sym_metadata] = STATE(138),
    [sym_register_operand] = STATE(138),
    [sym_argument] = STATE(201),
    [sym_machine_operand] = STATE(190),
    [sym_custom_regmask] = STATE(138),
    [sym_cfi_operand] = STATE(138),
    [sym_immediate] = STATE(138),
    [sym_predicate] = STATE(138),
    [sym_shuffle_mask] = STATE(138),
    [sym_liveout] = STATE(138),
    [sym_target_index] = STATE(138),
    [sym_block_address] = STATE(138),
    [sym_intrinsic] = STATE(138),
    [sym_register_flag] = STATE(113),
    [sym_float_keyword] = STATE(352),
    [aux_sym_register_operand_repeat1] = STATE(90),
    [sym__newline] = ACTIONS(121),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [sym_identifier] = ACTIONS(19),
    [sym_mnemonic] = ACTIONS(19),
    [sym_bb_ref] = ACTIONS(21),
    [sym_stack_object] = ACTIONS(21),
    [sym_constant_pool_index] = ACTIONS(21),
    [sym_jump_table_index] = ACTIONS(21),
    [sym_number] = ACTIONS(19),
    [sym_var] = ACTIONS(23),
    [sym_physical_register] = ACTIONS(25),
    [sym_immediate_type] = ACTIONS(27),
    [sym_external_symbol] = ACTIONS(21),
    [sym_global_var] = ACTIONS(21),
    [sym_metadata_ref] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(121),
    [anon_sym_pre_DASHinstr_DASHsymbol] = ACTIONS(105),
    [anon_sym_post_DASHinstr_DASHsymbol] = ACTIONS(105),
    [anon_sym_heap_DASHalloc_DASHmarker] = ACTIONS(107),
    [anon_sym_debug_DASHinstr_DASHnumber] = ACTIONS(109),
    [anon_sym_debug_DASHlocation] = ACTIONS(107),
    [anon_sym_COLON_COLON] = ACTIONS(123),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym__] = ACTIONS(41),
    [anon_sym_target_DASHflags] = ACTIONS(43),
    [anon_sym_CustomRegMask] = ACTIONS(45),
    [anon_sym_same_value] = ACTIONS(47),
    [anon_sym_def_cfa_register] = ACTIONS(47),
    [anon_sym_restore] = ACTIONS(47),
    [anon_sym_undefined] = ACTIONS(47),
    [anon_sym_offset] = ACTIONS(49),
    [anon_sym_rel_offset] = ACTIONS(49),
    [anon_sym_def_cfa] = ACTIONS(49),
    [anon_sym_def_cfa_offset] = ACTIONS(51),
    [anon_sym_adjust_cfa_offset] = ACTIONS(51),
    [anon_sym_llvm_def_aspace_cfa] = ACTIONS(53),
    [anon_sym_register] = ACTIONS(55),
    [anon_sym_escape] = ACTIONS(57),
    [anon_sym_remember_state] = ACTIONS(59),
    [anon_sym_restore_state] = ACTIONS(59),
    [anon_sym_window_save] = ACTIONS(59),
    [anon_sym_negate_ra_sign_state] = ACTIONS(59),
    [anon_sym_intpred] = ACTIONS(61),
    [anon_sym_floatpred] = ACTIONS(63),
    [anon_sym_shufflemask] = ACTIONS(65),
    [anon_sym_undef] = ACTIONS(67),
    [anon_sym_liveout] = ACTIONS(69),
    [anon_sym_target_DASHindex] = ACTIONS(71),
    [anon_sym_blockaddress] = ACTIONS(73),
    [anon_sym_intrinsic] = ACTIONS(75),
    [anon_sym_implicit] = ACTIONS(67),
    [anon_sym_implicit_DASHdef] = ACTIONS(67),
    [anon_sym_def] = ACTIONS(67),
    [anon_sym_dead] = ACTIONS(67),
    [anon_sym_killed] = ACTIONS(67),
    [anon_sym_internal] = ACTIONS(67),
    [anon_sym_early_DASHclobber] = ACTIONS(67),
    [anon_sym_debug_DASHuse] = ACTIONS(67),
    [anon_sym_renamable] = ACTIONS(67),
    [anon_sym_half] = ACTIONS(77),
    [anon_sym_float] = ACTIONS(77),
    [anon_sym_double] = ACTIONS(77),
    [anon_sym_x86_fp80] = ACTIONS(77),
    [anon_sym_fp128] = ACTIONS(77),
    [anon_sym_ppc_fp128] = ACTIONS(77),
  },
  [11] = {
    [sym_multiline_comment] = STATE(11),
    [sym_mc_symbol] = STATE(138),
    [sym_metadata] = STATE(138),
    [sym_register_operand] = STATE(138),
    [sym_argument] = STATE(201),
    [sym_machine_operand] = STATE(190),
    [sym_custom_regmask] = STATE(138),
    [sym_cfi_operand] = STATE(138),
    [sym_immediate] = STATE(138),
    [sym_predicate] = STATE(138),
    [sym_shuffle_mask] = STATE(138),
    [sym_liveout] = STATE(138),
    [sym_target_index] = STATE(138),
    [sym_block_address] = STATE(138),
    [sym_intrinsic] = STATE(138),
    [sym_register_flag] = STATE(113),
    [sym_float_keyword] = STATE(352),
    [aux_sym_register_operand_repeat1] = STATE(90),
    [sym__newline] = ACTIONS(125),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [sym_identifier] = ACTIONS(19),
    [sym_mnemonic] = ACTIONS(19),
    [sym_bb_ref] = ACTIONS(21),
    [sym_stack_object] = ACTIONS(21),
    [sym_constant_pool_index] = ACTIONS(21),
    [sym_jump_table_index] = ACTIONS(21),
    [sym_number] = ACTIONS(19),
    [sym_var] = ACTIONS(23),
    [sym_physical_register] = ACTIONS(25),
    [sym_immediate_type] = ACTIONS(27),
    [sym_external_symbol] = ACTIONS(21),
    [sym_global_var] = ACTIONS(21),
    [sym_metadata_ref] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(125),
    [anon_sym_pre_DASHinstr_DASHsymbol] = ACTIONS(105),
    [anon_sym_post_DASHinstr_DASHsymbol] = ACTIONS(105),
    [anon_sym_heap_DASHalloc_DASHmarker] = ACTIONS(107),
    [anon_sym_debug_DASHinstr_DASHnumber] = ACTIONS(109),
    [anon_sym_debug_DASHlocation] = ACTIONS(107),
    [anon_sym_COLON_COLON] = ACTIONS(127),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym__] = ACTIONS(41),
    [anon_sym_target_DASHflags] = ACTIONS(43),
    [anon_sym_CustomRegMask] = ACTIONS(45),
    [anon_sym_same_value] = ACTIONS(47),
    [anon_sym_def_cfa_register] = ACTIONS(47),
    [anon_sym_restore] = ACTIONS(47),
    [anon_sym_undefined] = ACTIONS(47),
    [anon_sym_offset] = ACTIONS(49),
    [anon_sym_rel_offset] = ACTIONS(49),
    [anon_sym_def_cfa] = ACTIONS(49),
    [anon_sym_def_cfa_offset] = ACTIONS(51),
    [anon_sym_adjust_cfa_offset] = ACTIONS(51),
    [anon_sym_llvm_def_aspace_cfa] = ACTIONS(53),
    [anon_sym_register] = ACTIONS(55),
    [anon_sym_escape] = ACTIONS(57),
    [anon_sym_remember_state] = ACTIONS(59),
    [anon_sym_restore_state] = ACTIONS(59),
    [anon_sym_window_save] = ACTIONS(59),
    [anon_sym_negate_ra_sign_state] = ACTIONS(59),
    [anon_sym_intpred] = ACTIONS(61),
    [anon_sym_floatpred] = ACTIONS(63),
    [anon_sym_shufflemask] = ACTIONS(65),
    [anon_sym_undef] = ACTIONS(67),
    [anon_sym_liveout] = ACTIONS(69),
    [anon_sym_target_DASHindex] = ACTIONS(71),
    [anon_sym_blockaddress] = ACTIONS(73),
    [anon_sym_intrinsic] = ACTIONS(75),
    [anon_sym_implicit] = ACTIONS(67),
    [anon_sym_implicit_DASHdef] = ACTIONS(67),
    [anon_sym_def] = ACTIONS(67),
    [anon_sym_dead] = ACTIONS(67),
    [anon_sym_killed] = ACTIONS(67),
    [anon_sym_internal] = ACTIONS(67),
    [anon_sym_early_DASHclobber] = ACTIONS(67),
    [anon_sym_debug_DASHuse] = ACTIONS(67),
    [anon_sym_renamable] = ACTIONS(67),
    [anon_sym_half] = ACTIONS(77),
    [anon_sym_float] = ACTIONS(77),
    [anon_sym_double] = ACTIONS(77),
    [anon_sym_x86_fp80] = ACTIONS(77),
    [anon_sym_fp128] = ACTIONS(77),
    [anon_sym_ppc_fp128] = ACTIONS(77),
  },
  [12] = {
    [sym_multiline_comment] = STATE(12),
    [sym_mc_symbol] = STATE(138),
    [sym_metadata] = STATE(138),
    [sym_register_operand] = STATE(138),
    [sym_argument] = STATE(201),
    [sym_machine_operand] = STATE(190),
    [sym_custom_regmask] = STATE(138),
    [sym_cfi_operand] = STATE(138),
    [sym_immediate] = STATE(138),
    [sym_predicate] = STATE(138),
    [sym_shuffle_mask] = STATE(138),
    [sym_liveout] = STATE(138),
    [sym_target_index] = STATE(138),
    [sym_block_address] = STATE(138),
    [sym_intrinsic] = STATE(138),
    [sym_register_flag] = STATE(113),
    [sym_float_keyword] = STATE(352),
    [aux_sym_register_operand_repeat1] = STATE(90),
    [sym__newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [sym_identifier] = ACTIONS(19),
    [sym_mnemonic] = ACTIONS(19),
    [sym_bb_ref] = ACTIONS(21),
    [sym_stack_object] = ACTIONS(21),
    [sym_constant_pool_index] = ACTIONS(21),
    [sym_jump_table_index] = ACTIONS(21),
    [sym_number] = ACTIONS(19),
    [sym_var] = ACTIONS(23),
    [sym_physical_register] = ACTIONS(25),
    [sym_immediate_type] = ACTIONS(27),
    [sym_external_symbol] = ACTIONS(21),
    [sym_global_var] = ACTIONS(21),
    [sym_metadata_ref] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_pre_DASHinstr_DASHsymbol] = ACTIONS(105),
    [anon_sym_post_DASHinstr_DASHsymbol] = ACTIONS(105),
    [anon_sym_heap_DASHalloc_DASHmarker] = ACTIONS(107),
    [anon_sym_debug_DASHinstr_DASHnumber] = ACTIONS(109),
    [anon_sym_debug_DASHlocation] = ACTIONS(107),
    [anon_sym_COLON_COLON] = ACTIONS(131),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym__] = ACTIONS(41),
    [anon_sym_target_DASHflags] = ACTIONS(43),
    [anon_sym_CustomRegMask] = ACTIONS(45),
    [anon_sym_same_value] = ACTIONS(47),
    [anon_sym_def_cfa_register] = ACTIONS(47),
    [anon_sym_restore] = ACTIONS(47),
    [anon_sym_undefined] = ACTIONS(47),
    [anon_sym_offset] = ACTIONS(49),
    [anon_sym_rel_offset] = ACTIONS(49),
    [anon_sym_def_cfa] = ACTIONS(49),
    [anon_sym_def_cfa_offset] = ACTIONS(51),
    [anon_sym_adjust_cfa_offset] = ACTIONS(51),
    [anon_sym_llvm_def_aspace_cfa] = ACTIONS(53),
    [anon_sym_register] = ACTIONS(55),
    [anon_sym_escape] = ACTIONS(57),
    [anon_sym_remember_state] = ACTIONS(59),
    [anon_sym_restore_state] = ACTIONS(59),
    [anon_sym_window_save] = ACTIONS(59),
    [anon_sym_negate_ra_sign_state] = ACTIONS(59),
    [anon_sym_intpred] = ACTIONS(61),
    [anon_sym_floatpred] = ACTIONS(63),
    [anon_sym_shufflemask] = ACTIONS(65),
    [anon_sym_undef] = ACTIONS(67),
    [anon_sym_liveout] = ACTIONS(69),
    [anon_sym_target_DASHindex] = ACTIONS(71),
    [anon_sym_blockaddress] = ACTIONS(73),
    [anon_sym_intrinsic] = ACTIONS(75),
    [anon_sym_implicit] = ACTIONS(67),
    [anon_sym_implicit_DASHdef] = ACTIONS(67),
    [anon_sym_def] = ACTIONS(67),
    [anon_sym_dead] = ACTIONS(67),
    [anon_sym_killed] = ACTIONS(67),
    [anon_sym_internal] = ACTIONS(67),
    [anon_sym_early_DASHclobber] = ACTIONS(67),
    [anon_sym_debug_DASHuse] = ACTIONS(67),
    [anon_sym_renamable] = ACTIONS(67),
    [anon_sym_half] = ACTIONS(77),
    [anon_sym_float] = ACTIONS(77),
    [anon_sym_double] = ACTIONS(77),
    [anon_sym_x86_fp80] = ACTIONS(77),
    [anon_sym_fp128] = ACTIONS(77),
    [anon_sym_ppc_fp128] = ACTIONS(77),
  },
  [13] = {
    [sym_multiline_comment] = STATE(13),
    [sym_mc_symbol] = STATE(138),
    [sym_metadata] = STATE(138),
    [sym_register_operand] = STATE(138),
    [sym_argument] = STATE(201),
    [sym_machine_operand] = STATE(190),
    [sym_custom_regmask] = STATE(138),
    [sym_cfi_operand] = STATE(138),
    [sym_immediate] = STATE(138),
    [sym_predicate] = STATE(138),
    [sym_shuffle_mask] = STATE(138),
    [sym_liveout] = STATE(138),
    [sym_target_index] = STATE(138),
    [sym_block_address] = STATE(138),
    [sym_intrinsic] = STATE(138),
    [sym_register_flag] = STATE(113),
    [sym_float_keyword] = STATE(352),
    [aux_sym_register_operand_repeat1] = STATE(90),
    [sym__newline] = ACTIONS(133),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [sym_identifier] = ACTIONS(19),
    [sym_mnemonic] = ACTIONS(19),
    [sym_bb_ref] = ACTIONS(21),
    [sym_stack_object] = ACTIONS(21),
    [sym_constant_pool_index] = ACTIONS(21),
    [sym_jump_table_index] = ACTIONS(21),
    [sym_number] = ACTIONS(19),
    [sym_var] = ACTIONS(23),
    [sym_physical_register] = ACTIONS(25),
    [sym_immediate_type] = ACTIONS(27),
    [sym_external_symbol] = ACTIONS(21),
    [sym_global_var] = ACTIONS(21),
    [sym_metadata_ref] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(133),
    [anon_sym_pre_DASHinstr_DASHsymbol] = ACTIONS(105),
    [anon_sym_post_DASHinstr_DASHsymbol] = ACTIONS(105),
    [anon_sym_heap_DASHalloc_DASHmarker] = ACTIONS(107),
    [anon_sym_debug_DASHinstr_DASHnumber] = ACTIONS(109),
    [anon_sym_debug_DASHlocation] = ACTIONS(107),
    [anon_sym_COLON_COLON] = ACTIONS(135),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym__] = ACTIONS(41),
    [anon_sym_target_DASHflags] = ACTIONS(43),
    [anon_sym_CustomRegMask] = ACTIONS(45),
    [anon_sym_same_value] = ACTIONS(47),
    [anon_sym_def_cfa_register] = ACTIONS(47),
    [anon_sym_restore] = ACTIONS(47),
    [anon_sym_undefined] = ACTIONS(47),
    [anon_sym_offset] = ACTIONS(49),
    [anon_sym_rel_offset] = ACTIONS(49),
    [anon_sym_def_cfa] = ACTIONS(49),
    [anon_sym_def_cfa_offset] = ACTIONS(51),
    [anon_sym_adjust_cfa_offset] = ACTIONS(51),
    [anon_sym_llvm_def_aspace_cfa] = ACTIONS(53),
    [anon_sym_register] = ACTIONS(55),
    [anon_sym_escape] = ACTIONS(57),
    [anon_sym_remember_state] = ACTIONS(59),
    [anon_sym_restore_state] = ACTIONS(59),
    [anon_sym_window_save] = ACTIONS(59),
    [anon_sym_negate_ra_sign_state] = ACTIONS(59),
    [anon_sym_intpred] = ACTIONS(61),
    [anon_sym_floatpred] = ACTIONS(63),
    [anon_sym_shufflemask] = ACTIONS(65),
    [anon_sym_undef] = ACTIONS(67),
    [anon_sym_liveout] = ACTIONS(69),
    [anon_sym_target_DASHindex] = ACTIONS(71),
    [anon_sym_blockaddress] = ACTIONS(73),
    [anon_sym_intrinsic] = ACTIONS(75),
    [anon_sym_implicit] = ACTIONS(67),
    [anon_sym_implicit_DASHdef] = ACTIONS(67),
    [anon_sym_def] = ACTIONS(67),
    [anon_sym_dead] = ACTIONS(67),
    [anon_sym_killed] = ACTIONS(67),
    [anon_sym_internal] = ACTIONS(67),
    [anon_sym_early_DASHclobber] = ACTIONS(67),
    [anon_sym_debug_DASHuse] = ACTIONS(67),
    [anon_sym_renamable] = ACTIONS(67),
    [anon_sym_half] = ACTIONS(77),
    [anon_sym_float] = ACTIONS(77),
    [anon_sym_double] = ACTIONS(77),
    [anon_sym_x86_fp80] = ACTIONS(77),
    [anon_sym_fp128] = ACTIONS(77),
    [anon_sym_ppc_fp128] = ACTIONS(77),
  },
  [14] = {
    [sym_multiline_comment] = STATE(14),
    [sym_mc_symbol] = STATE(138),
    [sym_metadata] = STATE(138),
    [sym_register_operand] = STATE(138),
    [sym_argument] = STATE(201),
    [sym_machine_operand] = STATE(190),
    [sym_custom_regmask] = STATE(138),
    [sym_cfi_operand] = STATE(138),
    [sym_immediate] = STATE(138),
    [sym_predicate] = STATE(138),
    [sym_shuffle_mask] = STATE(138),
    [sym_liveout] = STATE(138),
    [sym_target_index] = STATE(138),
    [sym_block_address] = STATE(138),
    [sym_intrinsic] = STATE(138),
    [sym_register_flag] = STATE(113),
    [sym_float_keyword] = STATE(352),
    [aux_sym_register_operand_repeat1] = STATE(90),
    [sym__newline] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [sym_identifier] = ACTIONS(19),
    [sym_mnemonic] = ACTIONS(19),
    [sym_bb_ref] = ACTIONS(21),
    [sym_stack_object] = ACTIONS(21),
    [sym_constant_pool_index] = ACTIONS(21),
    [sym_jump_table_index] = ACTIONS(21),
    [sym_number] = ACTIONS(19),
    [sym_var] = ACTIONS(23),
    [sym_physical_register] = ACTIONS(25),
    [sym_immediate_type] = ACTIONS(27),
    [sym_external_symbol] = ACTIONS(21),
    [sym_global_var] = ACTIONS(21),
    [sym_metadata_ref] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(137),
    [anon_sym_pre_DASHinstr_DASHsymbol] = ACTIONS(105),
    [anon_sym_post_DASHinstr_DASHsymbol] = ACTIONS(105),
    [anon_sym_heap_DASHalloc_DASHmarker] = ACTIONS(107),
    [anon_sym_debug_DASHinstr_DASHnumber] = ACTIONS(109),
    [anon_sym_debug_DASHlocation] = ACTIONS(107),
    [anon_sym_COLON_COLON] = ACTIONS(139),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym__] = ACTIONS(41),
    [anon_sym_target_DASHflags] = ACTIONS(43),
    [anon_sym_CustomRegMask] = ACTIONS(45),
    [anon_sym_same_value] = ACTIONS(47),
    [anon_sym_def_cfa_register] = ACTIONS(47),
    [anon_sym_restore] = ACTIONS(47),
    [anon_sym_undefined] = ACTIONS(47),
    [anon_sym_offset] = ACTIONS(49),
    [anon_sym_rel_offset] = ACTIONS(49),
    [anon_sym_def_cfa] = ACTIONS(49),
    [anon_sym_def_cfa_offset] = ACTIONS(51),
    [anon_sym_adjust_cfa_offset] = ACTIONS(51),
    [anon_sym_llvm_def_aspace_cfa] = ACTIONS(53),
    [anon_sym_register] = ACTIONS(55),
    [anon_sym_escape] = ACTIONS(57),
    [anon_sym_remember_state] = ACTIONS(59),
    [anon_sym_restore_state] = ACTIONS(59),
    [anon_sym_window_save] = ACTIONS(59),
    [anon_sym_negate_ra_sign_state] = ACTIONS(59),
    [anon_sym_intpred] = ACTIONS(61),
    [anon_sym_floatpred] = ACTIONS(63),
    [anon_sym_shufflemask] = ACTIONS(65),
    [anon_sym_undef] = ACTIONS(67),
    [anon_sym_liveout] = ACTIONS(69),
    [anon_sym_target_DASHindex] = ACTIONS(71),
    [anon_sym_blockaddress] = ACTIONS(73),
    [anon_sym_intrinsic] = ACTIONS(75),
    [anon_sym_implicit] = ACTIONS(67),
    [anon_sym_implicit_DASHdef] = ACTIONS(67),
    [anon_sym_def] = ACTIONS(67),
    [anon_sym_dead] = ACTIONS(67),
    [anon_sym_killed] = ACTIONS(67),
    [anon_sym_internal] = ACTIONS(67),
    [anon_sym_early_DASHclobber] = ACTIONS(67),
    [anon_sym_debug_DASHuse] = ACTIONS(67),
    [anon_sym_renamable] = ACTIONS(67),
    [anon_sym_half] = ACTIONS(77),
    [anon_sym_float] = ACTIONS(77),
    [anon_sym_double] = ACTIONS(77),
    [anon_sym_x86_fp80] = ACTIONS(77),
    [anon_sym_fp128] = ACTIONS(77),
    [anon_sym_ppc_fp128] = ACTIONS(77),
  },
  [15] = {
    [sym_multiline_comment] = STATE(15),
    [sym_mc_symbol] = STATE(138),
    [sym_metadata] = STATE(138),
    [sym_register_operand] = STATE(138),
    [sym_argument] = STATE(201),
    [sym_machine_operand] = STATE(190),
    [sym_custom_regmask] = STATE(138),
    [sym_cfi_operand] = STATE(138),
    [sym_immediate] = STATE(138),
    [sym_predicate] = STATE(138),
    [sym_shuffle_mask] = STATE(138),
    [sym_liveout] = STATE(138),
    [sym_target_index] = STATE(138),
    [sym_block_address] = STATE(138),
    [sym_intrinsic] = STATE(138),
    [sym_register_flag] = STATE(113),
    [sym_float_keyword] = STATE(352),
    [aux_sym_register_operand_repeat1] = STATE(90),
    [sym__newline] = ACTIONS(141),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [sym_identifier] = ACTIONS(19),
    [sym_mnemonic] = ACTIONS(19),
    [sym_bb_ref] = ACTIONS(21),
    [sym_stack_object] = ACTIONS(21),
    [sym_constant_pool_index] = ACTIONS(21),
    [sym_jump_table_index] = ACTIONS(21),
    [sym_number] = ACTIONS(19),
    [sym_var] = ACTIONS(23),
    [sym_physical_register] = ACTIONS(25),
    [sym_immediate_type] = ACTIONS(27),
    [sym_external_symbol] = ACTIONS(21),
    [sym_global_var] = ACTIONS(21),
    [sym_metadata_ref] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(141),
    [anon_sym_pre_DASHinstr_DASHsymbol] = ACTIONS(105),
    [anon_sym_post_DASHinstr_DASHsymbol] = ACTIONS(105),
    [anon_sym_heap_DASHalloc_DASHmarker] = ACTIONS(107),
    [anon_sym_debug_DASHinstr_DASHnumber] = ACTIONS(109),
    [anon_sym_debug_DASHlocation] = ACTIONS(107),
    [anon_sym_COLON_COLON] = ACTIONS(143),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym__] = ACTIONS(41),
    [anon_sym_target_DASHflags] = ACTIONS(43),
    [anon_sym_CustomRegMask] = ACTIONS(45),
    [anon_sym_same_value] = ACTIONS(47),
    [anon_sym_def_cfa_register] = ACTIONS(47),
    [anon_sym_restore] = ACTIONS(47),
    [anon_sym_undefined] = ACTIONS(47),
    [anon_sym_offset] = ACTIONS(49),
    [anon_sym_rel_offset] = ACTIONS(49),
    [anon_sym_def_cfa] = ACTIONS(49),
    [anon_sym_def_cfa_offset] = ACTIONS(51),
    [anon_sym_adjust_cfa_offset] = ACTIONS(51),
    [anon_sym_llvm_def_aspace_cfa] = ACTIONS(53),
    [anon_sym_register] = ACTIONS(55),
    [anon_sym_escape] = ACTIONS(57),
    [anon_sym_remember_state] = ACTIONS(59),
    [anon_sym_restore_state] = ACTIONS(59),
    [anon_sym_window_save] = ACTIONS(59),
    [anon_sym_negate_ra_sign_state] = ACTIONS(59),
    [anon_sym_intpred] = ACTIONS(61),
    [anon_sym_floatpred] = ACTIONS(63),
    [anon_sym_shufflemask] = ACTIONS(65),
    [anon_sym_undef] = ACTIONS(67),
    [anon_sym_liveout] = ACTIONS(69),
    [anon_sym_target_DASHindex] = ACTIONS(71),
    [anon_sym_blockaddress] = ACTIONS(73),
    [anon_sym_intrinsic] = ACTIONS(75),
    [anon_sym_implicit] = ACTIONS(67),
    [anon_sym_implicit_DASHdef] = ACTIONS(67),
    [anon_sym_def] = ACTIONS(67),
    [anon_sym_dead] = ACTIONS(67),
    [anon_sym_killed] = ACTIONS(67),
    [anon_sym_internal] = ACTIONS(67),
    [anon_sym_early_DASHclobber] = ACTIONS(67),
    [anon_sym_debug_DASHuse] = ACTIONS(67),
    [anon_sym_renamable] = ACTIONS(67),
    [anon_sym_half] = ACTIONS(77),
    [anon_sym_float] = ACTIONS(77),
    [anon_sym_double] = ACTIONS(77),
    [anon_sym_x86_fp80] = ACTIONS(77),
    [anon_sym_fp128] = ACTIONS(77),
    [anon_sym_ppc_fp128] = ACTIONS(77),
  },
  [16] = {
    [sym_multiline_comment] = STATE(16),
    [sym_mc_symbol] = STATE(138),
    [sym_metadata] = STATE(138),
    [sym_register_operand] = STATE(138),
    [sym_argument] = STATE(201),
    [sym_machine_operand] = STATE(190),
    [sym_custom_regmask] = STATE(138),
    [sym_cfi_operand] = STATE(138),
    [sym_immediate] = STATE(138),
    [sym_predicate] = STATE(138),
    [sym_shuffle_mask] = STATE(138),
    [sym_liveout] = STATE(138),
    [sym_target_index] = STATE(138),
    [sym_block_address] = STATE(138),
    [sym_intrinsic] = STATE(138),
    [sym_register_flag] = STATE(113),
    [sym_float_keyword] = STATE(352),
    [aux_sym_register_operand_repeat1] = STATE(90),
    [sym__newline] = ACTIONS(145),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [sym_identifier] = ACTIONS(19),
    [sym_mnemonic] = ACTIONS(19),
    [sym_bb_ref] = ACTIONS(21),
    [sym_stack_object] = ACTIONS(21),
    [sym_constant_pool_index] = ACTIONS(21),
    [sym_jump_table_index] = ACTIONS(21),
    [sym_number] = ACTIONS(19),
    [sym_var] = ACTIONS(23),
    [sym_physical_register] = ACTIONS(25),
    [sym_immediate_type] = ACTIONS(27),
    [sym_external_symbol] = ACTIONS(21),
    [sym_global_var] = ACTIONS(21),
    [sym_metadata_ref] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_pre_DASHinstr_DASHsymbol] = ACTIONS(105),
    [anon_sym_post_DASHinstr_DASHsymbol] = ACTIONS(105),
    [anon_sym_heap_DASHalloc_DASHmarker] = ACTIONS(107),
    [anon_sym_debug_DASHinstr_DASHnumber] = ACTIONS(109),
    [anon_sym_debug_DASHlocation] = ACTIONS(107),
    [anon_sym_COLON_COLON] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym__] = ACTIONS(41),
    [anon_sym_target_DASHflags] = ACTIONS(43),
    [anon_sym_CustomRegMask] = ACTIONS(45),
    [anon_sym_same_value] = ACTIONS(47),
    [anon_sym_def_cfa_register] = ACTIONS(47),
    [anon_sym_restore] = ACTIONS(47),
    [anon_sym_undefined] = ACTIONS(47),
    [anon_sym_offset] = ACTIONS(49),
    [anon_sym_rel_offset] = ACTIONS(49),
    [anon_sym_def_cfa] = ACTIONS(49),
    [anon_sym_def_cfa_offset] = ACTIONS(51),
    [anon_sym_adjust_cfa_offset] = ACTIONS(51),
    [anon_sym_llvm_def_aspace_cfa] = ACTIONS(53),
    [anon_sym_register] = ACTIONS(55),
    [anon_sym_escape] = ACTIONS(57),
    [anon_sym_remember_state] = ACTIONS(59),
    [anon_sym_restore_state] = ACTIONS(59),
    [anon_sym_window_save] = ACTIONS(59),
    [anon_sym_negate_ra_sign_state] = ACTIONS(59),
    [anon_sym_intpred] = ACTIONS(61),
    [anon_sym_floatpred] = ACTIONS(63),
    [anon_sym_shufflemask] = ACTIONS(65),
    [anon_sym_undef] = ACTIONS(67),
    [anon_sym_liveout] = ACTIONS(69),
    [anon_sym_target_DASHindex] = ACTIONS(71),
    [anon_sym_blockaddress] = ACTIONS(73),
    [anon_sym_intrinsic] = ACTIONS(75),
    [anon_sym_implicit] = ACTIONS(67),
    [anon_sym_implicit_DASHdef] = ACTIONS(67),
    [anon_sym_def] = ACTIONS(67),
    [anon_sym_dead] = ACTIONS(67),
    [anon_sym_killed] = ACTIONS(67),
    [anon_sym_internal] = ACTIONS(67),
    [anon_sym_early_DASHclobber] = ACTIONS(67),
    [anon_sym_debug_DASHuse] = ACTIONS(67),
    [anon_sym_renamable] = ACTIONS(67),
    [anon_sym_half] = ACTIONS(77),
    [anon_sym_float] = ACTIONS(77),
    [anon_sym_double] = ACTIONS(77),
    [anon_sym_x86_fp80] = ACTIONS(77),
    [anon_sym_fp128] = ACTIONS(77),
    [anon_sym_ppc_fp128] = ACTIONS(77),
  },
  [17] = {
    [sym_multiline_comment] = STATE(17),
    [sym_mc_symbol] = STATE(138),
    [sym_metadata] = STATE(138),
    [sym_register_operand] = STATE(138),
    [sym_argument] = STATE(201),
    [sym_machine_operand] = STATE(190),
    [sym_custom_regmask] = STATE(138),
    [sym_cfi_operand] = STATE(138),
    [sym_immediate] = STATE(138),
    [sym_predicate] = STATE(138),
    [sym_shuffle_mask] = STATE(138),
    [sym_liveout] = STATE(138),
    [sym_target_index] = STATE(138),
    [sym_block_address] = STATE(138),
    [sym_intrinsic] = STATE(138),
    [sym_register_flag] = STATE(113),
    [sym_float_keyword] = STATE(352),
    [aux_sym_register_operand_repeat1] = STATE(90),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [sym_identifier] = ACTIONS(19),
    [sym_mnemonic] = ACTIONS(19),
    [sym_bb_ref] = ACTIONS(21),
    [sym_stack_object] = ACTIONS(21),
    [sym_constant_pool_index] = ACTIONS(21),
    [sym_jump_table_index] = ACTIONS(21),
    [sym_number] = ACTIONS(19),
    [sym_var] = ACTIONS(23),
    [sym_physical_register] = ACTIONS(25),
    [sym_immediate_type] = ACTIONS(27),
    [sym_external_symbol] = ACTIONS(21),
    [sym_global_var] = ACTIONS(21),
    [sym_metadata_ref] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym__] = ACTIONS(41),
    [anon_sym_target_DASHflags] = ACTIONS(43),
    [anon_sym_CustomRegMask] = ACTIONS(45),
    [anon_sym_same_value] = ACTIONS(47),
    [anon_sym_def_cfa_register] = ACTIONS(47),
    [anon_sym_restore] = ACTIONS(47),
    [anon_sym_undefined] = ACTIONS(47),
    [anon_sym_offset] = ACTIONS(49),
    [anon_sym_rel_offset] = ACTIONS(49),
    [anon_sym_def_cfa] = ACTIONS(49),
    [anon_sym_def_cfa_offset] = ACTIONS(51),
    [anon_sym_adjust_cfa_offset] = ACTIONS(51),
    [anon_sym_llvm_def_aspace_cfa] = ACTIONS(53),
    [anon_sym_register] = ACTIONS(55),
    [anon_sym_escape] = ACTIONS(57),
    [anon_sym_remember_state] = ACTIONS(59),
    [anon_sym_restore_state] = ACTIONS(59),
    [anon_sym_window_save] = ACTIONS(59),
    [anon_sym_negate_ra_sign_state] = ACTIONS(59),
    [anon_sym_intpred] = ACTIONS(61),
    [anon_sym_floatpred] = ACTIONS(63),
    [anon_sym_shufflemask] = ACTIONS(65),
    [anon_sym_undef] = ACTIONS(67),
    [anon_sym_liveout] = ACTIONS(69),
    [anon_sym_target_DASHindex] = ACTIONS(71),
    [anon_sym_blockaddress] = ACTIONS(73),
    [anon_sym_intrinsic] = ACTIONS(75),
    [anon_sym_implicit] = ACTIONS(67),
    [anon_sym_implicit_DASHdef] = ACTIONS(67),
    [anon_sym_def] = ACTIONS(67),
    [anon_sym_dead] = ACTIONS(67),
    [anon_sym_killed] = ACTIONS(67),
    [anon_sym_internal] = ACTIONS(67),
    [anon_sym_early_DASHclobber] = ACTIONS(67),
    [anon_sym_debug_DASHuse] = ACTIONS(67),
    [anon_sym_renamable] = ACTIONS(67),
    [anon_sym_half] = ACTIONS(77),
    [anon_sym_float] = ACTIONS(77),
    [anon_sym_double] = ACTIONS(77),
    [anon_sym_x86_fp80] = ACTIONS(77),
    [anon_sym_fp128] = ACTIONS(77),
    [anon_sym_ppc_fp128] = ACTIONS(77),
  },
  [18] = {
    [sym_multiline_comment] = STATE(18),
    [sym_mc_symbol] = STATE(138),
    [sym_metadata] = STATE(138),
    [sym_register_operand] = STATE(138),
    [sym_machine_operand] = STATE(195),
    [sym_custom_regmask] = STATE(138),
    [sym_cfi_operand] = STATE(138),
    [sym_immediate] = STATE(138),
    [sym_predicate] = STATE(138),
    [sym_shuffle_mask] = STATE(138),
    [sym_liveout] = STATE(138),
    [sym_target_index] = STATE(138),
    [sym_block_address] = STATE(138),
    [sym_intrinsic] = STATE(138),
    [sym_register_flag] = STATE(113),
    [sym_float_keyword] = STATE(352),
    [aux_sym_register_operand_repeat1] = STATE(90),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [sym_identifier] = ACTIONS(19),
    [sym_mnemonic] = ACTIONS(19),
    [sym_bb_ref] = ACTIONS(21),
    [sym_stack_object] = ACTIONS(21),
    [sym_constant_pool_index] = ACTIONS(21),
    [sym_jump_table_index] = ACTIONS(21),
    [sym_number] = ACTIONS(19),
    [sym_var] = ACTIONS(23),
    [sym_physical_register] = ACTIONS(25),
    [sym_immediate_type] = ACTIONS(27),
    [sym_external_symbol] = ACTIONS(21),
    [sym_global_var] = ACTIONS(21),
    [sym_metadata_ref] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym__] = ACTIONS(41),
    [anon_sym_CustomRegMask] = ACTIONS(45),
    [anon_sym_same_value] = ACTIONS(47),
    [anon_sym_def_cfa_register] = ACTIONS(47),
    [anon_sym_restore] = ACTIONS(47),
    [anon_sym_undefined] = ACTIONS(47),
    [anon_sym_offset] = ACTIONS(49),
    [anon_sym_rel_offset] = ACTIONS(49),
    [anon_sym_def_cfa] = ACTIONS(49),
    [anon_sym_def_cfa_offset] = ACTIONS(51),
    [anon_sym_adjust_cfa_offset] = ACTIONS(51),
    [anon_sym_llvm_def_aspace_cfa] = ACTIONS(53),
    [anon_sym_register] = ACTIONS(55),
    [anon_sym_escape] = ACTIONS(57),
    [anon_sym_remember_state] = ACTIONS(59),
    [anon_sym_restore_state] = ACTIONS(59),
    [anon_sym_window_save] = ACTIONS(59),
    [anon_sym_negate_ra_sign_state] = ACTIONS(59),
    [anon_sym_intpred] = ACTIONS(61),
    [anon_sym_floatpred] = ACTIONS(63),
    [anon_sym_shufflemask] = ACTIONS(65),
    [anon_sym_undef] = ACTIONS(67),
    [anon_sym_liveout] = ACTIONS(69),
    [anon_sym_target_DASHindex] = ACTIONS(71),
    [anon_sym_blockaddress] = ACTIONS(73),
    [anon_sym_intrinsic] = ACTIONS(75),
    [anon_sym_implicit] = ACTIONS(67),
    [anon_sym_implicit_DASHdef] = ACTIONS(67),
    [anon_sym_def] = ACTIONS(67),
    [anon_sym_dead] = ACTIONS(67),
    [anon_sym_killed] = ACTIONS(67),
    [anon_sym_internal] = ACTIONS(67),
    [anon_sym_early_DASHclobber] = ACTIONS(67),
    [anon_sym_debug_DASHuse] = ACTIONS(67),
    [anon_sym_renamable] = ACTIONS(67),
    [anon_sym_half] = ACTIONS(77),
    [anon_sym_float] = ACTIONS(77),
    [anon_sym_double] = ACTIONS(77),
    [anon_sym_x86_fp80] = ACTIONS(77),
    [anon_sym_fp128] = ACTIONS(77),
    [anon_sym_ppc_fp128] = ACTIONS(77),
  },
  [19] = {
    [sym_multiline_comment] = STATE(19),
    [sym_mc_symbol] = STATE(138),
    [sym_metadata] = STATE(138),
    [sym_register_operand] = STATE(138),
    [sym_machine_operand] = STATE(200),
    [sym_custom_regmask] = STATE(138),
    [sym_cfi_operand] = STATE(138),
    [sym_immediate] = STATE(138),
    [sym_predicate] = STATE(138),
    [sym_shuffle_mask] = STATE(138),
    [sym_liveout] = STATE(138),
    [sym_target_index] = STATE(138),
    [sym_block_address] = STATE(138),
    [sym_intrinsic] = STATE(138),
    [sym_register_flag] = STATE(113),
    [sym_float_keyword] = STATE(352),
    [aux_sym_register_operand_repeat1] = STATE(90),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [sym_identifier] = ACTIONS(19),
    [sym_mnemonic] = ACTIONS(19),
    [sym_bb_ref] = ACTIONS(21),
    [sym_stack_object] = ACTIONS(21),
    [sym_constant_pool_index] = ACTIONS(21),
    [sym_jump_table_index] = ACTIONS(21),
    [sym_number] = ACTIONS(19),
    [sym_var] = ACTIONS(23),
    [sym_physical_register] = ACTIONS(25),
    [sym_immediate_type] = ACTIONS(27),
    [sym_external_symbol] = ACTIONS(21),
    [sym_global_var] = ACTIONS(21),
    [sym_metadata_ref] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym__] = ACTIONS(41),
    [anon_sym_CustomRegMask] = ACTIONS(45),
    [anon_sym_same_value] = ACTIONS(47),
    [anon_sym_def_cfa_register] = ACTIONS(47),
    [anon_sym_restore] = ACTIONS(47),
    [anon_sym_undefined] = ACTIONS(47),
    [anon_sym_offset] = ACTIONS(49),
    [anon_sym_rel_offset] = ACTIONS(49),
    [anon_sym_def_cfa] = ACTIONS(49),
    [anon_sym_def_cfa_offset] = ACTIONS(51),
    [anon_sym_adjust_cfa_offset] = ACTIONS(51),
    [anon_sym_llvm_def_aspace_cfa] = ACTIONS(53),
    [anon_sym_register] = ACTIONS(55),
    [anon_sym_escape] = ACTIONS(57),
    [anon_sym_remember_state] = ACTIONS(59),
    [anon_sym_restore_state] = ACTIONS(59),
    [anon_sym_window_save] = ACTIONS(59),
    [anon_sym_negate_ra_sign_state] = ACTIONS(59),
    [anon_sym_intpred] = ACTIONS(61),
    [anon_sym_floatpred] = ACTIONS(63),
    [anon_sym_shufflemask] = ACTIONS(65),
    [anon_sym_undef] = ACTIONS(67),
    [anon_sym_liveout] = ACTIONS(69),
    [anon_sym_target_DASHindex] = ACTIONS(71),
    [anon_sym_blockaddress] = ACTIONS(73),
    [anon_sym_intrinsic] = ACTIONS(75),
    [anon_sym_implicit] = ACTIONS(67),
    [anon_sym_implicit_DASHdef] = ACTIONS(67),
    [anon_sym_def] = ACTIONS(67),
    [anon_sym_dead] = ACTIONS(67),
    [anon_sym_killed] = ACTIONS(67),
    [anon_sym_internal] = ACTIONS(67),
    [anon_sym_early_DASHclobber] = ACTIONS(67),
    [anon_sym_debug_DASHuse] = ACTIONS(67),
    [anon_sym_renamable] = ACTIONS(67),
    [anon_sym_half] = ACTIONS(77),
    [anon_sym_float] = ACTIONS(77),
    [anon_sym_double] = ACTIONS(77),
    [anon_sym_x86_fp80] = ACTIONS(77),
    [anon_sym_fp128] = ACTIONS(77),
    [anon_sym_ppc_fp128] = ACTIONS(77),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(25), 1,
      sym_physical_register,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    ACTIONS(151), 1,
      sym__newline,
    ACTIONS(154), 1,
      sym_identifier,
    ACTIONS(157), 1,
      sym_var,
    ACTIONS(159), 1,
      anon_sym_successors,
    ACTIONS(161), 1,
      anon_sym_liveins,
    STATE(20), 1,
      sym_multiline_comment,
    STATE(29), 1,
      aux_sym_basic_block_repeat3,
    STATE(38), 1,
      aux_sym_basic_block_repeat2,
    STATE(67), 1,
      aux_sym_instruction_repeat2,
    STATE(89), 1,
      aux_sym_register_operand_repeat1,
    STATE(96), 1,
      sym_instruction_flag,
    STATE(113), 1,
      sym_register_flag,
    STATE(464), 1,
      sym_instruction,
    STATE(478), 1,
      sym_register_operand,
    STATE(557), 2,
      sym_successors,
      sym_liveins,
    ACTIONS(67), 10,
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
    ACTIONS(163), 13,
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
  [89] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(25), 1,
      sym_physical_register,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(157), 1,
      sym_var,
    ACTIONS(159), 1,
      anon_sym_successors,
    ACTIONS(161), 1,
      anon_sym_liveins,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    ACTIONS(167), 1,
      sym__newline,
    ACTIONS(170), 1,
      sym_identifier,
    STATE(21), 1,
      sym_multiline_comment,
    STATE(28), 1,
      aux_sym_basic_block_repeat3,
    STATE(38), 1,
      aux_sym_basic_block_repeat2,
    STATE(67), 1,
      aux_sym_instruction_repeat2,
    STATE(89), 1,
      aux_sym_register_operand_repeat1,
    STATE(96), 1,
      sym_instruction_flag,
    STATE(113), 1,
      sym_register_flag,
    STATE(464), 1,
      sym_instruction,
    STATE(478), 1,
      sym_register_operand,
    STATE(557), 2,
      sym_successors,
      sym_liveins,
    ACTIONS(67), 10,
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
    ACTIONS(163), 13,
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
  [178] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(25), 1,
      sym_physical_register,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(157), 1,
      sym_var,
    ACTIONS(159), 1,
      anon_sym_successors,
    ACTIONS(161), 1,
      anon_sym_liveins,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    ACTIONS(175), 1,
      sym__newline,
    ACTIONS(178), 1,
      sym_identifier,
    STATE(21), 1,
      aux_sym_basic_block_repeat2,
    STATE(22), 1,
      sym_multiline_comment,
    STATE(30), 1,
      aux_sym_basic_block_repeat3,
    STATE(67), 1,
      aux_sym_instruction_repeat2,
    STATE(89), 1,
      aux_sym_register_operand_repeat1,
    STATE(96), 1,
      sym_instruction_flag,
    STATE(113), 1,
      sym_register_flag,
    STATE(464), 1,
      sym_instruction,
    STATE(478), 1,
      sym_register_operand,
    STATE(557), 2,
      sym_successors,
      sym_liveins,
    ACTIONS(67), 10,
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
    ACTIONS(163), 13,
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
  [267] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(25), 1,
      sym_physical_register,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(157), 1,
      sym_var,
    ACTIONS(159), 1,
      anon_sym_successors,
    ACTIONS(161), 1,
      anon_sym_liveins,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    ACTIONS(175), 1,
      sym__newline,
    ACTIONS(178), 1,
      sym_identifier,
    STATE(23), 1,
      sym_multiline_comment,
    STATE(30), 1,
      aux_sym_basic_block_repeat3,
    STATE(38), 1,
      aux_sym_basic_block_repeat2,
    STATE(67), 1,
      aux_sym_instruction_repeat2,
    STATE(89), 1,
      aux_sym_register_operand_repeat1,
    STATE(96), 1,
      sym_instruction_flag,
    STATE(113), 1,
      sym_register_flag,
    STATE(464), 1,
      sym_instruction,
    STATE(478), 1,
      sym_register_operand,
    STATE(557), 2,
      sym_successors,
      sym_liveins,
    ACTIONS(67), 10,
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
    ACTIONS(163), 13,
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
  [356] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(25), 1,
      sym_physical_register,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(157), 1,
      sym_var,
    ACTIONS(159), 1,
      anon_sym_successors,
    ACTIONS(161), 1,
      anon_sym_liveins,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    ACTIONS(183), 1,
      sym__newline,
    ACTIONS(186), 1,
      sym_identifier,
    STATE(24), 1,
      sym_multiline_comment,
    STATE(33), 1,
      aux_sym_basic_block_repeat3,
    STATE(38), 1,
      aux_sym_basic_block_repeat2,
    STATE(67), 1,
      aux_sym_instruction_repeat2,
    STATE(89), 1,
      aux_sym_register_operand_repeat1,
    STATE(96), 1,
      sym_instruction_flag,
    STATE(113), 1,
      sym_register_flag,
    STATE(464), 1,
      sym_instruction,
    STATE(478), 1,
      sym_register_operand,
    STATE(557), 2,
      sym_successors,
      sym_liveins,
    ACTIONS(67), 10,
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
    ACTIONS(163), 13,
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
  [445] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(25), 1,
      sym_physical_register,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(157), 1,
      sym_var,
    ACTIONS(159), 1,
      anon_sym_successors,
    ACTIONS(161), 1,
      anon_sym_liveins,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    ACTIONS(191), 1,
      sym__newline,
    ACTIONS(194), 1,
      sym_identifier,
    STATE(24), 1,
      aux_sym_basic_block_repeat2,
    STATE(25), 1,
      sym_multiline_comment,
    STATE(31), 1,
      aux_sym_basic_block_repeat3,
    STATE(67), 1,
      aux_sym_instruction_repeat2,
    STATE(89), 1,
      aux_sym_register_operand_repeat1,
    STATE(96), 1,
      sym_instruction_flag,
    STATE(113), 1,
      sym_register_flag,
    STATE(464), 1,
      sym_instruction,
    STATE(478), 1,
      sym_register_operand,
    STATE(557), 2,
      sym_successors,
      sym_liveins,
    ACTIONS(67), 10,
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
    ACTIONS(163), 13,
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
  [534] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(25), 1,
      sym_physical_register,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(157), 1,
      sym_var,
    ACTIONS(159), 1,
      anon_sym_successors,
    ACTIONS(161), 1,
      anon_sym_liveins,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    ACTIONS(183), 1,
      sym__newline,
    ACTIONS(186), 1,
      sym_identifier,
    STATE(23), 1,
      aux_sym_basic_block_repeat2,
    STATE(26), 1,
      sym_multiline_comment,
    STATE(33), 1,
      aux_sym_basic_block_repeat3,
    STATE(67), 1,
      aux_sym_instruction_repeat2,
    STATE(89), 1,
      aux_sym_register_operand_repeat1,
    STATE(96), 1,
      sym_instruction_flag,
    STATE(113), 1,
      sym_register_flag,
    STATE(464), 1,
      sym_instruction,
    STATE(478), 1,
      sym_register_operand,
    STATE(557), 2,
      sym_successors,
      sym_liveins,
    ACTIONS(67), 10,
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
    ACTIONS(163), 13,
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
  [623] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(25), 1,
      sym_physical_register,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(157), 1,
      sym_var,
    ACTIONS(159), 1,
      anon_sym_successors,
    ACTIONS(161), 1,
      anon_sym_liveins,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    ACTIONS(199), 1,
      sym__newline,
    ACTIONS(202), 1,
      sym_identifier,
    STATE(20), 1,
      aux_sym_basic_block_repeat2,
    STATE(27), 1,
      sym_multiline_comment,
    STATE(35), 1,
      aux_sym_basic_block_repeat3,
    STATE(67), 1,
      aux_sym_instruction_repeat2,
    STATE(89), 1,
      aux_sym_register_operand_repeat1,
    STATE(96), 1,
      sym_instruction_flag,
    STATE(113), 1,
      sym_register_flag,
    STATE(464), 1,
      sym_instruction,
    STATE(478), 1,
      sym_register_operand,
    STATE(557), 2,
      sym_successors,
      sym_liveins,
    ACTIONS(67), 10,
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
    ACTIONS(163), 13,
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
  [712] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(25), 1,
      sym_physical_register,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(157), 1,
      sym_var,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
    ACTIONS(207), 1,
      sym__newline,
    ACTIONS(210), 1,
      sym_identifier,
    STATE(28), 1,
      sym_multiline_comment,
    STATE(36), 1,
      aux_sym_basic_block_repeat3,
    STATE(67), 1,
      aux_sym_instruction_repeat2,
    STATE(89), 1,
      aux_sym_register_operand_repeat1,
    STATE(96), 1,
      sym_instruction_flag,
    STATE(113), 1,
      sym_register_flag,
    STATE(464), 1,
      sym_instruction,
    STATE(478), 1,
      sym_register_operand,
    ACTIONS(67), 10,
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
    ACTIONS(163), 13,
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
  [788] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(25), 1,
      sym_physical_register,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(157), 1,
      sym_var,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    ACTIONS(194), 1,
      sym_identifier,
    ACTIONS(213), 1,
      sym__newline,
    STATE(29), 1,
      sym_multiline_comment,
    STATE(36), 1,
      aux_sym_basic_block_repeat3,
    STATE(67), 1,
      aux_sym_instruction_repeat2,
    STATE(89), 1,
      aux_sym_register_operand_repeat1,
    STATE(96), 1,
      sym_instruction_flag,
    STATE(113), 1,
      sym_register_flag,
    STATE(464), 1,
      sym_instruction,
    STATE(478), 1,
      sym_register_operand,
    ACTIONS(67), 10,
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
    ACTIONS(163), 13,
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
  [864] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(25), 1,
      sym_physical_register,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(157), 1,
      sym_var,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    ACTIONS(170), 1,
      sym_identifier,
    ACTIONS(216), 1,
      sym__newline,
    STATE(30), 1,
      sym_multiline_comment,
    STATE(36), 1,
      aux_sym_basic_block_repeat3,
    STATE(67), 1,
      aux_sym_instruction_repeat2,
    STATE(89), 1,
      aux_sym_register_operand_repeat1,
    STATE(96), 1,
      sym_instruction_flag,
    STATE(113), 1,
      sym_register_flag,
    STATE(464), 1,
      sym_instruction,
    STATE(478), 1,
      sym_register_operand,
    ACTIONS(67), 10,
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
    ACTIONS(163), 13,
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
  [940] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(25), 1,
      sym_physical_register,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(157), 1,
      sym_var,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    ACTIONS(186), 1,
      sym_identifier,
    ACTIONS(219), 1,
      sym__newline,
    STATE(31), 1,
      sym_multiline_comment,
    STATE(36), 1,
      aux_sym_basic_block_repeat3,
    STATE(67), 1,
      aux_sym_instruction_repeat2,
    STATE(89), 1,
      aux_sym_register_operand_repeat1,
    STATE(96), 1,
      sym_instruction_flag,
    STATE(113), 1,
      sym_register_flag,
    STATE(464), 1,
      sym_instruction,
    STATE(478), 1,
      sym_register_operand,
    ACTIONS(67), 10,
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
    ACTIONS(163), 13,
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
  [1016] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(25), 1,
      sym_physical_register,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(157), 1,
      sym_var,
    ACTIONS(222), 1,
      sym__newline,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(226), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      sym_multiline_comment,
    STATE(37), 1,
      aux_sym_bundle_repeat1,
    STATE(67), 1,
      aux_sym_instruction_repeat2,
    STATE(89), 1,
      aux_sym_register_operand_repeat1,
    STATE(96), 1,
      sym_instruction_flag,
    STATE(113), 1,
      sym_register_flag,
    STATE(478), 1,
      sym_register_operand,
    STATE(598), 1,
      sym_instruction,
    ACTIONS(67), 10,
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
    ACTIONS(163), 13,
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
  [1092] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(25), 1,
      sym_physical_register,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(157), 1,
      sym_var,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    ACTIONS(178), 1,
      sym_identifier,
    ACTIONS(228), 1,
      sym__newline,
    STATE(33), 1,
      sym_multiline_comment,
    STATE(36), 1,
      aux_sym_basic_block_repeat3,
    STATE(67), 1,
      aux_sym_instruction_repeat2,
    STATE(89), 1,
      aux_sym_register_operand_repeat1,
    STATE(96), 1,
      sym_instruction_flag,
    STATE(113), 1,
      sym_register_flag,
    STATE(464), 1,
      sym_instruction,
    STATE(478), 1,
      sym_register_operand,
    ACTIONS(67), 10,
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
    ACTIONS(163), 13,
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
  [1168] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(231), 1,
      sym__newline,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(237), 1,
      sym_var,
    ACTIONS(240), 1,
      sym_physical_register,
    ACTIONS(243), 1,
      anon_sym_RBRACE,
    ACTIONS(245), 1,
      anon_sym__,
    STATE(67), 1,
      aux_sym_instruction_repeat2,
    STATE(89), 1,
      aux_sym_register_operand_repeat1,
    STATE(96), 1,
      sym_instruction_flag,
    STATE(113), 1,
      sym_register_flag,
    STATE(478), 1,
      sym_register_operand,
    STATE(598), 1,
      sym_instruction,
    STATE(34), 2,
      sym_multiline_comment,
      aux_sym_bundle_repeat1,
    ACTIONS(248), 10,
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
    ACTIONS(251), 13,
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
  [1242] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(25), 1,
      sym_physical_register,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    ACTIONS(154), 1,
      sym_identifier,
    ACTIONS(157), 1,
      sym_var,
    ACTIONS(254), 1,
      sym__newline,
    STATE(35), 1,
      sym_multiline_comment,
    STATE(36), 1,
      aux_sym_basic_block_repeat3,
    STATE(67), 1,
      aux_sym_instruction_repeat2,
    STATE(89), 1,
      aux_sym_register_operand_repeat1,
    STATE(96), 1,
      sym_instruction_flag,
    STATE(113), 1,
      sym_register_flag,
    STATE(464), 1,
      sym_instruction,
    STATE(478), 1,
      sym_register_operand,
    ACTIONS(67), 10,
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
    ACTIONS(163), 13,
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
  [1318] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(257), 1,
      ts_builtin_sym_end,
    ACTIONS(259), 1,
      sym__newline,
    ACTIONS(262), 1,
      sym_identifier,
    ACTIONS(265), 1,
      sym_var,
    ACTIONS(268), 1,
      sym_physical_register,
    ACTIONS(271), 1,
      anon_sym__,
    STATE(67), 1,
      aux_sym_instruction_repeat2,
    STATE(89), 1,
      aux_sym_register_operand_repeat1,
    STATE(96), 1,
      sym_instruction_flag,
    STATE(113), 1,
      sym_register_flag,
    STATE(464), 1,
      sym_instruction,
    STATE(478), 1,
      sym_register_operand,
    STATE(36), 2,
      sym_multiline_comment,
      aux_sym_basic_block_repeat3,
    ACTIONS(274), 10,
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
    ACTIONS(277), 13,
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
  [1392] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(25), 1,
      sym_physical_register,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(157), 1,
      sym_var,
    ACTIONS(222), 1,
      sym__newline,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(280), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      aux_sym_bundle_repeat1,
    STATE(37), 1,
      sym_multiline_comment,
    STATE(67), 1,
      aux_sym_instruction_repeat2,
    STATE(89), 1,
      aux_sym_register_operand_repeat1,
    STATE(96), 1,
      sym_instruction_flag,
    STATE(113), 1,
      sym_register_flag,
    STATE(478), 1,
      sym_register_operand,
    STATE(598), 1,
      sym_instruction,
    ACTIONS(67), 10,
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
    ACTIONS(163), 13,
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
  [1468] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(284), 1,
      sym__newline,
    ACTIONS(289), 1,
      anon_sym_successors,
    ACTIONS(292), 1,
      anon_sym_liveins,
    STATE(38), 2,
      sym_multiline_comment,
      aux_sym_basic_block_repeat2,
    STATE(557), 2,
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
  [1524] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(39), 1,
      sym_multiline_comment,
    ACTIONS(295), 4,
      ts_builtin_sym_end,
      sym__newline,
      sym_var,
      sym_physical_register,
    ACTIONS(297), 27,
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
  [1569] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(40), 1,
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
  [1614] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(41), 1,
      sym_multiline_comment,
    ACTIONS(297), 2,
      anon_sym_successors,
      anon_sym_liveins,
    ACTIONS(299), 4,
      ts_builtin_sym_end,
      sym__newline,
      sym_var,
      sym_physical_register,
    ACTIONS(302), 25,
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
  [1661] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(42), 1,
      sym_multiline_comment,
    ACTIONS(305), 4,
      ts_builtin_sym_end,
      sym__newline,
      sym_var,
      sym_physical_register,
    ACTIONS(307), 25,
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
  [1704] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(43), 1,
      sym_multiline_comment,
    ACTIONS(243), 4,
      sym__newline,
      sym_var,
      sym_physical_register,
      anon_sym_RBRACE,
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
  [1747] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(44), 1,
      sym_multiline_comment,
    ACTIONS(311), 4,
      sym__newline,
      sym_var,
      sym_physical_register,
      anon_sym_RBRACE,
    ACTIONS(313), 25,
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
  [1790] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(45), 1,
      sym_multiline_comment,
    ACTIONS(257), 4,
      ts_builtin_sym_end,
      sym__newline,
      sym_var,
      sym_physical_register,
    ACTIONS(315), 25,
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
  [1833] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(46), 1,
      sym_multiline_comment,
    ACTIONS(317), 4,
      ts_builtin_sym_end,
      sym__newline,
      sym_var,
      sym_physical_register,
    ACTIONS(319), 25,
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
  [1876] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(321), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      sym_metadata_ref,
    ACTIONS(332), 1,
      anon_sym_LBRACE,
    ACTIONS(335), 1,
      anon_sym_LT,
    ACTIONS(338), 1,
      anon_sym_BANG,
    ACTIONS(344), 1,
      anon_sym_LBRACK,
    STATE(72), 1,
      sym_md_value,
    STATE(87), 1,
      sym_metadata,
    ACTIONS(341), 2,
      anon_sym_null,
      aux_sym_md_value_token1,
    STATE(47), 2,
      sym_multiline_comment,
      aux_sym_metadata_repeat1,
    ACTIONS(324), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_STAR,
    ACTIONS(327), 4,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_GT,
      anon_sym_RBRACK,
  [1927] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      anon_sym_LBRACE,
    ACTIONS(361), 1,
      anon_sym_LT,
    ACTIONS(364), 1,
      anon_sym_LBRACK,
    STATE(80), 1,
      sym__escaped_ir_content,
    ACTIONS(355), 2,
      sym_identifier,
      sym_number,
    STATE(48), 2,
      sym_multiline_comment,
      aux_sym_escaped_ir_value_repeat1,
    ACTIONS(350), 5,
      anon_sym_COMMA,
      sym_immediate_type,
      sym_global_var,
      sym_ir_local_var,
      anon_sym_STAR,
    ACTIONS(353), 5,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_GT,
      anon_sym_RBRACK,
      anon_sym_BQUOTE,
  [1971] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(371), 1,
      anon_sym_LPAREN2,
    STATE(49), 1,
      sym_multiline_comment,
    ACTIONS(367), 4,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_null,
      aux_sym_md_value_token1,
    ACTIONS(369), 12,
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
  [2004] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(50), 1,
      sym_multiline_comment,
    STATE(563), 1,
      sym_floatpred,
    ACTIONS(373), 16,
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
  [2035] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      sym_metadata_ref,
    ACTIONS(381), 1,
      anon_sym_LBRACE,
    ACTIONS(383), 1,
      anon_sym_LT,
    ACTIONS(385), 1,
      anon_sym_BANG,
    ACTIONS(389), 1,
      anon_sym_LBRACK,
    ACTIONS(391), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      aux_sym_metadata_repeat1,
    STATE(51), 1,
      sym_multiline_comment,
    STATE(72), 1,
      sym_md_value,
    STATE(87), 1,
      sym_metadata,
    ACTIONS(387), 2,
      anon_sym_null,
      aux_sym_md_value_token1,
    ACTIONS(377), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_STAR,
  [2085] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      sym_metadata_ref,
    ACTIONS(381), 1,
      anon_sym_LBRACE,
    ACTIONS(383), 1,
      anon_sym_LT,
    ACTIONS(385), 1,
      anon_sym_BANG,
    ACTIONS(389), 1,
      anon_sym_LBRACK,
    ACTIONS(393), 1,
      anon_sym_RBRACK,
    STATE(51), 1,
      aux_sym_metadata_repeat1,
    STATE(52), 1,
      sym_multiline_comment,
    STATE(72), 1,
      sym_md_value,
    STATE(87), 1,
      sym_metadata,
    ACTIONS(387), 2,
      anon_sym_null,
      aux_sym_md_value_token1,
    ACTIONS(377), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_STAR,
  [2135] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      sym_metadata_ref,
    ACTIONS(381), 1,
      anon_sym_LBRACE,
    ACTIONS(383), 1,
      anon_sym_LT,
    ACTIONS(385), 1,
      anon_sym_BANG,
    ACTIONS(389), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_metadata_repeat1,
    STATE(53), 1,
      sym_multiline_comment,
    STATE(72), 1,
      sym_md_value,
    STATE(87), 1,
      sym_metadata,
    ACTIONS(387), 2,
      anon_sym_null,
      aux_sym_md_value_token1,
    ACTIONS(377), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_STAR,
  [2185] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      sym_metadata_ref,
    ACTIONS(381), 1,
      anon_sym_LBRACE,
    ACTIONS(383), 1,
      anon_sym_LT,
    ACTIONS(385), 1,
      anon_sym_BANG,
    ACTIONS(389), 1,
      anon_sym_LBRACK,
    ACTIONS(397), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_metadata_repeat1,
    STATE(54), 1,
      sym_multiline_comment,
    STATE(72), 1,
      sym_md_value,
    STATE(87), 1,
      sym_metadata,
    ACTIONS(387), 2,
      anon_sym_null,
      aux_sym_md_value_token1,
    ACTIONS(377), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_STAR,
  [2235] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      sym_metadata_ref,
    ACTIONS(381), 1,
      anon_sym_LBRACE,
    ACTIONS(383), 1,
      anon_sym_LT,
    ACTIONS(385), 1,
      anon_sym_BANG,
    ACTIONS(389), 1,
      anon_sym_LBRACK,
    ACTIONS(399), 1,
      anon_sym_RPAREN,
    STATE(53), 1,
      aux_sym_metadata_repeat1,
    STATE(55), 1,
      sym_multiline_comment,
    STATE(72), 1,
      sym_md_value,
    STATE(87), 1,
      sym_metadata,
    ACTIONS(387), 2,
      anon_sym_null,
      aux_sym_md_value_token1,
    ACTIONS(377), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_STAR,
  [2285] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(401), 1,
      sym_stack_object,
    ACTIONS(405), 1,
      sym_ir_local_var,
    ACTIONS(407), 1,
      anon_sym_BQUOTE,
    ACTIONS(409), 1,
      anon_sym_call_DASHentry,
    ACTIONS(411), 1,
      anon_sym_custom,
    STATE(56), 1,
      sym_multiline_comment,
    STATE(258), 1,
      sym_machine_pointer_info,
    STATE(401), 1,
      sym_memory_pseudo_source_value_keyword,
    STATE(402), 1,
      sym_escaped_ir_value,
    ACTIONS(403), 2,
      sym_global_var,
      anon_sym_unknown_DASHaddress,
    STATE(399), 2,
      sym_ir_value,
      sym_memory_pseudo_source_value,
    ACTIONS(413), 4,
      anon_sym_constant_DASHpool,
      anon_sym_stack,
      anon_sym_got,
      anon_sym_jump_DASHtable,
  [2333] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(57), 1,
      sym_multiline_comment,
    ACTIONS(417), 2,
      sym_identifier,
      sym_number,
    ACTIONS(415), 14,
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
  [2363] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(58), 1,
      sym_multiline_comment,
    ACTIONS(421), 2,
      sym_identifier,
      sym_number,
    ACTIONS(419), 14,
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
  [2393] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      sym_metadata_ref,
    ACTIONS(381), 1,
      anon_sym_LBRACE,
    ACTIONS(383), 1,
      anon_sym_LT,
    ACTIONS(385), 1,
      anon_sym_BANG,
    ACTIONS(389), 1,
      anon_sym_LBRACK,
    ACTIONS(391), 1,
      anon_sym_GT,
    STATE(47), 1,
      aux_sym_metadata_repeat1,
    STATE(59), 1,
      sym_multiline_comment,
    STATE(72), 1,
      sym_md_value,
    STATE(87), 1,
      sym_metadata,
    ACTIONS(387), 2,
      anon_sym_null,
      aux_sym_md_value_token1,
    ACTIONS(377), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_STAR,
  [2443] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(401), 1,
      sym_stack_object,
    ACTIONS(405), 1,
      sym_ir_local_var,
    ACTIONS(407), 1,
      anon_sym_BQUOTE,
    ACTIONS(409), 1,
      anon_sym_call_DASHentry,
    ACTIONS(411), 1,
      anon_sym_custom,
    STATE(60), 1,
      sym_multiline_comment,
    STATE(278), 1,
      sym_machine_pointer_info,
    STATE(401), 1,
      sym_memory_pseudo_source_value_keyword,
    STATE(402), 1,
      sym_escaped_ir_value,
    ACTIONS(403), 2,
      sym_global_var,
      anon_sym_unknown_DASHaddress,
    STATE(399), 2,
      sym_ir_value,
      sym_memory_pseudo_source_value,
    ACTIONS(413), 4,
      anon_sym_constant_DASHpool,
      anon_sym_stack,
      anon_sym_got,
      anon_sym_jump_DASHtable,
  [2491] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      sym_metadata_ref,
    ACTIONS(381), 1,
      anon_sym_LBRACE,
    ACTIONS(383), 1,
      anon_sym_LT,
    ACTIONS(385), 1,
      anon_sym_BANG,
    ACTIONS(389), 1,
      anon_sym_LBRACK,
    ACTIONS(391), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      aux_sym_metadata_repeat1,
    STATE(61), 1,
      sym_multiline_comment,
    STATE(72), 1,
      sym_md_value,
    STATE(87), 1,
      sym_metadata,
    ACTIONS(387), 2,
      anon_sym_null,
      aux_sym_md_value_token1,
    ACTIONS(377), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_STAR,
  [2541] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(62), 1,
      sym_multiline_comment,
    ACTIONS(425), 3,
      anon_sym_BANG,
      anon_sym_null,
      aux_sym_md_value_token1,
    ACTIONS(423), 13,
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
  [2571] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      sym_metadata_ref,
    ACTIONS(381), 1,
      anon_sym_LBRACE,
    ACTIONS(383), 1,
      anon_sym_LT,
    ACTIONS(385), 1,
      anon_sym_BANG,
    ACTIONS(389), 1,
      anon_sym_LBRACK,
    ACTIONS(391), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_metadata_repeat1,
    STATE(63), 1,
      sym_multiline_comment,
    STATE(72), 1,
      sym_md_value,
    STATE(87), 1,
      sym_metadata,
    ACTIONS(387), 2,
      anon_sym_null,
      aux_sym_md_value_token1,
    ACTIONS(377), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_STAR,
  [2621] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(64), 1,
      sym_multiline_comment,
    ACTIONS(429), 3,
      anon_sym_BANG,
      anon_sym_null,
      aux_sym_md_value_token1,
    ACTIONS(427), 13,
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
  [2651] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(65), 1,
      sym_multiline_comment,
    ACTIONS(433), 2,
      sym_identifier,
      sym_number,
    ACTIONS(431), 14,
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
  [2681] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(66), 1,
      sym_multiline_comment,
    ACTIONS(437), 3,
      anon_sym_BANG,
      anon_sym_null,
      aux_sym_md_value_token1,
    ACTIONS(435), 13,
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
  [2711] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(439), 1,
      sym_identifier,
    STATE(67), 1,
      sym_multiline_comment,
    STATE(68), 1,
      aux_sym_instruction_repeat2,
    STATE(96), 1,
      sym_instruction_flag,
    ACTIONS(163), 13,
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
  [2745] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(441), 1,
      sym_identifier,
    STATE(96), 1,
      sym_instruction_flag,
    STATE(68), 2,
      sym_multiline_comment,
      aux_sym_instruction_repeat2,
    ACTIONS(443), 13,
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
  [2777] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(401), 1,
      sym_stack_object,
    ACTIONS(405), 1,
      sym_ir_local_var,
    ACTIONS(407), 1,
      anon_sym_BQUOTE,
    ACTIONS(409), 1,
      anon_sym_call_DASHentry,
    ACTIONS(411), 1,
      anon_sym_custom,
    STATE(69), 1,
      sym_multiline_comment,
    STATE(274), 1,
      sym_machine_pointer_info,
    STATE(401), 1,
      sym_memory_pseudo_source_value_keyword,
    STATE(402), 1,
      sym_escaped_ir_value,
    ACTIONS(403), 2,
      sym_global_var,
      anon_sym_unknown_DASHaddress,
    STATE(399), 2,
      sym_ir_value,
      sym_memory_pseudo_source_value,
    ACTIONS(413), 4,
      anon_sym_constant_DASHpool,
      anon_sym_stack,
      anon_sym_got,
      anon_sym_jump_DASHtable,
  [2825] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(401), 1,
      sym_stack_object,
    ACTIONS(405), 1,
      sym_ir_local_var,
    ACTIONS(407), 1,
      anon_sym_BQUOTE,
    ACTIONS(409), 1,
      anon_sym_call_DASHentry,
    ACTIONS(411), 1,
      anon_sym_custom,
    STATE(70), 1,
      sym_multiline_comment,
    STATE(284), 1,
      sym_machine_pointer_info,
    STATE(401), 1,
      sym_memory_pseudo_source_value_keyword,
    STATE(402), 1,
      sym_escaped_ir_value,
    ACTIONS(403), 2,
      sym_global_var,
      anon_sym_unknown_DASHaddress,
    STATE(399), 2,
      sym_ir_value,
      sym_memory_pseudo_source_value,
    ACTIONS(413), 4,
      anon_sym_constant_DASHpool,
      anon_sym_stack,
      anon_sym_got,
      anon_sym_jump_DASHtable,
  [2873] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(71), 1,
      sym_multiline_comment,
    ACTIONS(448), 3,
      anon_sym_BANG,
      anon_sym_null,
      aux_sym_md_value_token1,
    ACTIONS(446), 13,
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
  [2903] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(72), 1,
      sym_multiline_comment,
    ACTIONS(452), 3,
      anon_sym_BANG,
      anon_sym_null,
      aux_sym_md_value_token1,
    ACTIONS(450), 13,
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
  [2933] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(454), 1,
      sym_identifier,
    STATE(68), 1,
      aux_sym_instruction_repeat2,
    STATE(73), 1,
      sym_multiline_comment,
    STATE(96), 1,
      sym_instruction_flag,
    ACTIONS(163), 13,
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
  [2967] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(454), 1,
      sym_identifier,
    STATE(74), 1,
      sym_multiline_comment,
    STATE(78), 1,
      aux_sym_instruction_repeat2,
    STATE(96), 1,
      sym_instruction_flag,
    ACTIONS(163), 13,
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
  [3001] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      sym_metadata_ref,
    ACTIONS(381), 1,
      anon_sym_LBRACE,
    ACTIONS(383), 1,
      anon_sym_LT,
    ACTIONS(385), 1,
      anon_sym_BANG,
    ACTIONS(389), 1,
      anon_sym_LBRACK,
    ACTIONS(456), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      aux_sym_metadata_repeat1,
    STATE(72), 1,
      sym_md_value,
    STATE(75), 1,
      sym_multiline_comment,
    STATE(87), 1,
      sym_metadata,
    ACTIONS(387), 2,
      anon_sym_null,
      aux_sym_md_value_token1,
    ACTIONS(377), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_STAR,
  [3051] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(401), 1,
      sym_stack_object,
    ACTIONS(405), 1,
      sym_ir_local_var,
    ACTIONS(407), 1,
      anon_sym_BQUOTE,
    ACTIONS(409), 1,
      anon_sym_call_DASHentry,
    ACTIONS(411), 1,
      anon_sym_custom,
    STATE(76), 1,
      sym_multiline_comment,
    STATE(276), 1,
      sym_machine_pointer_info,
    STATE(401), 1,
      sym_memory_pseudo_source_value_keyword,
    STATE(402), 1,
      sym_escaped_ir_value,
    ACTIONS(403), 2,
      sym_global_var,
      anon_sym_unknown_DASHaddress,
    STATE(399), 2,
      sym_ir_value,
      sym_memory_pseudo_source_value,
    ACTIONS(413), 4,
      anon_sym_constant_DASHpool,
      anon_sym_stack,
      anon_sym_got,
      anon_sym_jump_DASHtable,
  [3099] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(401), 1,
      sym_stack_object,
    ACTIONS(405), 1,
      sym_ir_local_var,
    ACTIONS(407), 1,
      anon_sym_BQUOTE,
    ACTIONS(409), 1,
      anon_sym_call_DASHentry,
    ACTIONS(411), 1,
      anon_sym_custom,
    STATE(77), 1,
      sym_multiline_comment,
    STATE(271), 1,
      sym_machine_pointer_info,
    STATE(401), 1,
      sym_memory_pseudo_source_value_keyword,
    STATE(402), 1,
      sym_escaped_ir_value,
    ACTIONS(403), 2,
      sym_global_var,
      anon_sym_unknown_DASHaddress,
    STATE(399), 2,
      sym_ir_value,
      sym_memory_pseudo_source_value,
    ACTIONS(413), 4,
      anon_sym_constant_DASHpool,
      anon_sym_stack,
      anon_sym_got,
      anon_sym_jump_DASHtable,
  [3147] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(458), 1,
      sym_identifier,
    STATE(68), 1,
      aux_sym_instruction_repeat2,
    STATE(78), 1,
      sym_multiline_comment,
    STATE(96), 1,
      sym_instruction_flag,
    ACTIONS(163), 13,
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
  [3181] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      sym_metadata_ref,
    ACTIONS(381), 1,
      anon_sym_LBRACE,
    ACTIONS(383), 1,
      anon_sym_LT,
    ACTIONS(385), 1,
      anon_sym_BANG,
    ACTIONS(389), 1,
      anon_sym_LBRACK,
    ACTIONS(393), 1,
      anon_sym_GT,
    STATE(59), 1,
      aux_sym_metadata_repeat1,
    STATE(72), 1,
      sym_md_value,
    STATE(79), 1,
      sym_multiline_comment,
    STATE(87), 1,
      sym_metadata,
    ACTIONS(387), 2,
      anon_sym_null,
      aux_sym_md_value_token1,
    ACTIONS(377), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_STAR,
  [3231] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(80), 1,
      sym_multiline_comment,
    ACTIONS(462), 2,
      sym_identifier,
      sym_number,
    ACTIONS(460), 14,
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
  [3261] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(401), 1,
      sym_stack_object,
    ACTIONS(405), 1,
      sym_ir_local_var,
    ACTIONS(407), 1,
      anon_sym_BQUOTE,
    ACTIONS(409), 1,
      anon_sym_call_DASHentry,
    ACTIONS(411), 1,
      anon_sym_custom,
    STATE(81), 1,
      sym_multiline_comment,
    STATE(249), 1,
      sym_machine_pointer_info,
    STATE(401), 1,
      sym_memory_pseudo_source_value_keyword,
    STATE(402), 1,
      sym_escaped_ir_value,
    ACTIONS(403), 2,
      sym_global_var,
      anon_sym_unknown_DASHaddress,
    STATE(399), 2,
      sym_ir_value,
      sym_memory_pseudo_source_value,
    ACTIONS(413), 4,
      anon_sym_constant_DASHpool,
      anon_sym_stack,
      anon_sym_got,
      anon_sym_jump_DASHtable,
  [3309] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      sym_metadata_ref,
    ACTIONS(381), 1,
      anon_sym_LBRACE,
    ACTIONS(383), 1,
      anon_sym_LT,
    ACTIONS(385), 1,
      anon_sym_BANG,
    ACTIONS(389), 1,
      anon_sym_LBRACK,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      aux_sym_metadata_repeat1,
    STATE(72), 1,
      sym_md_value,
    STATE(82), 1,
      sym_multiline_comment,
    STATE(87), 1,
      sym_metadata,
    ACTIONS(387), 2,
      anon_sym_null,
      aux_sym_md_value_token1,
    ACTIONS(377), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_STAR,
  [3359] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(401), 1,
      sym_stack_object,
    ACTIONS(405), 1,
      sym_ir_local_var,
    ACTIONS(407), 1,
      anon_sym_BQUOTE,
    ACTIONS(409), 1,
      anon_sym_call_DASHentry,
    ACTIONS(411), 1,
      anon_sym_custom,
    STATE(83), 1,
      sym_multiline_comment,
    STATE(279), 1,
      sym_machine_pointer_info,
    STATE(401), 1,
      sym_memory_pseudo_source_value_keyword,
    STATE(402), 1,
      sym_escaped_ir_value,
    ACTIONS(403), 2,
      sym_global_var,
      anon_sym_unknown_DASHaddress,
    STATE(399), 2,
      sym_ir_value,
      sym_memory_pseudo_source_value,
    ACTIONS(413), 4,
      anon_sym_constant_DASHpool,
      anon_sym_stack,
      anon_sym_got,
      anon_sym_jump_DASHtable,
  [3407] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      sym_metadata_ref,
    ACTIONS(381), 1,
      anon_sym_LBRACE,
    ACTIONS(383), 1,
      anon_sym_LT,
    ACTIONS(385), 1,
      anon_sym_BANG,
    ACTIONS(389), 1,
      anon_sym_LBRACK,
    ACTIONS(393), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      aux_sym_metadata_repeat1,
    STATE(72), 1,
      sym_md_value,
    STATE(84), 1,
      sym_multiline_comment,
    STATE(87), 1,
      sym_metadata,
    ACTIONS(387), 2,
      anon_sym_null,
      aux_sym_md_value_token1,
    ACTIONS(377), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_STAR,
  [3457] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(25), 1,
      sym_physical_register,
    ACTIONS(67), 1,
      anon_sym_implicit,
    ACTIONS(157), 1,
      sym_var,
    ACTIONS(464), 1,
      anon_sym__,
    STATE(85), 1,
      sym_multiline_comment,
    STATE(89), 1,
      aux_sym_register_operand_repeat1,
    STATE(113), 1,
      sym_register_flag,
    STATE(506), 1,
      sym_register_operand,
    ACTIONS(466), 9,
      anon_sym_undef,
      anon_sym_implicit_DASHdef,
      anon_sym_def,
      anon_sym_dead,
      anon_sym_killed,
      anon_sym_internal,
      anon_sym_early_DASHclobber,
      anon_sym_debug_DASHuse,
      anon_sym_renamable,
  [3499] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(468), 1,
      sym_identifier,
    STATE(73), 1,
      aux_sym_instruction_repeat2,
    STATE(86), 1,
      sym_multiline_comment,
    STATE(96), 1,
      sym_instruction_flag,
    ACTIONS(163), 13,
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
  [3533] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(87), 1,
      sym_multiline_comment,
    ACTIONS(472), 3,
      anon_sym_BANG,
      anon_sym_null,
      aux_sym_md_value_token1,
    ACTIONS(470), 13,
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
  [3563] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(479), 1,
      anon_sym_implicit,
    STATE(113), 1,
      sym_register_flag,
    STATE(88), 2,
      sym_multiline_comment,
      aux_sym_register_operand_repeat1,
    ACTIONS(474), 3,
      sym_var,
      sym_physical_register,
      anon_sym__,
    ACTIONS(476), 9,
      anon_sym_undef,
      anon_sym_implicit_DASHdef,
      anon_sym_def,
      anon_sym_dead,
      anon_sym_killed,
      anon_sym_internal,
      anon_sym_early_DASHclobber,
      anon_sym_debug_DASHuse,
      anon_sym_renamable,
  [3596] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(67), 1,
      anon_sym_implicit,
    ACTIONS(482), 1,
      sym_var,
    ACTIONS(484), 1,
      sym_physical_register,
    ACTIONS(486), 1,
      anon_sym__,
    STATE(88), 1,
      aux_sym_register_operand_repeat1,
    STATE(89), 1,
      sym_multiline_comment,
    STATE(113), 1,
      sym_register_flag,
    ACTIONS(466), 9,
      anon_sym_undef,
      anon_sym_implicit_DASHdef,
      anon_sym_def,
      anon_sym_dead,
      anon_sym_killed,
      anon_sym_internal,
      anon_sym_early_DASHclobber,
      anon_sym_debug_DASHuse,
      anon_sym_renamable,
  [3635] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(67), 1,
      anon_sym_implicit,
    ACTIONS(484), 1,
      sym_physical_register,
    ACTIONS(486), 1,
      anon_sym__,
    ACTIONS(488), 1,
      sym_var,
    STATE(88), 1,
      aux_sym_register_operand_repeat1,
    STATE(90), 1,
      sym_multiline_comment,
    STATE(113), 1,
      sym_register_flag,
    ACTIONS(466), 9,
      anon_sym_undef,
      anon_sym_implicit_DASHdef,
      anon_sym_def,
      anon_sym_dead,
      anon_sym_killed,
      anon_sym_internal,
      anon_sym_early_DASHclobber,
      anon_sym_debug_DASHuse,
      anon_sym_renamable,
  [3674] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(490), 1,
      anon_sym_LPAREN,
    ACTIONS(496), 1,
      anon_sym_LBRACE,
    ACTIONS(498), 1,
      anon_sym_LT,
    ACTIONS(500), 1,
      anon_sym_GT,
    ACTIONS(502), 1,
      anon_sym_LBRACK,
    STATE(80), 1,
      sym__escaped_ir_content,
    STATE(91), 1,
      sym_multiline_comment,
    STATE(103), 1,
      aux_sym_escaped_ir_value_repeat1,
    ACTIONS(494), 2,
      sym_identifier,
      sym_number,
    ACTIONS(492), 5,
      anon_sym_COMMA,
      sym_immediate_type,
      sym_global_var,
      sym_ir_local_var,
      anon_sym_STAR,
  [3716] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(490), 1,
      anon_sym_LPAREN,
    ACTIONS(496), 1,
      anon_sym_LBRACE,
    ACTIONS(498), 1,
      anon_sym_LT,
    ACTIONS(500), 1,
      anon_sym_RBRACK,
    ACTIONS(502), 1,
      anon_sym_LBRACK,
    STATE(80), 1,
      sym__escaped_ir_content,
    STATE(92), 1,
      sym_multiline_comment,
    STATE(104), 1,
      aux_sym_escaped_ir_value_repeat1,
    ACTIONS(494), 2,
      sym_identifier,
      sym_number,
    ACTIONS(492), 5,
      anon_sym_COMMA,
      sym_immediate_type,
      sym_global_var,
      sym_ir_local_var,
      anon_sym_STAR,
  [3758] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(490), 1,
      anon_sym_LPAREN,
    ACTIONS(496), 1,
      anon_sym_LBRACE,
    ACTIONS(498), 1,
      anon_sym_LT,
    ACTIONS(502), 1,
      anon_sym_LBRACK,
    ACTIONS(504), 1,
      anon_sym_BQUOTE,
    STATE(48), 1,
      aux_sym_escaped_ir_value_repeat1,
    STATE(80), 1,
      sym__escaped_ir_content,
    STATE(93), 1,
      sym_multiline_comment,
    ACTIONS(494), 2,
      sym_identifier,
      sym_number,
    ACTIONS(492), 5,
      anon_sym_COMMA,
      sym_immediate_type,
      sym_global_var,
      sym_ir_local_var,
      anon_sym_STAR,
  [3800] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    ACTIONS(510), 1,
      anon_sym_DOT,
    STATE(94), 1,
      sym_multiline_comment,
    ACTIONS(508), 12,
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
  [3830] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(95), 1,
      sym_multiline_comment,
    ACTIONS(512), 14,
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
  [3856] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(96), 1,
      sym_multiline_comment,
    ACTIONS(514), 14,
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
  [3882] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(490), 1,
      anon_sym_LPAREN,
    ACTIONS(496), 1,
      anon_sym_LBRACE,
    ACTIONS(498), 1,
      anon_sym_LT,
    ACTIONS(500), 1,
      anon_sym_RBRACE,
    ACTIONS(502), 1,
      anon_sym_LBRACK,
    STATE(80), 1,
      sym__escaped_ir_content,
    STATE(97), 1,
      sym_multiline_comment,
    STATE(102), 1,
      aux_sym_escaped_ir_value_repeat1,
    ACTIONS(494), 2,
      sym_identifier,
      sym_number,
    ACTIONS(492), 5,
      anon_sym_COMMA,
      sym_immediate_type,
      sym_global_var,
      sym_ir_local_var,
      anon_sym_STAR,
  [3924] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(516), 1,
      anon_sym_LPAREN,
    ACTIONS(520), 1,
      anon_sym_DOT,
    STATE(98), 1,
      sym_multiline_comment,
    ACTIONS(518), 12,
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
  [3954] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(490), 1,
      anon_sym_LPAREN,
    ACTIONS(496), 1,
      anon_sym_LBRACE,
    ACTIONS(498), 1,
      anon_sym_LT,
    ACTIONS(502), 1,
      anon_sym_LBRACK,
    ACTIONS(522), 1,
      anon_sym_BQUOTE,
    STATE(80), 1,
      sym__escaped_ir_content,
    STATE(93), 1,
      aux_sym_escaped_ir_value_repeat1,
    STATE(99), 1,
      sym_multiline_comment,
    ACTIONS(494), 2,
      sym_identifier,
      sym_number,
    ACTIONS(492), 5,
      anon_sym_COMMA,
      sym_immediate_type,
      sym_global_var,
      sym_ir_local_var,
      anon_sym_STAR,
  [3996] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(490), 1,
      anon_sym_LPAREN,
    ACTIONS(496), 1,
      anon_sym_LBRACE,
    ACTIONS(498), 1,
      anon_sym_LT,
    ACTIONS(502), 1,
      anon_sym_LBRACK,
    ACTIONS(524), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      aux_sym_escaped_ir_value_repeat1,
    STATE(80), 1,
      sym__escaped_ir_content,
    STATE(100), 1,
      sym_multiline_comment,
    ACTIONS(494), 2,
      sym_identifier,
      sym_number,
    ACTIONS(492), 5,
      anon_sym_COMMA,
      sym_immediate_type,
      sym_global_var,
      sym_ir_local_var,
      anon_sym_STAR,
  [4038] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(490), 1,
      anon_sym_LPAREN,
    ACTIONS(496), 1,
      anon_sym_LBRACE,
    ACTIONS(498), 1,
      anon_sym_LT,
    ACTIONS(500), 1,
      anon_sym_RPAREN,
    ACTIONS(502), 1,
      anon_sym_LBRACK,
    STATE(80), 1,
      sym__escaped_ir_content,
    STATE(100), 1,
      aux_sym_escaped_ir_value_repeat1,
    STATE(101), 1,
      sym_multiline_comment,
    ACTIONS(494), 2,
      sym_identifier,
      sym_number,
    ACTIONS(492), 5,
      anon_sym_COMMA,
      sym_immediate_type,
      sym_global_var,
      sym_ir_local_var,
      anon_sym_STAR,
  [4080] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(490), 1,
      anon_sym_LPAREN,
    ACTIONS(496), 1,
      anon_sym_LBRACE,
    ACTIONS(498), 1,
      anon_sym_LT,
    ACTIONS(502), 1,
      anon_sym_LBRACK,
    ACTIONS(524), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      aux_sym_escaped_ir_value_repeat1,
    STATE(80), 1,
      sym__escaped_ir_content,
    STATE(102), 1,
      sym_multiline_comment,
    ACTIONS(494), 2,
      sym_identifier,
      sym_number,
    ACTIONS(492), 5,
      anon_sym_COMMA,
      sym_immediate_type,
      sym_global_var,
      sym_ir_local_var,
      anon_sym_STAR,
  [4122] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(490), 1,
      anon_sym_LPAREN,
    ACTIONS(496), 1,
      anon_sym_LBRACE,
    ACTIONS(498), 1,
      anon_sym_LT,
    ACTIONS(502), 1,
      anon_sym_LBRACK,
    ACTIONS(524), 1,
      anon_sym_GT,
    STATE(48), 1,
      aux_sym_escaped_ir_value_repeat1,
    STATE(80), 1,
      sym__escaped_ir_content,
    STATE(103), 1,
      sym_multiline_comment,
    ACTIONS(494), 2,
      sym_identifier,
      sym_number,
    ACTIONS(492), 5,
      anon_sym_COMMA,
      sym_immediate_type,
      sym_global_var,
      sym_ir_local_var,
      anon_sym_STAR,
  [4164] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(490), 1,
      anon_sym_LPAREN,
    ACTIONS(496), 1,
      anon_sym_LBRACE,
    ACTIONS(498), 1,
      anon_sym_LT,
    ACTIONS(502), 1,
      anon_sym_LBRACK,
    ACTIONS(524), 1,
      anon_sym_RBRACK,
    STATE(48), 1,
      aux_sym_escaped_ir_value_repeat1,
    STATE(80), 1,
      sym__escaped_ir_content,
    STATE(104), 1,
      sym_multiline_comment,
    ACTIONS(494), 2,
      sym_identifier,
      sym_number,
    ACTIONS(492), 5,
      anon_sym_COMMA,
      sym_immediate_type,
      sym_global_var,
      sym_ir_local_var,
      anon_sym_STAR,
  [4206] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      anon_sym_store,
    ACTIONS(532), 1,
      anon_sym_syncscope,
    STATE(105), 1,
      sym_multiline_comment,
    STATE(183), 1,
      sym_sync_scope,
    STATE(184), 1,
      sym_atomic_ordering,
    ACTIONS(528), 2,
      sym_number,
      anon_sym_unknown_DASHsize,
    ACTIONS(534), 6,
      anon_sym_unordered,
      anon_sym_monotonic,
      anon_sym_acquire,
      anon_sym_release,
      anon_sym_acq_rel,
      anon_sym_seq_cst,
  [4243] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(536), 1,
      anon_sym_LPAREN,
    STATE(106), 1,
      sym_multiline_comment,
    ACTIONS(538), 12,
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
  [4270] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(516), 1,
      anon_sym_LPAREN,
    STATE(107), 1,
      sym_multiline_comment,
    ACTIONS(518), 12,
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
  [4297] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(532), 1,
      anon_sym_syncscope,
    ACTIONS(540), 1,
      anon_sym_LPAREN,
    ACTIONS(544), 1,
      anon_sym_store,
    STATE(108), 1,
      sym_multiline_comment,
    STATE(185), 1,
      sym_atomic_ordering,
    STATE(186), 1,
      sym_sync_scope,
    ACTIONS(542), 2,
      sym_number,
      anon_sym_unknown_DASHsize,
    ACTIONS(534), 6,
      anon_sym_unordered,
      anon_sym_monotonic,
      anon_sym_acquire,
      anon_sym_release,
      anon_sym_acq_rel,
      anon_sym_seq_cst,
  [4334] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(516), 1,
      anon_sym_LPAREN,
    ACTIONS(546), 1,
      anon_sym_COLON,
    STATE(109), 1,
      sym_multiline_comment,
    ACTIONS(518), 11,
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
  [4363] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    ACTIONS(548), 1,
      anon_sym_COLON,
    STATE(110), 1,
      sym_multiline_comment,
    ACTIONS(508), 11,
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
  [4392] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    STATE(111), 1,
      sym_multiline_comment,
    ACTIONS(508), 12,
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
  [4419] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(552), 1,
      anon_sym_implicit,
    STATE(112), 1,
      sym_multiline_comment,
    ACTIONS(550), 12,
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
  [4446] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(556), 1,
      anon_sym_implicit,
    STATE(113), 1,
      sym_multiline_comment,
    ACTIONS(554), 12,
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
  [4473] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(558), 1,
      anon_sym_LPAREN2,
    STATE(114), 1,
      sym_multiline_comment,
    ACTIONS(369), 12,
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
  [4500] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(115), 1,
      sym_multiline_comment,
    ACTIONS(560), 13,
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
  [4525] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    STATE(116), 1,
      sym_multiline_comment,
    ACTIONS(564), 12,
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
  [4552] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(117), 1,
      sym_multiline_comment,
    ACTIONS(566), 13,
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
  [4577] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(568), 1,
      anon_sym_COMMA,
    STATE(118), 1,
      sym_multiline_comment,
    STATE(136), 1,
      aux_sym_cfi_operand_repeat1,
    ACTIONS(571), 10,
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
  [4605] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(532), 1,
      anon_sym_syncscope,
    STATE(119), 1,
      sym_multiline_comment,
    STATE(183), 1,
      sym_sync_scope,
    STATE(184), 1,
      sym_atomic_ordering,
    ACTIONS(528), 2,
      sym_number,
      anon_sym_unknown_DASHsize,
    ACTIONS(534), 6,
      anon_sym_unordered,
      anon_sym_monotonic,
      anon_sym_acquire,
      anon_sym_release,
      anon_sym_acq_rel,
      anon_sym_seq_cst,
  [4639] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(120), 1,
      sym_multiline_comment,
    ACTIONS(573), 12,
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
  [4663] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(131), 1,
      anon_sym_COLON_COLON,
    ACTIONS(575), 1,
      anon_sym_COMMA,
    ACTIONS(581), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    STATE(121), 1,
      sym_multiline_comment,
    STATE(145), 1,
      aux_sym_instruction_repeat4,
    STATE(188), 1,
      aux_sym_instruction_repeat3,
    STATE(209), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(129), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(577), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(579), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [4703] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(122), 1,
      sym_multiline_comment,
    ACTIONS(538), 12,
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
  [4727] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(123), 1,
      sym_multiline_comment,
    ACTIONS(583), 12,
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
  [4751] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(581), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(585), 1,
      anon_sym_COMMA,
    ACTIONS(589), 1,
      anon_sym_COLON_COLON,
    STATE(121), 1,
      aux_sym_instruction_repeat3,
    STATE(124), 1,
      sym_multiline_comment,
    STATE(173), 1,
      aux_sym_instruction_repeat4,
    STATE(210), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(577), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(579), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(587), 2,
      sym__newline,
      anon_sym_LBRACE,
  [4791] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(125), 1,
      sym_multiline_comment,
    ACTIONS(435), 12,
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
  [4815] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(581), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    ACTIONS(595), 1,
      anon_sym_COLON_COLON,
    STATE(126), 1,
      sym_multiline_comment,
    STATE(134), 1,
      aux_sym_instruction_repeat3,
    STATE(177), 1,
      aux_sym_instruction_repeat4,
    STATE(240), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(577), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(579), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(593), 2,
      sym__newline,
      anon_sym_LBRACE,
  [4855] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(532), 1,
      anon_sym_syncscope,
    ACTIONS(597), 1,
      anon_sym_LPAREN,
    STATE(127), 1,
      sym_multiline_comment,
    STATE(179), 1,
      sym_atomic_ordering,
    STATE(182), 1,
      sym_sync_scope,
    ACTIONS(599), 2,
      sym_number,
      anon_sym_unknown_DASHsize,
    ACTIONS(534), 6,
      anon_sym_unordered,
      anon_sym_monotonic,
      anon_sym_acquire,
      anon_sym_release,
      anon_sym_acq_rel,
      anon_sym_seq_cst,
  [4889] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(581), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    ACTIONS(605), 1,
      anon_sym_COLON_COLON,
    STATE(128), 1,
      sym_multiline_comment,
    STATE(140), 1,
      aux_sym_instruction_repeat3,
    STATE(159), 1,
      aux_sym_instruction_repeat4,
    STATE(236), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(577), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(579), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(603), 2,
      sym__newline,
      anon_sym_LBRACE,
  [4929] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(607), 1,
      anon_sym_COMMA,
    STATE(129), 2,
      sym_multiline_comment,
      aux_sym_cfi_operand_repeat1,
    ACTIONS(610), 10,
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
  [4955] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(130), 1,
      sym_multiline_comment,
    ACTIONS(612), 12,
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
  [4979] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(581), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(614), 1,
      anon_sym_COMMA,
    ACTIONS(618), 1,
      anon_sym_COLON_COLON,
    STATE(131), 1,
      sym_multiline_comment,
    STATE(132), 1,
      aux_sym_instruction_repeat3,
    STATE(148), 1,
      aux_sym_instruction_repeat4,
    STATE(241), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(577), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(579), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(616), 2,
      sym__newline,
      anon_sym_LBRACE,
  [5019] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(147), 1,
      anon_sym_COLON_COLON,
    ACTIONS(581), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(620), 1,
      anon_sym_COMMA,
    STATE(132), 1,
      sym_multiline_comment,
    STATE(162), 1,
      aux_sym_instruction_repeat4,
    STATE(188), 1,
      aux_sym_instruction_repeat3,
    STATE(231), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(145), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(577), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(579), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [5059] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(119), 1,
      anon_sym_COLON_COLON,
    ACTIONS(581), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(622), 1,
      anon_sym_COMMA,
    STATE(133), 1,
      sym_multiline_comment,
    STATE(167), 1,
      aux_sym_instruction_repeat4,
    STATE(188), 1,
      aux_sym_instruction_repeat3,
    STATE(219), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(117), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(577), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(579), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [5099] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(139), 1,
      anon_sym_COLON_COLON,
    ACTIONS(581), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(624), 1,
      anon_sym_COMMA,
    STATE(134), 1,
      sym_multiline_comment,
    STATE(172), 1,
      aux_sym_instruction_repeat4,
    STATE(188), 1,
      aux_sym_instruction_repeat3,
    STATE(225), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(137), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(577), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(579), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [5139] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(135), 1,
      sym_multiline_comment,
    ACTIONS(626), 12,
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
  [5163] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(628), 1,
      anon_sym_COMMA,
    STATE(129), 1,
      aux_sym_cfi_operand_repeat1,
    STATE(136), 1,
      sym_multiline_comment,
    ACTIONS(631), 10,
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
  [5191] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(137), 1,
      sym_multiline_comment,
    STATE(196), 1,
      sym_offset,
    ACTIONS(635), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(633), 9,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
  [5219] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(138), 1,
      sym_multiline_comment,
    STATE(193), 1,
      sym_offset,
    ACTIONS(635), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(637), 9,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
  [5247] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(581), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(639), 1,
      anon_sym_COMMA,
    ACTIONS(643), 1,
      anon_sym_COLON_COLON,
    STATE(133), 1,
      aux_sym_instruction_repeat3,
    STATE(139), 1,
      sym_multiline_comment,
    STATE(153), 1,
      aux_sym_instruction_repeat4,
    STATE(206), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(577), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(579), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(641), 2,
      sym__newline,
      anon_sym_LBRACE,
  [5287] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(143), 1,
      anon_sym_COLON_COLON,
    ACTIONS(581), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(645), 1,
      anon_sym_COMMA,
    STATE(140), 1,
      sym_multiline_comment,
    STATE(164), 1,
      aux_sym_instruction_repeat4,
    STATE(188), 1,
      aux_sym_instruction_repeat3,
    STATE(228), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(141), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(577), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(579), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [5327] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(141), 1,
      sym_multiline_comment,
    ACTIONS(423), 12,
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
  [5351] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(142), 1,
      sym_multiline_comment,
    ACTIONS(647), 12,
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
  [5375] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(143), 1,
      sym_multiline_comment,
    ACTIONS(649), 11,
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
  [5398] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(581), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(618), 1,
      anon_sym_COLON_COLON,
    ACTIONS(651), 1,
      anon_sym_COMMA,
    STATE(144), 1,
      sym_multiline_comment,
    STATE(180), 1,
      aux_sym_instruction_repeat4,
    STATE(241), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(577), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(579), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(616), 2,
      sym__newline,
      anon_sym_LBRACE,
  [5435] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(115), 1,
      anon_sym_COLON_COLON,
    ACTIONS(581), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(653), 1,
      anon_sym_COMMA,
    STATE(145), 1,
      sym_multiline_comment,
    STATE(180), 1,
      aux_sym_instruction_repeat4,
    STATE(222), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(113), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(577), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(579), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [5472] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(146), 1,
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
  [5495] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(581), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(595), 1,
      anon_sym_COLON_COLON,
    ACTIONS(657), 1,
      anon_sym_COMMA,
    STATE(147), 1,
      sym_multiline_comment,
    STATE(180), 1,
      aux_sym_instruction_repeat4,
    STATE(240), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(577), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(579), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(593), 2,
      sym__newline,
      anon_sym_LBRACE,
  [5532] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(147), 1,
      anon_sym_COLON_COLON,
    ACTIONS(581), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(659), 1,
      anon_sym_COMMA,
    STATE(148), 1,
      sym_multiline_comment,
    STATE(180), 1,
      aux_sym_instruction_repeat4,
    STATE(231), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(145), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(577), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(579), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [5569] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(149), 1,
      sym_multiline_comment,
    ACTIONS(661), 11,
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
  [5592] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(150), 1,
      sym_multiline_comment,
    ACTIONS(663), 11,
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
  [5615] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(151), 1,
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
  [5638] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(152), 1,
      sym_multiline_comment,
    ACTIONS(667), 11,
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
  [5661] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(119), 1,
      anon_sym_COLON_COLON,
    ACTIONS(581), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(669), 1,
      anon_sym_COMMA,
    STATE(153), 1,
      sym_multiline_comment,
    STATE(180), 1,
      aux_sym_instruction_repeat4,
    STATE(219), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(117), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(577), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(579), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [5698] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(154), 1,
      sym_multiline_comment,
    ACTIONS(671), 11,
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
  [5721] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(155), 1,
      sym_multiline_comment,
    ACTIONS(673), 11,
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
  [5744] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(581), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(643), 1,
      anon_sym_COLON_COLON,
    ACTIONS(675), 1,
      anon_sym_COMMA,
    STATE(156), 1,
      sym_multiline_comment,
    STATE(180), 1,
      aux_sym_instruction_repeat4,
    STATE(206), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(577), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(579), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(641), 2,
      sym__newline,
      anon_sym_LBRACE,
  [5781] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(157), 1,
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
  [5804] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(158), 1,
      sym_multiline_comment,
    ACTIONS(610), 11,
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
  [5827] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(143), 1,
      anon_sym_COLON_COLON,
    ACTIONS(581), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(679), 1,
      anon_sym_COMMA,
    STATE(159), 1,
      sym_multiline_comment,
    STATE(180), 1,
      aux_sym_instruction_repeat4,
    STATE(228), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(141), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(577), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(579), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [5864] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(160), 1,
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
  [5887] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(161), 1,
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
  [5910] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(111), 1,
      anon_sym_COLON_COLON,
    ACTIONS(581), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    STATE(162), 1,
      sym_multiline_comment,
    STATE(180), 1,
      aux_sym_instruction_repeat4,
    STATE(235), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(103), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(577), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(579), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [5947] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(581), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(605), 1,
      anon_sym_COLON_COLON,
    ACTIONS(687), 1,
      anon_sym_COMMA,
    STATE(163), 1,
      sym_multiline_comment,
    STATE(180), 1,
      aux_sym_instruction_repeat4,
    STATE(236), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(577), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(579), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(603), 2,
      sym__newline,
      anon_sym_LBRACE,
  [5984] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(127), 1,
      anon_sym_COLON_COLON,
    ACTIONS(581), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(689), 1,
      anon_sym_COMMA,
    STATE(164), 1,
      sym_multiline_comment,
    STATE(180), 1,
      aux_sym_instruction_repeat4,
    STATE(223), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(125), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(577), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(579), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [6021] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(165), 1,
      sym_multiline_comment,
    ACTIONS(691), 11,
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
  [6044] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(166), 1,
      sym_multiline_comment,
    ACTIONS(693), 11,
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
  [6067] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(123), 1,
      anon_sym_COLON_COLON,
    ACTIONS(581), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(695), 1,
      anon_sym_COMMA,
    STATE(167), 1,
      sym_multiline_comment,
    STATE(180), 1,
      aux_sym_instruction_repeat4,
    STATE(213), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(121), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(577), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(579), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [6104] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(168), 1,
      sym_multiline_comment,
    ACTIONS(697), 11,
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
  [6127] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(169), 1,
      sym_multiline_comment,
    ACTIONS(699), 11,
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
  [6150] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(170), 1,
      sym_multiline_comment,
    STATE(563), 1,
      sym_intpred,
    ACTIONS(701), 10,
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
  [6175] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(171), 1,
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
  [6198] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(135), 1,
      anon_sym_COLON_COLON,
    ACTIONS(581), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(705), 1,
      anon_sym_COMMA,
    STATE(172), 1,
      sym_multiline_comment,
    STATE(180), 1,
      aux_sym_instruction_repeat4,
    STATE(229), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(133), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(577), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(579), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [6235] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(131), 1,
      anon_sym_COLON_COLON,
    ACTIONS(581), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(707), 1,
      anon_sym_COMMA,
    STATE(173), 1,
      sym_multiline_comment,
    STATE(180), 1,
      aux_sym_instruction_repeat4,
    STATE(209), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(129), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(577), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(579), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [6272] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(174), 1,
      sym_multiline_comment,
    ACTIONS(709), 11,
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
  [6295] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(175), 1,
      sym_multiline_comment,
    ACTIONS(571), 11,
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
  [6318] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(581), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(589), 1,
      anon_sym_COLON_COLON,
    ACTIONS(711), 1,
      anon_sym_COMMA,
    STATE(176), 1,
      sym_multiline_comment,
    STATE(180), 1,
      aux_sym_instruction_repeat4,
    STATE(210), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(577), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(579), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(587), 2,
      sym__newline,
      anon_sym_LBRACE,
  [6355] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(139), 1,
      anon_sym_COLON_COLON,
    ACTIONS(581), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(713), 1,
      anon_sym_COMMA,
    STATE(177), 1,
      sym_multiline_comment,
    STATE(180), 1,
      aux_sym_instruction_repeat4,
    STATE(225), 1,
      aux_sym_instruction_repeat5,
    ACTIONS(137), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(577), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(579), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [6392] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(178), 1,
      sym_multiline_comment,
    ACTIONS(715), 11,
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
  [6415] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(717), 1,
      anon_sym_LPAREN,
    STATE(179), 1,
      sym_multiline_comment,
    STATE(470), 1,
      sym_atomic_ordering,
    ACTIONS(719), 2,
      sym_number,
      anon_sym_unknown_DASHsize,
    ACTIONS(534), 6,
      anon_sym_unordered,
      anon_sym_monotonic,
      anon_sym_acquire,
      anon_sym_release,
      anon_sym_acq_rel,
      anon_sym_seq_cst,
  [6443] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(721), 1,
      anon_sym_COMMA,
    ACTIONS(726), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    STATE(180), 2,
      sym_multiline_comment,
      aux_sym_instruction_repeat4,
    ACTIONS(724), 6,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
  [6469] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(729), 1,
      anon_sym_RPAREN,
    STATE(181), 1,
      sym_multiline_comment,
    STATE(441), 1,
      sym_attribute,
    ACTIONS(733), 3,
      anon_sym_align,
      anon_sym_basealign,
      anon_sym_bbsections,
    ACTIONS(731), 5,
      sym_ir_block,
      anon_sym_address_DASHtaken,
      anon_sym_landing_DASHpad,
      anon_sym_inlineasm_DASHbr_DASHindirect_DASHtarget,
      anon_sym_ehfunclet_DASHentry,
  [6497] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(717), 1,
      anon_sym_LPAREN,
    STATE(182), 1,
      sym_multiline_comment,
    STATE(189), 1,
      sym_atomic_ordering,
    ACTIONS(719), 2,
      sym_number,
      anon_sym_unknown_DASHsize,
    ACTIONS(534), 6,
      anon_sym_unordered,
      anon_sym_monotonic,
      anon_sym_acquire,
      anon_sym_release,
      anon_sym_acq_rel,
      anon_sym_seq_cst,
  [6525] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(597), 1,
      anon_sym_LPAREN,
    STATE(179), 1,
      sym_atomic_ordering,
    STATE(183), 1,
      sym_multiline_comment,
    ACTIONS(599), 2,
      sym_number,
      anon_sym_unknown_DASHsize,
    ACTIONS(534), 6,
      anon_sym_unordered,
      anon_sym_monotonic,
      anon_sym_acquire,
      anon_sym_release,
      anon_sym_acq_rel,
      anon_sym_seq_cst,
  [6553] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(597), 1,
      anon_sym_LPAREN,
    STATE(184), 1,
      sym_multiline_comment,
    STATE(416), 1,
      sym_atomic_ordering,
    ACTIONS(599), 2,
      sym_number,
      anon_sym_unknown_DASHsize,
    ACTIONS(534), 6,
      anon_sym_unordered,
      anon_sym_monotonic,
      anon_sym_acquire,
      anon_sym_release,
      anon_sym_acq_rel,
      anon_sym_seq_cst,
  [6581] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    STATE(185), 1,
      sym_multiline_comment,
    STATE(488), 1,
      sym_atomic_ordering,
    ACTIONS(528), 2,
      sym_number,
      anon_sym_unknown_DASHsize,
    ACTIONS(534), 6,
      anon_sym_unordered,
      anon_sym_monotonic,
      anon_sym_acquire,
      anon_sym_release,
      anon_sym_acq_rel,
      anon_sym_seq_cst,
  [6609] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    STATE(184), 1,
      sym_atomic_ordering,
    STATE(186), 1,
      sym_multiline_comment,
    ACTIONS(528), 2,
      sym_number,
      anon_sym_unknown_DASHsize,
    ACTIONS(534), 6,
      anon_sym_unordered,
      anon_sym_monotonic,
      anon_sym_acquire,
      anon_sym_release,
      anon_sym_acq_rel,
      anon_sym_seq_cst,
  [6637] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(187), 1,
      sym_multiline_comment,
    ACTIONS(735), 10,
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
  [6659] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(737), 1,
      anon_sym_COMMA,
    STATE(188), 2,
      sym_multiline_comment,
      aux_sym_instruction_repeat3,
    ACTIONS(740), 8,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
  [6683] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(742), 1,
      anon_sym_LPAREN,
    STATE(189), 1,
      sym_multiline_comment,
    STATE(415), 1,
      sym_atomic_ordering,
    ACTIONS(744), 2,
      sym_number,
      anon_sym_unknown_DASHsize,
    ACTIONS(534), 6,
      anon_sym_unordered,
      anon_sym_monotonic,
      anon_sym_acquire,
      anon_sym_release,
      anon_sym_acq_rel,
      anon_sym_seq_cst,
  [6711] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(190), 1,
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
  [6732] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(191), 1,
      sym_multiline_comment,
    STATE(199), 1,
      aux_sym_memory_operand_repeat1,
    STATE(248), 1,
      sym_memory_operand_flag,
    ACTIONS(750), 2,
      anon_sym_load,
      anon_sym_store,
    ACTIONS(748), 5,
      sym_string,
      anon_sym_volatile,
      anon_sym_non_DASHtemporal,
      anon_sym_dereferenceable,
      anon_sym_invariant,
  [6759] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(192), 1,
      sym_multiline_comment,
    ACTIONS(752), 9,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_unknown_DASHsize,
      anon_sym_unordered,
      anon_sym_monotonic,
      anon_sym_acquire,
      anon_sym_release,
      anon_sym_acq_rel,
      anon_sym_seq_cst,
  [6780] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(193), 1,
      sym_multiline_comment,
    ACTIONS(633), 9,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
  [6801] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(194), 1,
      sym_multiline_comment,
    ACTIONS(724), 9,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
  [6822] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(195), 1,
      sym_multiline_comment,
    ACTIONS(754), 9,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
  [6843] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(196), 1,
      sym_multiline_comment,
    ACTIONS(756), 9,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
  [6864] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(191), 1,
      aux_sym_memory_operand_repeat1,
    STATE(197), 1,
      sym_multiline_comment,
    STATE(248), 1,
      sym_memory_operand_flag,
    ACTIONS(758), 2,
      anon_sym_load,
      anon_sym_store,
    ACTIONS(748), 5,
      sym_string,
      anon_sym_volatile,
      anon_sym_non_DASHtemporal,
      anon_sym_dereferenceable,
      anon_sym_invariant,
  [6891] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(198), 1,
      sym_multiline_comment,
    ACTIONS(760), 9,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_unknown_DASHsize,
      anon_sym_unordered,
      anon_sym_monotonic,
      anon_sym_acquire,
      anon_sym_release,
      anon_sym_acq_rel,
      anon_sym_seq_cst,
  [6912] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(248), 1,
      sym_memory_operand_flag,
    ACTIONS(765), 2,
      anon_sym_load,
      anon_sym_store,
    STATE(199), 2,
      sym_multiline_comment,
      aux_sym_memory_operand_repeat1,
    ACTIONS(762), 5,
      sym_string,
      anon_sym_volatile,
      anon_sym_non_DASHtemporal,
      anon_sym_dereferenceable,
      anon_sym_invariant,
  [6937] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(200), 1,
      sym_multiline_comment,
    ACTIONS(767), 9,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
  [6958] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(201), 1,
      sym_multiline_comment,
    ACTIONS(740), 9,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
  [6979] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(202), 1,
      sym_multiline_comment,
    ACTIONS(769), 9,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
  [7000] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(203), 1,
      sym_multiline_comment,
    STATE(500), 1,
      sym_attribute,
    ACTIONS(733), 3,
      anon_sym_align,
      anon_sym_basealign,
      anon_sym_bbsections,
    ACTIONS(731), 5,
      sym_ir_block,
      anon_sym_address_DASHtaken,
      anon_sym_landing_DASHpad,
      anon_sym_inlineasm_DASHbr_DASHindirect_DASHtarget,
      anon_sym_ehfunclet_DASHentry,
  [7025] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(771), 1,
      anon_sym_COMMA,
    ACTIONS(779), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(776), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    STATE(204), 2,
      sym_multiline_comment,
      aux_sym_instruction_repeat5,
    ACTIONS(774), 3,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
  [7051] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(147), 1,
      anon_sym_COLON_COLON,
    ACTIONS(786), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    STATE(205), 1,
      sym_multiline_comment,
    ACTIONS(145), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(782), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(784), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [7079] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(119), 1,
      anon_sym_COLON_COLON,
    ACTIONS(581), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(788), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym_instruction_repeat5,
    STATE(206), 1,
      sym_multiline_comment,
    ACTIONS(117), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(579), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [7109] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(131), 1,
      anon_sym_COLON_COLON,
    ACTIONS(786), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    STATE(207), 1,
      sym_multiline_comment,
    ACTIONS(129), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(782), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(784), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [7137] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(115), 1,
      anon_sym_COLON_COLON,
    ACTIONS(786), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    STATE(208), 1,
      sym_multiline_comment,
    ACTIONS(113), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(782), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(784), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [7165] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(115), 1,
      anon_sym_COLON_COLON,
    ACTIONS(581), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(790), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym_instruction_repeat5,
    STATE(209), 1,
      sym_multiline_comment,
    ACTIONS(113), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(579), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [7195] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(131), 1,
      anon_sym_COLON_COLON,
    ACTIONS(581), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(792), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym_instruction_repeat5,
    STATE(210), 1,
      sym_multiline_comment,
    ACTIONS(129), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(579), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [7225] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(605), 1,
      anon_sym_COLON_COLON,
    ACTIONS(786), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    STATE(211), 1,
      sym_multiline_comment,
    ACTIONS(603), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(782), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(784), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [7253] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(595), 1,
      anon_sym_COLON_COLON,
    ACTIONS(786), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    STATE(212), 1,
      sym_multiline_comment,
    ACTIONS(593), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(782), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(784), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [7281] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(581), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(794), 1,
      anon_sym_COMMA,
    ACTIONS(798), 1,
      anon_sym_COLON_COLON,
    STATE(204), 1,
      aux_sym_instruction_repeat5,
    STATE(213), 1,
      sym_multiline_comment,
    ACTIONS(579), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(796), 2,
      sym__newline,
      anon_sym_LBRACE,
  [7311] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(618), 1,
      anon_sym_COLON_COLON,
    ACTIONS(786), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    STATE(214), 1,
      sym_multiline_comment,
    ACTIONS(616), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(782), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(784), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [7339] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(786), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(798), 1,
      anon_sym_COLON_COLON,
    STATE(215), 1,
      sym_multiline_comment,
    ACTIONS(782), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(784), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(796), 2,
      sym__newline,
      anon_sym_LBRACE,
  [7367] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(119), 1,
      anon_sym_COLON_COLON,
    ACTIONS(786), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    STATE(216), 1,
      sym_multiline_comment,
    ACTIONS(117), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(782), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(784), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [7395] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(643), 1,
      anon_sym_COLON_COLON,
    ACTIONS(786), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    STATE(217), 1,
      sym_multiline_comment,
    ACTIONS(641), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(782), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(784), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [7423] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(786), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(802), 1,
      anon_sym_COLON_COLON,
    STATE(218), 1,
      sym_multiline_comment,
    ACTIONS(782), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(784), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(800), 2,
      sym__newline,
      anon_sym_LBRACE,
  [7451] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(123), 1,
      anon_sym_COLON_COLON,
    ACTIONS(581), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(804), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym_instruction_repeat5,
    STATE(219), 1,
      sym_multiline_comment,
    ACTIONS(121), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(579), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [7481] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(123), 1,
      anon_sym_COLON_COLON,
    ACTIONS(786), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    STATE(220), 1,
      sym_multiline_comment,
    ACTIONS(121), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(782), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(784), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [7509] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(786), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(808), 1,
      anon_sym_COLON_COLON,
    STATE(221), 1,
      sym_multiline_comment,
    ACTIONS(782), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(784), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(806), 2,
      sym__newline,
      anon_sym_LBRACE,
  [7537] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(581), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(802), 1,
      anon_sym_COLON_COLON,
    ACTIONS(810), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym_instruction_repeat5,
    STATE(222), 1,
      sym_multiline_comment,
    ACTIONS(579), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(800), 2,
      sym__newline,
      anon_sym_LBRACE,
  [7567] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(581), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(812), 1,
      anon_sym_COMMA,
    ACTIONS(816), 1,
      anon_sym_COLON_COLON,
    STATE(204), 1,
      aux_sym_instruction_repeat5,
    STATE(223), 1,
      sym_multiline_comment,
    ACTIONS(579), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(814), 2,
      sym__newline,
      anon_sym_LBRACE,
  [7597] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(786), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(816), 1,
      anon_sym_COLON_COLON,
    STATE(224), 1,
      sym_multiline_comment,
    ACTIONS(782), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(784), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(814), 2,
      sym__newline,
      anon_sym_LBRACE,
  [7625] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(135), 1,
      anon_sym_COLON_COLON,
    ACTIONS(581), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(818), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym_instruction_repeat5,
    STATE(225), 1,
      sym_multiline_comment,
    ACTIONS(133), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(579), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [7655] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(127), 1,
      anon_sym_COLON_COLON,
    ACTIONS(786), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    STATE(226), 1,
      sym_multiline_comment,
    ACTIONS(125), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(782), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(784), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [7683] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(135), 1,
      anon_sym_COLON_COLON,
    ACTIONS(786), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    STATE(227), 1,
      sym_multiline_comment,
    ACTIONS(133), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(782), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(784), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [7711] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(127), 1,
      anon_sym_COLON_COLON,
    ACTIONS(581), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(820), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym_instruction_repeat5,
    STATE(228), 1,
      sym_multiline_comment,
    ACTIONS(125), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(579), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [7741] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(581), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(822), 1,
      anon_sym_COMMA,
    ACTIONS(826), 1,
      anon_sym_COLON_COLON,
    STATE(204), 1,
      aux_sym_instruction_repeat5,
    STATE(229), 1,
      sym_multiline_comment,
    ACTIONS(579), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(824), 2,
      sym__newline,
      anon_sym_LBRACE,
  [7771] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(111), 1,
      anon_sym_COLON_COLON,
    ACTIONS(786), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    STATE(230), 1,
      sym_multiline_comment,
    ACTIONS(103), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(782), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(784), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [7799] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(111), 1,
      anon_sym_COLON_COLON,
    ACTIONS(581), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym_instruction_repeat5,
    STATE(231), 1,
      sym_multiline_comment,
    ACTIONS(103), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(579), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [7829] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(786), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(826), 1,
      anon_sym_COLON_COLON,
    STATE(232), 1,
      sym_multiline_comment,
    ACTIONS(782), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(784), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(824), 2,
      sym__newline,
      anon_sym_LBRACE,
  [7857] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(581), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(618), 1,
      anon_sym_COLON_COLON,
    ACTIONS(830), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym_instruction_repeat5,
    STATE(233), 1,
      sym_multiline_comment,
    ACTIONS(579), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(616), 2,
      sym__newline,
      anon_sym_LBRACE,
  [7887] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(589), 1,
      anon_sym_COLON_COLON,
    ACTIONS(786), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    STATE(234), 1,
      sym_multiline_comment,
    ACTIONS(587), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(782), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(784), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [7915] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(581), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(808), 1,
      anon_sym_COLON_COLON,
    ACTIONS(832), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym_instruction_repeat5,
    STATE(235), 1,
      sym_multiline_comment,
    ACTIONS(579), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(806), 2,
      sym__newline,
      anon_sym_LBRACE,
  [7945] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(143), 1,
      anon_sym_COLON_COLON,
    ACTIONS(581), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(834), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym_instruction_repeat5,
    STATE(236), 1,
      sym_multiline_comment,
    ACTIONS(141), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(579), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [7975] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(143), 1,
      anon_sym_COLON_COLON,
    ACTIONS(786), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    STATE(237), 1,
      sym_multiline_comment,
    ACTIONS(141), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(782), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(784), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [8003] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(581), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(589), 1,
      anon_sym_COLON_COLON,
    ACTIONS(836), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym_instruction_repeat5,
    STATE(238), 1,
      sym_multiline_comment,
    ACTIONS(579), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(587), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8033] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(139), 1,
      anon_sym_COLON_COLON,
    ACTIONS(786), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    STATE(239), 1,
      sym_multiline_comment,
    ACTIONS(137), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(782), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
    ACTIONS(784), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [8061] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(139), 1,
      anon_sym_COLON_COLON,
    ACTIONS(581), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(838), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym_instruction_repeat5,
    STATE(240), 1,
      sym_multiline_comment,
    ACTIONS(137), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(579), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [8091] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(147), 1,
      anon_sym_COLON_COLON,
    ACTIONS(581), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(840), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym_instruction_repeat5,
    STATE(241), 1,
      sym_multiline_comment,
    ACTIONS(145), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(579), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [8121] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(581), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(595), 1,
      anon_sym_COLON_COLON,
    ACTIONS(842), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym_instruction_repeat5,
    STATE(242), 1,
      sym_multiline_comment,
    ACTIONS(579), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(593), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8151] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(581), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(643), 1,
      anon_sym_COLON_COLON,
    ACTIONS(844), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym_instruction_repeat5,
    STATE(243), 1,
      sym_multiline_comment,
    ACTIONS(579), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(641), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8181] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(581), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(605), 1,
      anon_sym_COLON_COLON,
    ACTIONS(846), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym_instruction_repeat5,
    STATE(244), 1,
      sym_multiline_comment,
    ACTIONS(579), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(603), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8211] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(245), 1,
      sym_multiline_comment,
    ACTIONS(774), 7,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
  [8230] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(246), 1,
      sym_multiline_comment,
    ACTIONS(848), 7,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHinstr_DASHnumber,
      anon_sym_debug_DASHlocation,
      anon_sym_COLON_COLON,
  [8249] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(247), 1,
      sym_multiline_comment,
    ACTIONS(850), 7,
      sym_string,
      anon_sym_load,
      anon_sym_store,
      anon_sym_volatile,
      anon_sym_non_DASHtemporal,
      anon_sym_dereferenceable,
      anon_sym_invariant,
  [8268] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(248), 1,
      sym_multiline_comment,
    ACTIONS(852), 7,
      sym_string,
      anon_sym_load,
      anon_sym_store,
      anon_sym_volatile,
      anon_sym_non_DASHtemporal,
      anon_sym_dereferenceable,
      anon_sym_invariant,
  [8287] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    ACTIONS(856), 1,
      anon_sym_RPAREN,
    STATE(249), 1,
      sym_multiline_comment,
    STATE(425), 1,
      sym_offset,
    STATE(426), 1,
      aux_sym_memory_operand_repeat2,
    ACTIONS(635), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8313] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(786), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(816), 1,
      anon_sym_COLON_COLON,
    STATE(250), 1,
      sym_multiline_comment,
    ACTIONS(784), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(814), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8337] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(143), 1,
      anon_sym_COLON_COLON,
    ACTIONS(786), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    STATE(251), 1,
      sym_multiline_comment,
    ACTIONS(141), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(784), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [8361] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(786), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(860), 1,
      anon_sym_COLON_COLON,
    STATE(252), 1,
      sym_multiline_comment,
    ACTIONS(784), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(858), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8385] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(111), 1,
      anon_sym_COLON_COLON,
    ACTIONS(786), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    STATE(253), 1,
      sym_multiline_comment,
    ACTIONS(103), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(784), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [8409] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(786), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(826), 1,
      anon_sym_COLON_COLON,
    STATE(254), 1,
      sym_multiline_comment,
    ACTIONS(784), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(824), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8433] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(135), 1,
      anon_sym_COLON_COLON,
    ACTIONS(786), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    STATE(255), 1,
      sym_multiline_comment,
    ACTIONS(133), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(784), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [8457] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(786), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(808), 1,
      anon_sym_COLON_COLON,
    STATE(256), 1,
      sym_multiline_comment,
    ACTIONS(784), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(806), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8481] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(127), 1,
      anon_sym_COLON_COLON,
    ACTIONS(786), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    STATE(257), 1,
      sym_multiline_comment,
    ACTIONS(125), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(784), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [8505] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    ACTIONS(862), 1,
      anon_sym_RPAREN,
    STATE(258), 1,
      sym_multiline_comment,
    STATE(482), 1,
      aux_sym_memory_operand_repeat2,
    STATE(483), 1,
      sym_offset,
    ACTIONS(635), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8531] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    ACTIONS(862), 1,
      anon_sym_RPAREN,
    STATE(259), 1,
      sym_multiline_comment,
    STATE(482), 1,
      aux_sym_memory_operand_repeat2,
    ACTIONS(864), 3,
      anon_sym_on,
      anon_sym_from,
      anon_sym_into,
  [8555] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(786), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(868), 1,
      anon_sym_COLON_COLON,
    STATE(260), 1,
      sym_multiline_comment,
    ACTIONS(784), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(866), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8579] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    ACTIONS(870), 1,
      anon_sym_RPAREN,
    STATE(261), 1,
      sym_multiline_comment,
    STATE(407), 1,
      aux_sym_memory_operand_repeat2,
    ACTIONS(872), 3,
      anon_sym_on,
      anon_sym_from,
      anon_sym_into,
  [8603] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(786), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(802), 1,
      anon_sym_COLON_COLON,
    STATE(262), 1,
      sym_multiline_comment,
    ACTIONS(784), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(800), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8627] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(139), 1,
      anon_sym_COLON_COLON,
    ACTIONS(786), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    STATE(263), 1,
      sym_multiline_comment,
    ACTIONS(137), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(784), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [8651] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    ACTIONS(874), 1,
      anon_sym_RPAREN,
    STATE(264), 1,
      sym_multiline_comment,
    STATE(432), 1,
      aux_sym_memory_operand_repeat2,
    ACTIONS(876), 3,
      anon_sym_on,
      anon_sym_from,
      anon_sym_into,
  [8675] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(147), 1,
      anon_sym_COLON_COLON,
    ACTIONS(786), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    STATE(265), 1,
      sym_multiline_comment,
    ACTIONS(145), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(784), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [8699] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    ACTIONS(878), 1,
      anon_sym_RPAREN,
    STATE(266), 1,
      sym_multiline_comment,
    STATE(413), 1,
      aux_sym_memory_operand_repeat2,
    ACTIONS(880), 3,
      anon_sym_on,
      anon_sym_from,
      anon_sym_into,
  [8723] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(123), 1,
      anon_sym_COLON_COLON,
    ACTIONS(786), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    STATE(267), 1,
      sym_multiline_comment,
    ACTIONS(121), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(784), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [8747] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      sym__newline,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(882), 1,
      ts_builtin_sym_end,
    STATE(268), 1,
      sym_multiline_comment,
    STATE(285), 1,
      aux_sym_body_repeat1,
    STATE(405), 1,
      sym_basic_block,
    STATE(513), 1,
      sym_label,
  [8775] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(131), 1,
      anon_sym_COLON_COLON,
    ACTIONS(786), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    STATE(269), 1,
      sym_multiline_comment,
    ACTIONS(129), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(784), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [8799] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(786), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(886), 1,
      anon_sym_COLON_COLON,
    STATE(270), 1,
      sym_multiline_comment,
    ACTIONS(784), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(884), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8823] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    ACTIONS(888), 1,
      anon_sym_RPAREN,
    STATE(271), 1,
      sym_multiline_comment,
    STATE(454), 1,
      sym_offset,
    STATE(456), 1,
      aux_sym_memory_operand_repeat2,
    ACTIONS(635), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8849] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    ACTIONS(888), 1,
      anon_sym_RPAREN,
    STATE(272), 1,
      sym_multiline_comment,
    STATE(456), 1,
      aux_sym_memory_operand_repeat2,
    ACTIONS(890), 3,
      anon_sym_on,
      anon_sym_from,
      anon_sym_into,
  [8873] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(786), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(894), 1,
      anon_sym_COLON_COLON,
    STATE(273), 1,
      sym_multiline_comment,
    ACTIONS(784), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(892), 2,
      sym__newline,
      anon_sym_LBRACE,
  [8897] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    ACTIONS(896), 1,
      anon_sym_RPAREN,
    STATE(274), 1,
      sym_multiline_comment,
    STATE(442), 1,
      sym_offset,
    STATE(443), 1,
      aux_sym_memory_operand_repeat2,
    ACTIONS(635), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8923] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    ACTIONS(896), 1,
      anon_sym_RPAREN,
    STATE(275), 1,
      sym_multiline_comment,
    STATE(443), 1,
      aux_sym_memory_operand_repeat2,
    ACTIONS(898), 3,
      anon_sym_on,
      anon_sym_from,
      anon_sym_into,
  [8947] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    ACTIONS(900), 1,
      anon_sym_RPAREN,
    STATE(276), 1,
      sym_multiline_comment,
    STATE(434), 1,
      sym_offset,
    STATE(435), 1,
      aux_sym_memory_operand_repeat2,
    ACTIONS(635), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8973] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    ACTIONS(900), 1,
      anon_sym_RPAREN,
    STATE(277), 1,
      sym_multiline_comment,
    STATE(435), 1,
      aux_sym_memory_operand_repeat2,
    ACTIONS(902), 3,
      anon_sym_on,
      anon_sym_from,
      anon_sym_into,
  [8997] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    ACTIONS(874), 1,
      anon_sym_RPAREN,
    STATE(278), 1,
      sym_multiline_comment,
    STATE(432), 1,
      aux_sym_memory_operand_repeat2,
    STATE(445), 1,
      sym_offset,
    ACTIONS(635), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9023] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    ACTIONS(904), 1,
      anon_sym_RPAREN,
    STATE(279), 1,
      sym_multiline_comment,
    STATE(420), 1,
      sym_offset,
    STATE(421), 1,
      aux_sym_memory_operand_repeat2,
    ACTIONS(635), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9049] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(119), 1,
      anon_sym_COLON_COLON,
    ACTIONS(786), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    STATE(280), 1,
      sym_multiline_comment,
    ACTIONS(117), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(784), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [9073] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(786), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(908), 1,
      anon_sym_COLON_COLON,
    STATE(281), 1,
      sym_multiline_comment,
    ACTIONS(784), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(906), 2,
      sym__newline,
      anon_sym_LBRACE,
  [9097] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(786), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    ACTIONS(798), 1,
      anon_sym_COLON_COLON,
    STATE(282), 1,
      sym_multiline_comment,
    ACTIONS(784), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
    ACTIONS(796), 2,
      sym__newline,
      anon_sym_LBRACE,
  [9121] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(910), 1,
      ts_builtin_sym_end,
    ACTIONS(912), 1,
      sym__newline,
    ACTIONS(915), 1,
      sym_identifier,
    STATE(405), 1,
      sym_basic_block,
    STATE(513), 1,
      sym_label,
    STATE(283), 2,
      sym_multiline_comment,
      aux_sym_body_repeat1,
  [9147] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    ACTIONS(918), 1,
      anon_sym_RPAREN,
    STATE(284), 1,
      sym_multiline_comment,
    STATE(459), 1,
      aux_sym_memory_operand_repeat2,
    STATE(467), 1,
      sym_offset,
    ACTIONS(635), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9173] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      sym__newline,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(920), 1,
      ts_builtin_sym_end,
    STATE(283), 1,
      aux_sym_body_repeat1,
    STATE(285), 1,
      sym_multiline_comment,
    STATE(405), 1,
      sym_basic_block,
    STATE(513), 1,
      sym_label,
  [9201] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      sym__newline,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(882), 1,
      ts_builtin_sym_end,
    STATE(283), 1,
      aux_sym_body_repeat1,
    STATE(286), 1,
      sym_multiline_comment,
    STATE(405), 1,
      sym_basic_block,
    STATE(513), 1,
      sym_label,
  [9229] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    ACTIONS(918), 1,
      anon_sym_RPAREN,
    STATE(287), 1,
      sym_multiline_comment,
    STATE(459), 1,
      aux_sym_memory_operand_repeat2,
    ACTIONS(922), 3,
      anon_sym_on,
      anon_sym_from,
      anon_sym_into,
  [9253] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(115), 1,
      anon_sym_COLON_COLON,
    ACTIONS(786), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    STATE(288), 1,
      sym_multiline_comment,
    ACTIONS(113), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(784), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [9277] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(924), 1,
      sym_metadata_ref,
    STATE(289), 1,
      sym_multiline_comment,
    STATE(515), 1,
      sym_mem_attribute,
    ACTIONS(926), 3,
      anon_sym_align,
      anon_sym_basealign,
      anon_sym_addrspace,
  [9298] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(928), 1,
      anon_sym_LPAREN,
    ACTIONS(930), 1,
      anon_sym_COMMA,
    ACTIONS(932), 1,
      sym__newline,
    STATE(290), 1,
      sym_multiline_comment,
    STATE(431), 1,
      aux_sym_successors_repeat1,
  [9320] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    STATE(291), 1,
      sym_multiline_comment,
    STATE(318), 1,
      sym_memory_operand,
    ACTIONS(936), 2,
      sym__newline,
      anon_sym_LBRACE,
  [9340] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(292), 1,
      sym_multiline_comment,
    STATE(358), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(796), 2,
      sym__newline,
      anon_sym_LBRACE,
  [9360] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    STATE(293), 1,
      sym_multiline_comment,
    STATE(359), 1,
      sym_memory_operand,
    ACTIONS(796), 2,
      sym__newline,
      anon_sym_LBRACE,
  [9380] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(940), 1,
      anon_sym_COMMA,
    ACTIONS(943), 2,
      sym__newline,
      anon_sym_LBRACE,
    STATE(294), 2,
      sym_multiline_comment,
      aux_sym_instruction_repeat6,
  [9398] = 6,
    ACTIONS(945), 1,
      sym_comment,
    ACTIONS(947), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(951), 1,
      anon_sym_STAR_SLASH,
    STATE(295), 1,
      sym_multiline_comment,
    STATE(296), 1,
      aux_sym_multiline_comment_repeat1,
    ACTIONS(949), 2,
      aux_sym_multiline_comment_token1,
      aux_sym_multiline_comment_token2,
  [9418] = 5,
    ACTIONS(945), 1,
      sym_comment,
    ACTIONS(947), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(956), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(953), 2,
      aux_sym_multiline_comment_token1,
      aux_sym_multiline_comment_token2,
    STATE(296), 2,
      sym_multiline_comment,
      aux_sym_multiline_comment_repeat1,
  [9436] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      aux_sym_instruction_repeat6,
    STATE(297), 1,
      sym_multiline_comment,
    ACTIONS(958), 2,
      sym__newline,
      anon_sym_LBRACE,
  [9456] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(297), 1,
      aux_sym_instruction_repeat6,
    STATE(298), 1,
      sym_multiline_comment,
    ACTIONS(960), 2,
      sym__newline,
      anon_sym_LBRACE,
  [9476] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      aux_sym_instruction_repeat6,
    STATE(299), 1,
      sym_multiline_comment,
    ACTIONS(960), 2,
      sym__newline,
      anon_sym_LBRACE,
  [9496] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      aux_sym_instruction_repeat6,
    STATE(300), 1,
      sym_multiline_comment,
    ACTIONS(962), 2,
      sym__newline,
      anon_sym_LBRACE,
  [9516] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    ACTIONS(964), 1,
      anon_sym_COLON,
    STATE(301), 1,
      sym_multiline_comment,
    ACTIONS(508), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [9536] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    STATE(298), 1,
      sym_memory_operand,
    STATE(302), 1,
      sym_multiline_comment,
    ACTIONS(966), 2,
      sym__newline,
      anon_sym_LBRACE,
  [9556] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(299), 1,
      aux_sym_instruction_repeat6,
    STATE(303), 1,
      sym_multiline_comment,
    ACTIONS(966), 2,
      sym__newline,
      anon_sym_LBRACE,
  [9576] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      aux_sym_instruction_repeat6,
    STATE(304), 1,
      sym_multiline_comment,
    ACTIONS(966), 2,
      sym__newline,
      anon_sym_LBRACE,
  [9596] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(300), 1,
      aux_sym_instruction_repeat6,
    STATE(305), 1,
      sym_multiline_comment,
    ACTIONS(968), 2,
      sym__newline,
      anon_sym_LBRACE,
  [9616] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      aux_sym_instruction_repeat6,
    STATE(306), 1,
      sym_multiline_comment,
    ACTIONS(968), 2,
      sym__newline,
      anon_sym_LBRACE,
  [9636] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      aux_sym_instruction_repeat6,
    STATE(307), 1,
      sym_multiline_comment,
    ACTIONS(970), 2,
      sym__newline,
      anon_sym_LBRACE,
  [9656] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    STATE(308), 1,
      sym_multiline_comment,
    STATE(369), 1,
      sym_memory_operand,
    ACTIONS(129), 2,
      sym__newline,
      anon_sym_LBRACE,
  [9676] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(309), 1,
      sym_multiline_comment,
    STATE(370), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(129), 2,
      sym__newline,
      anon_sym_LBRACE,
  [9696] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      aux_sym_instruction_repeat6,
    STATE(310), 1,
      sym_multiline_comment,
    ACTIONS(972), 2,
      sym__newline,
      anon_sym_LBRACE,
  [9716] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    STATE(303), 1,
      sym_memory_operand,
    STATE(311), 1,
      sym_multiline_comment,
    ACTIONS(892), 2,
      sym__newline,
      anon_sym_LBRACE,
  [9736] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(304), 1,
      aux_sym_instruction_repeat6,
    STATE(312), 1,
      sym_multiline_comment,
    ACTIONS(892), 2,
      sym__newline,
      anon_sym_LBRACE,
  [9756] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      aux_sym_instruction_repeat6,
    STATE(313), 1,
      sym_multiline_comment,
    ACTIONS(892), 2,
      sym__newline,
      anon_sym_LBRACE,
  [9776] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    STATE(305), 1,
      sym_memory_operand,
    STATE(314), 1,
      sym_multiline_comment,
    ACTIONS(974), 2,
      sym__newline,
      anon_sym_LBRACE,
  [9796] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(306), 1,
      aux_sym_instruction_repeat6,
    STATE(315), 1,
      sym_multiline_comment,
    ACTIONS(974), 2,
      sym__newline,
      anon_sym_LBRACE,
  [9816] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      aux_sym_instruction_repeat6,
    STATE(316), 1,
      sym_multiline_comment,
    ACTIONS(974), 2,
      sym__newline,
      anon_sym_LBRACE,
  [9836] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    STATE(317), 1,
      sym_multiline_comment,
    STATE(378), 1,
      sym_memory_operand,
    ACTIONS(593), 2,
      sym__newline,
      anon_sym_LBRACE,
  [9856] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(307), 1,
      aux_sym_instruction_repeat6,
    STATE(318), 1,
      sym_multiline_comment,
    ACTIONS(976), 2,
      sym__newline,
      anon_sym_LBRACE,
  [9876] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      aux_sym_instruction_repeat6,
    STATE(319), 1,
      sym_multiline_comment,
    ACTIONS(796), 2,
      sym__newline,
      anon_sym_LBRACE,
  [9896] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      aux_sym_instruction_repeat6,
    STATE(320), 1,
      sym_multiline_comment,
    ACTIONS(976), 2,
      sym__newline,
      anon_sym_LBRACE,
  [9916] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(321), 1,
      sym_multiline_comment,
    STATE(323), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(145), 2,
      sym__newline,
      anon_sym_LBRACE,
  [9936] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(322), 1,
      sym_multiline_comment,
    STATE(390), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(103), 2,
      sym__newline,
      anon_sym_LBRACE,
  [9956] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      aux_sym_instruction_repeat6,
    STATE(323), 1,
      sym_multiline_comment,
    ACTIONS(103), 2,
      sym__newline,
      anon_sym_LBRACE,
  [9976] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    STATE(324), 1,
      sym_multiline_comment,
    STATE(391), 1,
      sym_memory_operand,
    ACTIONS(103), 2,
      sym__newline,
      anon_sym_LBRACE,
  [9996] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    STATE(322), 1,
      sym_memory_operand,
    STATE(325), 1,
      sym_multiline_comment,
    ACTIONS(145), 2,
      sym__newline,
      anon_sym_LBRACE,
  [10016] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    STATE(309), 1,
      sym_memory_operand,
    STATE(326), 1,
      sym_multiline_comment,
    ACTIONS(587), 2,
      sym__newline,
      anon_sym_LBRACE,
  [10036] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(310), 1,
      aux_sym_instruction_repeat6,
    STATE(327), 1,
      sym_multiline_comment,
    ACTIONS(978), 2,
      sym__newline,
      anon_sym_LBRACE,
  [10056] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      aux_sym_instruction_repeat6,
    STATE(328), 1,
      sym_multiline_comment,
    ACTIONS(978), 2,
      sym__newline,
      anon_sym_LBRACE,
  [10076] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    STATE(312), 1,
      sym_memory_operand,
    STATE(329), 1,
      sym_multiline_comment,
    ACTIONS(814), 2,
      sym__newline,
      anon_sym_LBRACE,
  [10096] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(980), 1,
      anon_sym_LT,
    ACTIONS(982), 1,
      anon_sym_tied_DASHdef,
    ACTIONS(984), 1,
      sym_primitive_type,
    STATE(330), 1,
      sym_multiline_comment,
    STATE(552), 1,
      sym_low_level_type,
  [10118] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(313), 1,
      aux_sym_instruction_repeat6,
    STATE(331), 1,
      sym_multiline_comment,
    ACTIONS(814), 2,
      sym__newline,
      anon_sym_LBRACE,
  [10138] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      aux_sym_instruction_repeat6,
    STATE(332), 1,
      sym_multiline_comment,
    ACTIONS(814), 2,
      sym__newline,
      anon_sym_LBRACE,
  [10158] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    STATE(315), 1,
      sym_memory_operand,
    STATE(333), 1,
      sym_multiline_comment,
    ACTIONS(866), 2,
      sym__newline,
      anon_sym_LBRACE,
  [10178] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(316), 1,
      aux_sym_instruction_repeat6,
    STATE(334), 1,
      sym_multiline_comment,
    ACTIONS(866), 2,
      sym__newline,
      anon_sym_LBRACE,
  [10198] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      aux_sym_instruction_repeat6,
    STATE(335), 1,
      sym_multiline_comment,
    ACTIONS(866), 2,
      sym__newline,
      anon_sym_LBRACE,
  [10218] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(320), 1,
      aux_sym_instruction_repeat6,
    STATE(336), 1,
      sym_multiline_comment,
    ACTIONS(936), 2,
      sym__newline,
      anon_sym_LBRACE,
  [10238] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      aux_sym_instruction_repeat6,
    STATE(337), 1,
      sym_multiline_comment,
    ACTIONS(936), 2,
      sym__newline,
      anon_sym_LBRACE,
  [10258] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      aux_sym_instruction_repeat6,
    STATE(338), 1,
      sym_multiline_comment,
    ACTIONS(986), 2,
      sym__newline,
      anon_sym_LBRACE,
  [10278] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(980), 1,
      anon_sym_LT,
    ACTIONS(984), 1,
      sym_primitive_type,
    ACTIONS(988), 1,
      anon_sym_tied_DASHdef,
    STATE(339), 1,
      sym_multiline_comment,
    STATE(570), 1,
      sym_low_level_type,
  [10300] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    STATE(340), 1,
      sym_multiline_comment,
    STATE(374), 1,
      sym_memory_operand,
    ACTIONS(641), 2,
      sym__newline,
      anon_sym_LBRACE,
  [10320] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(341), 1,
      sym_multiline_comment,
    ACTIONS(990), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10336] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    STATE(327), 1,
      sym_memory_operand,
    STATE(342), 1,
      sym_multiline_comment,
    ACTIONS(992), 2,
      sym__newline,
      anon_sym_LBRACE,
  [10356] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(328), 1,
      aux_sym_instruction_repeat6,
    STATE(343), 1,
      sym_multiline_comment,
    ACTIONS(992), 2,
      sym__newline,
      anon_sym_LBRACE,
  [10376] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      aux_sym_instruction_repeat6,
    STATE(344), 1,
      sym_multiline_comment,
    ACTIONS(992), 2,
      sym__newline,
      anon_sym_LBRACE,
  [10396] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    STATE(331), 1,
      sym_memory_operand,
    STATE(345), 1,
      sym_multiline_comment,
    ACTIONS(125), 2,
      sym__newline,
      anon_sym_LBRACE,
  [10416] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      aux_sym_instruction_repeat6,
    STATE(346), 1,
      sym_multiline_comment,
    ACTIONS(125), 2,
      sym__newline,
      anon_sym_LBRACE,
  [10436] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    STATE(292), 1,
      sym_memory_operand,
    STATE(347), 1,
      sym_multiline_comment,
    ACTIONS(121), 2,
      sym__newline,
      anon_sym_LBRACE,
  [10456] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(332), 1,
      aux_sym_instruction_repeat6,
    STATE(348), 1,
      sym_multiline_comment,
    ACTIONS(125), 2,
      sym__newline,
      anon_sym_LBRACE,
  [10476] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    STATE(334), 1,
      sym_memory_operand,
    STATE(349), 1,
      sym_multiline_comment,
    ACTIONS(824), 2,
      sym__newline,
      anon_sym_LBRACE,
  [10496] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(335), 1,
      aux_sym_instruction_repeat6,
    STATE(350), 1,
      sym_multiline_comment,
    ACTIONS(824), 2,
      sym__newline,
      anon_sym_LBRACE,
  [10516] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      aux_sym_instruction_repeat6,
    STATE(351), 1,
      sym_multiline_comment,
    ACTIONS(824), 2,
      sym__newline,
      anon_sym_LBRACE,
  [10536] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(996), 1,
      aux_sym_float_token1,
    STATE(137), 1,
      sym_float,
    STATE(352), 1,
      sym_multiline_comment,
    ACTIONS(994), 2,
      sym_number,
      aux_sym_float_token2,
  [10556] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    STATE(336), 1,
      sym_memory_operand,
    STATE(353), 1,
      sym_multiline_comment,
    ACTIONS(858), 2,
      sym__newline,
      anon_sym_LBRACE,
  [10576] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(337), 1,
      aux_sym_instruction_repeat6,
    STATE(354), 1,
      sym_multiline_comment,
    ACTIONS(858), 2,
      sym__newline,
      anon_sym_LBRACE,
  [10596] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      aux_sym_instruction_repeat6,
    STATE(355), 1,
      sym_multiline_comment,
    ACTIONS(858), 2,
      sym__newline,
      anon_sym_LBRACE,
  [10616] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(338), 1,
      aux_sym_instruction_repeat6,
    STATE(356), 1,
      sym_multiline_comment,
    ACTIONS(998), 2,
      sym__newline,
      anon_sym_LBRACE,
  [10636] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      aux_sym_instruction_repeat6,
    STATE(357), 1,
      sym_multiline_comment,
    ACTIONS(998), 2,
      sym__newline,
      anon_sym_LBRACE,
  [10656] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      aux_sym_instruction_repeat6,
    STATE(358), 1,
      sym_multiline_comment,
    ACTIONS(906), 2,
      sym__newline,
      anon_sym_LBRACE,
  [10676] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(359), 1,
      sym_multiline_comment,
    STATE(397), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(906), 2,
      sym__newline,
      anon_sym_LBRACE,
  [10696] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    STATE(360), 1,
      sym_multiline_comment,
    STATE(396), 1,
      sym_memory_operand,
    ACTIONS(906), 2,
      sym__newline,
      anon_sym_LBRACE,
  [10716] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(980), 1,
      anon_sym_LT,
    ACTIONS(984), 1,
      sym_primitive_type,
    ACTIONS(1000), 1,
      anon_sym_tied_DASHdef,
    STATE(361), 1,
      sym_multiline_comment,
    STATE(591), 1,
      sym_low_level_type,
  [10738] = 6,
    ACTIONS(945), 1,
      sym_comment,
    ACTIONS(947), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1002), 1,
      anon_sym_STAR_SLASH,
    STATE(295), 1,
      aux_sym_multiline_comment_repeat1,
    STATE(362), 1,
      sym_multiline_comment,
    ACTIONS(949), 2,
      aux_sym_multiline_comment_token1,
      aux_sym_multiline_comment_token2,
  [10758] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(363), 1,
      sym_multiline_comment,
    ACTIONS(1004), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10774] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1006), 1,
      sym__newline,
    STATE(364), 1,
      sym_multiline_comment,
    STATE(398), 1,
      sym_register,
    ACTIONS(1008), 2,
      sym_var,
      sym_physical_register,
  [10794] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(365), 1,
      sym_multiline_comment,
    ACTIONS(1010), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10810] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(516), 1,
      anon_sym_LPAREN,
    ACTIONS(1012), 1,
      anon_sym_COLON,
    STATE(366), 1,
      sym_multiline_comment,
    ACTIONS(518), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [10830] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    STATE(343), 1,
      sym_memory_operand,
    STATE(367), 1,
      sym_multiline_comment,
    ACTIONS(884), 2,
      sym__newline,
      anon_sym_LBRACE,
  [10850] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(344), 1,
      aux_sym_instruction_repeat6,
    STATE(368), 1,
      sym_multiline_comment,
    ACTIONS(884), 2,
      sym__newline,
      anon_sym_LBRACE,
  [10870] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(369), 1,
      sym_multiline_comment,
    STATE(389), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(113), 2,
      sym__newline,
      anon_sym_LBRACE,
  [10890] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      aux_sym_instruction_repeat6,
    STATE(370), 1,
      sym_multiline_comment,
    ACTIONS(113), 2,
      sym__newline,
      anon_sym_LBRACE,
  [10910] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    STATE(371), 1,
      sym_multiline_comment,
    STATE(387), 1,
      sym_memory_operand,
    ACTIONS(113), 2,
      sym__newline,
      anon_sym_LBRACE,
  [10930] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      aux_sym_instruction_repeat6,
    STATE(372), 1,
      sym_multiline_comment,
    ACTIONS(884), 2,
      sym__newline,
      anon_sym_LBRACE,
  [10950] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    STATE(373), 1,
      sym_multiline_comment,
    STATE(388), 1,
      sym_memory_operand,
    ACTIONS(117), 2,
      sym__newline,
      anon_sym_LBRACE,
  [10970] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(374), 1,
      sym_multiline_comment,
    STATE(384), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(117), 2,
      sym__newline,
      anon_sym_LBRACE,
  [10990] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(346), 1,
      aux_sym_instruction_repeat6,
    STATE(375), 1,
      sym_multiline_comment,
    ACTIONS(141), 2,
      sym__newline,
      anon_sym_LBRACE,
  [11010] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    STATE(348), 1,
      sym_memory_operand,
    STATE(376), 1,
      sym_multiline_comment,
    ACTIONS(141), 2,
      sym__newline,
      anon_sym_LBRACE,
  [11030] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    STATE(377), 1,
      sym_multiline_comment,
    STATE(382), 1,
      sym_memory_operand,
    ACTIONS(137), 2,
      sym__newline,
      anon_sym_LBRACE,
  [11050] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(378), 1,
      sym_multiline_comment,
    STATE(381), 1,
      aux_sym_instruction_repeat6,
    ACTIONS(137), 2,
      sym__newline,
      anon_sym_LBRACE,
  [11070] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1014), 1,
      anon_sym_RPAREN,
    STATE(379), 1,
      sym_multiline_comment,
    STATE(437), 1,
      sym_register,
    ACTIONS(1016), 2,
      sym_var,
      sym_physical_register,
  [11090] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    STATE(350), 1,
      sym_memory_operand,
    STATE(380), 1,
      sym_multiline_comment,
    ACTIONS(133), 2,
      sym__newline,
      anon_sym_LBRACE,
  [11110] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      aux_sym_instruction_repeat6,
    STATE(381), 1,
      sym_multiline_comment,
    ACTIONS(133), 2,
      sym__newline,
      anon_sym_LBRACE,
  [11130] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(351), 1,
      aux_sym_instruction_repeat6,
    STATE(382), 1,
      sym_multiline_comment,
    ACTIONS(133), 2,
      sym__newline,
      anon_sym_LBRACE,
  [11150] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1018), 1,
      anon_sym_RPAREN,
    STATE(383), 1,
      sym_multiline_comment,
    STATE(472), 1,
      sym_register,
    ACTIONS(1016), 2,
      sym_var,
      sym_physical_register,
  [11170] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      aux_sym_instruction_repeat6,
    STATE(384), 1,
      sym_multiline_comment,
    ACTIONS(121), 2,
      sym__newline,
      anon_sym_LBRACE,
  [11190] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    STATE(354), 1,
      sym_memory_operand,
    STATE(385), 1,
      sym_multiline_comment,
    ACTIONS(800), 2,
      sym__newline,
      anon_sym_LBRACE,
  [11210] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    STATE(375), 1,
      sym_memory_operand,
    STATE(386), 1,
      sym_multiline_comment,
    ACTIONS(603), 2,
      sym__newline,
      anon_sym_LBRACE,
  [11230] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(355), 1,
      aux_sym_instruction_repeat6,
    STATE(387), 1,
      sym_multiline_comment,
    ACTIONS(800), 2,
      sym__newline,
      anon_sym_LBRACE,
  [11250] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(319), 1,
      aux_sym_instruction_repeat6,
    STATE(388), 1,
      sym_multiline_comment,
    ACTIONS(121), 2,
      sym__newline,
      anon_sym_LBRACE,
  [11270] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      aux_sym_instruction_repeat6,
    STATE(389), 1,
      sym_multiline_comment,
    ACTIONS(800), 2,
      sym__newline,
      anon_sym_LBRACE,
  [11290] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      aux_sym_instruction_repeat6,
    STATE(390), 1,
      sym_multiline_comment,
    ACTIONS(806), 2,
      sym__newline,
      anon_sym_LBRACE,
  [11310] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(372), 1,
      aux_sym_instruction_repeat6,
    STATE(391), 1,
      sym_multiline_comment,
    ACTIONS(806), 2,
      sym__newline,
      anon_sym_LBRACE,
  [11330] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    STATE(368), 1,
      sym_memory_operand,
    STATE(392), 1,
      sym_multiline_comment,
    ACTIONS(806), 2,
      sym__newline,
      anon_sym_LBRACE,
  [11350] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    STATE(356), 1,
      sym_memory_operand,
    STATE(393), 1,
      sym_multiline_comment,
    ACTIONS(1020), 2,
      sym__newline,
      anon_sym_LBRACE,
  [11370] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(980), 1,
      anon_sym_LT,
    ACTIONS(984), 1,
      sym_primitive_type,
    ACTIONS(1022), 1,
      anon_sym_tied_DASHdef,
    STATE(394), 1,
      sym_multiline_comment,
    STATE(523), 1,
      sym_low_level_type,
  [11392] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    STATE(321), 1,
      sym_memory_operand,
    STATE(395), 1,
      sym_multiline_comment,
    ACTIONS(616), 2,
      sym__newline,
      anon_sym_LBRACE,
  [11412] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(357), 1,
      aux_sym_instruction_repeat6,
    STATE(396), 1,
      sym_multiline_comment,
    ACTIONS(1020), 2,
      sym__newline,
      anon_sym_LBRACE,
  [11432] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      aux_sym_instruction_repeat6,
    STATE(397), 1,
      sym_multiline_comment,
    ACTIONS(1020), 2,
      sym__newline,
      anon_sym_LBRACE,
  [11452] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1024), 1,
      anon_sym_COMMA,
    ACTIONS(1026), 1,
      anon_sym_COLON,
    ACTIONS(1028), 1,
      sym__newline,
    STATE(398), 1,
      sym_multiline_comment,
    STATE(485), 1,
      aux_sym_liveins_repeat1,
  [11474] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(399), 1,
      sym_multiline_comment,
    ACTIONS(1030), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11490] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(400), 1,
      sym_multiline_comment,
    ACTIONS(1032), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11506] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(401), 1,
      sym_multiline_comment,
    ACTIONS(1034), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11522] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(402), 1,
      sym_multiline_comment,
    ACTIONS(1036), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11538] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(403), 1,
      sym_multiline_comment,
    ACTIONS(1038), 3,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
  [11553] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(404), 1,
      sym_multiline_comment,
    ACTIONS(1040), 3,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
  [11568] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(405), 1,
      sym_multiline_comment,
    ACTIONS(1042), 3,
      ts_builtin_sym_end,
      sym__newline,
      sym_identifier,
  [11583] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1044), 1,
      anon_sym_COMMA,
    ACTIONS(1046), 1,
      anon_sym_RPAREN,
    STATE(406), 1,
      sym_multiline_comment,
    STATE(477), 1,
      aux_sym_custom_regmask_repeat1,
  [11602] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    ACTIONS(878), 1,
      anon_sym_RPAREN,
    STATE(407), 1,
      sym_multiline_comment,
    STATE(410), 1,
      aux_sym_memory_operand_repeat2,
  [11621] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(980), 1,
      anon_sym_LT,
    ACTIONS(984), 1,
      sym_primitive_type,
    STATE(408), 1,
      sym_multiline_comment,
    STATE(595), 1,
      sym_low_level_type,
  [11640] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(409), 1,
      sym_multiline_comment,
    ACTIONS(1048), 3,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
  [11655] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1050), 1,
      anon_sym_COMMA,
    ACTIONS(1053), 1,
      anon_sym_RPAREN,
    STATE(410), 2,
      sym_multiline_comment,
      aux_sym_memory_operand_repeat2,
  [11672] = 4,
    ACTIONS(945), 1,
      sym_comment,
    ACTIONS(947), 1,
      anon_sym_SLASH_STAR,
    STATE(411), 1,
      sym_multiline_comment,
    ACTIONS(1055), 3,
      aux_sym_multiline_comment_token1,
      aux_sym_multiline_comment_token2,
      anon_sym_STAR_SLASH,
  [11687] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(412), 1,
      sym_multiline_comment,
    ACTIONS(573), 3,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym__newline,
  [11702] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    ACTIONS(918), 1,
      anon_sym_RPAREN,
    STATE(410), 1,
      aux_sym_memory_operand_repeat2,
    STATE(413), 1,
      sym_multiline_comment,
  [11721] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(980), 1,
      anon_sym_LT,
    ACTIONS(984), 1,
      sym_primitive_type,
    STATE(414), 1,
      sym_multiline_comment,
    STATE(551), 1,
      sym_low_level_type,
  [11740] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1057), 1,
      anon_sym_LPAREN,
    STATE(415), 1,
      sym_multiline_comment,
    ACTIONS(1059), 2,
      sym_number,
      anon_sym_unknown_DASHsize,
  [11757] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(717), 1,
      anon_sym_LPAREN,
    STATE(416), 1,
      sym_multiline_comment,
    ACTIONS(719), 2,
      sym_number,
      anon_sym_unknown_DASHsize,
  [11774] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(417), 1,
      sym_multiline_comment,
    ACTIONS(1061), 3,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
  [11789] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    ACTIONS(1063), 1,
      anon_sym_RPAREN,
    STATE(410), 1,
      aux_sym_memory_operand_repeat2,
    STATE(418), 1,
      sym_multiline_comment,
  [11808] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(419), 1,
      sym_multiline_comment,
    ACTIONS(1065), 3,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
  [11823] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    ACTIONS(1067), 1,
      anon_sym_RPAREN,
    STATE(418), 1,
      aux_sym_memory_operand_repeat2,
    STATE(420), 1,
      sym_multiline_comment,
  [11842] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    ACTIONS(1067), 1,
      anon_sym_RPAREN,
    STATE(410), 1,
      aux_sym_memory_operand_repeat2,
    STATE(421), 1,
      sym_multiline_comment,
  [11861] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1069), 1,
      anon_sym_COMMA,
    ACTIONS(1072), 1,
      anon_sym_EQ,
    STATE(422), 2,
      sym_multiline_comment,
      aux_sym_instruction_repeat1,
  [11878] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(423), 1,
      sym_multiline_comment,
    ACTIONS(1074), 3,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
  [11893] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(106), 1,
      sym_registerclass,
    STATE(424), 1,
      sym_multiline_comment,
    ACTIONS(1076), 2,
      sym_identifier,
      anon_sym__,
  [11910] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    ACTIONS(904), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      aux_sym_memory_operand_repeat2,
    STATE(425), 1,
      sym_multiline_comment,
  [11929] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    ACTIONS(904), 1,
      anon_sym_RPAREN,
    STATE(410), 1,
      aux_sym_memory_operand_repeat2,
    STATE(426), 1,
      sym_multiline_comment,
  [11948] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(930), 1,
      anon_sym_COMMA,
    ACTIONS(1078), 1,
      sym__newline,
    STATE(427), 1,
      sym_multiline_comment,
    STATE(448), 1,
      aux_sym_successors_repeat1,
  [11967] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(428), 1,
      sym_multiline_comment,
    ACTIONS(1080), 3,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
  [11982] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(980), 1,
      anon_sym_LT,
    ACTIONS(984), 1,
      sym_primitive_type,
    STATE(429), 1,
      sym_multiline_comment,
    STATE(542), 1,
      sym_low_level_type,
  [12001] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(430), 1,
      sym_multiline_comment,
    STATE(449), 1,
      sym_register,
    ACTIONS(1008), 2,
      sym_var,
      sym_physical_register,
  [12018] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(930), 1,
      anon_sym_COMMA,
    ACTIONS(1082), 1,
      sym__newline,
    STATE(431), 1,
      sym_multiline_comment,
    STATE(448), 1,
      aux_sym_successors_repeat1,
  [12037] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    ACTIONS(862), 1,
      anon_sym_RPAREN,
    STATE(410), 1,
      aux_sym_memory_operand_repeat2,
    STATE(432), 1,
      sym_multiline_comment,
  [12056] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(116), 1,
      sym_registerclass,
    STATE(433), 1,
      sym_multiline_comment,
    ACTIONS(1076), 2,
      sym_identifier,
      anon_sym__,
  [12073] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    ACTIONS(856), 1,
      anon_sym_RPAREN,
    STATE(426), 1,
      aux_sym_memory_operand_repeat2,
    STATE(434), 1,
      sym_multiline_comment,
  [12092] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    ACTIONS(856), 1,
      anon_sym_RPAREN,
    STATE(410), 1,
      aux_sym_memory_operand_repeat2,
    STATE(435), 1,
      sym_multiline_comment,
  [12111] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1084), 1,
      anon_sym_COMMA,
    ACTIONS(1086), 1,
      anon_sym_RPAREN,
    STATE(436), 1,
      sym_multiline_comment,
    STATE(466), 1,
      aux_sym_argument_repeat1,
  [12130] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1044), 1,
      anon_sym_COMMA,
    ACTIONS(1088), 1,
      anon_sym_RPAREN,
    STATE(406), 1,
      aux_sym_custom_regmask_repeat1,
    STATE(437), 1,
      sym_multiline_comment,
  [12149] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(438), 1,
      sym_multiline_comment,
    STATE(571), 1,
      sym_register,
    ACTIONS(1016), 2,
      sym_var,
      sym_physical_register,
  [12166] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(175), 1,
      sym_register,
    STATE(439), 1,
      sym_multiline_comment,
    ACTIONS(1016), 2,
      sym_var,
      sym_physical_register,
  [12183] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(980), 1,
      anon_sym_LT,
    ACTIONS(984), 1,
      sym_primitive_type,
    STATE(440), 1,
      sym_multiline_comment,
    STATE(525), 1,
      sym_low_level_type,
  [12202] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1090), 1,
      anon_sym_COMMA,
    ACTIONS(1092), 1,
      anon_sym_RPAREN,
    STATE(441), 1,
      sym_multiline_comment,
    STATE(480), 1,
      aux_sym_basic_block_repeat1,
  [12221] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    ACTIONS(900), 1,
      anon_sym_RPAREN,
    STATE(435), 1,
      aux_sym_memory_operand_repeat2,
    STATE(442), 1,
      sym_multiline_comment,
  [12240] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    ACTIONS(900), 1,
      anon_sym_RPAREN,
    STATE(410), 1,
      aux_sym_memory_operand_repeat2,
    STATE(443), 1,
      sym_multiline_comment,
  [12259] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(157), 1,
      sym_register,
    STATE(444), 1,
      sym_multiline_comment,
    ACTIONS(1016), 2,
      sym_var,
      sym_physical_register,
  [12276] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    ACTIONS(862), 1,
      anon_sym_RPAREN,
    STATE(445), 1,
      sym_multiline_comment,
    STATE(482), 1,
      aux_sym_memory_operand_repeat2,
  [12295] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(446), 1,
      sym_multiline_comment,
    ACTIONS(1094), 3,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
  [12310] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(447), 1,
      sym_multiline_comment,
    ACTIONS(1096), 3,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
  [12325] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1098), 1,
      anon_sym_COMMA,
    ACTIONS(1101), 1,
      sym__newline,
    STATE(448), 2,
      sym_multiline_comment,
      aux_sym_successors_repeat1,
  [12342] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1105), 1,
      anon_sym_COLON,
    STATE(449), 1,
      sym_multiline_comment,
    ACTIONS(1103), 2,
      anon_sym_COMMA,
      sym__newline,
  [12359] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1024), 1,
      anon_sym_COMMA,
    ACTIONS(1107), 1,
      sym__newline,
    STATE(450), 1,
      sym_multiline_comment,
    STATE(453), 1,
      aux_sym_liveins_repeat1,
  [12378] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(451), 1,
      sym_multiline_comment,
    STATE(574), 1,
      sym_register,
    ACTIONS(1016), 2,
      sym_var,
      sym_physical_register,
  [12395] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1103), 1,
      sym__newline,
    ACTIONS(1109), 1,
      anon_sym_COMMA,
    STATE(452), 2,
      sym_multiline_comment,
      aux_sym_liveins_repeat1,
  [12412] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1024), 1,
      anon_sym_COMMA,
    ACTIONS(1112), 1,
      sym__newline,
    STATE(452), 1,
      aux_sym_liveins_repeat1,
    STATE(453), 1,
      sym_multiline_comment,
  [12431] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    ACTIONS(896), 1,
      anon_sym_RPAREN,
    STATE(443), 1,
      aux_sym_memory_operand_repeat2,
    STATE(454), 1,
      sym_multiline_comment,
  [12450] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(455), 1,
      sym_multiline_comment,
    ACTIONS(1114), 3,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
  [12465] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    ACTIONS(896), 1,
      anon_sym_RPAREN,
    STATE(410), 1,
      aux_sym_memory_operand_repeat2,
    STATE(456), 1,
      sym_multiline_comment,
  [12484] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(457), 1,
      sym_multiline_comment,
    ACTIONS(1116), 3,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
  [12499] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(458), 1,
      sym_multiline_comment,
    STATE(576), 1,
      sym_register,
    ACTIONS(1016), 2,
      sym_var,
      sym_physical_register,
  [12516] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    ACTIONS(874), 1,
      anon_sym_RPAREN,
    STATE(410), 1,
      aux_sym_memory_operand_repeat2,
    STATE(459), 1,
      sym_multiline_comment,
  [12535] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1118), 1,
      anon_sym_COMMA,
    ACTIONS(1121), 1,
      anon_sym_RPAREN,
    STATE(460), 2,
      sym_multiline_comment,
      aux_sym_basic_block_repeat1,
  [12552] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(461), 1,
      sym_multiline_comment,
    ACTIONS(1123), 3,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
  [12567] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1125), 1,
      anon_sym_COMMA,
    ACTIONS(1127), 1,
      anon_sym_EQ,
    STATE(422), 1,
      aux_sym_instruction_repeat1,
    STATE(462), 1,
      sym_multiline_comment,
  [12586] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(930), 1,
      anon_sym_COMMA,
    ACTIONS(1129), 1,
      sym__newline,
    STATE(427), 1,
      aux_sym_successors_repeat1,
    STATE(463), 1,
      sym_multiline_comment,
  [12605] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1131), 1,
      sym__newline,
    ACTIONS(1133), 1,
      anon_sym_LBRACE,
    STATE(464), 1,
      sym_multiline_comment,
    STATE(553), 1,
      sym_bundle,
  [12624] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1135), 1,
      anon_sym_COMMA,
    ACTIONS(1137), 1,
      anon_sym_RPAREN,
    STATE(465), 1,
      sym_multiline_comment,
    STATE(468), 1,
      aux_sym_shuffle_mask_repeat1,
  [12643] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1084), 1,
      anon_sym_COMMA,
    ACTIONS(1139), 1,
      anon_sym_RPAREN,
    STATE(466), 1,
      sym_multiline_comment,
    STATE(481), 1,
      aux_sym_argument_repeat1,
  [12662] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    ACTIONS(874), 1,
      anon_sym_RPAREN,
    STATE(432), 1,
      aux_sym_memory_operand_repeat2,
    STATE(467), 1,
      sym_multiline_comment,
  [12681] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1135), 1,
      anon_sym_COMMA,
    ACTIONS(1141), 1,
      anon_sym_RPAREN,
    STATE(468), 1,
      sym_multiline_comment,
    STATE(475), 1,
      aux_sym_shuffle_mask_repeat1,
  [12700] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(980), 1,
      anon_sym_LT,
    ACTIONS(984), 1,
      sym_primitive_type,
    STATE(469), 1,
      sym_multiline_comment,
    STATE(527), 1,
      sym_low_level_type,
  [12719] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(742), 1,
      anon_sym_LPAREN,
    STATE(470), 1,
      sym_multiline_comment,
    ACTIONS(744), 2,
      sym_number,
      anon_sym_unknown_DASHsize,
  [12736] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(471), 1,
      sym_multiline_comment,
    STATE(499), 1,
      sym_register,
    ACTIONS(1016), 2,
      sym_var,
      sym_physical_register,
  [12753] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1044), 1,
      anon_sym_COMMA,
    ACTIONS(1143), 1,
      anon_sym_RPAREN,
    STATE(472), 1,
      sym_multiline_comment,
    STATE(473), 1,
      aux_sym_custom_regmask_repeat1,
  [12772] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1044), 1,
      anon_sym_COMMA,
    ACTIONS(1145), 1,
      anon_sym_RPAREN,
    STATE(473), 1,
      sym_multiline_comment,
    STATE(477), 1,
      aux_sym_custom_regmask_repeat1,
  [12791] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(474), 1,
      sym_multiline_comment,
    ACTIONS(943), 3,
      anon_sym_COMMA,
      sym__newline,
      anon_sym_LBRACE,
  [12806] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1147), 1,
      anon_sym_COMMA,
    ACTIONS(1150), 1,
      anon_sym_RPAREN,
    STATE(475), 2,
      sym_multiline_comment,
      aux_sym_shuffle_mask_repeat1,
  [12823] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(980), 1,
      anon_sym_LT,
    ACTIONS(984), 1,
      sym_primitive_type,
    STATE(476), 1,
      sym_multiline_comment,
    STATE(560), 1,
      sym_low_level_type,
  [12842] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1152), 1,
      anon_sym_COMMA,
    ACTIONS(1155), 1,
      anon_sym_RPAREN,
    STATE(477), 2,
      sym_multiline_comment,
      aux_sym_custom_regmask_repeat1,
  [12859] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1125), 1,
      anon_sym_COMMA,
    ACTIONS(1157), 1,
      anon_sym_EQ,
    STATE(462), 1,
      aux_sym_instruction_repeat1,
    STATE(478), 1,
      sym_multiline_comment,
  [12878] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1161), 1,
      aux_sym_float_token1,
    STATE(479), 1,
      sym_multiline_comment,
    ACTIONS(1159), 2,
      sym_number,
      aux_sym_float_token2,
  [12895] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1090), 1,
      anon_sym_COMMA,
    ACTIONS(1163), 1,
      anon_sym_RPAREN,
    STATE(460), 1,
      aux_sym_basic_block_repeat1,
    STATE(480), 1,
      sym_multiline_comment,
  [12914] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1165), 1,
      anon_sym_COMMA,
    ACTIONS(1168), 1,
      anon_sym_RPAREN,
    STATE(481), 2,
      sym_multiline_comment,
      aux_sym_argument_repeat1,
  [12931] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    ACTIONS(888), 1,
      anon_sym_RPAREN,
    STATE(410), 1,
      aux_sym_memory_operand_repeat2,
    STATE(482), 1,
      sym_multiline_comment,
  [12950] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    ACTIONS(888), 1,
      anon_sym_RPAREN,
    STATE(456), 1,
      aux_sym_memory_operand_repeat2,
    STATE(483), 1,
      sym_multiline_comment,
  [12969] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1170), 1,
      anon_sym_LPAREN,
    STATE(484), 1,
      sym_multiline_comment,
    ACTIONS(1101), 2,
      anon_sym_COMMA,
      sym__newline,
  [12986] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1024), 1,
      anon_sym_COMMA,
    ACTIONS(1172), 1,
      sym__newline,
    STATE(452), 1,
      aux_sym_liveins_repeat1,
    STATE(485), 1,
      sym_multiline_comment,
  [13005] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(486), 1,
      sym_multiline_comment,
    ACTIONS(1174), 3,
      sym_number,
      anon_sym_true,
      anon_sym_false,
  [13020] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(786), 1,
      anon_sym_debug_DASHinstr_DASHnumber,
    STATE(487), 1,
      sym_multiline_comment,
    ACTIONS(784), 2,
      anon_sym_heap_DASHalloc_DASHmarker,
      anon_sym_debug_DASHlocation,
  [13037] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(597), 1,
      anon_sym_LPAREN,
    STATE(488), 1,
      sym_multiline_comment,
    ACTIONS(599), 2,
      sym_number,
      anon_sym_unknown_DASHsize,
  [13054] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(489), 1,
      sym_multiline_comment,
    ACTIONS(1176), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13068] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(490), 1,
      sym_multiline_comment,
    ACTIONS(1178), 2,
      anon_sym_COMMA,
      sym__newline,
  [13082] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(491), 1,
      sym_multiline_comment,
    ACTIONS(1180), 2,
      sym_number,
      anon_sym_undef,
  [13096] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(492), 1,
      sym_multiline_comment,
    ACTIONS(782), 2,
      anon_sym_pre_DASHinstr_DASHsymbol,
      anon_sym_post_DASHinstr_DASHsymbol,
  [13110] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(493), 1,
      sym_multiline_comment,
    ACTIONS(1168), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13124] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(494), 1,
      sym_multiline_comment,
    ACTIONS(1150), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13138] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1182), 1,
      sym__newline,
    ACTIONS(1184), 1,
      sym_bb_ref,
    STATE(495), 1,
      sym_multiline_comment,
  [13154] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1186), 1,
      sym_identifier,
    STATE(116), 1,
      sym_subregister,
    STATE(496), 1,
      sym_multiline_comment,
  [13170] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(497), 1,
      sym_multiline_comment,
    ACTIONS(1188), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13184] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(39), 1,
      anon_sym_LT,
    STATE(194), 1,
      sym_mc_symbol,
    STATE(498), 1,
      sym_multiline_comment,
  [13200] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(499), 1,
      sym_multiline_comment,
    ACTIONS(1155), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13214] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(500), 1,
      sym_multiline_comment,
    ACTIONS(1121), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13228] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(29), 1,
      sym_metadata_ref,
    STATE(245), 1,
      sym_metadata,
    STATE(501), 1,
      sym_multiline_comment,
  [13244] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(502), 1,
      sym_multiline_comment,
    ACTIONS(1190), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13258] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(503), 1,
      sym_multiline_comment,
    ACTIONS(1192), 2,
      sym_external_symbol,
      sym_global_var,
  [13272] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(39), 1,
      anon_sym_LT,
    STATE(202), 1,
      sym_mc_symbol,
    STATE(504), 1,
      sym_multiline_comment,
  [13288] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(29), 1,
      sym_metadata_ref,
    STATE(246), 1,
      sym_metadata,
    STATE(505), 1,
      sym_multiline_comment,
  [13304] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(506), 1,
      sym_multiline_comment,
    ACTIONS(1072), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [13318] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(507), 1,
      sym_multiline_comment,
    ACTIONS(1194), 2,
      sym_identifier,
      sym_string,
  [13332] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(508), 1,
      sym_multiline_comment,
    ACTIONS(1196), 2,
      sym_number,
      anon_sym_undef,
  [13346] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    STATE(474), 1,
      sym_memory_operand,
    STATE(509), 1,
      sym_multiline_comment,
  [13362] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1186), 1,
      sym_identifier,
    STATE(106), 1,
      sym_subregister,
    STATE(510), 1,
      sym_multiline_comment,
  [13378] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(511), 1,
      sym_multiline_comment,
    ACTIONS(1198), 2,
      anon_sym_COMMA,
      sym__newline,
  [13392] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(29), 1,
      sym_metadata_ref,
    STATE(497), 1,
      sym_metadata,
    STATE(512), 1,
      sym_multiline_comment,
  [13408] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1200), 1,
      anon_sym_LPAREN,
    ACTIONS(1202), 1,
      anon_sym_COLON,
    STATE(513), 1,
      sym_multiline_comment,
  [13424] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(514), 1,
      sym_multiline_comment,
    ACTIONS(1204), 2,
      anon_sym_LPAREN,
      anon_sym_COLON,
  [13438] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(515), 1,
      sym_multiline_comment,
    ACTIONS(1053), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13452] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1206), 1,
      sym_number,
    STATE(516), 1,
      sym_multiline_comment,
  [13465] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1208), 1,
      anon_sym_x,
    STATE(517), 1,
      sym_multiline_comment,
  [13478] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1210), 1,
      anon_sym_LPAREN,
    STATE(518), 1,
      sym_multiline_comment,
  [13491] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1212), 1,
      sym_number,
    STATE(519), 1,
      sym_multiline_comment,
  [13504] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1214), 1,
      anon_sym_mcsymbol,
    STATE(520), 1,
      sym_multiline_comment,
  [13517] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1216), 1,
      sym_number,
    STATE(521), 1,
      sym_multiline_comment,
  [13530] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1218), 1,
      anon_sym_LPAREN,
    STATE(522), 1,
      sym_multiline_comment,
  [13543] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1220), 1,
      anon_sym_RPAREN,
    STATE(523), 1,
      sym_multiline_comment,
  [13556] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1222), 1,
      sym_bb_ref,
    STATE(524), 1,
      sym_multiline_comment,
  [13569] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(599), 1,
      anon_sym_RPAREN,
    STATE(525), 1,
      sym_multiline_comment,
  [13582] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1224), 1,
      sym_number,
    STATE(526), 1,
      sym_multiline_comment,
  [13595] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1059), 1,
      anon_sym_RPAREN,
    STATE(527), 1,
      sym_multiline_comment,
  [13608] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1192), 1,
      sym_string,
    STATE(528), 1,
      sym_multiline_comment,
  [13621] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1226), 1,
      sym_number,
    STATE(529), 1,
      sym_multiline_comment,
  [13634] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1228), 1,
      sym_number,
    STATE(530), 1,
      sym_multiline_comment,
  [13647] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1230), 1,
      sym_string,
    STATE(531), 1,
      sym_multiline_comment,
  [13660] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1232), 1,
      anon_sym_LPAREN,
    STATE(532), 1,
      sym_multiline_comment,
  [13673] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1234), 1,
      anon_sym_LPAREN,
    STATE(533), 1,
      sym_multiline_comment,
  [13686] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1236), 1,
      sym__newline,
    STATE(534), 1,
      sym_multiline_comment,
  [13699] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1238), 1,
      anon_sym_LPAREN,
    STATE(535), 1,
      sym_multiline_comment,
  [13712] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1240), 1,
      anon_sym_LPAREN,
    STATE(536), 1,
      sym_multiline_comment,
  [13725] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1242), 1,
      anon_sym_LPAREN,
    STATE(537), 1,
      sym_multiline_comment,
  [13738] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1244), 1,
      sym_global_var,
    STATE(538), 1,
      sym_multiline_comment,
  [13751] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1246), 1,
      anon_sym_COLON,
    STATE(539), 1,
      sym_multiline_comment,
  [13764] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1248), 1,
      anon_sym_LPAREN,
    STATE(540), 1,
      sym_multiline_comment,
  [13777] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1250), 1,
      anon_sym_LPAREN,
    STATE(541), 1,
      sym_multiline_comment,
  [13790] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1252), 1,
      anon_sym_RPAREN,
    STATE(542), 1,
      sym_multiline_comment,
  [13803] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1254), 1,
      anon_sym_RPAREN,
    STATE(543), 1,
      sym_multiline_comment,
  [13816] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1256), 1,
      sym_number,
    STATE(544), 1,
      sym_multiline_comment,
  [13829] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1258), 1,
      sym_number,
    STATE(545), 1,
      sym_multiline_comment,
  [13842] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1260), 1,
      sym_ir_block,
    STATE(546), 1,
      sym_multiline_comment,
  [13855] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1262), 1,
      anon_sym_COMMA,
    STATE(547), 1,
      sym_multiline_comment,
  [13868] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1264), 1,
      anon_sym_RPAREN,
    STATE(548), 1,
      sym_multiline_comment,
  [13881] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1266), 1,
      anon_sym_RPAREN,
    STATE(549), 1,
      sym_multiline_comment,
  [13894] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1268), 1,
      anon_sym_GT,
    STATE(550), 1,
      sym_multiline_comment,
  [13907] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(744), 1,
      anon_sym_RPAREN,
    STATE(551), 1,
      sym_multiline_comment,
  [13920] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1270), 1,
      anon_sym_RPAREN,
    STATE(552), 1,
      sym_multiline_comment,
  [13933] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1272), 1,
      sym__newline,
    STATE(553), 1,
      sym_multiline_comment,
  [13946] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1274), 1,
      sym_number,
    STATE(554), 1,
      sym_multiline_comment,
  [13959] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1276), 1,
      anon_sym_COLON,
    STATE(555), 1,
      sym_multiline_comment,
  [13972] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1278), 1,
      anon_sym_RPAREN,
    STATE(556), 1,
      sym_multiline_comment,
  [13985] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1280), 1,
      sym__newline,
    STATE(557), 1,
      sym_multiline_comment,
  [13998] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1282), 1,
      anon_sym_COLON,
    STATE(558), 1,
      sym_multiline_comment,
  [14011] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1284), 1,
      anon_sym_COLON,
    STATE(559), 1,
      sym_multiline_comment,
  [14024] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1286), 1,
      anon_sym_RPAREN,
    STATE(560), 1,
      sym_multiline_comment,
  [14037] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1288), 1,
      sym_number,
    STATE(561), 1,
      sym_multiline_comment,
  [14050] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1290), 1,
      anon_sym_RPAREN,
    STATE(562), 1,
      sym_multiline_comment,
  [14063] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1292), 1,
      anon_sym_RPAREN,
    STATE(563), 1,
      sym_multiline_comment,
  [14076] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1294), 1,
      sym_number,
    STATE(564), 1,
      sym_multiline_comment,
  [14089] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1296), 1,
      anon_sym_RPAREN,
    STATE(565), 1,
      sym_multiline_comment,
  [14102] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1298), 1,
      anon_sym_RPAREN,
    STATE(566), 1,
      sym_multiline_comment,
  [14115] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1300), 1,
      sym_identifier,
    STATE(567), 1,
      sym_multiline_comment,
  [14128] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1302), 1,
      sym_number,
    STATE(568), 1,
      sym_multiline_comment,
  [14141] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1304), 1,
      sym_number,
    STATE(569), 1,
      sym_multiline_comment,
  [14154] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1306), 1,
      anon_sym_RPAREN,
    STATE(570), 1,
      sym_multiline_comment,
  [14167] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1308), 1,
      anon_sym_COMMA,
    STATE(571), 1,
      sym_multiline_comment,
  [14180] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1310), 1,
      sym_number,
    STATE(572), 1,
      sym_multiline_comment,
  [14193] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1312), 1,
      sym_number,
    STATE(573), 1,
      sym_multiline_comment,
  [14206] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1314), 1,
      anon_sym_COMMA,
    STATE(574), 1,
      sym_multiline_comment,
  [14219] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1316), 1,
      sym_primitive_type,
    STATE(575), 1,
      sym_multiline_comment,
  [14232] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1318), 1,
      anon_sym_COMMA,
    STATE(576), 1,
      sym_multiline_comment,
  [14245] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1320), 1,
      sym_number,
    STATE(577), 1,
      sym_multiline_comment,
  [14258] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1322), 1,
      anon_sym_GT,
    STATE(578), 1,
      sym_multiline_comment,
  [14271] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1324), 1,
      sym_identifier,
    STATE(579), 1,
      sym_multiline_comment,
  [14284] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1326), 1,
      anon_sym_COLON,
    STATE(580), 1,
      sym_multiline_comment,
  [14297] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1328), 1,
      sym_identifier,
    STATE(581), 1,
      sym_multiline_comment,
  [14310] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(393), 1,
      sym_string,
    STATE(582), 1,
      sym_multiline_comment,
  [14323] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1330), 1,
      anon_sym_RPAREN,
    STATE(583), 1,
      sym_multiline_comment,
  [14336] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1332), 1,
      sym_global_var,
    STATE(584), 1,
      sym_multiline_comment,
  [14349] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1334), 1,
      anon_sym_LPAREN,
    STATE(585), 1,
      sym_multiline_comment,
  [14362] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1336), 1,
      anon_sym_RPAREN,
    STATE(586), 1,
      sym_multiline_comment,
  [14375] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1338), 1,
      sym_number,
    STATE(587), 1,
      sym_multiline_comment,
  [14388] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1340), 1,
      sym_number,
    STATE(588), 1,
      sym_multiline_comment,
  [14401] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1342), 1,
      sym_number,
    STATE(589), 1,
      sym_multiline_comment,
  [14414] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1344), 1,
      anon_sym_RPAREN,
    STATE(590), 1,
      sym_multiline_comment,
  [14427] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1346), 1,
      anon_sym_RPAREN,
    STATE(591), 1,
      sym_multiline_comment,
  [14440] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1348), 1,
      anon_sym_COMMA,
    STATE(592), 1,
      sym_multiline_comment,
  [14453] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1350), 1,
      anon_sym_RPAREN,
    STATE(593), 1,
      sym_multiline_comment,
  [14466] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1352), 1,
      sym__newline,
    STATE(594), 1,
      sym_multiline_comment,
  [14479] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(719), 1,
      anon_sym_RPAREN,
    STATE(595), 1,
      sym_multiline_comment,
  [14492] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1354), 1,
      ts_builtin_sym_end,
    STATE(596), 1,
      sym_multiline_comment,
  [14505] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1356), 1,
      sym_number,
    STATE(597), 1,
      sym_multiline_comment,
  [14518] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1358), 1,
      sym__newline,
    STATE(598), 1,
      sym_multiline_comment,
  [14531] = 1,
    ACTIONS(1360), 1,
      ts_builtin_sym_end,
  [14535] = 1,
    ACTIONS(1362), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(20)] = 0,
  [SMALL_STATE(21)] = 89,
  [SMALL_STATE(22)] = 178,
  [SMALL_STATE(23)] = 267,
  [SMALL_STATE(24)] = 356,
  [SMALL_STATE(25)] = 445,
  [SMALL_STATE(26)] = 534,
  [SMALL_STATE(27)] = 623,
  [SMALL_STATE(28)] = 712,
  [SMALL_STATE(29)] = 788,
  [SMALL_STATE(30)] = 864,
  [SMALL_STATE(31)] = 940,
  [SMALL_STATE(32)] = 1016,
  [SMALL_STATE(33)] = 1092,
  [SMALL_STATE(34)] = 1168,
  [SMALL_STATE(35)] = 1242,
  [SMALL_STATE(36)] = 1318,
  [SMALL_STATE(37)] = 1392,
  [SMALL_STATE(38)] = 1468,
  [SMALL_STATE(39)] = 1524,
  [SMALL_STATE(40)] = 1569,
  [SMALL_STATE(41)] = 1614,
  [SMALL_STATE(42)] = 1661,
  [SMALL_STATE(43)] = 1704,
  [SMALL_STATE(44)] = 1747,
  [SMALL_STATE(45)] = 1790,
  [SMALL_STATE(46)] = 1833,
  [SMALL_STATE(47)] = 1876,
  [SMALL_STATE(48)] = 1927,
  [SMALL_STATE(49)] = 1971,
  [SMALL_STATE(50)] = 2004,
  [SMALL_STATE(51)] = 2035,
  [SMALL_STATE(52)] = 2085,
  [SMALL_STATE(53)] = 2135,
  [SMALL_STATE(54)] = 2185,
  [SMALL_STATE(55)] = 2235,
  [SMALL_STATE(56)] = 2285,
  [SMALL_STATE(57)] = 2333,
  [SMALL_STATE(58)] = 2363,
  [SMALL_STATE(59)] = 2393,
  [SMALL_STATE(60)] = 2443,
  [SMALL_STATE(61)] = 2491,
  [SMALL_STATE(62)] = 2541,
  [SMALL_STATE(63)] = 2571,
  [SMALL_STATE(64)] = 2621,
  [SMALL_STATE(65)] = 2651,
  [SMALL_STATE(66)] = 2681,
  [SMALL_STATE(67)] = 2711,
  [SMALL_STATE(68)] = 2745,
  [SMALL_STATE(69)] = 2777,
  [SMALL_STATE(70)] = 2825,
  [SMALL_STATE(71)] = 2873,
  [SMALL_STATE(72)] = 2903,
  [SMALL_STATE(73)] = 2933,
  [SMALL_STATE(74)] = 2967,
  [SMALL_STATE(75)] = 3001,
  [SMALL_STATE(76)] = 3051,
  [SMALL_STATE(77)] = 3099,
  [SMALL_STATE(78)] = 3147,
  [SMALL_STATE(79)] = 3181,
  [SMALL_STATE(80)] = 3231,
  [SMALL_STATE(81)] = 3261,
  [SMALL_STATE(82)] = 3309,
  [SMALL_STATE(83)] = 3359,
  [SMALL_STATE(84)] = 3407,
  [SMALL_STATE(85)] = 3457,
  [SMALL_STATE(86)] = 3499,
  [SMALL_STATE(87)] = 3533,
  [SMALL_STATE(88)] = 3563,
  [SMALL_STATE(89)] = 3596,
  [SMALL_STATE(90)] = 3635,
  [SMALL_STATE(91)] = 3674,
  [SMALL_STATE(92)] = 3716,
  [SMALL_STATE(93)] = 3758,
  [SMALL_STATE(94)] = 3800,
  [SMALL_STATE(95)] = 3830,
  [SMALL_STATE(96)] = 3856,
  [SMALL_STATE(97)] = 3882,
  [SMALL_STATE(98)] = 3924,
  [SMALL_STATE(99)] = 3954,
  [SMALL_STATE(100)] = 3996,
  [SMALL_STATE(101)] = 4038,
  [SMALL_STATE(102)] = 4080,
  [SMALL_STATE(103)] = 4122,
  [SMALL_STATE(104)] = 4164,
  [SMALL_STATE(105)] = 4206,
  [SMALL_STATE(106)] = 4243,
  [SMALL_STATE(107)] = 4270,
  [SMALL_STATE(108)] = 4297,
  [SMALL_STATE(109)] = 4334,
  [SMALL_STATE(110)] = 4363,
  [SMALL_STATE(111)] = 4392,
  [SMALL_STATE(112)] = 4419,
  [SMALL_STATE(113)] = 4446,
  [SMALL_STATE(114)] = 4473,
  [SMALL_STATE(115)] = 4500,
  [SMALL_STATE(116)] = 4525,
  [SMALL_STATE(117)] = 4552,
  [SMALL_STATE(118)] = 4577,
  [SMALL_STATE(119)] = 4605,
  [SMALL_STATE(120)] = 4639,
  [SMALL_STATE(121)] = 4663,
  [SMALL_STATE(122)] = 4703,
  [SMALL_STATE(123)] = 4727,
  [SMALL_STATE(124)] = 4751,
  [SMALL_STATE(125)] = 4791,
  [SMALL_STATE(126)] = 4815,
  [SMALL_STATE(127)] = 4855,
  [SMALL_STATE(128)] = 4889,
  [SMALL_STATE(129)] = 4929,
  [SMALL_STATE(130)] = 4955,
  [SMALL_STATE(131)] = 4979,
  [SMALL_STATE(132)] = 5019,
  [SMALL_STATE(133)] = 5059,
  [SMALL_STATE(134)] = 5099,
  [SMALL_STATE(135)] = 5139,
  [SMALL_STATE(136)] = 5163,
  [SMALL_STATE(137)] = 5191,
  [SMALL_STATE(138)] = 5219,
  [SMALL_STATE(139)] = 5247,
  [SMALL_STATE(140)] = 5287,
  [SMALL_STATE(141)] = 5327,
  [SMALL_STATE(142)] = 5351,
  [SMALL_STATE(143)] = 5375,
  [SMALL_STATE(144)] = 5398,
  [SMALL_STATE(145)] = 5435,
  [SMALL_STATE(146)] = 5472,
  [SMALL_STATE(147)] = 5495,
  [SMALL_STATE(148)] = 5532,
  [SMALL_STATE(149)] = 5569,
  [SMALL_STATE(150)] = 5592,
  [SMALL_STATE(151)] = 5615,
  [SMALL_STATE(152)] = 5638,
  [SMALL_STATE(153)] = 5661,
  [SMALL_STATE(154)] = 5698,
  [SMALL_STATE(155)] = 5721,
  [SMALL_STATE(156)] = 5744,
  [SMALL_STATE(157)] = 5781,
  [SMALL_STATE(158)] = 5804,
  [SMALL_STATE(159)] = 5827,
  [SMALL_STATE(160)] = 5864,
  [SMALL_STATE(161)] = 5887,
  [SMALL_STATE(162)] = 5910,
  [SMALL_STATE(163)] = 5947,
  [SMALL_STATE(164)] = 5984,
  [SMALL_STATE(165)] = 6021,
  [SMALL_STATE(166)] = 6044,
  [SMALL_STATE(167)] = 6067,
  [SMALL_STATE(168)] = 6104,
  [SMALL_STATE(169)] = 6127,
  [SMALL_STATE(170)] = 6150,
  [SMALL_STATE(171)] = 6175,
  [SMALL_STATE(172)] = 6198,
  [SMALL_STATE(173)] = 6235,
  [SMALL_STATE(174)] = 6272,
  [SMALL_STATE(175)] = 6295,
  [SMALL_STATE(176)] = 6318,
  [SMALL_STATE(177)] = 6355,
  [SMALL_STATE(178)] = 6392,
  [SMALL_STATE(179)] = 6415,
  [SMALL_STATE(180)] = 6443,
  [SMALL_STATE(181)] = 6469,
  [SMALL_STATE(182)] = 6497,
  [SMALL_STATE(183)] = 6525,
  [SMALL_STATE(184)] = 6553,
  [SMALL_STATE(185)] = 6581,
  [SMALL_STATE(186)] = 6609,
  [SMALL_STATE(187)] = 6637,
  [SMALL_STATE(188)] = 6659,
  [SMALL_STATE(189)] = 6683,
  [SMALL_STATE(190)] = 6711,
  [SMALL_STATE(191)] = 6732,
  [SMALL_STATE(192)] = 6759,
  [SMALL_STATE(193)] = 6780,
  [SMALL_STATE(194)] = 6801,
  [SMALL_STATE(195)] = 6822,
  [SMALL_STATE(196)] = 6843,
  [SMALL_STATE(197)] = 6864,
  [SMALL_STATE(198)] = 6891,
  [SMALL_STATE(199)] = 6912,
  [SMALL_STATE(200)] = 6937,
  [SMALL_STATE(201)] = 6958,
  [SMALL_STATE(202)] = 6979,
  [SMALL_STATE(203)] = 7000,
  [SMALL_STATE(204)] = 7025,
  [SMALL_STATE(205)] = 7051,
  [SMALL_STATE(206)] = 7079,
  [SMALL_STATE(207)] = 7109,
  [SMALL_STATE(208)] = 7137,
  [SMALL_STATE(209)] = 7165,
  [SMALL_STATE(210)] = 7195,
  [SMALL_STATE(211)] = 7225,
  [SMALL_STATE(212)] = 7253,
  [SMALL_STATE(213)] = 7281,
  [SMALL_STATE(214)] = 7311,
  [SMALL_STATE(215)] = 7339,
  [SMALL_STATE(216)] = 7367,
  [SMALL_STATE(217)] = 7395,
  [SMALL_STATE(218)] = 7423,
  [SMALL_STATE(219)] = 7451,
  [SMALL_STATE(220)] = 7481,
  [SMALL_STATE(221)] = 7509,
  [SMALL_STATE(222)] = 7537,
  [SMALL_STATE(223)] = 7567,
  [SMALL_STATE(224)] = 7597,
  [SMALL_STATE(225)] = 7625,
  [SMALL_STATE(226)] = 7655,
  [SMALL_STATE(227)] = 7683,
  [SMALL_STATE(228)] = 7711,
  [SMALL_STATE(229)] = 7741,
  [SMALL_STATE(230)] = 7771,
  [SMALL_STATE(231)] = 7799,
  [SMALL_STATE(232)] = 7829,
  [SMALL_STATE(233)] = 7857,
  [SMALL_STATE(234)] = 7887,
  [SMALL_STATE(235)] = 7915,
  [SMALL_STATE(236)] = 7945,
  [SMALL_STATE(237)] = 7975,
  [SMALL_STATE(238)] = 8003,
  [SMALL_STATE(239)] = 8033,
  [SMALL_STATE(240)] = 8061,
  [SMALL_STATE(241)] = 8091,
  [SMALL_STATE(242)] = 8121,
  [SMALL_STATE(243)] = 8151,
  [SMALL_STATE(244)] = 8181,
  [SMALL_STATE(245)] = 8211,
  [SMALL_STATE(246)] = 8230,
  [SMALL_STATE(247)] = 8249,
  [SMALL_STATE(248)] = 8268,
  [SMALL_STATE(249)] = 8287,
  [SMALL_STATE(250)] = 8313,
  [SMALL_STATE(251)] = 8337,
  [SMALL_STATE(252)] = 8361,
  [SMALL_STATE(253)] = 8385,
  [SMALL_STATE(254)] = 8409,
  [SMALL_STATE(255)] = 8433,
  [SMALL_STATE(256)] = 8457,
  [SMALL_STATE(257)] = 8481,
  [SMALL_STATE(258)] = 8505,
  [SMALL_STATE(259)] = 8531,
  [SMALL_STATE(260)] = 8555,
  [SMALL_STATE(261)] = 8579,
  [SMALL_STATE(262)] = 8603,
  [SMALL_STATE(263)] = 8627,
  [SMALL_STATE(264)] = 8651,
  [SMALL_STATE(265)] = 8675,
  [SMALL_STATE(266)] = 8699,
  [SMALL_STATE(267)] = 8723,
  [SMALL_STATE(268)] = 8747,
  [SMALL_STATE(269)] = 8775,
  [SMALL_STATE(270)] = 8799,
  [SMALL_STATE(271)] = 8823,
  [SMALL_STATE(272)] = 8849,
  [SMALL_STATE(273)] = 8873,
  [SMALL_STATE(274)] = 8897,
  [SMALL_STATE(275)] = 8923,
  [SMALL_STATE(276)] = 8947,
  [SMALL_STATE(277)] = 8973,
  [SMALL_STATE(278)] = 8997,
  [SMALL_STATE(279)] = 9023,
  [SMALL_STATE(280)] = 9049,
  [SMALL_STATE(281)] = 9073,
  [SMALL_STATE(282)] = 9097,
  [SMALL_STATE(283)] = 9121,
  [SMALL_STATE(284)] = 9147,
  [SMALL_STATE(285)] = 9173,
  [SMALL_STATE(286)] = 9201,
  [SMALL_STATE(287)] = 9229,
  [SMALL_STATE(288)] = 9253,
  [SMALL_STATE(289)] = 9277,
  [SMALL_STATE(290)] = 9298,
  [SMALL_STATE(291)] = 9320,
  [SMALL_STATE(292)] = 9340,
  [SMALL_STATE(293)] = 9360,
  [SMALL_STATE(294)] = 9380,
  [SMALL_STATE(295)] = 9398,
  [SMALL_STATE(296)] = 9418,
  [SMALL_STATE(297)] = 9436,
  [SMALL_STATE(298)] = 9456,
  [SMALL_STATE(299)] = 9476,
  [SMALL_STATE(300)] = 9496,
  [SMALL_STATE(301)] = 9516,
  [SMALL_STATE(302)] = 9536,
  [SMALL_STATE(303)] = 9556,
  [SMALL_STATE(304)] = 9576,
  [SMALL_STATE(305)] = 9596,
  [SMALL_STATE(306)] = 9616,
  [SMALL_STATE(307)] = 9636,
  [SMALL_STATE(308)] = 9656,
  [SMALL_STATE(309)] = 9676,
  [SMALL_STATE(310)] = 9696,
  [SMALL_STATE(311)] = 9716,
  [SMALL_STATE(312)] = 9736,
  [SMALL_STATE(313)] = 9756,
  [SMALL_STATE(314)] = 9776,
  [SMALL_STATE(315)] = 9796,
  [SMALL_STATE(316)] = 9816,
  [SMALL_STATE(317)] = 9836,
  [SMALL_STATE(318)] = 9856,
  [SMALL_STATE(319)] = 9876,
  [SMALL_STATE(320)] = 9896,
  [SMALL_STATE(321)] = 9916,
  [SMALL_STATE(322)] = 9936,
  [SMALL_STATE(323)] = 9956,
  [SMALL_STATE(324)] = 9976,
  [SMALL_STATE(325)] = 9996,
  [SMALL_STATE(326)] = 10016,
  [SMALL_STATE(327)] = 10036,
  [SMALL_STATE(328)] = 10056,
  [SMALL_STATE(329)] = 10076,
  [SMALL_STATE(330)] = 10096,
  [SMALL_STATE(331)] = 10118,
  [SMALL_STATE(332)] = 10138,
  [SMALL_STATE(333)] = 10158,
  [SMALL_STATE(334)] = 10178,
  [SMALL_STATE(335)] = 10198,
  [SMALL_STATE(336)] = 10218,
  [SMALL_STATE(337)] = 10238,
  [SMALL_STATE(338)] = 10258,
  [SMALL_STATE(339)] = 10278,
  [SMALL_STATE(340)] = 10300,
  [SMALL_STATE(341)] = 10320,
  [SMALL_STATE(342)] = 10336,
  [SMALL_STATE(343)] = 10356,
  [SMALL_STATE(344)] = 10376,
  [SMALL_STATE(345)] = 10396,
  [SMALL_STATE(346)] = 10416,
  [SMALL_STATE(347)] = 10436,
  [SMALL_STATE(348)] = 10456,
  [SMALL_STATE(349)] = 10476,
  [SMALL_STATE(350)] = 10496,
  [SMALL_STATE(351)] = 10516,
  [SMALL_STATE(352)] = 10536,
  [SMALL_STATE(353)] = 10556,
  [SMALL_STATE(354)] = 10576,
  [SMALL_STATE(355)] = 10596,
  [SMALL_STATE(356)] = 10616,
  [SMALL_STATE(357)] = 10636,
  [SMALL_STATE(358)] = 10656,
  [SMALL_STATE(359)] = 10676,
  [SMALL_STATE(360)] = 10696,
  [SMALL_STATE(361)] = 10716,
  [SMALL_STATE(362)] = 10738,
  [SMALL_STATE(363)] = 10758,
  [SMALL_STATE(364)] = 10774,
  [SMALL_STATE(365)] = 10794,
  [SMALL_STATE(366)] = 10810,
  [SMALL_STATE(367)] = 10830,
  [SMALL_STATE(368)] = 10850,
  [SMALL_STATE(369)] = 10870,
  [SMALL_STATE(370)] = 10890,
  [SMALL_STATE(371)] = 10910,
  [SMALL_STATE(372)] = 10930,
  [SMALL_STATE(373)] = 10950,
  [SMALL_STATE(374)] = 10970,
  [SMALL_STATE(375)] = 10990,
  [SMALL_STATE(376)] = 11010,
  [SMALL_STATE(377)] = 11030,
  [SMALL_STATE(378)] = 11050,
  [SMALL_STATE(379)] = 11070,
  [SMALL_STATE(380)] = 11090,
  [SMALL_STATE(381)] = 11110,
  [SMALL_STATE(382)] = 11130,
  [SMALL_STATE(383)] = 11150,
  [SMALL_STATE(384)] = 11170,
  [SMALL_STATE(385)] = 11190,
  [SMALL_STATE(386)] = 11210,
  [SMALL_STATE(387)] = 11230,
  [SMALL_STATE(388)] = 11250,
  [SMALL_STATE(389)] = 11270,
  [SMALL_STATE(390)] = 11290,
  [SMALL_STATE(391)] = 11310,
  [SMALL_STATE(392)] = 11330,
  [SMALL_STATE(393)] = 11350,
  [SMALL_STATE(394)] = 11370,
  [SMALL_STATE(395)] = 11392,
  [SMALL_STATE(396)] = 11412,
  [SMALL_STATE(397)] = 11432,
  [SMALL_STATE(398)] = 11452,
  [SMALL_STATE(399)] = 11474,
  [SMALL_STATE(400)] = 11490,
  [SMALL_STATE(401)] = 11506,
  [SMALL_STATE(402)] = 11522,
  [SMALL_STATE(403)] = 11538,
  [SMALL_STATE(404)] = 11553,
  [SMALL_STATE(405)] = 11568,
  [SMALL_STATE(406)] = 11583,
  [SMALL_STATE(407)] = 11602,
  [SMALL_STATE(408)] = 11621,
  [SMALL_STATE(409)] = 11640,
  [SMALL_STATE(410)] = 11655,
  [SMALL_STATE(411)] = 11672,
  [SMALL_STATE(412)] = 11687,
  [SMALL_STATE(413)] = 11702,
  [SMALL_STATE(414)] = 11721,
  [SMALL_STATE(415)] = 11740,
  [SMALL_STATE(416)] = 11757,
  [SMALL_STATE(417)] = 11774,
  [SMALL_STATE(418)] = 11789,
  [SMALL_STATE(419)] = 11808,
  [SMALL_STATE(420)] = 11823,
  [SMALL_STATE(421)] = 11842,
  [SMALL_STATE(422)] = 11861,
  [SMALL_STATE(423)] = 11878,
  [SMALL_STATE(424)] = 11893,
  [SMALL_STATE(425)] = 11910,
  [SMALL_STATE(426)] = 11929,
  [SMALL_STATE(427)] = 11948,
  [SMALL_STATE(428)] = 11967,
  [SMALL_STATE(429)] = 11982,
  [SMALL_STATE(430)] = 12001,
  [SMALL_STATE(431)] = 12018,
  [SMALL_STATE(432)] = 12037,
  [SMALL_STATE(433)] = 12056,
  [SMALL_STATE(434)] = 12073,
  [SMALL_STATE(435)] = 12092,
  [SMALL_STATE(436)] = 12111,
  [SMALL_STATE(437)] = 12130,
  [SMALL_STATE(438)] = 12149,
  [SMALL_STATE(439)] = 12166,
  [SMALL_STATE(440)] = 12183,
  [SMALL_STATE(441)] = 12202,
  [SMALL_STATE(442)] = 12221,
  [SMALL_STATE(443)] = 12240,
  [SMALL_STATE(444)] = 12259,
  [SMALL_STATE(445)] = 12276,
  [SMALL_STATE(446)] = 12295,
  [SMALL_STATE(447)] = 12310,
  [SMALL_STATE(448)] = 12325,
  [SMALL_STATE(449)] = 12342,
  [SMALL_STATE(450)] = 12359,
  [SMALL_STATE(451)] = 12378,
  [SMALL_STATE(452)] = 12395,
  [SMALL_STATE(453)] = 12412,
  [SMALL_STATE(454)] = 12431,
  [SMALL_STATE(455)] = 12450,
  [SMALL_STATE(456)] = 12465,
  [SMALL_STATE(457)] = 12484,
  [SMALL_STATE(458)] = 12499,
  [SMALL_STATE(459)] = 12516,
  [SMALL_STATE(460)] = 12535,
  [SMALL_STATE(461)] = 12552,
  [SMALL_STATE(462)] = 12567,
  [SMALL_STATE(463)] = 12586,
  [SMALL_STATE(464)] = 12605,
  [SMALL_STATE(465)] = 12624,
  [SMALL_STATE(466)] = 12643,
  [SMALL_STATE(467)] = 12662,
  [SMALL_STATE(468)] = 12681,
  [SMALL_STATE(469)] = 12700,
  [SMALL_STATE(470)] = 12719,
  [SMALL_STATE(471)] = 12736,
  [SMALL_STATE(472)] = 12753,
  [SMALL_STATE(473)] = 12772,
  [SMALL_STATE(474)] = 12791,
  [SMALL_STATE(475)] = 12806,
  [SMALL_STATE(476)] = 12823,
  [SMALL_STATE(477)] = 12842,
  [SMALL_STATE(478)] = 12859,
  [SMALL_STATE(479)] = 12878,
  [SMALL_STATE(480)] = 12895,
  [SMALL_STATE(481)] = 12914,
  [SMALL_STATE(482)] = 12931,
  [SMALL_STATE(483)] = 12950,
  [SMALL_STATE(484)] = 12969,
  [SMALL_STATE(485)] = 12986,
  [SMALL_STATE(486)] = 13005,
  [SMALL_STATE(487)] = 13020,
  [SMALL_STATE(488)] = 13037,
  [SMALL_STATE(489)] = 13054,
  [SMALL_STATE(490)] = 13068,
  [SMALL_STATE(491)] = 13082,
  [SMALL_STATE(492)] = 13096,
  [SMALL_STATE(493)] = 13110,
  [SMALL_STATE(494)] = 13124,
  [SMALL_STATE(495)] = 13138,
  [SMALL_STATE(496)] = 13154,
  [SMALL_STATE(497)] = 13170,
  [SMALL_STATE(498)] = 13184,
  [SMALL_STATE(499)] = 13200,
  [SMALL_STATE(500)] = 13214,
  [SMALL_STATE(501)] = 13228,
  [SMALL_STATE(502)] = 13244,
  [SMALL_STATE(503)] = 13258,
  [SMALL_STATE(504)] = 13272,
  [SMALL_STATE(505)] = 13288,
  [SMALL_STATE(506)] = 13304,
  [SMALL_STATE(507)] = 13318,
  [SMALL_STATE(508)] = 13332,
  [SMALL_STATE(509)] = 13346,
  [SMALL_STATE(510)] = 13362,
  [SMALL_STATE(511)] = 13378,
  [SMALL_STATE(512)] = 13392,
  [SMALL_STATE(513)] = 13408,
  [SMALL_STATE(514)] = 13424,
  [SMALL_STATE(515)] = 13438,
  [SMALL_STATE(516)] = 13452,
  [SMALL_STATE(517)] = 13465,
  [SMALL_STATE(518)] = 13478,
  [SMALL_STATE(519)] = 13491,
  [SMALL_STATE(520)] = 13504,
  [SMALL_STATE(521)] = 13517,
  [SMALL_STATE(522)] = 13530,
  [SMALL_STATE(523)] = 13543,
  [SMALL_STATE(524)] = 13556,
  [SMALL_STATE(525)] = 13569,
  [SMALL_STATE(526)] = 13582,
  [SMALL_STATE(527)] = 13595,
  [SMALL_STATE(528)] = 13608,
  [SMALL_STATE(529)] = 13621,
  [SMALL_STATE(530)] = 13634,
  [SMALL_STATE(531)] = 13647,
  [SMALL_STATE(532)] = 13660,
  [SMALL_STATE(533)] = 13673,
  [SMALL_STATE(534)] = 13686,
  [SMALL_STATE(535)] = 13699,
  [SMALL_STATE(536)] = 13712,
  [SMALL_STATE(537)] = 13725,
  [SMALL_STATE(538)] = 13738,
  [SMALL_STATE(539)] = 13751,
  [SMALL_STATE(540)] = 13764,
  [SMALL_STATE(541)] = 13777,
  [SMALL_STATE(542)] = 13790,
  [SMALL_STATE(543)] = 13803,
  [SMALL_STATE(544)] = 13816,
  [SMALL_STATE(545)] = 13829,
  [SMALL_STATE(546)] = 13842,
  [SMALL_STATE(547)] = 13855,
  [SMALL_STATE(548)] = 13868,
  [SMALL_STATE(549)] = 13881,
  [SMALL_STATE(550)] = 13894,
  [SMALL_STATE(551)] = 13907,
  [SMALL_STATE(552)] = 13920,
  [SMALL_STATE(553)] = 13933,
  [SMALL_STATE(554)] = 13946,
  [SMALL_STATE(555)] = 13959,
  [SMALL_STATE(556)] = 13972,
  [SMALL_STATE(557)] = 13985,
  [SMALL_STATE(558)] = 13998,
  [SMALL_STATE(559)] = 14011,
  [SMALL_STATE(560)] = 14024,
  [SMALL_STATE(561)] = 14037,
  [SMALL_STATE(562)] = 14050,
  [SMALL_STATE(563)] = 14063,
  [SMALL_STATE(564)] = 14076,
  [SMALL_STATE(565)] = 14089,
  [SMALL_STATE(566)] = 14102,
  [SMALL_STATE(567)] = 14115,
  [SMALL_STATE(568)] = 14128,
  [SMALL_STATE(569)] = 14141,
  [SMALL_STATE(570)] = 14154,
  [SMALL_STATE(571)] = 14167,
  [SMALL_STATE(572)] = 14180,
  [SMALL_STATE(573)] = 14193,
  [SMALL_STATE(574)] = 14206,
  [SMALL_STATE(575)] = 14219,
  [SMALL_STATE(576)] = 14232,
  [SMALL_STATE(577)] = 14245,
  [SMALL_STATE(578)] = 14258,
  [SMALL_STATE(579)] = 14271,
  [SMALL_STATE(580)] = 14284,
  [SMALL_STATE(581)] = 14297,
  [SMALL_STATE(582)] = 14310,
  [SMALL_STATE(583)] = 14323,
  [SMALL_STATE(584)] = 14336,
  [SMALL_STATE(585)] = 14349,
  [SMALL_STATE(586)] = 14362,
  [SMALL_STATE(587)] = 14375,
  [SMALL_STATE(588)] = 14388,
  [SMALL_STATE(589)] = 14401,
  [SMALL_STATE(590)] = 14414,
  [SMALL_STATE(591)] = 14427,
  [SMALL_STATE(592)] = 14440,
  [SMALL_STATE(593)] = 14453,
  [SMALL_STATE(594)] = 14466,
  [SMALL_STATE(595)] = 14479,
  [SMALL_STATE(596)] = 14492,
  [SMALL_STATE(597)] = 14505,
  [SMALL_STATE(598)] = 14518,
  [SMALL_STATE(599)] = 14531,
  [SMALL_STATE(600)] = 14535,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 5, .production_id = 5),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(526),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(522),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(519),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(530),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(532),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(533),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(536),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(537),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(540),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(541),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, .production_id = 4),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, .production_id = 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, .production_id = 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 5, .production_id = 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(505),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 6, .production_id = 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, .production_id = 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, .production_id = 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 8, .production_id = 5),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 5, .production_id = 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 7, .production_id = 4),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 6, .production_id = 4),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 7, .production_id = 5),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, .production_id = 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_block, 3),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_basic_block, 3), SHIFT(41),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_basic_block, 3), SHIFT(6),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(559),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(558),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_block, 7),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_basic_block, 7), SHIFT(41),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_basic_block, 7), SHIFT(6),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_block, 6),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_basic_block, 6), SHIFT(41),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_basic_block, 6), SHIFT(6),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_block, 5),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_basic_block, 5), SHIFT(41),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_basic_block, 5), SHIFT(6),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_block, 4),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_basic_block, 4), SHIFT(41),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_basic_block, 4), SHIFT(6),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_block, 2),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_basic_block, 2), SHIFT(41),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_basic_block, 2), SHIFT(6),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_block, 8),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_basic_block, 8), SHIFT(42),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_basic_block, 8), SHIFT(6),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_basic_block, 4), SHIFT(42),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_basic_block, 7), SHIFT(42),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_basic_block, 5), SHIFT(42),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_basic_block, 6), SHIFT(42),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bundle_repeat1, 2), SHIFT_REPEAT(44),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_bundle_repeat1, 2), SHIFT_REPEAT(6),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bundle_repeat1, 2), SHIFT_REPEAT(301),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bundle_repeat1, 2), SHIFT_REPEAT(94),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bundle_repeat1, 2),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_bundle_repeat1, 2), SHIFT_REPEAT(111),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_bundle_repeat1, 2), SHIFT_REPEAT(112),
  [251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_bundle_repeat1, 2), SHIFT_REPEAT(95),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_basic_block, 3), SHIFT(42),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_basic_block_repeat3, 2),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_block_repeat3, 2), SHIFT_REPEAT(42),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_basic_block_repeat3, 2), SHIFT_REPEAT(6),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_block_repeat3, 2), SHIFT_REPEAT(301),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_block_repeat3, 2), SHIFT_REPEAT(94),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_basic_block_repeat3, 2), SHIFT_REPEAT(111),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_basic_block_repeat3, 2), SHIFT_REPEAT(112),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_basic_block_repeat3, 2), SHIFT_REPEAT(95),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_basic_block_repeat2, 2),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_block_repeat2, 2), SHIFT_REPEAT(39),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_basic_block_repeat2, 2),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_basic_block_repeat2, 2), SHIFT_REPEAT(559),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_basic_block_repeat2, 2), SHIFT_REPEAT(558),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_basic_block_repeat2, 1),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_basic_block_repeat2, 1),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_block_repeat2, 1), REDUCE(aux_sym_basic_block_repeat3, 1),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_basic_block_repeat2, 1), REDUCE(aux_sym_basic_block_repeat3, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_basic_block_repeat3, 1),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_basic_block_repeat3, 1),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bundle_repeat1, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bundle_repeat1, 1),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bundle_repeat1, 1),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_basic_block_repeat3, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_basic_block_repeat3, 3),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_basic_block_repeat3, 3),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(82),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(87),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(49),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(84),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(79),
  [338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(582),
  [341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(87),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(52),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_escaped_ir_value_repeat1, 2), SHIFT_REPEAT(101),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_escaped_ir_value_repeat1, 2), SHIFT_REPEAT(57),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_escaped_ir_value_repeat1, 2),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_escaped_ir_value_repeat1, 2), SHIFT_REPEAT(57),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_escaped_ir_value_repeat1, 2), SHIFT_REPEAT(97),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_escaped_ir_value_repeat1, 2), SHIFT_REPEAT(91),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_escaped_ir_value_repeat1, 2), SHIFT_REPEAT(92),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metadata, 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(582),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escaped_ir_content, 1),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escaped_ir_content, 1),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escaped_ir_content, 2),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escaped_ir_content, 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 4),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metadata, 4),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_md_value, 2),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_md_value, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escaped_ir_content, 3),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escaped_ir_content, 3),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 3),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metadata, 3),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_repeat2, 2),
  [443] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat2, 2), SHIFT_REPEAT(95),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_md_value, 3),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_md_value, 3),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 1),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_metadata_repeat1, 1),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_escaped_ir_value_repeat1, 1),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_escaped_ir_value_repeat1, 1),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_md_value, 1),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_md_value, 1),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_register_operand_repeat1, 2),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_register_operand_repeat1, 2), SHIFT_REPEAT(112),
  [479] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_register_operand_repeat1, 2), SHIFT_REPEAT(112),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register_operand, 1),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_flag, 1),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_repeat2, 1),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register_operand, 2),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register_operand, 4),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register_flag, 1),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register_flag, 1),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_register_operand_repeat1, 1),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_register_operand_repeat1, 1),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subregister, 1),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register_operand, 3),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_registerclass, 1),
  [568] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_cfi_operand, 2), SHIFT(568),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cfi_operand, 2),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 1),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register_operand, 5),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, .production_id = 3),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 5, .production_id = 4),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 6, .production_id = 5),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [607] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cfi_operand_repeat1, 2), SHIFT_REPEAT(568),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cfi_operand_repeat1, 2),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register_operand, 7),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, .production_id = 2),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register_operand, 8),
  [628] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_cfi_operand, 3), SHIFT(568),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cfi_operand, 3),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_operand, 2),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_operand, 1),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 1),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register_operand, 6),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_address, 6),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cfi_operand, 1),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_liveout, 5),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shuffle_mask, 5),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cfi_operand, 6),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mc_symbol, 4),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_regmask, 4),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cfi_operand, 4),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_liveout, 3),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_regmask, 5),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 4),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shuffle_mask, 4),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_liveout, 4),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_index, 4),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intrinsic, 4),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate, 2),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_regmask, 3),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [721] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat4, 2), SHIFT_REPEAT(492),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat4, 2),
  [726] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat4, 2), SHIFT_REPEAT(498),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset, 2),
  [737] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat3, 2), SHIFT_REPEAT(17),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat3, 2),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sync_scope, 4),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 6),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_operand, 3),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_ordering, 1),
  [762] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_memory_operand_repeat1, 2), SHIFT_REPEAT(247),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_memory_operand_repeat1, 2),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 5),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat4, 3),
  [771] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat5, 2), SHIFT_REPEAT(487),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat5, 2),
  [776] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat5, 2), SHIFT_REPEAT(501),
  [779] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat5, 2), SHIFT_REPEAT(526),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 5, .production_id = 1),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 7, .production_id = 3),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 6, .production_id = 2),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 9, .production_id = 5),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 8, .production_id = 4),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat5, 3),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_operand_flag, 1),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_memory_operand_repeat1, 1),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 8, .production_id = 3),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 9, .production_id = 4),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 7, .production_id = 2),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 10, .production_id = 5),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 6, .production_id = 1),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [912] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(405),
  [915] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(514),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_successors, 3),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 9, .production_id = 3),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [940] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat6, 2), SHIFT_REPEAT(509),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat6, 2),
  [945] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [947] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(599),
  [953] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_comment_repeat1, 2), SHIFT_REPEAT(411),
  [956] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_comment_repeat1, 2),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 13, .production_id = 5),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 12, .production_id = 5),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 12, .production_id = 4),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 11, .production_id = 5),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 11, .production_id = 4),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 11, .production_id = 3),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 10, .production_id = 2),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 10, .production_id = 4),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 10, .production_id = 3),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 9, .production_id = 2),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 9, .production_id = 1),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_ir_value, 3),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 8, .production_id = 2),
  [994] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 8, .production_id = 1),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1002] = {.entry = {.count = 1, .reusable = false}}, SHIFT(600),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_pseudo_source_value, 2),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_liveins, 2),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_ir_value, 2),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 7, .production_id = 1),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_liveins, 3),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_pointer_info, 1),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_pseudo_source_value_keyword, 1),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_pseudo_source_value, 1),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ir_value, 1),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_operand, 10),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_operand, 8),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 1),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_operand, 5),
  [1050] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_memory_operand_repeat2, 2), SHIFT_REPEAT(289),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_memory_operand_repeat2, 2),
  [1055] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_comment_repeat1, 1),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_operand, 15),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_operand, 14),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1069] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(85),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_operand, 13),
  [1076] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_successors, 7),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_operand, 12),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_successors, 4),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_operand, 4),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_operand, 11),
  [1098] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_successors_repeat1, 2), SHIFT_REPEAT(524),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_successors_repeat1, 2),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_liveins_repeat1, 2),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_liveins, 5),
  [1109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_liveins_repeat1, 2), SHIFT_REPEAT(430),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_liveins, 6),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_operand, 7),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_operand, 6),
  [1118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_basic_block_repeat1, 2), SHIFT_REPEAT(203),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_basic_block_repeat1, 2),
  [1123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_operand, 9),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_successors, 6),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shuffle_mask_repeat1, 2), SHIFT_REPEAT(491),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shuffle_mask_repeat1, 2),
  [1152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_regmask_repeat1, 2), SHIFT_REPEAT(471),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_custom_regmask_repeat1, 2),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_keyword, 1),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_keyword, 1),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(581),
  [1168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_liveins, 4),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_successors_repeat1, 5),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_successors, 2),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mem_attribute, 2),
  [1190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_liveins_repeat1, 4),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle, 3),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floatpred, 1),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intpred, 1),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_low_level_type, 5),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_low_level_type, 1),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bundle, 2),
  [1354] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_comment, 3),
  [1362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_comment, 2),
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
