#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 30
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 16
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_ws_token1 = 1,
  anon_sym_DQUOTE = 2,
  anon_sym_SEMI = 3,
  anon_sym_COMMA = 4,
  aux_sym_word_token1 = 5,
  anon_sym_BSLASH = 6,
  anon_sym_PERCENT = 7,
  aux_sym_quoted_word_token1 = 8,
  sym_query = 9,
  sym_word = 10,
  sym_quoted_word = 11,
  aux_sym_query_repeat1 = 12,
  aux_sym_ws_repeat1 = 13,
  aux_sym_word_repeat1 = 14,
  aux_sym_quoted_word_repeat1 = 15,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_ws_token1] = "ws_token1",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SEMI] = ";",
  [anon_sym_COMMA] = ",",
  [aux_sym_word_token1] = "word_token1",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_PERCENT] = "%",
  [aux_sym_quoted_word_token1] = "quoted_word_token1",
  [sym_query] = "query",
  [sym_word] = "word",
  [sym_quoted_word] = "quoted_word",
  [aux_sym_query_repeat1] = "query_repeat1",
  [aux_sym_ws_repeat1] = "ws_repeat1",
  [aux_sym_word_repeat1] = "word_repeat1",
  [aux_sym_quoted_word_repeat1] = "quoted_word_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_ws_token1] = aux_sym_ws_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_word_token1] = aux_sym_word_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [aux_sym_quoted_word_token1] = aux_sym_quoted_word_token1,
  [sym_query] = sym_query,
  [sym_word] = sym_word,
  [sym_quoted_word] = sym_quoted_word,
  [aux_sym_query_repeat1] = aux_sym_query_repeat1,
  [aux_sym_ws_repeat1] = aux_sym_ws_repeat1,
  [aux_sym_word_repeat1] = aux_sym_word_repeat1,
  [aux_sym_quoted_word_repeat1] = aux_sym_quoted_word_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_ws_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_word_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_word_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_query] = {
    .visible = true,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_word] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_query_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ws_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_word_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_word_repeat1] = {
    .visible = false,
    .named = false,
  },
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
      if (eof) ADVANCE(3);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == ',') ADVANCE(7);
      if (lookahead == ';') ADVANCE(6);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 2:
      if (eof) ADVANCE(3);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == ',') ADVANCE(7);
      if (lookahead == ';') ADVANCE(6);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(aux_sym_ws_token1);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_word_token1);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_quoted_word_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2},
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
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_ws_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_word_token1] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [aux_sym_quoted_word_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_query] = STATE(29),
    [sym_word] = STATE(9),
    [aux_sym_query_repeat1] = STATE(3),
    [aux_sym_ws_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_ws_token1] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [aux_sym_word_token1] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(15), 1,
      aux_sym_word_token1,
    ACTIONS(17), 1,
      anon_sym_BSLASH,
    STATE(5), 1,
      aux_sym_word_repeat1,
    ACTIONS(13), 5,
      ts_builtin_sym_end,
      aux_sym_ws_token1,
      anon_sym_DQUOTE,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [17] = 8,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      aux_sym_word_token1,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      aux_sym_ws_token1,
    STATE(7), 1,
      aux_sym_query_repeat1,
    STATE(9), 1,
      sym_word,
    STATE(12), 1,
      aux_sym_ws_repeat1,
  [42] = 4,
    ACTIONS(15), 1,
      aux_sym_word_token1,
    ACTIONS(17), 1,
      anon_sym_BSLASH,
    STATE(5), 1,
      aux_sym_word_repeat1,
    ACTIONS(23), 5,
      ts_builtin_sym_end,
      aux_sym_ws_token1,
      anon_sym_DQUOTE,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [59] = 4,
    ACTIONS(27), 1,
      aux_sym_word_token1,
    ACTIONS(30), 1,
      anon_sym_BSLASH,
    STATE(5), 1,
      aux_sym_word_repeat1,
    ACTIONS(25), 5,
      ts_builtin_sym_end,
      aux_sym_ws_token1,
      anon_sym_DQUOTE,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [76] = 4,
    ACTIONS(17), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      aux_sym_word_token1,
    STATE(4), 1,
      aux_sym_word_repeat1,
    ACTIONS(13), 5,
      ts_builtin_sym_end,
      aux_sym_ws_token1,
      anon_sym_DQUOTE,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [93] = 8,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      aux_sym_ws_token1,
    ACTIONS(40), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      aux_sym_word_token1,
    ACTIONS(46), 1,
      anon_sym_BSLASH,
    STATE(7), 1,
      aux_sym_query_repeat1,
    STATE(9), 1,
      sym_word,
    STATE(14), 1,
      aux_sym_ws_repeat1,
  [118] = 4,
    ACTIONS(17), 1,
      anon_sym_BSLASH,
    ACTIONS(51), 1,
      aux_sym_word_token1,
    STATE(2), 1,
      aux_sym_word_repeat1,
    ACTIONS(49), 5,
      ts_builtin_sym_end,
      aux_sym_ws_token1,
      anon_sym_DQUOTE,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [135] = 2,
    ACTIONS(55), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(53), 5,
      ts_builtin_sym_end,
      aux_sym_ws_token1,
      anon_sym_DQUOTE,
      aux_sym_word_token1,
      anon_sym_BSLASH,
  [147] = 7,
    ACTIONS(9), 1,
      aux_sym_word_token1,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 1,
      aux_sym_ws_token1,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      sym_word,
    STATE(15), 1,
      aux_sym_ws_repeat1,
  [169] = 1,
    ACTIONS(25), 7,
      ts_builtin_sym_end,
      aux_sym_ws_token1,
      anon_sym_DQUOTE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      aux_sym_word_token1,
      anon_sym_BSLASH,
  [179] = 7,
    ACTIONS(9), 1,
      aux_sym_word_token1,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(57), 1,
      aux_sym_ws_token1,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      sym_word,
    STATE(15), 1,
      aux_sym_ws_repeat1,
  [201] = 2,
    ACTIONS(63), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(35), 5,
      ts_builtin_sym_end,
      aux_sym_ws_token1,
      anon_sym_DQUOTE,
      aux_sym_word_token1,
      anon_sym_BSLASH,
  [213] = 6,
    ACTIONS(9), 1,
      aux_sym_word_token1,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(57), 1,
      aux_sym_ws_token1,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      sym_word,
    STATE(15), 1,
      aux_sym_ws_repeat1,
  [232] = 3,
    ACTIONS(67), 1,
      aux_sym_ws_token1,
    STATE(15), 1,
      aux_sym_ws_repeat1,
    ACTIONS(65), 4,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      aux_sym_word_token1,
      anon_sym_BSLASH,
  [245] = 1,
    ACTIONS(70), 5,
      ts_builtin_sym_end,
      aux_sym_ws_token1,
      anon_sym_DQUOTE,
      aux_sym_word_token1,
      anon_sym_BSLASH,
  [253] = 1,
    ACTIONS(72), 5,
      ts_builtin_sym_end,
      aux_sym_ws_token1,
      anon_sym_DQUOTE,
      aux_sym_word_token1,
      anon_sym_BSLASH,
  [261] = 5,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(74), 1,
      anon_sym_BSLASH,
    ACTIONS(76), 1,
      aux_sym_quoted_word_token1,
    STATE(21), 1,
      aux_sym_quoted_word_repeat1,
    STATE(27), 1,
      sym_quoted_word,
  [277] = 1,
    ACTIONS(35), 5,
      ts_builtin_sym_end,
      aux_sym_ws_token1,
      anon_sym_DQUOTE,
      aux_sym_word_token1,
      anon_sym_BSLASH,
  [285] = 5,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(74), 1,
      anon_sym_BSLASH,
    ACTIONS(76), 1,
      aux_sym_quoted_word_token1,
    STATE(21), 1,
      aux_sym_quoted_word_repeat1,
    STATE(28), 1,
      sym_quoted_word,
  [301] = 4,
    ACTIONS(74), 1,
      anon_sym_BSLASH,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(80), 1,
      aux_sym_quoted_word_token1,
    STATE(22), 1,
      aux_sym_quoted_word_repeat1,
  [314] = 4,
    ACTIONS(82), 1,
      anon_sym_DQUOTE,
    ACTIONS(84), 1,
      anon_sym_BSLASH,
    ACTIONS(87), 1,
      aux_sym_quoted_word_token1,
    STATE(22), 1,
      aux_sym_quoted_word_repeat1,
  [327] = 1,
    ACTIONS(82), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_quoted_word_token1,
  [333] = 1,
    ACTIONS(90), 2,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
  [338] = 1,
    ACTIONS(92), 2,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
  [343] = 1,
    ACTIONS(94), 2,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
  [348] = 1,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
  [352] = 1,
    ACTIONS(96), 1,
      anon_sym_DQUOTE,
  [356] = 1,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 17,
  [SMALL_STATE(4)] = 42,
  [SMALL_STATE(5)] = 59,
  [SMALL_STATE(6)] = 76,
  [SMALL_STATE(7)] = 93,
  [SMALL_STATE(8)] = 118,
  [SMALL_STATE(9)] = 135,
  [SMALL_STATE(10)] = 147,
  [SMALL_STATE(11)] = 169,
  [SMALL_STATE(12)] = 179,
  [SMALL_STATE(13)] = 201,
  [SMALL_STATE(14)] = 213,
  [SMALL_STATE(15)] = 232,
  [SMALL_STATE(16)] = 245,
  [SMALL_STATE(17)] = 253,
  [SMALL_STATE(18)] = 261,
  [SMALL_STATE(19)] = 277,
  [SMALL_STATE(20)] = 285,
  [SMALL_STATE(21)] = 301,
  [SMALL_STATE(22)] = 314,
  [SMALL_STATE(23)] = 327,
  [SMALL_STATE(24)] = 333,
  [SMALL_STATE(25)] = 338,
  [SMALL_STATE(26)] = 343,
  [SMALL_STATE(27)] = 348,
  [SMALL_STATE(28)] = 352,
  [SMALL_STATE(29)] = 356,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 2),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_word_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_word_repeat1, 2), SHIFT_REPEAT(5),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_word_repeat1, 2), SHIFT_REPEAT(25),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2), SHIFT_REPEAT(14),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2), SHIFT_REPEAT(18),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2), SHIFT_REPEAT(8),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2), SHIFT_REPEAT(24),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ws_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ws_repeat1, 2), SHIFT_REPEAT(15),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 3),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 4),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_word, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quoted_word_repeat1, 2),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_word_repeat1, 2), SHIFT_REPEAT(26),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_word_repeat1, 2), SHIFT_REPEAT(22),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [98] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_custom(void) {
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
