// Generated from sprint.g4 by ANTLR 4.7.2
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class sprintParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.7.2", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, T__10=11, T__11=12, T__12=13, T__13=14, T__14=15, T__15=16, T__16=17, 
		ID=18, INT=19, PLUS_MINUS=20, LT_GT=21, EQ_NEQ=22, LETTER=23, DIGIT=24, 
		UNDER_SCORE=25, INCLUDE=26, WS=27;
	public static final int
		RULE_prg = 0, RULE_funcDeclaration = 1, RULE_formalParameters = 2, RULE_parameter = 3, 
		RULE_block = 4, RULE_statement = 5, RULE_retStatement = 6, RULE_declStatement = 7, 
		RULE_affectStatement = 8, RULE_ifStatement = 9, RULE_whileDoStatement = 10, 
		RULE_doWhileStatement = 11, RULE_varDeclaration = 12, RULE_expr = 13, 
		RULE_boolE = 14, RULE_type = 15;
	private static String[] makeRuleNames() {
		return new String[] {
			"prg", "funcDeclaration", "formalParameters", "parameter", "block", "statement", 
			"retStatement", "declStatement", "affectStatement", "ifStatement", "whileDoStatement", 
			"doWhileStatement", "varDeclaration", "expr", "boolE", "type"
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

	@Override
	public String getGrammarFileName() { return "sprint.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public sprintParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	public static class PrgContext extends ParserRuleContext {
		public List<FuncDeclarationContext> funcDeclaration() {
			return getRuleContexts(FuncDeclarationContext.class);
		}
		public FuncDeclarationContext funcDeclaration(int i) {
			return getRuleContext(FuncDeclarationContext.class,i);
		}
		public PrgContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_prg; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof sprintVisitor ) return ((sprintVisitor<? extends T>)visitor).visitPrg(this);
			else return visitor.visitChildren(this);
		}
	}

	public final PrgContext prg() throws RecognitionException {
		PrgContext _localctx = new PrgContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_prg);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(33); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(32);
				funcDeclaration();
				}
				}
				setState(35); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==T__16 );
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FuncDeclarationContext extends ParserRuleContext {
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TerminalNode ID() { return getToken(sprintParser.ID, 0); }
		public BlockContext block() {
			return getRuleContext(BlockContext.class,0);
		}
		public FormalParametersContext formalParameters() {
			return getRuleContext(FormalParametersContext.class,0);
		}
		public FuncDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_funcDeclaration; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof sprintVisitor ) return ((sprintVisitor<? extends T>)visitor).visitFuncDeclaration(this);
			else return visitor.visitChildren(this);
		}
	}

	public final FuncDeclarationContext funcDeclaration() throws RecognitionException {
		FuncDeclarationContext _localctx = new FuncDeclarationContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_funcDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(37);
			type();
			setState(38);
			match(ID);
			setState(39);
			match(T__0);
			setState(41);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__16) {
				{
				setState(40);
				formalParameters();
				}
			}

			setState(43);
			match(T__1);
			setState(44);
			block();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FormalParametersContext extends ParserRuleContext {
		public List<ParameterContext> parameter() {
			return getRuleContexts(ParameterContext.class);
		}
		public ParameterContext parameter(int i) {
			return getRuleContext(ParameterContext.class,i);
		}
		public FormalParametersContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_formalParameters; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof sprintVisitor ) return ((sprintVisitor<? extends T>)visitor).visitFormalParameters(this);
			else return visitor.visitChildren(this);
		}
	}

	public final FormalParametersContext formalParameters() throws RecognitionException {
		FormalParametersContext _localctx = new FormalParametersContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_formalParameters);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(46);
			parameter();
			setState(51);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__2) {
				{
				{
				setState(47);
				match(T__2);
				setState(48);
				parameter();
				}
				}
				setState(53);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ParameterContext extends ParserRuleContext {
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TerminalNode ID() { return getToken(sprintParser.ID, 0); }
		public ParameterContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parameter; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof sprintVisitor ) return ((sprintVisitor<? extends T>)visitor).visitParameter(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ParameterContext parameter() throws RecognitionException {
		ParameterContext _localctx = new ParameterContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_parameter);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(54);
			type();
			setState(55);
			match(ID);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class BlockContext extends ParserRuleContext {
		public List<StatementContext> statement() {
			return getRuleContexts(StatementContext.class);
		}
		public StatementContext statement(int i) {
			return getRuleContext(StatementContext.class,i);
		}
		public BlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_block; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof sprintVisitor ) return ((sprintVisitor<? extends T>)visitor).visitBlock(this);
			else return visitor.visitChildren(this);
		}
	}

	public final BlockContext block() throws RecognitionException {
		BlockContext _localctx = new BlockContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_block);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(57);
			match(T__3);
			setState(61);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__3) | (1L << T__5) | (1L << T__8) | (1L << T__10) | (1L << T__11) | (1L << T__16) | (1L << ID))) != 0)) {
				{
				{
				setState(58);
				statement();
				}
				}
				setState(63);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(64);
			match(T__4);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StatementContext extends ParserRuleContext {
		public BlockContext block() {
			return getRuleContext(BlockContext.class,0);
		}
		public DeclStatementContext declStatement() {
			return getRuleContext(DeclStatementContext.class,0);
		}
		public RetStatementContext retStatement() {
			return getRuleContext(RetStatementContext.class,0);
		}
		public AffectStatementContext affectStatement() {
			return getRuleContext(AffectStatementContext.class,0);
		}
		public IfStatementContext ifStatement() {
			return getRuleContext(IfStatementContext.class,0);
		}
		public WhileDoStatementContext whileDoStatement() {
			return getRuleContext(WhileDoStatementContext.class,0);
		}
		public DoWhileStatementContext doWhileStatement() {
			return getRuleContext(DoWhileStatementContext.class,0);
		}
		public StatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statement; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof sprintVisitor ) return ((sprintVisitor<? extends T>)visitor).visitStatement(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StatementContext statement() throws RecognitionException {
		StatementContext _localctx = new StatementContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_statement);
		try {
			setState(73);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__3:
				enterOuterAlt(_localctx, 1);
				{
				setState(66);
				block();
				}
				break;
			case T__16:
				enterOuterAlt(_localctx, 2);
				{
				setState(67);
				declStatement();
				}
				break;
			case T__5:
				enterOuterAlt(_localctx, 3);
				{
				setState(68);
				retStatement();
				}
				break;
			case ID:
				enterOuterAlt(_localctx, 4);
				{
				setState(69);
				affectStatement();
				}
				break;
			case T__8:
				enterOuterAlt(_localctx, 5);
				{
				setState(70);
				ifStatement();
				}
				break;
			case T__10:
				enterOuterAlt(_localctx, 6);
				{
				setState(71);
				whileDoStatement();
				}
				break;
			case T__11:
				enterOuterAlt(_localctx, 7);
				{
				setState(72);
				doWhileStatement();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class RetStatementContext extends ParserRuleContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public RetStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_retStatement; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof sprintVisitor ) return ((sprintVisitor<? extends T>)visitor).visitRetStatement(this);
			else return visitor.visitChildren(this);
		}
	}

	public final RetStatementContext retStatement() throws RecognitionException {
		RetStatementContext _localctx = new RetStatementContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_retStatement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(75);
			match(T__5);
			setState(76);
			expr(0);
			setState(77);
			match(T__6);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DeclStatementContext extends ParserRuleContext {
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public List<VarDeclarationContext> varDeclaration() {
			return getRuleContexts(VarDeclarationContext.class);
		}
		public VarDeclarationContext varDeclaration(int i) {
			return getRuleContext(VarDeclarationContext.class,i);
		}
		public DeclStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declStatement; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof sprintVisitor ) return ((sprintVisitor<? extends T>)visitor).visitDeclStatement(this);
			else return visitor.visitChildren(this);
		}
	}

	public final DeclStatementContext declStatement() throws RecognitionException {
		DeclStatementContext _localctx = new DeclStatementContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_declStatement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(79);
			type();
			setState(80);
			varDeclaration();
			setState(85);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__2) {
				{
				{
				setState(81);
				match(T__2);
				setState(82);
				varDeclaration();
				}
				}
				setState(87);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(88);
			match(T__6);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AffectStatementContext extends ParserRuleContext {
		public AffectStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_affectStatement; }
	 
		public AffectStatementContext() { }
		public void copyFrom(AffectStatementContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class AFFECT_STMTContext extends AffectStatementContext {
		public TerminalNode ID() { return getToken(sprintParser.ID, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public AFFECT_STMTContext(AffectStatementContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof sprintVisitor ) return ((sprintVisitor<? extends T>)visitor).visitAFFECT_STMT(this);
			else return visitor.visitChildren(this);
		}
	}

	public final AffectStatementContext affectStatement() throws RecognitionException {
		AffectStatementContext _localctx = new AffectStatementContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_affectStatement);
		try {
			_localctx = new AFFECT_STMTContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(90);
			match(ID);
			setState(91);
			match(T__7);
			setState(92);
			expr(0);
			setState(93);
			match(T__6);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IfStatementContext extends ParserRuleContext {
		public IfStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ifStatement; }
	 
		public IfStatementContext() { }
		public void copyFrom(IfStatementContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class IfContext extends IfStatementContext {
		public BoolEContext boolE() {
			return getRuleContext(BoolEContext.class,0);
		}
		public BlockContext block() {
			return getRuleContext(BlockContext.class,0);
		}
		public IfContext(IfStatementContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof sprintVisitor ) return ((sprintVisitor<? extends T>)visitor).visitIf(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class IfElseContext extends IfStatementContext {
		public BoolEContext boolE() {
			return getRuleContext(BoolEContext.class,0);
		}
		public List<BlockContext> block() {
			return getRuleContexts(BlockContext.class);
		}
		public BlockContext block(int i) {
			return getRuleContext(BlockContext.class,i);
		}
		public IfElseContext(IfStatementContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof sprintVisitor ) return ((sprintVisitor<? extends T>)visitor).visitIfElse(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class IfElseIfElseContext extends IfStatementContext {
		public List<BoolEContext> boolE() {
			return getRuleContexts(BoolEContext.class);
		}
		public BoolEContext boolE(int i) {
			return getRuleContext(BoolEContext.class,i);
		}
		public List<BlockContext> block() {
			return getRuleContexts(BlockContext.class);
		}
		public BlockContext block(int i) {
			return getRuleContext(BlockContext.class,i);
		}
		public IfElseIfElseContext(IfStatementContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof sprintVisitor ) return ((sprintVisitor<? extends T>)visitor).visitIfElseIfElse(this);
			else return visitor.visitChildren(this);
		}
	}

	public final IfStatementContext ifStatement() throws RecognitionException {
		IfStatementContext _localctx = new IfStatementContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_ifStatement);
		int _la;
		try {
			int _alt;
			setState(130);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,8,_ctx) ) {
			case 1:
				_localctx = new IfElseIfElseContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(95);
				match(T__8);
				setState(96);
				match(T__0);
				setState(97);
				boolE(0);
				setState(98);
				match(T__1);
				setState(99);
				block();
				setState(109);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,6,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(100);
						match(T__9);
						setState(101);
						match(T__8);
						setState(102);
						match(T__0);
						setState(103);
						boolE(0);
						setState(104);
						match(T__1);
						setState(105);
						block();
						}
						} 
					}
					setState(111);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,6,_ctx);
				}
				setState(114);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__9) {
					{
					setState(112);
					match(T__9);
					setState(113);
					block();
					}
				}

				}
				break;
			case 2:
				_localctx = new IfContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(116);
				match(T__8);
				setState(117);
				match(T__0);
				setState(118);
				boolE(0);
				setState(119);
				match(T__1);
				setState(120);
				block();
				}
				break;
			case 3:
				_localctx = new IfElseContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(122);
				match(T__8);
				setState(123);
				match(T__0);
				setState(124);
				boolE(0);
				setState(125);
				match(T__1);
				setState(126);
				block();
				setState(127);
				match(T__9);
				setState(128);
				block();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class WhileDoStatementContext extends ParserRuleContext {
		public WhileDoStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_whileDoStatement; }
	 
		public WhileDoStatementContext() { }
		public void copyFrom(WhileDoStatementContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class WhileDoContext extends WhileDoStatementContext {
		public BoolEContext boolE() {
			return getRuleContext(BoolEContext.class,0);
		}
		public BlockContext block() {
			return getRuleContext(BlockContext.class,0);
		}
		public WhileDoContext(WhileDoStatementContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof sprintVisitor ) return ((sprintVisitor<? extends T>)visitor).visitWhileDo(this);
			else return visitor.visitChildren(this);
		}
	}

	public final WhileDoStatementContext whileDoStatement() throws RecognitionException {
		WhileDoStatementContext _localctx = new WhileDoStatementContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_whileDoStatement);
		try {
			_localctx = new WhileDoContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(132);
			match(T__10);
			setState(133);
			match(T__0);
			setState(134);
			boolE(0);
			setState(135);
			match(T__1);
			setState(136);
			block();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DoWhileStatementContext extends ParserRuleContext {
		public DoWhileStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_doWhileStatement; }
	 
		public DoWhileStatementContext() { }
		public void copyFrom(DoWhileStatementContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class DoWhileContext extends DoWhileStatementContext {
		public BlockContext block() {
			return getRuleContext(BlockContext.class,0);
		}
		public BoolEContext boolE() {
			return getRuleContext(BoolEContext.class,0);
		}
		public DoWhileContext(DoWhileStatementContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof sprintVisitor ) return ((sprintVisitor<? extends T>)visitor).visitDoWhile(this);
			else return visitor.visitChildren(this);
		}
	}

	public final DoWhileStatementContext doWhileStatement() throws RecognitionException {
		DoWhileStatementContext _localctx = new DoWhileStatementContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_doWhileStatement);
		try {
			_localctx = new DoWhileContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(138);
			match(T__11);
			setState(139);
			block();
			setState(140);
			match(T__10);
			setState(141);
			match(T__0);
			setState(142);
			boolE(0);
			setState(143);
			match(T__1);
			setState(144);
			match(T__6);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class VarDeclarationContext extends ParserRuleContext {
		public VarDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_varDeclaration; }
	 
		public VarDeclarationContext() { }
		public void copyFrom(VarDeclarationContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class NonInitDecContext extends VarDeclarationContext {
		public TerminalNode ID() { return getToken(sprintParser.ID, 0); }
		public NonInitDecContext(VarDeclarationContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof sprintVisitor ) return ((sprintVisitor<? extends T>)visitor).visitNonInitDec(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class InitializedDecContext extends VarDeclarationContext {
		public TerminalNode ID() { return getToken(sprintParser.ID, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public InitializedDecContext(VarDeclarationContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof sprintVisitor ) return ((sprintVisitor<? extends T>)visitor).visitInitializedDec(this);
			else return visitor.visitChildren(this);
		}
	}

	public final VarDeclarationContext varDeclaration() throws RecognitionException {
		VarDeclarationContext _localctx = new VarDeclarationContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_varDeclaration);
		try {
			setState(150);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,9,_ctx) ) {
			case 1:
				_localctx = new InitializedDecContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(146);
				match(ID);
				setState(147);
				match(T__7);
				setState(148);
				expr(0);
				}
				break;
			case 2:
				_localctx = new NonInitDecContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(149);
				match(ID);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExprContext extends ParserRuleContext {
		public ExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expr; }
	 
		public ExprContext() { }
		public void copyFrom(ExprContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class MULT_EXPRContext extends ExprContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public MULT_EXPRContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof sprintVisitor ) return ((sprintVisitor<? extends T>)visitor).visitMULT_EXPR(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NUM_EXPRContext extends ExprContext {
		public TerminalNode INT() { return getToken(sprintParser.INT, 0); }
		public NUM_EXPRContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof sprintVisitor ) return ((sprintVisitor<? extends T>)visitor).visitNUM_EXPR(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class ADD_MINUS_EXPRContext extends ExprContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TerminalNode PLUS_MINUS() { return getToken(sprintParser.PLUS_MINUS, 0); }
		public ADD_MINUS_EXPRContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof sprintVisitor ) return ((sprintVisitor<? extends T>)visitor).visitADD_MINUS_EXPR(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class UNARY_EXPRContext extends ExprContext {
		public TerminalNode PLUS_MINUS() { return getToken(sprintParser.PLUS_MINUS, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public UNARY_EXPRContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof sprintVisitor ) return ((sprintVisitor<? extends T>)visitor).visitUNARY_EXPR(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class PAREN_EXPRContext extends ExprContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public PAREN_EXPRContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof sprintVisitor ) return ((sprintVisitor<? extends T>)visitor).visitPAREN_EXPR(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class AFFECT_EXPRContext extends ExprContext {
		public TerminalNode ID() { return getToken(sprintParser.ID, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public AFFECT_EXPRContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof sprintVisitor ) return ((sprintVisitor<? extends T>)visitor).visitAFFECT_EXPR(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class VAR_EXPRContext extends ExprContext {
		public TerminalNode ID() { return getToken(sprintParser.ID, 0); }
		public VAR_EXPRContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof sprintVisitor ) return ((sprintVisitor<? extends T>)visitor).visitVAR_EXPR(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ExprContext expr() throws RecognitionException {
		return expr(0);
	}

	private ExprContext expr(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExprContext _localctx = new ExprContext(_ctx, _parentState);
		ExprContext _prevctx = _localctx;
		int _startState = 26;
		enterRecursionRule(_localctx, 26, RULE_expr, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(164);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,10,_ctx) ) {
			case 1:
				{
				_localctx = new PAREN_EXPRContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(153);
				match(T__0);
				setState(154);
				expr(0);
				setState(155);
				match(T__1);
				}
				break;
			case 2:
				{
				_localctx = new UNARY_EXPRContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(157);
				match(PLUS_MINUS);
				setState(158);
				expr(6);
				}
				break;
			case 3:
				{
				_localctx = new AFFECT_EXPRContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(159);
				match(ID);
				setState(160);
				match(T__7);
				setState(161);
				expr(3);
				}
				break;
			case 4:
				{
				_localctx = new VAR_EXPRContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(162);
				match(ID);
				}
				break;
			case 5:
				{
				_localctx = new NUM_EXPRContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(163);
				match(INT);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(174);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,12,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(172);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,11,_ctx) ) {
					case 1:
						{
						_localctx = new MULT_EXPRContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(166);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(167);
						match(T__12);
						setState(168);
						expr(6);
						}
						break;
					case 2:
						{
						_localctx = new ADD_MINUS_EXPRContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(169);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(170);
						match(PLUS_MINUS);
						setState(171);
						expr(5);
						}
						break;
					}
					} 
				}
				setState(176);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,12,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class BoolEContext extends ParserRuleContext {
		public BoolEContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_boolE; }
	 
		public BoolEContext() { }
		public void copyFrom(BoolEContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class NOTContext extends BoolEContext {
		public BoolEContext boolE() {
			return getRuleContext(BoolEContext.class,0);
		}
		public NOTContext(BoolEContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof sprintVisitor ) return ((sprintVisitor<? extends T>)visitor).visitNOT(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class ORContext extends BoolEContext {
		public List<BoolEContext> boolE() {
			return getRuleContexts(BoolEContext.class);
		}
		public BoolEContext boolE(int i) {
			return getRuleContext(BoolEContext.class,i);
		}
		public ORContext(BoolEContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof sprintVisitor ) return ((sprintVisitor<? extends T>)visitor).visitOR(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class PAREN_BOOLEContext extends BoolEContext {
		public BoolEContext boolE() {
			return getRuleContext(BoolEContext.class,0);
		}
		public PAREN_BOOLEContext(BoolEContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof sprintVisitor ) return ((sprintVisitor<? extends T>)visitor).visitPAREN_BOOLE(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class ANDContext extends BoolEContext {
		public List<BoolEContext> boolE() {
			return getRuleContexts(BoolEContext.class);
		}
		public BoolEContext boolE(int i) {
			return getRuleContext(BoolEContext.class,i);
		}
		public ANDContext(BoolEContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof sprintVisitor ) return ((sprintVisitor<? extends T>)visitor).visitAND(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class CMPLtGtContext extends BoolEContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TerminalNode LT_GT() { return getToken(sprintParser.LT_GT, 0); }
		public CMPLtGtContext(BoolEContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof sprintVisitor ) return ((sprintVisitor<? extends T>)visitor).visitCMPLtGt(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class CMPEqNeqContext extends BoolEContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TerminalNode EQ_NEQ() { return getToken(sprintParser.EQ_NEQ, 0); }
		public CMPEqNeqContext(BoolEContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof sprintVisitor ) return ((sprintVisitor<? extends T>)visitor).visitCMPEqNeq(this);
			else return visitor.visitChildren(this);
		}
	}

	public final BoolEContext boolE() throws RecognitionException {
		return boolE(0);
	}

	private BoolEContext boolE(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		BoolEContext _localctx = new BoolEContext(_ctx, _parentState);
		BoolEContext _prevctx = _localctx;
		int _startState = 28;
		enterRecursionRule(_localctx, 28, RULE_boolE, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(192);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,13,_ctx) ) {
			case 1:
				{
				_localctx = new NOTContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(178);
				match(T__13);
				setState(179);
				boolE(6);
				}
				break;
			case 2:
				{
				_localctx = new PAREN_BOOLEContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(180);
				match(T__0);
				setState(181);
				boolE(0);
				setState(182);
				match(T__1);
				}
				break;
			case 3:
				{
				_localctx = new CMPLtGtContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(184);
				expr(0);
				setState(185);
				match(LT_GT);
				setState(186);
				expr(0);
				}
				break;
			case 4:
				{
				_localctx = new CMPEqNeqContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(188);
				expr(0);
				setState(189);
				match(EQ_NEQ);
				setState(190);
				expr(0);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(202);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,15,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(200);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,14,_ctx) ) {
					case 1:
						{
						_localctx = new ANDContext(new BoolEContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_boolE);
						setState(194);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(195);
						match(T__14);
						setState(196);
						boolE(3);
						}
						break;
					case 2:
						{
						_localctx = new ORContext(new BoolEContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_boolE);
						setState(197);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(198);
						match(T__15);
						setState(199);
						boolE(2);
						}
						break;
					}
					} 
				}
				setState(204);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,15,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class TypeContext extends ParserRuleContext {
		public TypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof sprintVisitor ) return ((sprintVisitor<? extends T>)visitor).visitType(this);
			else return visitor.visitChildren(this);
		}
	}

	public final TypeContext type() throws RecognitionException {
		TypeContext _localctx = new TypeContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_type);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(205);
			match(T__16);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 13:
			return expr_sempred((ExprContext)_localctx, predIndex);
		case 14:
			return boolE_sempred((BoolEContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean expr_sempred(ExprContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 5);
		case 1:
			return precpred(_ctx, 4);
		}
		return true;
	}
	private boolean boolE_sempred(BoolEContext _localctx, int predIndex) {
		switch (predIndex) {
		case 2:
			return precpred(_ctx, 2);
		case 3:
			return precpred(_ctx, 1);
		}
		return true;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\35\u00d2\4\2\t\2"+
		"\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\3\2\6\2"+
		"$\n\2\r\2\16\2%\3\3\3\3\3\3\3\3\5\3,\n\3\3\3\3\3\3\3\3\4\3\4\3\4\7\4\64"+
		"\n\4\f\4\16\4\67\13\4\3\5\3\5\3\5\3\6\3\6\7\6>\n\6\f\6\16\6A\13\6\3\6"+
		"\3\6\3\7\3\7\3\7\3\7\3\7\3\7\3\7\5\7L\n\7\3\b\3\b\3\b\3\b\3\t\3\t\3\t"+
		"\3\t\7\tV\n\t\f\t\16\tY\13\t\3\t\3\t\3\n\3\n\3\n\3\n\3\n\3\13\3\13\3\13"+
		"\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\7\13n\n\13\f\13\16\13q\13"+
		"\13\3\13\3\13\5\13u\n\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13"+
		"\3\13\3\13\3\13\3\13\3\13\5\13\u0085\n\13\3\f\3\f\3\f\3\f\3\f\3\f\3\r"+
		"\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\16\3\16\3\16\3\16\5\16\u0099\n\16\3\17"+
		"\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\5\17\u00a7\n\17"+
		"\3\17\3\17\3\17\3\17\3\17\3\17\7\17\u00af\n\17\f\17\16\17\u00b2\13\17"+
		"\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20"+
		"\3\20\5\20\u00c3\n\20\3\20\3\20\3\20\3\20\3\20\3\20\7\20\u00cb\n\20\f"+
		"\20\16\20\u00ce\13\20\3\21\3\21\3\21\2\4\34\36\22\2\4\6\b\n\f\16\20\22"+
		"\24\26\30\32\34\36 \2\2\2\u00dc\2#\3\2\2\2\4\'\3\2\2\2\6\60\3\2\2\2\b"+
		"8\3\2\2\2\n;\3\2\2\2\fK\3\2\2\2\16M\3\2\2\2\20Q\3\2\2\2\22\\\3\2\2\2\24"+
		"\u0084\3\2\2\2\26\u0086\3\2\2\2\30\u008c\3\2\2\2\32\u0098\3\2\2\2\34\u00a6"+
		"\3\2\2\2\36\u00c2\3\2\2\2 \u00cf\3\2\2\2\"$\5\4\3\2#\"\3\2\2\2$%\3\2\2"+
		"\2%#\3\2\2\2%&\3\2\2\2&\3\3\2\2\2\'(\5 \21\2()\7\24\2\2)+\7\3\2\2*,\5"+
		"\6\4\2+*\3\2\2\2+,\3\2\2\2,-\3\2\2\2-.\7\4\2\2./\5\n\6\2/\5\3\2\2\2\60"+
		"\65\5\b\5\2\61\62\7\5\2\2\62\64\5\b\5\2\63\61\3\2\2\2\64\67\3\2\2\2\65"+
		"\63\3\2\2\2\65\66\3\2\2\2\66\7\3\2\2\2\67\65\3\2\2\289\5 \21\29:\7\24"+
		"\2\2:\t\3\2\2\2;?\7\6\2\2<>\5\f\7\2=<\3\2\2\2>A\3\2\2\2?=\3\2\2\2?@\3"+
		"\2\2\2@B\3\2\2\2A?\3\2\2\2BC\7\7\2\2C\13\3\2\2\2DL\5\n\6\2EL\5\20\t\2"+
		"FL\5\16\b\2GL\5\22\n\2HL\5\24\13\2IL\5\26\f\2JL\5\30\r\2KD\3\2\2\2KE\3"+
		"\2\2\2KF\3\2\2\2KG\3\2\2\2KH\3\2\2\2KI\3\2\2\2KJ\3\2\2\2L\r\3\2\2\2MN"+
		"\7\b\2\2NO\5\34\17\2OP\7\t\2\2P\17\3\2\2\2QR\5 \21\2RW\5\32\16\2ST\7\5"+
		"\2\2TV\5\32\16\2US\3\2\2\2VY\3\2\2\2WU\3\2\2\2WX\3\2\2\2XZ\3\2\2\2YW\3"+
		"\2\2\2Z[\7\t\2\2[\21\3\2\2\2\\]\7\24\2\2]^\7\n\2\2^_\5\34\17\2_`\7\t\2"+
		"\2`\23\3\2\2\2ab\7\13\2\2bc\7\3\2\2cd\5\36\20\2de\7\4\2\2eo\5\n\6\2fg"+
		"\7\f\2\2gh\7\13\2\2hi\7\3\2\2ij\5\36\20\2jk\7\4\2\2kl\5\n\6\2ln\3\2\2"+
		"\2mf\3\2\2\2nq\3\2\2\2om\3\2\2\2op\3\2\2\2pt\3\2\2\2qo\3\2\2\2rs\7\f\2"+
		"\2su\5\n\6\2tr\3\2\2\2tu\3\2\2\2u\u0085\3\2\2\2vw\7\13\2\2wx\7\3\2\2x"+
		"y\5\36\20\2yz\7\4\2\2z{\5\n\6\2{\u0085\3\2\2\2|}\7\13\2\2}~\7\3\2\2~\177"+
		"\5\36\20\2\177\u0080\7\4\2\2\u0080\u0081\5\n\6\2\u0081\u0082\7\f\2\2\u0082"+
		"\u0083\5\n\6\2\u0083\u0085\3\2\2\2\u0084a\3\2\2\2\u0084v\3\2\2\2\u0084"+
		"|\3\2\2\2\u0085\25\3\2\2\2\u0086\u0087\7\r\2\2\u0087\u0088\7\3\2\2\u0088"+
		"\u0089\5\36\20\2\u0089\u008a\7\4\2\2\u008a\u008b\5\n\6\2\u008b\27\3\2"+
		"\2\2\u008c\u008d\7\16\2\2\u008d\u008e\5\n\6\2\u008e\u008f\7\r\2\2\u008f"+
		"\u0090\7\3\2\2\u0090\u0091\5\36\20\2\u0091\u0092\7\4\2\2\u0092\u0093\7"+
		"\t\2\2\u0093\31\3\2\2\2\u0094\u0095\7\24\2\2\u0095\u0096\7\n\2\2\u0096"+
		"\u0099\5\34\17\2\u0097\u0099\7\24\2\2\u0098\u0094\3\2\2\2\u0098\u0097"+
		"\3\2\2\2\u0099\33\3\2\2\2\u009a\u009b\b\17\1\2\u009b\u009c\7\3\2\2\u009c"+
		"\u009d\5\34\17\2\u009d\u009e\7\4\2\2\u009e\u00a7\3\2\2\2\u009f\u00a0\7"+
		"\26\2\2\u00a0\u00a7\5\34\17\b\u00a1\u00a2\7\24\2\2\u00a2\u00a3\7\n\2\2"+
		"\u00a3\u00a7\5\34\17\5\u00a4\u00a7\7\24\2\2\u00a5\u00a7\7\25\2\2\u00a6"+
		"\u009a\3\2\2\2\u00a6\u009f\3\2\2\2\u00a6\u00a1\3\2\2\2\u00a6\u00a4\3\2"+
		"\2\2\u00a6\u00a5\3\2\2\2\u00a7\u00b0\3\2\2\2\u00a8\u00a9\f\7\2\2\u00a9"+
		"\u00aa\7\17\2\2\u00aa\u00af\5\34\17\b\u00ab\u00ac\f\6\2\2\u00ac\u00ad"+
		"\7\26\2\2\u00ad\u00af\5\34\17\7\u00ae\u00a8\3\2\2\2\u00ae\u00ab\3\2\2"+
		"\2\u00af\u00b2\3\2\2\2\u00b0\u00ae\3\2\2\2\u00b0\u00b1\3\2\2\2\u00b1\35"+
		"\3\2\2\2\u00b2\u00b0\3\2\2\2\u00b3\u00b4\b\20\1\2\u00b4\u00b5\7\20\2\2"+
		"\u00b5\u00c3\5\36\20\b\u00b6\u00b7\7\3\2\2\u00b7\u00b8\5\36\20\2\u00b8"+
		"\u00b9\7\4\2\2\u00b9\u00c3\3\2\2\2\u00ba\u00bb\5\34\17\2\u00bb\u00bc\7"+
		"\27\2\2\u00bc\u00bd\5\34\17\2\u00bd\u00c3\3\2\2\2\u00be\u00bf\5\34\17"+
		"\2\u00bf\u00c0\7\30\2\2\u00c0\u00c1\5\34\17\2\u00c1\u00c3\3\2\2\2\u00c2"+
		"\u00b3\3\2\2\2\u00c2\u00b6\3\2\2\2\u00c2\u00ba\3\2\2\2\u00c2\u00be\3\2"+
		"\2\2\u00c3\u00cc\3\2\2\2\u00c4\u00c5\f\4\2\2\u00c5\u00c6\7\21\2\2\u00c6"+
		"\u00cb\5\36\20\5\u00c7\u00c8\f\3\2\2\u00c8\u00c9\7\22\2\2\u00c9\u00cb"+
		"\5\36\20\4\u00ca\u00c4\3\2\2\2\u00ca\u00c7\3\2\2\2\u00cb\u00ce\3\2\2\2"+
		"\u00cc\u00ca\3\2\2\2\u00cc\u00cd\3\2\2\2\u00cd\37\3\2\2\2\u00ce\u00cc"+
		"\3\2\2\2\u00cf\u00d0\7\23\2\2\u00d0!\3\2\2\2\22%+\65?KWot\u0084\u0098"+
		"\u00a6\u00ae\u00b0\u00c2\u00ca\u00cc";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}