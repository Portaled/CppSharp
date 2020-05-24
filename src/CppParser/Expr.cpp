// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------


#include "Sources.h"
#include "Expr.h"

namespace CppSharp { namespace CppParser { namespace AST {

Expr::Classification::Classification()
{
}

Expr::Expr()
    : Stmt(StmtClass::NoStmt)
    , type(QualifiedType())
    , valueDependent(0)
    , typeDependent(0)
    , instantiationDependent(0)
    , containsUnexpandedParameterPack(0)
    , exprLoc(SourceLocation())
    , isLValue(0)
    , isRValue(0)
    , isXValue(0)
    , isGLValue(0)
    , isOrdinaryOrBitFieldObject(0)
    , sourceBitField(nullptr)
    , referencedDeclOfCallee(nullptr)
    , hasPlaceholderType(0)
{
}

Expr::Expr(StmtClass klass)
    : Stmt(klass)
    , type(QualifiedType())
    , valueDependent(0)
    , typeDependent(0)
    , instantiationDependent(0)
    , containsUnexpandedParameterPack(0)
    , exprLoc(SourceLocation())
    , isLValue(0)
    , isRValue(0)
    , isXValue(0)
    , isGLValue(0)
    , isOrdinaryOrBitFieldObject(0)
    , sourceBitField(nullptr)
    , referencedDeclOfCallee(nullptr)
    , hasPlaceholderType(0)
{
}

FullExpr::FullExpr()
    : Expr(StmtClass::NoStmt)
    , subExpr(nullptr)
{
}

FullExpr::FullExpr(StmtClass klass)
    : Expr(klass)
    , subExpr(nullptr)
{
}

ConstantExpr::ConstantExpr()
    : FullExpr(StmtClass::ConstantExpr)
{
}

OpaqueValueExpr::OpaqueValueExpr()
    : Expr(StmtClass::OpaqueValueExpr)
    , isUnique(0)
    , location(SourceLocation())
    , sourceExpr(nullptr)
{
}

DeclRefExpr::DeclRefExpr()
    : Expr(StmtClass::DeclRefExpr)
    , location(SourceLocation())
    , hadMultipleCandidates(0)
    , hasQualifier(0)
    , foundDecl(nullptr)
    , hasTemplateKWAndArgsInfo(0)
    , templateKeywordLoc(SourceLocation())
    , lAngleLoc(SourceLocation())
    , rAngleLoc(SourceLocation())
    , hasTemplateKeyword(0)
    , hasExplicitTemplateArgs(0)
    , numTemplateArgs(0)
    , refersToEnclosingVariableOrCapture(0)
{
}

IntegerLiteral::IntegerLiteral()
    : Expr(StmtClass::IntegerLiteral)
    , location(SourceLocation())
    , value(0)
{
}

FixedPointLiteral::FixedPointLiteral()
    : Expr(StmtClass::FixedPointLiteral)
    , location(SourceLocation())
    , value(0)
{
}

CharacterLiteral::CharacterLiteral()
    : Expr(StmtClass::CharacterLiteral)
    , location(SourceLocation())
    , kind((CharacterLiteral::CharacterKind::Ascii))
    , value(0)
{
}

FloatingLiteral::FloatingLiteral()
    : Expr(StmtClass::FloatingLiteral)
    , exact(0)
    , location(SourceLocation())
    , valueAsApproximateDouble(0)
{
}

ImaginaryLiteral::ImaginaryLiteral()
    : Expr(StmtClass::ImaginaryLiteral)
    , subExpr(nullptr)
{
}

StringLiteral::StringLiteral()
    : Expr(StmtClass::StringLiteral)
    , byteLength(0)
    , length(0)
    , charByteWidth(0)
    , kind((StringLiteral::StringKind::Ascii))
    , isAscii(0)
    , isWide(0)
    , isUTF8(0)
    , isUTF16(0)
    , isUTF32(0)
    , isPascal(0)
    , containsNonAscii(0)
    , containsNonAsciiOrNull(0)
    , numConcatenated(0)
{
}

PredefinedExpr::PredefinedExpr()
    : Expr(StmtClass::PredefinedExpr)
    , location(SourceLocation())
    , identKind((PredefinedExpr::IdentKind::Func))
{
}

ParenExpr::ParenExpr()
    : Expr(StmtClass::ParenExpr)
    , subExpr(nullptr)
    , lParen(SourceLocation())
    , rParen(SourceLocation())
{
}

UnaryOperator::UnaryOperator()
    : Expr(StmtClass::UnaryOperator)
    , opcode((UnaryOperatorKind::PostInc))
    , subExpr(nullptr)
    , operatorLoc(SourceLocation())
    , canOverflow(0)
    , isPrefix(0)
    , isPostfix(0)
    , isIncrementOp(0)
    , isDecrementOp(0)
    , isIncrementDecrementOp(0)
    , isArithmeticOp(0)
    , isFPContractableWithinStatement(false)
{
}

OffsetOfExpr::OffsetOfExpr()
    : Expr(StmtClass::OffsetOfExpr)
    , operatorLoc(SourceLocation())
    , rParenLoc(SourceLocation())
    , numComponents(0)
    , numExpressions(0)
{
}

UnaryExprOrTypeTraitExpr::UnaryExprOrTypeTraitExpr()
    : Expr(StmtClass::UnaryExprOrTypeTraitExpr)
    , kind((UnaryExprOrTypeTrait::SizeOf))
    , operatorLoc(SourceLocation())
    , rParenLoc(SourceLocation())
    , isArgumentType(0)
    , argumentType(QualifiedType())
    , argumentExpr(nullptr)
    , typeOfArgument(QualifiedType())
{
}

ArraySubscriptExpr::ArraySubscriptExpr()
    : Expr(StmtClass::ArraySubscriptExpr)
    , lHS(nullptr)
    , rHS(nullptr)
    , rBracketLoc(SourceLocation())
    , base(nullptr)
    , idx(nullptr)
{
}

CallExpr::CallExpr()
    : Expr(StmtClass::CallExpr)
    , callee(nullptr)
    , rParenLoc(SourceLocation())
    , calleeDecl(nullptr)
    , directCallee(nullptr)
    , numArgs(0)
    , numCommas(0)
    , builtinCallee(0)
    , isCallToStdMove(0)
{
}

CallExpr::CallExpr(StmtClass klass)
    : Expr(klass)
    , callee(nullptr)
    , rParenLoc(SourceLocation())
    , calleeDecl(nullptr)
    , directCallee(nullptr)
    , numArgs(0)
    , numCommas(0)
    , builtinCallee(0)
    , isCallToStdMove(0)
{
}

DEF_VECTOR(CallExpr, Expr*, arguments)

MemberExpr::MemberExpr()
    : Expr(StmtClass::MemberExpr)
    , base(nullptr)
    , arrow(0)
    , memberLoc(SourceLocation())
    , hadMultipleCandidates(0)
    , hasQualifier(0)
    , templateKeywordLoc(SourceLocation())
    , lAngleLoc(SourceLocation())
    , rAngleLoc(SourceLocation())
    , hasTemplateKeyword(0)
    , hasExplicitTemplateArgs(0)
    , numTemplateArgs(0)
    , operatorLoc(SourceLocation())
    , isImplicitAccess(0)
{
}

CompoundLiteralExpr::CompoundLiteralExpr()
    : Expr(StmtClass::CompoundLiteralExpr)
    , initializer(nullptr)
    , fileScope(0)
    , lParenLoc(SourceLocation())
{
}

CastExpr::CastExpr()
    : Expr(StmtClass::NoStmt)
    , castKind((CastKind::Dependent))
    , subExpr(nullptr)
    , castKindName(nullptr)
    , subExprAsWritten(nullptr)
    , conversionFunction(nullptr)
    , path_empty(0)
    , path_size(0)
{
}

CastExpr::CastExpr(StmtClass klass)
    : Expr(klass)
    , castKind((CastKind::Dependent))
    , subExpr(nullptr)
    , castKindName(nullptr)
    , subExprAsWritten(nullptr)
    , conversionFunction(nullptr)
    , path_empty(0)
    , path_size(0)
{
}

ImplicitCastExpr::ImplicitCastExpr()
    : CastExpr(StmtClass::ImplicitCastExpr)
    , isPartOfExplicitCast(0)
{
}

ExplicitCastExpr::ExplicitCastExpr()
    : CastExpr(StmtClass::NoStmt)
    , typeAsWritten(QualifiedType())
{
}

ExplicitCastExpr::ExplicitCastExpr(StmtClass klass)
    : CastExpr(klass)
    , typeAsWritten(QualifiedType())
{
}

CStyleCastExpr::CStyleCastExpr()
    : ExplicitCastExpr(StmtClass::CStyleCastExpr)
    , lParenLoc(SourceLocation())
    , rParenLoc(SourceLocation())
{
}

BinaryOperator::BinaryOperator()
    : Expr(StmtClass::BinaryOperator)
    , operatorLoc(SourceLocation())
    , opcode((BinaryOperatorKind::PtrMemD))
    , lHS(nullptr)
    , rHS(nullptr)
    , isPtrMemOp(0)
    , isMultiplicativeOp(0)
    , isAdditiveOp(0)
    , isShiftOp(0)
    , isBitwiseOp(0)
    , isRelationalOp(0)
    , isEqualityOp(0)
    , isComparisonOp(0)
    , isLogicalOp(0)
    , isAssignmentOp(0)
    , isCompoundAssignmentOp(0)
    , isShiftAssignOp(0)
    , isFPContractableWithinStatement(0)
    , isFEnvAccessOn(0)
{
}

BinaryOperator::BinaryOperator(StmtClass klass)
    : Expr(klass)
    , operatorLoc(SourceLocation())
    , opcode((BinaryOperatorKind::PtrMemD))
    , lHS(nullptr)
    , rHS(nullptr)
    , isPtrMemOp(0)
    , isMultiplicativeOp(0)
    , isAdditiveOp(0)
    , isShiftOp(0)
    , isBitwiseOp(0)
    , isRelationalOp(0)
    , isEqualityOp(0)
    , isComparisonOp(0)
    , isLogicalOp(0)
    , isAssignmentOp(0)
    , isCompoundAssignmentOp(0)
    , isShiftAssignOp(0)
    , isFPContractableWithinStatement(0)
    , isFEnvAccessOn(0)
{
}

CompoundAssignOperator::CompoundAssignOperator()
    : BinaryOperator(StmtClass::CompoundAssignOperator)
    , computationLHSType(QualifiedType())
    , computationResultType(QualifiedType())
{
}

AbstractConditionalOperator::AbstractConditionalOperator()
    : Expr(StmtClass::NoStmt)
    , cond(nullptr)
    , trueExpr(nullptr)
    , falseExpr(nullptr)
    , questionLoc(SourceLocation())
    , colonLoc(SourceLocation())
{
}

AbstractConditionalOperator::AbstractConditionalOperator(StmtClass klass)
    : Expr(klass)
    , cond(nullptr)
    , trueExpr(nullptr)
    , falseExpr(nullptr)
    , questionLoc(SourceLocation())
    , colonLoc(SourceLocation())
{
}

ConditionalOperator::ConditionalOperator()
    : AbstractConditionalOperator(StmtClass::ConditionalOperator)
    , lHS(nullptr)
    , rHS(nullptr)
{
}

BinaryConditionalOperator::BinaryConditionalOperator()
    : AbstractConditionalOperator(StmtClass::BinaryConditionalOperator)
    , common(nullptr)
    , opaqueValue(nullptr)
{
}

AddrLabelExpr::AddrLabelExpr()
    : Expr(StmtClass::AddrLabelExpr)
    , ampAmpLoc(SourceLocation())
    , labelLoc(SourceLocation())
{
}

StmtExpr::StmtExpr()
    : Expr(StmtClass::StmtExpr)
    , subStmt(nullptr)
    , lParenLoc(SourceLocation())
    , rParenLoc(SourceLocation())
{
}

ShuffleVectorExpr::ShuffleVectorExpr()
    : Expr(StmtClass::ShuffleVectorExpr)
    , builtinLoc(SourceLocation())
    , rParenLoc(SourceLocation())
    , numSubExprs(0)
{
}

ConvertVectorExpr::ConvertVectorExpr()
    : Expr(StmtClass::ConvertVectorExpr)
    , srcExpr(nullptr)
    , builtinLoc(SourceLocation())
    , rParenLoc(SourceLocation())
{
}

ChooseExpr::ChooseExpr()
    : Expr(StmtClass::ChooseExpr)
    , isConditionTrue(0)
    , cond(nullptr)
    , lHS(nullptr)
    , rHS(nullptr)
    , builtinLoc(SourceLocation())
    , rParenLoc(SourceLocation())
    , isConditionDependent(0)
    , chosenSubExpr(nullptr)
{
}

GNUNullExpr::GNUNullExpr()
    : Expr(StmtClass::GNUNullExpr)
    , tokenLocation(SourceLocation())
{
}

VAArgExpr::VAArgExpr()
    : Expr(StmtClass::VAArgExpr)
    , subExpr(nullptr)
    , isMicrosoftABI(0)
    , builtinLoc(SourceLocation())
    , rParenLoc(SourceLocation())
{
}

InitListExpr::InitListExpr()
    : Expr(StmtClass::InitListExpr)
    , arrayFiller(nullptr)
    , lBraceLoc(SourceLocation())
    , rBraceLoc(SourceLocation())
    , syntacticForm(nullptr)
    , numInits(0)
    , hasArrayFiller(0)
    , isExplicit(0)
    , isStringLiteralInit(0)
    , isTransparent(0)
    , isSemanticForm(0)
    , semanticForm(nullptr)
    , isSyntacticForm(0)
{
}

DesignatedInitExpr::Designator::Designator()
{
}

DesignatedInitExpr::FieldDesignator::FieldDesignator()
{
}

DesignatedInitExpr::ArrayOrRangeDesignator::ArrayOrRangeDesignator()
{
}

DesignatedInitExpr::DesignatedInitExpr()
    : Expr(StmtClass::DesignatedInitExpr)
    , equalOrColonLoc(SourceLocation())
    , init(nullptr)
    , size(0)
    , usesGNUSyntax(0)
    , numSubExprs(0)
    , designatorsSourceRange(SourceRange())
{
}

NoInitExpr::NoInitExpr()
    : Expr(StmtClass::NoInitExpr)
{
}

DesignatedInitUpdateExpr::DesignatedInitUpdateExpr()
    : Expr(StmtClass::DesignatedInitUpdateExpr)
    , base(nullptr)
    , updater(nullptr)
{
}

ArrayInitLoopExpr::ArrayInitLoopExpr()
    : Expr(StmtClass::ArrayInitLoopExpr)
    , commonExpr(nullptr)
    , subExpr(nullptr)
{
}

ArrayInitIndexExpr::ArrayInitIndexExpr()
    : Expr(StmtClass::ArrayInitIndexExpr)
{
}

ImplicitValueInitExpr::ImplicitValueInitExpr()
    : Expr(StmtClass::ImplicitValueInitExpr)
{
}

ParenListExpr::ParenListExpr()
    : Expr(StmtClass::ParenListExpr)
    , numExprs(0)
    , lParenLoc(SourceLocation())
    , rParenLoc(SourceLocation())
{
}

GenericSelectionExpr::GenericSelectionExpr()
    : Expr(StmtClass::GenericSelectionExpr)
    , numAssocs(0)
    , genericLoc(SourceLocation())
    , defaultLoc(SourceLocation())
    , rParenLoc(SourceLocation())
    , controllingExpr(nullptr)
    , isResultDependent(0)
    , resultIndex(0)
    , resultExpr(nullptr)
{
}

ExtVectorElementExpr::ExtVectorElementExpr()
    : Expr(StmtClass::ExtVectorElementExpr)
    , base(nullptr)
    , accessorLoc(SourceLocation())
    , numElements(0)
    , containsDuplicateElements(0)
    , isArrow(0)
{
}

BlockExpr::BlockExpr()
    : Expr(StmtClass::BlockExpr)
    , caretLocation(SourceLocation())
    , body(nullptr)
{
}

AsTypeExpr::AsTypeExpr()
    : Expr(StmtClass::AsTypeExpr)
    , srcExpr(nullptr)
    , builtinLoc(SourceLocation())
    , rParenLoc(SourceLocation())
{
}

PseudoObjectExpr::PseudoObjectExpr()
    : Expr(StmtClass::PseudoObjectExpr)
    , syntacticForm(nullptr)
    , resultExprIndex(0)
    , resultExpr(nullptr)
    , numSemanticExprs(0)
{
}

AtomicExpr::AtomicExpr()
    : Expr(StmtClass::AtomicExpr)
    , ptr(nullptr)
    , order(nullptr)
    , scope(nullptr)
    , val1(nullptr)
    , orderFail(nullptr)
    , val2(nullptr)
    , weak(nullptr)
    , valueType(QualifiedType())
    , op((AtomicExpr::AtomicOp::C11AtomicInit))
    , numSubExprs(0)
    , isVolatile(0)
    , isCmpXChg(0)
    , isOpenCL(0)
    , builtinLoc(SourceLocation())
    , rParenLoc(SourceLocation())
{
}

TypoExpr::TypoExpr()
    : Expr(StmtClass::TypoExpr)
{
}

CXXOperatorCallExpr::CXXOperatorCallExpr()
    : CallExpr(StmtClass::CXXOperatorCallExpr)
    , _operator((OverloadedOperatorKind::None))
    , isAssignmentOp(0)
    , isInfixBinaryOp(0)
    , operatorLoc(SourceLocation())
    , isFPContractableWithinStatement(0)
{
}

CXXMemberCallExpr::CXXMemberCallExpr()
    : CallExpr(StmtClass::CXXMemberCallExpr)
    , implicitObjectArgument(nullptr)
    , methodDecl(nullptr)
{
}

CUDAKernelCallExpr::CUDAKernelCallExpr()
    : CallExpr(StmtClass::CUDAKernelCallExpr)
    , config(nullptr)
{
}

CXXNamedCastExpr::CXXNamedCastExpr()
    : ExplicitCastExpr(StmtClass::NoStmt)
    , castName(nullptr)
    , operatorLoc(SourceLocation())
    , rParenLoc(SourceLocation())
    , angleBrackets(SourceRange())
{
}

CXXNamedCastExpr::CXXNamedCastExpr(StmtClass klass)
    : ExplicitCastExpr(klass)
    , castName(nullptr)
    , operatorLoc(SourceLocation())
    , rParenLoc(SourceLocation())
    , angleBrackets(SourceRange())
{
}

CXXStaticCastExpr::CXXStaticCastExpr()
    : CXXNamedCastExpr(StmtClass::CXXStaticCastExpr)
{
}

CXXDynamicCastExpr::CXXDynamicCastExpr()
    : CXXNamedCastExpr(StmtClass::CXXDynamicCastExpr)
    , isAlwaysNull(0)
{
}

CXXReinterpretCastExpr::CXXReinterpretCastExpr()
    : CXXNamedCastExpr(StmtClass::CXXReinterpretCastExpr)
{
}

CXXConstCastExpr::CXXConstCastExpr()
    : CXXNamedCastExpr(StmtClass::CXXConstCastExpr)
{
}

UserDefinedLiteral::UserDefinedLiteral()
    : CallExpr(StmtClass::UserDefinedLiteral)
    , literalOperatorKind((UserDefinedLiteral::LiteralOperatorKind::Raw))
    , cookedLiteral(nullptr)
    , uDSuffixLoc(SourceLocation())
{
}

CXXBoolLiteralExpr::CXXBoolLiteralExpr()
    : Expr(StmtClass::CXXBoolLiteralExpr)
    , value(0)
    , location(SourceLocation())
{
}

CXXNullPtrLiteralExpr::CXXNullPtrLiteralExpr()
    : Expr(StmtClass::CXXNullPtrLiteralExpr)
    , location(SourceLocation())
{
}

CXXStdInitializerListExpr::CXXStdInitializerListExpr()
    : Expr(StmtClass::CXXStdInitializerListExpr)
    , subExpr(nullptr)
{
}

CXXTypeidExpr::CXXTypeidExpr()
    : Expr(StmtClass::CXXTypeidExpr)
    , exprOperand(nullptr)
    , isPotentiallyEvaluated(0)
    , isTypeOperand(0)
{
}

MSPropertyRefExpr::MSPropertyRefExpr()
    : Expr(StmtClass::MSPropertyRefExpr)
    , isImplicitAccess(0)
    , baseExpr(nullptr)
    , isArrow(0)
    , memberLoc(SourceLocation())
{
}

MSPropertySubscriptExpr::MSPropertySubscriptExpr()
    : Expr(StmtClass::MSPropertySubscriptExpr)
    , rBracketLoc(SourceLocation())
    , base(nullptr)
    , idx(nullptr)
{
}

CXXUuidofExpr::CXXUuidofExpr()
    : Expr(StmtClass::CXXUuidofExpr)
    , exprOperand(nullptr)
    , isTypeOperand(0)
{
}

CXXThisExpr::CXXThisExpr()
    : Expr(StmtClass::CXXThisExpr)
    , location(SourceLocation())
    , implicit(0)
{
}

CXXThrowExpr::CXXThrowExpr()
    : Expr(StmtClass::CXXThrowExpr)
    , subExpr(nullptr)
    , throwLoc(SourceLocation())
    , isThrownVariableInScope(0)
{
}

CXXDefaultArgExpr::CXXDefaultArgExpr()
    : Expr(StmtClass::CXXDefaultArgExpr)
    , expr(nullptr)
    , usedLocation(SourceLocation())
{
}

CXXDefaultInitExpr::CXXDefaultInitExpr()
    : Expr(StmtClass::CXXDefaultInitExpr)
    , field(nullptr)
    , expr(nullptr)
{
}

CXXBindTemporaryExpr::CXXBindTemporaryExpr()
    : Expr(StmtClass::CXXBindTemporaryExpr)
    , subExpr(nullptr)
{
}

CXXConstructExpr::CXXConstructExpr()
    : Expr(StmtClass::CXXConstructExpr)
    , location(SourceLocation())
    , elidable(0)
    , hadMultipleCandidates(0)
    , listInitialization(0)
    , stdInitListInitialization(0)
    , requiresZeroInitialization(0)
    , parenOrBraceRange(SourceRange())
    , numArgs(0)
{
}

CXXConstructExpr::CXXConstructExpr(StmtClass klass)
    : Expr(klass)
    , location(SourceLocation())
    , elidable(0)
    , hadMultipleCandidates(0)
    , listInitialization(0)
    , stdInitListInitialization(0)
    , requiresZeroInitialization(0)
    , parenOrBraceRange(SourceRange())
    , numArgs(0)
{
}

DEF_VECTOR(CXXConstructExpr, Expr*, arguments)

CXXInheritedCtorInitExpr::CXXInheritedCtorInitExpr()
    : Expr(StmtClass::CXXInheritedCtorInitExpr)
    , constructsVBase(0)
    , inheritedFromVBase(0)
    , location(SourceLocation())
{
}

CXXFunctionalCastExpr::CXXFunctionalCastExpr()
    : ExplicitCastExpr(StmtClass::CXXFunctionalCastExpr)
    , lParenLoc(SourceLocation())
    , rParenLoc(SourceLocation())
    , isListInitialization(0)
{
}

CXXTemporaryObjectExpr::CXXTemporaryObjectExpr()
    : CXXConstructExpr(StmtClass::CXXTemporaryObjectExpr)
{
}

LambdaExpr::LambdaExpr()
    : Expr(StmtClass::LambdaExpr)
    , captureDefaultLoc(SourceLocation())
    , capture_size(0)
    , introducerRange(SourceRange())
    , callOperator(nullptr)
    , isGenericLambda(0)
    , body(nullptr)
    , isMutable(0)
    , hasExplicitParameters(0)
    , hasExplicitResultType(0)
{
}

DEF_VECTOR(LambdaExpr, Expr*, capture_inits)

CXXScalarValueInitExpr::CXXScalarValueInitExpr()
    : Expr(StmtClass::CXXScalarValueInitExpr)
    , rParenLoc(SourceLocation())
{
}

CXXNewExpr::CXXNewExpr()
    : Expr(StmtClass::CXXNewExpr)
    , operatorNew(nullptr)
    , operatorDelete(nullptr)
    , allocatedType(QualifiedType())
    , isArray(0)
    , arraySize(nullptr)
    , numPlacementArgs(0)
    , isParenTypeId(0)
    , typeIdParens(SourceRange())
    , isGlobalNew(0)
    , hasInitializer(0)
    , initializationStyle((CXXNewExpr::InitializationStyle::NoInit))
    , initializer(nullptr)
    , constructExpr(nullptr)
    , directInitRange(SourceRange())
{
}

DEF_VECTOR(CXXNewExpr, Expr*, placement_arguments)

CXXDeleteExpr::CXXDeleteExpr()
    : Expr(StmtClass::CXXDeleteExpr)
    , isGlobalDelete(0)
    , isArrayForm(0)
    , isArrayFormAsWritten(0)
    , operatorDelete(nullptr)
    , argument(nullptr)
    , destroyedType(QualifiedType())
{
}

CXXPseudoDestructorExpr::CXXPseudoDestructorExpr()
    : Expr(StmtClass::CXXPseudoDestructorExpr)
    , base(nullptr)
    , hasQualifier(0)
    , isArrow(0)
    , operatorLoc(SourceLocation())
    , colonColonLoc(SourceLocation())
    , tildeLoc(SourceLocation())
    , destroyedType(QualifiedType())
    , destroyedTypeLoc(SourceLocation())
{
}

TypeTraitExpr::TypeTraitExpr()
    : Expr(StmtClass::TypeTraitExpr)
    , value(0)
    , numArgs(0)
{
}

ArrayTypeTraitExpr::ArrayTypeTraitExpr()
    : Expr(StmtClass::ArrayTypeTraitExpr)
    , queriedType(QualifiedType())
    , value(0)
    , dimensionExpression(nullptr)
{
}

ExpressionTraitExpr::ExpressionTraitExpr()
    : Expr(StmtClass::ExpressionTraitExpr)
    , queriedExpression(nullptr)
    , value(0)
{
}

OverloadExpr::FindResult::FindResult()
{
}

OverloadExpr::OverloadExpr()
    : Expr(StmtClass::NoStmt)
    , numDecls(0)
    , nameLoc(SourceLocation())
    , templateKeywordLoc(SourceLocation())
    , lAngleLoc(SourceLocation())
    , rAngleLoc(SourceLocation())
    , hasTemplateKeyword(0)
    , hasExplicitTemplateArgs(0)
    , numTemplateArgs(0)
{
}

OverloadExpr::OverloadExpr(StmtClass klass)
    : Expr(klass)
    , numDecls(0)
    , nameLoc(SourceLocation())
    , templateKeywordLoc(SourceLocation())
    , lAngleLoc(SourceLocation())
    , rAngleLoc(SourceLocation())
    , hasTemplateKeyword(0)
    , hasExplicitTemplateArgs(0)
    , numTemplateArgs(0)
{
}

UnresolvedLookupExpr::UnresolvedLookupExpr()
    : OverloadExpr(StmtClass::UnresolvedLookupExpr)
    , requiresADL(0)
    , isOverloaded(0)
{
}

DependentScopeDeclRefExpr::DependentScopeDeclRefExpr()
    : Expr(StmtClass::DependentScopeDeclRefExpr)
    , location(SourceLocation())
    , templateKeywordLoc(SourceLocation())
    , lAngleLoc(SourceLocation())
    , rAngleLoc(SourceLocation())
    , hasTemplateKeyword(0)
    , hasExplicitTemplateArgs(0)
    , numTemplateArgs(0)
{
}

ExprWithCleanups::ExprWithCleanups()
    : FullExpr(StmtClass::ExprWithCleanups)
    , numObjects(0)
    , cleanupsHaveSideEffects(0)
{
}

CXXUnresolvedConstructExpr::CXXUnresolvedConstructExpr()
    : Expr(StmtClass::CXXUnresolvedConstructExpr)
    , lParenLoc(SourceLocation())
    , rParenLoc(SourceLocation())
    , typeAsWritten(QualifiedType())
    , isListInitialization(0)
    , arg_size(0)
{
}

DEF_VECTOR(CXXUnresolvedConstructExpr, Expr*, arguments)

CXXDependentScopeMemberExpr::CXXDependentScopeMemberExpr()
    : Expr(StmtClass::CXXDependentScopeMemberExpr)
    , isImplicitAccess(0)
    , base(nullptr)
    , baseType(QualifiedType())
    , isArrow(0)
    , operatorLoc(SourceLocation())
    , firstQualifierFoundInScope(nullptr)
    , memberLoc(SourceLocation())
    , templateKeywordLoc(SourceLocation())
    , lAngleLoc(SourceLocation())
    , rAngleLoc(SourceLocation())
    , hasTemplateKeyword(0)
    , hasExplicitTemplateArgs(0)
    , numTemplateArgs(0)
{
}

UnresolvedMemberExpr::UnresolvedMemberExpr()
    : OverloadExpr(StmtClass::UnresolvedMemberExpr)
    , isImplicitAccess(0)
    , base(nullptr)
    , baseType(QualifiedType())
    , hasUnresolvedUsing(0)
    , isArrow(0)
    , operatorLoc(SourceLocation())
    , memberLoc(SourceLocation())
{
}

CXXNoexceptExpr::CXXNoexceptExpr()
    : Expr(StmtClass::CXXNoexceptExpr)
    , operand(nullptr)
    , value(0)
{
}

PackExpansionExpr::PackExpansionExpr()
    : Expr(StmtClass::PackExpansionExpr)
    , pattern(nullptr)
    , ellipsisLoc(SourceLocation())
{
}

SizeOfPackExpr::SizeOfPackExpr()
    : Expr(StmtClass::SizeOfPackExpr)
    , operatorLoc(SourceLocation())
    , packLoc(SourceLocation())
    , rParenLoc(SourceLocation())
    , pack(nullptr)
    , packLength(0)
    , isPartiallySubstituted(0)
{
}

SubstNonTypeTemplateParmExpr::SubstNonTypeTemplateParmExpr()
    : Expr(StmtClass::SubstNonTypeTemplateParmExpr)
    , nameLoc(SourceLocation())
    , replacement(nullptr)
{
}

SubstNonTypeTemplateParmPackExpr::SubstNonTypeTemplateParmPackExpr()
    : Expr(StmtClass::SubstNonTypeTemplateParmPackExpr)
    , parameterPackLocation(SourceLocation())
    , argumentPack(TemplateArgument())
{
}

FunctionParmPackExpr::FunctionParmPackExpr()
    : Expr(StmtClass::FunctionParmPackExpr)
    , parameterPackLocation(SourceLocation())
    , numExpansions(0)
{
}

MaterializeTemporaryExpr::ExtraState::ExtraState()
{
}

MaterializeTemporaryExpr::MaterializeTemporaryExpr()
    : Expr(StmtClass::MaterializeTemporaryExpr)
    , temporary(nullptr)
    , TemporaryExpr(nullptr)
    , manglingNumber(0)
    , isBoundToLvalueReference(0)
{
}

CXXFoldExpr::CXXFoldExpr()
    : Expr(StmtClass::CXXFoldExpr)
    , lHS(nullptr)
    , rHS(nullptr)
    , isRightFold(0)
    , isLeftFold(0)
    , pattern(nullptr)
    , init(nullptr)
    , ellipsisLoc(SourceLocation())
    , _operator((BinaryOperatorKind::PtrMemD))
{
}

CoroutineSuspendExpr::CoroutineSuspendExpr()
    : Expr(StmtClass::NoStmt)
    , keywordLoc(SourceLocation())
    , commonExpr(nullptr)
    , opaqueValue(nullptr)
    , readyExpr(nullptr)
    , suspendExpr(nullptr)
    , resumeExpr(nullptr)
{
}

CoroutineSuspendExpr::CoroutineSuspendExpr(StmtClass klass)
    : Expr(klass)
    , keywordLoc(SourceLocation())
    , commonExpr(nullptr)
    , opaqueValue(nullptr)
    , readyExpr(nullptr)
    , suspendExpr(nullptr)
    , resumeExpr(nullptr)
{
}

CoawaitExpr::CoawaitExpr()
    : CoroutineSuspendExpr(StmtClass::CoawaitExpr)
    , isImplicit(0)
    , operand(nullptr)
{
}

DependentCoawaitExpr::DependentCoawaitExpr()
    : Expr(StmtClass::DependentCoawaitExpr)
    , operand(nullptr)
    , operatorCoawaitLookup(nullptr)
    , keywordLoc(SourceLocation())
{
}

CoyieldExpr::CoyieldExpr()
    : CoroutineSuspendExpr(StmtClass::CoyieldExpr)
    , operand(nullptr)
{
}

} } }
