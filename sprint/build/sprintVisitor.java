// Generated from sprint.g4 by ANTLR 4.7.2
import org.antlr.v4.runtime.tree.ParseTreeVisitor;

/**
 * This interface defines a complete generic visitor for a parse tree produced
 * by {@link sprintParser}.
 *
 * @param <T> The return type of the visit operation. Use {@link Void} for
 * operations with no return type.
 */
public interface sprintVisitor<T> extends ParseTreeVisitor<T> {
	/**
	 * Visit a parse tree produced by {@link sprintParser#prg}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitPrg(sprintParser.PrgContext ctx);
	/**
	 * Visit a parse tree produced by {@link sprintParser#funcDeclaration}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitFuncDeclaration(sprintParser.FuncDeclarationContext ctx);
	/**
	 * Visit a parse tree produced by {@link sprintParser#formalParameters}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitFormalParameters(sprintParser.FormalParametersContext ctx);
	/**
	 * Visit a parse tree produced by {@link sprintParser#parameter}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitParameter(sprintParser.ParameterContext ctx);
	/**
	 * Visit a parse tree produced by {@link sprintParser#block}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitBlock(sprintParser.BlockContext ctx);
	/**
	 * Visit a parse tree produced by {@link sprintParser#statement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStatement(sprintParser.StatementContext ctx);
	/**
	 * Visit a parse tree produced by {@link sprintParser#retStatement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitRetStatement(sprintParser.RetStatementContext ctx);
	/**
	 * Visit a parse tree produced by {@link sprintParser#declStatement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitDeclStatement(sprintParser.DeclStatementContext ctx);
	/**
	 * Visit a parse tree produced by the {@code AFFECT_STMT}
	 * labeled alternative in {@link sprintParser#affectStatement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitAFFECT_STMT(sprintParser.AFFECT_STMTContext ctx);
	/**
	 * Visit a parse tree produced by the {@code ifElseIfElse}
	 * labeled alternative in {@link sprintParser#ifStatement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitIfElseIfElse(sprintParser.IfElseIfElseContext ctx);
	/**
	 * Visit a parse tree produced by the {@code if}
	 * labeled alternative in {@link sprintParser#ifStatement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitIf(sprintParser.IfContext ctx);
	/**
	 * Visit a parse tree produced by the {@code ifElse}
	 * labeled alternative in {@link sprintParser#ifStatement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitIfElse(sprintParser.IfElseContext ctx);
	/**
	 * Visit a parse tree produced by the {@code whileDo}
	 * labeled alternative in {@link sprintParser#whileDoStatement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitWhileDo(sprintParser.WhileDoContext ctx);
	/**
	 * Visit a parse tree produced by the {@code doWhile}
	 * labeled alternative in {@link sprintParser#doWhileStatement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitDoWhile(sprintParser.DoWhileContext ctx);
	/**
	 * Visit a parse tree produced by the {@code InitializedDec}
	 * labeled alternative in {@link sprintParser#varDeclaration}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitInitializedDec(sprintParser.InitializedDecContext ctx);
	/**
	 * Visit a parse tree produced by the {@code nonInitDec}
	 * labeled alternative in {@link sprintParser#varDeclaration}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNonInitDec(sprintParser.NonInitDecContext ctx);
	/**
	 * Visit a parse tree produced by the {@code MULT_EXPR}
	 * labeled alternative in {@link sprintParser#expr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitMULT_EXPR(sprintParser.MULT_EXPRContext ctx);
	/**
	 * Visit a parse tree produced by the {@code NUM_EXPR}
	 * labeled alternative in {@link sprintParser#expr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNUM_EXPR(sprintParser.NUM_EXPRContext ctx);
	/**
	 * Visit a parse tree produced by the {@code ADD_MINUS_EXPR}
	 * labeled alternative in {@link sprintParser#expr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitADD_MINUS_EXPR(sprintParser.ADD_MINUS_EXPRContext ctx);
	/**
	 * Visit a parse tree produced by the {@code UNARY_EXPR}
	 * labeled alternative in {@link sprintParser#expr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitUNARY_EXPR(sprintParser.UNARY_EXPRContext ctx);
	/**
	 * Visit a parse tree produced by the {@code PAREN_EXPR}
	 * labeled alternative in {@link sprintParser#expr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitPAREN_EXPR(sprintParser.PAREN_EXPRContext ctx);
	/**
	 * Visit a parse tree produced by the {@code AFFECT_EXPR}
	 * labeled alternative in {@link sprintParser#expr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitAFFECT_EXPR(sprintParser.AFFECT_EXPRContext ctx);
	/**
	 * Visit a parse tree produced by the {@code VAR_EXPR}
	 * labeled alternative in {@link sprintParser#expr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitVAR_EXPR(sprintParser.VAR_EXPRContext ctx);
	/**
	 * Visit a parse tree produced by the {@code NOT}
	 * labeled alternative in {@link sprintParser#boolE}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNOT(sprintParser.NOTContext ctx);
	/**
	 * Visit a parse tree produced by the {@code OR}
	 * labeled alternative in {@link sprintParser#boolE}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitOR(sprintParser.ORContext ctx);
	/**
	 * Visit a parse tree produced by the {@code PAREN_BOOLE}
	 * labeled alternative in {@link sprintParser#boolE}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitPAREN_BOOLE(sprintParser.PAREN_BOOLEContext ctx);
	/**
	 * Visit a parse tree produced by the {@code AND}
	 * labeled alternative in {@link sprintParser#boolE}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitAND(sprintParser.ANDContext ctx);
	/**
	 * Visit a parse tree produced by the {@code CMPLtGt}
	 * labeled alternative in {@link sprintParser#boolE}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitCMPLtGt(sprintParser.CMPLtGtContext ctx);
	/**
	 * Visit a parse tree produced by the {@code CMPEqNeq}
	 * labeled alternative in {@link sprintParser#boolE}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitCMPEqNeq(sprintParser.CMPEqNeqContext ctx);
	/**
	 * Visit a parse tree produced by {@link sprintParser#type}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitType(sprintParser.TypeContext ctx);
}