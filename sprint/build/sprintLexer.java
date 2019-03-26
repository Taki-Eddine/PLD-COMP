// Generated from sprint.g4 by ANTLR 4.7.2
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class sprintLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.7.2", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, T__10=11, T__11=12, T__12=13, T__13=14, T__14=15, T__15=16, T__16=17, 
		ID=18, INT=19, PLUS_MINUS=20, LT_GT=21, EQ_NEQ=22, LETTER=23, DIGIT=24, 
		UNDER_SCORE=25, INCLUDE=26, WS=27;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
			"T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "T__15", "T__16", 
			"ID", "INT", "PLUS_MINUS", "LT_GT", "EQ_NEQ", "LETTER", "DIGIT", "UNDER_SCORE", 
			"INCLUDE", "WS"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'('", "')'", "','", "'{'", "'}'", "'return'", "';'", "'='", "'if'", 
			"'else'", "'while'", "'do'", "'*'", "'!'", "'&&'", "'||'", "'int'", null, 
			null, null, null, null, null, null, "'_'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, "ID", "INT", "PLUS_MINUS", "LT_GT", 
			"EQ_NEQ", "LETTER", "DIGIT", "UNDER_SCORE", "INCLUDE", "WS"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}


	public sprintLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "sprint.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\35\u00b8\b\1\4\2"+
		"\t\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4"+
		"\13\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22"+
		"\t\22\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31"+
		"\t\31\4\32\t\32\4\33\t\33\4\34\t\34\3\2\3\2\3\3\3\3\3\4\3\4\3\5\3\5\3"+
		"\6\3\6\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\b\3\b\3\t\3\t\3\n\3\n\3\n\3\13\3"+
		"\13\3\13\3\13\3\13\3\f\3\f\3\f\3\f\3\f\3\f\3\r\3\r\3\r\3\16\3\16\3\17"+
		"\3\17\3\20\3\20\3\20\3\21\3\21\3\21\3\22\3\22\3\22\3\22\3\23\3\23\3\23"+
		"\3\23\7\23r\n\23\f\23\16\23u\13\23\3\24\6\24x\n\24\r\24\16\24y\3\25\3"+
		"\25\3\26\3\26\3\26\3\26\3\26\3\26\5\26\u0084\n\26\3\27\3\27\3\27\3\27"+
		"\5\27\u008a\n\27\3\30\3\30\3\31\3\31\3\32\3\32\3\33\3\33\7\33\u0094\n"+
		"\33\f\33\16\33\u0097\13\33\3\33\3\33\3\33\3\33\3\33\3\33\3\33\3\33\3\33"+
		"\7\33\u00a2\n\33\f\33\16\33\u00a5\13\33\3\33\3\33\7\33\u00a9\n\33\f\33"+
		"\16\33\u00ac\13\33\3\33\3\33\3\33\3\33\3\34\6\34\u00b3\n\34\r\34\16\34"+
		"\u00b4\3\34\3\34\3\u00aa\2\35\3\3\5\4\7\5\t\6\13\7\r\b\17\t\21\n\23\13"+
		"\25\f\27\r\31\16\33\17\35\20\37\21!\22#\23%\24\'\25)\26+\27-\30/\31\61"+
		"\32\63\33\65\34\67\35\3\2\b\4\2--//\4\2C\\c|\3\2\62;\4\2\13\13\"\"\5\2"+
		"\13\13\"\"@@\5\2\13\f\17\17\"\"\2\u00c3\2\3\3\2\2\2\2\5\3\2\2\2\2\7\3"+
		"\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17\3\2\2\2\2\21\3\2\2\2"+
		"\2\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2\2\31\3\2\2\2\2\33\3\2\2\2\2\35"+
		"\3\2\2\2\2\37\3\2\2\2\2!\3\2\2\2\2#\3\2\2\2\2%\3\2\2\2\2\'\3\2\2\2\2)"+
		"\3\2\2\2\2+\3\2\2\2\2-\3\2\2\2\2/\3\2\2\2\2\61\3\2\2\2\2\63\3\2\2\2\2"+
		"\65\3\2\2\2\2\67\3\2\2\2\39\3\2\2\2\5;\3\2\2\2\7=\3\2\2\2\t?\3\2\2\2\13"+
		"A\3\2\2\2\rC\3\2\2\2\17J\3\2\2\2\21L\3\2\2\2\23N\3\2\2\2\25Q\3\2\2\2\27"+
		"V\3\2\2\2\31\\\3\2\2\2\33_\3\2\2\2\35a\3\2\2\2\37c\3\2\2\2!f\3\2\2\2#"+
		"i\3\2\2\2%m\3\2\2\2\'w\3\2\2\2){\3\2\2\2+\u0083\3\2\2\2-\u0089\3\2\2\2"+
		"/\u008b\3\2\2\2\61\u008d\3\2\2\2\63\u008f\3\2\2\2\65\u0091\3\2\2\2\67"+
		"\u00b2\3\2\2\29:\7*\2\2:\4\3\2\2\2;<\7+\2\2<\6\3\2\2\2=>\7.\2\2>\b\3\2"+
		"\2\2?@\7}\2\2@\n\3\2\2\2AB\7\177\2\2B\f\3\2\2\2CD\7t\2\2DE\7g\2\2EF\7"+
		"v\2\2FG\7w\2\2GH\7t\2\2HI\7p\2\2I\16\3\2\2\2JK\7=\2\2K\20\3\2\2\2LM\7"+
		"?\2\2M\22\3\2\2\2NO\7k\2\2OP\7h\2\2P\24\3\2\2\2QR\7g\2\2RS\7n\2\2ST\7"+
		"u\2\2TU\7g\2\2U\26\3\2\2\2VW\7y\2\2WX\7j\2\2XY\7k\2\2YZ\7n\2\2Z[\7g\2"+
		"\2[\30\3\2\2\2\\]\7f\2\2]^\7q\2\2^\32\3\2\2\2_`\7,\2\2`\34\3\2\2\2ab\7"+
		"#\2\2b\36\3\2\2\2cd\7(\2\2de\7(\2\2e \3\2\2\2fg\7~\2\2gh\7~\2\2h\"\3\2"+
		"\2\2ij\7k\2\2jk\7p\2\2kl\7v\2\2l$\3\2\2\2ms\5/\30\2nr\5/\30\2or\5\61\31"+
		"\2pr\5\63\32\2qn\3\2\2\2qo\3\2\2\2qp\3\2\2\2ru\3\2\2\2sq\3\2\2\2st\3\2"+
		"\2\2t&\3\2\2\2us\3\2\2\2vx\5\61\31\2wv\3\2\2\2xy\3\2\2\2yw\3\2\2\2yz\3"+
		"\2\2\2z(\3\2\2\2{|\t\2\2\2|*\3\2\2\2}\u0084\7>\2\2~\177\7>\2\2\177\u0084"+
		"\7?\2\2\u0080\u0084\7@\2\2\u0081\u0082\7@\2\2\u0082\u0084\7?\2\2\u0083"+
		"}\3\2\2\2\u0083~\3\2\2\2\u0083\u0080\3\2\2\2\u0083\u0081\3\2\2\2\u0084"+
		",\3\2\2\2\u0085\u0086\7?\2\2\u0086\u008a\7?\2\2\u0087\u0088\7#\2\2\u0088"+
		"\u008a\7?\2\2\u0089\u0085\3\2\2\2\u0089\u0087\3\2\2\2\u008a.\3\2\2\2\u008b"+
		"\u008c\t\3\2\2\u008c\60\3\2\2\2\u008d\u008e\t\4\2\2\u008e\62\3\2\2\2\u008f"+
		"\u0090\7a\2\2\u0090\64\3\2\2\2\u0091\u0095\7%\2\2\u0092\u0094\t\5\2\2"+
		"\u0093\u0092\3\2\2\2\u0094\u0097\3\2\2\2\u0095\u0093\3\2\2\2\u0095\u0096"+
		"\3\2\2\2\u0096\u0098\3\2\2\2\u0097\u0095\3\2\2\2\u0098\u0099\7k\2\2\u0099"+
		"\u009a\7p\2\2\u009a\u009b\7e\2\2\u009b\u009c\7n\2\2\u009c\u009d\7w\2\2"+
		"\u009d\u009e\7f\2\2\u009e\u009f\7g\2\2\u009f\u00a3\3\2\2\2\u00a0\u00a2"+
		"\t\5\2\2\u00a1\u00a0\3\2\2\2\u00a2\u00a5\3\2\2\2\u00a3\u00a1\3\2\2\2\u00a3"+
		"\u00a4\3\2\2\2\u00a4\u00a6\3\2\2\2\u00a5\u00a3\3\2\2\2\u00a6\u00aa\7>"+
		"\2\2\u00a7\u00a9\n\6\2\2\u00a8\u00a7\3\2\2\2\u00a9\u00ac\3\2\2\2\u00aa"+
		"\u00ab\3\2\2\2\u00aa\u00a8\3\2\2\2\u00ab\u00ad\3\2\2\2\u00ac\u00aa\3\2"+
		"\2\2\u00ad\u00ae\7@\2\2\u00ae\u00af\3\2\2\2\u00af\u00b0\b\33\2\2\u00b0"+
		"\66\3\2\2\2\u00b1\u00b3\t\7\2\2\u00b2\u00b1\3\2\2\2\u00b3\u00b4\3\2\2"+
		"\2\u00b4\u00b2\3\2\2\2\u00b4\u00b5\3\2\2\2\u00b5\u00b6\3\2\2\2\u00b6\u00b7"+
		"\b\34\2\2\u00b78\3\2\2\2\f\2qsy\u0083\u0089\u0095\u00a3\u00aa\u00b4\3"+
		"\b\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}