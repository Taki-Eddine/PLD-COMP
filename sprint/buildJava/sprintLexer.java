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
		ID=10, INT=11, CHAR=12, LETTER=13, DIGIT=14, UNDER_SCORE=15, INCLUDE=16, 
		WS=17;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
			"ID", "INT", "CHAR", "LETTER", "DIGIT", "UNDER_SCORE", "INCLUDE", "WS"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'('", "')'", "','", "'{'", "'}'", "'return'", "';'", "'='", "'int'", 
			null, null, null, null, null, "'_'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, "ID", "INT", 
			"CHAR", "LETTER", "DIGIT", "UNDER_SCORE", "INCLUDE", "WS"
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\23}\b\1\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\3\2\3\2\3\3\3\3\3\4\3\4\3\5\3\5\3\6\3\6\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3"+
		"\b\3\b\3\t\3\t\3\n\3\n\3\n\3\n\3\13\3\13\3\13\3\13\7\13C\n\13\f\13\16"+
		"\13F\13\13\3\f\6\fI\n\f\r\f\16\fJ\3\r\3\r\3\r\3\r\3\16\3\16\3\17\3\17"+
		"\3\20\3\20\3\21\3\21\7\21Y\n\21\f\21\16\21\\\13\21\3\21\3\21\3\21\3\21"+
		"\3\21\3\21\3\21\3\21\3\21\7\21g\n\21\f\21\16\21j\13\21\3\21\3\21\7\21"+
		"n\n\21\f\21\16\21q\13\21\3\21\3\21\3\21\3\21\3\22\6\22x\n\22\r\22\16\22"+
		"y\3\22\3\22\3o\2\23\3\3\5\4\7\5\t\6\13\7\r\b\17\t\21\n\23\13\25\f\27\r"+
		"\31\16\33\17\35\20\37\21!\22#\23\3\2\7\4\2C\\c|\3\2\62;\4\2\13\13\"\""+
		"\5\2\13\13\"\"@@\5\2\13\f\17\17\"\"\2\u0084\2\3\3\2\2\2\2\5\3\2\2\2\2"+
		"\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17\3\2\2\2\2\21\3\2"+
		"\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2\2\31\3\2\2\2\2\33\3\2\2\2"+
		"\2\35\3\2\2\2\2\37\3\2\2\2\2!\3\2\2\2\2#\3\2\2\2\3%\3\2\2\2\5\'\3\2\2"+
		"\2\7)\3\2\2\2\t+\3\2\2\2\13-\3\2\2\2\r/\3\2\2\2\17\66\3\2\2\2\218\3\2"+
		"\2\2\23:\3\2\2\2\25>\3\2\2\2\27H\3\2\2\2\31L\3\2\2\2\33P\3\2\2\2\35R\3"+
		"\2\2\2\37T\3\2\2\2!V\3\2\2\2#w\3\2\2\2%&\7*\2\2&\4\3\2\2\2\'(\7+\2\2("+
		"\6\3\2\2\2)*\7.\2\2*\b\3\2\2\2+,\7}\2\2,\n\3\2\2\2-.\7\177\2\2.\f\3\2"+
		"\2\2/\60\7t\2\2\60\61\7g\2\2\61\62\7v\2\2\62\63\7w\2\2\63\64\7t\2\2\64"+
		"\65\7p\2\2\65\16\3\2\2\2\66\67\7=\2\2\67\20\3\2\2\289\7?\2\29\22\3\2\2"+
		"\2:;\7k\2\2;<\7p\2\2<=\7v\2\2=\24\3\2\2\2>D\5\33\16\2?C\5\33\16\2@C\5"+
		"\35\17\2AC\5\37\20\2B?\3\2\2\2B@\3\2\2\2BA\3\2\2\2CF\3\2\2\2DB\3\2\2\2"+
		"DE\3\2\2\2E\26\3\2\2\2FD\3\2\2\2GI\5\35\17\2HG\3\2\2\2IJ\3\2\2\2JH\3\2"+
		"\2\2JK\3\2\2\2K\30\3\2\2\2LM\7)\2\2MN\4\2\u0081\2NO\7)\2\2O\32\3\2\2\2"+
		"PQ\t\2\2\2Q\34\3\2\2\2RS\t\3\2\2S\36\3\2\2\2TU\7a\2\2U \3\2\2\2VZ\7%\2"+
		"\2WY\t\4\2\2XW\3\2\2\2Y\\\3\2\2\2ZX\3\2\2\2Z[\3\2\2\2[]\3\2\2\2\\Z\3\2"+
		"\2\2]^\7k\2\2^_\7p\2\2_`\7e\2\2`a\7n\2\2ab\7w\2\2bc\7f\2\2cd\7g\2\2dh"+
		"\3\2\2\2eg\t\4\2\2fe\3\2\2\2gj\3\2\2\2hf\3\2\2\2hi\3\2\2\2ik\3\2\2\2j"+
		"h\3\2\2\2ko\7>\2\2ln\n\5\2\2ml\3\2\2\2nq\3\2\2\2op\3\2\2\2om\3\2\2\2p"+
		"r\3\2\2\2qo\3\2\2\2rs\7@\2\2st\3\2\2\2tu\b\21\2\2u\"\3\2\2\2vx\t\6\2\2"+
		"wv\3\2\2\2xy\3\2\2\2yw\3\2\2\2yz\3\2\2\2z{\3\2\2\2{|\b\22\2\2|$\3\2\2"+
		"\2\n\2BDJZhoy\3\b\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}