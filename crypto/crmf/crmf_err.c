/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2019 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the OpenSSL license (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#include <openssl/err.h>
#include <openssl/crmferr.h>

#ifndef OPENSSL_NO_ERR

static const ERR_STRING_DATA CRMF_str_functs[] = {
    {ERR_PACK(ERR_LIB_CRMF, CRMF_F_CRMF_POPOSIGNINGKEY_INIT, 0),
     "CRMF_poposigningkey_init"},
    {ERR_PACK(ERR_LIB_CRMF, CRMF_F_OSSL_CRMF_CERTID_GEN, 0),
     "OSSL_CRMF_CERTID_gen"},
    {ERR_PACK(ERR_LIB_CRMF, CRMF_F_OSSL_CRMF_CERTTEMPLATE_FILL, 0),
     "OSSL_CRMF_CERTTEMPLATE_fill"},
    {ERR_PACK(ERR_LIB_CRMF, CRMF_F_OSSL_CRMF_ENCRYPTEDVALUE_GET1_ENCCERT, 0),
     "OSSL_CRMF_ENCRYPTEDVALUE_get1_encCert"},
    {ERR_PACK(ERR_LIB_CRMF, CRMF_F_OSSL_CRMF_MSGS_VERIFY_POPO, 0),
     "OSSL_CRMF_MSGS_verify_popo"},
    {ERR_PACK(ERR_LIB_CRMF, CRMF_F_OSSL_CRMF_MSG_CREATE_POPO, 0),
     "OSSL_CRMF_MSG_create_popo"},
    {ERR_PACK(ERR_LIB_CRMF, CRMF_F_OSSL_CRMF_MSG_GET0_TMPL, 0),
     "OSSL_CRMF_MSG_get0_tmpl"},
    {ERR_PACK(ERR_LIB_CRMF, CRMF_F_OSSL_CRMF_MSG_GET_CERTREQID, 0),
     "OSSL_CRMF_MSG_get_certReqId"},
    {ERR_PACK(ERR_LIB_CRMF, CRMF_F_OSSL_CRMF_MSG_PKIPUBLICATIONINFO_PUSH0_SINGLEPUBINFO, 0),
     "OSSL_CRMF_MSG_PKIPublicationInfo_push0_SinglePubInfo"},
    {ERR_PACK(ERR_LIB_CRMF, CRMF_F_OSSL_CRMF_MSG_PUSH0_EXTENSION, 0),
     "OSSL_CRMF_MSG_push0_extension"},
    {ERR_PACK(ERR_LIB_CRMF, CRMF_F_OSSL_CRMF_MSG_PUSH0_REGCTRL, 0),
     "OSSL_CRMF_MSG_push0_regCtrl"},
    {ERR_PACK(ERR_LIB_CRMF, CRMF_F_OSSL_CRMF_MSG_PUSH0_REGINFO, 0),
     "OSSL_CRMF_MSG_push0_regInfo"},
    {ERR_PACK(ERR_LIB_CRMF, CRMF_F_OSSL_CRMF_MSG_SET0_EXTENSIONS, 0),
     "OSSL_CRMF_MSG_set0_extensions"},
    {ERR_PACK(ERR_LIB_CRMF, CRMF_F_OSSL_CRMF_MSG_SET0_SINGLEPUBINFO, 0),
     "OSSL_CRMF_MSG_set0_SinglePubInfo"},
    {ERR_PACK(ERR_LIB_CRMF, CRMF_F_OSSL_CRMF_MSG_SET_CERTREQID, 0),
     "OSSL_CRMF_MSG_set_certReqId"},
    {ERR_PACK(ERR_LIB_CRMF, CRMF_F_OSSL_CRMF_MSG_SET_PKIPUBLICATIONINFO_ACTION, 0),
     "OSSL_CRMF_MSG_set_PKIPublicationInfo_action"},
    {ERR_PACK(ERR_LIB_CRMF, CRMF_F_OSSL_CRMF_MSG_SET_VALIDITY, 0),
     "OSSL_CRMF_MSG_set_validity"},
    {ERR_PACK(ERR_LIB_CRMF, CRMF_F_OSSL_CRMF_PBMP_NEW, 0),
     "OSSL_CRMF_pbmp_new"},
    {ERR_PACK(ERR_LIB_CRMF, CRMF_F_OSSL_CRMF_PBM_NEW, 0), "OSSL_CRMF_pbm_new"},
    {0, NULL}
};

static const ERR_STRING_DATA CRMF_str_reasons[] = {
    {ERR_PACK(ERR_LIB_CRMF, 0, CRMF_R_BAD_PBM_ITERATIONCOUNT),
    "bad pbm iterationcount"},
    {ERR_PACK(ERR_LIB_CRMF, 0, CRMF_R_CRMFERROR), "crmferror"},
    {ERR_PACK(ERR_LIB_CRMF, 0, CRMF_R_ERROR), "error"},
    {ERR_PACK(ERR_LIB_CRMF, 0, CRMF_R_ERROR_DECODING_CERTIFICATE),
    "error decoding certificate"},
    {ERR_PACK(ERR_LIB_CRMF, 0, CRMF_R_ERROR_DECRYPTING_CERTIFICATE),
    "error decrypting certificate"},
    {ERR_PACK(ERR_LIB_CRMF, 0, CRMF_R_ERROR_DECRYPTING_SYMMETRIC_KEY),
    "error decrypting symmetric key"},
    {ERR_PACK(ERR_LIB_CRMF, 0, CRMF_R_FAILURE_OBTAINING_RANDOM),
    "failure obtaining random"},
    {ERR_PACK(ERR_LIB_CRMF, 0, CRMF_R_ITERATIONCOUNT_BELOW_100),
    "iterationcount below 100"},
    {ERR_PACK(ERR_LIB_CRMF, 0, CRMF_R_MALFORMED_IV), "malformed iv"},
    {ERR_PACK(ERR_LIB_CRMF, 0, CRMF_R_NULL_ARGUMENT), "null argument"},
    {ERR_PACK(ERR_LIB_CRMF, 0, CRMF_R_SETTING_MAC_ALGOR_FAILURE),
    "setting mac algor failure"},
    {ERR_PACK(ERR_LIB_CRMF, 0, CRMF_R_SETTING_OWF_ALGOR_FAILURE),
    "setting owf algor failure"},
    {ERR_PACK(ERR_LIB_CRMF, 0, CRMF_R_UNSUPPORTED_ALGORITHM),
    "unsupported algorithm"},
    {ERR_PACK(ERR_LIB_CRMF, 0, CRMF_R_UNSUPPORTED_ALG_FOR_POPSIGNINGKEY),
    "unsupported alg for popsigningkey"},
    {ERR_PACK(ERR_LIB_CRMF, 0, CRMF_R_UNSUPPORTED_CIPHER),
    "unsupported cipher"},
    {ERR_PACK(ERR_LIB_CRMF, 0, CRMF_R_UNSUPPORTED_METHOD_FOR_CREATING_POPO),
    "unsupported method for creating popo"},
    {ERR_PACK(ERR_LIB_CRMF, 0, CRMF_R_UNSUPPORTED_POPO_METHOD),
    "unsupported popo method"},
    {ERR_PACK(ERR_LIB_CRMF, 0, CRMF_R_UNSUPPORTED_POPO_NOT_ACCEPTED),
    "unsupported popo not accepted"},
    {0, NULL}
};

#endif

int ERR_load_CRMF_strings(void)
{
#ifndef OPENSSL_NO_ERR
    if (ERR_func_error_string(CRMF_str_functs[0].error) == NULL) {
        ERR_load_strings_const(CRMF_str_functs);
        ERR_load_strings_const(CRMF_str_reasons);
    }
#endif
    return 1;
}
