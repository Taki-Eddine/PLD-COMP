// Generated from sprint.g4 by ANTLR 4.7.1
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
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, T__10=11, ID=12, INT=13, CHAR=14, LETTER=15, DIGIT=16, UNDER_SCORE=17, 
		INCLUDE=18, WS=19;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	public static final String[] ruleNames = {
		"T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
		"T__9", "T__10", "ID", "INT", "CHAR", "LETTER", "DIGIT", "UNDER_SCORE", 
		"INCLUDE", "WS"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'('", "')'", "','", "'{'", "'}'", "'return'", "';'", "'='", "'char'", 
		"'int'", "'void'", null, null, null, null, null, "'_'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, null, null, null, null, null, null, null, null, null, null, null, 
		"ID", "INT", "CHAR", "LETTER", "DIGIT", "UNDER_SCORE", "INCLUDE", "WS"
	};
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\25\u008b\b\1\4\2"+
		"\t\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4"+
		"\13\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22"+
		"\t\22\4\23\t\23\4\24\t\24\3\2\3\2\3\3\3\3\3\4\3\4\3\5\3\5\3\6\3\6\3\7"+
		"\3\7\3\7\3\7\3\7\3\7\3\7\3\b\3\b\3\t\3\t\3\n\3\n\3\n\3\n\3\n\3\13\3\13"+
		"\3\13\3\13\3\f\3\f\3\f\3\f\3\f\3\r\3\r\3\r\3\r\7\rQ\n\r\f\r\16\rT\13\r"+
		"\3\16\6\16W\n\16\r\16\16\16X\3\17\3\17\3\17\3\17\3\20\3\20\3\21\3\21\3"+
		"\22\3\22\3\23\3\23\7\23g\n\23\f\23\16\23j\13\23\3\23\3\23\3\23\3\23\3"+
		"\23\3\23\3\23\3\23\3\23\7\23u\n\23\f\23\16\23x\13\23\3\23\3\23\7\23|\n"+
		"\23\f\23\16\23\177\13\23\3\23\3\23\3\23\3\23\3\24\6\24\u0086\n\24\r\24"+
		"\16\24\u0087\3\24\3\24\3}\2\25\3\3\5\4\7\5\t\6\13\7\r\b\17\t\21\n\23\13"+
		"\25\f\27\r\31\16\33\17\35\20\37\21!\22#\23%\24\'\25\3\2\7\4\2C\\c|\3\2"+
		"\62;\4\2\13\13\"\"\5\2\13\13\"\"@@\5\2\13\f\17\17\"\"\2\u0092\2\3\3\2"+
		"\2\2\2\5\3\2\2\2\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17"+
		"\3\2\2\2\2\21\3\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2\2\31\3\2"+
		"\2\2\2\33\3\2\2\2\2\35\3\2\2\2\2\37\3\2\2\2\2!\3\2\2\2\2#\3\2\2\2\2%\3"+
		"\2\2\2\2\'\3\2\2\2\3)\3\2\2\2\5+\3\2\2\2\7-\3\2\2\2\t/\3\2\2\2\13\61\3"+
		"\2\2\2\r\63\3\2\2\2\17:\3\2\2\2\21<\3\2\2\2\23>\3\2\2\2\25C\3\2\2\2\27"+
		"G\3\2\2\2\31L\3\2\2\2\33V\3\2\2\2\35Z\3\2\2\2\37^\3\2\2\2!`\3\2\2\2#b"+
		"\3\2\2\2%d\3\2\2\2\'\u0085\3\2\2\2)*\7*\2\2*\4\3\2\2\2+,\7+\2\2,\6\3\2"+
		"\2\2-.\7.\2\2.\b\3\2\2\2/\60\7}\2\2\60\n\3\2\2\2\61\62\7\177\2\2\62\f"+
		"\3\2\2\2\63\64\7t\2\2\64\65\7g\2\2\65\66\7v\2\2\66\67\7w\2\2\678\7t\2"+
		"\289\7p\2\29\16\3\2\2\2:;\7=\2\2;\20\3\2\2\2<=\7?\2\2=\22\3\2\2\2>?\7"+
		"e\2\2?@\7j\2\2@A\7c\2\2AB\7t\2\2B\24\3\2\2\2CD\7k\2\2DE\7p\2\2EF\7v\2"+
		"\2F\26\3\2\2\2GH\7x\2\2HI\7q\2\2IJ\7k\2\2JK\7f\2\2K\30\3\2\2\2LR\5\37"+
		"\20\2MQ\5\37\20\2NQ\5!\21\2OQ\5#\22\2PM\3\2\2\2PN\3\2\2\2PO\3\2\2\2QT"+
		"\3\2\2\2RP\3\2\2\2RS\3\2\2\2S\32\3\2\2\2TR\3\2\2\2UW\5!\21\2VU\3\2\2\2"+
		"WX\3\2\2\2XV\3\2\2\2XY\3\2\2\2Y\34\3\2\2\2Z[\7)\2\2[\\\4\2\u0081\2\\]"+
		"\7)\2\2]\36\3\2\2\2^_\t\2\2\2_ \3\2\2\2`a\t\3\2\2a\"\3\2\2\2bc\7a\2\2"+
		"c$\3\2\2\2dh\7%\2\2eg\t\4\2\2fe\3\2\2\2gj\3\2\2\2hf\3\2\2\2hi\3\2\2\2"+
		"ik\3\2\2\2jh\3\2\2\2kl\7k\2\2lm\7p\2\2mn\7e\2\2no\7n\2\2op\7w\2\2pq\7"+
		"f\2\2qr\7g\2\2rv\3\2\2\2su\t\4\2\2ts\3\2\2\2ux\3\2\2\2vt\3\2\2\2vw\3\2"+
		"\2\2wy\3\2\2\2xv\3\2\2\2y}\7>\2\2z|\n\5\2\2{z\3\2\2\2|\177\3\2\2\2}~\3"+
		"\2\2\2}{\3\2\2\2~\u0080\3\2\2\2\177}\3\2\2\2\u0080\u0081\7@\2\2\u0081"+
		"\u0082\3\2\2\2\u0082\u0083\b\23\2\2\u0083&\3\2\2\2\u0084\u0086\t\6\2\2"+
		"\u0085\u0084\3\2\2\2\u0086\u0087\3\2\2\2\u0087\u0085\3\2\2\2\u0087\u0088"+
		"\3\2\2\2\u0088\u0089\3\2\2\2\u0089\u008a\b\24\2\2\u008a(\3\2\2\2\n\2P"+
		"RXhv}\u0087\3\b\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}