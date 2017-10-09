#pragma once

#define ANYSIZE_ARRAY 1    
#define CONST const

#define _SizeIsCustomAttribId_ "be29f9d9-7844-49e1-aacb-8e19386529df"
#define _SizeIsCustomAttrib_(sizeExpr) custom(_SizeIsCustomAttribId_, #sizeExpr)
#define _LengthIsCustomAttrib_ "82a85647-bd20-4075-823b-d9758c4391eb"

// Attributes a field with a size_is specifying the number of elements.
#define _Field_size_(sizeExpr)  [_SizeIsCustomAttrib_(sizeExpr)]
#define _Field_size_opt_(sizeExpr) _Field_size_(sizeExpr)
// Attributes a field with a byte size expression 
#define _Field_size_bytes_(sizeExpr)  [_SizeIsCustomAttrib_(sizeExpr)]

#define _StringCustomAttribId_ "664f8323-a768-4acc-a2c8-8fa05d138897"
#define __String__ custom(_StringCustomAttribId_, "")
#define _String_ [__String__]
#define _Counted_Array_(sizeExpr) [_SizeIsCustomAttrib_(sizeExpr)]
#define _Counted_Array_Ptr_(sizeExpr) [_SizeIsCustomAttrib_(sizeExpr)]
#define _Counted_String_Ptr_(sizeExpr) [__String__, _SizeIsCustomAttrib_(sizeExpr)]

#define _ReservedCustomAttribId_ "9d8468d2-88ea-4452-b32c-992c9937e29c"
#define _Reserved_ [custom(_ReservedCustomAttribId_, 0), hidden]

#define _In_reads_opt_(sizeExpr) [in, size_is(#sizeExpr)/*, optional*/]
#define _In_reads_bytes_(sizeExpr) [in, size_is(#sizeExpr)]
#define _In_reads_bytes_opt_(sizeExpr) [in, /*optional, */size_is(#sizeExpr)]
#define _Out_writes_bytes_to_opt_(sizeExpr, lenExpr) [out, /*optional,*/ size_is(#sizeExpr), length_is(#lenExpr)]
#define _Out_writes_bytes_to_(sizeExpr, lenExpr) [out, size_is(#sizeExpr), length_is(#lenExpr)]
#define _Out_writes_(sizeExpr) [out, size_is(#sizeExpr)]
#define _Out_writes_to_(sizeExpr, lenExpr) [out, size_is(#sizeExpr)]

#define _In_z_ [in, __String__]
#define _In_ [in]
#define _Out_ [out]
#define _Inout_ [in, out]
#define _In_opt_ [in/*, optional*/]
#define _Out_opt_ [out/*, optional*/]
#define _Inout_opt_ [in, out /*, optional*/]
#define _Outptr_ [out]

#define _Success_(e)

#define _ReadOnly_ [readonly]
#define _WriteOnly_ [restricted]
#define _Filler_ [hidden]

