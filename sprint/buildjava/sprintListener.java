// Generated from sprint.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link sprintParser}.
 */
public interface sprintListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link sprintParser#prg}.
	 * @param ctx the parse tree
	 */
	void enterPrg(sprintParser.PrgContext ctx);
	/**
	 * Exit a parse tree produced by {@link sprintParser#prg}.
	 * @param ctx the parse tree
	 */
	void exitPrg(sprintParser.PrgContext ctx);
	/**
	 * Enter a parse tree produced by {@link sprintParser#funcDeclaration}.
	 * @param ctx the parse tree
	 */
	void enterFuncDeclaration(sprintParser.FuncDeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link sprintParser#funcDeclaration}.
	 * @param ctx the parse tree
	 */
	void exitFuncDeclaration(sprintParser.FuncDeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link sprintParser#formalParameters}.
	 * @param ctx the parse tree
	 */
	void enterFormalParameters(sprintParser.FormalParametersContext ctx);
	/**
	 * Exit a parse tree produced by {@link sprintParser#formalParameters}.
	 * @param ctx the parse tree
	 */
	void exitFormalParameters(sprintParser.FormalParametersContext ctx);
	/**
	 * Enter a parse tree produced by {@link sprintParser#parameter}.
	 * @param ctx the parse tree
	 */
	void enterParameter(sprintParser.ParameterContext ctx);
	/**
	 * Exit a parse tree produced by {@link sprintParser#parameter}.
	 * @param ctx the parse tree
	 */
	void exitParameter(sprintParser.ParameterContext ctx);
	/**
	 * Enter a parse tree produced by {@link sprintParser#block}.
	 * @param ctx the parse tree
	 */
	void enterBlock(sprintParser.BlockContext ctx);
	/**
	 * Exit a parse tree produced by {@link sprintParser#block}.
	 * @param ctx the parse tree
	 */
	void exitBlock(sprintParser.BlockContext ctx);
	/**
	 * Enter a parse tree produced by {@link sprintParser#statement}.
	 * @param ctx the parse tree
	 */
	void enterStatement(sprintParser.StatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link sprintParser#statement}.
	 * @param ctx the parse tree
	 */
	void exitStatement(sprintParser.StatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link sprintParser#retStatement}.
	 * @param ctx the parse tree
	 */
	void enterRetStatement(sprintParser.RetStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link sprintParser#retStatement}.
	 * @param ctx the parse tree
	 */
	void exitRetStatement(sprintParser.RetStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link sprintParser#declStatement}.
	 * @param ctx the parse tree
	 */
	void enterDeclStatement(sprintParser.DeclStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link sprintParser#declStatement}.
	 * @param ctx the parse tree
	 */
	void exitDeclStatement(sprintParser.DeclStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link sprintParser#varDeclaration}.
	 * @param ctx the parse tree
	 */
	void enterVarDeclaration(sprintParser.VarDeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link sprintParser#varDeclaration}.
	 * @param ctx the parse tree
	 */
	void exitVarDeclaration(sprintParser.VarDeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link sprintParser#type}.
	 * @param ctx the parse tree
	 */
	void enterType(sprintParser.TypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link sprintParser#type}.
	 * @param ctx the parse tree
	 */
	void exitType(sprintParser.TypeContext ctx);
}