/*
 * Copyright 2021 Advanced Micro Devices, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE COPYRIGHT HOLDER(S) OR AUTHOR(S) BE LIABLE FOR ANY CLAIM, DAMAGES OR
 * OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 *
 */
#ifndef _vcn_4_0_0_SH_MASK_HEADER
#define _vcn_4_0_0_SH_MASK_HEADER


// addressBlock: uvd0_uvddec
//UVD_TOP_CTRL
#define UVD_TOP_CTRL__STANDARD__SHIFT                                                                         0x0
#define UVD_TOP_CTRL__STD_VERSION__SHIFT                                                                      0x4
#define UVD_TOP_CTRL__STANDARD_MASK                                                                           0x0000000FL
#define UVD_TOP_CTRL__STD_VERSION_MASK                                                                        0x00000010L
//UVD_CGC_GATE
#define UVD_CGC_GATE__SYS__SHIFT                                                                              0x0
#define UVD_CGC_GATE__UDEC__SHIFT                                                                             0x1
#define UVD_CGC_GATE__MPEG2__SHIFT                                                                            0x2
#define UVD_CGC_GATE__REGS__SHIFT                                                                             0x3
#define UVD_CGC_GATE__RBC__SHIFT                                                                              0x4
#define UVD_CGC_GATE__LMI_MC__SHIFT                                                                           0x5
#define UVD_CGC_GATE__LMI_UMC__SHIFT                                                                          0x6
#define UVD_CGC_GATE__IDCT__SHIFT                                                                             0x7
#define UVD_CGC_GATE__MPRD__SHIFT                                                                             0x8
#define UVD_CGC_GATE__MPC__SHIFT                                                                              0x9
#define UVD_CGC_GATE__LBSI__SHIFT                                                                             0xa
#define UVD_CGC_GATE__LRBBM__SHIFT                                                                            0xb
#define UVD_CGC_GATE__UDEC_RE__SHIFT                                                                          0xc
#define UVD_CGC_GATE__UDEC_CM__SHIFT                                                                          0xd
#define UVD_CGC_GATE__UDEC_IT__SHIFT                                                                          0xe
#define UVD_CGC_GATE__UDEC_DB__SHIFT                                                                          0xf
#define UVD_CGC_GATE__UDEC_MP__SHIFT                                                                          0x10
#define UVD_CGC_GATE__WCB__SHIFT                                                                              0x11
#define UVD_CGC_GATE__VCPU__SHIFT                                                                             0x12
#define UVD_CGC_GATE__MMSCH__SHIFT                                                                            0x14
#define UVD_CGC_GATE__LCM0__SHIFT                                                                             0x15
#define UVD_CGC_GATE__LCM1__SHIFT                                                                             0x16
#define UVD_CGC_GATE__MIF__SHIFT                                                                              0x17
#define UVD_CGC_GATE__VREG__SHIFT                                                                             0x18
#define UVD_CGC_GATE__PE__SHIFT                                                                               0x19
#define UVD_CGC_GATE__PPU__SHIFT                                                                              0x1a
#define UVD_CGC_GATE__SYS_MASK                                                                                0x00000001L
#define UVD_CGC_GATE__UDEC_MASK                                                                               0x00000002L
#define UVD_CGC_GATE__MPEG2_MASK                                                                              0x00000004L
#define UVD_CGC_GATE__REGS_MASK                                                                               0x00000008L
#define UVD_CGC_GATE__RBC_MASK                                                                                0x00000010L
#define UVD_CGC_GATE__LMI_MC_MASK                                                                             0x00000020L
#define UVD_CGC_GATE__LMI_UMC_MASK                                                                            0x00000040L
#define UVD_CGC_GATE__IDCT_MASK                                                                               0x00000080L
#define UVD_CGC_GATE__MPRD_MASK                                                                               0x00000100L
#define UVD_CGC_GATE__MPC_MASK                                                                                0x00000200L
#define UVD_CGC_GATE__LBSI_MASK                                                                               0x00000400L
#define UVD_CGC_GATE__LRBBM_MASK                                                                              0x00000800L
#define UVD_CGC_GATE__UDEC_RE_MASK                                                                            0x00001000L
#define UVD_CGC_GATE__UDEC_CM_MASK                                                                            0x00002000L
#define UVD_CGC_GATE__UDEC_IT_MASK                                                                            0x00004000L
#define UVD_CGC_GATE__UDEC_DB_MASK                                                                            0x00008000L
#define UVD_CGC_GATE__UDEC_MP_MASK                                                                            0x00010000L
#define UVD_CGC_GATE__WCB_MASK                                                                                0x00020000L
#define UVD_CGC_GATE__VCPU_MASK                                                                               0x00040000L
#define UVD_CGC_GATE__MMSCH_MASK                                                                              0x00100000L
#define UVD_CGC_GATE__LCM0_MASK                                                                               0x00200000L
#define UVD_CGC_GATE__LCM1_MASK                                                                               0x00400000L
#define UVD_CGC_GATE__MIF_MASK                                                                                0x00800000L
#define UVD_CGC_GATE__VREG_MASK                                                                               0x01000000L
#define UVD_CGC_GATE__PE_MASK                                                                                 0x02000000L
#define UVD_CGC_GATE__PPU_MASK                                                                                0x04000000L
//UVD_CGC_CTRL
#define UVD_CGC_CTRL__DYN_CLOCK_MODE__SHIFT                                                                   0x0
#define UVD_CGC_CTRL__CLK_GATE_DLY_TIMER__SHIFT                                                               0x2
#define UVD_CGC_CTRL__CLK_OFF_DELAY__SHIFT                                                                    0x6
#define UVD_CGC_CTRL__UDEC_RE_MODE__SHIFT                                                                     0xb
#define UVD_CGC_CTRL__UDEC_CM_MODE__SHIFT                                                                     0xc
#define UVD_CGC_CTRL__UDEC_IT_MODE__SHIFT                                                                     0xd
#define UVD_CGC_CTRL__UDEC_DB_MODE__SHIFT                                                                     0xe
#define UVD_CGC_CTRL__UDEC_MP_MODE__SHIFT                                                                     0xf
#define UVD_CGC_CTRL__SYS_MODE__SHIFT                                                                         0x10
#define UVD_CGC_CTRL__UDEC_MODE__SHIFT                                                                        0x11
#define UVD_CGC_CTRL__MPEG2_MODE__SHIFT                                                                       0x12
#define UVD_CGC_CTRL__REGS_MODE__SHIFT                                                                        0x13
#define UVD_CGC_CTRL__RBC_MODE__SHIFT                                                                         0x14
#define UVD_CGC_CTRL__LMI_MC_MODE__SHIFT                                                                      0x15
#define UVD_CGC_CTRL__LMI_UMC_MODE__SHIFT                                                                     0x16
#define UVD_CGC_CTRL__IDCT_MODE__SHIFT                                                                        0x17
#define UVD_CGC_CTRL__MPRD_MODE__SHIFT                                                                        0x18
#define UVD_CGC_CTRL__MPC_MODE__SHIFT                                                                         0x19
#define UVD_CGC_CTRL__LBSI_MODE__SHIFT                                                                        0x1a
#define UVD_CGC_CTRL__LRBBM_MODE__SHIFT                                                                       0x1b
#define UVD_CGC_CTRL__WCB_MODE__SHIFT                                                                         0x1c
#define UVD_CGC_CTRL__VCPU_MODE__SHIFT                                                                        0x1d
#define UVD_CGC_CTRL__MMSCH_MODE__SHIFT                                                                       0x1f
#define UVD_CGC_CTRL__DYN_CLOCK_MODE_MASK                                                                     0x00000001L
#define UVD_CGC_CTRL__CLK_GATE_DLY_TIMER_MASK                                                                 0x0000003CL
#define UVD_CGC_CTRL__CLK_OFF_DELAY_MASK                                                                      0x000007C0L
#define UVD_CGC_CTRL__UDEC_RE_MODE_MASK                                                                       0x00000800L
#define UVD_CGC_CTRL__UDEC_CM_MODE_MASK                                                                       0x00001000L
#define UVD_CGC_CTRL__UDEC_IT_MODE_MASK                                                                       0x00002000L
#define UVD_CGC_CTRL__UDEC_DB_MODE_MASK                                                                       0x00004000L
#define UVD_CGC_CTRL__UDEC_MP_MODE_MASK                                                                       0x00008000L
#define UVD_CGC_CTRL__SYS_MODE_MASK                                                                           0x00010000L
#define UVD_CGC_CTRL__UDEC_MODE_MASK                                                                          0x00020000L
#define UVD_CGC_CTRL__MPEG2_MODE_MASK                                                                         0x00040000L
#define UVD_CGC_CTRL__REGS_MODE_MASK                                                                          0x00080000L
#define UVD_CGC_CTRL__RBC_MODE_MASK                                                                           0x00100000L
#define UVD_CGC_CTRL__LMI_MC_MODE_MASK                                                                        0x00200000L
#define UVD_CGC_CTRL__LMI_UMC_MODE_MASK                                                                       0x00400000L
#define UVD_CGC_CTRL__IDCT_MODE_MASK                                                                          0x00800000L
#define UVD_CGC_CTRL__MPRD_MODE_MASK                                                                          0x01000000L
#define UVD_CGC_CTRL__MPC_MODE_MASK                                                                           0x02000000L
#define UVD_CGC_CTRL__LBSI_MODE_MASK                                                                          0x04000000L
#define UVD_CGC_CTRL__LRBBM_MODE_MASK                                                                         0x08000000L
#define UVD_CGC_CTRL__WCB_MODE_MASK                                                                           0x10000000L
#define UVD_CGC_CTRL__VCPU_MODE_MASK                                                                          0x20000000L
#define UVD_CGC_CTRL__MMSCH_MODE_MASK                                                                         0x80000000L
//AVM_SUVD_CGC_GATE
#define AVM_SUVD_CGC_GATE__SRE__SHIFT                                                                         0x0
#define AVM_SUVD_CGC_GATE__SIT__SHIFT                                                                         0x1
#define AVM_SUVD_CGC_GATE__SMP__SHIFT                                                                         0x2
#define AVM_SUVD_CGC_GATE__SCM__SHIFT                                                                         0x3
#define AVM_SUVD_CGC_GATE__SDB__SHIFT                                                                         0x4
#define AVM_SUVD_CGC_GATE__SRE_H264__SHIFT                                                                    0x5
#define AVM_SUVD_CGC_GATE__SRE_HEVC__SHIFT                                                                    0x6
#define AVM_SUVD_CGC_GATE__SIT_H264__SHIFT                                                                    0x7
#define AVM_SUVD_CGC_GATE__SIT_HEVC__SHIFT                                                                    0x8
#define AVM_SUVD_CGC_GATE__SCM_H264__SHIFT                                                                    0x9
#define AVM_SUVD_CGC_GATE__SCM_HEVC__SHIFT                                                                    0xa
#define AVM_SUVD_CGC_GATE__SDB_H264__SHIFT                                                                    0xb
#define AVM_SUVD_CGC_GATE__SDB_HEVC__SHIFT                                                                    0xc
#define AVM_SUVD_CGC_GATE__SCLR__SHIFT                                                                        0xd
#define AVM_SUVD_CGC_GATE__UVD_SC__SHIFT                                                                      0xe
#define AVM_SUVD_CGC_GATE__ENT__SHIFT                                                                         0xf
#define AVM_SUVD_CGC_GATE__IME__SHIFT                                                                         0x10
#define AVM_SUVD_CGC_GATE__SIT_HEVC_DEC__SHIFT                                                                0x11
#define AVM_SUVD_CGC_GATE__SIT_HEVC_ENC__SHIFT                                                                0x12
#define AVM_SUVD_CGC_GATE__SITE__SHIFT                                                                        0x13
#define AVM_SUVD_CGC_GATE__SRE_VP9__SHIFT                                                                     0x14
#define AVM_SUVD_CGC_GATE__SCM_VP9__SHIFT                                                                     0x15
#define AVM_SUVD_CGC_GATE__SIT_VP9_DEC__SHIFT                                                                 0x16
#define AVM_SUVD_CGC_GATE__SDB_VP9__SHIFT                                                                     0x17
#define AVM_SUVD_CGC_GATE__IME_HEVC__SHIFT                                                                    0x18
#define AVM_SUVD_CGC_GATE__EFC__SHIFT                                                                         0x19
#define AVM_SUVD_CGC_GATE__SAOE__SHIFT                                                                        0x1a
#define AVM_SUVD_CGC_GATE__SRE_AV1__SHIFT                                                                     0x1b
#define AVM_SUVD_CGC_GATE__FBC_PCLK__SHIFT                                                                    0x1c
#define AVM_SUVD_CGC_GATE__FBC_CCLK__SHIFT                                                                    0x1d
#define AVM_SUVD_CGC_GATE__SCM_AV1__SHIFT                                                                     0x1e
#define AVM_SUVD_CGC_GATE__SMPA__SHIFT                                                                        0x1f
#define AVM_SUVD_CGC_GATE__SRE_MASK                                                                           0x00000001L
#define AVM_SUVD_CGC_GATE__SIT_MASK                                                                           0x00000002L
#define AVM_SUVD_CGC_GATE__SMP_MASK                                                                           0x00000004L
#define AVM_SUVD_CGC_GATE__SCM_MASK                                                                           0x00000008L
#define AVM_SUVD_CGC_GATE__SDB_MASK                                                                           0x00000010L
#define AVM_SUVD_CGC_GATE__SRE_H264_MASK                                                                      0x00000020L
#define AVM_SUVD_CGC_GATE__SRE_HEVC_MASK                                                                      0x00000040L
#define AVM_SUVD_CGC_GATE__SIT_H264_MASK                                                                      0x00000080L
#define AVM_SUVD_CGC_GATE__SIT_HEVC_MASK                                                                      0x00000100L
#define AVM_SUVD_CGC_GATE__SCM_H264_MASK                                                                      0x00000200L
#define AVM_SUVD_CGC_GATE__SCM_HEVC_MASK                                                                      0x00000400L
#define AVM_SUVD_CGC_GATE__SDB_H264_MASK                                                                      0x00000800L
#define AVM_SUVD_CGC_GATE__SDB_HEVC_MASK                                                                      0x00001000L
#define AVM_SUVD_CGC_GATE__SCLR_MASK                                                                          0x00002000L
#define AVM_SUVD_CGC_GATE__UVD_SC_MASK                                                                        0x00004000L
#define AVM_SUVD_CGC_GATE__ENT_MASK                                                                           0x00008000L
#define AVM_SUVD_CGC_GATE__IME_MASK                                                                           0x00010000L
#define AVM_SUVD_CGC_GATE__SIT_HEVC_DEC_MASK                                                                  0x00020000L
#define AVM_SUVD_CGC_GATE__SIT_HEVC_ENC_MASK                                                                  0x00040000L
#define AVM_SUVD_CGC_GATE__SITE_MASK                                                                          0x00080000L
#define AVM_SUVD_CGC_GATE__SRE_VP9_MASK                                                                       0x00100000L
#define AVM_SUVD_CGC_GATE__SCM_VP9_MASK                                                                       0x00200000L
#define AVM_SUVD_CGC_GATE__SIT_VP9_DEC_MASK                                                                   0x00400000L
#define AVM_SUVD_CGC_GATE__SDB_VP9_MASK                                                                       0x00800000L
#define AVM_SUVD_CGC_GATE__IME_HEVC_MASK                                                                      0x01000000L
#define AVM_SUVD_CGC_GATE__EFC_MASK                                                                           0x02000000L
#define AVM_SUVD_CGC_GATE__SAOE_MASK                                                                          0x04000000L
#define AVM_SUVD_CGC_GATE__SRE_AV1_MASK                                                                       0x08000000L
#define AVM_SUVD_CGC_GATE__FBC_PCLK_MASK                                                                      0x10000000L
#define AVM_SUVD_CGC_GATE__FBC_CCLK_MASK                                                                      0x20000000L
#define AVM_SUVD_CGC_GATE__SCM_AV1_MASK                                                                       0x40000000L
#define AVM_SUVD_CGC_GATE__SMPA_MASK                                                                          0x80000000L
//CDEFE_SUVD_CGC_GATE
#define CDEFE_SUVD_CGC_GATE__SRE__SHIFT                                                                       0x0
#define CDEFE_SUVD_CGC_GATE__SIT__SHIFT                                                                       0x1
#define CDEFE_SUVD_CGC_GATE__SMP__SHIFT                                                                       0x2
#define CDEFE_SUVD_CGC_GATE__SCM__SHIFT                                                                       0x3
#define CDEFE_SUVD_CGC_GATE__SDB__SHIFT                                                                       0x4
#define CDEFE_SUVD_CGC_GATE__SRE_H264__SHIFT                                                                  0x5
#define CDEFE_SUVD_CGC_GATE__SRE_HEVC__SHIFT                                                                  0x6
#define CDEFE_SUVD_CGC_GATE__SIT_H264__SHIFT                                                                  0x7
#define CDEFE_SUVD_CGC_GATE__SIT_HEVC__SHIFT                                                                  0x8
#define CDEFE_SUVD_CGC_GATE__SCM_H264__SHIFT                                                                  0x9
#define CDEFE_SUVD_CGC_GATE__SCM_HEVC__SHIFT                                                                  0xa
#define CDEFE_SUVD_CGC_GATE__SDB_H264__SHIFT                                                                  0xb
#define CDEFE_SUVD_CGC_GATE__SDB_HEVC__SHIFT                                                                  0xc
#define CDEFE_SUVD_CGC_GATE__SCLR__SHIFT                                                                      0xd
#define CDEFE_SUVD_CGC_GATE__UVD_SC__SHIFT                                                                    0xe
#define CDEFE_SUVD_CGC_GATE__ENT__SHIFT                                                                       0xf
#define CDEFE_SUVD_CGC_GATE__IME__SHIFT                                                                       0x10
#define CDEFE_SUVD_CGC_GATE__SIT_HEVC_DEC__SHIFT                                                              0x11
#define CDEFE_SUVD_CGC_GATE__SIT_HEVC_ENC__SHIFT                                                              0x12
#define CDEFE_SUVD_CGC_GATE__SITE__SHIFT                                                                      0x13
#define CDEFE_SUVD_CGC_GATE__SRE_VP9__SHIFT                                                                   0x14
#define CDEFE_SUVD_CGC_GATE__SCM_VP9__SHIFT                                                                   0x15
#define CDEFE_SUVD_CGC_GATE__SIT_VP9_DEC__SHIFT                                                               0x16
#define CDEFE_SUVD_CGC_GATE__SDB_VP9__SHIFT                                                                   0x17
#define CDEFE_SUVD_CGC_GATE__IME_HEVC__SHIFT                                                                  0x18
#define CDEFE_SUVD_CGC_GATE__EFC__SHIFT                                                                       0x19
#define CDEFE_SUVD_CGC_GATE__SAOE__SHIFT                                                                      0x1a
#define CDEFE_SUVD_CGC_GATE__SRE_AV1__SHIFT                                                                   0x1b
#define CDEFE_SUVD_CGC_GATE__FBC_PCLK__SHIFT                                                                  0x1c
#define CDEFE_SUVD_CGC_GATE__FBC_CCLK__SHIFT                                                                  0x1d
#define CDEFE_SUVD_CGC_GATE__SCM_AV1__SHIFT                                                                   0x1e
#define CDEFE_SUVD_CGC_GATE__SMPA__SHIFT                                                                      0x1f
#define CDEFE_SUVD_CGC_GATE__SRE_MASK                                                                         0x00000001L
#define CDEFE_SUVD_CGC_GATE__SIT_MASK                                                                         0x00000002L
#define CDEFE_SUVD_CGC_GATE__SMP_MASK                                                                         0x00000004L
#define CDEFE_SUVD_CGC_GATE__SCM_MASK                                                                         0x00000008L
#define CDEFE_SUVD_CGC_GATE__SDB_MASK                                                                         0x00000010L
#define CDEFE_SUVD_CGC_GATE__SRE_H264_MASK                                                                    0x00000020L
#define CDEFE_SUVD_CGC_GATE__SRE_HEVC_MASK                                                                    0x00000040L
#define CDEFE_SUVD_CGC_GATE__SIT_H264_MASK                                                                    0x00000080L
#define CDEFE_SUVD_CGC_GATE__SIT_HEVC_MASK                                                                    0x00000100L
#define CDEFE_SUVD_CGC_GATE__SCM_H264_MASK                                                                    0x00000200L
#define CDEFE_SUVD_CGC_GATE__SCM_HEVC_MASK                                                                    0x00000400L
#define CDEFE_SUVD_CGC_GATE__SDB_H264_MASK                                                                    0x00000800L
#define CDEFE_SUVD_CGC_GATE__SDB_HEVC_MASK                                                                    0x00001000L
#define CDEFE_SUVD_CGC_GATE__SCLR_MASK                                                                        0x00002000L
#define CDEFE_SUVD_CGC_GATE__UVD_SC_MASK                                                                      0x00004000L
#define CDEFE_SUVD_CGC_GATE__ENT_MASK                                                                         0x00008000L
#define CDEFE_SUVD_CGC_GATE__IME_MASK                                                                         0x00010000L
#define CDEFE_SUVD_CGC_GATE__SIT_HEVC_DEC_MASK                                                                0x00020000L
#define CDEFE_SUVD_CGC_GATE__SIT_HEVC_ENC_MASK                                                                0x00040000L
#define CDEFE_SUVD_CGC_GATE__SITE_MASK                                                                        0x00080000L
#define CDEFE_SUVD_CGC_GATE__SRE_VP9_MASK                                                                     0x00100000L
#define CDEFE_SUVD_CGC_GATE__SCM_VP9_MASK                                                                     0x00200000L
#define CDEFE_SUVD_CGC_GATE__SIT_VP9_DEC_MASK                                                                 0x00400000L
#define CDEFE_SUVD_CGC_GATE__SDB_VP9_MASK                                                                     0x00800000L
#define CDEFE_SUVD_CGC_GATE__IME_HEVC_MASK                                                                    0x01000000L
#define CDEFE_SUVD_CGC_GATE__EFC_MASK                                                                         0x02000000L
#define CDEFE_SUVD_CGC_GATE__SAOE_MASK                                                                        0x04000000L
#define CDEFE_SUVD_CGC_GATE__SRE_AV1_MASK                                                                     0x08000000L
#define CDEFE_SUVD_CGC_GATE__FBC_PCLK_MASK                                                                    0x10000000L
#define CDEFE_SUVD_CGC_GATE__FBC_CCLK_MASK                                                                    0x20000000L
#define CDEFE_SUVD_CGC_GATE__SCM_AV1_MASK                                                                     0x40000000L
#define CDEFE_SUVD_CGC_GATE__SMPA_MASK                                                                        0x80000000L
//EFC_SUVD_CGC_GATE
#define EFC_SUVD_CGC_GATE__SRE__SHIFT                                                                         0x0
#define EFC_SUVD_CGC_GATE__SIT__SHIFT                                                                         0x1
#define EFC_SUVD_CGC_GATE__SMP__SHIFT                                                                         0x2
#define EFC_SUVD_CGC_GATE__SCM__SHIFT                                                                         0x3
#define EFC_SUVD_CGC_GATE__SDB__SHIFT                                                                         0x4
#define EFC_SUVD_CGC_GATE__SRE_H264__SHIFT                                                                    0x5
#define EFC_SUVD_CGC_GATE__SRE_HEVC__SHIFT                                                                    0x6
#define EFC_SUVD_CGC_GATE__SIT_H264__SHIFT                                                                    0x7
#define EFC_SUVD_CGC_GATE__SIT_HEVC__SHIFT                                                                    0x8
#define EFC_SUVD_CGC_GATE__SCM_H264__SHIFT                                                                    0x9
#define EFC_SUVD_CGC_GATE__SCM_HEVC__SHIFT                                                                    0xa
#define EFC_SUVD_CGC_GATE__SDB_H264__SHIFT                                                                    0xb
#define EFC_SUVD_CGC_GATE__SDB_HEVC__SHIFT                                                                    0xc
#define EFC_SUVD_CGC_GATE__SCLR__SHIFT                                                                        0xd
#define EFC_SUVD_CGC_GATE__UVD_SC__SHIFT                                                                      0xe
#define EFC_SUVD_CGC_GATE__ENT__SHIFT                                                                         0xf
#define EFC_SUVD_CGC_GATE__IME__SHIFT                                                                         0x10
#define EFC_SUVD_CGC_GATE__SIT_HEVC_DEC__SHIFT                                                                0x11
#define EFC_SUVD_CGC_GATE__SIT_HEVC_ENC__SHIFT                                                                0x12
#define EFC_SUVD_CGC_GATE__SITE__SHIFT                                                                        0x13
#define EFC_SUVD_CGC_GATE__SRE_VP9__SHIFT                                                                     0x14
#define EFC_SUVD_CGC_GATE__SCM_VP9__SHIFT                                                                     0x15
#define EFC_SUVD_CGC_GATE__SIT_VP9_DEC__SHIFT                                                                 0x16
#define EFC_SUVD_CGC_GATE__SDB_VP9__SHIFT                                                                     0x17
#define EFC_SUVD_CGC_GATE__IME_HEVC__SHIFT                                                                    0x18
#define EFC_SUVD_CGC_GATE__EFC__SHIFT                                                                         0x19
#define EFC_SUVD_CGC_GATE__SAOE__SHIFT                                                                        0x1a
#define EFC_SUVD_CGC_GATE__SRE_AV1__SHIFT                                                                     0x1b
#define EFC_SUVD_CGC_GATE__FBC_PCLK__SHIFT                                                                    0x1c
#define EFC_SUVD_CGC_GATE__FBC_CCLK__SHIFT                                                                    0x1d
#define EFC_SUVD_CGC_GATE__SCM_AV1__SHIFT                                                                     0x1e
#define EFC_SUVD_CGC_GATE__SMPA__SHIFT                                                                        0x1f
#define EFC_SUVD_CGC_GATE__SRE_MASK                                                                           0x00000001L
#define EFC_SUVD_CGC_GATE__SIT_MASK                                                                           0x00000002L
#define EFC_SUVD_CGC_GATE__SMP_MASK                                                                           0x00000004L
#define EFC_SUVD_CGC_GATE__SCM_MASK                                                                           0x00000008L
#define EFC_SUVD_CGC_GATE__SDB_MASK                                                                           0x00000010L
#define EFC_SUVD_CGC_GATE__SRE_H264_MASK                                                                      0x00000020L
#define EFC_SUVD_CGC_GATE__SRE_HEVC_MASK                                                                      0x00000040L
#define EFC_SUVD_CGC_GATE__SIT_H264_MASK                                                                      0x00000080L
#define EFC_SUVD_CGC_GATE__SIT_HEVC_MASK                                                                      0x00000100L
#define EFC_SUVD_CGC_GATE__SCM_H264_MASK                                                                      0x00000200L
#define EFC_SUVD_CGC_GATE__SCM_HEVC_MASK                                                                      0x00000400L
#define EFC_SUVD_CGC_GATE__SDB_H264_MASK                                                                      0x00000800L
#define EFC_SUVD_CGC_GATE__SDB_HEVC_MASK                                                                      0x00001000L
#define EFC_SUVD_CGC_GATE__SCLR_MASK                                                                          0x00002000L
#define EFC_SUVD_CGC_GATE__UVD_SC_MASK                                                                        0x00004000L
#define EFC_SUVD_CGC_GATE__ENT_MASK                                                                           0x00008000L
#define EFC_SUVD_CGC_GATE__IME_MASK                                                                           0x00010000L
#define EFC_SUVD_CGC_GATE__SIT_HEVC_DEC_MASK                                                                  0x00020000L
#define EFC_SUVD_CGC_GATE__SIT_HEVC_ENC_MASK                                                                  0x00040000L
#define EFC_SUVD_CGC_GATE__SITE_MASK                                                                          0x00080000L
#define EFC_SUVD_CGC_GATE__SRE_VP9_MASK                                                                       0x00100000L
#define EFC_SUVD_CGC_GATE__SCM_VP9_MASK                                                                       0x00200000L
#define EFC_SUVD_CGC_GATE__SIT_VP9_DEC_MASK                                                                   0x00400000L
#define EFC_SUVD_CGC_GATE__SDB_VP9_MASK                                                                       0x00800000L
#define EFC_SUVD_CGC_GATE__IME_HEVC_MASK                                                                      0x01000000L
#define EFC_SUVD_CGC_GATE__EFC_MASK                                                                           0x02000000L
#define EFC_SUVD_CGC_GATE__SAOE_MASK                                                                          0x04000000L
#define EFC_SUVD_CGC_GATE__SRE_AV1_MASK                                                                       0x08000000L
#define EFC_SUVD_CGC_GATE__FBC_PCLK_MASK                                                                      0x10000000L
#define EFC_SUVD_CGC_GATE__FBC_CCLK_MASK                                                                      0x20000000L
#define EFC_SUVD_CGC_GATE__SCM_AV1_MASK                                                                       0x40000000L
#define EFC_SUVD_CGC_GATE__SMPA_MASK                                                                          0x80000000L
//ENT_SUVD_CGC_GATE
#define ENT_SUVD_CGC_GATE__SRE__SHIFT                                                                         0x0
#define ENT_SUVD_CGC_GATE__SIT__SHIFT                                                                         0x1
#define ENT_SUVD_CGC_GATE__SMP__SHIFT                                                                         0x2
#define ENT_SUVD_CGC_GATE__SCM__SHIFT                                                                         0x3
#define ENT_SUVD_CGC_GATE__SDB__SHIFT                                                                         0x4
#define ENT_SUVD_CGC_GATE__SRE_H264__SHIFT                                                                    0x5
#define ENT_SUVD_CGC_GATE__SRE_HEVC__SHIFT                                                                    0x6
#define ENT_SUVD_CGC_GATE__SIT_H264__SHIFT                                                                    0x7
#define ENT_SUVD_CGC_GATE__SIT_HEVC__SHIFT                                                                    0x8
#define ENT_SUVD_CGC_GATE__SCM_H264__SHIFT                                                                    0x9
#define ENT_SUVD_CGC_GATE__SCM_HEVC__SHIFT                                                                    0xa
#define ENT_SUVD_CGC_GATE__SDB_H264__SHIFT                                                                    0xb
#define ENT_SUVD_CGC_GATE__SDB_HEVC__SHIFT                                                                    0xc
#define ENT_SUVD_CGC_GATE__SCLR__SHIFT                                                                        0xd
#define ENT_SUVD_CGC_GATE__UVD_SC__SHIFT                                                                      0xe
#define ENT_SUVD_CGC_GATE__ENT__SHIFT                                                                         0xf
#define ENT_SUVD_CGC_GATE__IME__SHIFT                                                                         0x10
#define ENT_SUVD_CGC_GATE__SIT_HEVC_DEC__SHIFT                                                                0x11
#define ENT_SUVD_CGC_GATE__SIT_HEVC_ENC__SHIFT                                                                0x12
#define ENT_SUVD_CGC_GATE__SITE__SHIFT                                                                        0x13
#define ENT_SUVD_CGC_GATE__SRE_VP9__SHIFT                                                                     0x14
#define ENT_SUVD_CGC_GATE__SCM_VP9__SHIFT                                                                     0x15
#define ENT_SUVD_CGC_GATE__SIT_VP9_DEC__SHIFT                                                                 0x16
#define ENT_SUVD_CGC_GATE__SDB_VP9__SHIFT                                                                     0x17
#define ENT_SUVD_CGC_GATE__IME_HEVC__SHIFT                                                                    0x18
#define ENT_SUVD_CGC_GATE__EFC__SHIFT                                                                         0x19
#define ENT_SUVD_CGC_GATE__SAOE__SHIFT                                                                        0x1a
#define ENT_SUVD_CGC_GATE__SRE_AV1__SHIFT                                                                     0x1b
#define ENT_SUVD_CGC_GATE__FBC_PCLK__SHIFT                                                                    0x1c
#define ENT_SUVD_CGC_GATE__FBC_CCLK__SHIFT                                                                    0x1d
#define ENT_SUVD_CGC_GATE__SCM_AV1__SHIFT                                                                     0x1e
#define ENT_SUVD_CGC_GATE__SMPA__SHIFT                                                                        0x1f
#define ENT_SUVD_CGC_GATE__SRE_MASK                                                                           0x00000001L
#define ENT_SUVD_CGC_GATE__SIT_MASK                                                                           0x00000002L
#define ENT_SUVD_CGC_GATE__SMP_MASK                                                                           0x00000004L
#define ENT_SUVD_CGC_GATE__SCM_MASK                                                                           0x00000008L
#define ENT_SUVD_CGC_GATE__SDB_MASK                                                                           0x00000010L
#define ENT_SUVD_CGC_GATE__SRE_H264_MASK                                                                      0x00000020L
#define ENT_SUVD_CGC_GATE__SRE_HEVC_MASK                                                                      0x00000040L
#define ENT_SUVD_CGC_GATE__SIT_H264_MASK                                                                      0x00000080L
#define ENT_SUVD_CGC_GATE__SIT_HEVC_MASK                                                                      0x00000100L
#define ENT_SUVD_CGC_GATE__SCM_H264_MASK                                                                      0x00000200L
#define ENT_SUVD_CGC_GATE__SCM_HEVC_MASK                                                                      0x00000400L
#define ENT_SUVD_CGC_GATE__SDB_H264_MASK                                                                      0x00000800L
#define ENT_SUVD_CGC_GATE__SDB_HEVC_MASK                                                                      0x00001000L
#define ENT_SUVD_CGC_GATE__SCLR_MASK                                                                          0x00002000L
#define ENT_SUVD_CGC_GATE__UVD_SC_MASK                                                                        0x00004000L
#define ENT_SUVD_CGC_GATE__ENT_MASK                                                                           0x00008000L
#define ENT_SUVD_CGC_GATE__IME_MASK                                                                           0x00010000L
#define ENT_SUVD_CGC_GATE__SIT_HEVC_DEC_MASK                                                                  0x00020000L
#define ENT_SUVD_CGC_GATE__SIT_HEVC_ENC_MASK                                                                  0x00040000L
#define ENT_SUVD_CGC_GATE__SITE_MASK                                                                          0x00080000L
#define ENT_SUVD_CGC_GATE__SRE_VP9_MASK                                                                       0x00100000L
#define ENT_SUVD_CGC_GATE__SCM_VP9_MASK                                                                       0x00200000L
#define ENT_SUVD_CGC_GATE__SIT_VP9_DEC_MASK                                                                   0x00400000L
#define ENT_SUVD_CGC_GATE__SDB_VP9_MASK                                                                       0x00800000L
#define ENT_SUVD_CGC_GATE__IME_HEVC_MASK                                                                      0x01000000L
#define ENT_SUVD_CGC_GATE__EFC_MASK                                                                           0x02000000L
#define ENT_SUVD_CGC_GATE__SAOE_MASK                                                                          0x04000000L
#define ENT_SUVD_CGC_GATE__SRE_AV1_MASK                                                                       0x08000000L
#define ENT_SUVD_CGC_GATE__FBC_PCLK_MASK                                                                      0x10000000L
#define ENT_SUVD_CGC_GATE__FBC_CCLK_MASK                                                                      0x20000000L
#define ENT_SUVD_CGC_GATE__SCM_AV1_MASK                                                                       0x40000000L
#define ENT_SUVD_CGC_GATE__SMPA_MASK                                                                          0x80000000L
//IME_SUVD_CGC_GATE
#define IME_SUVD_CGC_GATE__SRE__SHIFT                                                                         0x0
#define IME_SUVD_CGC_GATE__SIT__SHIFT                                                                         0x1
#define IME_SUVD_CGC_GATE__SMP__SHIFT                                                                         0x2
#define IME_SUVD_CGC_GATE__SCM__SHIFT                                                                         0x3
#define IME_SUVD_CGC_GATE__SDB__SHIFT                                                                         0x4
#define IME_SUVD_CGC_GATE__SRE_H264__SHIFT                                                                    0x5
#define IME_SUVD_CGC_GATE__SRE_HEVC__SHIFT                                                                    0x6
#define IME_SUVD_CGC_GATE__SIT_H264__SHIFT                                                                    0x7
#define IME_SUVD_CGC_GATE__SIT_HEVC__SHIFT                                                                    0x8
#define IME_SUVD_CGC_GATE__SCM_H264__SHIFT                                                                    0x9
#define IME_SUVD_CGC_GATE__SCM_HEVC__SHIFT                                                                    0xa
#define IME_SUVD_CGC_GATE__SDB_H264__SHIFT                                                                    0xb
#define IME_SUVD_CGC_GATE__SDB_HEVC__SHIFT                                                                    0xc
#define IME_SUVD_CGC_GATE__SCLR__SHIFT                                                                        0xd
#define IME_SUVD_CGC_GATE__UVD_SC__SHIFT                                                                      0xe
#define IME_SUVD_CGC_GATE__ENT__SHIFT                                                                         0xf
#define IME_SUVD_CGC_GATE__IME__SHIFT                                                                         0x10
#define IME_SUVD_CGC_GATE__SIT_HEVC_DEC__SHIFT                                                                0x11
#define IME_SUVD_CGC_GATE__SIT_HEVC_ENC__SHIFT                                                                0x12
#define IME_SUVD_CGC_GATE__SITE__SHIFT                                                                        0x13
#define IME_SUVD_CGC_GATE__SRE_VP9__SHIFT                                                                     0x14
#define IME_SUVD_CGC_GATE__SCM_VP9__SHIFT                                                                     0x15
#define IME_SUVD_CGC_GATE__SIT_VP9_DEC__SHIFT                                                                 0x16
#define IME_SUVD_CGC_GATE__SDB_VP9__SHIFT                                                                     0x17
#define IME_SUVD_CGC_GATE__IME_HEVC__SHIFT                                                                    0x18
#define IME_SUVD_CGC_GATE__EFC__SHIFT                                                                         0x19
#define IME_SUVD_CGC_GATE__SAOE__SHIFT                                                                        0x1a
#define IME_SUVD_CGC_GATE__SRE_AV1__SHIFT                                                                     0x1b
#define IME_SUVD_CGC_GATE__FBC_PCLK__SHIFT                                                                    0x1c
#define IME_SUVD_CGC_GATE__FBC_CCLK__SHIFT                                                                    0x1d
#define IME_SUVD_CGC_GATE__SCM_AV1__SHIFT                                                                     0x1e
#define IME_SUVD_CGC_GATE__SMPA__SHIFT                                                                        0x1f
#define IME_SUVD_CGC_GATE__SRE_MASK                                                                           0x00000001L
#define IME_SUVD_CGC_GATE__SIT_MASK                                                                           0x00000002L
#define IME_SUVD_CGC_GATE__SMP_MASK                                                                           0x00000004L
#define IME_SUVD_CGC_GATE__SCM_MASK                                                                           0x00000008L
#define IME_SUVD_CGC_GATE__SDB_MASK                                                                           0x00000010L
#define IME_SUVD_CGC_GATE__SRE_H264_MASK                                                                      0x00000020L
#define IME_SUVD_CGC_GATE__SRE_HEVC_MASK                                                                      0x00000040L
#define IME_SUVD_CGC_GATE__SIT_H264_MASK                                                                      0x00000080L
#define IME_SUVD_CGC_GATE__SIT_HEVC_MASK                                                                      0x00000100L
#define IME_SUVD_CGC_GATE__SCM_H264_MASK                                                                      0x00000200L
#define IME_SUVD_CGC_GATE__SCM_HEVC_MASK                                                                      0x00000400L
#define IME_SUVD_CGC_GATE__SDB_H264_MASK                                                                      0x00000800L
#define IME_SUVD_CGC_GATE__SDB_HEVC_MASK                                                                      0x00001000L
#define IME_SUVD_CGC_GATE__SCLR_MASK                                                                          0x00002000L
#define IME_SUVD_CGC_GATE__UVD_SC_MASK                                                                        0x00004000L
#define IME_SUVD_CGC_GATE__ENT_MASK                                                                           0x00008000L
#define IME_SUVD_CGC_GATE__IME_MASK                                                                           0x00010000L
#define IME_SUVD_CGC_GATE__SIT_HEVC_DEC_MASK                                                                  0x00020000L
#define IME_SUVD_CGC_GATE__SIT_HEVC_ENC_MASK                                                                  0x00040000L
#define IME_SUVD_CGC_GATE__SITE_MASK                                                                          0x00080000L
#define IME_SUVD_CGC_GATE__SRE_VP9_MASK                                                                       0x00100000L
#define IME_SUVD_CGC_GATE__SCM_VP9_MASK                                                                       0x00200000L
#define IME_SUVD_CGC_GATE__SIT_VP9_DEC_MASK                                                                   0x00400000L
#define IME_SUVD_CGC_GATE__SDB_VP9_MASK                                                                       0x00800000L
#define IME_SUVD_CGC_GATE__IME_HEVC_MASK                                                                      0x01000000L
#define IME_SUVD_CGC_GATE__EFC_MASK                                                                           0x02000000L
#define IME_SUVD_CGC_GATE__SAOE_MASK                                                                          0x04000000L
#define IME_SUVD_CGC_GATE__SRE_AV1_MASK                                                                       0x08000000L
#define IME_SUVD_CGC_GATE__FBC_PCLK_MASK                                                                      0x10000000L
#define IME_SUVD_CGC_GATE__FBC_CCLK_MASK                                                                      0x20000000L
#define IME_SUVD_CGC_GATE__SCM_AV1_MASK                                                                       0x40000000L
#define IME_SUVD_CGC_GATE__SMPA_MASK                                                                          0x80000000L
//PPU_SUVD_CGC_GATE
#define PPU_SUVD_CGC_GATE__SRE__SHIFT                                                                         0x0
#define PPU_SUVD_CGC_GATE__SIT__SHIFT                                                                         0x1
#define PPU_SUVD_CGC_GATE__SMP__SHIFT                                                                         0x2
#define PPU_SUVD_CGC_GATE__SCM__SHIFT                                                                         0x3
#define PPU_SUVD_CGC_GATE__SDB__SHIFT                                                                         0x4
#define PPU_SUVD_CGC_GATE__SRE_H264__SHIFT                                                                    0x5
#define PPU_SUVD_CGC_GATE__SRE_HEVC__SHIFT                                                                    0x6
#define PPU_SUVD_CGC_GATE__SIT_H264__SHIFT                                                                    0x7
#define PPU_SUVD_CGC_GATE__SIT_HEVC__SHIFT                                                                    0x8
#define PPU_SUVD_CGC_GATE__SCM_H264__SHIFT                                                                    0x9
#define PPU_SUVD_CGC_GATE__SCM_HEVC__SHIFT                                                                    0xa
#define PPU_SUVD_CGC_GATE__SDB_H264__SHIFT                                                                    0xb
#define PPU_SUVD_CGC_GATE__SDB_HEVC__SHIFT                                                                    0xc
#define PPU_SUVD_CGC_GATE__SCLR__SHIFT                                                                        0xd
#define PPU_SUVD_CGC_GATE__UVD_SC__SHIFT                                                                      0xe
#define PPU_SUVD_CGC_GATE__ENT__SHIFT                                                                         0xf
#define PPU_SUVD_CGC_GATE__IME__SHIFT                                                                         0x10
#define PPU_SUVD_CGC_GATE__SIT_HEVC_DEC__SHIFT                                                                0x11
#define PPU_SUVD_CGC_GATE__SIT_HEVC_ENC__SHIFT                                                                0x12
#define PPU_SUVD_CGC_GATE__SITE__SHIFT                                                                        0x13
#define PPU_SUVD_CGC_GATE__SRE_VP9__SHIFT                                                                     0x14
#define PPU_SUVD_CGC_GATE__SCM_VP9__SHIFT                                                                     0x15
#define PPU_SUVD_CGC_GATE__SIT_VP9_DEC__SHIFT                                                                 0x16
#define PPU_SUVD_CGC_GATE__SDB_VP9__SHIFT                                                                     0x17
#define PPU_SUVD_CGC_GATE__IME_HEVC__SHIFT                                                                    0x18
#define PPU_SUVD_CGC_GATE__EFC__SHIFT                                                                         0x19
#define PPU_SUVD_CGC_GATE__SAOE__SHIFT                                                                        0x1a
#define PPU_SUVD_CGC_GATE__SRE_AV1__SHIFT                                                                     0x1b
#define PPU_SUVD_CGC_GATE__FBC_PCLK__SHIFT                                                                    0x1c
#define PPU_SUVD_CGC_GATE__FBC_CCLK__SHIFT                                                                    0x1d
#define PPU_SUVD_CGC_GATE__SCM_AV1__SHIFT                                                                     0x1e
#define PPU_SUVD_CGC_GATE__SMPA__SHIFT                                                                        0x1f
#define PPU_SUVD_CGC_GATE__SRE_MASK                                                                           0x00000001L
#define PPU_SUVD_CGC_GATE__SIT_MASK                                                                           0x00000002L
#define PPU_SUVD_CGC_GATE__SMP_MASK                                                                           0x00000004L
#define PPU_SUVD_CGC_GATE__SCM_MASK                                                                           0x00000008L
#define PPU_SUVD_CGC_GATE__SDB_MASK                                                                           0x00000010L
#define PPU_SUVD_CGC_GATE__SRE_H264_MASK                                                                      0x00000020L
#define PPU_SUVD_CGC_GATE__SRE_HEVC_MASK                                                                      0x00000040L
#define PPU_SUVD_CGC_GATE__SIT_H264_MASK                                                                      0x00000080L
#define PPU_SUVD_CGC_GATE__SIT_HEVC_MASK                                                                      0x00000100L
#define PPU_SUVD_CGC_GATE__SCM_H264_MASK                                                                      0x00000200L
#define PPU_SUVD_CGC_GATE__SCM_HEVC_MASK                                                                      0x00000400L
#define PPU_SUVD_CGC_GATE__SDB_H264_MASK                                                                      0x00000800L
#define PPU_SUVD_CGC_GATE__SDB_HEVC_MASK                                                                      0x00001000L
#define PPU_SUVD_CGC_GATE__SCLR_MASK                                                                          0x00002000L
#define PPU_SUVD_CGC_GATE__UVD_SC_MASK                                                                        0x00004000L
#define PPU_SUVD_CGC_GATE__ENT_MASK                                                                           0x00008000L
#define PPU_SUVD_CGC_GATE__IME_MASK                                                                           0x00010000L
#define PPU_SUVD_CGC_GATE__SIT_HEVC_DEC_MASK                                                                  0x00020000L
#define PPU_SUVD_CGC_GATE__SIT_HEVC_ENC_MASK                                                                  0x00040000L
#define PPU_SUVD_CGC_GATE__SITE_MASK                                                                          0x00080000L
#define PPU_SUVD_CGC_GATE__SRE_VP9_MASK                                                                       0x00100000L
#define PPU_SUVD_CGC_GATE__SCM_VP9_MASK                                                                       0x00200000L
#define PPU_SUVD_CGC_GATE__SIT_VP9_DEC_MASK                                                                   0x00400000L
#define PPU_SUVD_CGC_GATE__SDB_VP9_MASK                                                                       0x00800000L
#define PPU_SUVD_CGC_GATE__IME_HEVC_MASK                                                                      0x01000000L
#define PPU_SUVD_CGC_GATE__EFC_MASK                                                                           0x02000000L
#define PPU_SUVD_CGC_GATE__SAOE_MASK                                                                          0x04000000L
#define PPU_SUVD_CGC_GATE__SRE_AV1_MASK                                                                       0x08000000L
#define PPU_SUVD_CGC_GATE__FBC_PCLK_MASK                                                                      0x10000000L
#define PPU_SUVD_CGC_GATE__FBC_CCLK_MASK                                                                      0x20000000L
#define PPU_SUVD_CGC_GATE__SCM_AV1_MASK                                                                       0x40000000L
#define PPU_SUVD_CGC_GATE__SMPA_MASK                                                                          0x80000000L
//SAOE_SUVD_CGC_GATE
#define SAOE_SUVD_CGC_GATE__SRE__SHIFT                                                                        0x0
#define SAOE_SUVD_CGC_GATE__SIT__SHIFT                                                                        0x1
#define SAOE_SUVD_CGC_GATE__SMP__SHIFT                                                                        0x2
#define SAOE_SUVD_CGC_GATE__SCM__SHIFT                                                                        0x3
#define SAOE_SUVD_CGC_GATE__SDB__SHIFT                                                                        0x4
#define SAOE_SUVD_CGC_GATE__SRE_H264__SHIFT                                                                   0x5
#define SAOE_SUVD_CGC_GATE__SRE_HEVC__SHIFT                                                                   0x6
#define SAOE_SUVD_CGC_GATE__SIT_H264__SHIFT                                                                   0x7
#define SAOE_SUVD_CGC_GATE__SIT_HEVC__SHIFT                                                                   0x8
#define SAOE_SUVD_CGC_GATE__SCM_H264__SHIFT                                                                   0x9
#define SAOE_SUVD_CGC_GATE__SCM_HEVC__SHIFT                                                                   0xa
#define SAOE_SUVD_CGC_GATE__SDB_H264__SHIFT                                                                   0xb
#define SAOE_SUVD_CGC_GATE__SDB_HEVC__SHIFT                                                                   0xc
#define SAOE_SUVD_CGC_GATE__SCLR__SHIFT                                                                       0xd
#define SAOE_SUVD_CGC_GATE__UVD_SC__SHIFT                                                                     0xe
#define SAOE_SUVD_CGC_GATE__ENT__SHIFT                                                                        0xf
#define SAOE_SUVD_CGC_GATE__IME__SHIFT                                                                        0x10
#define SAOE_SUVD_CGC_GATE__SIT_HEVC_DEC__SHIFT                                                               0x11
#define SAOE_SUVD_CGC_GATE__SIT_HEVC_ENC__SHIFT                                                               0x12
#define SAOE_SUVD_CGC_GATE__SITE__SHIFT                                                                       0x13
#define SAOE_SUVD_CGC_GATE__SRE_VP9__SHIFT                                                                    0x14
#define SAOE_SUVD_CGC_GATE__SCM_VP9__SHIFT                                                                    0x15
#define SAOE_SUVD_CGC_GATE__SIT_VP9_DEC__SHIFT                                                                0x16
#define SAOE_SUVD_CGC_GATE__SDB_VP9__SHIFT                                                                    0x17
#define SAOE_SUVD_CGC_GATE__IME_HEVC__SHIFT                                                                   0x18
#define SAOE_SUVD_CGC_GATE__EFC__SHIFT                                                                        0x19
#define SAOE_SUVD_CGC_GATE__SAOE__SHIFT                                                                       0x1a
#define SAOE_SUVD_CGC_GATE__SRE_AV1__SHIFT                                                                    0x1b
#define SAOE_SUVD_CGC_GATE__FBC_PCLK__SHIFT                                                                   0x1c
#define SAOE_SUVD_CGC_GATE__FBC_CCLK__SHIFT                                                                   0x1d
#define SAOE_SUVD_CGC_GATE__SCM_AV1__SHIFT                                                                    0x1e
#define SAOE_SUVD_CGC_GATE__SMPA__SHIFT                                                                       0x1f
#define SAOE_SUVD_CGC_GATE__SRE_MASK                                                                          0x00000001L
#define SAOE_SUVD_CGC_GATE__SIT_MASK                                                                          0x00000002L
#define SAOE_SUVD_CGC_GATE__SMP_MASK                                                                          0x00000004L
#define SAOE_SUVD_CGC_GATE__SCM_MASK                                                                          0x00000008L
#define SAOE_SUVD_CGC_GATE__SDB_MASK                                                                          0x00000010L
#define SAOE_SUVD_CGC_GATE__SRE_H264_MASK                                                                     0x00000020L
#define SAOE_SUVD_CGC_GATE__SRE_HEVC_MASK                                                                     0x00000040L
#define SAOE_SUVD_CGC_GATE__SIT_H264_MASK                                                                     0x00000080L
#define SAOE_SUVD_CGC_GATE__SIT_HEVC_MASK                                                                     0x00000100L
#define SAOE_SUVD_CGC_GATE__SCM_H264_MASK                                                                     0x00000200L
#define SAOE_SUVD_CGC_GATE__SCM_HEVC_MASK                                                                     0x00000400L
#define SAOE_SUVD_CGC_GATE__SDB_H264_MASK                                                                     0x00000800L
#define SAOE_SUVD_CGC_GATE__SDB_HEVC_MASK                                                                     0x00001000L
#define SAOE_SUVD_CGC_GATE__SCLR_MASK                                                                         0x00002000L
#define SAOE_SUVD_CGC_GATE__UVD_SC_MASK                                                                       0x00004000L
#define SAOE_SUVD_CGC_GATE__ENT_MASK                                                                          0x00008000L
#define SAOE_SUVD_CGC_GATE__IME_MASK                                                                          0x00010000L
#define SAOE_SUVD_CGC_GATE__SIT_HEVC_DEC_MASK                                                                 0x00020000L
#define SAOE_SUVD_CGC_GATE__SIT_HEVC_ENC_MASK                                                                 0x00040000L
#define SAOE_SUVD_CGC_GATE__SITE_MASK                                                                         0x00080000L
#define SAOE_SUVD_CGC_GATE__SRE_VP9_MASK                                                                      0x00100000L
#define SAOE_SUVD_CGC_GATE__SCM_VP9_MASK                                                                      0x00200000L
#define SAOE_SUVD_CGC_GATE__SIT_VP9_DEC_MASK                                                                  0x00400000L
#define SAOE_SUVD_CGC_GATE__SDB_VP9_MASK                                                                      0x00800000L
#define SAOE_SUVD_CGC_GATE__IME_HEVC_MASK                                                                     0x01000000L
#define SAOE_SUVD_CGC_GATE__EFC_MASK                                                                          0x02000000L
#define SAOE_SUVD_CGC_GATE__SAOE_MASK                                                                         0x04000000L
#define SAOE_SUVD_CGC_GATE__SRE_AV1_MASK                                                                      0x08000000L
#define SAOE_SUVD_CGC_GATE__FBC_PCLK_MASK                                                                     0x10000000L
#define SAOE_SUVD_CGC_GATE__FBC_CCLK_MASK                                                                     0x20000000L
#define SAOE_SUVD_CGC_GATE__SCM_AV1_MASK                                                                      0x40000000L
#define SAOE_SUVD_CGC_GATE__SMPA_MASK                                                                         0x80000000L
//SCM_SUVD_CGC_GATE
#define SCM_SUVD_CGC_GATE__SRE__SHIFT                                                                         0x0
#define SCM_SUVD_CGC_GATE__SIT__SHIFT                                                                         0x1
#define SCM_SUVD_CGC_GATE__SMP__SHIFT                                                                         0x2
#define SCM_SUVD_CGC_GATE__SCM__SHIFT                                                                         0x3
#define SCM_SUVD_CGC_GATE__SDB__SHIFT                                                                         0x4
#define SCM_SUVD_CGC_GATE__SRE_H264__SHIFT                                                                    0x5
#define SCM_SUVD_CGC_GATE__SRE_HEVC__SHIFT                                                                    0x6
#define SCM_SUVD_CGC_GATE__SIT_H264__SHIFT                                                                    0x7
#define SCM_SUVD_CGC_GATE__SIT_HEVC__SHIFT                                                                    0x8
#define SCM_SUVD_CGC_GATE__SCM_H264__SHIFT                                                                    0x9
#define SCM_SUVD_CGC_GATE__SCM_HEVC__SHIFT                                                                    0xa
#define SCM_SUVD_CGC_GATE__SDB_H264__SHIFT                                                                    0xb
#define SCM_SUVD_CGC_GATE__SDB_HEVC__SHIFT                                                                    0xc
#define SCM_SUVD_CGC_GATE__SCLR__SHIFT                                                                        0xd
#define SCM_SUVD_CGC_GATE__UVD_SC__SHIFT                                                                      0xe
#define SCM_SUVD_CGC_GATE__ENT__SHIFT                                                                         0xf
#define SCM_SUVD_CGC_GATE__IME__SHIFT                                                                         0x10
#define SCM_SUVD_CGC_GATE__SIT_HEVC_DEC__SHIFT                                                                0x11
#define SCM_SUVD_CGC_GATE__SIT_HEVC_ENC__SHIFT                                                                0x12
#define SCM_SUVD_CGC_GATE__SITE__SHIFT                                                                        0x13
#define SCM_SUVD_CGC_GATE__SRE_VP9__SHIFT                                                                     0x14
#define SCM_SUVD_CGC_GATE__SCM_VP9__SHIFT                                                                     0x15
#define SCM_SUVD_CGC_GATE__SIT_VP9_DEC__SHIFT                                                                 0x16
#define SCM_SUVD_CGC_GATE__SDB_VP9__SHIFT                                                                     0x17
#define SCM_SUVD_CGC_GATE__IME_HEVC__SHIFT                                                                    0x18
#define SCM_SUVD_CGC_GATE__EFC__SHIFT                                                                         0x19
#define SCM_SUVD_CGC_GATE__SAOE__SHIFT                                                                        0x1a
#define SCM_SUVD_CGC_GATE__SRE_AV1__SHIFT                                                                     0x1b
#define SCM_SUVD_CGC_GATE__FBC_PCLK__SHIFT                                                                    0x1c
#define SCM_SUVD_CGC_GATE__FBC_CCLK__SHIFT                                                                    0x1d
#define SCM_SUVD_CGC_GATE__SCM_AV1__SHIFT                                                                     0x1e
#define SCM_SUVD_CGC_GATE__SMPA__SHIFT                                                                        0x1f
#define SCM_SUVD_CGC_GATE__SRE_MASK                                                                           0x00000001L
#define SCM_SUVD_CGC_GATE__SIT_MASK                                                                           0x00000002L
#define SCM_SUVD_CGC_GATE__SMP_MASK                                                                           0x00000004L
#define SCM_SUVD_CGC_GATE__SCM_MASK                                                                           0x00000008L
#define SCM_SUVD_CGC_GATE__SDB_MASK                                                                           0x00000010L
#define SCM_SUVD_CGC_GATE__SRE_H264_MASK                                                                      0x00000020L
#define SCM_SUVD_CGC_GATE__SRE_HEVC_MASK                                                                      0x00000040L
#define SCM_SUVD_CGC_GATE__SIT_H264_MASK                                                                      0x00000080L
#define SCM_SUVD_CGC_GATE__SIT_HEVC_MASK                                                                      0x00000100L
#define SCM_SUVD_CGC_GATE__SCM_H264_MASK                                                                      0x00000200L
#define SCM_SUVD_CGC_GATE__SCM_HEVC_MASK                                                                      0x00000400L
#define SCM_SUVD_CGC_GATE__SDB_H264_MASK                                                                      0x00000800L
#define SCM_SUVD_CGC_GATE__SDB_HEVC_MASK                                                                      0x00001000L
#define SCM_SUVD_CGC_GATE__SCLR_MASK                                                                          0x00002000L
#define SCM_SUVD_CGC_GATE__UVD_SC_MASK                                                                        0x00004000L
#define SCM_SUVD_CGC_GATE__ENT_MASK                                                                           0x00008000L
#define SCM_SUVD_CGC_GATE__IME_MASK                                                                           0x00010000L
#define SCM_SUVD_CGC_GATE__SIT_HEVC_DEC_MASK                                                                  0x00020000L
#define SCM_SUVD_CGC_GATE__SIT_HEVC_ENC_MASK                                                                  0x00040000L
#define SCM_SUVD_CGC_GATE__SITE_MASK                                                                          0x00080000L
#define SCM_SUVD_CGC_GATE__SRE_VP9_MASK                                                                       0x00100000L
#define SCM_SUVD_CGC_GATE__SCM_VP9_MASK                                                                       0x00200000L
#define SCM_SUVD_CGC_GATE__SIT_VP9_DEC_MASK                                                                   0x00400000L
#define SCM_SUVD_CGC_GATE__SDB_VP9_MASK                                                                       0x00800000L
#define SCM_SUVD_CGC_GATE__IME_HEVC_MASK                                                                      0x01000000L
#define SCM_SUVD_CGC_GATE__EFC_MASK                                                                           0x02000000L
#define SCM_SUVD_CGC_GATE__SAOE_MASK                                                                          0x04000000L
#define SCM_SUVD_CGC_GATE__SRE_AV1_MASK                                                                       0x08000000L
#define SCM_SUVD_CGC_GATE__FBC_PCLK_MASK                                                                      0x10000000L
#define SCM_SUVD_CGC_GATE__FBC_CCLK_MASK                                                                      0x20000000L
#define SCM_SUVD_CGC_GATE__SCM_AV1_MASK                                                                       0x40000000L
#define SCM_SUVD_CGC_GATE__SMPA_MASK                                                                          0x80000000L
//SDB_SUVD_CGC_GATE
#define SDB_SUVD_CGC_GATE__SRE__SHIFT                                                                         0x0
#define SDB_SUVD_CGC_GATE__SIT__SHIFT                                                                         0x1
#define SDB_SUVD_CGC_GATE__SMP__SHIFT                                                                         0x2
#define SDB_SUVD_CGC_GATE__SCM__SHIFT                                                                         0x3
#define SDB_SUVD_CGC_GATE__SDB__SHIFT                                                                         0x4
#define SDB_SUVD_CGC_GATE__SRE_H264__SHIFT                                                                    0x5
#define SDB_SUVD_CGC_GATE__SRE_HEVC__SHIFT                                                                    0x6
#define SDB_SUVD_CGC_GATE__SIT_H264__SHIFT                                                                    0x7
#define SDB_SUVD_CGC_GATE__SIT_HEVC__SHIFT                                                                    0x8
#define SDB_SUVD_CGC_GATE__SCM_H264__SHIFT                                                                    0x9
#define SDB_SUVD_CGC_GATE__SCM_HEVC__SHIFT                                                                    0xa
#define SDB_SUVD_CGC_GATE__SDB_H264__SHIFT                                                                    0xb
#define SDB_SUVD_CGC_GATE__SDB_HEVC__SHIFT                                                                    0xc
#define SDB_SUVD_CGC_GATE__SCLR__SHIFT                                                                        0xd
#define SDB_SUVD_CGC_GATE__UVD_SC__SHIFT                                                                      0xe
#define SDB_SUVD_CGC_GATE__ENT__SHIFT                                                                         0xf
#define SDB_SUVD_CGC_GATE__IME__SHIFT                                                                         0x10
#define SDB_SUVD_CGC_GATE__SIT_HEVC_DEC__SHIFT                                                                0x11
#define SDB_SUVD_CGC_GATE__SIT_HEVC_ENC__SHIFT                                                                0x12
#define SDB_SUVD_CGC_GATE__SITE__SHIFT                                                                        0x13
#define SDB_SUVD_CGC_GATE__SRE_VP9__SHIFT                                                                     0x14
#define SDB_SUVD_CGC_GATE__SCM_VP9__SHIFT                                                                     0x15
#define SDB_SUVD_CGC_GATE__SIT_VP9_DEC__SHIFT                                                                 0x16
#define SDB_SUVD_CGC_GATE__SDB_VP9__SHIFT                                                                     0x17
#define SDB_SUVD_CGC_GATE__IME_HEVC__SHIFT                                                                    0x18
#define SDB_SUVD_CGC_GATE__EFC__SHIFT                                                                         0x19
#define SDB_SUVD_CGC_GATE__SAOE__SHIFT                                                                        0x1a
#define SDB_SUVD_CGC_GATE__SRE_AV1__SHIFT                                                                     0x1b
#define SDB_SUVD_CGC_GATE__FBC_PCLK__SHIFT                                                                    0x1c
#define SDB_SUVD_CGC_GATE__FBC_CCLK__SHIFT                                                                    0x1d
#define SDB_SUVD_CGC_GATE__SCM_AV1__SHIFT                                                                     0x1e
#define SDB_SUVD_CGC_GATE__SMPA__SHIFT                                                                        0x1f
#define SDB_SUVD_CGC_GATE__SRE_MASK                                                                           0x00000001L
#define SDB_SUVD_CGC_GATE__SIT_MASK                                                                           0x00000002L
#define SDB_SUVD_CGC_GATE__SMP_MASK                                                                           0x00000004L
#define SDB_SUVD_CGC_GATE__SCM_MASK                                                                           0x00000008L
#define SDB_SUVD_CGC_GATE__SDB_MASK                                                                           0x00000010L
#define SDB_SUVD_CGC_GATE__SRE_H264_MASK                                                                      0x00000020L
#define SDB_SUVD_CGC_GATE__SRE_HEVC_MASK                                                                      0x00000040L
#define SDB_SUVD_CGC_GATE__SIT_H264_MASK                                                                      0x00000080L
#define SDB_SUVD_CGC_GATE__SIT_HEVC_MASK                                                                      0x00000100L
#define SDB_SUVD_CGC_GATE__SCM_H264_MASK                                                                      0x00000200L
#define SDB_SUVD_CGC_GATE__SCM_HEVC_MASK                                                                      0x00000400L
#define SDB_SUVD_CGC_GATE__SDB_H264_MASK                                                                      0x00000800L
#define SDB_SUVD_CGC_GATE__SDB_HEVC_MASK                                                                      0x00001000L
#define SDB_SUVD_CGC_GATE__SCLR_MASK                                                                          0x00002000L
#define SDB_SUVD_CGC_GATE__UVD_SC_MASK                                                                        0x00004000L
#define SDB_SUVD_CGC_GATE__ENT_MASK                                                                           0x00008000L
#define SDB_SUVD_CGC_GATE__IME_MASK                                                                           0x00010000L
#define SDB_SUVD_CGC_GATE__SIT_HEVC_DEC_MASK                                                                  0x00020000L
#define SDB_SUVD_CGC_GATE__SIT_HEVC_ENC_MASK                                                                  0x00040000L
#define SDB_SUVD_CGC_GATE__SITE_MASK                                                                          0x00080000L
#define SDB_SUVD_CGC_GATE__SRE_VP9_MASK                                                                       0x00100000L
#define SDB_SUVD_CGC_GATE__SCM_VP9_MASK                                                                       0x00200000L
#define SDB_SUVD_CGC_GATE__SIT_VP9_DEC_MASK                                                                   0x00400000L
#define SDB_SUVD_CGC_GATE__SDB_VP9_MASK                                                                       0x00800000L
#define SDB_SUVD_CGC_GATE__IME_HEVC_MASK                                                                      0x01000000L
#define SDB_SUVD_CGC_GATE__EFC_MASK                                                                           0x02000000L
#define SDB_SUVD_CGC_GATE__SAOE_MASK                                                                          0x04000000L
#define SDB_SUVD_CGC_GATE__SRE_AV1_MASK                                                                       0x08000000L
#define SDB_SUVD_CGC_GATE__FBC_PCLK_MASK                                                                      0x10000000L
#define SDB_SUVD_CGC_GATE__FBC_CCLK_MASK                                                                      0x20000000L
#define SDB_SUVD_CGC_GATE__SCM_AV1_MASK                                                                       0x40000000L
#define SDB_SUVD_CGC_GATE__SMPA_MASK                                                                          0x80000000L
//SIT0_NXT_SUVD_CGC_GATE
#define SIT0_NXT_SUVD_CGC_GATE__SRE__SHIFT                                                                    0x0
#define SIT0_NXT_SUVD_CGC_GATE__SIT__SHIFT                                                                    0x1
#define SIT0_NXT_SUVD_CGC_GATE__SMP__SHIFT                                                                    0x2
#define SIT0_NXT_SUVD_CGC_GATE__SCM__SHIFT                                                                    0x3
#define SIT0_NXT_SUVD_CGC_GATE__SDB__SHIFT                                                                    0x4
#define SIT0_NXT_SUVD_CGC_GATE__SRE_H264__SHIFT                                                               0x5
#define SIT0_NXT_SUVD_CGC_GATE__SRE_HEVC__SHIFT                                                               0x6
#define SIT0_NXT_SUVD_CGC_GATE__SIT_H264__SHIFT                                                               0x7
#define SIT0_NXT_SUVD_CGC_GATE__SIT_HEVC__SHIFT                                                               0x8
#define SIT0_NXT_SUVD_CGC_GATE__SCM_H264__SHIFT                                                               0x9
#define SIT0_NXT_SUVD_CGC_GATE__SCM_HEVC__SHIFT                                                               0xa
#define SIT0_NXT_SUVD_CGC_GATE__SDB_H264__SHIFT                                                               0xb
#define SIT0_NXT_SUVD_CGC_GATE__SDB_HEVC__SHIFT                                                               0xc
#define SIT0_NXT_SUVD_CGC_GATE__SCLR__SHIFT                                                                   0xd
#define SIT0_NXT_SUVD_CGC_GATE__UVD_SC__SHIFT                                                                 0xe
#define SIT0_NXT_SUVD_CGC_GATE__ENT__SHIFT                                                                    0xf
#define SIT0_NXT_SUVD_CGC_GATE__IME__SHIFT                                                                    0x10
#define SIT0_NXT_SUVD_CGC_GATE__SIT_HEVC_DEC__SHIFT                                                           0x11
#define SIT0_NXT_SUVD_CGC_GATE__SIT_HEVC_ENC__SHIFT                                                           0x12
#define SIT0_NXT_SUVD_CGC_GATE__SITE__SHIFT                                                                   0x13
#define SIT0_NXT_SUVD_CGC_GATE__SRE_VP9__SHIFT                                                                0x14
#define SIT0_NXT_SUVD_CGC_GATE__SCM_VP9__SHIFT                                                                0x15
#define SIT0_NXT_SUVD_CGC_GATE__SIT_VP9_DEC__SHIFT                                                            0x16
#define SIT0_NXT_SUVD_CGC_GATE__SDB_VP9__SHIFT                                                                0x17
#define SIT0_NXT_SUVD_CGC_GATE__IME_HEVC__SHIFT                                                               0x18
#define SIT0_NXT_SUVD_CGC_GATE__EFC__SHIFT                                                                    0x19
#define SIT0_NXT_SUVD_CGC_GATE__SAOE__SHIFT                                                                   0x1a
#define SIT0_NXT_SUVD_CGC_GATE__SRE_AV1__SHIFT                                                                0x1b
#define SIT0_NXT_SUVD_CGC_GATE__FBC_PCLK__SHIFT                                                               0x1c
#define SIT0_NXT_SUVD_CGC_GATE__FBC_CCLK__SHIFT                                                               0x1d
#define SIT0_NXT_SUVD_CGC_GATE__SCM_AV1__SHIFT                                                                0x1e
#define SIT0_NXT_SUVD_CGC_GATE__SMPA__SHIFT                                                                   0x1f
#define SIT0_NXT_SUVD_CGC_GATE__SRE_MASK                                                                      0x00000001L
#define SIT0_NXT_SUVD_CGC_GATE__SIT_MASK                                                                      0x00000002L
#define SIT0_NXT_SUVD_CGC_GATE__SMP_MASK                                                                      0x00000004L
#define SIT0_NXT_SUVD_CGC_GATE__SCM_MASK                                                                      0x00000008L
#define SIT0_NXT_SUVD_CGC_GATE__SDB_MASK                                                                      0x00000010L
#define SIT0_NXT_SUVD_CGC_GATE__SRE_H264_MASK                                                                 0x00000020L
#define SIT0_NXT_SUVD_CGC_GATE__SRE_HEVC_MASK                                                                 0x00000040L
#define SIT0_NXT_SUVD_CGC_GATE__SIT_H264_MASK                                                                 0x00000080L
#define SIT0_NXT_SUVD_CGC_GATE__SIT_HEVC_MASK                                                                 0x00000100L
#define SIT0_NXT_SUVD_CGC_GATE__SCM_H264_MASK                                                                 0x00000200L
#define SIT0_NXT_SUVD_CGC_GATE__SCM_HEVC_MASK                                                                 0x00000400L
#define SIT0_NXT_SUVD_CGC_GATE__SDB_H264_MASK                                                                 0x00000800L
#define SIT0_NXT_SUVD_CGC_GATE__SDB_HEVC_MASK                                                                 0x00001000L
#define SIT0_NXT_SUVD_CGC_GATE__SCLR_MASK                                                                     0x00002000L
#define SIT0_NXT_SUVD_CGC_GATE__UVD_SC_MASK                                                                   0x00004000L
#define SIT0_NXT_SUVD_CGC_GATE__ENT_MASK                                                                      0x00008000L
#define SIT0_NXT_SUVD_CGC_GATE__IME_MASK                                                                      0x00010000L
#define SIT0_NXT_SUVD_CGC_GATE__SIT_HEVC_DEC_MASK                                                             0x00020000L
#define SIT0_NXT_SUVD_CGC_GATE__SIT_HEVC_ENC_MASK                                                             0x00040000L
#define SIT0_NXT_SUVD_CGC_GATE__SITE_MASK                                                                     0x00080000L
#define SIT0_NXT_SUVD_CGC_GATE__SRE_VP9_MASK                                                                  0x00100000L
#define SIT0_NXT_SUVD_CGC_GATE__SCM_VP9_MASK                                                                  0x00200000L
#define SIT0_NXT_SUVD_CGC_GATE__SIT_VP9_DEC_MASK                                                              0x00400000L
#define SIT0_NXT_SUVD_CGC_GATE__SDB_VP9_MASK                                                                  0x00800000L
#define SIT0_NXT_SUVD_CGC_GATE__IME_HEVC_MASK                                                                 0x01000000L
#define SIT0_NXT_SUVD_CGC_GATE__EFC_MASK                                                                      0x02000000L
#define SIT0_NXT_SUVD_CGC_GATE__SAOE_MASK                                                                     0x04000000L
#define SIT0_NXT_SUVD_CGC_GATE__SRE_AV1_MASK                                                                  0x08000000L
#define SIT0_NXT_SUVD_CGC_GATE__FBC_PCLK_MASK                                                                 0x10000000L
#define SIT0_NXT_SUVD_CGC_GATE__FBC_CCLK_MASK                                                                 0x20000000L
#define SIT0_NXT_SUVD_CGC_GATE__SCM_AV1_MASK                                                                  0x40000000L
#define SIT0_NXT_SUVD_CGC_GATE__SMPA_MASK                                                                     0x80000000L
//SIT1_NXT_SUVD_CGC_GATE
#define SIT1_NXT_SUVD_CGC_GATE__SRE__SHIFT                                                                    0x0
#define SIT1_NXT_SUVD_CGC_GATE__SIT__SHIFT                                                                    0x1
#define SIT1_NXT_SUVD_CGC_GATE__SMP__SHIFT                                                                    0x2
#define SIT1_NXT_SUVD_CGC_GATE__SCM__SHIFT                                                                    0x3
#define SIT1_NXT_SUVD_CGC_GATE__SDB__SHIFT                                                                    0x4
#define SIT1_NXT_SUVD_CGC_GATE__SRE_H264__SHIFT                                                               0x5
#define SIT1_NXT_SUVD_CGC_GATE__SRE_HEVC__SHIFT                                                               0x6
#define SIT1_NXT_SUVD_CGC_GATE__SIT_H264__SHIFT                                                               0x7
#define SIT1_NXT_SUVD_CGC_GATE__SIT_HEVC__SHIFT                                                               0x8
#define SIT1_NXT_SUVD_CGC_GATE__SCM_H264__SHIFT                                                               0x9
#define SIT1_NXT_SUVD_CGC_GATE__SCM_HEVC__SHIFT                                                               0xa
#define SIT1_NXT_SUVD_CGC_GATE__SDB_H264__SHIFT                                                               0xb
#define SIT1_NXT_SUVD_CGC_GATE__SDB_HEVC__SHIFT                                                               0xc
#define SIT1_NXT_SUVD_CGC_GATE__SCLR__SHIFT                                                                   0xd
#define SIT1_NXT_SUVD_CGC_GATE__UVD_SC__SHIFT                                                                 0xe
#define SIT1_NXT_SUVD_CGC_GATE__ENT__SHIFT                                                                    0xf
#define SIT1_NXT_SUVD_CGC_GATE__IME__SHIFT                                                                    0x10
#define SIT1_NXT_SUVD_CGC_GATE__SIT_HEVC_DEC__SHIFT                                                           0x11
#define SIT1_NXT_SUVD_CGC_GATE__SIT_HEVC_ENC__SHIFT                                                           0x12
#define SIT1_NXT_SUVD_CGC_GATE__SITE__SHIFT                                                                   0x13
#define SIT1_NXT_SUVD_CGC_GATE__SRE_VP9__SHIFT                                                                0x14
#define SIT1_NXT_SUVD_CGC_GATE__SCM_VP9__SHIFT                                                                0x15
#define SIT1_NXT_SUVD_CGC_GATE__SIT_VP9_DEC__SHIFT                                                            0x16
#define SIT1_NXT_SUVD_CGC_GATE__SDB_VP9__SHIFT                                                                0x17
#define SIT1_NXT_SUVD_CGC_GATE__IME_HEVC__SHIFT                                                               0x18
#define SIT1_NXT_SUVD_CGC_GATE__EFC__SHIFT                                                                    0x19
#define SIT1_NXT_SUVD_CGC_GATE__SAOE__SHIFT                                                                   0x1a
#define SIT1_NXT_SUVD_CGC_GATE__SRE_AV1__SHIFT                                                                0x1b
#define SIT1_NXT_SUVD_CGC_GATE__FBC_PCLK__SHIFT                                                               0x1c
#define SIT1_NXT_SUVD_CGC_GATE__FBC_CCLK__SHIFT                                                               0x1d
#define SIT1_NXT_SUVD_CGC_GATE__SCM_AV1__SHIFT                                                                0x1e
#define SIT1_NXT_SUVD_CGC_GATE__SMPA__SHIFT                                                                   0x1f
#define SIT1_NXT_SUVD_CGC_GATE__SRE_MASK                                                                      0x00000001L
#define SIT1_NXT_SUVD_CGC_GATE__SIT_MASK                                                                      0x00000002L
#define SIT1_NXT_SUVD_CGC_GATE__SMP_MASK                                                                      0x00000004L
#define SIT1_NXT_SUVD_CGC_GATE__SCM_MASK                                                                      0x00000008L
#define SIT1_NXT_SUVD_CGC_GATE__SDB_MASK                                                                      0x00000010L
#define SIT1_NXT_SUVD_CGC_GATE__SRE_H264_MASK                                                                 0x00000020L
#define SIT1_NXT_SUVD_CGC_GATE__SRE_HEVC_MASK                                                                 0x00000040L
#define SIT1_NXT_SUVD_CGC_GATE__SIT_H264_MASK                                                                 0x00000080L
#define SIT1_NXT_SUVD_CGC_GATE__SIT_HEVC_MASK                                                                 0x00000100L
#define SIT1_NXT_SUVD_CGC_GATE__SCM_H264_MASK                                                                 0x00000200L
#define SIT1_NXT_SUVD_CGC_GATE__SCM_HEVC_MASK                                                                 0x00000400L
#define SIT1_NXT_SUVD_CGC_GATE__SDB_H264_MASK                                                                 0x00000800L
#define SIT1_NXT_SUVD_CGC_GATE__SDB_HEVC_MASK                                                                 0x00001000L
#define SIT1_NXT_SUVD_CGC_GATE__SCLR_MASK                                                                     0x00002000L
#define SIT1_NXT_SUVD_CGC_GATE__UVD_SC_MASK                                                                   0x00004000L
#define SIT1_NXT_SUVD_CGC_GATE__ENT_MASK                                                                      0x00008000L
#define SIT1_NXT_SUVD_CGC_GATE__IME_MASK                                                                      0x00010000L
#define SIT1_NXT_SUVD_CGC_GATE__SIT_HEVC_DEC_MASK                                                             0x00020000L
#define SIT1_NXT_SUVD_CGC_GATE__SIT_HEVC_ENC_MASK                                                             0x00040000L
#define SIT1_NXT_SUVD_CGC_GATE__SITE_MASK                                                                     0x00080000L
#define SIT1_NXT_SUVD_CGC_GATE__SRE_VP9_MASK                                                                  0x00100000L
#define SIT1_NXT_SUVD_CGC_GATE__SCM_VP9_MASK                                                                  0x00200000L
#define SIT1_NXT_SUVD_CGC_GATE__SIT_VP9_DEC_MASK                                                              0x00400000L
#define SIT1_NXT_SUVD_CGC_GATE__SDB_VP9_MASK                                                                  0x00800000L
#define SIT1_NXT_SUVD_CGC_GATE__IME_HEVC_MASK                                                                 0x01000000L
#define SIT1_NXT_SUVD_CGC_GATE__EFC_MASK                                                                      0x02000000L
#define SIT1_NXT_SUVD_CGC_GATE__SAOE_MASK                                                                     0x04000000L
#define SIT1_NXT_SUVD_CGC_GATE__SRE_AV1_MASK                                                                  0x08000000L
#define SIT1_NXT_SUVD_CGC_GATE__FBC_PCLK_MASK                                                                 0x10000000L
#define SIT1_NXT_SUVD_CGC_GATE__FBC_CCLK_MASK                                                                 0x20000000L
#define SIT1_NXT_SUVD_CGC_GATE__SCM_AV1_MASK                                                                  0x40000000L
#define SIT1_NXT_SUVD_CGC_GATE__SMPA_MASK                                                                     0x80000000L
//SIT2_NXT_SUVD_CGC_GATE
#define SIT2_NXT_SUVD_CGC_GATE__SRE__SHIFT                                                                    0x0
#define SIT2_NXT_SUVD_CGC_GATE__SIT__SHIFT                                                                    0x1
#define SIT2_NXT_SUVD_CGC_GATE__SMP__SHIFT                                                                    0x2
#define SIT2_NXT_SUVD_CGC_GATE__SCM__SHIFT                                                                    0x3
#define SIT2_NXT_SUVD_CGC_GATE__SDB__SHIFT                                                                    0x4
#define SIT2_NXT_SUVD_CGC_GATE__SRE_H264__SHIFT                                                               0x5
#define SIT2_NXT_SUVD_CGC_GATE__SRE_HEVC__SHIFT                                                               0x6
#define SIT2_NXT_SUVD_CGC_GATE__SIT_H264__SHIFT                                                               0x7
#define SIT2_NXT_SUVD_CGC_GATE__SIT_HEVC__SHIFT                                                               0x8
#define SIT2_NXT_SUVD_CGC_GATE__SCM_H264__SHIFT                                                               0x9
#define SIT2_NXT_SUVD_CGC_GATE__SCM_HEVC__SHIFT                                                               0xa
#define SIT2_NXT_SUVD_CGC_GATE__SDB_H264__SHIFT                                                               0xb
#define SIT2_NXT_SUVD_CGC_GATE__SDB_HEVC__SHIFT                                                               0xc
#define SIT2_NXT_SUVD_CGC_GATE__SCLR__SHIFT                                                                   0xd
#define SIT2_NXT_SUVD_CGC_GATE__UVD_SC__SHIFT                                                                 0xe
#define SIT2_NXT_SUVD_CGC_GATE__ENT__SHIFT                                                                    0xf
#define SIT2_NXT_SUVD_CGC_GATE__IME__SHIFT                                                                    0x10
#define SIT2_NXT_SUVD_CGC_GATE__SIT_HEVC_DEC__SHIFT                                                           0x11
#define SIT2_NXT_SUVD_CGC_GATE__SIT_HEVC_ENC__SHIFT                                                           0x12
#define SIT2_NXT_SUVD_CGC_GATE__SITE__SHIFT                                                                   0x13
#define SIT2_NXT_SUVD_CGC_GATE__SRE_VP9__SHIFT                                                                0x14
#define SIT2_NXT_SUVD_CGC_GATE__SCM_VP9__SHIFT                                                                0x15
#define SIT2_NXT_SUVD_CGC_GATE__SIT_VP9_DEC__SHIFT                                                            0x16
#define SIT2_NXT_SUVD_CGC_GATE__SDB_VP9__SHIFT                                                                0x17
#define SIT2_NXT_SUVD_CGC_GATE__IME_HEVC__SHIFT                                                               0x18
#define SIT2_NXT_SUVD_CGC_GATE__EFC__SHIFT                                                                    0x19
#define SIT2_NXT_SUVD_CGC_GATE__SAOE__SHIFT                                                                   0x1a
#define SIT2_NXT_SUVD_CGC_GATE__SRE_AV1__SHIFT                                                                0x1b
#define SIT2_NXT_SUVD_CGC_GATE__FBC_PCLK__SHIFT                                                               0x1c
#define SIT2_NXT_SUVD_CGC_GATE__FBC_CCLK__SHIFT                                                               0x1d
#define SIT2_NXT_SUVD_CGC_GATE__SCM_AV1__SHIFT                                                                0x1e
#define SIT2_NXT_SUVD_CGC_GATE__SMPA__SHIFT                                                                   0x1f
#define SIT2_NXT_SUVD_CGC_GATE__SRE_MASK                                                                      0x00000001L
#define SIT2_NXT_SUVD_CGC_GATE__SIT_MASK                                                                      0x00000002L
#define SIT2_NXT_SUVD_CGC_GATE__SMP_MASK                                                                      0x00000004L
#define SIT2_NXT_SUVD_CGC_GATE__SCM_MASK                                                                      0x00000008L
#define SIT2_NXT_SUVD_CGC_GATE__SDB_MASK                                                                      0x00000010L
#define SIT2_NXT_SUVD_CGC_GATE__SRE_H264_MASK                                                                 0x00000020L
#define SIT2_NXT_SUVD_CGC_GATE__SRE_HEVC_MASK                                                                 0x00000040L
#define SIT2_NXT_SUVD_CGC_GATE__SIT_H264_MASK                                                                 0x00000080L
#define SIT2_NXT_SUVD_CGC_GATE__SIT_HEVC_MASK                                                                 0x00000100L
#define SIT2_NXT_SUVD_CGC_GATE__SCM_H264_MASK                                                                 0x00000200L
#define SIT2_NXT_SUVD_CGC_GATE__SCM_HEVC_MASK                                                                 0x00000400L
#define SIT2_NXT_SUVD_CGC_GATE__SDB_H264_MASK                                                                 0x00000800L
#define SIT2_NXT_SUVD_CGC_GATE__SDB_HEVC_MASK                                                                 0x00001000L
#define SIT2_NXT_SUVD_CGC_GATE__SCLR_MASK                                                                     0x00002000L
#define SIT2_NXT_SUVD_CGC_GATE__UVD_SC_MASK                                                                   0x00004000L
#define SIT2_NXT_SUVD_CGC_GATE__ENT_MASK                                                                      0x00008000L
#define SIT2_NXT_SUVD_CGC_GATE__IME_MASK                                                                      0x00010000L
#define SIT2_NXT_SUVD_CGC_GATE__SIT_HEVC_DEC_MASK                                                             0x00020000L
#define SIT2_NXT_SUVD_CGC_GATE__SIT_HEVC_ENC_MASK                                                             0x00040000L
#define SIT2_NXT_SUVD_CGC_GATE__SITE_MASK                                                                     0x00080000L
#define SIT2_NXT_SUVD_CGC_GATE__SRE_VP9_MASK                                                                  0x00100000L
#define SIT2_NXT_SUVD_CGC_GATE__SCM_VP9_MASK                                                                  0x00200000L
#define SIT2_NXT_SUVD_CGC_GATE__SIT_VP9_DEC_MASK                                                              0x00400000L
#define SIT2_NXT_SUVD_CGC_GATE__SDB_VP9_MASK                                                                  0x00800000L
#define SIT2_NXT_SUVD_CGC_GATE__IME_HEVC_MASK                                                                 0x01000000L
#define SIT2_NXT_SUVD_CGC_GATE__EFC_MASK                                                                      0x02000000L
#define SIT2_NXT_SUVD_CGC_GATE__SAOE_MASK                                                                     0x04000000L
#define SIT2_NXT_SUVD_CGC_GATE__SRE_AV1_MASK                                                                  0x08000000L
#define SIT2_NXT_SUVD_CGC_GATE__FBC_PCLK_MASK                                                                 0x10000000L
#define SIT2_NXT_SUVD_CGC_GATE__FBC_CCLK_MASK                                                                 0x20000000L
#define SIT2_NXT_SUVD_CGC_GATE__SCM_AV1_MASK                                                                  0x40000000L
#define SIT2_NXT_SUVD_CGC_GATE__SMPA_MASK                                                                     0x80000000L
//SIT_SUVD_CGC_GATE
#define SIT_SUVD_CGC_GATE__SRE__SHIFT                                                                         0x0
#define SIT_SUVD_CGC_GATE__SIT__SHIFT                                                                         0x1
#define SIT_SUVD_CGC_GATE__SMP__SHIFT                                                                         0x2
#define SIT_SUVD_CGC_GATE__SCM__SHIFT                                                                         0x3
#define SIT_SUVD_CGC_GATE__SDB__SHIFT                                                                         0x4
#define SIT_SUVD_CGC_GATE__SRE_H264__SHIFT                                                                    0x5
#define SIT_SUVD_CGC_GATE__SRE_HEVC__SHIFT                                                                    0x6
#define SIT_SUVD_CGC_GATE__SIT_H264__SHIFT                                                                    0x7
#define SIT_SUVD_CGC_GATE__SIT_HEVC__SHIFT                                                                    0x8
#define SIT_SUVD_CGC_GATE__SCM_H264__SHIFT                                                                    0x9
#define SIT_SUVD_CGC_GATE__SCM_HEVC__SHIFT                                                                    0xa
#define SIT_SUVD_CGC_GATE__SDB_H264__SHIFT                                                                    0xb
#define SIT_SUVD_CGC_GATE__SDB_HEVC__SHIFT                                                                    0xc
#define SIT_SUVD_CGC_GATE__SCLR__SHIFT                                                                        0xd
#define SIT_SUVD_CGC_GATE__UVD_SC__SHIFT                                                                      0xe
#define SIT_SUVD_CGC_GATE__ENT__SHIFT                                                                         0xf
#define SIT_SUVD_CGC_GATE__IME__SHIFT                                                                         0x10
#define SIT_SUVD_CGC_GATE__SIT_HEVC_DEC__SHIFT                                                                0x11
#define SIT_SUVD_CGC_GATE__SIT_HEVC_ENC__SHIFT                                                                0x12
#define SIT_SUVD_CGC_GATE__SITE__SHIFT                                                                        0x13
#define SIT_SUVD_CGC_GATE__SRE_VP9__SHIFT                                                                     0x14
#define SIT_SUVD_CGC_GATE__SCM_VP9__SHIFT                                                                     0x15
#define SIT_SUVD_CGC_GATE__SIT_VP9_DEC__SHIFT                                                                 0x16
#define SIT_SUVD_CGC_GATE__SDB_VP9__SHIFT                                                                     0x17
#define SIT_SUVD_CGC_GATE__IME_HEVC__SHIFT                                                                    0x18
#define SIT_SUVD_CGC_GATE__EFC__SHIFT                                                                         0x19
#define SIT_SUVD_CGC_GATE__SAOE__SHIFT                                                                        0x1a
#define SIT_SUVD_CGC_GATE__SRE_AV1__SHIFT                                                                     0x1b
#define SIT_SUVD_CGC_GATE__FBC_PCLK__SHIFT                                                                    0x1c
#define SIT_SUVD_CGC_GATE__FBC_CCLK__SHIFT                                                                    0x1d
#define SIT_SUVD_CGC_GATE__SCM_AV1__SHIFT                                                                     0x1e
#define SIT_SUVD_CGC_GATE__SMPA__SHIFT                                                                        0x1f
#define SIT_SUVD_CGC_GATE__SRE_MASK                                                                           0x00000001L
#define SIT_SUVD_CGC_GATE__SIT_MASK                                                                           0x00000002L
#define SIT_SUVD_CGC_GATE__SMP_MASK                                                                           0x00000004L
#define SIT_SUVD_CGC_GATE__SCM_MASK                                                                           0x00000008L
#define SIT_SUVD_CGC_GATE__SDB_MASK                                                                           0x00000010L
#define SIT_SUVD_CGC_GATE__SRE_H264_MASK                                                                      0x00000020L
#define SIT_SUVD_CGC_GATE__SRE_HEVC_MASK                                                                      0x00000040L
#define SIT_SUVD_CGC_GATE__SIT_H264_MASK                                                                      0x00000080L
#define SIT_SUVD_CGC_GATE__SIT_HEVC_MASK                                                                      0x00000100L
#define SIT_SUVD_CGC_GATE__SCM_H264_MASK                                                                      0x00000200L
#define SIT_SUVD_CGC_GATE__SCM_HEVC_MASK                                                                      0x00000400L
#define SIT_SUVD_CGC_GATE__SDB_H264_MASK                                                                      0x00000800L
#define SIT_SUVD_CGC_GATE__SDB_HEVC_MASK                                                                      0x00001000L
#define SIT_SUVD_CGC_GATE__SCLR_MASK                                                                          0x00002000L
#define SIT_SUVD_CGC_GATE__UVD_SC_MASK                                                                        0x00004000L
#define SIT_SUVD_CGC_GATE__ENT_MASK                                                                           0x00008000L
#define SIT_SUVD_CGC_GATE__IME_MASK                                                                           0x00010000L
#define SIT_SUVD_CGC_GATE__SIT_HEVC_DEC_MASK                                                                  0x00020000L
#define SIT_SUVD_CGC_GATE__SIT_HEVC_ENC_MASK                                                                  0x00040000L
#define SIT_SUVD_CGC_GATE__SITE_MASK                                                                          0x00080000L
#define SIT_SUVD_CGC_GATE__SRE_VP9_MASK                                                                       0x00100000L
#define SIT_SUVD_CGC_GATE__SCM_VP9_MASK                                                                       0x00200000L
#define SIT_SUVD_CGC_GATE__SIT_VP9_DEC_MASK                                                                   0x00400000L
#define SIT_SUVD_CGC_GATE__SDB_VP9_MASK                                                                       0x00800000L
#define SIT_SUVD_CGC_GATE__IME_HEVC_MASK                                                                      0x01000000L
#define SIT_SUVD_CGC_GATE__EFC_MASK                                                                           0x02000000L
#define SIT_SUVD_CGC_GATE__SAOE_MASK                                                                          0x04000000L
#define SIT_SUVD_CGC_GATE__SRE_AV1_MASK                                                                       0x08000000L
#define SIT_SUVD_CGC_GATE__FBC_PCLK_MASK                                                                      0x10000000L
#define SIT_SUVD_CGC_GATE__FBC_CCLK_MASK                                                                      0x20000000L
#define SIT_SUVD_CGC_GATE__SCM_AV1_MASK                                                                       0x40000000L
#define SIT_SUVD_CGC_GATE__SMPA_MASK                                                                          0x80000000L
//SMPA_SUVD_CGC_GATE
#define SMPA_SUVD_CGC_GATE__SRE__SHIFT                                                                        0x0
#define SMPA_SUVD_CGC_GATE__SIT__SHIFT                                                                        0x1
#define SMPA_SUVD_CGC_GATE__SMP__SHIFT                                                                        0x2
#define SMPA_SUVD_CGC_GATE__SCM__SHIFT                                                                        0x3
#define SMPA_SUVD_CGC_GATE__SDB__SHIFT                                                                        0x4
#define SMPA_SUVD_CGC_GATE__SRE_H264__SHIFT                                                                   0x5
#define SMPA_SUVD_CGC_GATE__SRE_HEVC__SHIFT                                                                   0x6
#define SMPA_SUVD_CGC_GATE__SIT_H264__SHIFT                                                                   0x7
#define SMPA_SUVD_CGC_GATE__SIT_HEVC__SHIFT                                                                   0x8
#define SMPA_SUVD_CGC_GATE__SCM_H264__SHIFT                                                                   0x9
#define SMPA_SUVD_CGC_GATE__SCM_HEVC__SHIFT                                                                   0xa
#define SMPA_SUVD_CGC_GATE__SDB_H264__SHIFT                                                                   0xb
#define SMPA_SUVD_CGC_GATE__SDB_HEVC__SHIFT                                                                   0xc
#define SMPA_SUVD_CGC_GATE__SCLR__SHIFT                                                                       0xd
#define SMPA_SUVD_CGC_GATE__UVD_SC__SHIFT                                                                     0xe
#define SMPA_SUVD_CGC_GATE__ENT__SHIFT                                                                        0xf
#define SMPA_SUVD_CGC_GATE__IME__SHIFT                                                                        0x10
#define SMPA_SUVD_CGC_GATE__SIT_HEVC_DEC__SHIFT                                                               0x11
#define SMPA_SUVD_CGC_GATE__SIT_HEVC_ENC__SHIFT                                                               0x12
#define SMPA_SUVD_CGC_GATE__SITE__SHIFT                                                                       0x13
#define SMPA_SUVD_CGC_GATE__SRE_VP9__SHIFT                                                                    0x14
#define SMPA_SUVD_CGC_GATE__SCM_VP9__SHIFT                                                                    0x15
#define SMPA_SUVD_CGC_GATE__SIT_VP9_DEC__SHIFT                                                                0x16
#define SMPA_SUVD_CGC_GATE__SDB_VP9__SHIFT                                                                    0x17
#define SMPA_SUVD_CGC_GATE__IME_HEVC__SHIFT                                                                   0x18
#define SMPA_SUVD_CGC_GATE__EFC__SHIFT                                                                        0x19
#define SMPA_SUVD_CGC_GATE__SAOE__SHIFT                                                                       0x1a
#define SMPA_SUVD_CGC_GATE__SRE_AV1__SHIFT                                                                    0x1b
#define SMPA_SUVD_CGC_GATE__FBC_PCLK__SHIFT                                                                   0x1c
#define SMPA_SUVD_CGC_GATE__FBC_CCLK__SHIFT                                                                   0x1d
#define SMPA_SUVD_CGC_GATE__SCM_AV1__SHIFT                                                                    0x1e
#define SMPA_SUVD_CGC_GATE__SMPA__SHIFT                                                                       0x1f
#define SMPA_SUVD_CGC_GATE__SRE_MASK                                                                          0x00000001L
#define SMPA_SUVD_CGC_GATE__SIT_MASK                                                                          0x00000002L
#define SMPA_SUVD_CGC_GATE__SMP_MASK                                                                          0x00000004L
#define SMPA_SUVD_CGC_GATE__SCM_MASK                                                                          0x00000008L
#define SMPA_SUVD_CGC_GATE__SDB_MASK                                                                          0x00000010L
#define SMPA_SUVD_CGC_GATE__SRE_H264_MASK                                                                     0x00000020L
#define SMPA_SUVD_CGC_GATE__SRE_HEVC_MASK                                                                     0x00000040L
#define SMPA_SUVD_CGC_GATE__SIT_H264_MASK                                                                     0x00000080L
#define SMPA_SUVD_CGC_GATE__SIT_HEVC_MASK                                                                     0x00000100L
#define SMPA_SUVD_CGC_GATE__SCM_H264_MASK                                                                     0x00000200L
#define SMPA_SUVD_CGC_GATE__SCM_HEVC_MASK                                                                     0x00000400L
#define SMPA_SUVD_CGC_GATE__SDB_H264_MASK                                                                     0x00000800L
#define SMPA_SUVD_CGC_GATE__SDB_HEVC_MASK                                                                     0x00001000L
#define SMPA_SUVD_CGC_GATE__SCLR_MASK                                                                         0x00002000L
#define SMPA_SUVD_CGC_GATE__UVD_SC_MASK                                                                       0x00004000L
#define SMPA_SUVD_CGC_GATE__ENT_MASK                                                                          0x00008000L
#define SMPA_SUVD_CGC_GATE__IME_MASK                                                                          0x00010000L
#define SMPA_SUVD_CGC_GATE__SIT_HEVC_DEC_MASK                                                                 0x00020000L
#define SMPA_SUVD_CGC_GATE__SIT_HEVC_ENC_MASK                                                                 0x00040000L
#define SMPA_SUVD_CGC_GATE__SITE_MASK                                                                         0x00080000L
#define SMPA_SUVD_CGC_GATE__SRE_VP9_MASK                                                                      0x00100000L
#define SMPA_SUVD_CGC_GATE__SCM_VP9_MASK                                                                      0x00200000L
#define SMPA_SUVD_CGC_GATE__SIT_VP9_DEC_MASK                                                                  0x00400000L
#define SMPA_SUVD_CGC_GATE__SDB_VP9_MASK                                                                      0x00800000L
#define SMPA_SUVD_CGC_GATE__IME_HEVC_MASK                                                                     0x01000000L
#define SMPA_SUVD_CGC_GATE__EFC_MASK                                                                          0x02000000L
#define SMPA_SUVD_CGC_GATE__SAOE_MASK                                                                         0x04000000L
#define SMPA_SUVD_CGC_GATE__SRE_AV1_MASK                                                                      0x08000000L
#define SMPA_SUVD_CGC_GATE__FBC_PCLK_MASK                                                                     0x10000000L
#define SMPA_SUVD_CGC_GATE__FBC_CCLK_MASK                                                                     0x20000000L
#define SMPA_SUVD_CGC_GATE__SCM_AV1_MASK                                                                      0x40000000L
#define SMPA_SUVD_CGC_GATE__SMPA_MASK                                                                         0x80000000L
//SMP_SUVD_CGC_GATE
#define SMP_SUVD_CGC_GATE__SRE__SHIFT                                                                         0x0
#define SMP_SUVD_CGC_GATE__SIT__SHIFT                                                                         0x1
#define SMP_SUVD_CGC_GATE__SMP__SHIFT                                                                         0x2
#define SMP_SUVD_CGC_GATE__SCM__SHIFT                                                                         0x3
#define SMP_SUVD_CGC_GATE__SDB__SHIFT                                                                         0x4
#define SMP_SUVD_CGC_GATE__SRE_H264__SHIFT                                                                    0x5
#define SMP_SUVD_CGC_GATE__SRE_HEVC__SHIFT                                                                    0x6
#define SMP_SUVD_CGC_GATE__SIT_H264__SHIFT                                                                    0x7
#define SMP_SUVD_CGC_GATE__SIT_HEVC__SHIFT                                                                    0x8
#define SMP_SUVD_CGC_GATE__SCM_H264__SHIFT                                                                    0x9
#define SMP_SUVD_CGC_GATE__SCM_HEVC__SHIFT                                                                    0xa
#define SMP_SUVD_CGC_GATE__SDB_H264__SHIFT                                                                    0xb
#define SMP_SUVD_CGC_GATE__SDB_HEVC__SHIFT                                                                    0xc
#define SMP_SUVD_CGC_GATE__SCLR__SHIFT                                                                        0xd
#define SMP_SUVD_CGC_GATE__UVD_SC__SHIFT                                                                      0xe
#define SMP_SUVD_CGC_GATE__ENT__SHIFT                                                                         0xf
#define SMP_SUVD_CGC_GATE__IME__SHIFT                                                                         0x10
#define SMP_SUVD_CGC_GATE__SIT_HEVC_DEC__SHIFT                                                                0x11
#define SMP_SUVD_CGC_GATE__SIT_HEVC_ENC__SHIFT                                                                0x12
#define SMP_SUVD_CGC_GATE__SITE__SHIFT                                                                        0x13
#define SMP_SUVD_CGC_GATE__SRE_VP9__SHIFT                                                                     0x14
#define SMP_SUVD_CGC_GATE__SCM_VP9__SHIFT                                                                     0x15
#define SMP_SUVD_CGC_GATE__SIT_VP9_DEC__SHIFT                                                                 0x16
#define SMP_SUVD_CGC_GATE__SDB_VP9__SHIFT                                                                     0x17
#define SMP_SUVD_CGC_GATE__IME_HEVC__SHIFT                                                                    0x18
#define SMP_SUVD_CGC_GATE__EFC__SHIFT                                                                         0x19
#define SMP_SUVD_CGC_GATE__SAOE__SHIFT                                                                        0x1a
#define SMP_SUVD_CGC_GATE__SRE_AV1__SHIFT                                                                     0x1b
#define SMP_SUVD_CGC_GATE__FBC_PCLK__SHIFT                                                                    0x1c
#define SMP_SUVD_CGC_GATE__FBC_CCLK__SHIFT                                                                    0x1d
#define SMP_SUVD_CGC_GATE__SCM_AV1__SHIFT                                                                     0x1e
#define SMP_SUVD_CGC_GATE__SMPA__SHIFT                                                                        0x1f
#define SMP_SUVD_CGC_GATE__SRE_MASK                                                                           0x00000001L
#define SMP_SUVD_CGC_GATE__SIT_MASK                                                                           0x00000002L
#define SMP_SUVD_CGC_GATE__SMP_MASK                                                                           0x00000004L
#define SMP_SUVD_CGC_GATE__SCM_MASK                                                                           0x00000008L
#define SMP_SUVD_CGC_GATE__SDB_MASK                                                                           0x00000010L
#define SMP_SUVD_CGC_GATE__SRE_H264_MASK                                                                      0x00000020L
#define SMP_SUVD_CGC_GATE__SRE_HEVC_MASK                                                                      0x00000040L
#define SMP_SUVD_CGC_GATE__SIT_H264_MASK                                                                      0x00000080L
#define SMP_SUVD_CGC_GATE__SIT_HEVC_MASK                                                                      0x00000100L
#define SMP_SUVD_CGC_GATE__SCM_H264_MASK                                                                      0x00000200L
#define SMP_SUVD_CGC_GATE__SCM_HEVC_MASK                                                                      0x00000400L
#define SMP_SUVD_CGC_GATE__SDB_H264_MASK                                                                      0x00000800L
#define SMP_SUVD_CGC_GATE__SDB_HEVC_MASK                                                                      0x00001000L
#define SMP_SUVD_CGC_GATE__SCLR_MASK                                                                          0x00002000L
#define SMP_SUVD_CGC_GATE__UVD_SC_MASK                                                                        0x00004000L
#define SMP_SUVD_CGC_GATE__ENT_MASK                                                                           0x00008000L
#define SMP_SUVD_CGC_GATE__IME_MASK                                                                           0x00010000L
#define SMP_SUVD_CGC_GATE__SIT_HEVC_DEC_MASK                                                                  0x00020000L
#define SMP_SUVD_CGC_GATE__SIT_HEVC_ENC_MASK                                                                  0x00040000L
#define SMP_SUVD_CGC_GATE__SITE_MASK                                                                          0x00080000L
#define SMP_SUVD_CGC_GATE__SRE_VP9_MASK                                                                       0x00100000L
#define SMP_SUVD_CGC_GATE__SCM_VP9_MASK                                                                       0x00200000L
#define SMP_SUVD_CGC_GATE__SIT_VP9_DEC_MASK                                                                   0x00400000L
#define SMP_SUVD_CGC_GATE__SDB_VP9_MASK                                                                       0x00800000L
#define SMP_SUVD_CGC_GATE__IME_HEVC_MASK                                                                      0x01000000L
#define SMP_SUVD_CGC_GATE__EFC_MASK                                                                           0x02000000L
#define SMP_SUVD_CGC_GATE__SAOE_MASK                                                                          0x04000000L
#define SMP_SUVD_CGC_GATE__SRE_AV1_MASK                                                                       0x08000000L
#define SMP_SUVD_CGC_GATE__FBC_PCLK_MASK                                                                      0x10000000L
#define SMP_SUVD_CGC_GATE__FBC_CCLK_MASK                                                                      0x20000000L
#define SMP_SUVD_CGC_GATE__SCM_AV1_MASK                                                                       0x40000000L
#define SMP_SUVD_CGC_GATE__SMPA_MASK                                                                          0x80000000L
//SRE_SUVD_CGC_GATE
#define SRE_SUVD_CGC_GATE__SRE__SHIFT                                                                         0x0
#define SRE_SUVD_CGC_GATE__SIT__SHIFT                                                                         0x1
#define SRE_SUVD_CGC_GATE__SMP__SHIFT                                                                         0x2
#define SRE_SUVD_CGC_GATE__SCM__SHIFT                                                                         0x3
#define SRE_SUVD_CGC_GATE__SDB__SHIFT                                                                         0x4
#define SRE_SUVD_CGC_GATE__SRE_H264__SHIFT                                                                    0x5
#define SRE_SUVD_CGC_GATE__SRE_HEVC__SHIFT                                                                    0x6
#define SRE_SUVD_CGC_GATE__SIT_H264__SHIFT                                                                    0x7
#define SRE_SUVD_CGC_GATE__SIT_HEVC__SHIFT                                                                    0x8
#define SRE_SUVD_CGC_GATE__SCM_H264__SHIFT                                                                    0x9
#define SRE_SUVD_CGC_GATE__SCM_HEVC__SHIFT                                                                    0xa
#define SRE_SUVD_CGC_GATE__SDB_H264__SHIFT                                                                    0xb
#define SRE_SUVD_CGC_GATE__SDB_HEVC__SHIFT                                                                    0xc
#define SRE_SUVD_CGC_GATE__SCLR__SHIFT                                                                        0xd
#define SRE_SUVD_CGC_GATE__UVD_SC__SHIFT                                                                      0xe
#define SRE_SUVD_CGC_GATE__ENT__SHIFT                                                                         0xf
#define SRE_SUVD_CGC_GATE__IME__SHIFT                                                                         0x10
#define SRE_SUVD_CGC_GATE__SIT_HEVC_DEC__SHIFT                                                                0x11
#define SRE_SUVD_CGC_GATE__SIT_HEVC_ENC__SHIFT                                                                0x12
#define SRE_SUVD_CGC_GATE__SITE__SHIFT                                                                        0x13
#define SRE_SUVD_CGC_GATE__SRE_VP9__SHIFT                                                                     0x14
#define SRE_SUVD_CGC_GATE__SCM_VP9__SHIFT                                                                     0x15
#define SRE_SUVD_CGC_GATE__SIT_VP9_DEC__SHIFT                                                                 0x16
#define SRE_SUVD_CGC_GATE__SDB_VP9__SHIFT                                                                     0x17
#define SRE_SUVD_CGC_GATE__IME_HEVC__SHIFT                                                                    0x18
#define SRE_SUVD_CGC_GATE__EFC__SHIFT                                                                         0x19
#define SRE_SUVD_CGC_GATE__SAOE__SHIFT                                                                        0x1a
#define SRE_SUVD_CGC_GATE__SRE_AV1__SHIFT                                                                     0x1b
#define SRE_SUVD_CGC_GATE__FBC_PCLK__SHIFT                                                                    0x1c
#define SRE_SUVD_CGC_GATE__FBC_CCLK__SHIFT                                                                    0x1d
#define SRE_SUVD_CGC_GATE__SCM_AV1__SHIFT                                                                     0x1e
#define SRE_SUVD_CGC_GATE__SMPA__SHIFT                                                                        0x1f
#define SRE_SUVD_CGC_GATE__SRE_MASK                                                                           0x00000001L
#define SRE_SUVD_CGC_GATE__SIT_MASK                                                                           0x00000002L
#define SRE_SUVD_CGC_GATE__SMP_MASK                                                                           0x00000004L
#define SRE_SUVD_CGC_GATE__SCM_MASK                                                                           0x00000008L
#define SRE_SUVD_CGC_GATE__SDB_MASK                                                                           0x00000010L
#define SRE_SUVD_CGC_GATE__SRE_H264_MASK                                                                      0x00000020L
#define SRE_SUVD_CGC_GATE__SRE_HEVC_MASK                                                                      0x00000040L
#define SRE_SUVD_CGC_GATE__SIT_H264_MASK                                                                      0x00000080L
#define SRE_SUVD_CGC_GATE__SIT_HEVC_MASK                                                                      0x00000100L
#define SRE_SUVD_CGC_GATE__SCM_H264_MASK                                                                      0x00000200L
#define SRE_SUVD_CGC_GATE__SCM_HEVC_MASK                                                                      0x00000400L
#define SRE_SUVD_CGC_GATE__SDB_H264_MASK                                                                      0x00000800L
#define SRE_SUVD_CGC_GATE__SDB_HEVC_MASK                                                                      0x00001000L
#define SRE_SUVD_CGC_GATE__SCLR_MASK                                                                          0x00002000L
#define SRE_SUVD_CGC_GATE__UVD_SC_MASK                                                                        0x00004000L
#define SRE_SUVD_CGC_GATE__ENT_MASK                                                                           0x00008000L
#define SRE_SUVD_CGC_GATE__IME_MASK                                                                           0x00010000L
#define SRE_SUVD_CGC_GATE__SIT_HEVC_DEC_MASK                                                                  0x00020000L
#define SRE_SUVD_CGC_GATE__SIT_HEVC_ENC_MASK                                                                  0x00040000L
#define SRE_SUVD_CGC_GATE__SITE_MASK                                                                          0x00080000L
#define SRE_SUVD_CGC_GATE__SRE_VP9_MASK                                                                       0x00100000L
#define SRE_SUVD_CGC_GATE__SCM_VP9_MASK                                                                       0x00200000L
#define SRE_SUVD_CGC_GATE__SIT_VP9_DEC_MASK                                                                   0x00400000L
#define SRE_SUVD_CGC_GATE__SDB_VP9_MASK                                                                       0x00800000L
#define SRE_SUVD_CGC_GATE__IME_HEVC_MASK                                                                      0x01000000L
#define SRE_SUVD_CGC_GATE__EFC_MASK                                                                           0x02000000L
#define SRE_SUVD_CGC_GATE__SAOE_MASK                                                                          0x04000000L
#define SRE_SUVD_CGC_GATE__SRE_AV1_MASK                                                                       0x08000000L
#define SRE_SUVD_CGC_GATE__FBC_PCLK_MASK                                                                      0x10000000L
#define SRE_SUVD_CGC_GATE__FBC_CCLK_MASK                                                                      0x20000000L
#define SRE_SUVD_CGC_GATE__SCM_AV1_MASK                                                                       0x40000000L
#define SRE_SUVD_CGC_GATE__SMPA_MASK                                                                          0x80000000L
//UVD_MPBE0_SUVD_CGC_GATE
#define UVD_MPBE0_SUVD_CGC_GATE__SRE__SHIFT                                                                   0x0
#define UVD_MPBE0_SUVD_CGC_GATE__SIT__SHIFT                                                                   0x1
#define UVD_MPBE0_SUVD_CGC_GATE__SMP__SHIFT                                                                   0x2
#define UVD_MPBE0_SUVD_CGC_GATE__SCM__SHIFT                                                                   0x3
#define UVD_MPBE0_SUVD_CGC_GATE__SDB__SHIFT                                                                   0x4
#define UVD_MPBE0_SUVD_CGC_GATE__SRE_H264__SHIFT                                                              0x5
#define UVD_MPBE0_SUVD_CGC_GATE__SRE_HEVC__SHIFT                                                              0x6
#define UVD_MPBE0_SUVD_CGC_GATE__SIT_H264__SHIFT                                                              0x7
#define UVD_MPBE0_SUVD_CGC_GATE__SIT_HEVC__SHIFT                                                              0x8
#define UVD_MPBE0_SUVD_CGC_GATE__SCM_H264__SHIFT                                                              0x9
#define UVD_MPBE0_SUVD_CGC_GATE__SCM_HEVC__SHIFT                                                              0xa
#define UVD_MPBE0_SUVD_CGC_GATE__SDB_H264__SHIFT                                                              0xb
#define UVD_MPBE0_SUVD_CGC_GATE__SDB_HEVC__SHIFT                                                              0xc
#define UVD_MPBE0_SUVD_CGC_GATE__SCLR__SHIFT                                                                  0xd
#define UVD_MPBE0_SUVD_CGC_GATE__UVD_SC__SHIFT                                                                0xe
#define UVD_MPBE0_SUVD_CGC_GATE__ENT__SHIFT                                                                   0xf
#define UVD_MPBE0_SUVD_CGC_GATE__IME__SHIFT                                                                   0x10
#define UVD_MPBE0_SUVD_CGC_GATE__SIT_HEVC_DEC__SHIFT                                                          0x11
#define UVD_MPBE0_SUVD_CGC_GATE__SIT_HEVC_ENC__SHIFT                                                          0x12
#define UVD_MPBE0_SUVD_CGC_GATE__SITE__SHIFT                                                                  0x13
#define UVD_MPBE0_SUVD_CGC_GATE__SRE_VP9__SHIFT                                                               0x14
#define UVD_MPBE0_SUVD_CGC_GATE__SCM_VP9__SHIFT                                                               0x15
#define UVD_MPBE0_SUVD_CGC_GATE__SIT_VP9_DEC__SHIFT                                                           0x16
#define UVD_MPBE0_SUVD_CGC_GATE__SDB_VP9__SHIFT                                                               0x17
#define UVD_MPBE0_SUVD_CGC_GATE__IME_HEVC__SHIFT                                                              0x18
#define UVD_MPBE0_SUVD_CGC_GATE__EFC__SHIFT                                                                   0x19
#define UVD_MPBE0_SUVD_CGC_GATE__SAOE__SHIFT                                                                  0x1a
#define UVD_MPBE0_SUVD_CGC_GATE__SRE_AV1__SHIFT                                                               0x1b
#define UVD_MPBE0_SUVD_CGC_GATE__FBC_PCLK__SHIFT                                                              0x1c
#define UVD_MPBE0_SUVD_CGC_GATE__FBC_CCLK__SHIFT                                                              0x1d
#define UVD_MPBE0_SUVD_CGC_GATE__SCM_AV1__SHIFT                                                               0x1e
#define UVD_MPBE0_SUVD_CGC_GATE__SMPA__SHIFT                                                                  0x1f
#define UVD_MPBE0_SUVD_CGC_GATE__SRE_MASK                                                                     0x00000001L
#define UVD_MPBE0_SUVD_CGC_GATE__SIT_MASK                                                                     0x00000002L
#define UVD_MPBE0_SUVD_CGC_GATE__SMP_MASK                                                                     0x00000004L
#define UVD_MPBE0_SUVD_CGC_GATE__SCM_MASK                                                                     0x00000008L
#define UVD_MPBE0_SUVD_CGC_GATE__SDB_MASK                                                                     0x00000010L
#define UVD_MPBE0_SUVD_CGC_GATE__SRE_H264_MASK                                                                0x00000020L
#define UVD_MPBE0_SUVD_CGC_GATE__SRE_HEVC_MASK                                                                0x00000040L
#define UVD_MPBE0_SUVD_CGC_GATE__SIT_H264_MASK                                                                0x00000080L
#define UVD_MPBE0_SUVD_CGC_GATE__SIT_HEVC_MASK                                                                0x00000100L
#define UVD_MPBE0_SUVD_CGC_GATE__SCM_H264_MASK                                                                0x00000200L
#define UVD_MPBE0_SUVD_CGC_GATE__SCM_HEVC_MASK                                                                0x00000400L
#define UVD_MPBE0_SUVD_CGC_GATE__SDB_H264_MASK                                                                0x00000800L
#define UVD_MPBE0_SUVD_CGC_GATE__SDB_HEVC_MASK                                                                0x00001000L
#define UVD_MPBE0_SUVD_CGC_GATE__SCLR_MASK                                                                    0x00002000L
#define UVD_MPBE0_SUVD_CGC_GATE__UVD_SC_MASK                                                                  0x00004000L
#define UVD_MPBE0_SUVD_CGC_GATE__ENT_MASK                                                                     0x00008000L
#define UVD_MPBE0_SUVD_CGC_GATE__IME_MASK                                                                     0x00010000L
#define UVD_MPBE0_SUVD_CGC_GATE__SIT_HEVC_DEC_MASK                                                            0x00020000L
#define UVD_MPBE0_SUVD_CGC_GATE__SIT_HEVC_ENC_MASK                                                            0x00040000L
#define UVD_MPBE0_SUVD_CGC_GATE__SITE_MASK                                                                    0x00080000L
#define UVD_MPBE0_SUVD_CGC_GATE__SRE_VP9_MASK                                                                 0x00100000L
#define UVD_MPBE0_SUVD_CGC_GATE__SCM_VP9_MASK                                                                 0x00200000L
#define UVD_MPBE0_SUVD_CGC_GATE__SIT_VP9_DEC_MASK                                                             0x00400000L
#define UVD_MPBE0_SUVD_CGC_GATE__SDB_VP9_MASK                                                                 0x00800000L
#define UVD_MPBE0_SUVD_CGC_GATE__IME_HEVC_MASK                                                                0x01000000L
#define UVD_MPBE0_SUVD_CGC_GATE__EFC_MASK                                                                     0x02000000L
#define UVD_MPBE0_SUVD_CGC_GATE__SAOE_MASK                                                                    0x04000000L
#define UVD_MPBE0_SUVD_CGC_GATE__SRE_AV1_MASK                                                                 0x08000000L
#define UVD_MPBE0_SUVD_CGC_GATE__FBC_PCLK_MASK                                                                0x10000000L
#define UVD_MPBE0_SUVD_CGC_GATE__FBC_CCLK_MASK                                                                0x20000000L
#define UVD_MPBE0_SUVD_CGC_GATE__SCM_AV1_MASK                                                                 0x40000000L
#define UVD_MPBE0_SUVD_CGC_GATE__SMPA_MASK                                                                    0x80000000L
//UVD_MPBE1_SUVD_CGC_GATE
#define UVD_MPBE1_SUVD_CGC_GATE__SRE__SHIFT                                                                   0x0
#define UVD_MPBE1_SUVD_CGC_GATE__SIT__SHIFT                                                                   0x1
#define UVD_MPBE1_SUVD_CGC_GATE__SMP__SHIFT                                                                   0x2
#define UVD_MPBE1_SUVD_CGC_GATE__SCM__SHIFT                                                                   0x3
#define UVD_MPBE1_SUVD_CGC_GATE__SDB__SHIFT                                                                   0x4
#define UVD_MPBE1_SUVD_CGC_GATE__SRE_H264__SHIFT                                                              0x5
#define UVD_MPBE1_SUVD_CGC_GATE__SRE_HEVC__SHIFT                                                              0x6
#define UVD_MPBE1_SUVD_CGC_GATE__SIT_H264__SHIFT                                                              0x7
#define UVD_MPBE1_SUVD_CGC_GATE__SIT_HEVC__SHIFT                                                              0x8
#define UVD_MPBE1_SUVD_CGC_GATE__SCM_H264__SHIFT                                                              0x9
#define UVD_MPBE1_SUVD_CGC_GATE__SCM_HEVC__SHIFT                                                              0xa
#define UVD_MPBE1_SUVD_CGC_GATE__SDB_H264__SHIFT                                                              0xb
#define UVD_MPBE1_SUVD_CGC_GATE__SDB_HEVC__SHIFT                                                              0xc
#define UVD_MPBE1_SUVD_CGC_GATE__SCLR__SHIFT                                                                  0xd
#define UVD_MPBE1_SUVD_CGC_GATE__UVD_SC__SHIFT                                                                0xe
#define UVD_MPBE1_SUVD_CGC_GATE__ENT__SHIFT                                                                   0xf
#define UVD_MPBE1_SUVD_CGC_GATE__IME__SHIFT                                                                   0x10
#define UVD_MPBE1_SUVD_CGC_GATE__SIT_HEVC_DEC__SHIFT                                                          0x11
#define UVD_MPBE1_SUVD_CGC_GATE__SIT_HEVC_ENC__SHIFT                                                          0x12
#define UVD_MPBE1_SUVD_CGC_GATE__SITE__SHIFT                                                                  0x13
#define UVD_MPBE1_SUVD_CGC_GATE__SRE_VP9__SHIFT                                                               0x14
#define UVD_MPBE1_SUVD_CGC_GATE__SCM_VP9__SHIFT                                                               0x15
#define UVD_MPBE1_SUVD_CGC_GATE__SIT_VP9_DEC__SHIFT                                                           0x16
#define UVD_MPBE1_SUVD_CGC_GATE__SDB_VP9__SHIFT                                                               0x17
#define UVD_MPBE1_SUVD_CGC_GATE__IME_HEVC__SHIFT                                                              0x18
#define UVD_MPBE1_SUVD_CGC_GATE__EFC__SHIFT                                                                   0x19
#define UVD_MPBE1_SUVD_CGC_GATE__SAOE__SHIFT                                                                  0x1a
#define UVD_MPBE1_SUVD_CGC_GATE__SRE_AV1__SHIFT                                                               0x1b
#define UVD_MPBE1_SUVD_CGC_GATE__FBC_PCLK__SHIFT                                                              0x1c
#define UVD_MPBE1_SUVD_CGC_GATE__FBC_CCLK__SHIFT                                                              0x1d
#define UVD_MPBE1_SUVD_CGC_GATE__SCM_AV1__SHIFT                                                               0x1e
#define UVD_MPBE1_SUVD_CGC_GATE__SMPA__SHIFT                                                                  0x1f
#define UVD_MPBE1_SUVD_CGC_GATE__SRE_MASK                                                                     0x00000001L
#define UVD_MPBE1_SUVD_CGC_GATE__SIT_MASK                                                                     0x00000002L
#define UVD_MPBE1_SUVD_CGC_GATE__SMP_MASK                                                                     0x00000004L
#define UVD_MPBE1_SUVD_CGC_GATE__SCM_MASK                                                                     0x00000008L
#define UVD_MPBE1_SUVD_CGC_GATE__SDB_MASK                                                                     0x00000010L
#define UVD_MPBE1_SUVD_CGC_GATE__SRE_H264_MASK                                                                0x00000020L
#define UVD_MPBE1_SUVD_CGC_GATE__SRE_HEVC_MASK                                                                0x00000040L
#define UVD_MPBE1_SUVD_CGC_GATE__SIT_H264_MASK                                                                0x00000080L
#define UVD_MPBE1_SUVD_CGC_GATE__SIT_HEVC_MASK                                                                0x00000100L
#define UVD_MPBE1_SUVD_CGC_GATE__SCM_H264_MASK                                                                0x00000200L
#define UVD_MPBE1_SUVD_CGC_GATE__SCM_HEVC_MASK                                                                0x00000400L
#define UVD_MPBE1_SUVD_CGC_GATE__SDB_H264_MASK                                                                0x00000800L
#define UVD_MPBE1_SUVD_CGC_GATE__SDB_HEVC_MASK                                                                0x00001000L
#define UVD_MPBE1_SUVD_CGC_GATE__SCLR_MASK                                                                    0x00002000L
#define UVD_MPBE1_SUVD_CGC_GATE__UVD_SC_MASK                                                                  0x00004000L
#define UVD_MPBE1_SUVD_CGC_GATE__ENT_MASK                                                                     0x00008000L
#define UVD_MPBE1_SUVD_CGC_GATE__IME_MASK                                                                     0x00010000L
#define UVD_MPBE1_SUVD_CGC_GATE__SIT_HEVC_DEC_MASK                                                            0x00020000L
#define UVD_MPBE1_SUVD_CGC_GATE__SIT_HEVC_ENC_MASK                                                            0x00040000L
#define UVD_MPBE1_SUVD_CGC_GATE__SITE_MASK                                                                    0x00080000L
#define UVD_MPBE1_SUVD_CGC_GATE__SRE_VP9_MASK                                                                 0x00100000L
#define UVD_MPBE1_SUVD_CGC_GATE__SCM_VP9_MASK                                                                 0x00200000L
#define UVD_MPBE1_SUVD_CGC_GATE__SIT_VP9_DEC_MASK                                                             0x00400000L
#define UVD_MPBE1_SUVD_CGC_GATE__SDB_VP9_MASK                                                                 0x00800000L
#define UVD_MPBE1_SUVD_CGC_GATE__IME_HEVC_MASK                                                                0x01000000L
#define UVD_MPBE1_SUVD_CGC_GATE__EFC_MASK                                                                     0x02000000L
#define UVD_MPBE1_SUVD_CGC_GATE__SAOE_MASK                                                                    0x04000000L
#define UVD_MPBE1_SUVD_CGC_GATE__SRE_AV1_MASK                                                                 0x08000000L
#define UVD_MPBE1_SUVD_CGC_GATE__FBC_PCLK_MASK                                                                0x10000000L
#define UVD_MPBE1_SUVD_CGC_GATE__FBC_CCLK_MASK                                                                0x20000000L
#define UVD_MPBE1_SUVD_CGC_GATE__SCM_AV1_MASK                                                                 0x40000000L
#define UVD_MPBE1_SUVD_CGC_GATE__SMPA_MASK                                                                    0x80000000L
//UVD_SUVD_CGC_GATE
#define UVD_SUVD_CGC_GATE__SRE__SHIFT                                                                         0x0
#define UVD_SUVD_CGC_GATE__SIT__SHIFT                                                                         0x1
#define UVD_SUVD_CGC_GATE__SMP__SHIFT                                                                         0x2
#define UVD_SUVD_CGC_GATE__SCM__SHIFT                                                                         0x3
#define UVD_SUVD_CGC_GATE__SDB__SHIFT                                                                         0x4
#define UVD_SUVD_CGC_GATE__SRE_H264__SHIFT                                                                    0x5
#define UVD_SUVD_CGC_GATE__SRE_HEVC__SHIFT                                                                    0x6
#define UVD_SUVD_CGC_GATE__SIT_H264__SHIFT                                                                    0x7
#define UVD_SUVD_CGC_GATE__SIT_HEVC__SHIFT                                                                    0x8
#define UVD_SUVD_CGC_GATE__SCM_H264__SHIFT                                                                    0x9
#define UVD_SUVD_CGC_GATE__SCM_HEVC__SHIFT                                                                    0xa
#define UVD_SUVD_CGC_GATE__SDB_H264__SHIFT                                                                    0xb
#define UVD_SUVD_CGC_GATE__SDB_HEVC__SHIFT                                                                    0xc
#define UVD_SUVD_CGC_GATE__SCLR__SHIFT                                                                        0xd
#define UVD_SUVD_CGC_GATE__UVD_SC__SHIFT                                                                      0xe
#define UVD_SUVD_CGC_GATE__ENT__SHIFT                                                                         0xf
#define UVD_SUVD_CGC_GATE__IME__SHIFT                                                                         0x10
#define UVD_SUVD_CGC_GATE__SIT_HEVC_DEC__SHIFT                                                                0x11
#define UVD_SUVD_CGC_GATE__SIT_HEVC_ENC__SHIFT                                                                0x12
#define UVD_SUVD_CGC_GATE__SITE__SHIFT                                                                        0x13
#define UVD_SUVD_CGC_GATE__SRE_VP9__SHIFT                                                                     0x14
#define UVD_SUVD_CGC_GATE__SCM_VP9__SHIFT                                                                     0x15
#define UVD_SUVD_CGC_GATE__SIT_VP9_DEC__SHIFT                                                                 0x16
#define UVD_SUVD_CGC_GATE__SDB_VP9__SHIFT                                                                     0x17
#define UVD_SUVD_CGC_GATE__IME_HEVC__SHIFT                                                                    0x18
#define UVD_SUVD_CGC_GATE__EFC__SHIFT                                                                         0x19
#define UVD_SUVD_CGC_GATE__SAOE__SHIFT                                                                        0x1a
#define UVD_SUVD_CGC_GATE__SRE_AV1__SHIFT                                                                     0x1b
#define UVD_SUVD_CGC_GATE__FBC_PCLK__SHIFT                                                                    0x1c
#define UVD_SUVD_CGC_GATE__FBC_CCLK__SHIFT                                                                    0x1d
#define UVD_SUVD_CGC_GATE__SCM_AV1__SHIFT                                                                     0x1e
#define UVD_SUVD_CGC_GATE__SMPA__SHIFT                                                                        0x1f
#define UVD_SUVD_CGC_GATE__SRE_MASK                                                                           0x00000001L
#define UVD_SUVD_CGC_GATE__SIT_MASK                                                                           0x00000002L
#define UVD_SUVD_CGC_GATE__SMP_MASK                                                                           0x00000004L
#define UVD_SUVD_CGC_GATE__SCM_MASK                                                                           0x00000008L
#define UVD_SUVD_CGC_GATE__SDB_MASK                                                                           0x00000010L
#define UVD_SUVD_CGC_GATE__SRE_H264_MASK                                                                      0x00000020L
#define UVD_SUVD_CGC_GATE__SRE_HEVC_MASK                                                                      0x00000040L
#define UVD_SUVD_CGC_GATE__SIT_H264_MASK                                                                      0x00000080L
#define UVD_SUVD_CGC_GATE__SIT_HEVC_MASK                                                                      0x00000100L
#define UVD_SUVD_CGC_GATE__SCM_H264_MASK                                                                      0x00000200L
#define UVD_SUVD_CGC_GATE__SCM_HEVC_MASK                                                                      0x00000400L
#define UVD_SUVD_CGC_GATE__SDB_H264_MASK                                                                      0x00000800L
#define UVD_SUVD_CGC_GATE__SDB_HEVC_MASK                                                                      0x00001000L
#define UVD_SUVD_CGC_GATE__SCLR_MASK                                                                          0x00002000L
#define UVD_SUVD_CGC_GATE__UVD_SC_MASK                                                                        0x00004000L
#define UVD_SUVD_CGC_GATE__ENT_MASK                                                                           0x00008000L
#define UVD_SUVD_CGC_GATE__IME_MASK                                                                           0x00010000L
#define UVD_SUVD_CGC_GATE__SIT_HEVC_DEC_MASK                                                                  0x00020000L
#define UVD_SUVD_CGC_GATE__SIT_HEVC_ENC_MASK                                                                  0x00040000L
#define UVD_SUVD_CGC_GATE__SITE_MASK                                                                          0x00080000L
#define UVD_SUVD_CGC_GATE__SRE_VP9_MASK                                                                       0x00100000L
#define UVD_SUVD_CGC_GATE__SCM_VP9_MASK                                                                       0x00200000L
#define UVD_SUVD_CGC_GATE__SIT_VP9_DEC_MASK                                                                   0x00400000L
#define UVD_SUVD_CGC_GATE__SDB_VP9_MASK                                                                       0x00800000L
#define UVD_SUVD_CGC_GATE__IME_HEVC_MASK                                                                      0x01000000L
#define UVD_SUVD_CGC_GATE__EFC_MASK                                                                           0x02000000L
#define UVD_SUVD_CGC_GATE__SAOE_MASK                                                                          0x04000000L
#define UVD_SUVD_CGC_GATE__SRE_AV1_MASK                                                                       0x08000000L
#define UVD_SUVD_CGC_GATE__FBC_PCLK_MASK                                                                      0x10000000L
#define UVD_SUVD_CGC_GATE__FBC_CCLK_MASK                                                                      0x20000000L
#define UVD_SUVD_CGC_GATE__SCM_AV1_MASK                                                                       0x40000000L
#define UVD_SUVD_CGC_GATE__SMPA_MASK                                                                          0x80000000L
//AVM_SUVD_CGC_GATE2
#define AVM_SUVD_CGC_GATE2__MPBE0__SHIFT                                                                      0x0
#define AVM_SUVD_CGC_GATE2__MPBE1__SHIFT                                                                      0x1
#define AVM_SUVD_CGC_GATE2__SIT_AV1__SHIFT                                                                    0x2
#define AVM_SUVD_CGC_GATE2__SDB_AV1__SHIFT                                                                    0x3
#define AVM_SUVD_CGC_GATE2__MPC1__SHIFT                                                                       0x4
#define AVM_SUVD_CGC_GATE2__SRE_AV1_ENC__SHIFT                                                                0x5
#define AVM_SUVD_CGC_GATE2__CDEFE__SHIFT                                                                      0x6
#define AVM_SUVD_CGC_GATE2__AVM_0__SHIFT                                                                      0x7
#define AVM_SUVD_CGC_GATE2__AVM_1__SHIFT                                                                      0x8
#define AVM_SUVD_CGC_GATE2__SIT_NXT_CMN__SHIFT                                                                0x9
#define AVM_SUVD_CGC_GATE2__SIT_NXT_DEC__SHIFT                                                                0xa
#define AVM_SUVD_CGC_GATE2__SIT_NXT_ENC__SHIFT                                                                0xb
#define AVM_SUVD_CGC_GATE2__MPBE0_MASK                                                                        0x00000001L
#define AVM_SUVD_CGC_GATE2__MPBE1_MASK                                                                        0x00000002L
#define AVM_SUVD_CGC_GATE2__SIT_AV1_MASK                                                                      0x00000004L
#define AVM_SUVD_CGC_GATE2__SDB_AV1_MASK                                                                      0x00000008L
#define AVM_SUVD_CGC_GATE2__MPC1_MASK                                                                         0x00000010L
#define AVM_SUVD_CGC_GATE2__SRE_AV1_ENC_MASK                                                                  0x00000020L
#define AVM_SUVD_CGC_GATE2__CDEFE_MASK                                                                        0x00000040L
#define AVM_SUVD_CGC_GATE2__AVM_0_MASK                                                                        0x00000080L
#define AVM_SUVD_CGC_GATE2__AVM_1_MASK                                                                        0x00000100L
#define AVM_SUVD_CGC_GATE2__SIT_NXT_CMN_MASK                                                                  0x00000200L
#define AVM_SUVD_CGC_GATE2__SIT_NXT_DEC_MASK                                                                  0x00000400L
#define AVM_SUVD_CGC_GATE2__SIT_NXT_ENC_MASK                                                                  0x00000800L
//CDEFE_SUVD_CGC_GATE2
#define CDEFE_SUVD_CGC_GATE2__MPBE0__SHIFT                                                                    0x0
#define CDEFE_SUVD_CGC_GATE2__MPBE1__SHIFT                                                                    0x1
#define CDEFE_SUVD_CGC_GATE2__SIT_AV1__SHIFT                                                                  0x2
#define CDEFE_SUVD_CGC_GATE2__SDB_AV1__SHIFT                                                                  0x3
#define CDEFE_SUVD_CGC_GATE2__MPC1__SHIFT                                                                     0x4
#define CDEFE_SUVD_CGC_GATE2__SRE_AV1_ENC__SHIFT                                                              0x5
#define CDEFE_SUVD_CGC_GATE2__CDEFE__SHIFT                                                                    0x6
#define CDEFE_SUVD_CGC_GATE2__AVM_0__SHIFT                                                                    0x7
#define CDEFE_SUVD_CGC_GATE2__AVM_1__SHIFT                                                                    0x8
#define CDEFE_SUVD_CGC_GATE2__SIT_NXT_CMN__SHIFT                                                              0x9
#define CDEFE_SUVD_CGC_GATE2__SIT_NXT_DEC__SHIFT                                                              0xa
#define CDEFE_SUVD_CGC_GATE2__SIT_NXT_ENC__SHIFT                                                              0xb
#define CDEFE_SUVD_CGC_GATE2__MPBE0_MASK                                                                      0x00000001L
#define CDEFE_SUVD_CGC_GATE2__MPBE1_MASK                                                                      0x00000002L
#define CDEFE_SUVD_CGC_GATE2__SIT_AV1_MASK                                                                    0x00000004L
#define CDEFE_SUVD_CGC_GATE2__SDB_AV1_MASK                                                                    0x00000008L
#define CDEFE_SUVD_CGC_GATE2__MPC1_MASK                                                                       0x00000010L
#define CDEFE_SUVD_CGC_GATE2__SRE_AV1_ENC_MASK                                                                0x00000020L
#define CDEFE_SUVD_CGC_GATE2__CDEFE_MASK                                                                      0x00000040L
#define CDEFE_SUVD_CGC_GATE2__AVM_0_MASK                                                                      0x00000080L
#define CDEFE_SUVD_CGC_GATE2__AVM_1_MASK                                                                      0x00000100L
#define CDEFE_SUVD_CGC_GATE2__SIT_NXT_CMN_MASK                                                                0x00000200L
#define CDEFE_SUVD_CGC_GATE2__SIT_NXT_DEC_MASK                                                                0x00000400L
#define CDEFE_SUVD_CGC_GATE2__SIT_NXT_ENC_MASK                                                                0x00000800L
//DBR_SUVD_CGC_GATE2
#define DBR_SUVD_CGC_GATE2__MPBE0__SHIFT                                                                      0x0
#define DBR_SUVD_CGC_GATE2__MPBE1__SHIFT                                                                      0x1
#define DBR_SUVD_CGC_GATE2__SIT_AV1__SHIFT                                                                    0x2
#define DBR_SUVD_CGC_GATE2__SDB_AV1__SHIFT                                                                    0x3
#define DBR_SUVD_CGC_GATE2__MPC1__SHIFT                                                                       0x4
#define DBR_SUVD_CGC_GATE2__SRE_AV1_ENC__SHIFT                                                                0x5
#define DBR_SUVD_CGC_GATE2__CDEFE__SHIFT                                                                      0x6
#define DBR_SUVD_CGC_GATE2__AVM_0__SHIFT                                                                      0x7
#define DBR_SUVD_CGC_GATE2__AVM_1__SHIFT                                                                      0x8
#define DBR_SUVD_CGC_GATE2__SIT_NXT_CMN__SHIFT                                                                0x9
#define DBR_SUVD_CGC_GATE2__SIT_NXT_DEC__SHIFT                                                                0xa
#define DBR_SUVD_CGC_GATE2__SIT_NXT_ENC__SHIFT                                                                0xb
#define DBR_SUVD_CGC_GATE2__MPBE0_MASK                                                                        0x00000001L
#define DBR_SUVD_CGC_GATE2__MPBE1_MASK                                                                        0x00000002L
#define DBR_SUVD_CGC_GATE2__SIT_AV1_MASK                                                                      0x00000004L
#define DBR_SUVD_CGC_GATE2__SDB_AV1_MASK                                                                      0x00000008L
#define DBR_SUVD_CGC_GATE2__MPC1_MASK                                                                         0x00000010L
#define DBR_SUVD_CGC_GATE2__SRE_AV1_ENC_MASK                                                                  0x00000020L
#define DBR_SUVD_CGC_GATE2__CDEFE_MASK                                                                        0x00000040L
#define DBR_SUVD_CGC_GATE2__AVM_0_MASK                                                                        0x00000080L
#define DBR_SUVD_CGC_GATE2__AVM_1_MASK                                                                        0x00000100L
#define DBR_SUVD_CGC_GATE2__SIT_NXT_CMN_MASK                                                                  0x00000200L
#define DBR_SUVD_CGC_GATE2__SIT_NXT_DEC_MASK                                                                  0x00000400L
#define DBR_SUVD_CGC_GATE2__SIT_NXT_ENC_MASK                                                                  0x00000800L
//ENT_SUVD_CGC_GATE2
#define ENT_SUVD_CGC_GATE2__MPBE0__SHIFT                                                                      0x0
#define ENT_SUVD_CGC_GATE2__MPBE1__SHIFT                                                                      0x1
#define ENT_SUVD_CGC_GATE2__SIT_AV1__SHIFT                                                                    0x2
#define ENT_SUVD_CGC_GATE2__SDB_AV1__SHIFT                                                                    0x3
#define ENT_SUVD_CGC_GATE2__MPC1__SHIFT                                                                       0x4
#define ENT_SUVD_CGC_GATE2__SRE_AV1_ENC__SHIFT                                                                0x5
#define ENT_SUVD_CGC_GATE2__CDEFE__SHIFT                                                                      0x6
#define ENT_SUVD_CGC_GATE2__AVM_0__SHIFT                                                                      0x7
#define ENT_SUVD_CGC_GATE2__AVM_1__SHIFT                                                                      0x8
#define ENT_SUVD_CGC_GATE2__SIT_NXT_CMN__SHIFT                                                                0x9
#define ENT_SUVD_CGC_GATE2__SIT_NXT_DEC__SHIFT                                                                0xa
#define ENT_SUVD_CGC_GATE2__SIT_NXT_ENC__SHIFT                                                                0xb
#define ENT_SUVD_CGC_GATE2__MPBE0_MASK                                                                        0x00000001L
#define ENT_SUVD_CGC_GATE2__MPBE1_MASK                                                                        0x00000002L
#define ENT_SUVD_CGC_GATE2__SIT_AV1_MASK                                                                      0x00000004L
#define ENT_SUVD_CGC_GATE2__SDB_AV1_MASK                                                                      0x00000008L
#define ENT_SUVD_CGC_GATE2__MPC1_MASK                                                                         0x00000010L
#define ENT_SUVD_CGC_GATE2__SRE_AV1_ENC_MASK                                                                  0x00000020L
#define ENT_SUVD_CGC_GATE2__CDEFE_MASK                                                                        0x00000040L
#define ENT_SUVD_CGC_GATE2__AVM_0_MASK                                                                        0x00000080L
#define ENT_SUVD_CGC_GATE2__AVM_1_MASK                                                                        0x00000100L
#define ENT_SUVD_CGC_GATE2__SIT_NXT_CMN_MASK                                                                  0x00000200L
#define ENT_SUVD_CGC_GATE2__SIT_NXT_DEC_MASK                                                                  0x00000400L
#define ENT_SUVD_CGC_GATE2__SIT_NXT_ENC_MASK                                                                  0x00000800L
//IME_SUVD_CGC_GATE2
#define IME_SUVD_CGC_GATE2__MPBE0__SHIFT                                                                      0x0
#define IME_SUVD_CGC_GATE2__MPBE1__SHIFT                                                                      0x1
#define IME_SUVD_CGC_GATE2__SIT_AV1__SHIFT                                                                    0x2
#define IME_SUVD_CGC_GATE2__SDB_AV1__SHIFT                                                                    0x3
#define IME_SUVD_CGC_GATE2__MPC1__SHIFT                                                                       0x4
#define IME_SUVD_CGC_GATE2__SRE_AV1_ENC__SHIFT                                                                0x5
#define IME_SUVD_CGC_GATE2__CDEFE__SHIFT                                                                      0x6
#define IME_SUVD_CGC_GATE2__AVM_0__SHIFT                                                                      0x7
#define IME_SUVD_CGC_GATE2__AVM_1__SHIFT                                                                      0x8
#define IME_SUVD_CGC_GATE2__SIT_NXT_CMN__SHIFT                                                                0x9
#define IME_SUVD_CGC_GATE2__SIT_NXT_DEC__SHIFT                                                                0xa
#define IME_SUVD_CGC_GATE2__SIT_NXT_ENC__SHIFT                                                                0xb
#define IME_SUVD_CGC_GATE2__MPBE0_MASK                                                                        0x00000001L
#define IME_SUVD_CGC_GATE2__MPBE1_MASK                                                                        0x00000002L
#define IME_SUVD_CGC_GATE2__SIT_AV1_MASK                                                                      0x00000004L
#define IME_SUVD_CGC_GATE2__SDB_AV1_MASK                                                                      0x00000008L
#define IME_SUVD_CGC_GATE2__MPC1_MASK                                                                         0x00000010L
#define IME_SUVD_CGC_GATE2__SRE_AV1_ENC_MASK                                                                  0x00000020L
#define IME_SUVD_CGC_GATE2__CDEFE_MASK                                                                        0x00000040L
#define IME_SUVD_CGC_GATE2__AVM_0_MASK                                                                        0x00000080L
#define IME_SUVD_CGC_GATE2__AVM_1_MASK                                                                        0x00000100L
#define IME_SUVD_CGC_GATE2__SIT_NXT_CMN_MASK                                                                  0x00000200L
#define IME_SUVD_CGC_GATE2__SIT_NXT_DEC_MASK                                                                  0x00000400L
#define IME_SUVD_CGC_GATE2__SIT_NXT_ENC_MASK                                                                  0x00000800L
//MPC1_SUVD_CGC_GATE2
#define MPC1_SUVD_CGC_GATE2__MPBE0__SHIFT                                                                     0x0
#define MPC1_SUVD_CGC_GATE2__MPBE1__SHIFT                                                                     0x1
#define MPC1_SUVD_CGC_GATE2__SIT_AV1__SHIFT                                                                   0x2
#define MPC1_SUVD_CGC_GATE2__SDB_AV1__SHIFT                                                                   0x3
#define MPC1_SUVD_CGC_GATE2__MPC1__SHIFT                                                                      0x4
#define MPC1_SUVD_CGC_GATE2__SRE_AV1_ENC__SHIFT                                                               0x5
#define MPC1_SUVD_CGC_GATE2__CDEFE__SHIFT                                                                     0x6
#define MPC1_SUVD_CGC_GATE2__AVM_0__SHIFT                                                                     0x7
#define MPC1_SUVD_CGC_GATE2__AVM_1__SHIFT                                                                     0x8
#define MPC1_SUVD_CGC_GATE2__SIT_NXT_CMN__SHIFT                                                               0x9
#define MPC1_SUVD_CGC_GATE2__SIT_NXT_DEC__SHIFT                                                               0xa
#define MPC1_SUVD_CGC_GATE2__SIT_NXT_ENC__SHIFT                                                               0xb
#define MPC1_SUVD_CGC_GATE2__MPBE0_MASK                                                                       0x00000001L
#define MPC1_SUVD_CGC_GATE2__MPBE1_MASK                                                                       0x00000002L
#define MPC1_SUVD_CGC_GATE2__SIT_AV1_MASK                                                                     0x00000004L
#define MPC1_SUVD_CGC_GATE2__SDB_AV1_MASK                                                                     0x00000008L
#define MPC1_SUVD_CGC_GATE2__MPC1_MASK                                                                        0x00000010L
#define MPC1_SUVD_CGC_GATE2__SRE_AV1_ENC_MASK                                                                 0x00000020L
#define MPC1_SUVD_CGC_GATE2__CDEFE_MASK                                                                       0x00000040L
#define MPC1_SUVD_CGC_GATE2__AVM_0_MASK                                                                       0x00000080L
#define MPC1_SUVD_CGC_GATE2__AVM_1_MASK                                                                       0x00000100L
#define MPC1_SUVD_CGC_GATE2__SIT_NXT_CMN_MASK                                                                 0x00000200L
#define MPC1_SUVD_CGC_GATE2__SIT_NXT_DEC_MASK                                                                 0x00000400L
#define MPC1_SUVD_CGC_GATE2__SIT_NXT_ENC_MASK                                                                 0x00000800L
//SAOE_SUVD_CGC_GATE2
#define SAOE_SUVD_CGC_GATE2__MPBE0__SHIFT                                                                     0x0
#define SAOE_SUVD_CGC_GATE2__MPBE1__SHIFT                                                                     0x1
#define SAOE_SUVD_CGC_GATE2__SIT_AV1__SHIFT                                                                   0x2
#define SAOE_SUVD_CGC_GATE2__SDB_AV1__SHIFT                                                                   0x3
#define SAOE_SUVD_CGC_GATE2__MPC1__SHIFT                                                                      0x4
#define SAOE_SUVD_CGC_GATE2__SRE_AV1_ENC__SHIFT                                                               0x5
#define SAOE_SUVD_CGC_GATE2__CDEFE__SHIFT                                                                     0x6
#define SAOE_SUVD_CGC_GATE2__AVM_0__SHIFT                                                                     0x7
#define SAOE_SUVD_CGC_GATE2__AVM_1__SHIFT                                                                     0x8
#define SAOE_SUVD_CGC_GATE2__SIT_NXT_CMN__SHIFT                                                               0x9
#define SAOE_SUVD_CGC_GATE2__SIT_NXT_DEC__SHIFT                                                               0xa
#define SAOE_SUVD_CGC_GATE2__SIT_NXT_ENC__SHIFT                                                               0xb
#define SAOE_SUVD_CGC_GATE2__MPBE0_MASK                                                                       0x00000001L
#define SAOE_SUVD_CGC_GATE2__MPBE1_MASK                                                                       0x00000002L
#define SAOE_SUVD_CGC_GATE2__SIT_AV1_MASK                                                                     0x00000004L
#define SAOE_SUVD_CGC_GATE2__SDB_AV1_MASK                                                                     0x00000008L
#define SAOE_SUVD_CGC_GATE2__MPC1_MASK                                                                        0x00000010L
#define SAOE_SUVD_CGC_GATE2__SRE_AV1_ENC_MASK                                                                 0x00000020L
#define SAOE_SUVD_CGC_GATE2__CDEFE_MASK                                                                       0x00000040L
#define SAOE_SUVD_CGC_GATE2__AVM_0_MASK                                                                       0x00000080L
#define SAOE_SUVD_CGC_GATE2__AVM_1_MASK                                                                       0x00000100L
#define SAOE_SUVD_CGC_GATE2__SIT_NXT_CMN_MASK                                                                 0x00000200L
#define SAOE_SUVD_CGC_GATE2__SIT_NXT_DEC_MASK                                                                 0x00000400L
#define SAOE_SUVD_CGC_GATE2__SIT_NXT_ENC_MASK                                                                 0x00000800L
//SDB_SUVD_CGC_GATE2
#define SDB_SUVD_CGC_GATE2__MPBE0__SHIFT                                                                      0x0
#define SDB_SUVD_CGC_GATE2__MPBE1__SHIFT                                                                      0x1
#define SDB_SUVD_CGC_GATE2__SIT_AV1__SHIFT                                                                    0x2
#define SDB_SUVD_CGC_GATE2__SDB_AV1__SHIFT                                                                    0x3
#define SDB_SUVD_CGC_GATE2__MPC1__SHIFT                                                                       0x4
#define SDB_SUVD_CGC_GATE2__SRE_AV1_ENC__SHIFT                                                                0x5
#define SDB_SUVD_CGC_GATE2__CDEFE__SHIFT                                                                      0x6
#define SDB_SUVD_CGC_GATE2__AVM_0__SHIFT                                                                      0x7
#define SDB_SUVD_CGC_GATE2__AVM_1__SHIFT                                                                      0x8
#define SDB_SUVD_CGC_GATE2__SIT_NXT_CMN__SHIFT                                                                0x9
#define SDB_SUVD_CGC_GATE2__SIT_NXT_DEC__SHIFT                                                                0xa
#define SDB_SUVD_CGC_GATE2__SIT_NXT_ENC__SHIFT                                                                0xb
#define SDB_SUVD_CGC_GATE2__MPBE0_MASK                                                                        0x00000001L
#define SDB_SUVD_CGC_GATE2__MPBE1_MASK                                                                        0x00000002L
#define SDB_SUVD_CGC_GATE2__SIT_AV1_MASK                                                                      0x00000004L
#define SDB_SUVD_CGC_GATE2__SDB_AV1_MASK                                                                      0x00000008L
#define SDB_SUVD_CGC_GATE2__MPC1_MASK                                                                         0x00000010L
#define SDB_SUVD_CGC_GATE2__SRE_AV1_ENC_MASK                                                                  0x00000020L
#define SDB_SUVD_CGC_GATE2__CDEFE_MASK                                                                        0x00000040L
#define SDB_SUVD_CGC_GATE2__AVM_0_MASK                                                                        0x00000080L
#define SDB_SUVD_CGC_GATE2__AVM_1_MASK                                                                        0x00000100L
#define SDB_SUVD_CGC_GATE2__SIT_NXT_CMN_MASK                                                                  0x00000200L
#define SDB_SUVD_CGC_GATE2__SIT_NXT_DEC_MASK                                                                  0x00000400L
#define SDB_SUVD_CGC_GATE2__SIT_NXT_ENC_MASK                                                                  0x00000800L
//SIT0_NXT_SUVD_CGC_GATE2
#define SIT0_NXT_SUVD_CGC_GATE2__MPBE0__SHIFT                                                                 0x0
#define SIT0_NXT_SUVD_CGC_GATE2__MPBE1__SHIFT                                                                 0x1
#define SIT0_NXT_SUVD_CGC_GATE2__SIT_AV1__SHIFT                                                               0x2
#define SIT0_NXT_SUVD_CGC_GATE2__SDB_AV1__SHIFT                                                               0x3
#define SIT0_NXT_SUVD_CGC_GATE2__MPC1__SHIFT                                                                  0x4
#define SIT0_NXT_SUVD_CGC_GATE2__SRE_AV1_ENC__SHIFT                                                           0x5
#define SIT0_NXT_SUVD_CGC_GATE2__CDEFE__SHIFT                                                                 0x6
#define SIT0_NXT_SUVD_CGC_GATE2__AVM_0__SHIFT                                                                 0x7
#define SIT0_NXT_SUVD_CGC_GATE2__AVM_1__SHIFT                                                                 0x8
#define SIT0_NXT_SUVD_CGC_GATE2__SIT_NXT_CMN__SHIFT                                                           0x9
#define SIT0_NXT_SUVD_CGC_GATE2__SIT_NXT_DEC__SHIFT                                                           0xa
#define SIT0_NXT_SUVD_CGC_GATE2__SIT_NXT_ENC__SHIFT                                                           0xb
#define SIT0_NXT_SUVD_CGC_GATE2__MPBE0_MASK                                                                   0x00000001L
#define SIT0_NXT_SUVD_CGC_GATE2__MPBE1_MASK                                                                   0x00000002L
#define SIT0_NXT_SUVD_CGC_GATE2__SIT_AV1_MASK                                                                 0x00000004L
#define SIT0_NXT_SUVD_CGC_GATE2__SDB_AV1_MASK                                                                 0x00000008L
#define SIT0_NXT_SUVD_CGC_GATE2__MPC1_MASK                                                                    0x00000010L
#define SIT0_NXT_SUVD_CGC_GATE2__SRE_AV1_ENC_MASK                                                             0x00000020L
#define SIT0_NXT_SUVD_CGC_GATE2__CDEFE_MASK                                                                   0x00000040L
#define SIT0_NXT_SUVD_CGC_GATE2__AVM_0_MASK                                                                   0x00000080L
#define SIT0_NXT_SUVD_CGC_GATE2__AVM_1_MASK                                                                   0x00000100L
#define SIT0_NXT_SUVD_CGC_GATE2__SIT_NXT_CMN_MASK                                                             0x00000200L
#define SIT0_NXT_SUVD_CGC_GATE2__SIT_NXT_DEC_MASK                                                             0x00000400L
#define SIT0_NXT_SUVD_CGC_GATE2__SIT_NXT_ENC_MASK                                                             0x00000800L
//SIT1_NXT_SUVD_CGC_GATE2
#define SIT1_NXT_SUVD_CGC_GATE2__MPBE0__SHIFT                                                                 0x0
#define SIT1_NXT_SUVD_CGC_GATE2__MPBE1__SHIFT                                                                 0x1
#define SIT1_NXT_SUVD_CGC_GATE2__SIT_AV1__SHIFT                                                               0x2
#define SIT1_NXT_SUVD_CGC_GATE2__SDB_AV1__SHIFT                                                               0x3
#define SIT1_NXT_SUVD_CGC_GATE2__MPC1__SHIFT                                                                  0x4
#define SIT1_NXT_SUVD_CGC_GATE2__SRE_AV1_ENC__SHIFT                                                           0x5
#define SIT1_NXT_SUVD_CGC_GATE2__CDEFE__SHIFT                                                                 0x6
#define SIT1_NXT_SUVD_CGC_GATE2__AVM_0__SHIFT                                                                 0x7
#define SIT1_NXT_SUVD_CGC_GATE2__AVM_1__SHIFT                                                                 0x8
#define SIT1_NXT_SUVD_CGC_GATE2__SIT_NXT_CMN__SHIFT                                                           0x9
#define SIT1_NXT_SUVD_CGC_GATE2__SIT_NXT_DEC__SHIFT                                                           0xa
#define SIT1_NXT_SUVD_CGC_GATE2__SIT_NXT_ENC__SHIFT                                                           0xb
#define SIT1_NXT_SUVD_CGC_GATE2__MPBE0_MASK                                                                   0x00000001L
#define SIT1_NXT_SUVD_CGC_GATE2__MPBE1_MASK                                                                   0x00000002L
#define SIT1_NXT_SUVD_CGC_GATE2__SIT_AV1_MASK                                                                 0x00000004L
#define SIT1_NXT_SUVD_CGC_GATE2__SDB_AV1_MASK                                                                 0x00000008L
#define SIT1_NXT_SUVD_CGC_GATE2__MPC1_MASK                                                                    0x00000010L
#define SIT1_NXT_SUVD_CGC_GATE2__SRE_AV1_ENC_MASK                                                             0x00000020L
#define SIT1_NXT_SUVD_CGC_GATE2__CDEFE_MASK                                                                   0x00000040L
#define SIT1_NXT_SUVD_CGC_GATE2__AVM_0_MASK                                                                   0x00000080L
#define SIT1_NXT_SUVD_CGC_GATE2__AVM_1_MASK                                                                   0x00000100L
#define SIT1_NXT_SUVD_CGC_GATE2__SIT_NXT_CMN_MASK                                                             0x00000200L
#define SIT1_NXT_SUVD_CGC_GATE2__SIT_NXT_DEC_MASK                                                             0x00000400L
#define SIT1_NXT_SUVD_CGC_GATE2__SIT_NXT_ENC_MASK                                                             0x00000800L
//SIT2_NXT_SUVD_CGC_GATE2
#define SIT2_NXT_SUVD_CGC_GATE2__MPBE0__SHIFT                                                                 0x0
#define SIT2_NXT_SUVD_CGC_GATE2__MPBE1__SHIFT                                                                 0x1
#define SIT2_NXT_SUVD_CGC_GATE2__SIT_AV1__SHIFT                                                               0x2
#define SIT2_NXT_SUVD_CGC_GATE2__SDB_AV1__SHIFT                                                               0x3
#define SIT2_NXT_SUVD_CGC_GATE2__MPC1__SHIFT                                                                  0x4
#define SIT2_NXT_SUVD_CGC_GATE2__SRE_AV1_ENC__SHIFT                                                           0x5
#define SIT2_NXT_SUVD_CGC_GATE2__CDEFE__SHIFT                                                                 0x6
#define SIT2_NXT_SUVD_CGC_GATE2__AVM_0__SHIFT                                                                 0x7
#define SIT2_NXT_SUVD_CGC_GATE2__AVM_1__SHIFT                                                                 0x8
#define SIT2_NXT_SUVD_CGC_GATE2__SIT_NXT_CMN__SHIFT                                                           0x9
#define SIT2_NXT_SUVD_CGC_GATE2__SIT_NXT_DEC__SHIFT                                                           0xa
#define SIT2_NXT_SUVD_CGC_GATE2__SIT_NXT_ENC__SHIFT                                                           0xb
#define SIT2_NXT_SUVD_CGC_GATE2__MPBE0_MASK                                                                   0x00000001L
#define SIT2_NXT_SUVD_CGC_GATE2__MPBE1_MASK                                                                   0x00000002L
#define SIT2_NXT_SUVD_CGC_GATE2__SIT_AV1_MASK                                                                 0x00000004L
#define SIT2_NXT_SUVD_CGC_GATE2__SDB_AV1_MASK                                                                 0x00000008L
#define SIT2_NXT_SUVD_CGC_GATE2__MPC1_MASK                                                                    0x00000010L
#define SIT2_NXT_SUVD_CGC_GATE2__SRE_AV1_ENC_MASK                                                             0x00000020L
#define SIT2_NXT_SUVD_CGC_GATE2__CDEFE_MASK                                                                   0x00000040L
#define SIT2_NXT_SUVD_CGC_GATE2__AVM_0_MASK                                                                   0x00000080L
#define SIT2_NXT_SUVD_CGC_GATE2__AVM_1_MASK                                                                   0x00000100L
#define SIT2_NXT_SUVD_CGC_GATE2__SIT_NXT_CMN_MASK                                                             0x00000200L
#define SIT2_NXT_SUVD_CGC_GATE2__SIT_NXT_DEC_MASK                                                             0x00000400L
#define SIT2_NXT_SUVD_CGC_GATE2__SIT_NXT_ENC_MASK                                                             0x00000800L
//SIT_SUVD_CGC_GATE2
#define SIT_SUVD_CGC_GATE2__MPBE0__SHIFT                                                                      0x0
#define SIT_SUVD_CGC_GATE2__MPBE1__SHIFT                                                                      0x1
#define SIT_SUVD_CGC_GATE2__SIT_AV1__SHIFT                                                                    0x2
#define SIT_SUVD_CGC_GATE2__SDB_AV1__SHIFT                                                                    0x3
#define SIT_SUVD_CGC_GATE2__MPC1__SHIFT                                                                       0x4
#define SIT_SUVD_CGC_GATE2__SRE_AV1_ENC__SHIFT                                                                0x5
#define SIT_SUVD_CGC_GATE2__CDEFE__SHIFT                                                                      0x6
#define SIT_SUVD_CGC_GATE2__AVM_0__SHIFT                                                                      0x7
#define SIT_SUVD_CGC_GATE2__AVM_1__SHIFT                                                                      0x8
#define SIT_SUVD_CGC_GATE2__SIT_NXT_CMN__SHIFT                                                                0x9
#define SIT_SUVD_CGC_GATE2__SIT_NXT_DEC__SHIFT                                                                0xa
#define SIT_SUVD_CGC_GATE2__SIT_NXT_ENC__SHIFT                                                                0xb
#define SIT_SUVD_CGC_GATE2__MPBE0_MASK                                                                        0x00000001L
#define SIT_SUVD_CGC_GATE2__MPBE1_MASK                                                                        0x00000002L
#define SIT_SUVD_CGC_GATE2__SIT_AV1_MASK                                                                      0x00000004L
#define SIT_SUVD_CGC_GATE2__SDB_AV1_MASK                                                                      0x00000008L
#define SIT_SUVD_CGC_GATE2__MPC1_MASK                                                                         0x00000010L
#define SIT_SUVD_CGC_GATE2__SRE_AV1_ENC_MASK                                                                  0x00000020L
#define SIT_SUVD_CGC_GATE2__CDEFE_MASK                                                                        0x00000040L
#define SIT_SUVD_CGC_GATE2__AVM_0_MASK                                                                        0x00000080L
#define SIT_SUVD_CGC_GATE2__AVM_1_MASK                                                                        0x00000100L
#define SIT_SUVD_CGC_GATE2__SIT_NXT_CMN_MASK                                                                  0x00000200L
#define SIT_SUVD_CGC_GATE2__SIT_NXT_DEC_MASK                                                                  0x00000400L
#define SIT_SUVD_CGC_GATE2__SIT_NXT_ENC_MASK                                                                  0x00000800L
//SMPA_SUVD_CGC_GATE2
#define SMPA_SUVD_CGC_GATE2__MPBE0__SHIFT                                                                     0x0
#define SMPA_SUVD_CGC_GATE2__MPBE1__SHIFT                                                                     0x1
#define SMPA_SUVD_CGC_GATE2__SIT_AV1__SHIFT                                                                   0x2
#define SMPA_SUVD_CGC_GATE2__SDB_AV1__SHIFT                                                                   0x3
#define SMPA_SUVD_CGC_GATE2__MPC1__SHIFT                                                                      0x4
#define SMPA_SUVD_CGC_GATE2__SRE_AV1_ENC__SHIFT                                                               0x5
#define SMPA_SUVD_CGC_GATE2__CDEFE__SHIFT                                                                     0x6
#define SMPA_SUVD_CGC_GATE2__AVM_0__SHIFT                                                                     0x7
#define SMPA_SUVD_CGC_GATE2__AVM_1__SHIFT                                                                     0x8
#define SMPA_SUVD_CGC_GATE2__SIT_NXT_CMN__SHIFT                                                               0x9
#define SMPA_SUVD_CGC_GATE2__SIT_NXT_DEC__SHIFT                                                               0xa
#define SMPA_SUVD_CGC_GATE2__SIT_NXT_ENC__SHIFT                                                               0xb
#define SMPA_SUVD_CGC_GATE2__MPBE0_MASK                                                                       0x00000001L
#define SMPA_SUVD_CGC_GATE2__MPBE1_MASK                                                                       0x00000002L
#define SMPA_SUVD_CGC_GATE2__SIT_AV1_MASK                                                                     0x00000004L
#define SMPA_SUVD_CGC_GATE2__SDB_AV1_MASK                                                                     0x00000008L
#define SMPA_SUVD_CGC_GATE2__MPC1_MASK                                                                        0x00000010L
#define SMPA_SUVD_CGC_GATE2__SRE_AV1_ENC_MASK                                                                 0x00000020L
#define SMPA_SUVD_CGC_GATE2__CDEFE_MASK                                                                       0x00000040L
#define SMPA_SUVD_CGC_GATE2__AVM_0_MASK                                                                       0x00000080L
#define SMPA_SUVD_CGC_GATE2__AVM_1_MASK                                                                       0x00000100L
#define SMPA_SUVD_CGC_GATE2__SIT_NXT_CMN_MASK                                                                 0x00000200L
#define SMPA_SUVD_CGC_GATE2__SIT_NXT_DEC_MASK                                                                 0x00000400L
#define SMPA_SUVD_CGC_GATE2__SIT_NXT_ENC_MASK                                                                 0x00000800L
//SMP_SUVD_CGC_GATE2
#define SMP_SUVD_CGC_GATE2__MPBE0__SHIFT                                                                      0x0
#define SMP_SUVD_CGC_GATE2__MPBE1__SHIFT                                                                      0x1
#define SMP_SUVD_CGC_GATE2__SIT_AV1__SHIFT                                                                    0x2
#define SMP_SUVD_CGC_GATE2__SDB_AV1__SHIFT                                                                    0x3
#define SMP_SUVD_CGC_GATE2__MPC1__SHIFT                                                                       0x4
#define SMP_SUVD_CGC_GATE2__SRE_AV1_ENC__SHIFT                                                                0x5
#define SMP_SUVD_CGC_GATE2__CDEFE__SHIFT                                                                      0x6
#define SMP_SUVD_CGC_GATE2__AVM_0__SHIFT                                                                      0x7
#define SMP_SUVD_CGC_GATE2__AVM_1__SHIFT                                                                      0x8
#define SMP_SUVD_CGC_GATE2__SIT_NXT_CMN__SHIFT                                                                0x9
#define SMP_SUVD_CGC_GATE2__SIT_NXT_DEC__SHIFT                                                                0xa
#define SMP_SUVD_CGC_GATE2__SIT_NXT_ENC__SHIFT                                                                0xb
#define SMP_SUVD_CGC_GATE2__MPBE0_MASK                                                                        0x00000001L
#define SMP_SUVD_CGC_GATE2__MPBE1_MASK                                                                        0x00000002L
#define SMP_SUVD_CGC_GATE2__SIT_AV1_MASK                                                                      0x00000004L
#define SMP_SUVD_CGC_GATE2__SDB_AV1_MASK                                                                      0x00000008L
#define SMP_SUVD_CGC_GATE2__MPC1_MASK                                                                         0x00000010L
#define SMP_SUVD_CGC_GATE2__SRE_AV1_ENC_MASK                                                                  0x00000020L
#define SMP_SUVD_CGC_GATE2__CDEFE_MASK                                                                        0x00000040L
#define SMP_SUVD_CGC_GATE2__AVM_0_MASK                                                                        0x00000080L
#define SMP_SUVD_CGC_GATE2__AVM_1_MASK                                                                        0x00000100L
#define SMP_SUVD_CGC_GATE2__SIT_NXT_CMN_MASK                                                                  0x00000200L
#define SMP_SUVD_CGC_GATE2__SIT_NXT_DEC_MASK                                                                  0x00000400L
#define SMP_SUVD_CGC_GATE2__SIT_NXT_ENC_MASK                                                                  0x00000800L
//SRE_SUVD_CGC_GATE2
#define SRE_SUVD_CGC_GATE2__MPBE0__SHIFT                                                                      0x0
#define SRE_SUVD_CGC_GATE2__MPBE1__SHIFT                                                                      0x1
#define SRE_SUVD_CGC_GATE2__SIT_AV1__SHIFT                                                                    0x2
#define SRE_SUVD_CGC_GATE2__SDB_AV1__SHIFT                                                                    0x3
#define SRE_SUVD_CGC_GATE2__MPC1__SHIFT                                                                       0x4
#define SRE_SUVD_CGC_GATE2__SRE_AV1_ENC__SHIFT                                                                0x5
#define SRE_SUVD_CGC_GATE2__CDEFE__SHIFT                                                                      0x6
#define SRE_SUVD_CGC_GATE2__AVM_0__SHIFT                                                                      0x7
#define SRE_SUVD_CGC_GATE2__AVM_1__SHIFT                                                                      0x8
#define SRE_SUVD_CGC_GATE2__SIT_NXT_CMN__SHIFT                                                                0x9
#define SRE_SUVD_CGC_GATE2__SIT_NXT_DEC__SHIFT                                                                0xa
#define SRE_SUVD_CGC_GATE2__SIT_NXT_ENC__SHIFT                                                                0xb
#define SRE_SUVD_CGC_GATE2__MPBE0_MASK                                                                        0x00000001L
#define SRE_SUVD_CGC_GATE2__MPBE1_MASK                                                                        0x00000002L
#define SRE_SUVD_CGC_GATE2__SIT_AV1_MASK                                                                      0x00000004L
#define SRE_SUVD_CGC_GATE2__SDB_AV1_MASK                                                                      0x00000008L
#define SRE_SUVD_CGC_GATE2__MPC1_MASK                                                                         0x00000010L
#define SRE_SUVD_CGC_GATE2__SRE_AV1_ENC_MASK                                                                  0x00000020L
#define SRE_SUVD_CGC_GATE2__CDEFE_MASK                                                                        0x00000040L
#define SRE_SUVD_CGC_GATE2__AVM_0_MASK                                                                        0x00000080L
#define SRE_SUVD_CGC_GATE2__AVM_1_MASK                                                                        0x00000100L
#define SRE_SUVD_CGC_GATE2__SIT_NXT_CMN_MASK                                                                  0x00000200L
#define SRE_SUVD_CGC_GATE2__SIT_NXT_DEC_MASK                                                                  0x00000400L
#define SRE_SUVD_CGC_GATE2__SIT_NXT_ENC_MASK                                                                  0x00000800L
//UVD_MPBE0_SUVD_CGC_GATE2
#define UVD_MPBE0_SUVD_CGC_GATE2__MPBE0__SHIFT                                                                0x0
#define UVD_MPBE0_SUVD_CGC_GATE2__MPBE1__SHIFT                                                                0x1
#define UVD_MPBE0_SUVD_CGC_GATE2__SIT_AV1__SHIFT                                                              0x2
#define UVD_MPBE0_SUVD_CGC_GATE2__SDB_AV1__SHIFT                                                              0x3
#define UVD_MPBE0_SUVD_CGC_GATE2__MPC1__SHIFT                                                                 0x4
#define UVD_MPBE0_SUVD_CGC_GATE2__SRE_AV1_ENC__SHIFT                                                          0x5
#define UVD_MPBE0_SUVD_CGC_GATE2__CDEFE__SHIFT                                                                0x6
#define UVD_MPBE0_SUVD_CGC_GATE2__MPBE0_MASK                                                                  0x00000001L
#define UVD_MPBE0_SUVD_CGC_GATE2__MPBE1_MASK                                                                  0x00000002L
#define UVD_MPBE0_SUVD_CGC_GATE2__SIT_AV1_MASK                                                                0x00000004L
#define UVD_MPBE0_SUVD_CGC_GATE2__SDB_AV1_MASK                                                                0x00000008L
#define UVD_MPBE0_SUVD_CGC_GATE2__MPC1_MASK                                                                   0x00000010L
#define UVD_MPBE0_SUVD_CGC_GATE2__SRE_AV1_ENC_MASK                                                            0x00000020L
#define UVD_MPBE0_SUVD_CGC_GATE2__CDEFE_MASK                                                                  0x00000040L
//UVD_MPBE1_SUVD_CGC_GATE2
#define UVD_MPBE1_SUVD_CGC_GATE2__MPBE0__SHIFT                                                                0x0
#define UVD_MPBE1_SUVD_CGC_GATE2__MPBE1__SHIFT                                                                0x1
#define UVD_MPBE1_SUVD_CGC_GATE2__SIT_AV1__SHIFT                                                              0x2
#define UVD_MPBE1_SUVD_CGC_GATE2__SDB_AV1__SHIFT                                                              0x3
#define UVD_MPBE1_SUVD_CGC_GATE2__MPC1__SHIFT                                                                 0x4
#define UVD_MPBE1_SUVD_CGC_GATE2__SRE_AV1_ENC__SHIFT                                                          0x5
#define UVD_MPBE1_SUVD_CGC_GATE2__CDEFE__SHIFT                                                                0x6
#define UVD_MPBE1_SUVD_CGC_GATE2__MPBE0_MASK                                                                  0x00000001L
#define UVD_MPBE1_SUVD_CGC_GATE2__MPBE1_MASK                                                                  0x00000002L
#define UVD_MPBE1_SUVD_CGC_GATE2__SIT_AV1_MASK                                                                0x00000004L
#define UVD_MPBE1_SUVD_CGC_GATE2__SDB_AV1_MASK                                                                0x00000008L
#define UVD_MPBE1_SUVD_CGC_GATE2__MPC1_MASK                                                                   0x00000010L
#define UVD_MPBE1_SUVD_CGC_GATE2__SRE_AV1_ENC_MASK                                                            0x00000020L
#define UVD_MPBE1_SUVD_CGC_GATE2__CDEFE_MASK                                                                  0x00000040L
//UVD_SUVD_CGC_GATE2
#define UVD_SUVD_CGC_GATE2__MPBE0__SHIFT                                                                      0x0
#define UVD_SUVD_CGC_GATE2__MPBE1__SHIFT                                                                      0x1
#define UVD_SUVD_CGC_GATE2__SIT_AV1__SHIFT                                                                    0x2
#define UVD_SUVD_CGC_GATE2__SDB_AV1__SHIFT                                                                    0x3
#define UVD_SUVD_CGC_GATE2__MPC1__SHIFT                                                                       0x4
#define UVD_SUVD_CGC_GATE2__SRE_AV1_ENC__SHIFT                                                                0x5
#define UVD_SUVD_CGC_GATE2__CDEFE__SHIFT                                                                      0x6
#define UVD_SUVD_CGC_GATE2__AVM_0__SHIFT                                                                      0x7
#define UVD_SUVD_CGC_GATE2__AVM_1__SHIFT                                                                      0x8
#define UVD_SUVD_CGC_GATE2__SIT_NXT_CMN__SHIFT                                                                0x9
#define UVD_SUVD_CGC_GATE2__SIT_NXT_DEC__SHIFT                                                                0xa
#define UVD_SUVD_CGC_GATE2__SIT_NXT_ENC__SHIFT                                                                0xb
#define UVD_SUVD_CGC_GATE2__MPBE0_MASK                                                                        0x00000001L
#define UVD_SUVD_CGC_GATE2__MPBE1_MASK                                                                        0x00000002L
#define UVD_SUVD_CGC_GATE2__SIT_AV1_MASK                                                                      0x00000004L
#define UVD_SUVD_CGC_GATE2__SDB_AV1_MASK                                                                      0x00000008L
#define UVD_SUVD_CGC_GATE2__MPC1_MASK                                                                         0x00000010L
#define UVD_SUVD_CGC_GATE2__SRE_AV1_ENC_MASK                                                                  0x00000020L
#define UVD_SUVD_CGC_GATE2__CDEFE_MASK                                                                        0x00000040L
#define UVD_SUVD_CGC_GATE2__AVM_0_MASK                                                                        0x00000080L
#define UVD_SUVD_CGC_GATE2__AVM_1_MASK                                                                        0x00000100L
#define UVD_SUVD_CGC_GATE2__SIT_NXT_CMN_MASK                                                                  0x00000200L
#define UVD_SUVD_CGC_GATE2__SIT_NXT_DEC_MASK                                                                  0x00000400L
#define UVD_SUVD_CGC_GATE2__SIT_NXT_ENC_MASK                                                                  0x00000800L
//AVM_SUVD_CGC_CTRL
#define AVM_SUVD_CGC_CTRL__SRE_MODE__SHIFT                                                                    0x0
#define AVM_SUVD_CGC_CTRL__SIT_MODE__SHIFT                                                                    0x1
#define AVM_SUVD_CGC_CTRL__SMP_MODE__SHIFT                                                                    0x2
#define AVM_SUVD_CGC_CTRL__SCM_MODE__SHIFT                                                                    0x3
#define AVM_SUVD_CGC_CTRL__SDB_MODE__SHIFT                                                                    0x4
#define AVM_SUVD_CGC_CTRL__SCLR_MODE__SHIFT                                                                   0x5
#define AVM_SUVD_CGC_CTRL__UVD_SC_MODE__SHIFT                                                                 0x6
#define AVM_SUVD_CGC_CTRL__ENT_MODE__SHIFT                                                                    0x7
#define AVM_SUVD_CGC_CTRL__IME_MODE__SHIFT                                                                    0x8
#define AVM_SUVD_CGC_CTRL__SITE_MODE__SHIFT                                                                   0x9
#define AVM_SUVD_CGC_CTRL__EFC_MODE__SHIFT                                                                    0xa
#define AVM_SUVD_CGC_CTRL__SAOE_MODE__SHIFT                                                                   0xb
#define AVM_SUVD_CGC_CTRL__SMPA_MODE__SHIFT                                                                   0xc
#define AVM_SUVD_CGC_CTRL__MPBE0_MODE__SHIFT                                                                  0xd
#define AVM_SUVD_CGC_CTRL__MPBE1_MODE__SHIFT                                                                  0xe
#define AVM_SUVD_CGC_CTRL__SIT_AV1_MODE__SHIFT                                                                0xf
#define AVM_SUVD_CGC_CTRL__SDB_AV1_MODE__SHIFT                                                                0x10
#define AVM_SUVD_CGC_CTRL__MPC1_MODE__SHIFT                                                                   0x11
#define AVM_SUVD_CGC_CTRL__AVM_0_MODE__SHIFT                                                                  0x12
#define AVM_SUVD_CGC_CTRL__AVM_1_MODE__SHIFT                                                                  0x13
#define AVM_SUVD_CGC_CTRL__SIT_NXT_CMN_MODE__SHIFT                                                            0x14
#define AVM_SUVD_CGC_CTRL__SIT_NXT_DEC_MODE__SHIFT                                                            0x15
#define AVM_SUVD_CGC_CTRL__SIT_NXT_ENC_MODE__SHIFT                                                            0x16
#define AVM_SUVD_CGC_CTRL__FBC_PCLK__SHIFT                                                                    0x1c
#define AVM_SUVD_CGC_CTRL__FBC_CCLK__SHIFT                                                                    0x1d
#define AVM_SUVD_CGC_CTRL__CDEFE_MODE__SHIFT                                                                  0x1e
#define AVM_SUVD_CGC_CTRL__SRE_MODE_MASK                                                                      0x00000001L
#define AVM_SUVD_CGC_CTRL__SIT_MODE_MASK                                                                      0x00000002L
#define AVM_SUVD_CGC_CTRL__SMP_MODE_MASK                                                                      0x00000004L
#define AVM_SUVD_CGC_CTRL__SCM_MODE_MASK                                                                      0x00000008L
#define AVM_SUVD_CGC_CTRL__SDB_MODE_MASK                                                                      0x00000010L
#define AVM_SUVD_CGC_CTRL__SCLR_MODE_MASK                                                                     0x00000020L
#define AVM_SUVD_CGC_CTRL__UVD_SC_MODE_MASK                                                                   0x00000040L
#define AVM_SUVD_CGC_CTRL__ENT_MODE_MASK                                                                      0x00000080L
#define AVM_SUVD_CGC_CTRL__IME_MODE_MASK                                                                      0x00000100L
#define AVM_SUVD_CGC_CTRL__SITE_MODE_MASK                                                                     0x00000200L
#define AVM_SUVD_CGC_CTRL__EFC_MODE_MASK                                                                      0x00000400L
#define AVM_SUVD_CGC_CTRL__SAOE_MODE_MASK                                                                     0x00000800L
#define AVM_SUVD_CGC_CTRL__SMPA_MODE_MASK                                                                     0x00001000L
#define AVM_SUVD_CGC_CTRL__MPBE0_MODE_MASK                                                                    0x00002000L
#define AVM_SUVD_CGC_CTRL__MPBE1_MODE_MASK                                                                    0x00004000L
#define AVM_SUVD_CGC_CTRL__SIT_AV1_MODE_MASK                                                                  0x00008000L
#define AVM_SUVD_CGC_CTRL__SDB_AV1_MODE_MASK                                                                  0x00010000L
#define AVM_SUVD_CGC_CTRL__MPC1_MODE_MASK                                                                     0x00020000L
#define AVM_SUVD_CGC_CTRL__AVM_0_MODE_MASK                                                                    0x00040000L
#define AVM_SUVD_CGC_CTRL__AVM_1_MODE_MASK                                                                    0x00080000L
#define AVM_SUVD_CGC_CTRL__SIT_NXT_CMN_MODE_MASK                                                              0x00100000L
#define AVM_SUVD_CGC_CTRL__SIT_NXT_DEC_MODE_MASK                                                              0x00200000L
#define AVM_SUVD_CGC_CTRL__SIT_NXT_ENC_MODE_MASK                                                              0x00400000L
#define AVM_SUVD_CGC_CTRL__FBC_PCLK_MASK                                                                      0x10000000L
#define AVM_SUVD_CGC_CTRL__FBC_CCLK_MASK                                                                      0x20000000L
#define AVM_SUVD_CGC_CTRL__CDEFE_MODE_MASK                                                                    0x40000000L
//CDEFE_SUVD_CGC_CTRL
#define CDEFE_SUVD_CGC_CTRL__SRE_MODE__SHIFT                                                                  0x0
#define CDEFE_SUVD_CGC_CTRL__SIT_MODE__SHIFT                                                                  0x1
#define CDEFE_SUVD_CGC_CTRL__SMP_MODE__SHIFT                                                                  0x2
#define CDEFE_SUVD_CGC_CTRL__SCM_MODE__SHIFT                                                                  0x3
#define CDEFE_SUVD_CGC_CTRL__SDB_MODE__SHIFT                                                                  0x4
#define CDEFE_SUVD_CGC_CTRL__SCLR_MODE__SHIFT                                                                 0x5
#define CDEFE_SUVD_CGC_CTRL__UVD_SC_MODE__SHIFT                                                               0x6
#define CDEFE_SUVD_CGC_CTRL__ENT_MODE__SHIFT                                                                  0x7
#define CDEFE_SUVD_CGC_CTRL__IME_MODE__SHIFT                                                                  0x8
#define CDEFE_SUVD_CGC_CTRL__SITE_MODE__SHIFT                                                                 0x9
#define CDEFE_SUVD_CGC_CTRL__EFC_MODE__SHIFT                                                                  0xa
#define CDEFE_SUVD_CGC_CTRL__SAOE_MODE__SHIFT                                                                 0xb
#define CDEFE_SUVD_CGC_CTRL__SMPA_MODE__SHIFT                                                                 0xc
#define CDEFE_SUVD_CGC_CTRL__MPBE0_MODE__SHIFT                                                                0xd
#define CDEFE_SUVD_CGC_CTRL__MPBE1_MODE__SHIFT                                                                0xe
#define CDEFE_SUVD_CGC_CTRL__SIT_AV1_MODE__SHIFT                                                              0xf
#define CDEFE_SUVD_CGC_CTRL__SDB_AV1_MODE__SHIFT                                                              0x10
#define CDEFE_SUVD_CGC_CTRL__MPC1_MODE__SHIFT                                                                 0x11
#define CDEFE_SUVD_CGC_CTRL__AVM_0_MODE__SHIFT                                                                0x12
#define CDEFE_SUVD_CGC_CTRL__AVM_1_MODE__SHIFT                                                                0x13
#define CDEFE_SUVD_CGC_CTRL__SIT_NXT_CMN_MODE__SHIFT                                                          0x14
#define CDEFE_SUVD_CGC_CTRL__SIT_NXT_DEC_MODE__SHIFT                                                          0x15
#define CDEFE_SUVD_CGC_CTRL__SIT_NXT_ENC_MODE__SHIFT                                                          0x16
#define CDEFE_SUVD_CGC_CTRL__FBC_PCLK__SHIFT                                                                  0x1c
#define CDEFE_SUVD_CGC_CTRL__FBC_CCLK__SHIFT                                                                  0x1d
#define CDEFE_SUVD_CGC_CTRL__CDEFE_MODE__SHIFT                                                                0x1e
#define CDEFE_SUVD_CGC_CTRL__SRE_MODE_MASK                                                                    0x00000001L
#define CDEFE_SUVD_CGC_CTRL__SIT_MODE_MASK                                                                    0x00000002L
#define CDEFE_SUVD_CGC_CTRL__SMP_MODE_MASK                                                                    0x00000004L
#define CDEFE_SUVD_CGC_CTRL__SCM_MODE_MASK                                                                    0x00000008L
#define CDEFE_SUVD_CGC_CTRL__SDB_MODE_MASK                                                                    0x00000010L
#define CDEFE_SUVD_CGC_CTRL__SCLR_MODE_MASK                                                                   0x00000020L
#define CDEFE_SUVD_CGC_CTRL__UVD_SC_MODE_MASK                                                                 0x00000040L
#define CDEFE_SUVD_CGC_CTRL__ENT_MODE_MASK                                                                    0x00000080L
#define CDEFE_SUVD_CGC_CTRL__IME_MODE_MASK                                                                    0x00000100L
#define CDEFE_SUVD_CGC_CTRL__SITE_MODE_MASK                                                                   0x00000200L
#define CDEFE_SUVD_CGC_CTRL__EFC_MODE_MASK                                                                    0x00000400L
#define CDEFE_SUVD_CGC_CTRL__SAOE_MODE_MASK                                                                   0x00000800L
#define CDEFE_SUVD_CGC_CTRL__SMPA_MODE_MASK                                                                   0x00001000L
#define CDEFE_SUVD_CGC_CTRL__MPBE0_MODE_MASK                                                                  0x00002000L
#define CDEFE_SUVD_CGC_CTRL__MPBE1_MODE_MASK                                                                  0x00004000L
#define CDEFE_SUVD_CGC_CTRL__SIT_AV1_MODE_MASK                                                                0x00008000L
#define CDEFE_SUVD_CGC_CTRL__SDB_AV1_MODE_MASK                                                                0x00010000L
#define CDEFE_SUVD_CGC_CTRL__MPC1_MODE_MASK                                                                   0x00020000L
#define CDEFE_SUVD_CGC_CTRL__AVM_0_MODE_MASK                                                                  0x00040000L
#define CDEFE_SUVD_CGC_CTRL__AVM_1_MODE_MASK                                                                  0x00080000L
#define CDEFE_SUVD_CGC_CTRL__SIT_NXT_CMN_MODE_MASK                                                            0x00100000L
#define CDEFE_SUVD_CGC_CTRL__SIT_NXT_DEC_MODE_MASK                                                            0x00200000L
#define CDEFE_SUVD_CGC_CTRL__SIT_NXT_ENC_MODE_MASK                                                            0x00400000L
#define CDEFE_SUVD_CGC_CTRL__FBC_PCLK_MASK                                                                    0x10000000L
#define CDEFE_SUVD_CGC_CTRL__FBC_CCLK_MASK                                                                    0x20000000L
#define CDEFE_SUVD_CGC_CTRL__CDEFE_MODE_MASK                                                                  0x40000000L
//DBR_SUVD_CGC_CTRL
#define DBR_SUVD_CGC_CTRL__SRE_MODE__SHIFT                                                                    0x0
#define DBR_SUVD_CGC_CTRL__SIT_MODE__SHIFT                                                                    0x1
#define DBR_SUVD_CGC_CTRL__SMP_MODE__SHIFT                                                                    0x2
#define DBR_SUVD_CGC_CTRL__SCM_MODE__SHIFT                                                                    0x3
#define DBR_SUVD_CGC_CTRL__SDB_MODE__SHIFT                                                                    0x4
#define DBR_SUVD_CGC_CTRL__SCLR_MODE__SHIFT                                                                   0x5
#define DBR_SUVD_CGC_CTRL__UVD_SC_MODE__SHIFT                                                                 0x6
#define DBR_SUVD_CGC_CTRL__ENT_MODE__SHIFT                                                                    0x7
#define DBR_SUVD_CGC_CTRL__IME_MODE__SHIFT                                                                    0x8
#define DBR_SUVD_CGC_CTRL__SITE_MODE__SHIFT                                                                   0x9
#define DBR_SUVD_CGC_CTRL__EFC_MODE__SHIFT                                                                    0xa
#define DBR_SUVD_CGC_CTRL__SAOE_MODE__SHIFT                                                                   0xb
#define DBR_SUVD_CGC_CTRL__SMPA_MODE__SHIFT                                                                   0xc
#define DBR_SUVD_CGC_CTRL__MPBE0_MODE__SHIFT                                                                  0xd
#define DBR_SUVD_CGC_CTRL__MPBE1_MODE__SHIFT                                                                  0xe
#define DBR_SUVD_CGC_CTRL__SIT_AV1_MODE__SHIFT                                                                0xf
#define DBR_SUVD_CGC_CTRL__SDB_AV1_MODE__SHIFT                                                                0x10
#define DBR_SUVD_CGC_CTRL__MPC1_MODE__SHIFT                                                                   0x11
#define DBR_SUVD_CGC_CTRL__AVM_0_MODE__SHIFT                                                                  0x12
#define DBR_SUVD_CGC_CTRL__AVM_1_MODE__SHIFT                                                                  0x13
#define DBR_SUVD_CGC_CTRL__SIT_NXT_CMN_MODE__SHIFT                                                            0x14
#define DBR_SUVD_CGC_CTRL__SIT_NXT_DEC_MODE__SHIFT                                                            0x15
#define DBR_SUVD_CGC_CTRL__SIT_NXT_ENC_MODE__SHIFT                                                            0x16
#define DBR_SUVD_CGC_CTRL__FBC_PCLK__SHIFT                                                                    0x1c
#define DBR_SUVD_CGC_CTRL__FBC_CCLK__SHIFT                                                                    0x1d
#define DBR_SUVD_CGC_CTRL__CDEFE_MODE__SHIFT                                                                  0x1e
#define DBR_SUVD_CGC_CTRL__SRE_MODE_MASK                                                                      0x00000001L
#define DBR_SUVD_CGC_CTRL__SIT_MODE_MASK                                                                      0x00000002L
#define DBR_SUVD_CGC_CTRL__SMP_MODE_MASK                                                                      0x00000004L
#define DBR_SUVD_CGC_CTRL__SCM_MODE_MASK                                                                      0x00000008L
#define DBR_SUVD_CGC_CTRL__SDB_MODE_MASK                                                                      0x00000010L
#define DBR_SUVD_CGC_CTRL__SCLR_MODE_MASK                                                                     0x00000020L
#define DBR_SUVD_CGC_CTRL__UVD_SC_MODE_MASK                                                                   0x00000040L
#define DBR_SUVD_CGC_CTRL__ENT_MODE_MASK                                                                      0x00000080L
#define DBR_SUVD_CGC_CTRL__IME_MODE_MASK                                                                      0x00000100L
#define DBR_SUVD_CGC_CTRL__SITE_MODE_MASK                                                                     0x00000200L
#define DBR_SUVD_CGC_CTRL__EFC_MODE_MASK                                                                      0x00000400L
#define DBR_SUVD_CGC_CTRL__SAOE_MODE_MASK                                                                     0x00000800L
#define DBR_SUVD_CGC_CTRL__SMPA_MODE_MASK                                                                     0x00001000L
#define DBR_SUVD_CGC_CTRL__MPBE0_MODE_MASK                                                                    0x00002000L
#define DBR_SUVD_CGC_CTRL__MPBE1_MODE_MASK                                                                    0x00004000L
#define DBR_SUVD_CGC_CTRL__SIT_AV1_MODE_MASK                                                                  0x00008000L
#define DBR_SUVD_CGC_CTRL__SDB_AV1_MODE_MASK                                                                  0x00010000L
#define DBR_SUVD_CGC_CTRL__MPC1_MODE_MASK                                                                     0x00020000L
#define DBR_SUVD_CGC_CTRL__AVM_0_MODE_MASK                                                                    0x00040000L
#define DBR_SUVD_CGC_CTRL__AVM_1_MODE_MASK                                                                    0x00080000L
#define DBR_SUVD_CGC_CTRL__SIT_NXT_CMN_MODE_MASK                                                              0x00100000L
#define DBR_SUVD_CGC_CTRL__SIT_NXT_DEC_MODE_MASK                                                              0x00200000L
#define DBR_SUVD_CGC_CTRL__SIT_NXT_ENC_MODE_MASK                                                              0x00400000L
#define DBR_SUVD_CGC_CTRL__FBC_PCLK_MASK                                                                      0x10000000L
#define DBR_SUVD_CGC_CTRL__FBC_CCLK_MASK                                                                      0x20000000L
#define DBR_SUVD_CGC_CTRL__CDEFE_MODE_MASK                                                                    0x40000000L
//EFC_SUVD_CGC_CTRL
#define EFC_SUVD_CGC_CTRL__SRE_MODE__SHIFT                                                                    0x0
#define EFC_SUVD_CGC_CTRL__SIT_MODE__SHIFT                                                                    0x1
#define EFC_SUVD_CGC_CTRL__SMP_MODE__SHIFT                                                                    0x2
#define EFC_SUVD_CGC_CTRL__SCM_MODE__SHIFT                                                                    0x3
#define EFC_SUVD_CGC_CTRL__SDB_MODE__SHIFT                                                                    0x4
#define EFC_SUVD_CGC_CTRL__SCLR_MODE__SHIFT                                                                   0x5
#define EFC_SUVD_CGC_CTRL__UVD_SC_MODE__SHIFT                                                                 0x6
#define EFC_SUVD_CGC_CTRL__ENT_MODE__SHIFT                                                                    0x7
#define EFC_SUVD_CGC_CTRL__IME_MODE__SHIFT                                                                    0x8
#define EFC_SUVD_CGC_CTRL__SITE_MODE__SHIFT                                                                   0x9
#define EFC_SUVD_CGC_CTRL__EFC_MODE__SHIFT                                                                    0xa
#define EFC_SUVD_CGC_CTRL__SAOE_MODE__SHIFT                                                                   0xb
#define EFC_SUVD_CGC_CTRL__SMPA_MODE__SHIFT                                                                   0xc
#define EFC_SUVD_CGC_CTRL__MPBE0_MODE__SHIFT                                                                  0xd
#define EFC_SUVD_CGC_CTRL__MPBE1_MODE__SHIFT                                                                  0xe
#define EFC_SUVD_CGC_CTRL__SIT_AV1_MODE__SHIFT                                                                0xf
#define EFC_SUVD_CGC_CTRL__SDB_AV1_MODE__SHIFT                                                                0x10
#define EFC_SUVD_CGC_CTRL__MPC1_MODE__SHIFT                                                                   0x11
#define EFC_SUVD_CGC_CTRL__AVM_0_MODE__SHIFT                                                                  0x12
#define EFC_SUVD_CGC_CTRL__AVM_1_MODE__SHIFT                                                                  0x13
#define EFC_SUVD_CGC_CTRL__SIT_NXT_CMN_MODE__SHIFT                                                            0x14
#define EFC_SUVD_CGC_CTRL__SIT_NXT_DEC_MODE__SHIFT                                                            0x15
#define EFC_SUVD_CGC_CTRL__SIT_NXT_ENC_MODE__SHIFT                                                            0x16
#define EFC_SUVD_CGC_CTRL__FBC_PCLK__SHIFT                                                                    0x1c
#define EFC_SUVD_CGC_CTRL__FBC_CCLK__SHIFT                                                                    0x1d
#define EFC_SUVD_CGC_CTRL__CDEFE_MODE__SHIFT                                                                  0x1e
#define EFC_SUVD_CGC_CTRL__SRE_MODE_MASK                                                                      0x00000001L
#define EFC_SUVD_CGC_CTRL__SIT_MODE_MASK                                                                      0x00000002L
#define EFC_SUVD_CGC_CTRL__SMP_MODE_MASK                                                                      0x00000004L
#define EFC_SUVD_CGC_CTRL__SCM_MODE_MASK                                                                      0x00000008L
#define EFC_SUVD_CGC_CTRL__SDB_MODE_MASK                                                                      0x00000010L
#define EFC_SUVD_CGC_CTRL__SCLR_MODE_MASK                                                                     0x00000020L
#define EFC_SUVD_CGC_CTRL__UVD_SC_MODE_MASK                                                                   0x00000040L
#define EFC_SUVD_CGC_CTRL__ENT_MODE_MASK                                                                      0x00000080L
#define EFC_SUVD_CGC_CTRL__IME_MODE_MASK                                                                      0x00000100L
#define EFC_SUVD_CGC_CTRL__SITE_MODE_MASK                                                                     0x00000200L
#define EFC_SUVD_CGC_CTRL__EFC_MODE_MASK                                                                      0x00000400L
#define EFC_SUVD_CGC_CTRL__SAOE_MODE_MASK                                                                     0x00000800L
#define EFC_SUVD_CGC_CTRL__SMPA_MODE_MASK                                                                     0x00001000L
#define EFC_SUVD_CGC_CTRL__MPBE0_MODE_MASK                                                                    0x00002000L
#define EFC_SUVD_CGC_CTRL__MPBE1_MODE_MASK                                                                    0x00004000L
#define EFC_SUVD_CGC_CTRL__SIT_AV1_MODE_MASK                                                                  0x00008000L
#define EFC_SUVD_CGC_CTRL__SDB_AV1_MODE_MASK                                                                  0x00010000L
#define EFC_SUVD_CGC_CTRL__MPC1_MODE_MASK                                                                     0x00020000L
#define EFC_SUVD_CGC_CTRL__AVM_0_MODE_MASK                                                                    0x00040000L
#define EFC_SUVD_CGC_CTRL__AVM_1_MODE_MASK                                                                    0x00080000L
#define EFC_SUVD_CGC_CTRL__SIT_NXT_CMN_MODE_MASK                                                              0x00100000L
#define EFC_SUVD_CGC_CTRL__SIT_NXT_DEC_MODE_MASK                                                              0x00200000L
#define EFC_SUVD_CGC_CTRL__SIT_NXT_ENC_MODE_MASK                                                              0x00400000L
#define EFC_SUVD_CGC_CTRL__FBC_PCLK_MASK                                                                      0x10000000L
#define EFC_SUVD_CGC_CTRL__FBC_CCLK_MASK                                                                      0x20000000L
#define EFC_SUVD_CGC_CTRL__CDEFE_MODE_MASK                                                                    0x40000000L
//ENT_SUVD_CGC_CTRL
#define ENT_SUVD_CGC_CTRL__SRE_MODE__SHIFT                                                                    0x0
#define ENT_SUVD_CGC_CTRL__SIT_MODE__SHIFT                                                                    0x1
#define ENT_SUVD_CGC_CTRL__SMP_MODE__SHIFT                                                                    0x2
#define ENT_SUVD_CGC_CTRL__SCM_MODE__SHIFT                                                                    0x3
#define ENT_SUVD_CGC_CTRL__SDB_MODE__SHIFT                                                                    0x4
#define ENT_SUVD_CGC_CTRL__SCLR_MODE__SHIFT                                                                   0x5
#define ENT_SUVD_CGC_CTRL__UVD_SC_MODE__SHIFT                                                                 0x6
#define ENT_SUVD_CGC_CTRL__ENT_MODE__SHIFT                                                                    0x7
#define ENT_SUVD_CGC_CTRL__IME_MODE__SHIFT                                                                    0x8
#define ENT_SUVD_CGC_CTRL__SITE_MODE__SHIFT                                                                   0x9
#define ENT_SUVD_CGC_CTRL__EFC_MODE__SHIFT                                                                    0xa
#define ENT_SUVD_CGC_CTRL__SAOE_MODE__SHIFT                                                                   0xb
#define ENT_SUVD_CGC_CTRL__SMPA_MODE__SHIFT                                                                   0xc
#define ENT_SUVD_CGC_CTRL__MPBE0_MODE__SHIFT                                                                  0xd
#define ENT_SUVD_CGC_CTRL__MPBE1_MODE__SHIFT                                                                  0xe
#define ENT_SUVD_CGC_CTRL__SIT_AV1_MODE__SHIFT                                                                0xf
#define ENT_SUVD_CGC_CTRL__SDB_AV1_MODE__SHIFT                                                                0x10
#define ENT_SUVD_CGC_CTRL__MPC1_MODE__SHIFT                                                                   0x11
#define ENT_SUVD_CGC_CTRL__AVM_0_MODE__SHIFT                                                                  0x12
#define ENT_SUVD_CGC_CTRL__AVM_1_MODE__SHIFT                                                                  0x13
#define ENT_SUVD_CGC_CTRL__SIT_NXT_CMN_MODE__SHIFT                                                            0x14
#define ENT_SUVD_CGC_CTRL__SIT_NXT_DEC_MODE__SHIFT                                                            0x15
#define ENT_SUVD_CGC_CTRL__SIT_NXT_ENC_MODE__SHIFT                                                            0x16
#define ENT_SUVD_CGC_CTRL__FBC_PCLK__SHIFT                                                                    0x1c
#define ENT_SUVD_CGC_CTRL__FBC_CCLK__SHIFT                                                                    0x1d
#define ENT_SUVD_CGC_CTRL__CDEFE_MODE__SHIFT                                                                  0x1e
#define ENT_SUVD_CGC_CTRL__SRE_MODE_MASK                                                                      0x00000001L
#define ENT_SUVD_CGC_CTRL__SIT_MODE_MASK                                                                      0x00000002L
#define ENT_SUVD_CGC_CTRL__SMP_MODE_MASK                                                                      0x00000004L
#define ENT_SUVD_CGC_CTRL__SCM_MODE_MASK                                                                      0x00000008L
#define ENT_SUVD_CGC_CTRL__SDB_MODE_MASK                                                                      0x00000010L
#define ENT_SUVD_CGC_CTRL__SCLR_MODE_MASK                                                                     0x00000020L
#define ENT_SUVD_CGC_CTRL__UVD_SC_MODE_MASK                                                                   0x00000040L
#define ENT_SUVD_CGC_CTRL__ENT_MODE_MASK                                                                      0x00000080L
#define ENT_SUVD_CGC_CTRL__IME_MODE_MASK                                                                      0x00000100L
#define ENT_SUVD_CGC_CTRL__SITE_MODE_MASK                                                                     0x00000200L
#define ENT_SUVD_CGC_CTRL__EFC_MODE_MASK                                                                      0x00000400L
#define ENT_SUVD_CGC_CTRL__SAOE_MODE_MASK                                                                     0x00000800L
#define ENT_SUVD_CGC_CTRL__SMPA_MODE_MASK                                                                     0x00001000L
#define ENT_SUVD_CGC_CTRL__MPBE0_MODE_MASK                                                                    0x00002000L
#define ENT_SUVD_CGC_CTRL__MPBE1_MODE_MASK                                                                    0x00004000L
#define ENT_SUVD_CGC_CTRL__SIT_AV1_MODE_MASK                                                                  0x00008000L
#define ENT_SUVD_CGC_CTRL__SDB_AV1_MODE_MASK                                                                  0x00010000L
#define ENT_SUVD_CGC_CTRL__MPC1_MODE_MASK                                                                     0x00020000L
#define ENT_SUVD_CGC_CTRL__AVM_0_MODE_MASK                                                                    0x00040000L
#define ENT_SUVD_CGC_CTRL__AVM_1_MODE_MASK                                                                    0x00080000L
#define ENT_SUVD_CGC_CTRL__SIT_NXT_CMN_MODE_MASK                                                              0x00100000L
#define ENT_SUVD_CGC_CTRL__SIT_NXT_DEC_MODE_MASK                                                              0x00200000L
#define ENT_SUVD_CGC_CTRL__SIT_NXT_ENC_MODE_MASK                                                              0x00400000L
#define ENT_SUVD_CGC_CTRL__FBC_PCLK_MASK                                                                      0x10000000L
#define ENT_SUVD_CGC_CTRL__FBC_CCLK_MASK                                                                      0x20000000L
#define ENT_SUVD_CGC_CTRL__CDEFE_MODE_MASK                                                                    0x40000000L
//IME_SUVD_CGC_CTRL
#define IME_SUVD_CGC_CTRL__SRE_MODE__SHIFT                                                                    0x0
#define IME_SUVD_CGC_CTRL__SIT_MODE__SHIFT                                                                    0x1
#define IME_SUVD_CGC_CTRL__SMP_MODE__SHIFT                                                                    0x2
#define IME_SUVD_CGC_CTRL__SCM_MODE__SHIFT                                                                    0x3
#define IME_SUVD_CGC_CTRL__SDB_MODE__SHIFT                                                                    0x4
#define IME_SUVD_CGC_CTRL__SCLR_MODE__SHIFT                                                                   0x5
#define IME_SUVD_CGC_CTRL__UVD_SC_MODE__SHIFT                                                                 0x6
#define IME_SUVD_CGC_CTRL__ENT_MODE__SHIFT                                                                    0x7
#define IME_SUVD_CGC_CTRL__IME_MODE__SHIFT                                                                    0x8
#define IME_SUVD_CGC_CTRL__SITE_MODE__SHIFT                                                                   0x9
#define IME_SUVD_CGC_CTRL__EFC_MODE__SHIFT                                                                    0xa
#define IME_SUVD_CGC_CTRL__SAOE_MODE__SHIFT                                                                   0xb
#define IME_SUVD_CGC_CTRL__SMPA_MODE__SHIFT                                                                   0xc
#define IME_SUVD_CGC_CTRL__MPBE0_MODE__SHIFT                                                                  0xd
#define IME_SUVD_CGC_CTRL__MPBE1_MODE__SHIFT                                                                  0xe
#define IME_SUVD_CGC_CTRL__SIT_AV1_MODE__SHIFT                                                                0xf
#define IME_SUVD_CGC_CTRL__SDB_AV1_MODE__SHIFT                                                                0x10
#define IME_SUVD_CGC_CTRL__MPC1_MODE__SHIFT                                                                   0x11
#define IME_SUVD_CGC_CTRL__AVM_0_MODE__SHIFT                                                                  0x12
#define IME_SUVD_CGC_CTRL__AVM_1_MODE__SHIFT                                                                  0x13
#define IME_SUVD_CGC_CTRL__SIT_NXT_CMN_MODE__SHIFT                                                            0x14
#define IME_SUVD_CGC_CTRL__SIT_NXT_DEC_MODE__SHIFT                                                            0x15
#define IME_SUVD_CGC_CTRL__SIT_NXT_ENC_MODE__SHIFT                                                            0x16
#define IME_SUVD_CGC_CTRL__FBC_PCLK__SHIFT                                                                    0x1c
#define IME_SUVD_CGC_CTRL__FBC_CCLK__SHIFT                                                                    0x1d
#define IME_SUVD_CGC_CTRL__CDEFE_MODE__SHIFT                                                                  0x1e
#define IME_SUVD_CGC_CTRL__SRE_MODE_MASK                                                                      0x00000001L
#define IME_SUVD_CGC_CTRL__SIT_MODE_MASK                                                                      0x00000002L
#define IME_SUVD_CGC_CTRL__SMP_MODE_MASK                                                                      0x00000004L
#define IME_SUVD_CGC_CTRL__SCM_MODE_MASK                                                                      0x00000008L
#define IME_SUVD_CGC_CTRL__SDB_MODE_MASK                                                                      0x00000010L
#define IME_SUVD_CGC_CTRL__SCLR_MODE_MASK                                                                     0x00000020L
#define IME_SUVD_CGC_CTRL__UVD_SC_MODE_MASK                                                                   0x00000040L
#define IME_SUVD_CGC_CTRL__ENT_MODE_MASK                                                                      0x00000080L
#define IME_SUVD_CGC_CTRL__IME_MODE_MASK                                                                      0x00000100L
#define IME_SUVD_CGC_CTRL__SITE_MODE_MASK                                                                     0x00000200L
#define IME_SUVD_CGC_CTRL__EFC_MODE_MASK                                                                      0x00000400L
#define IME_SUVD_CGC_CTRL__SAOE_MODE_MASK                                                                     0x00000800L
#define IME_SUVD_CGC_CTRL__SMPA_MODE_MASK                                                                     0x00001000L
#define IME_SUVD_CGC_CTRL__MPBE0_MODE_MASK                                                                    0x00002000L
#define IME_SUVD_CGC_CTRL__MPBE1_MODE_MASK                                                                    0x00004000L
#define IME_SUVD_CGC_CTRL__SIT_AV1_MODE_MASK                                                                  0x00008000L
#define IME_SUVD_CGC_CTRL__SDB_AV1_MODE_MASK                                                                  0x00010000L
#define IME_SUVD_CGC_CTRL__MPC1_MODE_MASK                                                                     0x00020000L
#define IME_SUVD_CGC_CTRL__AVM_0_MODE_MASK                                                                    0x00040000L
#define IME_SUVD_CGC_CTRL__AVM_1_MODE_MASK                                                                    0x00080000L
#define IME_SUVD_CGC_CTRL__SIT_NXT_CMN_MODE_MASK                                                              0x00100000L
#define IME_SUVD_CGC_CTRL__SIT_NXT_DEC_MODE_MASK                                                              0x00200000L
#define IME_SUVD_CGC_CTRL__SIT_NXT_ENC_MODE_MASK                                                              0x00400000L
#define IME_SUVD_CGC_CTRL__FBC_PCLK_MASK                                                                      0x10000000L
#define IME_SUVD_CGC_CTRL__FBC_CCLK_MASK                                                                      0x20000000L
#define IME_SUVD_CGC_CTRL__CDEFE_MODE_MASK                                                                    0x40000000L
//MPC1_SUVD_CGC_CTRL
#define MPC1_SUVD_CGC_CTRL__SRE_MODE__SHIFT                                                                   0x0
#define MPC1_SUVD_CGC_CTRL__SIT_MODE__SHIFT                                                                   0x1
#define MPC1_SUVD_CGC_CTRL__SMP_MODE__SHIFT                                                                   0x2
#define MPC1_SUVD_CGC_CTRL__SCM_MODE__SHIFT                                                                   0x3
#define MPC1_SUVD_CGC_CTRL__SDB_MODE__SHIFT                                                                   0x4
#define MPC1_SUVD_CGC_CTRL__SCLR_MODE__SHIFT                                                                  0x5
#define MPC1_SUVD_CGC_CTRL__UVD_SC_MODE__SHIFT                                                                0x6
#define MPC1_SUVD_CGC_CTRL__ENT_MODE__SHIFT                                                                   0x7
#define MPC1_SUVD_CGC_CTRL__IME_MODE__SHIFT                                                                   0x8
#define MPC1_SUVD_CGC_CTRL__SITE_MODE__SHIFT                                                                  0x9
#define MPC1_SUVD_CGC_CTRL__EFC_MODE__SHIFT                                                                   0xa
#define MPC1_SUVD_CGC_CTRL__SAOE_MODE__SHIFT                                                                  0xb
#define MPC1_SUVD_CGC_CTRL__SMPA_MODE__SHIFT                                                                  0xc
#define MPC1_SUVD_CGC_CTRL__MPBE0_MODE__SHIFT                                                                 0xd
#define MPC1_SUVD_CGC_CTRL__MPBE1_MODE__SHIFT                                                                 0xe
#define MPC1_SUVD_CGC_CTRL__SIT_AV1_MODE__SHIFT                                                               0xf
#define MPC1_SUVD_CGC_CTRL__SDB_AV1_MODE__SHIFT                                                               0x10
#define MPC1_SUVD_CGC_CTRL__MPC1_MODE__SHIFT                                                                  0x11
#define MPC1_SUVD_CGC_CTRL__AVM_0_MODE__SHIFT                                                                 0x12
#define MPC1_SUVD_CGC_CTRL__AVM_1_MODE__SHIFT                                                                 0x13
#define MPC1_SUVD_CGC_CTRL__SIT_NXT_CMN_MODE__SHIFT                                                           0x14
#define MPC1_SUVD_CGC_CTRL__SIT_NXT_DEC_MODE__SHIFT                                                           0x15
#define MPC1_SUVD_CGC_CTRL__SIT_NXT_ENC_MODE__SHIFT                                                           0x16
#define MPC1_SUVD_CGC_CTRL__FBC_PCLK__SHIFT                                                                   0x1c
#define MPC1_SUVD_CGC_CTRL__FBC_CCLK__SHIFT                                                                   0x1d
#define MPC1_SUVD_CGC_CTRL__CDEFE_MODE__SHIFT                                                                 0x1e
#define MPC1_SUVD_CGC_CTRL__SRE_MODE_MASK                                                                     0x00000001L
#define MPC1_SUVD_CGC_CTRL__SIT_MODE_MASK                                                                     0x00000002L
#define MPC1_SUVD_CGC_CTRL__SMP_MODE_MASK                                                                     0x00000004L
#define MPC1_SUVD_CGC_CTRL__SCM_MODE_MASK                                                                     0x00000008L
#define MPC1_SUVD_CGC_CTRL__SDB_MODE_MASK                                                                     0x00000010L
#define MPC1_SUVD_CGC_CTRL__SCLR_MODE_MASK                                                                    0x00000020L
#define MPC1_SUVD_CGC_CTRL__UVD_SC_MODE_MASK                                                                  0x00000040L
#define MPC1_SUVD_CGC_CTRL__ENT_MODE_MASK                                                                     0x00000080L
#define MPC1_SUVD_CGC_CTRL__IME_MODE_MASK                                                                     0x00000100L
#define MPC1_SUVD_CGC_CTRL__SITE_MODE_MASK                                                                    0x00000200L
#define MPC1_SUVD_CGC_CTRL__EFC_MODE_MASK                                                                     0x00000400L
#define MPC1_SUVD_CGC_CTRL__SAOE_MODE_MASK                                                                    0x00000800L
#define MPC1_SUVD_CGC_CTRL__SMPA_MODE_MASK                                                                    0x00001000L
#define MPC1_SUVD_CGC_CTRL__MPBE0_MODE_MASK                                                                   0x00002000L
#define MPC1_SUVD_CGC_CTRL__MPBE1_MODE_MASK                                                                   0x00004000L
#define MPC1_SUVD_CGC_CTRL__SIT_AV1_MODE_MASK                                                                 0x00008000L
#define MPC1_SUVD_CGC_CTRL__SDB_AV1_MODE_MASK                                                                 0x00010000L
#define MPC1_SUVD_CGC_CTRL__MPC1_MODE_MASK                                                                    0x00020000L
#define MPC1_SUVD_CGC_CTRL__AVM_0_MODE_MASK                                                                   0x00040000L
#define MPC1_SUVD_CGC_CTRL__AVM_1_MODE_MASK                                                                   0x00080000L
#define MPC1_SUVD_CGC_CTRL__SIT_NXT_CMN_MODE_MASK                                                             0x00100000L
#define MPC1_SUVD_CGC_CTRL__SIT_NXT_DEC_MODE_MASK                                                             0x00200000L
#define MPC1_SUVD_CGC_CTRL__SIT_NXT_ENC_MODE_MASK                                                             0x00400000L
#define MPC1_SUVD_CGC_CTRL__FBC_PCLK_MASK                                                                     0x10000000L
#define MPC1_SUVD_CGC_CTRL__FBC_CCLK_MASK                                                                     0x20000000L
#define MPC1_SUVD_CGC_CTRL__CDEFE_MODE_MASK                                                                   0x40000000L
//PPU_SUVD_CGC_CTRL
#define PPU_SUVD_CGC_CTRL__SRE_MODE__SHIFT                                                                    0x0
#define PPU_SUVD_CGC_CTRL__SIT_MODE__SHIFT                                                                    0x1
#define PPU_SUVD_CGC_CTRL__SMP_MODE__SHIFT                                                                    0x2
#define PPU_SUVD_CGC_CTRL__SCM_MODE__SHIFT                                                                    0x3
#define PPU_SUVD_CGC_CTRL__SDB_MODE__SHIFT                                                                    0x4
#define PPU_SUVD_CGC_CTRL__SCLR_MODE__SHIFT                                                                   0x5
#define PPU_SUVD_CGC_CTRL__UVD_SC_MODE__SHIFT                                                                 0x6
#define PPU_SUVD_CGC_CTRL__ENT_MODE__SHIFT                                                                    0x7
#define PPU_SUVD_CGC_CTRL__IME_MODE__SHIFT                                                                    0x8
#define PPU_SUVD_CGC_CTRL__SITE_MODE__SHIFT                                                                   0x9
#define PPU_SUVD_CGC_CTRL__EFC_MODE__SHIFT                                                                    0xa
#define PPU_SUVD_CGC_CTRL__SAOE_MODE__SHIFT                                                                   0xb
#define PPU_SUVD_CGC_CTRL__SMPA_MODE__SHIFT                                                                   0xc
#define PPU_SUVD_CGC_CTRL__MPBE0_MODE__SHIFT                                                                  0xd
#define PPU_SUVD_CGC_CTRL__MPBE1_MODE__SHIFT                                                                  0xe
#define PPU_SUVD_CGC_CTRL__SIT_AV1_MODE__SHIFT                                                                0xf
#define PPU_SUVD_CGC_CTRL__SDB_AV1_MODE__SHIFT                                                                0x10
#define PPU_SUVD_CGC_CTRL__MPC1_MODE__SHIFT                                                                   0x11
#define PPU_SUVD_CGC_CTRL__AVM_0_MODE__SHIFT                                                                  0x12
#define PPU_SUVD_CGC_CTRL__AVM_1_MODE__SHIFT                                                                  0x13
#define PPU_SUVD_CGC_CTRL__SIT_NXT_CMN_MODE__SHIFT                                                            0x14
#define PPU_SUVD_CGC_CTRL__SIT_NXT_DEC_MODE__SHIFT                                                            0x15
#define PPU_SUVD_CGC_CTRL__SIT_NXT_ENC_MODE__SHIFT                                                            0x16
#define PPU_SUVD_CGC_CTRL__FBC_PCLK__SHIFT                                                                    0x1c
#define PPU_SUVD_CGC_CTRL__FBC_CCLK__SHIFT                                                                    0x1d
#define PPU_SUVD_CGC_CTRL__CDEFE_MODE__SHIFT                                                                  0x1e
#define PPU_SUVD_CGC_CTRL__SRE_MODE_MASK                                                                      0x00000001L
#define PPU_SUVD_CGC_CTRL__SIT_MODE_MASK                                                                      0x00000002L
#define PPU_SUVD_CGC_CTRL__SMP_MODE_MASK                                                                      0x00000004L
#define PPU_SUVD_CGC_CTRL__SCM_MODE_MASK                                                                      0x00000008L
#define PPU_SUVD_CGC_CTRL__SDB_MODE_MASK                                                                      0x00000010L
#define PPU_SUVD_CGC_CTRL__SCLR_MODE_MASK                                                                     0x00000020L
#define PPU_SUVD_CGC_CTRL__UVD_SC_MODE_MASK                                                                   0x00000040L
#define PPU_SUVD_CGC_CTRL__ENT_MODE_MASK                                                                      0x00000080L
#define PPU_SUVD_CGC_CTRL__IME_MODE_MASK                                                                      0x00000100L
#define PPU_SUVD_CGC_CTRL__SITE_MODE_MASK                                                                     0x00000200L
#define PPU_SUVD_CGC_CTRL__EFC_MODE_MASK                                                                      0x00000400L
#define PPU_SUVD_CGC_CTRL__SAOE_MODE_MASK                                                                     0x00000800L
#define PPU_SUVD_CGC_CTRL__SMPA_MODE_MASK                                                                     0x00001000L
#define PPU_SUVD_CGC_CTRL__MPBE0_MODE_MASK                                                                    0x00002000L
#define PPU_SUVD_CGC_CTRL__MPBE1_MODE_MASK                                                                    0x00004000L
#define PPU_SUVD_CGC_CTRL__SIT_AV1_MODE_MASK                                                                  0x00008000L
#define PPU_SUVD_CGC_CTRL__SDB_AV1_MODE_MASK                                                                  0x00010000L
#define PPU_SUVD_CGC_CTRL__MPC1_MODE_MASK                                                                     0x00020000L
#define PPU_SUVD_CGC_CTRL__AVM_0_MODE_MASK                                                                    0x00040000L
#define PPU_SUVD_CGC_CTRL__AVM_1_MODE_MASK                                                                    0x00080000L
#define PPU_SUVD_CGC_CTRL__SIT_NXT_CMN_MODE_MASK                                                              0x00100000L
#define PPU_SUVD_CGC_CTRL__SIT_NXT_DEC_MODE_MASK                                                              0x00200000L
#define PPU_SUVD_CGC_CTRL__SIT_NXT_ENC_MODE_MASK                                                              0x00400000L
#define PPU_SUVD_CGC_CTRL__FBC_PCLK_MASK                                                                      0x10000000L
#define PPU_SUVD_CGC_CTRL__FBC_CCLK_MASK                                                                      0x20000000L
#define PPU_SUVD_CGC_CTRL__CDEFE_MODE_MASK                                                                    0x40000000L
//SAOE_SUVD_CGC_CTRL
#define SAOE_SUVD_CGC_CTRL__SRE_MODE__SHIFT                                                                   0x0
#define SAOE_SUVD_CGC_CTRL__SIT_MODE__SHIFT                                                                   0x1
#define SAOE_SUVD_CGC_CTRL__SMP_MODE__SHIFT                                                                   0x2
#define SAOE_SUVD_CGC_CTRL__SCM_MODE__SHIFT                                                                   0x3
#define SAOE_SUVD_CGC_CTRL__SDB_MODE__SHIFT                                                                   0x4
#define SAOE_SUVD_CGC_CTRL__SCLR_MODE__SHIFT                                                                  0x5
#define SAOE_SUVD_CGC_CTRL__UVD_SC_MODE__SHIFT                                                                0x6
#define SAOE_SUVD_CGC_CTRL__ENT_MODE__SHIFT                                                                   0x7
#define SAOE_SUVD_CGC_CTRL__IME_MODE__SHIFT                                                                   0x8
#define SAOE_SUVD_CGC_CTRL__SITE_MODE__SHIFT                                                                  0x9
#define SAOE_SUVD_CGC_CTRL__EFC_MODE__SHIFT                                                                   0xa
#define SAOE_SUVD_CGC_CTRL__SAOE_MODE__SHIFT                                                                  0xb
#define SAOE_SUVD_CGC_CTRL__SMPA_MODE__SHIFT                                                                  0xc
#define SAOE_SUVD_CGC_CTRL__MPBE0_MODE__SHIFT                                                                 0xd
#define SAOE_SUVD_CGC_CTRL__MPBE1_MODE__SHIFT                                                                 0xe
#define SAOE_SUVD_CGC_CTRL__SIT_AV1_MODE__SHIFT                                                               0xf
#define SAOE_SUVD_CGC_CTRL__SDB_AV1_MODE__SHIFT                                                               0x10
#define SAOE_SUVD_CGC_CTRL__MPC1_MODE__SHIFT                                                                  0x11
#define SAOE_SUVD_CGC_CTRL__AVM_0_MODE__SHIFT                                                                 0x12
#define SAOE_SUVD_CGC_CTRL__AVM_1_MODE__SHIFT                                                                 0x13
#define SAOE_SUVD_CGC_CTRL__SIT_NXT_CMN_MODE__SHIFT                                                           0x14
#define SAOE_SUVD_CGC_CTRL__SIT_NXT_DEC_MODE__SHIFT                                                           0x15
#define SAOE_SUVD_CGC_CTRL__SIT_NXT_ENC_MODE__SHIFT                                                           0x16
#define SAOE_SUVD_CGC_CTRL__FBC_PCLK__SHIFT                                                                   0x1c
#define SAOE_SUVD_CGC_CTRL__FBC_CCLK__SHIFT                                                                   0x1d
#define SAOE_SUVD_CGC_CTRL__CDEFE_MODE__SHIFT                                                                 0x1e
#define SAOE_SUVD_CGC_CTRL__SRE_MODE_MASK                                                                     0x00000001L
#define SAOE_SUVD_CGC_CTRL__SIT_MODE_MASK                                                                     0x00000002L
#define SAOE_SUVD_CGC_CTRL__SMP_MODE_MASK                                                                     0x00000004L
#define SAOE_SUVD_CGC_CTRL__SCM_MODE_MASK                                                                     0x00000008L
#define SAOE_SUVD_CGC_CTRL__SDB_MODE_MASK                                                                     0x00000010L
#define SAOE_SUVD_CGC_CTRL__SCLR_MODE_MASK                                                                    0x00000020L
#define SAOE_SUVD_CGC_CTRL__UVD_SC_MODE_MASK                                                                  0x00000040L
#define SAOE_SUVD_CGC_CTRL__ENT_MODE_MASK                                                                     0x00000080L
#define SAOE_SUVD_CGC_CTRL__IME_MODE_MASK                                                                     0x00000100L
#define SAOE_SUVD_CGC_CTRL__SITE_MODE_MASK                                                                    0x00000200L
#define SAOE_SUVD_CGC_CTRL__EFC_MODE_MASK                                                                     0x00000400L
#define SAOE_SUVD_CGC_CTRL__SAOE_MODE_MASK                                                                    0x00000800L
#define SAOE_SUVD_CGC_CTRL__SMPA_MODE_MASK                                                                    0x00001000L
#define SAOE_SUVD_CGC_CTRL__MPBE0_MODE_MASK                                                                   0x00002000L
#define SAOE_SUVD_CGC_CTRL__MPBE1_MODE_MASK                                                                   0x00004000L
#define SAOE_SUVD_CGC_CTRL__SIT_AV1_MODE_MASK                                                                 0x00008000L
#define SAOE_SUVD_CGC_CTRL__SDB_AV1_MODE_MASK                                                                 0x00010000L
#define SAOE_SUVD_CGC_CTRL__MPC1_MODE_MASK                                                                    0x00020000L
#define SAOE_SUVD_CGC_CTRL__AVM_0_MODE_MASK                                                                   0x00040000L
#define SAOE_SUVD_CGC_CTRL__AVM_1_MODE_MASK                                                                   0x00080000L
#define SAOE_SUVD_CGC_CTRL__SIT_NXT_CMN_MODE_MASK                                                             0x00100000L
#define SAOE_SUVD_CGC_CTRL__SIT_NXT_DEC_MODE_MASK                                                             0x00200000L
#define SAOE_SUVD_CGC_CTRL__SIT_NXT_ENC_MODE_MASK                                                             0x00400000L
#define SAOE_SUVD_CGC_CTRL__FBC_PCLK_MASK                                                                     0x10000000L
#define SAOE_SUVD_CGC_CTRL__FBC_CCLK_MASK                                                                     0x20000000L
#define SAOE_SUVD_CGC_CTRL__CDEFE_MODE_MASK                                                                   0x40000000L
//SCM_SUVD_CGC_CTRL
#define SCM_SUVD_CGC_CTRL__SRE_MODE__SHIFT                                                                    0x0
#define SCM_SUVD_CGC_CTRL__SIT_MODE__SHIFT                                                                    0x1
#define SCM_SUVD_CGC_CTRL__SMP_MODE__SHIFT                                                                    0x2
#define SCM_SUVD_CGC_CTRL__SCM_MODE__SHIFT                                                                    0x3
#define SCM_SUVD_CGC_CTRL__SDB_MODE__SHIFT                                                                    0x4
#define SCM_SUVD_CGC_CTRL__SCLR_MODE__SHIFT                                                                   0x5
#define SCM_SUVD_CGC_CTRL__UVD_SC_MODE__SHIFT                                                                 0x6
#define SCM_SUVD_CGC_CTRL__ENT_MODE__SHIFT                                                                    0x7
#define SCM_SUVD_CGC_CTRL__IME_MODE__SHIFT                                                                    0x8
#define SCM_SUVD_CGC_CTRL__SITE_MODE__SHIFT                                                                   0x9
#define SCM_SUVD_CGC_CTRL__EFC_MODE__SHIFT                                                                    0xa
#define SCM_SUVD_CGC_CTRL__SAOE_MODE__SHIFT                                                                   0xb
#define SCM_SUVD_CGC_CTRL__SMPA_MODE__SHIFT                                                                   0xc
#define SCM_SUVD_CGC_CTRL__MPBE0_MODE__SHIFT                                                                  0xd
#define SCM_SUVD_CGC_CTRL__MPBE1_MODE__SHIFT                                                                  0xe
#define SCM_SUVD_CGC_CTRL__SIT_AV1_MODE__SHIFT                                                                0xf
#define SCM_SUVD_CGC_CTRL__SDB_AV1_MODE__SHIFT                                                                0x10
#define SCM_SUVD_CGC_CTRL__MPC1_MODE__SHIFT                                                                   0x11
#define SCM_SUVD_CGC_CTRL__AVM_0_MODE__SHIFT                                                                  0x12
#define SCM_SUVD_CGC_CTRL__AVM_1_MODE__SHIFT                                                                  0x13
#define SCM_SUVD_CGC_CTRL__SIT_NXT_CMN_MODE__SHIFT                                                            0x14
#define SCM_SUVD_CGC_CTRL__SIT_NXT_DEC_MODE__SHIFT                                                            0x15
#define SCM_SUVD_CGC_CTRL__SIT_NXT_ENC_MODE__SHIFT                                                            0x16
#define SCM_SUVD_CGC_CTRL__FBC_PCLK__SHIFT                                                                    0x1c
#define SCM_SUVD_CGC_CTRL__FBC_CCLK__SHIFT                                                                    0x1d
#define SCM_SUVD_CGC_CTRL__CDEFE_MODE__SHIFT                                                                  0x1e
#define SCM_SUVD_CGC_CTRL__SRE_MODE_MASK                                                                      0x00000001L
#define SCM_SUVD_CGC_CTRL__SIT_MODE_MASK                                                                      0x00000002L
#define SCM_SUVD_CGC_CTRL__SMP_MODE_MASK                                                                      0x00000004L
#define SCM_SUVD_CGC_CTRL__SCM_MODE_MASK                                                                      0x00000008L
#define SCM_SUVD_CGC_CTRL__SDB_MODE_MASK                                                                      0x00000010L
#define SCM_SUVD_CGC_CTRL__SCLR_MODE_MASK                                                                     0x00000020L
#define SCM_SUVD_CGC_CTRL__UVD_SC_MODE_MASK                                                                   0x00000040L
#define SCM_SUVD_CGC_CTRL__ENT_MODE_MASK                                                                      0x00000080L
#define SCM_SUVD_CGC_CTRL__IME_MODE_MASK                                                                      0x00000100L
#define SCM_SUVD_CGC_CTRL__SITE_MODE_MASK                                                                     0x00000200L
#define SCM_SUVD_CGC_CTRL__EFC_MODE_MASK                                                                      0x00000400L
#define SCM_SUVD_CGC_CTRL__SAOE_MODE_MASK                                                                     0x00000800L
#define SCM_SUVD_CGC_CTRL__SMPA_MODE_MASK                                                                     0x00001000L
#define SCM_SUVD_CGC_CTRL__MPBE0_MODE_MASK                                                                    0x00002000L
#define SCM_SUVD_CGC_CTRL__MPBE1_MODE_MASK                                                                    0x00004000L
#define SCM_SUVD_CGC_CTRL__SIT_AV1_MODE_MASK                                                                  0x00008000L
#define SCM_SUVD_CGC_CTRL__SDB_AV1_MODE_MASK                                                                  0x00010000L
#define SCM_SUVD_CGC_CTRL__MPC1_MODE_MASK                                                                     0x00020000L
#define SCM_SUVD_CGC_CTRL__AVM_0_MODE_MASK                                                                    0x00040000L
#define SCM_SUVD_CGC_CTRL__AVM_1_MODE_MASK                                                                    0x00080000L
#define SCM_SUVD_CGC_CTRL__SIT_NXT_CMN_MODE_MASK                                                              0x00100000L
#define SCM_SUVD_CGC_CTRL__SIT_NXT_DEC_MODE_MASK                                                              0x00200000L
#define SCM_SUVD_CGC_CTRL__SIT_NXT_ENC_MODE_MASK                                                              0x00400000L
#define SCM_SUVD_CGC_CTRL__FBC_PCLK_MASK                                                                      0x10000000L
#define SCM_SUVD_CGC_CTRL__FBC_CCLK_MASK                                                                      0x20000000L
#define SCM_SUVD_CGC_CTRL__CDEFE_MODE_MASK                                                                    0x40000000L
//SDB_SUVD_CGC_CTRL
#define SDB_SUVD_CGC_CTRL__SRE_MODE__SHIFT                                                                    0x0
#define SDB_SUVD_CGC_CTRL__SIT_MODE__SHIFT                                                                    0x1
#define SDB_SUVD_CGC_CTRL__SMP_MODE__SHIFT                                                                    0x2
#define SDB_SUVD_CGC_CTRL__SCM_MODE__SHIFT                                                                    0x3
#define SDB_SUVD_CGC_CTRL__SDB_MODE__SHIFT                                                                    0x4
#define SDB_SUVD_CGC_CTRL__SCLR_MODE__SHIFT                                                                   0x5
#define SDB_SUVD_CGC_CTRL__UVD_SC_MODE__SHIFT                                                                 0x6
#define SDB_SUVD_CGC_CTRL__ENT_MODE__SHIFT                                                                    0x7
#define SDB_SUVD_CGC_CTRL__IME_MODE__SHIFT                                                                    0x8
#define SDB_SUVD_CGC_CTRL__SITE_MODE__SHIFT                                                                   0x9
#define SDB_SUVD_CGC_CTRL__EFC_MODE__SHIFT                                                                    0xa
#define SDB_SUVD_CGC_CTRL__SAOE_MODE__SHIFT                                                                   0xb
#define SDB_SUVD_CGC_CTRL__SMPA_MODE__SHIFT                                                                   0xc
#define SDB_SUVD_CGC_CTRL__MPBE0_MODE__SHIFT                                                                  0xd
#define SDB_SUVD_CGC_CTRL__MPBE1_MODE__SHIFT                                                                  0xe
#define SDB_SUVD_CGC_CTRL__SIT_AV1_MODE__SHIFT                                                                0xf
#define SDB_SUVD_CGC_CTRL__SDB_AV1_MODE__SHIFT                                                                0x10
#define SDB_SUVD_CGC_CTRL__MPC1_MODE__SHIFT                                                                   0x11
#define SDB_SUVD_CGC_CTRL__AVM_0_MODE__SHIFT                                                                  0x12
#define SDB_SUVD_CGC_CTRL__AVM_1_MODE__SHIFT                                                                  0x13
#define SDB_SUVD_CGC_CTRL__SIT_NXT_CMN_MODE__SHIFT                                                            0x14
#define SDB_SUVD_CGC_CTRL__SIT_NXT_DEC_MODE__SHIFT                                                            0x15
#define SDB_SUVD_CGC_CTRL__SIT_NXT_ENC_MODE__SHIFT                                                            0x16
#define SDB_SUVD_CGC_CTRL__FBC_PCLK__SHIFT                                                                    0x1c
#define SDB_SUVD_CGC_CTRL__FBC_CCLK__SHIFT                                                                    0x1d
#define SDB_SUVD_CGC_CTRL__CDEFE_MODE__SHIFT                                                                  0x1e
#define SDB_SUVD_CGC_CTRL__SRE_MODE_MASK                                                                      0x00000001L
#define SDB_SUVD_CGC_CTRL__SIT_MODE_MASK                                                                      0x00000002L
#define SDB_SUVD_CGC_CTRL__SMP_MODE_MASK                                                                      0x00000004L
#define SDB_SUVD_CGC_CTRL__SCM_MODE_MASK                                                                      0x00000008L
#define SDB_SUVD_CGC_CTRL__SDB_MODE_MASK                                                                      0x00000010L
#define SDB_SUVD_CGC_CTRL__SCLR_MODE_MASK                                                                     0x00000020L
#define SDB_SUVD_CGC_CTRL__UVD_SC_MODE_MASK                                                                   0x00000040L
#define SDB_SUVD_CGC_CTRL__ENT_MODE_MASK                                                                      0x00000080L
#define SDB_SUVD_CGC_CTRL__IME_MODE_MASK                                                                      0x00000100L
#define SDB_SUVD_CGC_CTRL__SITE_MODE_MASK                                                                     0x00000200L
#define SDB_SUVD_CGC_CTRL__EFC_MODE_MASK                                                                      0x00000400L
#define SDB_SUVD_CGC_CTRL__SAOE_MODE_MASK                                                                     0x00000800L
#define SDB_SUVD_CGC_CTRL__SMPA_MODE_MASK                                                                     0x00001000L
#define SDB_SUVD_CGC_CTRL__MPBE0_MODE_MASK                                                                    0x00002000L
#define SDB_SUVD_CGC_CTRL__MPBE1_MODE_MASK                                                                    0x00004000L
#define SDB_SUVD_CGC_CTRL__SIT_AV1_MODE_MASK                                                                  0x00008000L
#define SDB_SUVD_CGC_CTRL__SDB_AV1_MODE_MASK                                                                  0x00010000L
#define SDB_SUVD_CGC_CTRL__MPC1_MODE_MASK                                                                     0x00020000L
#define SDB_SUVD_CGC_CTRL__AVM_0_MODE_MASK                                                                    0x00040000L
#define SDB_SUVD_CGC_CTRL__AVM_1_MODE_MASK                                                                    0x00080000L
#define SDB_SUVD_CGC_CTRL__SIT_NXT_CMN_MODE_MASK                                                              0x00100000L
#define SDB_SUVD_CGC_CTRL__SIT_NXT_DEC_MODE_MASK                                                              0x00200000L
#define SDB_SUVD_CGC_CTRL__SIT_NXT_ENC_MODE_MASK                                                              0x00400000L
#define SDB_SUVD_CGC_CTRL__FBC_PCLK_MASK                                                                      0x10000000L
#define SDB_SUVD_CGC_CTRL__FBC_CCLK_MASK                                                                      0x20000000L
#define SDB_SUVD_CGC_CTRL__CDEFE_MODE_MASK                                                                    0x40000000L
//SIT0_NXT_SUVD_CGC_CTRL
#define SIT0_NXT_SUVD_CGC_CTRL__SRE_MODE__SHIFT                                                               0x0
#define SIT0_NXT_SUVD_CGC_CTRL__SIT_MODE__SHIFT                                                               0x1
#define SIT0_NXT_SUVD_CGC_CTRL__SMP_MODE__SHIFT                                                               0x2
#define SIT0_NXT_SUVD_CGC_CTRL__SCM_MODE__SHIFT                                                               0x3
#define SIT0_NXT_SUVD_CGC_CTRL__SDB_MODE__SHIFT                                                               0x4
#define SIT0_NXT_SUVD_CGC_CTRL__SCLR_MODE__SHIFT                                                              0x5
#define SIT0_NXT_SUVD_CGC_CTRL__UVD_SC_MODE__SHIFT                                                            0x6
#define SIT0_NXT_SUVD_CGC_CTRL__ENT_MODE__SHIFT                                                               0x7
#define SIT0_NXT_SUVD_CGC_CTRL__IME_MODE__SHIFT                                                               0x8
#define SIT0_NXT_SUVD_CGC_CTRL__SITE_MODE__SHIFT                                                              0x9
#define SIT0_NXT_SUVD_CGC_CTRL__EFC_MODE__SHIFT                                                               0xa
#define SIT0_NXT_SUVD_CGC_CTRL__SAOE_MODE__SHIFT                                                              0xb
#define SIT0_NXT_SUVD_CGC_CTRL__SMPA_MODE__SHIFT                                                              0xc
#define SIT0_NXT_SUVD_CGC_CTRL__MPBE0_MODE__SHIFT                                                             0xd
#define SIT0_NXT_SUVD_CGC_CTRL__MPBE1_MODE__SHIFT                                                             0xe
#define SIT0_NXT_SUVD_CGC_CTRL__SIT_AV1_MODE__SHIFT                                                           0xf
#define SIT0_NXT_SUVD_CGC_CTRL__SDB_AV1_MODE__SHIFT                                                           0x10
#define SIT0_NXT_SUVD_CGC_CTRL__MPC1_MODE__SHIFT                                                              0x11
#define SIT0_NXT_SUVD_CGC_CTRL__AVM_0_MODE__SHIFT                                                             0x12
#define SIT0_NXT_SUVD_CGC_CTRL__AVM_1_MODE__SHIFT                                                             0x13
#define SIT0_NXT_SUVD_CGC_CTRL__SIT_NXT_CMN_MODE__SHIFT                                                       0x14
#define SIT0_NXT_SUVD_CGC_CTRL__SIT_NXT_DEC_MODE__SHIFT                                                       0x15
#define SIT0_NXT_SUVD_CGC_CTRL__SIT_NXT_ENC_MODE__SHIFT                                                       0x16
#define SIT0_NXT_SUVD_CGC_CTRL__FBC_PCLK__SHIFT                                                               0x1c
#define SIT0_NXT_SUVD_CGC_CTRL__FBC_CCLK__SHIFT                                                               0x1d
#define SIT0_NXT_SUVD_CGC_CTRL__CDEFE_MODE__SHIFT                                                             0x1e
#define SIT0_NXT_SUVD_CGC_CTRL__SRE_MODE_MASK                                                                 0x00000001L
#define SIT0_NXT_SUVD_CGC_CTRL__SIT_MODE_MASK                                                                 0x00000002L
#define SIT0_NXT_SUVD_CGC_CTRL__SMP_MODE_MASK                                                                 0x00000004L
#define SIT0_NXT_SUVD_CGC_CTRL__SCM_MODE_MASK                                                                 0x00000008L
#define SIT0_NXT_SUVD_CGC_CTRL__SDB_MODE_MASK                                                                 0x00000010L
#define SIT0_NXT_SUVD_CGC_CTRL__SCLR_MODE_MASK                                                                0x00000020L
#define SIT0_NXT_SUVD_CGC_CTRL__UVD_SC_MODE_MASK                                                              0x00000040L
#define SIT0_NXT_SUVD_CGC_CTRL__ENT_MODE_MASK                                                                 0x00000080L
#define SIT0_NXT_SUVD_CGC_CTRL__IME_MODE_MASK                                                                 0x00000100L
#define SIT0_NXT_SUVD_CGC_CTRL__SITE_MODE_MASK                                                                0x00000200L
#define SIT0_NXT_SUVD_CGC_CTRL__EFC_MODE_MASK                                                                 0x00000400L
#define SIT0_NXT_SUVD_CGC_CTRL__SAOE_MODE_MASK                                                                0x00000800L
#define SIT0_NXT_SUVD_CGC_CTRL__SMPA_MODE_MASK                                                                0x00001000L
#define SIT0_NXT_SUVD_CGC_CTRL__MPBE0_MODE_MASK                                                               0x00002000L
#define SIT0_NXT_SUVD_CGC_CTRL__MPBE1_MODE_MASK                                                               0x00004000L
#define SIT0_NXT_SUVD_CGC_CTRL__SIT_AV1_MODE_MASK                                                             0x00008000L
#define SIT0_NXT_SUVD_CGC_CTRL__SDB_AV1_MODE_MASK                                                             0x00010000L
#define SIT0_NXT_SUVD_CGC_CTRL__MPC1_MODE_MASK                                                                0x00020000L
#define SIT0_NXT_SUVD_CGC_CTRL__AVM_0_MODE_MASK                                                               0x00040000L
#define SIT0_NXT_SUVD_CGC_CTRL__AVM_1_MODE_MASK                                                               0x00080000L
#define SIT0_NXT_SUVD_CGC_CTRL__SIT_NXT_CMN_MODE_MASK                                                         0x00100000L
#define SIT0_NXT_SUVD_CGC_CTRL__SIT_NXT_DEC_MODE_MASK                                                         0x00200000L
#define SIT0_NXT_SUVD_CGC_CTRL__SIT_NXT_ENC_MODE_MASK                                                         0x00400000L
#define SIT0_NXT_SUVD_CGC_CTRL__FBC_PCLK_MASK                                                                 0x10000000L
#define SIT0_NXT_SUVD_CGC_CTRL__FBC_CCLK_MASK                                                                 0x20000000L
#define SIT0_NXT_SUVD_CGC_CTRL__CDEFE_MODE_MASK                                                               0x40000000L
//SIT1_NXT_SUVD_CGC_CTRL
#define SIT1_NXT_SUVD_CGC_CTRL__SRE_MODE__SHIFT                                                               0x0
#define SIT1_NXT_SUVD_CGC_CTRL__SIT_MODE__SHIFT                                                               0x1
#define SIT1_NXT_SUVD_CGC_CTRL__SMP_MODE__SHIFT                                                               0x2
#define SIT1_NXT_SUVD_CGC_CTRL__SCM_MODE__SHIFT                                                               0x3
#define SIT1_NXT_SUVD_CGC_CTRL__SDB_MODE__SHIFT                                                               0x4
#define SIT1_NXT_SUVD_CGC_CTRL__SCLR_MODE__SHIFT                                                              0x5
#define SIT1_NXT_SUVD_CGC_CTRL__UVD_SC_MODE__SHIFT                                                            0x6
#define SIT1_NXT_SUVD_CGC_CTRL__ENT_MODE__SHIFT                                                               0x7
#define SIT1_NXT_SUVD_CGC_CTRL__IME_MODE__SHIFT                                                               0x8
#define SIT1_NXT_SUVD_CGC_CTRL__SITE_MODE__SHIFT                                                              0x9
#define SIT1_NXT_SUVD_CGC_CTRL__EFC_MODE__SHIFT                                                               0xa
#define SIT1_NXT_SUVD_CGC_CTRL__SAOE_MODE__SHIFT                                                              0xb
#define SIT1_NXT_SUVD_CGC_CTRL__SMPA_MODE__SHIFT                                                              0xc
#define SIT1_NXT_SUVD_CGC_CTRL__MPBE0_MODE__SHIFT                                                             0xd
#define SIT1_NXT_SUVD_CGC_CTRL__MPBE1_MODE__SHIFT                                                             0xe
#define SIT1_NXT_SUVD_CGC_CTRL__SIT_AV1_MODE__SHIFT                                                           0xf
#define SIT1_NXT_SUVD_CGC_CTRL__SDB_AV1_MODE__SHIFT                                                           0x10
#define SIT1_NXT_SUVD_CGC_CTRL__MPC1_MODE__SHIFT                                                              0x11
#define SIT1_NXT_SUVD_CGC_CTRL__AVM_0_MODE__SHIFT                                                             0x12
#define SIT1_NXT_SUVD_CGC_CTRL__AVM_1_MODE__SHIFT                                                             0x13
#define SIT1_NXT_SUVD_CGC_CTRL__SIT_NXT_CMN_MODE__SHIFT                                                       0x14
#define SIT1_NXT_SUVD_CGC_CTRL__SIT_NXT_DEC_MODE__SHIFT                                                       0x15
#define SIT1_NXT_SUVD_CGC_CTRL__SIT_NXT_ENC_MODE__SHIFT                                                       0x16
#define SIT1_NXT_SUVD_CGC_CTRL__FBC_PCLK__SHIFT                                                               0x1c
#define SIT1_NXT_SUVD_CGC_CTRL__FBC_CCLK__SHIFT                                                               0x1d
#define SIT1_NXT_SUVD_CGC_CTRL__CDEFE_MODE__SHIFT                                                             0x1e
#define SIT1_NXT_SUVD_CGC_CTRL__SRE_MODE_MASK                                                                 0x00000001L
#define SIT1_NXT_SUVD_CGC_CTRL__SIT_MODE_MASK                                                                 0x00000002L
#define SIT1_NXT_SUVD_CGC_CTRL__SMP_MODE_MASK                                                                 0x00000004L
#define SIT1_NXT_SUVD_CGC_CTRL__SCM_MODE_MASK                                                                 0x00000008L
#define SIT1_NXT_SUVD_CGC_CTRL__SDB_MODE_MASK                                                                 0x00000010L
#define SIT1_NXT_SUVD_CGC_CTRL__SCLR_MODE_MASK                                                                0x00000020L
#define SIT1_NXT_SUVD_CGC_CTRL__UVD_SC_MODE_MASK                                                              0x00000040L
#define SIT1_NXT_SUVD_CGC_CTRL__ENT_MODE_MASK                                                                 0x00000080L
#define SIT1_NXT_SUVD_CGC_CTRL__IME_MODE_MASK                                                                 0x00000100L
#define SIT1_NXT_SUVD_CGC_CTRL__SITE_MODE_MASK                                                                0x00000200L
#define SIT1_NXT_SUVD_CGC_CTRL__EFC_MODE_MASK                                                                 0x00000400L
#define SIT1_NXT_SUVD_CGC_CTRL__SAOE_MODE_MASK                                                                0x00000800L
#define SIT1_NXT_SUVD_CGC_CTRL__SMPA_MODE_MASK                                                                0x00001000L
#define SIT1_NXT_SUVD_CGC_CTRL__MPBE0_MODE_MASK                                                               0x00002000L
#define SIT1_NXT_SUVD_CGC_CTRL__MPBE1_MODE_MASK                                                               0x00004000L
#define SIT1_NXT_SUVD_CGC_CTRL__SIT_AV1_MODE_MASK                                                             0x00008000L
#define SIT1_NXT_SUVD_CGC_CTRL__SDB_AV1_MODE_MASK                                                             0x00010000L
#define SIT1_NXT_SUVD_CGC_CTRL__MPC1_MODE_MASK                                                                0x00020000L
#define SIT1_NXT_SUVD_CGC_CTRL__AVM_0_MODE_MASK                                                               0x00040000L
#define SIT1_NXT_SUVD_CGC_CTRL__AVM_1_MODE_MASK                                                               0x00080000L
#define SIT1_NXT_SUVD_CGC_CTRL__SIT_NXT_CMN_MODE_MASK                                                         0x00100000L
#define SIT1_NXT_SUVD_CGC_CTRL__SIT_NXT_DEC_MODE_MASK                                                         0x00200000L
#define SIT1_NXT_SUVD_CGC_CTRL__SIT_NXT_ENC_MODE_MASK                                                         0x00400000L
#define SIT1_NXT_SUVD_CGC_CTRL__FBC_PCLK_MASK                                                                 0x10000000L
#define SIT1_NXT_SUVD_CGC_CTRL__FBC_CCLK_MASK                                                                 0x20000000L
#define SIT1_NXT_SUVD_CGC_CTRL__CDEFE_MODE_MASK                                                               0x40000000L
//SIT2_NXT_SUVD_CGC_CTRL
#define SIT2_NXT_SUVD_CGC_CTRL__SRE_MODE__SHIFT                                                               0x0
#define SIT2_NXT_SUVD_CGC_CTRL__SIT_MODE__SHIFT                                                               0x1
#define SIT2_NXT_SUVD_CGC_CTRL__SMP_MODE__SHIFT                                                               0x2
#define SIT2_NXT_SUVD_CGC_CTRL__SCM_MODE__SHIFT                                                               0x3
#define SIT2_NXT_SUVD_CGC_CTRL__SDB_MODE__SHIFT                                                               0x4
#define SIT2_NXT_SUVD_CGC_CTRL__SCLR_MODE__SHIFT                                                              0x5
#define SIT2_NXT_SUVD_CGC_CTRL__UVD_SC_MODE__SHIFT                                                            0x6
#define SIT2_NXT_SUVD_CGC_CTRL__ENT_MODE__SHIFT                                                               0x7
#define SIT2_NXT_SUVD_CGC_CTRL__IME_MODE__SHIFT                                                               0x8
#define SIT2_NXT_SUVD_CGC_CTRL__SITE_MODE__SHIFT                                                              0x9
#define SIT2_NXT_SUVD_CGC_CTRL__EFC_MODE__SHIFT                                                               0xa
#define SIT2_NXT_SUVD_CGC_CTRL__SAOE_MODE__SHIFT                                                              0xb
#define SIT2_NXT_SUVD_CGC_CTRL__SMPA_MODE__SHIFT                                                              0xc
#define SIT2_NXT_SUVD_CGC_CTRL__MPBE0_MODE__SHIFT                                                             0xd
#define SIT2_NXT_SUVD_CGC_CTRL__MPBE1_MODE__SHIFT                                                             0xe
#define SIT2_NXT_SUVD_CGC_CTRL__SIT_AV1_MODE__SHIFT                                                           0xf
#define SIT2_NXT_SUVD_CGC_CTRL__SDB_AV1_MODE__SHIFT                                                           0x10
#define SIT2_NXT_SUVD_CGC_CTRL__MPC1_MODE__SHIFT                                                              0x11
#define SIT2_NXT_SUVD_CGC_CTRL__AVM_0_MODE__SHIFT                                                             0x12
#define SIT2_NXT_SUVD_CGC_CTRL__AVM_1_MODE__SHIFT                                                             0x13
#define SIT2_NXT_SUVD_CGC_CTRL__SIT_NXT_CMN_MODE__SHIFT                                                       0x14
#define SIT2_NXT_SUVD_CGC_CTRL__SIT_NXT_DEC_MODE__SHIFT                                                       0x15
#define SIT2_NXT_SUVD_CGC_CTRL__SIT_NXT_ENC_MODE__SHIFT                                                       0x16
#define SIT2_NXT_SUVD_CGC_CTRL__FBC_PCLK__SHIFT                                                               0x1c
#define SIT2_NXT_SUVD_CGC_CTRL__FBC_CCLK__SHIFT                                                               0x1d
#define SIT2_NXT_SUVD_CGC_CTRL__CDEFE_MODE__SHIFT                                                             0x1e
#define SIT2_NXT_SUVD_CGC_CTRL__SRE_MODE_MASK                                                                 0x00000001L
#define SIT2_NXT_SUVD_CGC_CTRL__SIT_MODE_MASK                                                                 0x00000002L
#define SIT2_NXT_SUVD_CGC_CTRL__SMP_MODE_MASK                                                                 0x00000004L
#define SIT2_NXT_SUVD_CGC_CTRL__SCM_MODE_MASK                                                                 0x00000008L
#define SIT2_NXT_SUVD_CGC_CTRL__SDB_MODE_MASK                                                                 0x00000010L
#define SIT2_NXT_SUVD_CGC_CTRL__SCLR_MODE_MASK                                                                0x00000020L
#define SIT2_NXT_SUVD_CGC_CTRL__UVD_SC_MODE_MASK                                                              0x00000040L
#define SIT2_NXT_SUVD_CGC_CTRL__ENT_MODE_MASK                                                                 0x00000080L
#define SIT2_NXT_SUVD_CGC_CTRL__IME_MODE_MASK                                                                 0x00000100L
#define SIT2_NXT_SUVD_CGC_CTRL__SITE_MODE_MASK                                                                0x00000200L
#define SIT2_NXT_SUVD_CGC_CTRL__EFC_MODE_MASK                                                                 0x00000400L
#define SIT2_NXT_SUVD_CGC_CTRL__SAOE_MODE_MASK                                                                0x00000800L
#define SIT2_NXT_SUVD_CGC_CTRL__SMPA_MODE_MASK                                                                0x00001000L
#define SIT2_NXT_SUVD_CGC_CTRL__MPBE0_MODE_MASK                                                               0x00002000L
#define SIT2_NXT_SUVD_CGC_CTRL__MPBE1_MODE_MASK                                                               0x00004000L
#define SIT2_NXT_SUVD_CGC_CTRL__SIT_AV1_MODE_MASK                                                             0x00008000L
#define SIT2_NXT_SUVD_CGC_CTRL__SDB_AV1_MODE_MASK                                                             0x00010000L
#define SIT2_NXT_SUVD_CGC_CTRL__MPC1_MODE_MASK                                                                0x00020000L
#define SIT2_NXT_SUVD_CGC_CTRL__AVM_0_MODE_MASK                                                               0x00040000L
#define SIT2_NXT_SUVD_CGC_CTRL__AVM_1_MODE_MASK                                                               0x00080000L
#define SIT2_NXT_SUVD_CGC_CTRL__SIT_NXT_CMN_MODE_MASK                                                         0x00100000L
#define SIT2_NXT_SUVD_CGC_CTRL__SIT_NXT_DEC_MODE_MASK                                                         0x00200000L
#define SIT2_NXT_SUVD_CGC_CTRL__SIT_NXT_ENC_MODE_MASK                                                         0x00400000L
#define SIT2_NXT_SUVD_CGC_CTRL__FBC_PCLK_MASK                                                                 0x10000000L
#define SIT2_NXT_SUVD_CGC_CTRL__FBC_CCLK_MASK                                                                 0x20000000L
#define SIT2_NXT_SUVD_CGC_CTRL__CDEFE_MODE_MASK                                                               0x40000000L
//SIT_SUVD_CGC_CTRL
#define SIT_SUVD_CGC_CTRL__SRE_MODE__SHIFT                                                                    0x0
#define SIT_SUVD_CGC_CTRL__SIT_MODE__SHIFT                                                                    0x1
#define SIT_SUVD_CGC_CTRL__SMP_MODE__SHIFT                                                                    0x2
#define SIT_SUVD_CGC_CTRL__SCM_MODE__SHIFT                                                                    0x3
#define SIT_SUVD_CGC_CTRL__SDB_MODE__SHIFT                                                                    0x4
#define SIT_SUVD_CGC_CTRL__SCLR_MODE__SHIFT                                                                   0x5
#define SIT_SUVD_CGC_CTRL__UVD_SC_MODE__SHIFT                                                                 0x6
#define SIT_SUVD_CGC_CTRL__ENT_MODE__SHIFT                                                                    0x7
#define SIT_SUVD_CGC_CTRL__IME_MODE__SHIFT                                                                    0x8
#define SIT_SUVD_CGC_CTRL__SITE_MODE__SHIFT                                                                   0x9
#define SIT_SUVD_CGC_CTRL__EFC_MODE__SHIFT                                                                    0xa
#define SIT_SUVD_CGC_CTRL__SAOE_MODE__SHIFT                                                                   0xb
#define SIT_SUVD_CGC_CTRL__SMPA_MODE__SHIFT                                                                   0xc
#define SIT_SUVD_CGC_CTRL__MPBE0_MODE__SHIFT                                                                  0xd
#define SIT_SUVD_CGC_CTRL__MPBE1_MODE__SHIFT                                                                  0xe
#define SIT_SUVD_CGC_CTRL__SIT_AV1_MODE__SHIFT                                                                0xf
#define SIT_SUVD_CGC_CTRL__SDB_AV1_MODE__SHIFT                                                                0x10
#define SIT_SUVD_CGC_CTRL__MPC1_MODE__SHIFT                                                                   0x11
#define SIT_SUVD_CGC_CTRL__AVM_0_MODE__SHIFT                                                                  0x12
#define SIT_SUVD_CGC_CTRL__AVM_1_MODE__SHIFT                                                                  0x13
#define SIT_SUVD_CGC_CTRL__SIT_NXT_CMN_MODE__SHIFT                                                            0x14
#define SIT_SUVD_CGC_CTRL__SIT_NXT_DEC_MODE__SHIFT                                                            0x15
#define SIT_SUVD_CGC_CTRL__SIT_NXT_ENC_MODE__SHIFT                                                            0x16
#define SIT_SUVD_CGC_CTRL__FBC_PCLK__SHIFT                                                                    0x1c
#define SIT_SUVD_CGC_CTRL__FBC_CCLK__SHIFT                                                                    0x1d
#define SIT_SUVD_CGC_CTRL__CDEFE_MODE__SHIFT                                                                  0x1e
#define SIT_SUVD_CGC_CTRL__SRE_MODE_MASK                                                                      0x00000001L
#define SIT_SUVD_CGC_CTRL__SIT_MODE_MASK                                                                      0x00000002L
#define SIT_SUVD_CGC_CTRL__SMP_MODE_MASK                                                                      0x00000004L
#define SIT_SUVD_CGC_CTRL__SCM_MODE_MASK                                                                      0x00000008L
#define SIT_SUVD_CGC_CTRL__SDB_MODE_MASK                                                                      0x00000010L
#define SIT_SUVD_CGC_CTRL__SCLR_MODE_MASK                                                                     0x00000020L
#define SIT_SUVD_CGC_CTRL__UVD_SC_MODE_MASK                                                                   0x00000040L
#define SIT_SUVD_CGC_CTRL__ENT_MODE_MASK                                                                      0x00000080L
#define SIT_SUVD_CGC_CTRL__IME_MODE_MASK                                                                      0x00000100L
#define SIT_SUVD_CGC_CTRL__SITE_MODE_MASK                                                                     0x00000200L
#define SIT_SUVD_CGC_CTRL__EFC_MODE_MASK                                                                      0x00000400L
#define SIT_SUVD_CGC_CTRL__SAOE_MODE_MASK                                                                     0x00000800L
#define SIT_SUVD_CGC_CTRL__SMPA_MODE_MASK                                                                     0x00001000L
#define SIT_SUVD_CGC_CTRL__MPBE0_MODE_MASK                                                                    0x00002000L
#define SIT_SUVD_CGC_CTRL__MPBE1_MODE_MASK                                                                    0x00004000L
#define SIT_SUVD_CGC_CTRL__SIT_AV1_MODE_MASK                                                                  0x00008000L
#define SIT_SUVD_CGC_CTRL__SDB_AV1_MODE_MASK                                                                  0x00010000L
#define SIT_SUVD_CGC_CTRL__MPC1_MODE_MASK                                                                     0x00020000L
#define SIT_SUVD_CGC_CTRL__AVM_0_MODE_MASK                                                                    0x00040000L
#define SIT_SUVD_CGC_CTRL__AVM_1_MODE_MASK                                                                    0x00080000L
#define SIT_SUVD_CGC_CTRL__SIT_NXT_CMN_MODE_MASK                                                              0x00100000L
#define SIT_SUVD_CGC_CTRL__SIT_NXT_DEC_MODE_MASK                                                              0x00200000L
#define SIT_SUVD_CGC_CTRL__SIT_NXT_ENC_MODE_MASK                                                              0x00400000L
#define SIT_SUVD_CGC_CTRL__FBC_PCLK_MASK                                                                      0x10000000L
#define SIT_SUVD_CGC_CTRL__FBC_CCLK_MASK                                                                      0x20000000L
#define SIT_SUVD_CGC_CTRL__CDEFE_MODE_MASK                                                                    0x40000000L
//SMPA_SUVD_CGC_CTRL
#define SMPA_SUVD_CGC_CTRL__SRE_MODE__SHIFT                                                                   0x0
#define SMPA_SUVD_CGC_CTRL__SIT_MODE__SHIFT                                                                   0x1
#define SMPA_SUVD_CGC_CTRL__SMP_MODE__SHIFT                                                                   0x2
#define SMPA_SUVD_CGC_CTRL__SCM_MODE__SHIFT                                                                   0x3
#define SMPA_SUVD_CGC_CTRL__SDB_MODE__SHIFT                                                                   0x4
#define SMPA_SUVD_CGC_CTRL__SCLR_MODE__SHIFT                                                                  0x5
#define SMPA_SUVD_CGC_CTRL__UVD_SC_MODE__SHIFT                                                                0x6
#define SMPA_SUVD_CGC_CTRL__ENT_MODE__SHIFT                                                                   0x7
#define SMPA_SUVD_CGC_CTRL__IME_MODE__SHIFT                                                                   0x8
#define SMPA_SUVD_CGC_CTRL__SITE_MODE__SHIFT                                                                  0x9
#define SMPA_SUVD_CGC_CTRL__EFC_MODE__SHIFT                                                                   0xa
#define SMPA_SUVD_CGC_CTRL__SAOE_MODE__SHIFT                                                                  0xb
#define SMPA_SUVD_CGC_CTRL__SMPA_MODE__SHIFT                                                                  0xc
#define SMPA_SUVD_CGC_CTRL__MPBE0_MODE__SHIFT                                                                 0xd
#define SMPA_SUVD_CGC_CTRL__MPBE1_MODE__SHIFT                                                                 0xe
#define SMPA_SUVD_CGC_CTRL__SIT_AV1_MODE__SHIFT                                                               0xf
#define SMPA_SUVD_CGC_CTRL__SDB_AV1_MODE__SHIFT                                                               0x10
#define SMPA_SUVD_CGC_CTRL__MPC1_MODE__SHIFT                                                                  0x11
#define SMPA_SUVD_CGC_CTRL__AVM_0_MODE__SHIFT                                                                 0x12
#define SMPA_SUVD_CGC_CTRL__AVM_1_MODE__SHIFT                                                                 0x13
#define SMPA_SUVD_CGC_CTRL__SIT_NXT_CMN_MODE__SHIFT                                                           0x14
#define SMPA_SUVD_CGC_CTRL__SIT_NXT_DEC_MODE__SHIFT                                                           0x15
#define SMPA_SUVD_CGC_CTRL__SIT_NXT_ENC_MODE__SHIFT                                                           0x16
#define SMPA_SUVD_CGC_CTRL__FBC_PCLK__SHIFT                                                                   0x1c
#define SMPA_SUVD_CGC_CTRL__FBC_CCLK__SHIFT                                                                   0x1d
#define SMPA_SUVD_CGC_CTRL__CDEFE_MODE__SHIFT                                                                 0x1e
#define SMPA_SUVD_CGC_CTRL__SRE_MODE_MASK                                                                     0x00000001L
#define SMPA_SUVD_CGC_CTRL__SIT_MODE_MASK                                                                     0x00000002L
#define SMPA_SUVD_CGC_CTRL__SMP_MODE_MASK                                                                     0x00000004L
#define SMPA_SUVD_CGC_CTRL__SCM_MODE_MASK                                                                     0x00000008L
#define SMPA_SUVD_CGC_CTRL__SDB_MODE_MASK                                                                     0x00000010L
#define SMPA_SUVD_CGC_CTRL__SCLR_MODE_MASK                                                                    0x00000020L
#define SMPA_SUVD_CGC_CTRL__UVD_SC_MODE_MASK                                                                  0x00000040L
#define SMPA_SUVD_CGC_CTRL__ENT_MODE_MASK                                                                     0x00000080L
#define SMPA_SUVD_CGC_CTRL__IME_MODE_MASK                                                                     0x00000100L
#define SMPA_SUVD_CGC_CTRL__SITE_MODE_MASK                                                                    0x00000200L
#define SMPA_SUVD_CGC_CTRL__EFC_MODE_MASK                                                                     0x00000400L
#define SMPA_SUVD_CGC_CTRL__SAOE_MODE_MASK                                                                    0x00000800L
#define SMPA_SUVD_CGC_CTRL__SMPA_MODE_MASK                                                                    0x00001000L
#define SMPA_SUVD_CGC_CTRL__MPBE0_MODE_MASK                                                                   0x00002000L
#define SMPA_SUVD_CGC_CTRL__MPBE1_MODE_MASK                                                                   0x00004000L
#define SMPA_SUVD_CGC_CTRL__SIT_AV1_MODE_MASK                                                                 0x00008000L
#define SMPA_SUVD_CGC_CTRL__SDB_AV1_MODE_MASK                                                                 0x00010000L
#define SMPA_SUVD_CGC_CTRL__MPC1_MODE_MASK                                                                    0x00020000L
#define SMPA_SUVD_CGC_CTRL__AVM_0_MODE_MASK                                                                   0x00040000L
#define SMPA_SUVD_CGC_CTRL__AVM_1_MODE_MASK                                                                   0x00080000L
#define SMPA_SUVD_CGC_CTRL__SIT_NXT_CMN_MODE_MASK                                                             0x00100000L
#define SMPA_SUVD_CGC_CTRL__SIT_NXT_DEC_MODE_MASK                                                             0x00200000L
#define SMPA_SUVD_CGC_CTRL__SIT_NXT_ENC_MODE_MASK                                                             0x00400000L
#define SMPA_SUVD_CGC_CTRL__FBC_PCLK_MASK                                                                     0x10000000L
#define SMPA_SUVD_CGC_CTRL__FBC_CCLK_MASK                                                                     0x20000000L
#define SMPA_SUVD_CGC_CTRL__CDEFE_MODE_MASK                                                                   0x40000000L
//SMP_SUVD_CGC_CTRL
#define SMP_SUVD_CGC_CTRL__SRE_MODE__SHIFT                                                                    0x0
#define SMP_SUVD_CGC_CTRL__SIT_MODE__SHIFT                                                                    0x1
#define SMP_SUVD_CGC_CTRL__SMP_MODE__SHIFT                                                                    0x2
#define SMP_SUVD_CGC_CTRL__SCM_MODE__SHIFT                                                                    0x3
#define SMP_SUVD_CGC_CTRL__SDB_MODE__SHIFT                                                                    0x4
#define SMP_SUVD_CGC_CTRL__SCLR_MODE__SHIFT                                                                   0x5
#define SMP_SUVD_CGC_CTRL__UVD_SC_MODE__SHIFT                                                                 0x6
#define SMP_SUVD_CGC_CTRL__ENT_MODE__SHIFT                                                                    0x7
#define SMP_SUVD_CGC_CTRL__IME_MODE__SHIFT                                                                    0x8
#define SMP_SUVD_CGC_CTRL__SITE_MODE__SHIFT                                                                   0x9
#define SMP_SUVD_CGC_CTRL__EFC_MODE__SHIFT                                                                    0xa
#define SMP_SUVD_CGC_CTRL__SAOE_MODE__SHIFT                                                                   0xb
#define SMP_SUVD_CGC_CTRL__SMPA_MODE__SHIFT                                                                   0xc
#define SMP_SUVD_CGC_CTRL__MPBE0_MODE__SHIFT                                                                  0xd
#define SMP_SUVD_CGC_CTRL__MPBE1_MODE__SHIFT                                                                  0xe
#define SMP_SUVD_CGC_CTRL__SIT_AV1_MODE__SHIFT                                                                0xf
#define SMP_SUVD_CGC_CTRL__SDB_AV1_MODE__SHIFT                                                                0x10
#define SMP_SUVD_CGC_CTRL__MPC1_MODE__SHIFT                                                                   0x11
#define SMP_SUVD_CGC_CTRL__AVM_0_MODE__SHIFT                                                                  0x12
#define SMP_SUVD_CGC_CTRL__AVM_1_MODE__SHIFT                                                                  0x13
#define SMP_SUVD_CGC_CTRL__SIT_NXT_CMN_MODE__SHIFT                                                            0x14
#define SMP_SUVD_CGC_CTRL__SIT_NXT_DEC_MODE__SHIFT                                                            0x15
#define SMP_SUVD_CGC_CTRL__SIT_NXT_ENC_MODE__SHIFT                                                            0x16
#define SMP_SUVD_CGC_CTRL__FBC_PCLK__SHIFT                                                                    0x1c
#define SMP_SUVD_CGC_CTRL__FBC_CCLK__SHIFT                                                                    0x1d
#define SMP_SUVD_CGC_CTRL__CDEFE_MODE__SHIFT                                                                  0x1e
#define SMP_SUVD_CGC_CTRL__SRE_MODE_MASK                                                                      0x00000001L
#define SMP_SUVD_CGC_CTRL__SIT_MODE_MASK                                                                      0x00000002L
#define SMP_SUVD_CGC_CTRL__SMP_MODE_MASK                                                                      0x00000004L
#define SMP_SUVD_CGC_CTRL__SCM_MODE_MASK                                                                      0x00000008L
#define SMP_SUVD_CGC_CTRL__SDB_MODE_MASK                                                                      0x00000010L
#define SMP_SUVD_CGC_CTRL__SCLR_MODE_MASK                                                                     0x00000020L
#define SMP_SUVD_CGC_CTRL__UVD_SC_MODE_MASK                                                                   0x00000040L
#define SMP_SUVD_CGC_CTRL__ENT_MODE_MASK                                                                      0x00000080L
#define SMP_SUVD_CGC_CTRL__IME_MODE_MASK                                                                      0x00000100L
#define SMP_SUVD_CGC_CTRL__SITE_MODE_MASK                                                                     0x00000200L
#define SMP_SUVD_CGC_CTRL__EFC_MODE_MASK                                                                      0x00000400L
#define SMP_SUVD_CGC_CTRL__SAOE_MODE_MASK                                                                     0x00000800L
#define SMP_SUVD_CGC_CTRL__SMPA_MODE_MASK                                                                     0x00001000L
#define SMP_SUVD_CGC_CTRL__MPBE0_MODE_MASK                                                                    0x00002000L
#define SMP_SUVD_CGC_CTRL__MPBE1_MODE_MASK                                                                    0x00004000L
#define SMP_SUVD_CGC_CTRL__SIT_AV1_MODE_MASK                                                                  0x00008000L
#define SMP_SUVD_CGC_CTRL__SDB_AV1_MODE_MASK                                                                  0x00010000L
#define SMP_SUVD_CGC_CTRL__MPC1_MODE_MASK                                                                     0x00020000L
#define SMP_SUVD_CGC_CTRL__AVM_0_MODE_MASK                                                                    0x00040000L
#define SMP_SUVD_CGC_CTRL__AVM_1_MODE_MASK                                                                    0x00080000L
#define SMP_SUVD_CGC_CTRL__SIT_NXT_CMN_MODE_MASK                                                              0x00100000L
#define SMP_SUVD_CGC_CTRL__SIT_NXT_DEC_MODE_MASK                                                              0x00200000L
#define SMP_SUVD_CGC_CTRL__SIT_NXT_ENC_MODE_MASK                                                              0x00400000L
#define SMP_SUVD_CGC_CTRL__FBC_PCLK_MASK                                                                      0x10000000L
#define SMP_SUVD_CGC_CTRL__FBC_CCLK_MASK                                                                      0x20000000L
#define SMP_SUVD_CGC_CTRL__CDEFE_MODE_MASK                                                                    0x40000000L
//SRE_SUVD_CGC_CTRL
#define SRE_SUVD_CGC_CTRL__SRE_MODE__SHIFT                                                                    0x0
#define SRE_SUVD_CGC_CTRL__SIT_MODE__SHIFT                                                                    0x1
#define SRE_SUVD_CGC_CTRL__SMP_MODE__SHIFT                                                                    0x2
#define SRE_SUVD_CGC_CTRL__SCM_MODE__SHIFT                                                                    0x3
#define SRE_SUVD_CGC_CTRL__SDB_MODE__SHIFT                                                                    0x4
#define SRE_SUVD_CGC_CTRL__SCLR_MODE__SHIFT                                                                   0x5
#define SRE_SUVD_CGC_CTRL__UVD_SC_MODE__SHIFT                                                                 0x6
#define SRE_SUVD_CGC_CTRL__ENT_MODE__SHIFT                                                                    0x7
#define SRE_SUVD_CGC_CTRL__IME_MODE__SHIFT                                                                    0x8
#define SRE_SUVD_CGC_CTRL__SITE_MODE__SHIFT                                                                   0x9
#define SRE_SUVD_CGC_CTRL__EFC_MODE__SHIFT                                                                    0xa
#define SRE_SUVD_CGC_CTRL__SAOE_MODE__SHIFT                                                                   0xb
#define SRE_SUVD_CGC_CTRL__SMPA_MODE__SHIFT                                                                   0xc
#define SRE_SUVD_CGC_CTRL__MPBE0_MODE__SHIFT                                                                  0xd
#define SRE_SUVD_CGC_CTRL__MPBE1_MODE__SHIFT                                                                  0xe
#define SRE_SUVD_CGC_CTRL__SIT_AV1_MODE__SHIFT                                                                0xf
#define SRE_SUVD_CGC_CTRL__SDB_AV1_MODE__SHIFT                                                                0x10
#define SRE_SUVD_CGC_CTRL__MPC1_MODE__SHIFT                                                                   0x11
#define SRE_SUVD_CGC_CTRL__AVM_0_MODE__SHIFT                                                                  0x12
#define SRE_SUVD_CGC_CTRL__AVM_1_MODE__SHIFT                                                                  0x13
#define SRE_SUVD_CGC_CTRL__SIT_NXT_CMN_MODE__SHIFT                                                            0x14
#define SRE_SUVD_CGC_CTRL__SIT_NXT_DEC_MODE__SHIFT                                                            0x15
#define SRE_SUVD_CGC_CTRL__SIT_NXT_ENC_MODE__SHIFT                                                            0x16
#define SRE_SUVD_CGC_CTRL__FBC_PCLK__SHIFT                                                                    0x1c
#define SRE_SUVD_CGC_CTRL__FBC_CCLK__SHIFT                                                                    0x1d
#define SRE_SUVD_CGC_CTRL__CDEFE_MODE__SHIFT                                                                  0x1e
#define SRE_SUVD_CGC_CTRL__SRE_MODE_MASK                                                                      0x00000001L
#define SRE_SUVD_CGC_CTRL__SIT_MODE_MASK                                                                      0x00000002L
#define SRE_SUVD_CGC_CTRL__SMP_MODE_MASK                                                                      0x00000004L
#define SRE_SUVD_CGC_CTRL__SCM_MODE_MASK                                                                      0x00000008L
#define SRE_SUVD_CGC_CTRL__SDB_MODE_MASK                                                                      0x00000010L
#define SRE_SUVD_CGC_CTRL__SCLR_MODE_MASK                                                                     0x00000020L
#define SRE_SUVD_CGC_CTRL__UVD_SC_MODE_MASK                                                                   0x00000040L
#define SRE_SUVD_CGC_CTRL__ENT_MODE_MASK                                                                      0x00000080L
#define SRE_SUVD_CGC_CTRL__IME_MODE_MASK                                                                      0x00000100L
#define SRE_SUVD_CGC_CTRL__SITE_MODE_MASK                                                                     0x00000200L
#define SRE_SUVD_CGC_CTRL__EFC_MODE_MASK                                                                      0x00000400L
#define SRE_SUVD_CGC_CTRL__SAOE_MODE_MASK                                                                     0x00000800L
#define SRE_SUVD_CGC_CTRL__SMPA_MODE_MASK                                                                     0x00001000L
#define SRE_SUVD_CGC_CTRL__MPBE0_MODE_MASK                                                                    0x00002000L
#define SRE_SUVD_CGC_CTRL__MPBE1_MODE_MASK                                                                    0x00004000L
#define SRE_SUVD_CGC_CTRL__SIT_AV1_MODE_MASK                                                                  0x00008000L
#define SRE_SUVD_CGC_CTRL__SDB_AV1_MODE_MASK                                                                  0x00010000L
#define SRE_SUVD_CGC_CTRL__MPC1_MODE_MASK                                                                     0x00020000L
#define SRE_SUVD_CGC_CTRL__AVM_0_MODE_MASK                                                                    0x00040000L
#define SRE_SUVD_CGC_CTRL__AVM_1_MODE_MASK                                                                    0x00080000L
#define SRE_SUVD_CGC_CTRL__SIT_NXT_CMN_MODE_MASK                                                              0x00100000L
#define SRE_SUVD_CGC_CTRL__SIT_NXT_DEC_MODE_MASK                                                              0x00200000L
#define SRE_SUVD_CGC_CTRL__SIT_NXT_ENC_MODE_MASK                                                              0x00400000L
#define SRE_SUVD_CGC_CTRL__FBC_PCLK_MASK                                                                      0x10000000L
#define SRE_SUVD_CGC_CTRL__FBC_CCLK_MASK                                                                      0x20000000L
#define SRE_SUVD_CGC_CTRL__CDEFE_MODE_MASK                                                                    0x40000000L
//UVD_MPBE0_SUVD_CGC_CTRL
#define UVD_MPBE0_SUVD_CGC_CTRL__SRE_MODE__SHIFT                                                              0x0
#define UVD_MPBE0_SUVD_CGC_CTRL__SIT_MODE__SHIFT                                                              0x1
#define UVD_MPBE0_SUVD_CGC_CTRL__SMP_MODE__SHIFT                                                              0x2
#define UVD_MPBE0_SUVD_CGC_CTRL__SCM_MODE__SHIFT                                                              0x3
#define UVD_MPBE0_SUVD_CGC_CTRL__SDB_MODE__SHIFT                                                              0x4
#define UVD_MPBE0_SUVD_CGC_CTRL__SCLR_MODE__SHIFT                                                             0x5
#define UVD_MPBE0_SUVD_CGC_CTRL__UVD_SC_MODE__SHIFT                                                           0x6
#define UVD_MPBE0_SUVD_CGC_CTRL__ENT_MODE__SHIFT                                                              0x7
#define UVD_MPBE0_SUVD_CGC_CTRL__IME_MODE__SHIFT                                                              0x8
#define UVD_MPBE0_SUVD_CGC_CTRL__SITE_MODE__SHIFT                                                             0x9
#define UVD_MPBE0_SUVD_CGC_CTRL__EFC_MODE__SHIFT                                                              0xa
#define UVD_MPBE0_SUVD_CGC_CTRL__SAOE_MODE__SHIFT                                                             0xb
#define UVD_MPBE0_SUVD_CGC_CTRL__SMPA_MODE__SHIFT                                                             0xc
#define UVD_MPBE0_SUVD_CGC_CTRL__MPBE0_MODE__SHIFT                                                            0xd
#define UVD_MPBE0_SUVD_CGC_CTRL__MPBE1_MODE__SHIFT                                                            0xe
#define UVD_MPBE0_SUVD_CGC_CTRL__SIT_AV1_MODE__SHIFT                                                          0xf
#define UVD_MPBE0_SUVD_CGC_CTRL__SDB_AV1_MODE__SHIFT                                                          0x10
#define UVD_MPBE0_SUVD_CGC_CTRL__MPC1_MODE__SHIFT                                                             0x11
#define UVD_MPBE0_SUVD_CGC_CTRL__FBC_PCLK__SHIFT                                                              0x1c
#define UVD_MPBE0_SUVD_CGC_CTRL__FBC_CCLK__SHIFT                                                              0x1d
#define UVD_MPBE0_SUVD_CGC_CTRL__CDEFE_MODE__SHIFT                                                            0x1e
#define UVD_MPBE0_SUVD_CGC_CTRL__SRE_MODE_MASK                                                                0x00000001L
#define UVD_MPBE0_SUVD_CGC_CTRL__SIT_MODE_MASK                                                                0x00000002L
#define UVD_MPBE0_SUVD_CGC_CTRL__SMP_MODE_MASK                                                                0x00000004L
#define UVD_MPBE0_SUVD_CGC_CTRL__SCM_MODE_MASK                                                                0x00000008L
#define UVD_MPBE0_SUVD_CGC_CTRL__SDB_MODE_MASK                                                                0x00000010L
#define UVD_MPBE0_SUVD_CGC_CTRL__SCLR_MODE_MASK                                                               0x00000020L
#define UVD_MPBE0_SUVD_CGC_CTRL__UVD_SC_MODE_MASK                                                             0x00000040L
#define UVD_MPBE0_SUVD_CGC_CTRL__ENT_MODE_MASK                                                                0x00000080L
#define UVD_MPBE0_SUVD_CGC_CTRL__IME_MODE_MASK                                                                0x00000100L
#define UVD_MPBE0_SUVD_CGC_CTRL__SITE_MODE_MASK                                                               0x00000200L
#define UVD_MPBE0_SUVD_CGC_CTRL__EFC_MODE_MASK                                                                0x00000400L
#define UVD_MPBE0_SUVD_CGC_CTRL__SAOE_MODE_MASK                                                               0x00000800L
#define UVD_MPBE0_SUVD_CGC_CTRL__SMPA_MODE_MASK                                                               0x00001000L
#define UVD_MPBE0_SUVD_CGC_CTRL__MPBE0_MODE_MASK                                                              0x00002000L
#define UVD_MPBE0_SUVD_CGC_CTRL__MPBE1_MODE_MASK                                                              0x00004000L
#define UVD_MPBE0_SUVD_CGC_CTRL__SIT_AV1_MODE_MASK                                                            0x00008000L
#define UVD_MPBE0_SUVD_CGC_CTRL__SDB_AV1_MODE_MASK                                                            0x00010000L
#define UVD_MPBE0_SUVD_CGC_CTRL__MPC1_MODE_MASK                                                               0x00020000L
#define UVD_MPBE0_SUVD_CGC_CTRL__FBC_PCLK_MASK                                                                0x10000000L
#define UVD_MPBE0_SUVD_CGC_CTRL__FBC_CCLK_MASK                                                                0x20000000L
#define UVD_MPBE0_SUVD_CGC_CTRL__CDEFE_MODE_MASK                                                              0x40000000L
//UVD_MPBE1_SUVD_CGC_CTRL
#define UVD_MPBE1_SUVD_CGC_CTRL__SRE_MODE__SHIFT                                                              0x0
#define UVD_MPBE1_SUVD_CGC_CTRL__SIT_MODE__SHIFT                                                              0x1
#define UVD_MPBE1_SUVD_CGC_CTRL__SMP_MODE__SHIFT                                                              0x2
#define UVD_MPBE1_SUVD_CGC_CTRL__SCM_MODE__SHIFT                                                              0x3
#define UVD_MPBE1_SUVD_CGC_CTRL__SDB_MODE__SHIFT                                                              0x4
#define UVD_MPBE1_SUVD_CGC_CTRL__SCLR_MODE__SHIFT                                                             0x5
#define UVD_MPBE1_SUVD_CGC_CTRL__UVD_SC_MODE__SHIFT                                                           0x6
#define UVD_MPBE1_SUVD_CGC_CTRL__ENT_MODE__SHIFT                                                              0x7
#define UVD_MPBE1_SUVD_CGC_CTRL__IME_MODE__SHIFT                                                              0x8
#define UVD_MPBE1_SUVD_CGC_CTRL__SITE_MODE__SHIFT                                                             0x9
#define UVD_MPBE1_SUVD_CGC_CTRL__EFC_MODE__SHIFT                                                              0xa
#define UVD_MPBE1_SUVD_CGC_CTRL__SAOE_MODE__SHIFT                                                             0xb
#define UVD_MPBE1_SUVD_CGC_CTRL__SMPA_MODE__SHIFT                                                             0xc
#define UVD_MPBE1_SUVD_CGC_CTRL__MPBE0_MODE__SHIFT                                                            0xd
#define UVD_MPBE1_SUVD_CGC_CTRL__MPBE1_MODE__SHIFT                                                            0xe
#define UVD_MPBE1_SUVD_CGC_CTRL__SIT_AV1_MODE__SHIFT                                                          0xf
#define UVD_MPBE1_SUVD_CGC_CTRL__SDB_AV1_MODE__SHIFT                                                          0x10
#define UVD_MPBE1_SUVD_CGC_CTRL__MPC1_MODE__SHIFT                                                             0x11
#define UVD_MPBE1_SUVD_CGC_CTRL__FBC_PCLK__SHIFT                                                              0x1c
#define UVD_MPBE1_SUVD_CGC_CTRL__FBC_CCLK__SHIFT                                                              0x1d
#define UVD_MPBE1_SUVD_CGC_CTRL__CDEFE_MODE__SHIFT                                                            0x1e
#define UVD_MPBE1_SUVD_CGC_CTRL__SRE_MODE_MASK                                                                0x00000001L
#define UVD_MPBE1_SUVD_CGC_CTRL__SIT_MODE_MASK                                                                0x00000002L
#define UVD_MPBE1_SUVD_CGC_CTRL__SMP_MODE_MASK                                                                0x00000004L
#define UVD_MPBE1_SUVD_CGC_CTRL__SCM_MODE_MASK                                                                0x00000008L
#define UVD_MPBE1_SUVD_CGC_CTRL__SDB_MODE_MASK                                                                0x00000010L
#define UVD_MPBE1_SUVD_CGC_CTRL__SCLR_MODE_MASK                                                               0x00000020L
#define UVD_MPBE1_SUVD_CGC_CTRL__UVD_SC_MODE_MASK                                                             0x00000040L
#define UVD_MPBE1_SUVD_CGC_CTRL__ENT_MODE_MASK                                                                0x00000080L
#define UVD_MPBE1_SUVD_CGC_CTRL__IME_MODE_MASK                                                                0x00000100L
#define UVD_MPBE1_SUVD_CGC_CTRL__SITE_MODE_MASK                                                               0x00000200L
#define UVD_MPBE1_SUVD_CGC_CTRL__EFC_MODE_MASK                                                                0x00000400L
#define UVD_MPBE1_SUVD_CGC_CTRL__SAOE_MODE_MASK                                                               0x00000800L
#define UVD_MPBE1_SUVD_CGC_CTRL__SMPA_MODE_MASK                                                               0x00001000L
#define UVD_MPBE1_SUVD_CGC_CTRL__MPBE0_MODE_MASK                                                              0x00002000L
#define UVD_MPBE1_SUVD_CGC_CTRL__MPBE1_MODE_MASK                                                              0x00004000L
#define UVD_MPBE1_SUVD_CGC_CTRL__SIT_AV1_MODE_MASK                                                            0x00008000L
#define UVD_MPBE1_SUVD_CGC_CTRL__SDB_AV1_MODE_MASK                                                            0x00010000L
#define UVD_MPBE1_SUVD_CGC_CTRL__MPC1_MODE_MASK                                                               0x00020000L
#define UVD_MPBE1_SUVD_CGC_CTRL__FBC_PCLK_MASK                                                                0x10000000L
#define UVD_MPBE1_SUVD_CGC_CTRL__FBC_CCLK_MASK                                                                0x20000000L
#define UVD_MPBE1_SUVD_CGC_CTRL__CDEFE_MODE_MASK                                                              0x40000000L
//UVD_SUVD_CGC_CTRL
#define UVD_SUVD_CGC_CTRL__SRE_MODE__SHIFT                                                                    0x0
#define UVD_SUVD_CGC_CTRL__SIT_MODE__SHIFT                                                                    0x1
#define UVD_SUVD_CGC_CTRL__SMP_MODE__SHIFT                                                                    0x2
#define UVD_SUVD_CGC_CTRL__SCM_MODE__SHIFT                                                                    0x3
#define UVD_SUVD_CGC_CTRL__SDB_MODE__SHIFT                                                                    0x4
#define UVD_SUVD_CGC_CTRL__SCLR_MODE__SHIFT                                                                   0x5
#define UVD_SUVD_CGC_CTRL__UVD_SC_MODE__SHIFT                                                                 0x6
#define UVD_SUVD_CGC_CTRL__ENT_MODE__SHIFT                                                                    0x7
#define UVD_SUVD_CGC_CTRL__IME_MODE__SHIFT                                                                    0x8
#define UVD_SUVD_CGC_CTRL__SITE_MODE__SHIFT                                                                   0x9
#define UVD_SUVD_CGC_CTRL__EFC_MODE__SHIFT                                                                    0xa
#define UVD_SUVD_CGC_CTRL__SAOE_MODE__SHIFT                                                                   0xb
#define UVD_SUVD_CGC_CTRL__SMPA_MODE__SHIFT                                                                   0xc
#define UVD_SUVD_CGC_CTRL__MPBE0_MODE__SHIFT                                                                  0xd
#define UVD_SUVD_CGC_CTRL__MPBE1_MODE__SHIFT                                                                  0xe
#define UVD_SUVD_CGC_CTRL__SIT_AV1_MODE__SHIFT                                                                0xf
#define UVD_SUVD_CGC_CTRL__SDB_AV1_MODE__SHIFT                                                                0x10
#define UVD_SUVD_CGC_CTRL__MPC1_MODE__SHIFT                                                                   0x11
#define UVD_SUVD_CGC_CTRL__AVM_0_MODE__SHIFT                                                                  0x12
#define UVD_SUVD_CGC_CTRL__AVM_1_MODE__SHIFT                                                                  0x13
#define UVD_SUVD_CGC_CTRL__SIT_NXT_CMN_MODE__SHIFT                                                            0x14
#define UVD_SUVD_CGC_CTRL__SIT_NXT_DEC_MODE__SHIFT                                                            0x15
#define UVD_SUVD_CGC_CTRL__SIT_NXT_ENC_MODE__SHIFT                                                            0x16
#define UVD_SUVD_CGC_CTRL__FBC_PCLK__SHIFT                                                                    0x1c
#define UVD_SUVD_CGC_CTRL__FBC_CCLK__SHIFT                                                                    0x1d
#define UVD_SUVD_CGC_CTRL__CDEFE_MODE__SHIFT                                                                  0x1e
#define UVD_SUVD_CGC_CTRL__SRE_MODE_MASK                                                                      0x00000001L
#define UVD_SUVD_CGC_CTRL__SIT_MODE_MASK                                                                      0x00000002L
#define UVD_SUVD_CGC_CTRL__SMP_MODE_MASK                                                                      0x00000004L
#define UVD_SUVD_CGC_CTRL__SCM_MODE_MASK                                                                      0x00000008L
#define UVD_SUVD_CGC_CTRL__SDB_MODE_MASK                                                                      0x00000010L
#define UVD_SUVD_CGC_CTRL__SCLR_MODE_MASK                                                                     0x00000020L
#define UVD_SUVD_CGC_CTRL__UVD_SC_MODE_MASK                                                                   0x00000040L
#define UVD_SUVD_CGC_CTRL__ENT_MODE_MASK                                                                      0x00000080L
#define UVD_SUVD_CGC_CTRL__IME_MODE_MASK                                                                      0x00000100L
#define UVD_SUVD_CGC_CTRL__SITE_MODE_MASK                                                                     0x00000200L
#define UVD_SUVD_CGC_CTRL__EFC_MODE_MASK                                                                      0x00000400L
#define UVD_SUVD_CGC_CTRL__SAOE_MODE_MASK                                                                     0x00000800L
#define UVD_SUVD_CGC_CTRL__SMPA_MODE_MASK                                                                     0x00001000L
#define UVD_SUVD_CGC_CTRL__MPBE0_MODE_MASK                                                                    0x00002000L
#define UVD_SUVD_CGC_CTRL__MPBE1_MODE_MASK                                                                    0x00004000L
#define UVD_SUVD_CGC_CTRL__SIT_AV1_MODE_MASK                                                                  0x00008000L
#define UVD_SUVD_CGC_CTRL__SDB_AV1_MODE_MASK                                                                  0x00010000L
#define UVD_SUVD_CGC_CTRL__MPC1_MODE_MASK                                                                     0x00020000L
#define UVD_SUVD_CGC_CTRL__AVM_0_MODE_MASK                                                                    0x00040000L
#define UVD_SUVD_CGC_CTRL__AVM_1_MODE_MASK                                                                    0x00080000L
#define UVD_SUVD_CGC_CTRL__SIT_NXT_CMN_MODE_MASK                                                              0x00100000L
#define UVD_SUVD_CGC_CTRL__SIT_NXT_DEC_MODE_MASK                                                              0x00200000L
#define UVD_SUVD_CGC_CTRL__SIT_NXT_ENC_MODE_MASK                                                              0x00400000L
#define UVD_SUVD_CGC_CTRL__FBC_PCLK_MASK                                                                      0x10000000L
#define UVD_SUVD_CGC_CTRL__FBC_CCLK_MASK                                                                      0x20000000L
#define UVD_SUVD_CGC_CTRL__CDEFE_MODE_MASK                                                                    0x40000000L
//UVD_CGC_CTRL3
#define UVD_CGC_CTRL3__CGC_CLK_OFF_DELAY__SHIFT                                                               0x0
#define UVD_CGC_CTRL3__LCM0_MODE__SHIFT                                                                       0xb
#define UVD_CGC_CTRL3__LCM1_MODE__SHIFT                                                                       0xc
#define UVD_CGC_CTRL3__MIF_MODE__SHIFT                                                                        0xd
#define UVD_CGC_CTRL3__VREG_MODE__SHIFT                                                                       0xe
#define UVD_CGC_CTRL3__PE_MODE__SHIFT                                                                         0xf
#define UVD_CGC_CTRL3__PPU_MODE__SHIFT                                                                        0x10
#define UVD_CGC_CTRL3__CGC_CLK_OFF_DELAY_MASK                                                                 0x000000FFL
#define UVD_CGC_CTRL3__LCM0_MODE_MASK                                                                         0x00000800L
#define UVD_CGC_CTRL3__LCM1_MODE_MASK                                                                         0x00001000L
#define UVD_CGC_CTRL3__MIF_MODE_MASK                                                                          0x00002000L
#define UVD_CGC_CTRL3__VREG_MODE_MASK                                                                         0x00004000L
#define UVD_CGC_CTRL3__PE_MODE_MASK                                                                           0x00008000L
#define UVD_CGC_CTRL3__PPU_MODE_MASK                                                                          0x00010000L
//UVD_GPCOM_VCPU_DATA0
#define UVD_GPCOM_VCPU_DATA0__DATA0__SHIFT                                                                    0x0
#define UVD_GPCOM_VCPU_DATA0__DATA0_MASK                                                                      0xFFFFFFFFL
//UVD_GPCOM_VCPU_DATA1
#define UVD_GPCOM_VCPU_DATA1__DATA1__SHIFT                                                                    0x0
#define UVD_GPCOM_VCPU_DATA1__DATA1_MASK                                                                      0xFFFFFFFFL
//UVD_GPCOM_SYS_CMD
#define UVD_GPCOM_SYS_CMD__CMD_SEND__SHIFT                                                                    0x0
#define UVD_GPCOM_SYS_CMD__CMD__SHIFT                                                                         0x1
#define UVD_GPCOM_SYS_CMD__CMD_SOURCE__SHIFT                                                                  0x1f
#define UVD_GPCOM_SYS_CMD__CMD_SEND_MASK                                                                      0x00000001L
#define UVD_GPCOM_SYS_CMD__CMD_MASK                                                                           0x7FFFFFFEL
#define UVD_GPCOM_SYS_CMD__CMD_SOURCE_MASK                                                                    0x80000000L
//UVD_GPCOM_SYS_DATA0
#define UVD_GPCOM_SYS_DATA0__DATA0__SHIFT                                                                     0x0
#define UVD_GPCOM_SYS_DATA0__DATA0_MASK                                                                       0xFFFFFFFFL
//UVD_GPCOM_SYS_DATA1
#define UVD_GPCOM_SYS_DATA1__DATA1__SHIFT                                                                     0x0
#define UVD_GPCOM_SYS_DATA1__DATA1_MASK                                                                       0xFFFFFFFFL
//UVD_VCPU_INT_EN
#define UVD_VCPU_INT_EN__PIF_ADDR_ERR_EN__SHIFT                                                               0x0
#define UVD_VCPU_INT_EN__SEMA_WAIT_FAULT_TIMEOUT_EN__SHIFT                                                    0x1
#define UVD_VCPU_INT_EN__SEMA_SIGNAL_INCOMPLETE_TIMEOUT_EN__SHIFT                                             0x2
#define UVD_VCPU_INT_EN__NJ_PF_RPT_EN__SHIFT                                                                  0x3
#define UVD_VCPU_INT_EN__SW_RB1_INT_EN__SHIFT                                                                 0x4
#define UVD_VCPU_INT_EN__SW_RB2_INT_EN__SHIFT                                                                 0x5
#define UVD_VCPU_INT_EN__RBC_REG_PRIV_FAULT_EN__SHIFT                                                         0x6
#define UVD_VCPU_INT_EN__SW_RB3_INT_EN__SHIFT                                                                 0x7
#define UVD_VCPU_INT_EN__SW_RB4_INT_EN__SHIFT                                                                 0x9
#define UVD_VCPU_INT_EN__SW_RB5_INT_EN__SHIFT                                                                 0xa
#define UVD_VCPU_INT_EN__LBSI_EN__SHIFT                                                                       0xb
#define UVD_VCPU_INT_EN__UDEC_EN__SHIFT                                                                       0xc
#define UVD_VCPU_INT_EN__SUVD_EN__SHIFT                                                                       0xf
#define UVD_VCPU_INT_EN__RPTR_WR_EN__SHIFT                                                                    0x10
#define UVD_VCPU_INT_EN__JOB_START_EN__SHIFT                                                                  0x11
#define UVD_VCPU_INT_EN__NJ_PF_EN__SHIFT                                                                      0x12
#define UVD_VCPU_INT_EN__SEMA_WAIT_FAIL_SIG_EN__SHIFT                                                         0x17
#define UVD_VCPU_INT_EN__IDCT_EN__SHIFT                                                                       0x18
#define UVD_VCPU_INT_EN__MPRD_EN__SHIFT                                                                       0x19
#define UVD_VCPU_INT_EN__AVM_INT_EN__SHIFT                                                                    0x1a
#define UVD_VCPU_INT_EN__CLK_SWT_EN__SHIFT                                                                    0x1b
#define UVD_VCPU_INT_EN__MIF_HWINT_EN__SHIFT                                                                  0x1c
#define UVD_VCPU_INT_EN__MPRD_ERR_EN__SHIFT                                                                   0x1d
#define UVD_VCPU_INT_EN__DRV_FW_REQ_EN__SHIFT                                                                 0x1e
#define UVD_VCPU_INT_EN__DRV_FW_ACK_EN__SHIFT                                                                 0x1f
#define UVD_VCPU_INT_EN__PIF_ADDR_ERR_EN_MASK                                                                 0x00000001L
#define UVD_VCPU_INT_EN__SEMA_WAIT_FAULT_TIMEOUT_EN_MASK                                                      0x00000002L
#define UVD_VCPU_INT_EN__SEMA_SIGNAL_INCOMPLETE_TIMEOUT_EN_MASK                                               0x00000004L
#define UVD_VCPU_INT_EN__NJ_PF_RPT_EN_MASK                                                                    0x00000008L
#define UVD_VCPU_INT_EN__SW_RB1_INT_EN_MASK                                                                   0x00000010L
#define UVD_VCPU_INT_EN__SW_RB2_INT_EN_MASK                                                                   0x00000020L
#define UVD_VCPU_INT_EN__RBC_REG_PRIV_FAULT_EN_MASK                                                           0x00000040L
#define UVD_VCPU_INT_EN__SW_RB3_INT_EN_MASK                                                                   0x00000080L
#define UVD_VCPU_INT_EN__SW_RB4_INT_EN_MASK                                                                   0x00000200L
#define UVD_VCPU_INT_EN__SW_RB5_INT_EN_MASK                                                                   0x00000400L
#define UVD_VCPU_INT_EN__LBSI_EN_MASK                                                                         0x00000800L
#define UVD_VCPU_INT_EN__UDEC_EN_MASK                                                                         0x00001000L
#define UVD_VCPU_INT_EN__SUVD_EN_MASK                                                                         0x00008000L
#define UVD_VCPU_INT_EN__RPTR_WR_EN_MASK                                                                      0x00010000L
#define UVD_VCPU_INT_EN__JOB_START_EN_MASK                                                                    0x00020000L
#define UVD_VCPU_INT_EN__NJ_PF_EN_MASK                                                                        0x00040000L
#define UVD_VCPU_INT_EN__SEMA_WAIT_FAIL_SIG_EN_MASK                                                           0x00800000L
#define UVD_VCPU_INT_EN__IDCT_EN_MASK                                                                         0x01000000L
#define UVD_VCPU_INT_EN__MPRD_EN_MASK                                                                         0x02000000L
#define UVD_VCPU_INT_EN__AVM_INT_EN_MASK                                                                      0x04000000L
#define UVD_VCPU_INT_EN__CLK_SWT_EN_MASK                                                                      0x08000000L
#define UVD_VCPU_INT_EN__MIF_HWINT_EN_MASK                                                                    0x10000000L
#define UVD_VCPU_INT_EN__MPRD_ERR_EN_MASK                                                                     0x20000000L
#define UVD_VCPU_INT_EN__DRV_FW_REQ_EN_MASK                                                                   0x40000000L
#define UVD_VCPU_INT_EN__DRV_FW_ACK_EN_MASK                                                                   0x80000000L
//UVD_VCPU_INT_STATUS
#define UVD_VCPU_INT_STATUS__PIF_ADDR_ERR_INT__SHIFT                                                          0x0
#define UVD_VCPU_INT_STATUS__SEMA_WAIT_FAULT_TIMEOUT_INT__SHIFT                                               0x1
#define UVD_VCPU_INT_STATUS__SEMA_SIGNAL_INCOMPLETE_TIMEOUT_INT__SHIFT                                        0x2
#define UVD_VCPU_INT_STATUS__NJ_PF_RPT_INT__SHIFT                                                             0x3
#define UVD_VCPU_INT_STATUS__SW_RB1_INT__SHIFT                                                                0x4
#define UVD_VCPU_INT_STATUS__SW_RB2_INT__SHIFT                                                                0x5
#define UVD_VCPU_INT_STATUS__RBC_REG_PRIV_FAULT_INT__SHIFT                                                    0x6
#define UVD_VCPU_INT_STATUS__SW_RB3_INT__SHIFT                                                                0x7
#define UVD_VCPU_INT_STATUS__SW_RB4_INT__SHIFT                                                                0x9
#define UVD_VCPU_INT_STATUS__SW_RB5_INT__SHIFT                                                                0xa
#define UVD_VCPU_INT_STATUS__LBSI_INT__SHIFT                                                                  0xb
#define UVD_VCPU_INT_STATUS__UDEC_INT__SHIFT                                                                  0xc
#define UVD_VCPU_INT_STATUS__SUVD_INT__SHIFT                                                                  0xf
#define UVD_VCPU_INT_STATUS__RPTR_WR_INT__SHIFT                                                               0x10
#define UVD_VCPU_INT_STATUS__JOB_START_INT__SHIFT                                                             0x11
#define UVD_VCPU_INT_STATUS__NJ_PF_INT__SHIFT                                                                 0x12
#define UVD_VCPU_INT_STATUS__GPCOM_INT__SHIFT                                                                 0x14
#define UVD_VCPU_INT_STATUS__SEMA_WAIT_FAIL_SIG_INT__SHIFT                                                    0x17
#define UVD_VCPU_INT_STATUS__IDCT_INT__SHIFT                                                                  0x18
#define UVD_VCPU_INT_STATUS__MPRD_INT__SHIFT                                                                  0x19
#define UVD_VCPU_INT_STATUS__AVM_INT__SHIFT                                                                   0x1a
#define UVD_VCPU_INT_STATUS__CLK_SWT_INT__SHIFT                                                               0x1b
#define UVD_VCPU_INT_STATUS__MIF_HWINT__SHIFT                                                                 0x1c
#define UVD_VCPU_INT_STATUS__MPRD_ERR_INT__SHIFT                                                              0x1d
#define UVD_VCPU_INT_STATUS__DRV_FW_REQ_INT__SHIFT                                                            0x1e
#define UVD_VCPU_INT_STATUS__DRV_FW_ACK_INT__SHIFT                                                            0x1f
#define UVD_VCPU_INT_STATUS__PIF_ADDR_ERR_INT_MASK                                                            0x00000001L
#define UVD_VCPU_INT_STATUS__SEMA_WAIT_FAULT_TIMEOUT_INT_MASK                                                 0x00000002L
#define UVD_VCPU_INT_STATUS__SEMA_SIGNAL_INCOMPLETE_TIMEOUT_INT_MASK                                          0x00000004L
#define UVD_VCPU_INT_STATUS__NJ_PF_RPT_INT_MASK                                                               0x00000008L
#define UVD_VCPU_INT_STATUS__SW_RB1_INT_MASK                                                                  0x00000010L
#define UVD_VCPU_INT_STATUS__SW_RB2_INT_MASK                                                                  0x00000020L
#define UVD_VCPU_INT_STATUS__RBC_REG_PRIV_FAULT_INT_MASK                                                      0x00000040L
#define UVD_VCPU_INT_STATUS__SW_RB3_INT_MASK                                                                  0x00000080L
#define UVD_VCPU_INT_STATUS__SW_RB4_INT_MASK                                                                  0x00000200L
#define UVD_VCPU_INT_STATUS__SW_RB5_INT_MASK                                                                  0x00000400L
#define UVD_VCPU_INT_STATUS__LBSI_INT_MASK                                                                    0x00000800L
#define UVD_VCPU_INT_STATUS__UDEC_INT_MASK                                                                    0x00001000L
#define UVD_VCPU_INT_STATUS__SUVD_INT_MASK                                                                    0x00008000L
#define UVD_VCPU_INT_STATUS__RPTR_WR_INT_MASK                                                                 0x00010000L
#define UVD_VCPU_INT_STATUS__JOB_START_INT_MASK                                                               0x00020000L
#define UVD_VCPU_INT_STATUS__NJ_PF_INT_MASK                                                                   0x00040000L
#define UVD_VCPU_INT_STATUS__GPCOM_INT_MASK                                                                   0x00100000L
#define UVD_VCPU_INT_STATUS__SEMA_WAIT_FAIL_SIG_INT_MASK                                                      0x00800000L
#define UVD_VCPU_INT_STATUS__IDCT_INT_MASK                                                                    0x01000000L
#define UVD_VCPU_INT_STATUS__MPRD_INT_MASK                                                                    0x02000000L
#define UVD_VCPU_INT_STATUS__AVM_INT_MASK                                                                     0x04000000L
#define UVD_VCPU_INT_STATUS__CLK_SWT_INT_MASK                                                                 0x08000000L
#define UVD_VCPU_INT_STATUS__MIF_HWINT_MASK                                                                   0x10000000L
#define UVD_VCPU_INT_STATUS__MPRD_ERR_INT_MASK                                                                0x20000000L
#define UVD_VCPU_INT_STATUS__DRV_FW_REQ_INT_MASK                                                              0x40000000L
#define UVD_VCPU_INT_STATUS__DRV_FW_ACK_INT_MASK                                                              0x80000000L
//UVD_VCPU_INT_ACK
#define UVD_VCPU_INT_ACK__PIF_ADDR_ERR_ACK__SHIFT                                                             0x0
#define UVD_VCPU_INT_ACK__SEMA_WAIT_FAULT_TIMEOUT_ACK__SHIFT                                                  0x1
#define UVD_VCPU_INT_ACK__SEMA_SIGNAL_INCOMPLETE_TIMEOUT_ACK__SHIFT                                           0x2
#define UVD_VCPU_INT_ACK__NJ_PF_RPT_ACK__SHIFT                                                                0x3
#define UVD_VCPU_INT_ACK__SW_RB1_INT_ACK__SHIFT                                                               0x4
#define UVD_VCPU_INT_ACK__SW_RB2_INT_ACK__SHIFT                                                               0x5
#define UVD_VCPU_INT_ACK__RBC_REG_PRIV_FAULT_ACK__SHIFT                                                       0x6
#define UVD_VCPU_INT_ACK__SW_RB3_INT_ACK__SHIFT                                                               0x7
#define UVD_VCPU_INT_ACK__SW_RB4_INT_ACK__SHIFT                                                               0x9
#define UVD_VCPU_INT_ACK__SW_RB5_INT_ACK__SHIFT                                                               0xa
#define UVD_VCPU_INT_ACK__LBSI_ACK__SHIFT                                                                     0xb
#define UVD_VCPU_INT_ACK__UDEC_ACK__SHIFT                                                                     0xc
#define UVD_VCPU_INT_ACK__SUVD_ACK__SHIFT                                                                     0xf
#define UVD_VCPU_INT_ACK__RPTR_WR_ACK__SHIFT                                                                  0x10
#define UVD_VCPU_INT_ACK__JOB_START_ACK__SHIFT                                                                0x11
#define UVD_VCPU_INT_ACK__NJ_PF_ACK__SHIFT                                                                    0x12
#define UVD_VCPU_INT_ACK__SEMA_WAIT_FAIL_SIG_ACK__SHIFT                                                       0x17
#define UVD_VCPU_INT_ACK__IDCT_ACK__SHIFT                                                                     0x18
#define UVD_VCPU_INT_ACK__MPRD_ACK__SHIFT                                                                     0x19
#define UVD_VCPU_INT_ACK__AVM_INT_ACK__SHIFT                                                                  0x1a
#define UVD_VCPU_INT_ACK__CLK_SWT_ACK__SHIFT                                                                  0x1b
#define UVD_VCPU_INT_ACK__MIF_HWINT_ACK__SHIFT                                                                0x1c
#define UVD_VCPU_INT_ACK__MPRD_ERR_ACK__SHIFT                                                                 0x1d
#define UVD_VCPU_INT_ACK__DRV_FW_REQ_ACK__SHIFT                                                               0x1e
#define UVD_VCPU_INT_ACK__DRV_FW_ACK_ACK__SHIFT                                                               0x1f
#define UVD_VCPU_INT_ACK__PIF_ADDR_ERR_ACK_MASK                                                               0x00000001L
#define UVD_VCPU_INT_ACK__SEMA_WAIT_FAULT_TIMEOUT_ACK_MASK                                                    0x00000002L
#define UVD_VCPU_INT_ACK__SEMA_SIGNAL_INCOMPLETE_TIMEOUT_ACK_MASK                                             0x00000004L
#define UVD_VCPU_INT_ACK__NJ_PF_RPT_ACK_MASK                                                                  0x00000008L
#define UVD_VCPU_INT_ACK__SW_RB1_INT_ACK_MASK                                                                 0x00000010L
#define UVD_VCPU_INT_ACK__SW_RB2_INT_ACK_MASK                                                                 0x00000020L
#define UVD_VCPU_INT_ACK__RBC_REG_PRIV_FAULT_ACK_MASK                                                         0x00000040L
#define UVD_VCPU_INT_ACK__SW_RB3_INT_ACK_MASK                                                                 0x00000080L
#define UVD_VCPU_INT_ACK__SW_RB4_INT_ACK_MASK                                                                 0x00000200L
#define UVD_VCPU_INT_ACK__SW_RB5_INT_ACK_MASK                                                                 0x00000400L
#define UVD_VCPU_INT_ACK__LBSI_ACK_MASK                                                                       0x00000800L
#define UVD_VCPU_INT_ACK__UDEC_ACK_MASK                                                                       0x00001000L
#define UVD_VCPU_INT_ACK__SUVD_ACK_MASK                                                                       0x00008000L
#define UVD_VCPU_INT_ACK__RPTR_WR_ACK_MASK                                                                    0x00010000L
#define UVD_VCPU_INT_ACK__JOB_START_ACK_MASK                                                                  0x00020000L
#define UVD_VCPU_INT_ACK__NJ_PF_ACK_MASK                                                                      0x00040000L
#define UVD_VCPU_INT_ACK__SEMA_WAIT_FAIL_SIG_ACK_MASK                                                         0x00800000L
#define UVD_VCPU_INT_ACK__IDCT_ACK_MASK                                                                       0x01000000L
#define UVD_VCPU_INT_ACK__MPRD_ACK_MASK                                                                       0x02000000L
#define UVD_VCPU_INT_ACK__AVM_INT_ACK_MASK                                                                    0x04000000L
#define UVD_VCPU_INT_ACK__CLK_SWT_ACK_MASK                                                                    0x08000000L
#define UVD_VCPU_INT_ACK__MIF_HWINT_ACK_MASK                                                                  0x10000000L
#define UVD_VCPU_INT_ACK__MPRD_ERR_ACK_MASK                                                                   0x20000000L
#define UVD_VCPU_INT_ACK__DRV_FW_REQ_ACK_MASK                                                                 0x40000000L
#define UVD_VCPU_INT_ACK__DRV_FW_ACK_ACK_MASK                                                                 0x80000000L
//UVD_VCPU_INT_ROUTE
#define UVD_VCPU_INT_ROUTE__DRV_FW_MSG__SHIFT                                                                 0x0
#define UVD_VCPU_INT_ROUTE__FW_DRV_MSG_ACK__SHIFT                                                             0x1
#define UVD_VCPU_INT_ROUTE__VCPU_GPCOM__SHIFT                                                                 0x2
#define UVD_VCPU_INT_ROUTE__DRV_FW_MSG_MASK                                                                   0x00000001L
#define UVD_VCPU_INT_ROUTE__FW_DRV_MSG_ACK_MASK                                                               0x00000002L
#define UVD_VCPU_INT_ROUTE__VCPU_GPCOM_MASK                                                                   0x00000004L
//UVD_DRV_FW_MSG
#define UVD_DRV_FW_MSG__MSG__SHIFT                                                                            0x0
#define UVD_DRV_FW_MSG__MSG_MASK                                                                              0xFFFFFFFFL
//UVD_FW_DRV_MSG_ACK
#define UVD_FW_DRV_MSG_ACK__ACK__SHIFT                                                                        0x0
#define UVD_FW_DRV_MSG_ACK__ACK_MASK                                                                          0x00000001L
//UVD_SUVD_INT_EN
#define UVD_SUVD_INT_EN__SRE_FUNC_INT_EN__SHIFT                                                               0x0
#define UVD_SUVD_INT_EN__SRE_ERR_INT_EN__SHIFT                                                                0x5
#define UVD_SUVD_INT_EN__SIT_FUNC_INT_EN__SHIFT                                                               0x6
#define UVD_SUVD_INT_EN__SIT_ERR_INT_EN__SHIFT                                                                0xb
#define UVD_SUVD_INT_EN__SMP_FUNC_INT_EN__SHIFT                                                               0xc
#define UVD_SUVD_INT_EN__SMP_ERR_INT_EN__SHIFT                                                                0x11
#define UVD_SUVD_INT_EN__SCM_FUNC_INT_EN__SHIFT                                                               0x12
#define UVD_SUVD_INT_EN__SCM_ERR_INT_EN__SHIFT                                                                0x17
#define UVD_SUVD_INT_EN__SDB_FUNC_INT_EN__SHIFT                                                               0x18
#define UVD_SUVD_INT_EN__SDB_ERR_INT_EN__SHIFT                                                                0x1d
#define UVD_SUVD_INT_EN__FBC_ERR_INT_EN__SHIFT                                                                0x1e
#define UVD_SUVD_INT_EN__SRE_FUNC_INT_EN_MASK                                                                 0x0000001FL
#define UVD_SUVD_INT_EN__SRE_ERR_INT_EN_MASK                                                                  0x00000020L
#define UVD_SUVD_INT_EN__SIT_FUNC_INT_EN_MASK                                                                 0x000007C0L
#define UVD_SUVD_INT_EN__SIT_ERR_INT_EN_MASK                                                                  0x00000800L
#define UVD_SUVD_INT_EN__SMP_FUNC_INT_EN_MASK                                                                 0x0001F000L
#define UVD_SUVD_INT_EN__SMP_ERR_INT_EN_MASK                                                                  0x00020000L
#define UVD_SUVD_INT_EN__SCM_FUNC_INT_EN_MASK                                                                 0x007C0000L
#define UVD_SUVD_INT_EN__SCM_ERR_INT_EN_MASK                                                                  0x00800000L
#define UVD_SUVD_INT_EN__SDB_FUNC_INT_EN_MASK                                                                 0x1F000000L
#define UVD_SUVD_INT_EN__SDB_ERR_INT_EN_MASK                                                                  0x20000000L
#define UVD_SUVD_INT_EN__FBC_ERR_INT_EN_MASK                                                                  0x40000000L
//UVD_SUVD_INT_STATUS
#define UVD_SUVD_INT_STATUS__SRE_FUNC_INT__SHIFT                                                              0x0
#define UVD_SUVD_INT_STATUS__SRE_ERR_INT__SHIFT                                                               0x5
#define UVD_SUVD_INT_STATUS__SIT_FUNC_INT__SHIFT                                                              0x6
#define UVD_SUVD_INT_STATUS__SIT_ERR_INT__SHIFT                                                               0xb
#define UVD_SUVD_INT_STATUS__SMP_FUNC_INT__SHIFT                                                              0xc
#define UVD_SUVD_INT_STATUS__SMP_ERR_INT__SHIFT                                                               0x11
#define UVD_SUVD_INT_STATUS__SCM_FUNC_INT__SHIFT                                                              0x12
#define UVD_SUVD_INT_STATUS__SCM_ERR_INT__SHIFT                                                               0x17
#define UVD_SUVD_INT_STATUS__SDB_FUNC_INT__SHIFT                                                              0x18
#define UVD_SUVD_INT_STATUS__SDB_ERR_INT__SHIFT                                                               0x1d
#define UVD_SUVD_INT_STATUS__FBC_ERR_INT__SHIFT                                                               0x1e
#define UVD_SUVD_INT_STATUS__SRE_FUNC_INT_MASK                                                                0x0000001FL
#define UVD_SUVD_INT_STATUS__SRE_ERR_INT_MASK                                                                 0x00000020L
#define UVD_SUVD_INT_STATUS__SIT_FUNC_INT_MASK                                                                0x000007C0L
#define UVD_SUVD_INT_STATUS__SIT_ERR_INT_MASK                                                                 0x00000800L
#define UVD_SUVD_INT_STATUS__SMP_FUNC_INT_MASK                                                                0x0001F000L
#define UVD_SUVD_INT_STATUS__SMP_ERR_INT_MASK                                                                 0x00020000L
#define UVD_SUVD_INT_STATUS__SCM_FUNC_INT_MASK                                                                0x007C0000L
#define UVD_SUVD_INT_STATUS__SCM_ERR_INT_MASK                                                                 0x00800000L
#define UVD_SUVD_INT_STATUS__SDB_FUNC_INT_MASK                                                                0x1F000000L
#define UVD_SUVD_INT_STATUS__SDB_ERR_INT_MASK                                                                 0x20000000L
#define UVD_SUVD_INT_STATUS__FBC_ERR_INT_MASK                                                                 0x40000000L
//UVD_SUVD_INT_ACK
#define UVD_SUVD_INT_ACK__SRE_FUNC_INT_ACK__SHIFT                                                             0x0
#define UVD_SUVD_INT_ACK__SRE_ERR_INT_ACK__SHIFT                                                              0x5
#define UVD_SUVD_INT_ACK__SIT_FUNC_INT_ACK__SHIFT                                                             0x6
#define UVD_SUVD_INT_ACK__SIT_ERR_INT_ACK__SHIFT                                                              0xb
#define UVD_SUVD_INT_ACK__SMP_FUNC_INT_ACK__SHIFT                                                             0xc
#define UVD_SUVD_INT_ACK__SMP_ERR_INT_ACK__SHIFT                                                              0x11
#define UVD_SUVD_INT_ACK__SCM_FUNC_INT_ACK__SHIFT                                                             0x12
#define UVD_SUVD_INT_ACK__SCM_ERR_INT_ACK__SHIFT                                                              0x17
#define UVD_SUVD_INT_ACK__SDB_FUNC_INT_ACK__SHIFT                                                             0x18
#define UVD_SUVD_INT_ACK__SDB_ERR_INT_ACK__SHIFT                                                              0x1d
#define UVD_SUVD_INT_ACK__FBC_ERR_INT_ACK__SHIFT                                                              0x1e
#define UVD_SUVD_INT_ACK__SRE_FUNC_INT_ACK_MASK                                                               0x0000001FL
#define UVD_SUVD_INT_ACK__SRE_ERR_INT_ACK_MASK                                                                0x00000020L
#define UVD_SUVD_INT_ACK__SIT_FUNC_INT_ACK_MASK                                                               0x000007C0L
#define UVD_SUVD_INT_ACK__SIT_ERR_INT_ACK_MASK                                                                0x00000800L
#define UVD_SUVD_INT_ACK__SMP_FUNC_INT_ACK_MASK                                                               0x0001F000L
#define UVD_SUVD_INT_ACK__SMP_ERR_INT_ACK_MASK                                                                0x00020000L
#define UVD_SUVD_INT_ACK__SCM_FUNC_INT_ACK_MASK                                                               0x007C0000L
#define UVD_SUVD_INT_ACK__SCM_ERR_INT_ACK_MASK                                                                0x00800000L
#define UVD_SUVD_INT_ACK__SDB_FUNC_INT_ACK_MASK                                                               0x1F000000L
#define UVD_SUVD_INT_ACK__SDB_ERR_INT_ACK_MASK                                                                0x20000000L
#define UVD_SUVD_INT_ACK__FBC_ERR_INT_ACK_MASK                                                                0x40000000L
//UVD_ENC_VCPU_INT_EN
#define UVD_ENC_VCPU_INT_EN__DCE_UVD_SCAN_IN_BUFMGR_EN__SHIFT                                                 0x0
#define UVD_ENC_VCPU_INT_EN__DCE_UVD_SCAN_IN_BUFMGR2_EN__SHIFT                                                0x1
#define UVD_ENC_VCPU_INT_EN__DCE_UVD_SCAN_IN_BUFMGR3_EN__SHIFT                                                0x2
#define UVD_ENC_VCPU_INT_EN__DCE_UVD_SCAN_IN_BUFMGR_EN_MASK                                                   0x00000001L
#define UVD_ENC_VCPU_INT_EN__DCE_UVD_SCAN_IN_BUFMGR2_EN_MASK                                                  0x00000002L
#define UVD_ENC_VCPU_INT_EN__DCE_UVD_SCAN_IN_BUFMGR3_EN_MASK                                                  0x00000004L
//UVD_ENC_VCPU_INT_STATUS
#define UVD_ENC_VCPU_INT_STATUS__DCE_UVD_SCAN_IN_BUFMGR_INT__SHIFT                                            0x0
#define UVD_ENC_VCPU_INT_STATUS__DCE_UVD_SCAN_IN_BUFMGR2_INT__SHIFT                                           0x1
#define UVD_ENC_VCPU_INT_STATUS__DCE_UVD_SCAN_IN_BUFMGR3_INT__SHIFT                                           0x2
#define UVD_ENC_VCPU_INT_STATUS__DCE_UVD_SCAN_IN_BUFMGR_INT_MASK                                              0x00000001L
#define UVD_ENC_VCPU_INT_STATUS__DCE_UVD_SCAN_IN_BUFMGR2_INT_MASK                                             0x00000002L
#define UVD_ENC_VCPU_INT_STATUS__DCE_UVD_SCAN_IN_BUFMGR3_INT_MASK                                             0x00000004L
//UVD_ENC_VCPU_INT_ACK
#define UVD_ENC_VCPU_INT_ACK__DCE_UVD_SCAN_IN_BUFMGR_ACK__SHIFT                                               0x0
#define UVD_ENC_VCPU_INT_ACK__DCE_UVD_SCAN_IN_BUFMGR2_ACK__SHIFT                                              0x1
#define UVD_ENC_VCPU_INT_ACK__DCE_UVD_SCAN_IN_BUFMGR3_ACK__SHIFT                                              0x2
#define UVD_ENC_VCPU_INT_ACK__DCE_UVD_SCAN_IN_BUFMGR_ACK_MASK                                                 0x00000001L
#define UVD_ENC_VCPU_INT_ACK__DCE_UVD_SCAN_IN_BUFMGR2_ACK_MASK                                                0x00000002L
#define UVD_ENC_VCPU_INT_ACK__DCE_UVD_SCAN_IN_BUFMGR3_ACK_MASK                                                0x00000004L
//UVD_MASTINT_EN
#define UVD_MASTINT_EN__OVERRUN_RST__SHIFT                                                                    0x0
#define UVD_MASTINT_EN__VCPU_EN__SHIFT                                                                        0x1
#define UVD_MASTINT_EN__SYS_EN__SHIFT                                                                         0x2
#define UVD_MASTINT_EN__INT_OVERRUN__SHIFT                                                                    0x4
#define UVD_MASTINT_EN__OVERRUN_RST_MASK                                                                      0x00000001L
#define UVD_MASTINT_EN__VCPU_EN_MASK                                                                          0x00000002L
#define UVD_MASTINT_EN__SYS_EN_MASK                                                                           0x00000004L
#define UVD_MASTINT_EN__INT_OVERRUN_MASK                                                                      0x00FFFFF0L
//UVD_SYS_INT_EN
#define UVD_SYS_INT_EN__PIF_ADDR_ERR_EN__SHIFT                                                                0x0
#define UVD_SYS_INT_EN__SEMA_WAIT_FAULT_TIMEOUT_EN__SHIFT                                                     0x1
#define UVD_SYS_INT_EN__SEMA_SIGNAL_INCOMPLETE_TIMEOUT_EN__SHIFT                                              0x2
#define UVD_SYS_INT_EN__CXW_WR_EN__SHIFT                                                                      0x3
#define UVD_SYS_INT_EN__RBC_REG_PRIV_FAULT_EN__SHIFT                                                          0x6
#define UVD_SYS_INT_EN__LBSI_EN__SHIFT                                                                        0xb
#define UVD_SYS_INT_EN__UDEC_EN__SHIFT                                                                        0xc
#define UVD_SYS_INT_EN__SUVD_EN__SHIFT                                                                        0xf
#define UVD_SYS_INT_EN__JOB_DONE_EN__SHIFT                                                                    0x10
#define UVD_SYS_INT_EN__SEMA_WAIT_FAIL_SIG_EN__SHIFT                                                          0x17
#define UVD_SYS_INT_EN__IDCT_EN__SHIFT                                                                        0x18
#define UVD_SYS_INT_EN__MPRD_EN__SHIFT                                                                        0x19
#define UVD_SYS_INT_EN__RASCNTL_VCPU_VCODEC_EN__SHIFT                                                         0x1a
#define UVD_SYS_INT_EN__CLK_SWT_EN__SHIFT                                                                     0x1b
#define UVD_SYS_INT_EN__MIF_HWINT_EN__SHIFT                                                                   0x1c
#define UVD_SYS_INT_EN__MPRD_ERR_EN__SHIFT                                                                    0x1d
#define UVD_SYS_INT_EN__AVM_INT_EN__SHIFT                                                                     0x1f
#define UVD_SYS_INT_EN__PIF_ADDR_ERR_EN_MASK                                                                  0x00000001L
#define UVD_SYS_INT_EN__SEMA_WAIT_FAULT_TIMEOUT_EN_MASK                                                       0x00000002L
#define UVD_SYS_INT_EN__SEMA_SIGNAL_INCOMPLETE_TIMEOUT_EN_MASK                                                0x00000004L
#define UVD_SYS_INT_EN__CXW_WR_EN_MASK                                                                        0x00000008L
#define UVD_SYS_INT_EN__RBC_REG_PRIV_FAULT_EN_MASK                                                            0x00000040L
#define UVD_SYS_INT_EN__LBSI_EN_MASK                                                                          0x00000800L
#define UVD_SYS_INT_EN__UDEC_EN_MASK                                                                          0x00001000L
#define UVD_SYS_INT_EN__SUVD_EN_MASK                                                                          0x00008000L
#define UVD_SYS_INT_EN__JOB_DONE_EN_MASK                                                                      0x00010000L
#define UVD_SYS_INT_EN__SEMA_WAIT_FAIL_SIG_EN_MASK                                                            0x00800000L
#define UVD_SYS_INT_EN__IDCT_EN_MASK                                                                          0x01000000L
#define UVD_SYS_INT_EN__MPRD_EN_MASK                                                                          0x02000000L
#define UVD_SYS_INT_EN__RASCNTL_VCPU_VCODEC_EN_MASK                                                           0x04000000L
#define UVD_SYS_INT_EN__CLK_SWT_EN_MASK                                                                       0x08000000L
#define UVD_SYS_INT_EN__MIF_HWINT_EN_MASK                                                                     0x10000000L
#define UVD_SYS_INT_EN__MPRD_ERR_EN_MASK                                                                      0x20000000L
#define UVD_SYS_INT_EN__AVM_INT_EN_MASK                                                                       0x80000000L
//UVD_SYS_INT_STATUS
#define UVD_SYS_INT_STATUS__PIF_ADDR_ERR_INT__SHIFT                                                           0x0
#define UVD_SYS_INT_STATUS__SEMA_WAIT_FAULT_TIMEOUT_INT__SHIFT                                                0x1
#define UVD_SYS_INT_STATUS__SEMA_SIGNAL_INCOMPLETE_TIMEOUT_INT__SHIFT                                         0x2
#define UVD_SYS_INT_STATUS__CXW_WR_INT__SHIFT                                                                 0x3
#define UVD_SYS_INT_STATUS__RBC_REG_PRIV_FAULT_INT__SHIFT                                                     0x6
#define UVD_SYS_INT_STATUS__LBSI_INT__SHIFT                                                                   0xb
#define UVD_SYS_INT_STATUS__UDEC_INT__SHIFT                                                                   0xc
#define UVD_SYS_INT_STATUS__SUVD_INT__SHIFT                                                                   0xf
#define UVD_SYS_INT_STATUS__JOB_DONE_INT__SHIFT                                                               0x10
#define UVD_SYS_INT_STATUS__GPCOM_INT__SHIFT                                                                  0x12
#define UVD_SYS_INT_STATUS__SEMA_WAIT_FAIL_SIG_INT__SHIFT                                                     0x17
#define UVD_SYS_INT_STATUS__IDCT_INT__SHIFT                                                                   0x18
#define UVD_SYS_INT_STATUS__MPRD_INT__SHIFT                                                                   0x19
#define UVD_SYS_INT_STATUS__CLK_SWT_INT__SHIFT                                                                0x1b
#define UVD_SYS_INT_STATUS__MIF_HWINT__SHIFT                                                                  0x1c
#define UVD_SYS_INT_STATUS__MPRD_ERR_INT__SHIFT                                                               0x1d
#define UVD_SYS_INT_STATUS__RASCNTL_VCPU_VCODEC_INT__SHIFT                                                    0x1e
#define UVD_SYS_INT_STATUS__AVM_INT__SHIFT                                                                    0x1f
#define UVD_SYS_INT_STATUS__PIF_ADDR_ERR_INT_MASK                                                             0x00000001L
#define UVD_SYS_INT_STATUS__SEMA_WAIT_FAULT_TIMEOUT_INT_MASK                                                  0x00000002L
#define UVD_SYS_INT_STATUS__SEMA_SIGNAL_INCOMPLETE_TIMEOUT_INT_MASK                                           0x00000004L
#define UVD_SYS_INT_STATUS__CXW_WR_INT_MASK                                                                   0x00000008L
#define UVD_SYS_INT_STATUS__RBC_REG_PRIV_FAULT_INT_MASK                                                       0x00000040L
#define UVD_SYS_INT_STATUS__LBSI_INT_MASK                                                                     0x00000800L
#define UVD_SYS_INT_STATUS__UDEC_INT_MASK                                                                     0x00001000L
#define UVD_SYS_INT_STATUS__SUVD_INT_MASK                                                                     0x00008000L
#define UVD_SYS_INT_STATUS__JOB_DONE_INT_MASK                                                                 0x00010000L
#define UVD_SYS_INT_STATUS__GPCOM_INT_MASK                                                                    0x00040000L
#define UVD_SYS_INT_STATUS__SEMA_WAIT_FAIL_SIG_INT_MASK                                                       0x00800000L
#define UVD_SYS_INT_STATUS__IDCT_INT_MASK                                                                     0x01000000L
#define UVD_SYS_INT_STATUS__MPRD_INT_MASK                                                                     0x02000000L
#define UVD_SYS_INT_STATUS__CLK_SWT_INT_MASK                                                                  0x08000000L
#define UVD_SYS_INT_STATUS__MIF_HWINT_MASK                                                                    0x10000000L
#define UVD_SYS_INT_STATUS__MPRD_ERR_INT_MASK                                                                 0x20000000L
#define UVD_SYS_INT_STATUS__RASCNTL_VCPU_VCODEC_INT_MASK                                                      0x40000000L
#define UVD_SYS_INT_STATUS__AVM_INT_MASK                                                                      0x80000000L
//UVD_SYS_INT_ACK
#define UVD_SYS_INT_ACK__PIF_ADDR_ERR_ACK__SHIFT                                                              0x0
#define UVD_SYS_INT_ACK__SEMA_WAIT_FAULT_TIMEOUT_ACK__SHIFT                                                   0x1
#define UVD_SYS_INT_ACK__SEMA_SIGNAL_INCOMPLETE_TIMEOUT_ACK__SHIFT                                            0x2
#define UVD_SYS_INT_ACK__CXW_WR_ACK__SHIFT                                                                    0x3
#define UVD_SYS_INT_ACK__RBC_REG_PRIV_FAULT_ACK__SHIFT                                                        0x6
#define UVD_SYS_INT_ACK__LBSI_ACK__SHIFT                                                                      0xb
#define UVD_SYS_INT_ACK__UDEC_ACK__SHIFT                                                                      0xc
#define UVD_SYS_INT_ACK__SUVD_ACK__SHIFT                                                                      0xf
#define UVD_SYS_INT_ACK__JOB_DONE_ACK__SHIFT                                                                  0x10
#define UVD_SYS_INT_ACK__SEMA_WAIT_FAIL_SIG_ACK__SHIFT                                                        0x17
#define UVD_SYS_INT_ACK__IDCT_ACK__SHIFT                                                                      0x18
#define UVD_SYS_INT_ACK__MPRD_ACK__SHIFT                                                                      0x19
#define UVD_SYS_INT_ACK__CLK_SWT_ACK__SHIFT                                                                   0x1b
#define UVD_SYS_INT_ACK__MIF_HWINT_ACK__SHIFT                                                                 0x1c
#define UVD_SYS_INT_ACK__MPRD_ERR_ACK__SHIFT                                                                  0x1d
#define UVD_SYS_INT_ACK__RASCNTL_VCPU_VCODEC_ACK__SHIFT                                                       0x1e
#define UVD_SYS_INT_ACK__AVM_INT_ACK__SHIFT                                                                   0x1f
#define UVD_SYS_INT_ACK__PIF_ADDR_ERR_ACK_MASK                                                                0x00000001L
#define UVD_SYS_INT_ACK__SEMA_WAIT_FAULT_TIMEOUT_ACK_MASK                                                     0x00000002L
#define UVD_SYS_INT_ACK__SEMA_SIGNAL_INCOMPLETE_TIMEOUT_ACK_MASK                                              0x00000004L
#define UVD_SYS_INT_ACK__CXW_WR_ACK_MASK                                                                      0x00000008L
#define UVD_SYS_INT_ACK__RBC_REG_PRIV_FAULT_ACK_MASK                                                          0x00000040L
#define UVD_SYS_INT_ACK__LBSI_ACK_MASK                                                                        0x00000800L
#define UVD_SYS_INT_ACK__UDEC_ACK_MASK                                                                        0x00001000L
#define UVD_SYS_INT_ACK__SUVD_ACK_MASK                                                                        0x00008000L
#define UVD_SYS_INT_ACK__JOB_DONE_ACK_MASK                                                                    0x00010000L
#define UVD_SYS_INT_ACK__SEMA_WAIT_FAIL_SIG_ACK_MASK                                                          0x00800000L
#define UVD_SYS_INT_ACK__IDCT_ACK_MASK                                                                        0x01000000L
#define UVD_SYS_INT_ACK__MPRD_ACK_MASK                                                                        0x02000000L
#define UVD_SYS_INT_ACK__CLK_SWT_ACK_MASK                                                                     0x08000000L
#define UVD_SYS_INT_ACK__MIF_HWINT_ACK_MASK                                                                   0x10000000L
#define UVD_SYS_INT_ACK__MPRD_ERR_ACK_MASK                                                                    0x20000000L
#define UVD_SYS_INT_ACK__RASCNTL_VCPU_VCODEC_ACK_MASK                                                         0x40000000L
#define UVD_SYS_INT_ACK__AVM_INT_ACK_MASK                                                                     0x80000000L
//UVD_JOB_DONE
#define UVD_JOB_DONE__JOB_DONE__SHIFT                                                                         0x0
#define UVD_JOB_DONE__JOB_DONE_MASK                                                                           0x00000003L
//UVD_CBUF_ID
#define UVD_CBUF_ID__CBUF_ID__SHIFT                                                                           0x0
#define UVD_CBUF_ID__CBUF_ID_MASK                                                                             0xFFFFFFFFL
//UVD_CONTEXT_ID
#define UVD_CONTEXT_ID__CONTEXT_ID__SHIFT                                                                     0x0
#define UVD_CONTEXT_ID__CONTEXT_ID_MASK                                                                       0xFFFFFFFFL
//UVD_CONTEXT_ID2
#define UVD_CONTEXT_ID2__CONTEXT_ID2__SHIFT                                                                   0x0
#define UVD_CONTEXT_ID2__CONTEXT_ID2_MASK                                                                     0xFFFFFFFFL
//UVD_NO_OP
#define UVD_NO_OP__NO_OP__SHIFT                                                                               0x0
#define UVD_NO_OP__NO_OP_MASK                                                                                 0xFFFFFFFFL
//UVD_RB_BASE_LO
#define UVD_RB_BASE_LO__RB_BASE_LO__SHIFT                                                                     0x6
#define UVD_RB_BASE_LO__RB_BASE_LO_MASK                                                                       0xFFFFFFC0L
//UVD_RB_BASE_HI
#define UVD_RB_BASE_HI__RB_BASE_HI__SHIFT                                                                     0x0
#define UVD_RB_BASE_HI__RB_BASE_HI_MASK                                                                       0xFFFFFFFFL
//UVD_RB_SIZE
#define UVD_RB_SIZE__RB_SIZE__SHIFT                                                                           0x4
#define UVD_RB_SIZE__RB_SIZE_MASK                                                                             0x007FFFF0L
//UVD_RB_BASE_LO2
#define UVD_RB_BASE_LO2__RB_BASE_LO__SHIFT                                                                    0x6
#define UVD_RB_BASE_LO2__RB_BASE_LO_MASK                                                                      0xFFFFFFC0L
//UVD_RB_BASE_HI2
#define UVD_RB_BASE_HI2__RB_BASE_HI__SHIFT                                                                    0x0
#define UVD_RB_BASE_HI2__RB_BASE_HI_MASK                                                                      0xFFFFFFFFL
//UVD_RB_SIZE2
#define UVD_RB_SIZE2__RB_SIZE__SHIFT                                                                          0x4
#define UVD_RB_SIZE2__RB_SIZE_MASK                                                                            0x007FFFF0L
//UVD_RB_BASE_LO3
#define UVD_RB_BASE_LO3__RB_BASE_LO__SHIFT                                                                    0x6
#define UVD_RB_BASE_LO3__RB_BASE_LO_MASK                                                                      0xFFFFFFC0L
//UVD_RB_BASE_HI3
#define UVD_RB_BASE_HI3__RB_BASE_HI__SHIFT                                                                    0x0
#define UVD_RB_BASE_HI3__RB_BASE_HI_MASK                                                                      0xFFFFFFFFL
//UVD_RB_SIZE3
#define UVD_RB_SIZE3__RB_SIZE__SHIFT                                                                          0x4
#define UVD_RB_SIZE3__RB_SIZE_MASK                                                                            0x007FFFF0L
//UVD_RB_BASE_LO4
#define UVD_RB_BASE_LO4__RB_BASE_LO__SHIFT                                                                    0x6
#define UVD_RB_BASE_LO4__RB_BASE_LO_MASK                                                                      0xFFFFFFC0L
//UVD_RB_BASE_HI4
#define UVD_RB_BASE_HI4__RB_BASE_HI__SHIFT                                                                    0x0
#define UVD_RB_BASE_HI4__RB_BASE_HI_MASK                                                                      0xFFFFFFFFL
//UVD_RB_SIZE4
#define UVD_RB_SIZE4__RB_SIZE__SHIFT                                                                          0x4
#define UVD_RB_SIZE4__RB_SIZE_MASK                                                                            0x007FFFF0L
//UVD_OUT_RB_BASE_LO
#define UVD_OUT_RB_BASE_LO__RB_BASE_LO__SHIFT                                                                 0x6
#define UVD_OUT_RB_BASE_LO__RB_BASE_LO_MASK                                                                   0xFFFFFFC0L
//UVD_OUT_RB_BASE_HI
#define UVD_OUT_RB_BASE_HI__RB_BASE_HI__SHIFT                                                                 0x0
#define UVD_OUT_RB_BASE_HI__RB_BASE_HI_MASK                                                                   0xFFFFFFFFL
//UVD_OUT_RB_SIZE
#define UVD_OUT_RB_SIZE__RB_SIZE__SHIFT                                                                       0x4
#define UVD_OUT_RB_SIZE__RB_SIZE_MASK                                                                         0x007FFFF0L
//UVD_IOV_MAILBOX
#define UVD_IOV_MAILBOX__MAILBOX__SHIFT                                                                       0x0
#define UVD_IOV_MAILBOX__MAILBOX_MASK                                                                         0xFFFFFFFFL
//UVD_IOV_MAILBOX_RESP
#define UVD_IOV_MAILBOX_RESP__RESP__SHIFT                                                                     0x0
#define UVD_IOV_MAILBOX_RESP__RESP_MASK                                                                       0xFFFFFFFFL
//UVD_RB_ARB_CTRL
#define UVD_RB_ARB_CTRL__SRBM_DROP__SHIFT                                                                     0x0
#define UVD_RB_ARB_CTRL__SRBM_DIS__SHIFT                                                                      0x1
#define UVD_RB_ARB_CTRL__VCPU_DROP__SHIFT                                                                     0x2
#define UVD_RB_ARB_CTRL__VCPU_DIS__SHIFT                                                                      0x3
#define UVD_RB_ARB_CTRL__RBC_DROP__SHIFT                                                                      0x4
#define UVD_RB_ARB_CTRL__RBC_DIS__SHIFT                                                                       0x5
#define UVD_RB_ARB_CTRL__FWOFLD_DROP__SHIFT                                                                   0x6
#define UVD_RB_ARB_CTRL__FWOFLD_DIS__SHIFT                                                                    0x7
#define UVD_RB_ARB_CTRL__FAST_PATH_EN__SHIFT                                                                  0x8
#define UVD_RB_ARB_CTRL__SRBM_DROP_MASK                                                                       0x00000001L
#define UVD_RB_ARB_CTRL__SRBM_DIS_MASK                                                                        0x00000002L
#define UVD_RB_ARB_CTRL__VCPU_DROP_MASK                                                                       0x00000004L
#define UVD_RB_ARB_CTRL__VCPU_DIS_MASK                                                                        0x00000008L
#define UVD_RB_ARB_CTRL__RBC_DROP_MASK                                                                        0x00000010L
#define UVD_RB_ARB_CTRL__RBC_DIS_MASK                                                                         0x00000020L
#define UVD_RB_ARB_CTRL__FWOFLD_DROP_MASK                                                                     0x00000040L
#define UVD_RB_ARB_CTRL__FWOFLD_DIS_MASK                                                                      0x00000080L
#define UVD_RB_ARB_CTRL__FAST_PATH_EN_MASK                                                                    0x00000100L
//UVD_CTX_INDEX
#define UVD_CTX_INDEX__INDEX__SHIFT                                                                           0x0
#define UVD_CTX_INDEX__INDEX_MASK                                                                             0x000001FFL
//UVD_CTX_DATA
#define UVD_CTX_DATA__DATA__SHIFT                                                                             0x0
#define UVD_CTX_DATA__DATA_MASK                                                                               0xFFFFFFFFL
//UVD_CXW_WR
#define UVD_CXW_WR__DAT__SHIFT                                                                                0x0
#define UVD_CXW_WR__STAT__SHIFT                                                                               0x1f
#define UVD_CXW_WR__DAT_MASK                                                                                  0x0FFFFFFFL
#define UVD_CXW_WR__STAT_MASK                                                                                 0x80000000L
//UVD_CXW_WR_INT_ID
#define UVD_CXW_WR_INT_ID__ID__SHIFT                                                                          0x0
#define UVD_CXW_WR_INT_ID__ID_MASK                                                                            0x000000FFL
//UVD_CXW_WR_INT_CTX_ID
#define UVD_CXW_WR_INT_CTX_ID__ID__SHIFT                                                                      0x0
#define UVD_CXW_WR_INT_CTX_ID__ID_MASK                                                                        0x0FFFFFFFL
//UVD_CXW_INT_ID
#define UVD_CXW_INT_ID__ID__SHIFT                                                                             0x0
#define UVD_CXW_INT_ID__ID_MASK                                                                               0x000000FFL
//UVD_MPEG2_ERROR
#define UVD_MPEG2_ERROR__STATUS__SHIFT                                                                        0x0
#define UVD_MPEG2_ERROR__STATUS_MASK                                                                          0xFFFFFFFFL
//UVD_YBASE
#define UVD_YBASE__DUM__SHIFT                                                                                 0x0
#define UVD_YBASE__DUM_MASK                                                                                   0xFFFFFFFFL
//UVD_UVBASE
#define UVD_UVBASE__DUM__SHIFT                                                                                0x0
#define UVD_UVBASE__DUM_MASK                                                                                  0xFFFFFFFFL
//UVD_PITCH
#define UVD_PITCH__DUM__SHIFT                                                                                 0x0
#define UVD_PITCH__DUM_MASK                                                                                   0xFFFFFFFFL
//UVD_WIDTH
#define UVD_WIDTH__DUM__SHIFT                                                                                 0x0
#define UVD_WIDTH__DUM_MASK                                                                                   0xFFFFFFFFL
//UVD_HEIGHT
#define UVD_HEIGHT__DUM__SHIFT                                                                                0x0
#define UVD_HEIGHT__DUM_MASK                                                                                  0xFFFFFFFFL
//UVD_PICCOUNT
#define UVD_PICCOUNT__DUM__SHIFT                                                                              0x0
#define UVD_PICCOUNT__DUM_MASK                                                                                0xFFFFFFFFL
//UVD_MPRD_INITIAL_XY
#define UVD_MPRD_INITIAL_XY__MPRD_SCREEN_X__SHIFT                                                             0x0
#define UVD_MPRD_INITIAL_XY__MPRD_SCREEN_Y__SHIFT                                                             0x10
#define UVD_MPRD_INITIAL_XY__MPRD_SCREEN_X_MASK                                                               0x00000FFFL
#define UVD_MPRD_INITIAL_XY__MPRD_SCREEN_Y_MASK                                                               0x0FFF0000L
//UVD_MPEG2_CTRL
#define UVD_MPEG2_CTRL__EN__SHIFT                                                                             0x0
#define UVD_MPEG2_CTRL__TRICK_MODE__SHIFT                                                                     0x1
#define UVD_MPEG2_CTRL__NUM_MB_PER_JOB__SHIFT                                                                 0x10
#define UVD_MPEG2_CTRL__EN_MASK                                                                               0x00000001L
#define UVD_MPEG2_CTRL__TRICK_MODE_MASK                                                                       0x00000002L
#define UVD_MPEG2_CTRL__NUM_MB_PER_JOB_MASK                                                                   0xFFFF0000L
//UVD_MB_CTL_BUF_BASE
#define UVD_MB_CTL_BUF_BASE__BASE__SHIFT                                                                      0x0
#define UVD_MB_CTL_BUF_BASE__BASE_MASK                                                                        0xFFFFFFFFL
//UVD_PIC_CTL_BUF_BASE
#define UVD_PIC_CTL_BUF_BASE__BASE__SHIFT                                                                     0x0
#define UVD_PIC_CTL_BUF_BASE__BASE_MASK                                                                       0xFFFFFFFFL
//UVD_DXVA_BUF_SIZE
#define UVD_DXVA_BUF_SIZE__PIC_SIZE__SHIFT                                                                    0x0
#define UVD_DXVA_BUF_SIZE__MB_SIZE__SHIFT                                                                     0x10
#define UVD_DXVA_BUF_SIZE__PIC_SIZE_MASK                                                                      0x0000FFFFL
#define UVD_DXVA_BUF_SIZE__MB_SIZE_MASK                                                                       0xFFFF0000L
//UVD_SCRATCH_NP
#define UVD_SCRATCH_NP__DATA__SHIFT                                                                           0x0
#define UVD_SCRATCH_NP__DATA_MASK                                                                             0xFFFFFFFFL
//UVD_CLK_SWT_HANDSHAKE
#define UVD_CLK_SWT_HANDSHAKE__CLK_SWT_TYPE__SHIFT                                                            0x0
#define UVD_CLK_SWT_HANDSHAKE__CLK_DOMAIN_SWT__SHIFT                                                          0x8
#define UVD_CLK_SWT_HANDSHAKE__CLK_SWT_TYPE_MASK                                                              0x00000003L
#define UVD_CLK_SWT_HANDSHAKE__CLK_DOMAIN_SWT_MASK                                                            0x00000300L
//UVD_GP_SCRATCH0
#define UVD_GP_SCRATCH0__DATA__SHIFT                                                                          0x0
#define UVD_GP_SCRATCH0__DATA_MASK                                                                            0xFFFFFFFFL
//UVD_GP_SCRATCH1
#define UVD_GP_SCRATCH1__DATA__SHIFT                                                                          0x0
#define UVD_GP_SCRATCH1__DATA_MASK                                                                            0xFFFFFFFFL
//UVD_GP_SCRATCH2
#define UVD_GP_SCRATCH2__DATA__SHIFT                                                                          0x0
#define UVD_GP_SCRATCH2__DATA_MASK                                                                            0xFFFFFFFFL
//UVD_GP_SCRATCH3
#define UVD_GP_SCRATCH3__DATA__SHIFT                                                                          0x0
#define UVD_GP_SCRATCH3__DATA_MASK                                                                            0xFFFFFFFFL
//UVD_GP_SCRATCH4
#define UVD_GP_SCRATCH4__DATA__SHIFT                                                                          0x0
#define UVD_GP_SCRATCH4__DATA_MASK                                                                            0xFFFFFFFFL
//UVD_GP_SCRATCH5
#define UVD_GP_SCRATCH5__DATA__SHIFT                                                                          0x0
#define UVD_GP_SCRATCH5__DATA_MASK                                                                            0xFFFFFFFFL
//UVD_GP_SCRATCH6
#define UVD_GP_SCRATCH6__DATA__SHIFT                                                                          0x0
#define UVD_GP_SCRATCH6__DATA_MASK                                                                            0xFFFFFFFFL
//UVD_GP_SCRATCH7
#define UVD_GP_SCRATCH7__DATA__SHIFT                                                                          0x0
#define UVD_GP_SCRATCH7__DATA_MASK                                                                            0xFFFFFFFFL
//UVD_GP_SCRATCH8
#define UVD_GP_SCRATCH8__DATA__SHIFT                                                                          0x0
#define UVD_GP_SCRATCH8__DATA_MASK                                                                            0xFFFFFFFFL
//UVD_GP_SCRATCH9
#define UVD_GP_SCRATCH9__DATA__SHIFT                                                                          0x0
#define UVD_GP_SCRATCH9__DATA_MASK                                                                            0xFFFFFFFFL
//UVD_GP_SCRATCH10
#define UVD_GP_SCRATCH10__DATA__SHIFT                                                                         0x0
#define UVD_GP_SCRATCH10__DATA_MASK                                                                           0xFFFFFFFFL
//UVD_GP_SCRATCH11
#define UVD_GP_SCRATCH11__DATA__SHIFT                                                                         0x0
#define UVD_GP_SCRATCH11__DATA_MASK                                                                           0xFFFFFFFFL
//UVD_GP_SCRATCH12
#define UVD_GP_SCRATCH12__DATA__SHIFT                                                                         0x0
#define UVD_GP_SCRATCH12__DATA_MASK                                                                           0xFFFFFFFFL
//UVD_GP_SCRATCH13
#define UVD_GP_SCRATCH13__DATA__SHIFT                                                                         0x0
#define UVD_GP_SCRATCH13__DATA_MASK                                                                           0xFFFFFFFFL
//UVD_GP_SCRATCH14
#define UVD_GP_SCRATCH14__DATA__SHIFT                                                                         0x0
#define UVD_GP_SCRATCH14__DATA_MASK                                                                           0xFFFFFFFFL
//UVD_GP_SCRATCH15
#define UVD_GP_SCRATCH15__DATA__SHIFT                                                                         0x0
#define UVD_GP_SCRATCH15__DATA_MASK                                                                           0xFFFFFFFFL
//UVD_GP_SCRATCH16
#define UVD_GP_SCRATCH16__DATA__SHIFT                                                                         0x0
#define UVD_GP_SCRATCH16__DATA_MASK                                                                           0xFFFFFFFFL
//UVD_GP_SCRATCH17
#define UVD_GP_SCRATCH17__DATA__SHIFT                                                                         0x0
#define UVD_GP_SCRATCH17__DATA_MASK                                                                           0xFFFFFFFFL
//UVD_GP_SCRATCH18
#define UVD_GP_SCRATCH18__DATA__SHIFT                                                                         0x0
#define UVD_GP_SCRATCH18__DATA_MASK                                                                           0xFFFFFFFFL
//UVD_GP_SCRATCH19
#define UVD_GP_SCRATCH19__DATA__SHIFT                                                                         0x0
#define UVD_GP_SCRATCH19__DATA_MASK                                                                           0xFFFFFFFFL
//UVD_GP_SCRATCH20
#define UVD_GP_SCRATCH20__DATA__SHIFT                                                                         0x0
#define UVD_GP_SCRATCH20__DATA_MASK                                                                           0xFFFFFFFFL
//UVD_GP_SCRATCH21
#define UVD_GP_SCRATCH21__DATA__SHIFT                                                                         0x0
#define UVD_GP_SCRATCH21__DATA_MASK                                                                           0xFFFFFFFFL
//UVD_GP_SCRATCH22
#define UVD_GP_SCRATCH22__DATA__SHIFT                                                                         0x0
#define UVD_GP_SCRATCH22__DATA_MASK                                                                           0xFFFFFFFFL
//UVD_GP_SCRATCH23
#define UVD_GP_SCRATCH23__DATA__SHIFT                                                                         0x0
#define UVD_GP_SCRATCH23__DATA_MASK                                                                           0xFFFFFFFFL
//UVD_AUDIO_RB_BASE_LO
#define UVD_AUDIO_RB_BASE_LO__RB_BASE_LO__SHIFT                                                               0x6
#define UVD_AUDIO_RB_BASE_LO__RB_BASE_LO_MASK                                                                 0xFFFFFFC0L
//UVD_AUDIO_RB_BASE_HI
#define UVD_AUDIO_RB_BASE_HI__RB_BASE_HI__SHIFT                                                               0x0
#define UVD_AUDIO_RB_BASE_HI__RB_BASE_HI_MASK                                                                 0xFFFFFFFFL
//UVD_AUDIO_RB_SIZE
#define UVD_AUDIO_RB_SIZE__RB_SIZE__SHIFT                                                                     0x4
#define UVD_AUDIO_RB_SIZE__RB_SIZE_MASK                                                                       0x007FFFF0L
//UVD_VCPU_INT_STATUS2
#define UVD_VCPU_INT_STATUS2__SW_RB6_INT__SHIFT                                                               0x0
#define UVD_VCPU_INT_STATUS2__RASCNTL_VCPU_VCODEC_INT__SHIFT                                                  0x15
#define UVD_VCPU_INT_STATUS2__SW_RB6_INT_MASK                                                                 0x00000001L
#define UVD_VCPU_INT_STATUS2__RASCNTL_VCPU_VCODEC_INT_MASK                                                    0x00200000L
//UVD_VCPU_INT_ACK2
#define UVD_VCPU_INT_ACK2__SW_RB6_INT_ACK__SHIFT                                                              0x0
#define UVD_VCPU_INT_ACK2__RASCNTL_VCPU_VCODEC_ACK__SHIFT                                                     0x16
#define UVD_VCPU_INT_ACK2__SW_RB6_INT_ACK_MASK                                                                0x00000001L
#define UVD_VCPU_INT_ACK2__RASCNTL_VCPU_VCODEC_ACK_MASK                                                       0x00400000L
//UVD_VCPU_INT_EN2
#define UVD_VCPU_INT_EN2__SW_RB6_INT_EN__SHIFT                                                                0x0
#define UVD_VCPU_INT_EN2__RASCNTL_VCPU_VCODEC_EN__SHIFT                                                       0x1
#define UVD_VCPU_INT_EN2__SW_RB6_INT_EN_MASK                                                                  0x00000001L
#define UVD_VCPU_INT_EN2__RASCNTL_VCPU_VCODEC_EN_MASK                                                         0x00000002L
//UVD_SUVD_CGC_STATUS2
#define UVD_SUVD_CGC_STATUS2__SMPA_VCLK__SHIFT                                                                0x0
#define UVD_SUVD_CGC_STATUS2__SMPA_DCLK__SHIFT                                                                0x1
#define UVD_SUVD_CGC_STATUS2__MPBE1_DCLK__SHIFT                                                               0x3
#define UVD_SUVD_CGC_STATUS2__SIT_AV1_DCLK__SHIFT                                                             0x4
#define UVD_SUVD_CGC_STATUS2__SDB_AV1_DCLK__SHIFT                                                             0x5
#define UVD_SUVD_CGC_STATUS2__MPC1_DCLK__SHIFT                                                                0x6
#define UVD_SUVD_CGC_STATUS2__MPC1_SCLK__SHIFT                                                                0x7
#define UVD_SUVD_CGC_STATUS2__MPC1_VCLK__SHIFT                                                                0x8
#define UVD_SUVD_CGC_STATUS2__SRE_AV1_ENC_DCLK__SHIFT                                                         0x9
#define UVD_SUVD_CGC_STATUS2__CDEFE_DCLK__SHIFT                                                               0xa
#define UVD_SUVD_CGC_STATUS2__SIT0_DCLK__SHIFT                                                                0xb
#define UVD_SUVD_CGC_STATUS2__SIT1_DCLK__SHIFT                                                                0xc
#define UVD_SUVD_CGC_STATUS2__SIT2_DCLK__SHIFT                                                                0xd
#define UVD_SUVD_CGC_STATUS2__FBC_PCLK__SHIFT                                                                 0x1c
#define UVD_SUVD_CGC_STATUS2__FBC_CCLK__SHIFT                                                                 0x1d
#define UVD_SUVD_CGC_STATUS2__SMPA_VCLK_MASK                                                                  0x00000001L
#define UVD_SUVD_CGC_STATUS2__SMPA_DCLK_MASK                                                                  0x00000002L
#define UVD_SUVD_CGC_STATUS2__MPBE1_DCLK_MASK                                                                 0x00000008L
#define UVD_SUVD_CGC_STATUS2__SIT_AV1_DCLK_MASK                                                               0x00000010L
#define UVD_SUVD_CGC_STATUS2__SDB_AV1_DCLK_MASK                                                               0x00000020L
#define UVD_SUVD_CGC_STATUS2__MPC1_DCLK_MASK                                                                  0x00000040L
#define UVD_SUVD_CGC_STATUS2__MPC1_SCLK_MASK                                                                  0x00000080L
#define UVD_SUVD_CGC_STATUS2__MPC1_VCLK_MASK                                                                  0x00000100L
#define UVD_SUVD_CGC_STATUS2__SRE_AV1_ENC_DCLK_MASK                                                           0x00000200L
#define UVD_SUVD_CGC_STATUS2__CDEFE_DCLK_MASK                                                                 0x00000400L
#define UVD_SUVD_CGC_STATUS2__SIT0_DCLK_MASK                                                                  0x00000800L
#define UVD_SUVD_CGC_STATUS2__SIT1_DCLK_MASK                                                                  0x00001000L
#define UVD_SUVD_CGC_STATUS2__SIT2_DCLK_MASK                                                                  0x00002000L
#define UVD_SUVD_CGC_STATUS2__FBC_PCLK_MASK                                                                   0x10000000L
#define UVD_SUVD_CGC_STATUS2__FBC_CCLK_MASK                                                                   0x20000000L
//UVD_SUVD_INT_STATUS2
#define UVD_SUVD_INT_STATUS2__SMPA_FUNC_INT__SHIFT                                                            0x0
#define UVD_SUVD_INT_STATUS2__SMPA_ERR_INT__SHIFT                                                             0x5
#define UVD_SUVD_INT_STATUS2__SDB_AV1_FUNC_INT__SHIFT                                                         0x6
#define UVD_SUVD_INT_STATUS2__SDB_AV1_ERR_INT__SHIFT                                                          0xb
#define UVD_SUVD_INT_STATUS2__SMPA_FUNC_INT_MASK                                                              0x0000001FL
#define UVD_SUVD_INT_STATUS2__SMPA_ERR_INT_MASK                                                               0x00000020L
#define UVD_SUVD_INT_STATUS2__SDB_AV1_FUNC_INT_MASK                                                           0x000007C0L
#define UVD_SUVD_INT_STATUS2__SDB_AV1_ERR_INT_MASK                                                            0x00000800L
//UVD_SUVD_INT_EN2
#define UVD_SUVD_INT_EN2__SMPA_FUNC_INT_EN__SHIFT                                                             0x0
#define UVD_SUVD_INT_EN2__SMPA_ERR_INT_EN__SHIFT                                                              0x5
#define UVD_SUVD_INT_EN2__SDB_AV1_FUNC_INT_EN__SHIFT                                                          0x6
#define UVD_SUVD_INT_EN2__SDB_AV1_ERR_INT_EN__SHIFT                                                           0xb
#define UVD_SUVD_INT_EN2__SMPA_FUNC_INT_EN_MASK                                                               0x0000001FL
#define UVD_SUVD_INT_EN2__SMPA_ERR_INT_EN_MASK                                                                0x00000020L
#define UVD_SUVD_INT_EN2__SDB_AV1_FUNC_INT_EN_MASK                                                            0x000007C0L
#define UVD_SUVD_INT_EN2__SDB_AV1_ERR_INT_EN_MASK                                                             0x00000800L
//UVD_SUVD_INT_ACK2
#define UVD_SUVD_INT_ACK2__SMPA_FUNC_INT_ACK__SHIFT                                                           0x0
#define UVD_SUVD_INT_ACK2__SMPA_ERR_INT_ACK__SHIFT                                                            0x5
#define UVD_SUVD_INT_ACK2__SDB_AV1_FUNC_INT_ACK__SHIFT                                                        0x6
#define UVD_SUVD_INT_ACK2__SDB_AV1_ERR_INT_ACK__SHIFT                                                         0xb
#define UVD_SUVD_INT_ACK2__SMPA_FUNC_INT_ACK_MASK                                                             0x0000001FL
#define UVD_SUVD_INT_ACK2__SMPA_ERR_INT_ACK_MASK                                                              0x00000020L
#define UVD_SUVD_INT_ACK2__SDB_AV1_FUNC_INT_ACK_MASK                                                          0x000007C0L
#define UVD_SUVD_INT_ACK2__SDB_AV1_ERR_INT_ACK_MASK                                                           0x00000800L
//UVD_STATUS
#define UVD_STATUS__RBC_BUSY__SHIFT                                                                           0x0
#define UVD_STATUS__VCPU_REPORT__SHIFT                                                                        0x1
#define UVD_STATUS__FILL_0__SHIFT                                                                             0x8
#define UVD_STATUS__RBC_ACCESS_GPCOM__SHIFT                                                                   0x10
#define UVD_STATUS__FILL_1__SHIFT                                                                             0x12
#define UVD_STATUS__SYS_GPCOM_REQ__SHIFT                                                                      0x1f
#define UVD_STATUS__RBC_BUSY_MASK                                                                             0x00000001L
#define UVD_STATUS__VCPU_REPORT_MASK                                                                          0x000000FEL
#define UVD_STATUS__FILL_0_MASK                                                                               0x0000FF00L
#define UVD_STATUS__RBC_ACCESS_GPCOM_MASK                                                                     0x00010000L
#define UVD_STATUS__FILL_1_MASK                                                                               0x7FFC0000L
#define UVD_STATUS__SYS_GPCOM_REQ_MASK                                                                        0x80000000L
//UVD_ENC_PIPE_BUSY
#define UVD_ENC_PIPE_BUSY__IME_BUSY__SHIFT                                                                    0x0
#define UVD_ENC_PIPE_BUSY__SMP_BUSY__SHIFT                                                                    0x1
#define UVD_ENC_PIPE_BUSY__SIT_BUSY__SHIFT                                                                    0x2
#define UVD_ENC_PIPE_BUSY__SDB_BUSY__SHIFT                                                                    0x3
#define UVD_ENC_PIPE_BUSY__ENT_BUSY__SHIFT                                                                    0x4
#define UVD_ENC_PIPE_BUSY__ENT_HEADER_BUSY__SHIFT                                                             0x5
#define UVD_ENC_PIPE_BUSY__LCM_BUSY__SHIFT                                                                    0x6
#define UVD_ENC_PIPE_BUSY__MDM_RD_CUR_BUSY__SHIFT                                                             0x7
#define UVD_ENC_PIPE_BUSY__MDM_RD_REF_BUSY__SHIFT                                                             0x8
#define UVD_ENC_PIPE_BUSY__MDM_RD_GEN_BUSY__SHIFT                                                             0x9
#define UVD_ENC_PIPE_BUSY__MDM_WR_RECON_BUSY__SHIFT                                                           0xa
#define UVD_ENC_PIPE_BUSY__MDM_WR_GEN_BUSY__SHIFT                                                             0xb
#define UVD_ENC_PIPE_BUSY__EFC_BUSY__SHIFT                                                                    0xc
#define UVD_ENC_PIPE_BUSY__MDM_PPU_BUSY__SHIFT                                                                0xd
#define UVD_ENC_PIPE_BUSY__MIF_AUTODMA_BUSY__SHIFT                                                            0xe
#define UVD_ENC_PIPE_BUSY__CDEFE_BUSY__SHIFT                                                                  0xf
#define UVD_ENC_PIPE_BUSY__MIF_RD_CUR_BUSY__SHIFT                                                             0x10
#define UVD_ENC_PIPE_BUSY__MIF_RD_REF0_BUSY__SHIFT                                                            0x11
#define UVD_ENC_PIPE_BUSY__MIF_WR_GEN0_BUSY__SHIFT                                                            0x12
#define UVD_ENC_PIPE_BUSY__MIF_RD_GEN0_BUSY__SHIFT                                                            0x13
#define UVD_ENC_PIPE_BUSY__MIF_WR_GEN1_BUSY__SHIFT                                                            0x14
#define UVD_ENC_PIPE_BUSY__MIF_RD_GEN1_BUSY__SHIFT                                                            0x15
#define UVD_ENC_PIPE_BUSY__MIF_WR_BSP0_BUSY__SHIFT                                                            0x16
#define UVD_ENC_PIPE_BUSY__MIF_WR_BSP1_BUSY__SHIFT                                                            0x17
#define UVD_ENC_PIPE_BUSY__MIF_RD_BSD0_BUSY__SHIFT                                                            0x18
#define UVD_ENC_PIPE_BUSY__MIF_RD_BSD1_BUSY__SHIFT                                                            0x19
#define UVD_ENC_PIPE_BUSY__MIF_RD_BSD2_BUSY__SHIFT                                                            0x1a
#define UVD_ENC_PIPE_BUSY__MIF_RD_BSD3_BUSY__SHIFT                                                            0x1b
#define UVD_ENC_PIPE_BUSY__MIF_RD_BSD4_BUSY__SHIFT                                                            0x1c
#define UVD_ENC_PIPE_BUSY__MIF_WR_BSP2_BUSY__SHIFT                                                            0x1d
#define UVD_ENC_PIPE_BUSY__MIF_WR_BSP3_BUSY__SHIFT                                                            0x1e
#define UVD_ENC_PIPE_BUSY__SAOE_BUSY__SHIFT                                                                   0x1f
#define UVD_ENC_PIPE_BUSY__IME_BUSY_MASK                                                                      0x00000001L
#define UVD_ENC_PIPE_BUSY__SMP_BUSY_MASK                                                                      0x00000002L
#define UVD_ENC_PIPE_BUSY__SIT_BUSY_MASK                                                                      0x00000004L
#define UVD_ENC_PIPE_BUSY__SDB_BUSY_MASK                                                                      0x00000008L
#define UVD_ENC_PIPE_BUSY__ENT_BUSY_MASK                                                                      0x00000010L
#define UVD_ENC_PIPE_BUSY__ENT_HEADER_BUSY_MASK                                                               0x00000020L
#define UVD_ENC_PIPE_BUSY__LCM_BUSY_MASK                                                                      0x00000040L
#define UVD_ENC_PIPE_BUSY__MDM_RD_CUR_BUSY_MASK                                                               0x00000080L
#define UVD_ENC_PIPE_BUSY__MDM_RD_REF_BUSY_MASK                                                               0x00000100L
#define UVD_ENC_PIPE_BUSY__MDM_RD_GEN_BUSY_MASK                                                               0x00000200L
#define UVD_ENC_PIPE_BUSY__MDM_WR_RECON_BUSY_MASK                                                             0x00000400L
#define UVD_ENC_PIPE_BUSY__MDM_WR_GEN_BUSY_MASK                                                               0x00000800L
#define UVD_ENC_PIPE_BUSY__EFC_BUSY_MASK                                                                      0x00001000L
#define UVD_ENC_PIPE_BUSY__MDM_PPU_BUSY_MASK                                                                  0x00002000L
#define UVD_ENC_PIPE_BUSY__MIF_AUTODMA_BUSY_MASK                                                              0x00004000L
#define UVD_ENC_PIPE_BUSY__CDEFE_BUSY_MASK                                                                    0x00008000L
#define UVD_ENC_PIPE_BUSY__MIF_RD_CUR_BUSY_MASK                                                               0x00010000L
#define UVD_ENC_PIPE_BUSY__MIF_RD_REF0_BUSY_MASK                                                              0x00020000L
#define UVD_ENC_PIPE_BUSY__MIF_WR_GEN0_BUSY_MASK                                                              0x00040000L
#define UVD_ENC_PIPE_BUSY__MIF_RD_GEN0_BUSY_MASK                                                              0x00080000L
#define UVD_ENC_PIPE_BUSY__MIF_WR_GEN1_BUSY_MASK                                                              0x00100000L
#define UVD_ENC_PIPE_BUSY__MIF_RD_GEN1_BUSY_MASK                                                              0x00200000L
#define UVD_ENC_PIPE_BUSY__MIF_WR_BSP0_BUSY_MASK                                                              0x00400000L
#define UVD_ENC_PIPE_BUSY__MIF_WR_BSP1_BUSY_MASK                                                              0x00800000L
#define UVD_ENC_PIPE_BUSY__MIF_RD_BSD0_BUSY_MASK                                                              0x01000000L
#define UVD_ENC_PIPE_BUSY__MIF_RD_BSD1_BUSY_MASK                                                              0x02000000L
#define UVD_ENC_PIPE_BUSY__MIF_RD_BSD2_BUSY_MASK                                                              0x04000000L
#define UVD_ENC_PIPE_BUSY__MIF_RD_BSD3_BUSY_MASK                                                              0x08000000L
#define UVD_ENC_PIPE_BUSY__MIF_RD_BSD4_BUSY_MASK                                                              0x10000000L
#define UVD_ENC_PIPE_BUSY__MIF_WR_BSP2_BUSY_MASK                                                              0x20000000L
#define UVD_ENC_PIPE_BUSY__MIF_WR_BSP3_BUSY_MASK                                                              0x40000000L
#define UVD_ENC_PIPE_BUSY__SAOE_BUSY_MASK                                                                     0x80000000L
//UVD_FW_POWER_STATUS
#define UVD_FW_POWER_STATUS__UVDF_PWR_OFF__SHIFT                                                              0x0
#define UVD_FW_POWER_STATUS__UVDTC_PWR_OFF__SHIFT                                                             0x1
#define UVD_FW_POWER_STATUS__UVDB_PWR_OFF__SHIFT                                                              0x2
#define UVD_FW_POWER_STATUS__UVDTA_PWR_OFF__SHIFT                                                             0x3
#define UVD_FW_POWER_STATUS__UVDTD_PWR_OFF__SHIFT                                                             0x4
#define UVD_FW_POWER_STATUS__UVDTE_PWR_OFF__SHIFT                                                             0x5
#define UVD_FW_POWER_STATUS__UVDE_PWR_OFF__SHIFT                                                              0x6
#define UVD_FW_POWER_STATUS__UVDAB_PWR_OFF__SHIFT                                                             0x7
#define UVD_FW_POWER_STATUS__UVDTB_PWR_OFF__SHIFT                                                             0x8
#define UVD_FW_POWER_STATUS__UVDNA_PWR_OFF__SHIFT                                                             0x9
#define UVD_FW_POWER_STATUS__UVDF_PWR_OFF_MASK                                                                0x00000001L
#define UVD_FW_POWER_STATUS__UVDTC_PWR_OFF_MASK                                                               0x00000002L
#define UVD_FW_POWER_STATUS__UVDB_PWR_OFF_MASK                                                                0x00000004L
#define UVD_FW_POWER_STATUS__UVDTA_PWR_OFF_MASK                                                               0x00000008L
#define UVD_FW_POWER_STATUS__UVDTD_PWR_OFF_MASK                                                               0x00000010L
#define UVD_FW_POWER_STATUS__UVDTE_PWR_OFF_MASK                                                               0x00000020L
#define UVD_FW_POWER_STATUS__UVDE_PWR_OFF_MASK                                                                0x00000040L
#define UVD_FW_POWER_STATUS__UVDAB_PWR_OFF_MASK                                                               0x00000080L
#define UVD_FW_POWER_STATUS__UVDTB_PWR_OFF_MASK                                                               0x00000100L
#define UVD_FW_POWER_STATUS__UVDNA_PWR_OFF_MASK                                                               0x00000200L
//UVD_CNTL
#define UVD_CNTL__MIF_WR_LOW_THRESHOLD_BP__SHIFT                                                              0x11
#define UVD_CNTL__SUVD_EN__SHIFT                                                                              0x13
#define UVD_CNTL__CABAC_MB_ACC__SHIFT                                                                         0x1c
#define UVD_CNTL__LRBBM_SAFE_SYNC_DIS__SHIFT                                                                  0x1f
#define UVD_CNTL__MIF_WR_LOW_THRESHOLD_BP_MASK                                                                0x00020000L
#define UVD_CNTL__SUVD_EN_MASK                                                                                0x00080000L
#define UVD_CNTL__CABAC_MB_ACC_MASK                                                                           0x10000000L
#define UVD_CNTL__LRBBM_SAFE_SYNC_DIS_MASK                                                                    0x80000000L
//UVD_SOFT_RESET
#define UVD_SOFT_RESET__RBC_SOFT_RESET__SHIFT                                                                 0x0
#define UVD_SOFT_RESET__LBSI_SOFT_RESET__SHIFT                                                                0x1
#define UVD_SOFT_RESET__LMI_SOFT_RESET__SHIFT                                                                 0x2
#define UVD_SOFT_RESET__VCPU_SOFT_RESET__SHIFT                                                                0x3
#define UVD_SOFT_RESET__UDEC_SOFT_RESET__SHIFT                                                                0x4
#define UVD_SOFT_RESET__CXW_SOFT_RESET__SHIFT                                                                 0x6
#define UVD_SOFT_RESET__TAP_SOFT_RESET__SHIFT                                                                 0x7
#define UVD_SOFT_RESET__MPC_SOFT_RESET__SHIFT                                                                 0x8
#define UVD_SOFT_RESET__EFC_SOFT_RESET__SHIFT                                                                 0x9
#define UVD_SOFT_RESET__IH_SOFT_RESET__SHIFT                                                                  0xa
#define UVD_SOFT_RESET__MPRD_SOFT_RESET__SHIFT                                                                0xb
#define UVD_SOFT_RESET__IDCT_SOFT_RESET__SHIFT                                                                0xc
#define UVD_SOFT_RESET__LMI_UMC_SOFT_RESET__SHIFT                                                             0xd
#define UVD_SOFT_RESET__SPH_SOFT_RESET__SHIFT                                                                 0xe
#define UVD_SOFT_RESET__MIF_SOFT_RESET__SHIFT                                                                 0xf
#define UVD_SOFT_RESET__LCM_SOFT_RESET__SHIFT                                                                 0x10
#define UVD_SOFT_RESET__SUVD_SOFT_RESET__SHIFT                                                                0x11
#define UVD_SOFT_RESET__LBSI_VCLK_RESET_STATUS__SHIFT                                                         0x12
#define UVD_SOFT_RESET__VCPU_VCLK_RESET_STATUS__SHIFT                                                         0x13
#define UVD_SOFT_RESET__UDEC_VCLK_RESET_STATUS__SHIFT                                                         0x14
#define UVD_SOFT_RESET__UDEC_DCLK_RESET_STATUS__SHIFT                                                         0x15
#define UVD_SOFT_RESET__MPC_DCLK_RESET_STATUS__SHIFT                                                          0x16
#define UVD_SOFT_RESET__MPRD_VCLK_RESET_STATUS__SHIFT                                                         0x17
#define UVD_SOFT_RESET__MPRD_DCLK_RESET_STATUS__SHIFT                                                         0x18
#define UVD_SOFT_RESET__IDCT_VCLK_RESET_STATUS__SHIFT                                                         0x19
#define UVD_SOFT_RESET__MIF_DCLK_RESET_STATUS__SHIFT                                                          0x1a
#define UVD_SOFT_RESET__LCM_DCLK_RESET_STATUS__SHIFT                                                          0x1b
#define UVD_SOFT_RESET__SUVD_VCLK_RESET_STATUS__SHIFT                                                         0x1c
#define UVD_SOFT_RESET__SUVD_DCLK_RESET_STATUS__SHIFT                                                         0x1d
#define UVD_SOFT_RESET__RE_DCLK_RESET_STATUS__SHIFT                                                           0x1e
#define UVD_SOFT_RESET__SRE_DCLK_RESET_STATUS__SHIFT                                                          0x1f
#define UVD_SOFT_RESET__RBC_SOFT_RESET_MASK                                                                   0x00000001L
#define UVD_SOFT_RESET__LBSI_SOFT_RESET_MASK                                                                  0x00000002L
#define UVD_SOFT_RESET__LMI_SOFT_RESET_MASK                                                                   0x00000004L
#define UVD_SOFT_RESET__VCPU_SOFT_RESET_MASK                                                                  0x00000008L
#define UVD_SOFT_RESET__UDEC_SOFT_RESET_MASK                                                                  0x00000010L
#define UVD_SOFT_RESET__CXW_SOFT_RESET_MASK                                                                   0x00000040L
#define UVD_SOFT_RESET__TAP_SOFT_RESET_MASK                                                                   0x00000080L
#define UVD_SOFT_RESET__MPC_SOFT_RESET_MASK                                                                   0x00000100L
#define UVD_SOFT_RESET__EFC_SOFT_RESET_MASK                                                                   0x00000200L
#define UVD_SOFT_RESET__IH_SOFT_RESET_MASK                                                                    0x00000400L
#define UVD_SOFT_RESET__MPRD_SOFT_RESET_MASK                                                                  0x00000800L
#define UVD_SOFT_RESET__IDCT_SOFT_RESET_MASK                                                                  0x00001000L
#define UVD_SOFT_RESET__LMI_UMC_SOFT_RESET_MASK                                                               0x00002000L
#define UVD_SOFT_RESET__SPH_SOFT_RESET_MASK                                                                   0x00004000L
#define UVD_SOFT_RESET__MIF_SOFT_RESET_MASK                                                                   0x00008000L
#define UVD_SOFT_RESET__LCM_SOFT_RESET_MASK                                                                   0x00010000L
#define UVD_SOFT_RESET__SUVD_SOFT_RESET_MASK                                                                  0x00020000L
#define UVD_SOFT_RESET__LBSI_VCLK_RESET_STATUS_MASK                                                           0x00040000L
#define UVD_SOFT_RESET__VCPU_VCLK_RESET_STATUS_MASK                                                           0x00080000L
#define UVD_SOFT_RESET__UDEC_VCLK_RESET_STATUS_MASK                                                           0x00100000L
#define UVD_SOFT_RESET__UDEC_DCLK_RESET_STATUS_MASK                                                           0x00200000L
#define UVD_SOFT_RESET__MPC_DCLK_RESET_STATUS_MASK                                                            0x00400000L
#define UVD_SOFT_RESET__MPRD_VCLK_RESET_STATUS_MASK                                                           0x00800000L
#define UVD_SOFT_RESET__MPRD_DCLK_RESET_STATUS_MASK                                                           0x01000000L
#define UVD_SOFT_RESET__IDCT_VCLK_RESET_STATUS_MASK                                                           0x02000000L
#define UVD_SOFT_RESET__MIF_DCLK_RESET_STATUS_MASK                                                            0x04000000L
#define UVD_SOFT_RESET__LCM_DCLK_RESET_STATUS_MASK                                                            0x08000000L
#define UVD_SOFT_RESET__SUVD_VCLK_RESET_STATUS_MASK                                                           0x10000000L
#define UVD_SOFT_RESET__SUVD_DCLK_RESET_STATUS_MASK                                                           0x20000000L
#define UVD_SOFT_RESET__RE_DCLK_RESET_STATUS_MASK                                                             0x40000000L
#define UVD_SOFT_RESET__SRE_DCLK_RESET_STATUS_MASK                                                            0x80000000L
//UVD_SOFT_RESET2
#define UVD_SOFT_RESET2__ATOMIC_SOFT_RESET__SHIFT                                                             0x0
#define UVD_SOFT_RESET2__PPU_SOFT_RESET__SHIFT                                                                0x1
#define UVD_SOFT_RESET2__MMSCH_VCLK_RESET_STATUS__SHIFT                                                       0x10
#define UVD_SOFT_RESET2__MMSCH_SCLK_RESET_STATUS__SHIFT                                                       0x11
#define UVD_SOFT_RESET2__ATOMIC_SOFT_RESET_MASK                                                               0x00000001L
#define UVD_SOFT_RESET2__PPU_SOFT_RESET_MASK                                                                  0x00000002L
#define UVD_SOFT_RESET2__MMSCH_VCLK_RESET_STATUS_MASK                                                         0x00010000L
#define UVD_SOFT_RESET2__MMSCH_SCLK_RESET_STATUS_MASK                                                         0x00020000L
//UVD_MMSCH_SOFT_RESET
#define UVD_MMSCH_SOFT_RESET__MMSCH_RESET__SHIFT                                                              0x0
#define UVD_MMSCH_SOFT_RESET__TAP_SOFT_RESET__SHIFT                                                           0x1
#define UVD_MMSCH_SOFT_RESET__MMSCH_LOCK__SHIFT                                                               0x1f
#define UVD_MMSCH_SOFT_RESET__MMSCH_RESET_MASK                                                                0x00000001L
#define UVD_MMSCH_SOFT_RESET__TAP_SOFT_RESET_MASK                                                             0x00000002L
#define UVD_MMSCH_SOFT_RESET__MMSCH_LOCK_MASK                                                                 0x80000000L
//UVD_WIG_CTRL
#define UVD_WIG_CTRL__AVM_SOFT_RESET__SHIFT                                                                   0x0
#define UVD_WIG_CTRL__ACAP_SOFT_RESET__SHIFT                                                                  0x1
#define UVD_WIG_CTRL__WIG_SOFT_RESET__SHIFT                                                                   0x2
#define UVD_WIG_CTRL__WIG_REGCLK_FORCE_ON__SHIFT                                                              0x3
#define UVD_WIG_CTRL__AVM_REGCLK_FORCE_ON__SHIFT                                                              0x4
#define UVD_WIG_CTRL__AVM_SOFT_RESET_MASK                                                                     0x00000001L
#define UVD_WIG_CTRL__ACAP_SOFT_RESET_MASK                                                                    0x00000002L
#define UVD_WIG_CTRL__WIG_SOFT_RESET_MASK                                                                     0x00000004L
#define UVD_WIG_CTRL__WIG_REGCLK_FORCE_ON_MASK                                                                0x00000008L
#define UVD_WIG_CTRL__AVM_REGCLK_FORCE_ON_MASK                                                                0x00000010L
//UVD_CGC_STATUS
#define UVD_CGC_STATUS__SYS_SCLK__SHIFT                                                                       0x0
#define UVD_CGC_STATUS__SYS_DCLK__SHIFT                                                                       0x1
#define UVD_CGC_STATUS__SYS_VCLK__SHIFT                                                                       0x2
#define UVD_CGC_STATUS__UDEC_SCLK__SHIFT                                                                      0x3
#define UVD_CGC_STATUS__UDEC_DCLK__SHIFT                                                                      0x4
#define UVD_CGC_STATUS__UDEC_VCLK__SHIFT                                                                      0x5
#define UVD_CGC_STATUS__MPEG2_SCLK__SHIFT                                                                     0x6
#define UVD_CGC_STATUS__MPEG2_DCLK__SHIFT                                                                     0x7
#define UVD_CGC_STATUS__MPEG2_VCLK__SHIFT                                                                     0x8
#define UVD_CGC_STATUS__REGS_SCLK__SHIFT                                                                      0x9
#define UVD_CGC_STATUS__REGS_VCLK__SHIFT                                                                      0xa
#define UVD_CGC_STATUS__RBC_SCLK__SHIFT                                                                       0xb
#define UVD_CGC_STATUS__LMI_MC_SCLK__SHIFT                                                                    0xc
#define UVD_CGC_STATUS__LMI_UMC_SCLK__SHIFT                                                                   0xd
#define UVD_CGC_STATUS__IDCT_SCLK__SHIFT                                                                      0xe
#define UVD_CGC_STATUS__IDCT_VCLK__SHIFT                                                                      0xf
#define UVD_CGC_STATUS__MPRD_SCLK__SHIFT                                                                      0x10
#define UVD_CGC_STATUS__MPRD_DCLK__SHIFT                                                                      0x11
#define UVD_CGC_STATUS__MPRD_VCLK__SHIFT                                                                      0x12
#define UVD_CGC_STATUS__MPC_SCLK__SHIFT                                                                       0x13
#define UVD_CGC_STATUS__MPC_DCLK__SHIFT                                                                       0x14
#define UVD_CGC_STATUS__LBSI_SCLK__SHIFT                                                                      0x15
#define UVD_CGC_STATUS__LBSI_VCLK__SHIFT                                                                      0x16
#define UVD_CGC_STATUS__LRBBM_SCLK__SHIFT                                                                     0x17
#define UVD_CGC_STATUS__WCB_SCLK__SHIFT                                                                       0x18
#define UVD_CGC_STATUS__VCPU_SCLK__SHIFT                                                                      0x19
#define UVD_CGC_STATUS__VCPU_VCLK__SHIFT                                                                      0x1a
#define UVD_CGC_STATUS__MMSCH_SCLK__SHIFT                                                                     0x1b
#define UVD_CGC_STATUS__MMSCH_VCLK__SHIFT                                                                     0x1c
#define UVD_CGC_STATUS__ALL_ENC_ACTIVE__SHIFT                                                                 0x1d
#define UVD_CGC_STATUS__LRBBM_DCLK__SHIFT                                                                     0x1e
#define UVD_CGC_STATUS__ALL_DEC_ACTIVE__SHIFT                                                                 0x1f
#define UVD_CGC_STATUS__SYS_SCLK_MASK                                                                         0x00000001L
#define UVD_CGC_STATUS__SYS_DCLK_MASK                                                                         0x00000002L
#define UVD_CGC_STATUS__SYS_VCLK_MASK                                                                         0x00000004L
#define UVD_CGC_STATUS__UDEC_SCLK_MASK                                                                        0x00000008L
#define UVD_CGC_STATUS__UDEC_DCLK_MASK                                                                        0x00000010L
#define UVD_CGC_STATUS__UDEC_VCLK_MASK                                                                        0x00000020L
#define UVD_CGC_STATUS__MPEG2_SCLK_MASK                                                                       0x00000040L
#define UVD_CGC_STATUS__MPEG2_DCLK_MASK                                                                       0x00000080L
#define UVD_CGC_STATUS__MPEG2_VCLK_MASK                                                                       0x00000100L
#define UVD_CGC_STATUS__REGS_SCLK_MASK                                                                        0x00000200L
#define UVD_CGC_STATUS__REGS_VCLK_MASK                                                                        0x00000400L
#define UVD_CGC_STATUS__RBC_SCLK_MASK                                                                         0x00000800L
#define UVD_CGC_STATUS__LMI_MC_SCLK_MASK                                                                      0x00001000L
#define UVD_CGC_STATUS__LMI_UMC_SCLK_MASK                                                                     0x00002000L
#define UVD_CGC_STATUS__IDCT_SCLK_MASK                                                                        0x00004000L
#define UVD_CGC_STATUS__IDCT_VCLK_MASK                                                                        0x00008000L
#define UVD_CGC_STATUS__MPRD_SCLK_MASK                                                                        0x00010000L
#define UVD_CGC_STATUS__MPRD_DCLK_MASK                                                                        0x00020000L
#define UVD_CGC_STATUS__MPRD_VCLK_MASK                                                                        0x00040000L
#define UVD_CGC_STATUS__MPC_SCLK_MASK                                                                         0x00080000L
#define UVD_CGC_STATUS__MPC_DCLK_MASK                                                                         0x00100000L
#define UVD_CGC_STATUS__LBSI_SCLK_MASK                                                                        0x00200000L
#define UVD_CGC_STATUS__LBSI_VCLK_MASK                                                                        0x00400000L
#define UVD_CGC_STATUS__LRBBM_SCLK_MASK                                                                       0x00800000L
#define UVD_CGC_STATUS__WCB_SCLK_MASK                                                                         0x01000000L
#define UVD_CGC_STATUS__VCPU_SCLK_MASK                                                                        0x02000000L
#define UVD_CGC_STATUS__VCPU_VCLK_MASK                                                                        0x04000000L
#define UVD_CGC_STATUS__MMSCH_SCLK_MASK                                                                       0x08000000L
#define UVD_CGC_STATUS__MMSCH_VCLK_MASK                                                                       0x10000000L
#define UVD_CGC_STATUS__ALL_ENC_ACTIVE_MASK                                                                   0x20000000L
#define UVD_CGC_STATUS__LRBBM_DCLK_MASK                                                                       0x40000000L
#define UVD_CGC_STATUS__ALL_DEC_ACTIVE_MASK                                                                   0x80000000L
//UVD_CGC_UDEC_STATUS
#define UVD_CGC_UDEC_STATUS__RE_SCLK__SHIFT                                                                   0x0
#define UVD_CGC_UDEC_STATUS__RE_DCLK__SHIFT                                                                   0x1
#define UVD_CGC_UDEC_STATUS__RE_VCLK__SHIFT                                                                   0x2
#define UVD_CGC_UDEC_STATUS__CM_SCLK__SHIFT                                                                   0x3
#define UVD_CGC_UDEC_STATUS__CM_DCLK__SHIFT                                                                   0x4
#define UVD_CGC_UDEC_STATUS__CM_VCLK__SHIFT                                                                   0x5
#define UVD_CGC_UDEC_STATUS__IT_SCLK__SHIFT                                                                   0x6
#define UVD_CGC_UDEC_STATUS__IT_DCLK__SHIFT                                                                   0x7
#define UVD_CGC_UDEC_STATUS__IT_VCLK__SHIFT                                                                   0x8
#define UVD_CGC_UDEC_STATUS__DB_SCLK__SHIFT                                                                   0x9
#define UVD_CGC_UDEC_STATUS__DB_DCLK__SHIFT                                                                   0xa
#define UVD_CGC_UDEC_STATUS__DB_VCLK__SHIFT                                                                   0xb
#define UVD_CGC_UDEC_STATUS__MP_SCLK__SHIFT                                                                   0xc
#define UVD_CGC_UDEC_STATUS__MP_DCLK__SHIFT                                                                   0xd
#define UVD_CGC_UDEC_STATUS__MP_VCLK__SHIFT                                                                   0xe
#define UVD_CGC_UDEC_STATUS__RE_SCLK_MASK                                                                     0x00000001L
#define UVD_CGC_UDEC_STATUS__RE_DCLK_MASK                                                                     0x00000002L
#define UVD_CGC_UDEC_STATUS__RE_VCLK_MASK                                                                     0x00000004L
#define UVD_CGC_UDEC_STATUS__CM_SCLK_MASK                                                                     0x00000008L
#define UVD_CGC_UDEC_STATUS__CM_DCLK_MASK                                                                     0x00000010L
#define UVD_CGC_UDEC_STATUS__CM_VCLK_MASK                                                                     0x00000020L
#define UVD_CGC_UDEC_STATUS__IT_SCLK_MASK                                                                     0x00000040L
#define UVD_CGC_UDEC_STATUS__IT_DCLK_MASK                                                                     0x00000080L
#define UVD_CGC_UDEC_STATUS__IT_VCLK_MASK                                                                     0x00000100L
#define UVD_CGC_UDEC_STATUS__DB_SCLK_MASK                                                                     0x00000200L
#define UVD_CGC_UDEC_STATUS__DB_DCLK_MASK                                                                     0x00000400L
#define UVD_CGC_UDEC_STATUS__DB_VCLK_MASK                                                                     0x00000800L
#define UVD_CGC_UDEC_STATUS__MP_SCLK_MASK                                                                     0x00001000L
#define UVD_CGC_UDEC_STATUS__MP_DCLK_MASK                                                                     0x00002000L
#define UVD_CGC_UDEC_STATUS__MP_VCLK_MASK                                                                     0x00004000L
//UVD_SUVD_CGC_STATUS
#define UVD_SUVD_CGC_STATUS__SRE_VCLK__SHIFT                                                                  0x0
#define UVD_SUVD_CGC_STATUS__SRE_DCLK__SHIFT                                                                  0x1
#define UVD_SUVD_CGC_STATUS__SIT_DCLK__SHIFT                                                                  0x2
#define UVD_SUVD_CGC_STATUS__SMP_DCLK__SHIFT                                                                  0x3
#define UVD_SUVD_CGC_STATUS__SCM_DCLK__SHIFT                                                                  0x4
#define UVD_SUVD_CGC_STATUS__SDB_DCLK__SHIFT                                                                  0x5
#define UVD_SUVD_CGC_STATUS__SRE_H264_VCLK__SHIFT                                                             0x6
#define UVD_SUVD_CGC_STATUS__SRE_HEVC_VCLK__SHIFT                                                             0x7
#define UVD_SUVD_CGC_STATUS__SIT_H264_DCLK__SHIFT                                                             0x8
#define UVD_SUVD_CGC_STATUS__SIT_HEVC_DCLK__SHIFT                                                             0x9
#define UVD_SUVD_CGC_STATUS__SCM_H264_DCLK__SHIFT                                                             0xa
#define UVD_SUVD_CGC_STATUS__SCM_HEVC_DCLK__SHIFT                                                             0xb
#define UVD_SUVD_CGC_STATUS__SDB_H264_DCLK__SHIFT                                                             0xc
#define UVD_SUVD_CGC_STATUS__SDB_HEVC_DCLK__SHIFT                                                             0xd
#define UVD_SUVD_CGC_STATUS__SCLR_DCLK__SHIFT                                                                 0xe
#define UVD_SUVD_CGC_STATUS__UVD_SC__SHIFT                                                                    0xf
#define UVD_SUVD_CGC_STATUS__ENT_DCLK__SHIFT                                                                  0x10
#define UVD_SUVD_CGC_STATUS__IME_DCLK__SHIFT                                                                  0x11
#define UVD_SUVD_CGC_STATUS__SIT_HEVC_DEC_DCLK__SHIFT                                                         0x12
#define UVD_SUVD_CGC_STATUS__SIT_HEVC_ENC_DCLK__SHIFT                                                         0x13
#define UVD_SUVD_CGC_STATUS__SITE_DCLK__SHIFT                                                                 0x14
#define UVD_SUVD_CGC_STATUS__SITE_HEVC_DCLK__SHIFT                                                            0x15
#define UVD_SUVD_CGC_STATUS__SITE_HEVC_ENC_DCLK__SHIFT                                                        0x16
#define UVD_SUVD_CGC_STATUS__SRE_VP9_VCLK__SHIFT                                                              0x17
#define UVD_SUVD_CGC_STATUS__SCM_VP9_VCLK__SHIFT                                                              0x18
#define UVD_SUVD_CGC_STATUS__SIT_VP9_DEC_DCLK__SHIFT                                                          0x19
#define UVD_SUVD_CGC_STATUS__SDB_VP9_DCLK__SHIFT                                                              0x1a
#define UVD_SUVD_CGC_STATUS__IME_HEVC_DCLK__SHIFT                                                             0x1b
#define UVD_SUVD_CGC_STATUS__EFC_DCLK__SHIFT                                                                  0x1c
#define UVD_SUVD_CGC_STATUS__SAOE_DCLK__SHIFT                                                                 0x1d
#define UVD_SUVD_CGC_STATUS__SRE_AV1_VCLK__SHIFT                                                              0x1e
#define UVD_SUVD_CGC_STATUS__SCM_AV1_DCLK__SHIFT                                                              0x1f
#define UVD_SUVD_CGC_STATUS__SRE_VCLK_MASK                                                                    0x00000001L
#define UVD_SUVD_CGC_STATUS__SRE_DCLK_MASK                                                                    0x00000002L
#define UVD_SUVD_CGC_STATUS__SIT_DCLK_MASK                                                                    0x00000004L
#define UVD_SUVD_CGC_STATUS__SMP_DCLK_MASK                                                                    0x00000008L
#define UVD_SUVD_CGC_STATUS__SCM_DCLK_MASK                                                                    0x00000010L
#define UVD_SUVD_CGC_STATUS__SDB_DCLK_MASK                                                                    0x00000020L
#define UVD_SUVD_CGC_STATUS__SRE_H264_VCLK_MASK                                                               0x00000040L
#define UVD_SUVD_CGC_STATUS__SRE_HEVC_VCLK_MASK                                                               0x00000080L
#define UVD_SUVD_CGC_STATUS__SIT_H264_DCLK_MASK                                                               0x00000100L
#define UVD_SUVD_CGC_STATUS__SIT_HEVC_DCLK_MASK                                                               0x00000200L
#define UVD_SUVD_CGC_STATUS__SCM_H264_DCLK_MASK                                                               0x00000400L
#define UVD_SUVD_CGC_STATUS__SCM_HEVC_DCLK_MASK                                                               0x00000800L
#define UVD_SUVD_CGC_STATUS__SDB_H264_DCLK_MASK                                                               0x00001000L
#define UVD_SUVD_CGC_STATUS__SDB_HEVC_DCLK_MASK                                                               0x00002000L
#define UVD_SUVD_CGC_STATUS__SCLR_DCLK_MASK                                                                   0x00004000L
#define UVD_SUVD_CGC_STATUS__UVD_SC_MASK                                                                      0x00008000L
#define UVD_SUVD_CGC_STATUS__ENT_DCLK_MASK                                                                    0x00010000L
#define UVD_SUVD_CGC_STATUS__IME_DCLK_MASK                                                                    0x00020000L
#define UVD_SUVD_CGC_STATUS__SIT_HEVC_DEC_DCLK_MASK                                                           0x00040000L
#define UVD_SUVD_CGC_STATUS__SIT_HEVC_ENC_DCLK_MASK                                                           0x00080000L
#define UVD_SUVD_CGC_STATUS__SITE_DCLK_MASK                                                                   0x00100000L
#define UVD_SUVD_CGC_STATUS__SITE_HEVC_DCLK_MASK                                                              0x00200000L
#define UVD_SUVD_CGC_STATUS__SITE_HEVC_ENC_DCLK_MASK                                                          0x00400000L
#define UVD_SUVD_CGC_STATUS__SRE_VP9_VCLK_MASK                                                                0x00800000L
#define UVD_SUVD_CGC_STATUS__SCM_VP9_VCLK_MASK                                                                0x01000000L
#define UVD_SUVD_CGC_STATUS__SIT_VP9_DEC_DCLK_MASK                                                            0x02000000L
#define UVD_SUVD_CGC_STATUS__SDB_VP9_DCLK_MASK                                                                0x04000000L
#define UVD_SUVD_CGC_STATUS__IME_HEVC_DCLK_MASK                                                               0x08000000L
#define UVD_SUVD_CGC_STATUS__EFC_DCLK_MASK                                                                    0x10000000L
#define UVD_SUVD_CGC_STATUS__SAOE_DCLK_MASK                                                                   0x20000000L
#define UVD_SUVD_CGC_STATUS__SRE_AV1_VCLK_MASK                                                                0x40000000L
#define UVD_SUVD_CGC_STATUS__SCM_AV1_DCLK_MASK                                                                0x80000000L
//UVD_GPCOM_VCPU_CMD
#define UVD_GPCOM_VCPU_CMD__CMD_SEND__SHIFT                                                                   0x0
#define UVD_GPCOM_VCPU_CMD__CMD__SHIFT                                                                        0x1
#define UVD_GPCOM_VCPU_CMD__CMD_SOURCE__SHIFT                                                                 0x1f
#define UVD_GPCOM_VCPU_CMD__CMD_SEND_MASK                                                                     0x00000001L
#define UVD_GPCOM_VCPU_CMD__CMD_MASK                                                                          0x7FFFFFFEL
#define UVD_GPCOM_VCPU_CMD__CMD_SOURCE_MASK                                                                   0x80000000L


// addressBlock: uvd0_ecpudec
//UVD_VCPU_CACHE_OFFSET0
#define UVD_VCPU_CACHE_OFFSET0__CACHE_OFFSET0__SHIFT                                                          0x0
#define UVD_VCPU_CACHE_OFFSET0__CACHE_OFFSET0_MASK                                                            0x001FFFFFL
//UVD_VCPU_CACHE_SIZE0
#define UVD_VCPU_CACHE_SIZE0__CACHE_SIZE0__SHIFT                                                              0x0
#define UVD_VCPU_CACHE_SIZE0__CACHE_SIZE0_MASK                                                                0x001FFFFFL
//UVD_VCPU_CACHE_OFFSET1
#define UVD_VCPU_CACHE_OFFSET1__CACHE_OFFSET1__SHIFT                                                          0x0
#define UVD_VCPU_CACHE_OFFSET1__CACHE_OFFSET1_MASK                                                            0x001FFFFFL
//UVD_VCPU_CACHE_SIZE1
#define UVD_VCPU_CACHE_SIZE1__CACHE_SIZE1__SHIFT                                                              0x0
#define UVD_VCPU_CACHE_SIZE1__CACHE_SIZE1_MASK                                                                0x001FFFFFL
//UVD_VCPU_CACHE_OFFSET2
#define UVD_VCPU_CACHE_OFFSET2__CACHE_OFFSET2__SHIFT                                                          0x0
#define UVD_VCPU_CACHE_OFFSET2__CACHE_OFFSET2_MASK                                                            0x001FFFFFL
//UVD_VCPU_CACHE_SIZE2
#define UVD_VCPU_CACHE_SIZE2__CACHE_SIZE2__SHIFT                                                              0x0
#define UVD_VCPU_CACHE_SIZE2__CACHE_SIZE2_MASK                                                                0x001FFFFFL
//UVD_VCPU_CACHE_OFFSET3
#define UVD_VCPU_CACHE_OFFSET3__CACHE_OFFSET3__SHIFT                                                          0x0
#define UVD_VCPU_CACHE_OFFSET3__CACHE_OFFSET3_MASK                                                            0x001FFFFFL
//UVD_VCPU_CACHE_SIZE3
#define UVD_VCPU_CACHE_SIZE3__CACHE_SIZE3__SHIFT                                                              0x0
#define UVD_VCPU_CACHE_SIZE3__CACHE_SIZE3_MASK                                                                0x001FFFFFL
//UVD_VCPU_CACHE_OFFSET4
#define UVD_VCPU_CACHE_OFFSET4__CACHE_OFFSET4__SHIFT                                                          0x0
#define UVD_VCPU_CACHE_OFFSET4__CACHE_OFFSET4_MASK                                                            0x001FFFFFL
//UVD_VCPU_CACHE_SIZE4
#define UVD_VCPU_CACHE_SIZE4__CACHE_SIZE4__SHIFT                                                              0x0
#define UVD_VCPU_CACHE_SIZE4__CACHE_SIZE4_MASK                                                                0x001FFFFFL
//UVD_VCPU_CACHE_OFFSET5
#define UVD_VCPU_CACHE_OFFSET5__CACHE_OFFSET5__SHIFT                                                          0x0
#define UVD_VCPU_CACHE_OFFSET5__CACHE_OFFSET5_MASK                                                            0x001FFFFFL
//UVD_VCPU_CACHE_SIZE5
#define UVD_VCPU_CACHE_SIZE5__CACHE_SIZE5__SHIFT                                                              0x0
#define UVD_VCPU_CACHE_SIZE5__CACHE_SIZE5_MASK                                                                0x001FFFFFL
//UVD_VCPU_CACHE_OFFSET6
#define UVD_VCPU_CACHE_OFFSET6__CACHE_OFFSET6__SHIFT                                                          0x0
#define UVD_VCPU_CACHE_OFFSET6__CACHE_OFFSET6_MASK                                                            0x001FFFFFL
//UVD_VCPU_CACHE_SIZE6
#define UVD_VCPU_CACHE_SIZE6__CACHE_SIZE6__SHIFT                                                              0x0
#define UVD_VCPU_CACHE_SIZE6__CACHE_SIZE6_MASK                                                                0x001FFFFFL
//UVD_VCPU_CACHE_OFFSET7
#define UVD_VCPU_CACHE_OFFSET7__CACHE_OFFSET7__SHIFT                                                          0x0
#define UVD_VCPU_CACHE_OFFSET7__CACHE_OFFSET7_MASK                                                            0x001FFFFFL
//UVD_VCPU_CACHE_SIZE7
#define UVD_VCPU_CACHE_SIZE7__CACHE_SIZE7__SHIFT                                                              0x0
#define UVD_VCPU_CACHE_SIZE7__CACHE_SIZE7_MASK                                                                0x001FFFFFL
//UVD_VCPU_CACHE_OFFSET8
#define UVD_VCPU_CACHE_OFFSET8__CACHE_OFFSET8__SHIFT                                                          0x0
#define UVD_VCPU_CACHE_OFFSET8__CACHE_OFFSET8_MASK                                                            0x001FFFFFL
//UVD_VCPU_CACHE_SIZE8
#define UVD_VCPU_CACHE_SIZE8__CACHE_SIZE8__SHIFT                                                              0x0
#define UVD_VCPU_CACHE_SIZE8__CACHE_SIZE8_MASK                                                                0x001FFFFFL
//UVD_VCPU_NONCACHE_OFFSET0
#define UVD_VCPU_NONCACHE_OFFSET0__NONCACHE_OFFSET0__SHIFT                                                    0x0
#define UVD_VCPU_NONCACHE_OFFSET0__NONCACHE_OFFSET0_MASK                                                      0x01FFFFFFL
//UVD_VCPU_NONCACHE_SIZE0
#define UVD_VCPU_NONCACHE_SIZE0__NONCACHE_SIZE0__SHIFT                                                        0x0
#define UVD_VCPU_NONCACHE_SIZE0__NONCACHE_SIZE0_MASK                                                          0x001FFFFFL
//UVD_VCPU_NONCACHE_OFFSET1
#define UVD_VCPU_NONCACHE_OFFSET1__NONCACHE_OFFSET1__SHIFT                                                    0x0
#define UVD_VCPU_NONCACHE_OFFSET1__NONCACHE_OFFSET1_MASK                                                      0x01FFFFFFL
//UVD_VCPU_NONCACHE_SIZE1
#define UVD_VCPU_NONCACHE_SIZE1__NONCACHE_SIZE1__SHIFT                                                        0x0
#define UVD_VCPU_NONCACHE_SIZE1__NONCACHE_SIZE1_MASK                                                          0x001FFFFFL
//UVD_VCPU_CNTL
#define UVD_VCPU_CNTL__IRQ_ERR__SHIFT                                                                         0x0
#define UVD_VCPU_CNTL__PMB_ED_ENABLE__SHIFT                                                                   0x5
#define UVD_VCPU_CNTL__PMB_SOFT_RESET__SHIFT                                                                  0x6
#define UVD_VCPU_CNTL__RBBM_SOFT_RESET__SHIFT                                                                 0x7
#define UVD_VCPU_CNTL__ABORT_REQ__SHIFT                                                                       0x8
#define UVD_VCPU_CNTL__CLK_EN__SHIFT                                                                          0x9
#define UVD_VCPU_CNTL__TRCE_EN__SHIFT                                                                         0xa
#define UVD_VCPU_CNTL__TRCE_MUX__SHIFT                                                                        0xb
#define UVD_VCPU_CNTL__JTAG_EN__SHIFT                                                                         0x10
#define UVD_VCPU_CNTL__TIMEOUT_DIS__SHIFT                                                                     0x12
#define UVD_VCPU_CNTL__PRB_TIMEOUT_VAL__SHIFT                                                                 0x14
#define UVD_VCPU_CNTL__BLK_RST__SHIFT                                                                         0x1c
#define UVD_VCPU_CNTL__RUNSTALL__SHIFT                                                                        0x1d
#define UVD_VCPU_CNTL__SRE_CMDIF_DRST__SHIFT                                                                  0x1e
#define UVD_VCPU_CNTL__SRE_CMDIF_VRST__SHIFT                                                                  0x1f
#define UVD_VCPU_CNTL__IRQ_ERR_MASK                                                                           0x0000000FL
#define UVD_VCPU_CNTL__PMB_ED_ENABLE_MASK                                                                     0x00000020L
#define UVD_VCPU_CNTL__PMB_SOFT_RESET_MASK                                                                    0x00000040L
#define UVD_VCPU_CNTL__RBBM_SOFT_RESET_MASK                                                                   0x00000080L
#define UVD_VCPU_CNTL__ABORT_REQ_MASK                                                                         0x00000100L
#define UVD_VCPU_CNTL__CLK_EN_MASK                                                                            0x00000200L
#define UVD_VCPU_CNTL__TRCE_EN_MASK                                                                           0x00000400L
#define UVD_VCPU_CNTL__TRCE_MUX_MASK                                                                          0x00001800L
#define UVD_VCPU_CNTL__JTAG_EN_MASK                                                                           0x00010000L
#define UVD_VCPU_CNTL__TIMEOUT_DIS_MASK                                                                       0x00040000L
#define UVD_VCPU_CNTL__PRB_TIMEOUT_VAL_MASK                                                                   0x0FF00000L
#define UVD_VCPU_CNTL__BLK_RST_MASK                                                                           0x10000000L
#define UVD_VCPU_CNTL__RUNSTALL_MASK                                                                          0x20000000L
#define UVD_VCPU_CNTL__SRE_CMDIF_DRST_MASK                                                                    0x40000000L
#define UVD_VCPU_CNTL__SRE_CMDIF_VRST_MASK                                                                    0x80000000L
//UVD_VCPU_PRID
#define UVD_VCPU_PRID__PRID__SHIFT                                                                            0x0
#define UVD_VCPU_PRID__PRID_MASK                                                                              0x0000FFFFL
//UVD_VCPU_TRCE
#define UVD_VCPU_TRCE__PC__SHIFT                                                                              0x0
#define UVD_VCPU_TRCE__PC_MASK                                                                                0x0FFFFFFFL
//UVD_VCPU_TRCE_RD
#define UVD_VCPU_TRCE_RD__DATA__SHIFT                                                                         0x0
#define UVD_VCPU_TRCE_RD__DATA_MASK                                                                           0xFFFFFFFFL
//UVD_VCPU_IND_INDEX
#define UVD_VCPU_IND_INDEX__INDEX__SHIFT                                                                      0x0
#define UVD_VCPU_IND_INDEX__INDEX_MASK                                                                        0x000001FFL
//UVD_VCPU_IND_DATA
#define UVD_VCPU_IND_DATA__DATA__SHIFT                                                                        0x0
#define UVD_VCPU_IND_DATA__DATA_MASK                                                                          0xFFFFFFFFL


// addressBlock: uvd0_uvd_mpcdec
//UVD_MP_SWAP_CNTL
#define UVD_MP_SWAP_CNTL__MP_REF0_MC_SWAP__SHIFT                                                              0x0
#define UVD_MP_SWAP_CNTL__MP_REF1_MC_SWAP__SHIFT                                                              0x2
#define UVD_MP_SWAP_CNTL__MP_REF2_MC_SWAP__SHIFT                                                              0x4
#define UVD_MP_SWAP_CNTL__MP_REF3_MC_SWAP__SHIFT                                                              0x6
#define UVD_MP_SWAP_CNTL__MP_REF4_MC_SWAP__SHIFT                                                              0x8
#define UVD_MP_SWAP_CNTL__MP_REF5_MC_SWAP__SHIFT                                                              0xa
#define UVD_MP_SWAP_CNTL__MP_REF6_MC_SWAP__SHIFT                                                              0xc
#define UVD_MP_SWAP_CNTL__MP_REF7_MC_SWAP__SHIFT                                                              0xe
#define UVD_MP_SWAP_CNTL__MP_REF8_MC_SWAP__SHIFT                                                              0x10
#define UVD_MP_SWAP_CNTL__MP_REF9_MC_SWAP__SHIFT                                                              0x12
#define UVD_MP_SWAP_CNTL__MP_REF10_MC_SWAP__SHIFT                                                             0x14
#define UVD_MP_SWAP_CNTL__MP_REF11_MC_SWAP__SHIFT                                                             0x16
#define UVD_MP_SWAP_CNTL__MP_REF12_MC_SWAP__SHIFT                                                             0x18
#define UVD_MP_SWAP_CNTL__MP_REF13_MC_SWAP__SHIFT                                                             0x1a
#define UVD_MP_SWAP_CNTL__MP_REF14_MC_SWAP__SHIFT                                                             0x1c
#define UVD_MP_SWAP_CNTL__MP_REF15_MC_SWAP__SHIFT                                                             0x1e
#define UVD_MP_SWAP_CNTL__MP_REF0_MC_SWAP_MASK                                                                0x00000003L
#define UVD_MP_SWAP_CNTL__MP_REF1_MC_SWAP_MASK                                                                0x0000000CL
#define UVD_MP_SWAP_CNTL__MP_REF2_MC_SWAP_MASK                                                                0x00000030L
#define UVD_MP_SWAP_CNTL__MP_REF3_MC_SWAP_MASK                                                                0x000000C0L
#define UVD_MP_SWAP_CNTL__MP_REF4_MC_SWAP_MASK                                                                0x00000300L
#define UVD_MP_SWAP_CNTL__MP_REF5_MC_SWAP_MASK                                                                0x00000C00L
#define UVD_MP_SWAP_CNTL__MP_REF6_MC_SWAP_MASK                                                                0x00003000L
#define UVD_MP_SWAP_CNTL__MP_REF7_MC_SWAP_MASK                                                                0x0000C000L
#define UVD_MP_SWAP_CNTL__MP_REF8_MC_SWAP_MASK                                                                0x00030000L
#define UVD_MP_SWAP_CNTL__MP_REF9_MC_SWAP_MASK                                                                0x000C0000L
#define UVD_MP_SWAP_CNTL__MP_REF10_MC_SWAP_MASK                                                               0x00300000L
#define UVD_MP_SWAP_CNTL__MP_REF11_MC_SWAP_MASK                                                               0x00C00000L
#define UVD_MP_SWAP_CNTL__MP_REF12_MC_SWAP_MASK                                                               0x03000000L
#define UVD_MP_SWAP_CNTL__MP_REF13_MC_SWAP_MASK                                                               0x0C000000L
#define UVD_MP_SWAP_CNTL__MP_REF14_MC_SWAP_MASK                                                               0x30000000L
#define UVD_MP_SWAP_CNTL__MP_REF15_MC_SWAP_MASK                                                               0xC0000000L
//UVD_MP_SWAP_CNTL2
#define UVD_MP_SWAP_CNTL2__MP_REF16_MC_SWAP__SHIFT                                                            0x0
#define UVD_MP_SWAP_CNTL2__MP_REF16_MC_SWAP_MASK                                                              0x00000003L
//UVD_MPC_LUMA_SRCH
#define UVD_MPC_LUMA_SRCH__CNTR__SHIFT                                                                        0x0
#define UVD_MPC_LUMA_SRCH__CNTR_MASK                                                                          0xFFFFFFFFL
//UVD_MPC_LUMA_HIT
#define UVD_MPC_LUMA_HIT__CNTR__SHIFT                                                                         0x0
#define UVD_MPC_LUMA_HIT__CNTR_MASK                                                                           0xFFFFFFFFL
//UVD_MPC_LUMA_HITPEND
#define UVD_MPC_LUMA_HITPEND__CNTR__SHIFT                                                                     0x0
#define UVD_MPC_LUMA_HITPEND__CNTR_MASK                                                                       0xFFFFFFFFL
//UVD_MPC_CHROMA_SRCH
#define UVD_MPC_CHROMA_SRCH__CNTR__SHIFT                                                                      0x0
#define UVD_MPC_CHROMA_SRCH__CNTR_MASK                                                                        0xFFFFFFFFL
//UVD_MPC_CHROMA_HIT
#define UVD_MPC_CHROMA_HIT__CNTR__SHIFT                                                                       0x0
#define UVD_MPC_CHROMA_HIT__CNTR_MASK                                                                         0xFFFFFFFFL
//UVD_MPC_CHROMA_HITPEND
#define UVD_MPC_CHROMA_HITPEND__CNTR__SHIFT                                                                   0x0
#define UVD_MPC_CHROMA_HITPEND__CNTR_MASK                                                                     0xFFFFFFFFL
//UVD_MPC_CNTL
#define UVD_MPC_CNTL__BLK_RST__SHIFT                                                                          0x0
#define UVD_MPC_CNTL__REG_MPC1_PERF_SELECT__SHIFT                                                             0x1
#define UVD_MPC_CNTL__REPLACEMENT_MODE__SHIFT                                                                 0x3
#define UVD_MPC_CNTL__PERF_RST__SHIFT                                                                         0x6
#define UVD_MPC_CNTL__AVE_WEIGHT__SHIFT                                                                       0x10
#define UVD_MPC_CNTL__URGENT_EN__SHIFT                                                                        0x12
#define UVD_MPC_CNTL__SMPAT_REQ_SPEED_UP__SHIFT                                                               0x13
#define UVD_MPC_CNTL__TEST_MODE_EN__SHIFT                                                                     0x14
#define UVD_MPC_CNTL__BLK_RST_MASK                                                                            0x00000001L
#define UVD_MPC_CNTL__REG_MPC1_PERF_SELECT_MASK                                                               0x00000002L
#define UVD_MPC_CNTL__REPLACEMENT_MODE_MASK                                                                   0x00000038L
#define UVD_MPC_CNTL__PERF_RST_MASK                                                                           0x00000040L
#define UVD_MPC_CNTL__AVE_WEIGHT_MASK                                                                         0x00030000L
#define UVD_MPC_CNTL__URGENT_EN_MASK                                                                          0x00040000L
#define UVD_MPC_CNTL__SMPAT_REQ_SPEED_UP_MASK                                                                 0x00080000L
#define UVD_MPC_CNTL__TEST_MODE_EN_MASK                                                                       0x00300000L
//UVD_MPC_PITCH
#define UVD_MPC_PITCH__LUMA_PITCH__SHIFT                                                                      0x0
#define UVD_MPC_PITCH__LUMA_PITCH_MASK                                                                        0x000007FFL
//UVD_MPC_SET_MUXA0
#define UVD_MPC_SET_MUXA0__VARA_0__SHIFT                                                                      0x0
#define UVD_MPC_SET_MUXA0__VARA_1__SHIFT                                                                      0x6
#define UVD_MPC_SET_MUXA0__VARA_2__SHIFT                                                                      0xc
#define UVD_MPC_SET_MUXA0__VARA_3__SHIFT                                                                      0x12
#define UVD_MPC_SET_MUXA0__VARA_4__SHIFT                                                                      0x18
#define UVD_MPC_SET_MUXA0__VARA_0_MASK                                                                        0x0000003FL
#define UVD_MPC_SET_MUXA0__VARA_1_MASK                                                                        0x00000FC0L
#define UVD_MPC_SET_MUXA0__VARA_2_MASK                                                                        0x0003F000L
#define UVD_MPC_SET_MUXA0__VARA_3_MASK                                                                        0x00FC0000L
#define UVD_MPC_SET_MUXA0__VARA_4_MASK                                                                        0x3F000000L
//UVD_MPC_SET_MUXA1
#define UVD_MPC_SET_MUXA1__VARA_5__SHIFT                                                                      0x0
#define UVD_MPC_SET_MUXA1__VARA_6__SHIFT                                                                      0x6
#define UVD_MPC_SET_MUXA1__VARA_7__SHIFT                                                                      0xc
#define UVD_MPC_SET_MUXA1__VARA_5_MASK                                                                        0x0000003FL
#define UVD_MPC_SET_MUXA1__VARA_6_MASK                                                                        0x00000FC0L
#define UVD_MPC_SET_MUXA1__VARA_7_MASK                                                                        0x0003F000L
//UVD_MPC_SET_MUXB0
#define UVD_MPC_SET_MUXB0__VARB_0__SHIFT                                                                      0x0
#define UVD_MPC_SET_MUXB0__VARB_1__SHIFT                                                                      0x6
#define UVD_MPC_SET_MUXB0__VARB_2__SHIFT                                                                      0xc
#define UVD_MPC_SET_MUXB0__VARB_3__SHIFT                                                                      0x12
#define UVD_MPC_SET_MUXB0__VARB_4__SHIFT                                                                      0x18
#define UVD_MPC_SET_MUXB0__VARB_0_MASK                                                                        0x0000003FL
#define UVD_MPC_SET_MUXB0__VARB_1_MASK                                                                        0x00000FC0L
#define UVD_MPC_SET_MUXB0__VARB_2_MASK                                                                        0x0003F000L
#define UVD_MPC_SET_MUXB0__VARB_3_MASK                                                                        0x00FC0000L
#define UVD_MPC_SET_MUXB0__VARB_4_MASK                                                                        0x3F000000L
//UVD_MPC_SET_MUXB1
#define UVD_MPC_SET_MUXB1__VARB_5__SHIFT                                                                      0x0
#define UVD_MPC_SET_MUXB1__VARB_6__SHIFT                                                                      0x6
#define UVD_MPC_SET_MUXB1__VARB_7__SHIFT                                                                      0xc
#define UVD_MPC_SET_MUXB1__VARB_5_MASK                                                                        0x0000003FL
#define UVD_MPC_SET_MUXB1__VARB_6_MASK                                                                        0x00000FC0L
#define UVD_MPC_SET_MUXB1__VARB_7_MASK                                                                        0x0003F000L
//UVD_MPC_SET_MUX
#define UVD_MPC_SET_MUX__SET_0__SHIFT                                                                         0x0
#define UVD_MPC_SET_MUX__SET_1__SHIFT                                                                         0x3
#define UVD_MPC_SET_MUX__SET_2__SHIFT                                                                         0x6
#define UVD_MPC_SET_MUX__SET_0_MASK                                                                           0x00000007L
#define UVD_MPC_SET_MUX__SET_1_MASK                                                                           0x00000038L
#define UVD_MPC_SET_MUX__SET_2_MASK                                                                           0x000001C0L
//UVD_MPC_SET_ALU
#define UVD_MPC_SET_ALU__FUNCT__SHIFT                                                                         0x0
#define UVD_MPC_SET_ALU__OPERAND__SHIFT                                                                       0x4
#define UVD_MPC_SET_ALU__FUNCT_MASK                                                                           0x00000007L
#define UVD_MPC_SET_ALU__OPERAND_MASK                                                                         0x00000FF0L
//UVD_MPC_PERF0
#define UVD_MPC_PERF0__MAX_LAT__SHIFT                                                                         0x0
#define UVD_MPC_PERF0__MAX_LAT_MASK                                                                           0x000003FFL
//UVD_MPC_PERF1
#define UVD_MPC_PERF1__AVE_LAT__SHIFT                                                                         0x0
#define UVD_MPC_PERF1__AVE_LAT_MASK                                                                           0x000003FFL
//UVD_MPC_IND_INDEX
#define UVD_MPC_IND_INDEX__INDEX__SHIFT                                                                       0x0
#define UVD_MPC_IND_INDEX__INDEX_MASK                                                                         0x000001FFL
//UVD_MPC_IND_DATA
#define UVD_MPC_IND_DATA__DATA__SHIFT                                                                         0x0
#define UVD_MPC_IND_DATA__DATA_MASK                                                                           0xFFFFFFFFL


// addressBlock: uvd0_uvd_rbcdec
//UVD_RBC_IB_SIZE
#define UVD_RBC_IB_SIZE__IB_SIZE__SHIFT                                                                       0x4
#define UVD_RBC_IB_SIZE__IB_SIZE_MASK                                                                         0x007FFFF0L
//UVD_RBC_IB_SIZE_UPDATE
#define UVD_RBC_IB_SIZE_UPDATE__REMAIN_IB_SIZE__SHIFT                                                         0x4
#define UVD_RBC_IB_SIZE_UPDATE__REMAIN_IB_SIZE_MASK                                                           0x007FFFF0L
//UVD_RBC_RB_CNTL
#define UVD_RBC_RB_CNTL__RB_BUFSZ__SHIFT                                                                      0x0
#define UVD_RBC_RB_CNTL__RB_BLKSZ__SHIFT                                                                      0x8
#define UVD_RBC_RB_CNTL__RB_NO_FETCH__SHIFT                                                                   0x10
#define UVD_RBC_RB_CNTL__RB_WPTR_POLL_EN__SHIFT                                                               0x14
#define UVD_RBC_RB_CNTL__RB_NO_UPDATE__SHIFT                                                                  0x18
#define UVD_RBC_RB_CNTL__RB_RPTR_WR_EN__SHIFT                                                                 0x1c
#define UVD_RBC_RB_CNTL__BLK_RST__SHIFT                                                                       0x1d
#define UVD_RBC_RB_CNTL__RB_BUFSZ_MASK                                                                        0x0000001FL
#define UVD_RBC_RB_CNTL__RB_BLKSZ_MASK                                                                        0x00001F00L
#define UVD_RBC_RB_CNTL__RB_NO_FETCH_MASK                                                                     0x00010000L
#define UVD_RBC_RB_CNTL__RB_WPTR_POLL_EN_MASK                                                                 0x00100000L
#define UVD_RBC_RB_CNTL__RB_NO_UPDATE_MASK                                                                    0x01000000L
#define UVD_RBC_RB_CNTL__RB_RPTR_WR_EN_MASK                                                                   0x10000000L
#define UVD_RBC_RB_CNTL__BLK_RST_MASK                                                                         0x20000000L
//UVD_RBC_RB_RPTR_ADDR
#define UVD_RBC_RB_RPTR_ADDR__RB_RPTR_ADDR__SHIFT                                                             0x0
#define UVD_RBC_RB_RPTR_ADDR__RB_RPTR_ADDR_MASK                                                               0xFFFFFFFFL
//UVD_RBC_VCPU_ACCESS
#define UVD_RBC_VCPU_ACCESS__ENABLE_RBC__SHIFT                                                                0x0
#define UVD_RBC_VCPU_ACCESS__ENABLE_RBC_MASK                                                                  0x00000001L
//UVD_FW_SEMAPHORE_CNTL
#define UVD_FW_SEMAPHORE_CNTL__START__SHIFT                                                                   0x0
#define UVD_FW_SEMAPHORE_CNTL__BUSY__SHIFT                                                                    0x8
#define UVD_FW_SEMAPHORE_CNTL__PASS__SHIFT                                                                    0x9
#define UVD_FW_SEMAPHORE_CNTL__START_MASK                                                                     0x00000001L
#define UVD_FW_SEMAPHORE_CNTL__BUSY_MASK                                                                      0x00000100L
#define UVD_FW_SEMAPHORE_CNTL__PASS_MASK                                                                      0x00000200L
//UVD_RBC_READ_REQ_URGENT_CNTL
#define UVD_RBC_READ_REQ_URGENT_CNTL__CMD_READ_REQ_PRIORITY_MARK__SHIFT                                       0x0
#define UVD_RBC_READ_REQ_URGENT_CNTL__CMD_READ_REQ_PRIORITY_MARK_MASK                                         0x00000003L
//UVD_RBC_RB_WPTR_CNTL
#define UVD_RBC_RB_WPTR_CNTL__RB_PRE_WRITE_TIMER__SHIFT                                                       0x0
#define UVD_RBC_RB_WPTR_CNTL__RB_PRE_WRITE_TIMER_MASK                                                         0x00007FFFL
//UVD_RBC_WPTR_STATUS
#define UVD_RBC_WPTR_STATUS__RB_WPTR_IN_USE__SHIFT                                                            0x4
#define UVD_RBC_WPTR_STATUS__RB_WPTR_IN_USE_MASK                                                              0x007FFFF0L
//UVD_RBC_WPTR_POLL_CNTL
#define UVD_RBC_WPTR_POLL_CNTL__POLL_FREQ__SHIFT                                                              0x0
#define UVD_RBC_WPTR_POLL_CNTL__IDLE_POLL_COUNT__SHIFT                                                        0x10
#define UVD_RBC_WPTR_POLL_CNTL__POLL_FREQ_MASK                                                                0x0000FFFFL
#define UVD_RBC_WPTR_POLL_CNTL__IDLE_POLL_COUNT_MASK                                                          0xFFFF0000L
//UVD_RBC_WPTR_POLL_ADDR
#define UVD_RBC_WPTR_POLL_ADDR__POLL_ADDR__SHIFT                                                              0x2
#define UVD_RBC_WPTR_POLL_ADDR__POLL_ADDR_MASK                                                                0xFFFFFFFCL
//UVD_SEMA_CMD
#define UVD_SEMA_CMD__REQ_CMD__SHIFT                                                                          0x0
#define UVD_SEMA_CMD__WR_PHASE__SHIFT                                                                         0x4
#define UVD_SEMA_CMD__MODE__SHIFT                                                                             0x6
#define UVD_SEMA_CMD__VMID_EN__SHIFT                                                                          0x7
#define UVD_SEMA_CMD__VMID__SHIFT                                                                             0x8
#define UVD_SEMA_CMD__REQ_CMD_MASK                                                                            0x0000000FL
#define UVD_SEMA_CMD__WR_PHASE_MASK                                                                           0x00000030L
#define UVD_SEMA_CMD__MODE_MASK                                                                               0x00000040L
#define UVD_SEMA_CMD__VMID_EN_MASK                                                                            0x00000080L
#define UVD_SEMA_CMD__VMID_MASK                                                                               0x00000F00L
//UVD_SEMA_ADDR_LOW
#define UVD_SEMA_ADDR_LOW__ADDR_26_3__SHIFT                                                                   0x0
#define UVD_SEMA_ADDR_LOW__ADDR_26_3_MASK                                                                     0x00FFFFFFL
//UVD_SEMA_ADDR_HIGH
#define UVD_SEMA_ADDR_HIGH__ADDR_47_27__SHIFT                                                                 0x0
#define UVD_SEMA_ADDR_HIGH__ADDR_47_27_MASK                                                                   0x001FFFFFL
//UVD_ENGINE_CNTL
#define UVD_ENGINE_CNTL__ENGINE_START__SHIFT                                                                  0x0
#define UVD_ENGINE_CNTL__ENGINE_START_MODE__SHIFT                                                             0x1
#define UVD_ENGINE_CNTL__NJ_PF_HANDLE_DISABLE__SHIFT                                                          0x2
#define UVD_ENGINE_CNTL__ENGINE_START_MASK                                                                    0x00000001L
#define UVD_ENGINE_CNTL__ENGINE_START_MODE_MASK                                                               0x00000002L
#define UVD_ENGINE_CNTL__NJ_PF_HANDLE_DISABLE_MASK                                                            0x00000004L
//UVD_SEMA_TIMEOUT_STATUS
#define UVD_SEMA_TIMEOUT_STATUS__SEMAPHORE_WAIT_INCOMPLETE_TIMEOUT_STAT__SHIFT                                0x0
#define UVD_SEMA_TIMEOUT_STATUS__SEMAPHORE_WAIT_FAULT_TIMEOUT_STAT__SHIFT                                     0x1
#define UVD_SEMA_TIMEOUT_STATUS__SEMAPHORE_SIGNAL_INCOMPLETE_TIMEOUT_STAT__SHIFT                              0x2
#define UVD_SEMA_TIMEOUT_STATUS__SEMAPHORE_TIMEOUT_CLEAR__SHIFT                                               0x3
#define UVD_SEMA_TIMEOUT_STATUS__SEMAPHORE_WAIT_INCOMPLETE_TIMEOUT_STAT_MASK                                  0x00000001L
#define UVD_SEMA_TIMEOUT_STATUS__SEMAPHORE_WAIT_FAULT_TIMEOUT_STAT_MASK                                       0x00000002L
#define UVD_SEMA_TIMEOUT_STATUS__SEMAPHORE_SIGNAL_INCOMPLETE_TIMEOUT_STAT_MASK                                0x00000004L
#define UVD_SEMA_TIMEOUT_STATUS__SEMAPHORE_TIMEOUT_CLEAR_MASK                                                 0x00000008L
//UVD_SEMA_CNTL
#define UVD_SEMA_CNTL__SEMAPHORE_EN__SHIFT                                                                    0x0
#define UVD_SEMA_CNTL__ADVANCED_MODE_DIS__SHIFT                                                               0x1
#define UVD_SEMA_CNTL__SEMAPHORE_EN_MASK                                                                      0x00000001L
#define UVD_SEMA_CNTL__ADVANCED_MODE_DIS_MASK                                                                 0x00000002L
//UVD_SEMA_SIGNAL_INCOMPLETE_TIMEOUT_CNTL
#define UVD_SEMA_SIGNAL_INCOMPLETE_TIMEOUT_CNTL__SIGNAL_INCOMPLETE_EN__SHIFT                                  0x0
#define UVD_SEMA_SIGNAL_INCOMPLETE_TIMEOUT_CNTL__SIGNAL_INCOMPLETE_COUNT__SHIFT                               0x1
#define UVD_SEMA_SIGNAL_INCOMPLETE_TIMEOUT_CNTL__RESEND_TIMER__SHIFT                                          0x18
#define UVD_SEMA_SIGNAL_INCOMPLETE_TIMEOUT_CNTL__SIGNAL_INCOMPLETE_EN_MASK                                    0x00000001L
#define UVD_SEMA_SIGNAL_INCOMPLETE_TIMEOUT_CNTL__SIGNAL_INCOMPLETE_COUNT_MASK                                 0x001FFFFEL
#define UVD_SEMA_SIGNAL_INCOMPLETE_TIMEOUT_CNTL__RESEND_TIMER_MASK                                            0x07000000L
//UVD_SEMA_WAIT_FAULT_TIMEOUT_CNTL
#define UVD_SEMA_WAIT_FAULT_TIMEOUT_CNTL__WAIT_FAULT_EN__SHIFT                                                0x0
#define UVD_SEMA_WAIT_FAULT_TIMEOUT_CNTL__WAIT_FAULT_COUNT__SHIFT                                             0x1
#define UVD_SEMA_WAIT_FAULT_TIMEOUT_CNTL__RESEND_TIMER__SHIFT                                                 0x18
#define UVD_SEMA_WAIT_FAULT_TIMEOUT_CNTL__WAIT_FAULT_EN_MASK                                                  0x00000001L
#define UVD_SEMA_WAIT_FAULT_TIMEOUT_CNTL__WAIT_FAULT_COUNT_MASK                                               0x001FFFFEL
#define UVD_SEMA_WAIT_FAULT_TIMEOUT_CNTL__RESEND_TIMER_MASK                                                   0x07000000L
//UVD_SEMA_WAIT_INCOMPLETE_TIMEOUT_CNTL
#define UVD_SEMA_WAIT_INCOMPLETE_TIMEOUT_CNTL__WAIT_INCOMPLETE_EN__SHIFT                                      0x0
#define UVD_SEMA_WAIT_INCOMPLETE_TIMEOUT_CNTL__WAIT_INCOMPLETE_COUNT__SHIFT                                   0x1
#define UVD_SEMA_WAIT_INCOMPLETE_TIMEOUT_CNTL__RESEND_TIMER__SHIFT                                            0x18
#define UVD_SEMA_WAIT_INCOMPLETE_TIMEOUT_CNTL__WAIT_INCOMPLETE_EN_MASK                                        0x00000001L
#define UVD_SEMA_WAIT_INCOMPLETE_TIMEOUT_CNTL__WAIT_INCOMPLETE_COUNT_MASK                                     0x001FFFFEL
#define UVD_SEMA_WAIT_INCOMPLETE_TIMEOUT_CNTL__RESEND_TIMER_MASK                                              0x07000000L
//UVD_JOB_START
#define UVD_JOB_START__JOB_START__SHIFT                                                                       0x0
#define UVD_JOB_START__JOB_START_MASK                                                                         0x00000001L
//UVD_RBC_BUF_STATUS
#define UVD_RBC_BUF_STATUS__RB_BUF_VALID__SHIFT                                                               0x0
#define UVD_RBC_BUF_STATUS__IB_BUF_VALID__SHIFT                                                               0x8
#define UVD_RBC_BUF_STATUS__RB_BUF_RD_ADDR__SHIFT                                                             0x10
#define UVD_RBC_BUF_STATUS__IB_BUF_RD_ADDR__SHIFT                                                             0x13
#define UVD_RBC_BUF_STATUS__RB_BUF_WR_ADDR__SHIFT                                                             0x16
#define UVD_RBC_BUF_STATUS__IB_BUF_WR_ADDR__SHIFT                                                             0x19
#define UVD_RBC_BUF_STATUS__RB_BUF_VALID_MASK                                                                 0x000000FFL
#define UVD_RBC_BUF_STATUS__IB_BUF_VALID_MASK                                                                 0x0000FF00L
#define UVD_RBC_BUF_STATUS__RB_BUF_RD_ADDR_MASK                                                               0x00070000L
#define UVD_RBC_BUF_STATUS__IB_BUF_RD_ADDR_MASK                                                               0x00380000L
#define UVD_RBC_BUF_STATUS__RB_BUF_WR_ADDR_MASK                                                               0x01C00000L
#define UVD_RBC_BUF_STATUS__IB_BUF_WR_ADDR_MASK                                                               0x0E000000L
//UVD_RBC_SWAP_CNTL
#define UVD_RBC_SWAP_CNTL__RB_MC_SWAP__SHIFT                                                                  0x0
#define UVD_RBC_SWAP_CNTL__IB_MC_SWAP__SHIFT                                                                  0x2
#define UVD_RBC_SWAP_CNTL__RB_RPTR_MC_SWAP__SHIFT                                                             0x4
#define UVD_RBC_SWAP_CNTL__RB_WR_MC_SWAP__SHIFT                                                               0x1a
#define UVD_RBC_SWAP_CNTL__RB_MC_SWAP_MASK                                                                    0x00000003L
#define UVD_RBC_SWAP_CNTL__IB_MC_SWAP_MASK                                                                    0x0000000CL
#define UVD_RBC_SWAP_CNTL__RB_RPTR_MC_SWAP_MASK                                                               0x00000030L
#define UVD_RBC_SWAP_CNTL__RB_WR_MC_SWAP_MASK                                                                 0x0C000000L


// addressBlock: uvd0_lmi_adpdec
//UVD_LMI_RE_64BIT_BAR_LOW
#define UVD_LMI_RE_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                            0x0
#define UVD_LMI_RE_64BIT_BAR_LOW__BITS_31_0_MASK                                                              0xFFFFFFFFL
//UVD_LMI_RE_64BIT_BAR_HIGH
#define UVD_LMI_RE_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                          0x0
#define UVD_LMI_RE_64BIT_BAR_HIGH__BITS_63_32_MASK                                                            0xFFFFFFFFL
//UVD_LMI_IT_64BIT_BAR_LOW
#define UVD_LMI_IT_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                            0x0
#define UVD_LMI_IT_64BIT_BAR_LOW__BITS_31_0_MASK                                                              0xFFFFFFFFL
//UVD_LMI_IT_64BIT_BAR_HIGH
#define UVD_LMI_IT_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                          0x0
#define UVD_LMI_IT_64BIT_BAR_HIGH__BITS_63_32_MASK                                                            0xFFFFFFFFL
//UVD_LMI_MP_64BIT_BAR_LOW
#define UVD_LMI_MP_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                            0x0
#define UVD_LMI_MP_64BIT_BAR_LOW__BITS_31_0_MASK                                                              0xFFFFFFFFL
//UVD_LMI_MP_64BIT_BAR_HIGH
#define UVD_LMI_MP_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                          0x0
#define UVD_LMI_MP_64BIT_BAR_HIGH__BITS_63_32_MASK                                                            0xFFFFFFFFL
//UVD_LMI_CM_64BIT_BAR_LOW
#define UVD_LMI_CM_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                            0x0
#define UVD_LMI_CM_64BIT_BAR_LOW__BITS_31_0_MASK                                                              0xFFFFFFFFL
//UVD_LMI_CM_64BIT_BAR_HIGH
#define UVD_LMI_CM_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                          0x0
#define UVD_LMI_CM_64BIT_BAR_HIGH__BITS_63_32_MASK                                                            0xFFFFFFFFL
//UVD_LMI_DB_64BIT_BAR_LOW
#define UVD_LMI_DB_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                            0x0
#define UVD_LMI_DB_64BIT_BAR_LOW__BITS_31_0_MASK                                                              0xFFFFFFFFL
//UVD_LMI_DB_64BIT_BAR_HIGH
#define UVD_LMI_DB_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                          0x0
#define UVD_LMI_DB_64BIT_BAR_HIGH__BITS_63_32_MASK                                                            0xFFFFFFFFL
//UVD_LMI_DBW_64BIT_BAR_LOW
#define UVD_LMI_DBW_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                           0x0
#define UVD_LMI_DBW_64BIT_BAR_LOW__BITS_31_0_MASK                                                             0xFFFFFFFFL
//UVD_LMI_DBW_64BIT_BAR_HIGH
#define UVD_LMI_DBW_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                         0x0
#define UVD_LMI_DBW_64BIT_BAR_HIGH__BITS_63_32_MASK                                                           0xFFFFFFFFL
//UVD_LMI_IDCT_64BIT_BAR_LOW
#define UVD_LMI_IDCT_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                          0x0
#define UVD_LMI_IDCT_64BIT_BAR_LOW__BITS_31_0_MASK                                                            0xFFFFFFFFL
//UVD_LMI_IDCT_64BIT_BAR_HIGH
#define UVD_LMI_IDCT_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                        0x0
#define UVD_LMI_IDCT_64BIT_BAR_HIGH__BITS_63_32_MASK                                                          0xFFFFFFFFL
//UVD_LMI_MPRD_S0_64BIT_BAR_LOW
#define UVD_LMI_MPRD_S0_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                       0x0
#define UVD_LMI_MPRD_S0_64BIT_BAR_LOW__BITS_31_0_MASK                                                         0xFFFFFFFFL
//UVD_LMI_MPRD_S0_64BIT_BAR_HIGH
#define UVD_LMI_MPRD_S0_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                     0x0
#define UVD_LMI_MPRD_S0_64BIT_BAR_HIGH__BITS_63_32_MASK                                                       0xFFFFFFFFL
//UVD_LMI_MPRD_S1_64BIT_BAR_LOW
#define UVD_LMI_MPRD_S1_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                       0x0
#define UVD_LMI_MPRD_S1_64BIT_BAR_LOW__BITS_31_0_MASK                                                         0xFFFFFFFFL
//UVD_LMI_MPRD_S1_64BIT_BAR_HIGH
#define UVD_LMI_MPRD_S1_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                     0x0
#define UVD_LMI_MPRD_S1_64BIT_BAR_HIGH__BITS_63_32_MASK                                                       0xFFFFFFFFL
//UVD_LMI_MPRD_DBW_64BIT_BAR_LOW
#define UVD_LMI_MPRD_DBW_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                      0x0
#define UVD_LMI_MPRD_DBW_64BIT_BAR_LOW__BITS_31_0_MASK                                                        0xFFFFFFFFL
//UVD_LMI_MPRD_DBW_64BIT_BAR_HIGH
#define UVD_LMI_MPRD_DBW_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                    0x0
#define UVD_LMI_MPRD_DBW_64BIT_BAR_HIGH__BITS_63_32_MASK                                                      0xFFFFFFFFL
//UVD_LMI_MPC_64BIT_BAR_LOW
#define UVD_LMI_MPC_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                           0x0
#define UVD_LMI_MPC_64BIT_BAR_LOW__BITS_31_0_MASK                                                             0xFFFFFFFFL
//UVD_LMI_MPC_64BIT_BAR_HIGH
#define UVD_LMI_MPC_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                         0x0
#define UVD_LMI_MPC_64BIT_BAR_HIGH__BITS_63_32_MASK                                                           0xFFFFFFFFL
//UVD_LMI_RBC_RB_64BIT_BAR_LOW
#define UVD_LMI_RBC_RB_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                        0x0
#define UVD_LMI_RBC_RB_64BIT_BAR_LOW__BITS_31_0_MASK                                                          0xFFFFFFFFL
//UVD_LMI_RBC_RB_64BIT_BAR_HIGH
#define UVD_LMI_RBC_RB_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                      0x0
#define UVD_LMI_RBC_RB_64BIT_BAR_HIGH__BITS_63_32_MASK                                                        0xFFFFFFFFL
//UVD_LMI_RBC_IB_64BIT_BAR_LOW
#define UVD_LMI_RBC_IB_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                        0x0
#define UVD_LMI_RBC_IB_64BIT_BAR_LOW__BITS_31_0_MASK                                                          0xFFFFFFFFL
//UVD_LMI_RBC_IB_64BIT_BAR_HIGH
#define UVD_LMI_RBC_IB_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                      0x0
#define UVD_LMI_RBC_IB_64BIT_BAR_HIGH__BITS_63_32_MASK                                                        0xFFFFFFFFL
//UVD_LMI_LBSI_64BIT_BAR_LOW
#define UVD_LMI_LBSI_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                          0x0
#define UVD_LMI_LBSI_64BIT_BAR_LOW__BITS_31_0_MASK                                                            0xFFFFFFFFL
//UVD_LMI_LBSI_64BIT_BAR_HIGH
#define UVD_LMI_LBSI_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                        0x0
#define UVD_LMI_LBSI_64BIT_BAR_HIGH__BITS_63_32_MASK                                                          0xFFFFFFFFL
//UVD_LMI_VCPU_NC0_64BIT_BAR_LOW
#define UVD_LMI_VCPU_NC0_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                      0x0
#define UVD_LMI_VCPU_NC0_64BIT_BAR_LOW__BITS_31_0_MASK                                                        0xFFFFFFFFL
//UVD_LMI_VCPU_NC0_64BIT_BAR_HIGH
#define UVD_LMI_VCPU_NC0_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                    0x0
#define UVD_LMI_VCPU_NC0_64BIT_BAR_HIGH__BITS_63_32_MASK                                                      0xFFFFFFFFL
//UVD_LMI_VCPU_NC1_64BIT_BAR_LOW
#define UVD_LMI_VCPU_NC1_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                      0x0
#define UVD_LMI_VCPU_NC1_64BIT_BAR_LOW__BITS_31_0_MASK                                                        0xFFFFFFFFL
//UVD_LMI_VCPU_NC1_64BIT_BAR_HIGH
#define UVD_LMI_VCPU_NC1_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                    0x0
#define UVD_LMI_VCPU_NC1_64BIT_BAR_HIGH__BITS_63_32_MASK                                                      0xFFFFFFFFL
//UVD_LMI_VCPU_CACHE_64BIT_BAR_LOW
#define UVD_LMI_VCPU_CACHE_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                    0x0
#define UVD_LMI_VCPU_CACHE_64BIT_BAR_LOW__BITS_31_0_MASK                                                      0xFFFFFFFFL
//UVD_LMI_VCPU_CACHE_64BIT_BAR_HIGH
#define UVD_LMI_VCPU_CACHE_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                  0x0
#define UVD_LMI_VCPU_CACHE_64BIT_BAR_HIGH__BITS_63_32_MASK                                                    0xFFFFFFFFL
//UVD_LMI_CENC_64BIT_BAR_LOW
#define UVD_LMI_CENC_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                          0x0
#define UVD_LMI_CENC_64BIT_BAR_LOW__BITS_31_0_MASK                                                            0xFFFFFFFFL
//UVD_LMI_CENC_64BIT_BAR_HIGH
#define UVD_LMI_CENC_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                        0x0
#define UVD_LMI_CENC_64BIT_BAR_HIGH__BITS_63_32_MASK                                                          0xFFFFFFFFL
//UVD_LMI_SRE_64BIT_BAR_LOW
#define UVD_LMI_SRE_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                           0x0
#define UVD_LMI_SRE_64BIT_BAR_LOW__BITS_31_0_MASK                                                             0xFFFFFFFFL
//UVD_LMI_SRE_64BIT_BAR_HIGH
#define UVD_LMI_SRE_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                         0x0
#define UVD_LMI_SRE_64BIT_BAR_HIGH__BITS_63_32_MASK                                                           0xFFFFFFFFL
//UVD_LMI_MIF_GPGPU_64BIT_BAR_LOW
#define UVD_LMI_MIF_GPGPU_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                     0x0
#define UVD_LMI_MIF_GPGPU_64BIT_BAR_LOW__BITS_31_0_MASK                                                       0xFFFFFFFFL
//UVD_LMI_MIF_GPGPU_64BIT_BAR_HIGH
#define UVD_LMI_MIF_GPGPU_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                   0x0
#define UVD_LMI_MIF_GPGPU_64BIT_BAR_HIGH__BITS_63_32_MASK                                                     0xFFFFFFFFL
//UVD_LMI_MIF_CURR_LUMA_64BIT_BAR_LOW
#define UVD_LMI_MIF_CURR_LUMA_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                 0x0
#define UVD_LMI_MIF_CURR_LUMA_64BIT_BAR_LOW__BITS_31_0_MASK                                                   0xFFFFFFFFL
//UVD_LMI_MIF_CURR_LUMA_64BIT_BAR_HIGH
#define UVD_LMI_MIF_CURR_LUMA_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                               0x0
#define UVD_LMI_MIF_CURR_LUMA_64BIT_BAR_HIGH__BITS_63_32_MASK                                                 0xFFFFFFFFL
//UVD_LMI_MIF_CURR_CHROMA_64BIT_BAR_LOW
#define UVD_LMI_MIF_CURR_CHROMA_64BIT_BAR_LOW__BITS_31_0__SHIFT                                               0x0
#define UVD_LMI_MIF_CURR_CHROMA_64BIT_BAR_LOW__BITS_31_0_MASK                                                 0xFFFFFFFFL
//UVD_LMI_MIF_CURR_CHROMA_64BIT_BAR_HIGH
#define UVD_LMI_MIF_CURR_CHROMA_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                             0x0
#define UVD_LMI_MIF_CURR_CHROMA_64BIT_BAR_HIGH__BITS_63_32_MASK                                               0xFFFFFFFFL
//UVD_LMI_MIF_REF_64BIT_BAR_LOW
#define UVD_LMI_MIF_REF_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                       0x0
#define UVD_LMI_MIF_REF_64BIT_BAR_LOW__BITS_31_0_MASK                                                         0xFFFFFFFFL
//UVD_LMI_MIF_REF_64BIT_BAR_HIGH
#define UVD_LMI_MIF_REF_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                     0x0
#define UVD_LMI_MIF_REF_64BIT_BAR_HIGH__BITS_63_32_MASK                                                       0xFFFFFFFFL
//UVD_LMI_MIF_DBW_64BIT_BAR_LOW
#define UVD_LMI_MIF_DBW_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                       0x0
#define UVD_LMI_MIF_DBW_64BIT_BAR_LOW__BITS_31_0_MASK                                                         0xFFFFFFFFL
//UVD_LMI_MIF_DBW_64BIT_BAR_HIGH
#define UVD_LMI_MIF_DBW_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                     0x0
#define UVD_LMI_MIF_DBW_64BIT_BAR_HIGH__BITS_63_32_MASK                                                       0xFFFFFFFFL
//UVD_LMI_MIF_CM_COLOC_64BIT_BAR_LOW
#define UVD_LMI_MIF_CM_COLOC_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                  0x0
#define UVD_LMI_MIF_CM_COLOC_64BIT_BAR_LOW__BITS_31_0_MASK                                                    0xFFFFFFFFL
//UVD_LMI_MIF_CM_COLOC_64BIT_BAR_HIGH
#define UVD_LMI_MIF_CM_COLOC_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                0x0
#define UVD_LMI_MIF_CM_COLOC_64BIT_BAR_HIGH__BITS_63_32_MASK                                                  0xFFFFFFFFL
//UVD_LMI_MIF_BSP0_64BIT_BAR_LOW
#define UVD_LMI_MIF_BSP0_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                      0x0
#define UVD_LMI_MIF_BSP0_64BIT_BAR_LOW__BITS_31_0_MASK                                                        0xFFFFFFFFL
//UVD_LMI_MIF_BSP0_64BIT_BAR_HIGH
#define UVD_LMI_MIF_BSP0_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                    0x0
#define UVD_LMI_MIF_BSP0_64BIT_BAR_HIGH__BITS_63_32_MASK                                                      0xFFFFFFFFL
//UVD_LMI_MIF_BSP1_64BIT_BAR_LOW
#define UVD_LMI_MIF_BSP1_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                      0x0
#define UVD_LMI_MIF_BSP1_64BIT_BAR_LOW__BITS_31_0_MASK                                                        0xFFFFFFFFL
//UVD_LMI_MIF_BSP1_64BIT_BAR_HIGH
#define UVD_LMI_MIF_BSP1_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                    0x0
#define UVD_LMI_MIF_BSP1_64BIT_BAR_HIGH__BITS_63_32_MASK                                                      0xFFFFFFFFL
//UVD_LMI_MIF_BSP2_64BIT_BAR_LOW
#define UVD_LMI_MIF_BSP2_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                      0x0
#define UVD_LMI_MIF_BSP2_64BIT_BAR_LOW__BITS_31_0_MASK                                                        0xFFFFFFFFL
//UVD_LMI_MIF_BSP2_64BIT_BAR_HIGH
#define UVD_LMI_MIF_BSP2_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                    0x0
#define UVD_LMI_MIF_BSP2_64BIT_BAR_HIGH__BITS_63_32_MASK                                                      0xFFFFFFFFL
//UVD_LMI_MIF_BSP3_64BIT_BAR_LOW
#define UVD_LMI_MIF_BSP3_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                      0x0
#define UVD_LMI_MIF_BSP3_64BIT_BAR_LOW__BITS_31_0_MASK                                                        0xFFFFFFFFL
//UVD_LMI_MIF_BSP3_64BIT_BAR_HIGH
#define UVD_LMI_MIF_BSP3_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                    0x0
#define UVD_LMI_MIF_BSP3_64BIT_BAR_HIGH__BITS_63_32_MASK                                                      0xFFFFFFFFL
//UVD_LMI_MIF_BSD0_64BIT_BAR_LOW
#define UVD_LMI_MIF_BSD0_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                      0x0
#define UVD_LMI_MIF_BSD0_64BIT_BAR_LOW__BITS_31_0_MASK                                                        0xFFFFFFFFL
//UVD_LMI_MIF_BSD0_64BIT_BAR_HIGH
#define UVD_LMI_MIF_BSD0_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                    0x0
#define UVD_LMI_MIF_BSD0_64BIT_BAR_HIGH__BITS_63_32_MASK                                                      0xFFFFFFFFL
//UVD_LMI_MIF_BSD1_64BIT_BAR_LOW
#define UVD_LMI_MIF_BSD1_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                      0x0
#define UVD_LMI_MIF_BSD1_64BIT_BAR_LOW__BITS_31_0_MASK                                                        0xFFFFFFFFL
//UVD_LMI_MIF_BSD1_64BIT_BAR_HIGH
#define UVD_LMI_MIF_BSD1_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                    0x0
#define UVD_LMI_MIF_BSD1_64BIT_BAR_HIGH__BITS_63_32_MASK                                                      0xFFFFFFFFL
//UVD_LMI_MIF_BSD2_64BIT_BAR_LOW
#define UVD_LMI_MIF_BSD2_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                      0x0
#define UVD_LMI_MIF_BSD2_64BIT_BAR_LOW__BITS_31_0_MASK                                                        0xFFFFFFFFL
//UVD_LMI_MIF_BSD2_64BIT_BAR_HIGH
#define UVD_LMI_MIF_BSD2_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                    0x0
#define UVD_LMI_MIF_BSD2_64BIT_BAR_HIGH__BITS_63_32_MASK                                                      0xFFFFFFFFL
//UVD_LMI_MIF_BSD3_64BIT_BAR_LOW
#define UVD_LMI_MIF_BSD3_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                      0x0
#define UVD_LMI_MIF_BSD3_64BIT_BAR_LOW__BITS_31_0_MASK                                                        0xFFFFFFFFL
//UVD_LMI_MIF_BSD3_64BIT_BAR_HIGH
#define UVD_LMI_MIF_BSD3_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                    0x0
#define UVD_LMI_MIF_BSD3_64BIT_BAR_HIGH__BITS_63_32_MASK                                                      0xFFFFFFFFL
//UVD_LMI_MIF_BSD4_64BIT_BAR_LOW
#define UVD_LMI_MIF_BSD4_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                      0x0
#define UVD_LMI_MIF_BSD4_64BIT_BAR_LOW__BITS_31_0_MASK                                                        0xFFFFFFFFL
//UVD_LMI_MIF_BSD4_64BIT_BAR_HIGH
#define UVD_LMI_MIF_BSD4_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                    0x0
#define UVD_LMI_MIF_BSD4_64BIT_BAR_HIGH__BITS_63_32_MASK                                                      0xFFFFFFFFL
//UVD_LMI_VCPU_CACHE1_64BIT_BAR_LOW
#define UVD_LMI_VCPU_CACHE1_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                   0x0
#define UVD_LMI_VCPU_CACHE1_64BIT_BAR_LOW__BITS_31_0_MASK                                                     0xFFFFFFFFL
//UVD_LMI_VCPU_CACHE1_64BIT_BAR_HIGH
#define UVD_LMI_VCPU_CACHE1_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                 0x0
#define UVD_LMI_VCPU_CACHE1_64BIT_BAR_HIGH__BITS_63_32_MASK                                                   0xFFFFFFFFL
//UVD_LMI_VCPU_CACHE8_64BIT_BAR_LOW
#define UVD_LMI_VCPU_CACHE8_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                   0x0
#define UVD_LMI_VCPU_CACHE8_64BIT_BAR_LOW__BITS_31_0_MASK                                                     0xFFFFFFFFL
//UVD_LMI_VCPU_CACHE8_64BIT_BAR_HIGH
#define UVD_LMI_VCPU_CACHE8_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                 0x0
#define UVD_LMI_VCPU_CACHE8_64BIT_BAR_HIGH__BITS_63_32_MASK                                                   0xFFFFFFFFL
//UVD_LMI_VCPU_CACHE2_64BIT_BAR_LOW
#define UVD_LMI_VCPU_CACHE2_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                   0x0
#define UVD_LMI_VCPU_CACHE2_64BIT_BAR_LOW__BITS_31_0_MASK                                                     0xFFFFFFFFL
//UVD_LMI_VCPU_CACHE2_64BIT_BAR_HIGH
#define UVD_LMI_VCPU_CACHE2_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                 0x0
#define UVD_LMI_VCPU_CACHE2_64BIT_BAR_HIGH__BITS_63_32_MASK                                                   0xFFFFFFFFL
//UVD_LMI_VCPU_CACHE3_64BIT_BAR_LOW
#define UVD_LMI_VCPU_CACHE3_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                   0x0
#define UVD_LMI_VCPU_CACHE3_64BIT_BAR_LOW__BITS_31_0_MASK                                                     0xFFFFFFFFL
//UVD_LMI_VCPU_CACHE3_64BIT_BAR_HIGH
#define UVD_LMI_VCPU_CACHE3_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                 0x0
#define UVD_LMI_VCPU_CACHE3_64BIT_BAR_HIGH__BITS_63_32_MASK                                                   0xFFFFFFFFL
//UVD_LMI_VCPU_CACHE4_64BIT_BAR_LOW
#define UVD_LMI_VCPU_CACHE4_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                   0x0
#define UVD_LMI_VCPU_CACHE4_64BIT_BAR_LOW__BITS_31_0_MASK                                                     0xFFFFFFFFL
//UVD_LMI_VCPU_CACHE4_64BIT_BAR_HIGH
#define UVD_LMI_VCPU_CACHE4_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                 0x0
#define UVD_LMI_VCPU_CACHE4_64BIT_BAR_HIGH__BITS_63_32_MASK                                                   0xFFFFFFFFL
//UVD_LMI_VCPU_CACHE5_64BIT_BAR_LOW
#define UVD_LMI_VCPU_CACHE5_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                   0x0
#define UVD_LMI_VCPU_CACHE5_64BIT_BAR_LOW__BITS_31_0_MASK                                                     0xFFFFFFFFL
//UVD_LMI_VCPU_CACHE5_64BIT_BAR_HIGH
#define UVD_LMI_VCPU_CACHE5_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                 0x0
#define UVD_LMI_VCPU_CACHE5_64BIT_BAR_HIGH__BITS_63_32_MASK                                                   0xFFFFFFFFL
//UVD_LMI_VCPU_CACHE6_64BIT_BAR_LOW
#define UVD_LMI_VCPU_CACHE6_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                   0x0
#define UVD_LMI_VCPU_CACHE6_64BIT_BAR_LOW__BITS_31_0_MASK                                                     0xFFFFFFFFL
//UVD_LMI_VCPU_CACHE6_64BIT_BAR_HIGH
#define UVD_LMI_VCPU_CACHE6_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                 0x0
#define UVD_LMI_VCPU_CACHE6_64BIT_BAR_HIGH__BITS_63_32_MASK                                                   0xFFFFFFFFL
//UVD_LMI_VCPU_CACHE7_64BIT_BAR_LOW
#define UVD_LMI_VCPU_CACHE7_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                   0x0
#define UVD_LMI_VCPU_CACHE7_64BIT_BAR_LOW__BITS_31_0_MASK                                                     0xFFFFFFFFL
//UVD_LMI_VCPU_CACHE7_64BIT_BAR_HIGH
#define UVD_LMI_VCPU_CACHE7_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                 0x0
#define UVD_LMI_VCPU_CACHE7_64BIT_BAR_HIGH__BITS_63_32_MASK                                                   0xFFFFFFFFL
//UVD_LMI_MIF_SCLR_64BIT_BAR_LOW
#define UVD_LMI_MIF_SCLR_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                      0x0
#define UVD_LMI_MIF_SCLR_64BIT_BAR_LOW__BITS_31_0_MASK                                                        0xFFFFFFFFL
//UVD_LMI_MIF_SCLR_64BIT_BAR_HIGH
#define UVD_LMI_MIF_SCLR_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                    0x0
#define UVD_LMI_MIF_SCLR_64BIT_BAR_HIGH__BITS_63_32_MASK                                                      0xFFFFFFFFL
//UVD_LMI_MIF_SCLR2_64BIT_BAR_LOW
#define UVD_LMI_MIF_SCLR2_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                     0x0
#define UVD_LMI_MIF_SCLR2_64BIT_BAR_LOW__BITS_31_0_MASK                                                       0xFFFFFFFFL
//UVD_LMI_MIF_SCLR2_64BIT_BAR_HIGH
#define UVD_LMI_MIF_SCLR2_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                   0x0
#define UVD_LMI_MIF_SCLR2_64BIT_BAR_HIGH__BITS_63_32_MASK                                                     0xFFFFFFFFL
//UVD_LMI_SPH_64BIT_BAR_HIGH
#define UVD_LMI_SPH_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                         0x0
#define UVD_LMI_SPH_64BIT_BAR_HIGH__BITS_63_32_MASK                                                           0xFFFFFFFFL
//UVD_LMI_MIF_IMAGEPASTE_LUMA_64BIT_BAR_LOW
#define UVD_LMI_MIF_IMAGEPASTE_LUMA_64BIT_BAR_LOW__BITS_31_0__SHIFT                                           0x0
#define UVD_LMI_MIF_IMAGEPASTE_LUMA_64BIT_BAR_LOW__BITS_31_0_MASK                                             0xFFFFFFFFL
//UVD_LMI_MIF_IMAGEPASTE_LUMA_64BIT_BAR_HIGH
#define UVD_LMI_MIF_IMAGEPASTE_LUMA_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                         0x0
#define UVD_LMI_MIF_IMAGEPASTE_LUMA_64BIT_BAR_HIGH__BITS_63_32_MASK                                           0xFFFFFFFFL
//UVD_LMI_MIF_IMAGEPASTE_CHROMA_64BIT_BAR_LOW
#define UVD_LMI_MIF_IMAGEPASTE_CHROMA_64BIT_BAR_LOW__BITS_31_0__SHIFT                                         0x0
#define UVD_LMI_MIF_IMAGEPASTE_CHROMA_64BIT_BAR_LOW__BITS_31_0_MASK                                           0xFFFFFFFFL
//UVD_LMI_MIF_IMAGEPASTE_CHROMA_64BIT_BAR_HIGH
#define UVD_LMI_MIF_IMAGEPASTE_CHROMA_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                       0x0
#define UVD_LMI_MIF_IMAGEPASTE_CHROMA_64BIT_BAR_HIGH__BITS_63_32_MASK                                         0xFFFFFFFFL
//UVD_LMI_MIF_PRIVACY_LUMA_64BIT_BAR_LOW
#define UVD_LMI_MIF_PRIVACY_LUMA_64BIT_BAR_LOW__BITS_31_0__SHIFT                                              0x0
#define UVD_LMI_MIF_PRIVACY_LUMA_64BIT_BAR_LOW__BITS_31_0_MASK                                                0xFFFFFFFFL
//UVD_LMI_MIF_PRIVACY_LUMA_64BIT_BAR_HIGH
#define UVD_LMI_MIF_PRIVACY_LUMA_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                            0x0
#define UVD_LMI_MIF_PRIVACY_LUMA_64BIT_BAR_HIGH__BITS_63_32_MASK                                              0xFFFFFFFFL
//UVD_LMI_MIF_PRIVACY_CHROMA_64BIT_BAR_LOW
#define UVD_LMI_MIF_PRIVACY_CHROMA_64BIT_BAR_LOW__BITS_31_0__SHIFT                                            0x0
#define UVD_LMI_MIF_PRIVACY_CHROMA_64BIT_BAR_LOW__BITS_31_0_MASK                                              0xFFFFFFFFL
//UVD_LMI_MIF_PRIVACY_CHROMA_64BIT_BAR_HIGH
#define UVD_LMI_MIF_PRIVACY_CHROMA_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                          0x0
#define UVD_LMI_MIF_PRIVACY_CHROMA_64BIT_BAR_HIGH__BITS_63_32_MASK                                            0xFFFFFFFFL
//UVD_ADP_ATOMIC_CONFIG
#define UVD_ADP_ATOMIC_CONFIG__ATOMIC_USER0_WR_CACHE__SHIFT                                                   0x0
#define UVD_ADP_ATOMIC_CONFIG__ATOMIC_USER1_WR_CACHE__SHIFT                                                   0x4
#define UVD_ADP_ATOMIC_CONFIG__ATOMIC_USER2_WR_CACHE__SHIFT                                                   0x8
#define UVD_ADP_ATOMIC_CONFIG__ATOMIC_USER3_WR_CACHE__SHIFT                                                   0xc
#define UVD_ADP_ATOMIC_CONFIG__ATOMIC_RD_URG__SHIFT                                                           0x10
#define UVD_ADP_ATOMIC_CONFIG__ATOMIC_USER0_WR_CACHE_MASK                                                     0x0000000FL
#define UVD_ADP_ATOMIC_CONFIG__ATOMIC_USER1_WR_CACHE_MASK                                                     0x000000F0L
#define UVD_ADP_ATOMIC_CONFIG__ATOMIC_USER2_WR_CACHE_MASK                                                     0x00000F00L
#define UVD_ADP_ATOMIC_CONFIG__ATOMIC_USER3_WR_CACHE_MASK                                                     0x0000F000L
#define UVD_ADP_ATOMIC_CONFIG__ATOMIC_RD_URG_MASK                                                             0x000F0000L
//UVD_LMI_ARB_CTRL2
#define UVD_LMI_ARB_CTRL2__CENC_RD_WAIT_EN__SHIFT                                                             0x0
#define UVD_LMI_ARB_CTRL2__ATOMIC_WR_WAIT_EN__SHIFT                                                           0x1
#define UVD_LMI_ARB_CTRL2__CENC_RD_MAX_BURST__SHIFT                                                           0x2
#define UVD_LMI_ARB_CTRL2__ATOMIC_WR_MAX_BURST__SHIFT                                                         0x6
#define UVD_LMI_ARB_CTRL2__MIF_RD_REQ_RET_MAX__SHIFT                                                          0xa
#define UVD_LMI_ARB_CTRL2__MIF_WR_REQ_RET_MAX__SHIFT                                                          0x14
#define UVD_LMI_ARB_CTRL2__CENC_RD_WAIT_EN_MASK                                                               0x00000001L
#define UVD_LMI_ARB_CTRL2__ATOMIC_WR_WAIT_EN_MASK                                                             0x00000002L
#define UVD_LMI_ARB_CTRL2__CENC_RD_MAX_BURST_MASK                                                             0x0000003CL
#define UVD_LMI_ARB_CTRL2__ATOMIC_WR_MAX_BURST_MASK                                                           0x000003C0L
#define UVD_LMI_ARB_CTRL2__MIF_RD_REQ_RET_MAX_MASK                                                            0x000FFC00L
#define UVD_LMI_ARB_CTRL2__MIF_WR_REQ_RET_MAX_MASK                                                            0xFFF00000L
//UVD_LMI_VCPU_CACHE_VMIDS_MULTI
#define UVD_LMI_VCPU_CACHE_VMIDS_MULTI__VCPU_CACHE1_VMID__SHIFT                                               0x0
#define UVD_LMI_VCPU_CACHE_VMIDS_MULTI__VCPU_CACHE2_VMID__SHIFT                                               0x4
#define UVD_LMI_VCPU_CACHE_VMIDS_MULTI__VCPU_CACHE3_VMID__SHIFT                                               0x8
#define UVD_LMI_VCPU_CACHE_VMIDS_MULTI__VCPU_CACHE4_VMID__SHIFT                                               0xc
#define UVD_LMI_VCPU_CACHE_VMIDS_MULTI__VCPU_CACHE5_VMID__SHIFT                                               0x10
#define UVD_LMI_VCPU_CACHE_VMIDS_MULTI__VCPU_CACHE6_VMID__SHIFT                                               0x14
#define UVD_LMI_VCPU_CACHE_VMIDS_MULTI__VCPU_CACHE7_VMID__SHIFT                                               0x18
#define UVD_LMI_VCPU_CACHE_VMIDS_MULTI__VCPU_CACHE8_VMID__SHIFT                                               0x1c
#define UVD_LMI_VCPU_CACHE_VMIDS_MULTI__VCPU_CACHE1_VMID_MASK                                                 0x0000000FL
#define UVD_LMI_VCPU_CACHE_VMIDS_MULTI__VCPU_CACHE2_VMID_MASK                                                 0x000000F0L
#define UVD_LMI_VCPU_CACHE_VMIDS_MULTI__VCPU_CACHE3_VMID_MASK                                                 0x00000F00L
#define UVD_LMI_VCPU_CACHE_VMIDS_MULTI__VCPU_CACHE4_VMID_MASK                                                 0x0000F000L
#define UVD_LMI_VCPU_CACHE_VMIDS_MULTI__VCPU_CACHE5_VMID_MASK                                                 0x000F0000L
#define UVD_LMI_VCPU_CACHE_VMIDS_MULTI__VCPU_CACHE6_VMID_MASK                                                 0x00F00000L
#define UVD_LMI_VCPU_CACHE_VMIDS_MULTI__VCPU_CACHE7_VMID_MASK                                                 0x0F000000L
#define UVD_LMI_VCPU_CACHE_VMIDS_MULTI__VCPU_CACHE8_VMID_MASK                                                 0xF0000000L
//UVD_LMI_VCPU_NC_VMIDS_MULTI
#define UVD_LMI_VCPU_NC_VMIDS_MULTI__VCPU_NC2_VMID__SHIFT                                                     0x4
#define UVD_LMI_VCPU_NC_VMIDS_MULTI__VCPU_NC3_VMID__SHIFT                                                     0x8
#define UVD_LMI_VCPU_NC_VMIDS_MULTI__VCPU_NC4_VMID__SHIFT                                                     0xc
#define UVD_LMI_VCPU_NC_VMIDS_MULTI__VCPU_NC5_VMID__SHIFT                                                     0x10
#define UVD_LMI_VCPU_NC_VMIDS_MULTI__VCPU_NC6_VMID__SHIFT                                                     0x14
#define UVD_LMI_VCPU_NC_VMIDS_MULTI__VCPU_NC7_VMID__SHIFT                                                     0x18
#define UVD_LMI_VCPU_NC_VMIDS_MULTI__VCPU_NC2_VMID_MASK                                                       0x000000F0L
#define UVD_LMI_VCPU_NC_VMIDS_MULTI__VCPU_NC3_VMID_MASK                                                       0x00000F00L
#define UVD_LMI_VCPU_NC_VMIDS_MULTI__VCPU_NC4_VMID_MASK                                                       0x0000F000L
#define UVD_LMI_VCPU_NC_VMIDS_MULTI__VCPU_NC5_VMID_MASK                                                       0x000F0000L
#define UVD_LMI_VCPU_NC_VMIDS_MULTI__VCPU_NC6_VMID_MASK                                                       0x00F00000L
#define UVD_LMI_VCPU_NC_VMIDS_MULTI__VCPU_NC7_VMID_MASK                                                       0x0F000000L
//UVD_LMI_LAT_CTRL
#define UVD_LMI_LAT_CTRL__SCALE__SHIFT                                                                        0x0
#define UVD_LMI_LAT_CTRL__MAX_START__SHIFT                                                                    0x8
#define UVD_LMI_LAT_CTRL__MIN_START__SHIFT                                                                    0x9
#define UVD_LMI_LAT_CTRL__AVG_START__SHIFT                                                                    0xa
#define UVD_LMI_LAT_CTRL__PERFMON_SYNC__SHIFT                                                                 0xb
#define UVD_LMI_LAT_CTRL__SKIP__SHIFT                                                                         0x10
#define UVD_LMI_LAT_CTRL__SCALE_MASK                                                                          0x000000FFL
#define UVD_LMI_LAT_CTRL__MAX_START_MASK                                                                      0x00000100L
#define UVD_LMI_LAT_CTRL__MIN_START_MASK                                                                      0x00000200L
#define UVD_LMI_LAT_CTRL__AVG_START_MASK                                                                      0x00000400L
#define UVD_LMI_LAT_CTRL__PERFMON_SYNC_MASK                                                                   0x00000800L
#define UVD_LMI_LAT_CTRL__SKIP_MASK                                                                           0x000F0000L
//UVD_LMI_LAT_CNTR
#define UVD_LMI_LAT_CNTR__MAX_LAT__SHIFT                                                                      0x0
#define UVD_LMI_LAT_CNTR__MIN_LAT__SHIFT                                                                      0x8
#define UVD_LMI_LAT_CNTR__MAX_LAT_MASK                                                                        0x000000FFL
#define UVD_LMI_LAT_CNTR__MIN_LAT_MASK                                                                        0x0000FF00L
//UVD_LMI_AVG_LAT_CNTR
#define UVD_LMI_AVG_LAT_CNTR__ENV_LOW__SHIFT                                                                  0x0
#define UVD_LMI_AVG_LAT_CNTR__ENV_HIGH__SHIFT                                                                 0x8
#define UVD_LMI_AVG_LAT_CNTR__ENV_HIT__SHIFT                                                                  0x10
#define UVD_LMI_AVG_LAT_CNTR__ENV_LOW_MASK                                                                    0x000000FFL
#define UVD_LMI_AVG_LAT_CNTR__ENV_HIGH_MASK                                                                   0x0000FF00L
#define UVD_LMI_AVG_LAT_CNTR__ENV_HIT_MASK                                                                    0xFFFF0000L
//UVD_LMI_SPH
#define UVD_LMI_SPH__ADDR__SHIFT                                                                              0x0
#define UVD_LMI_SPH__STS__SHIFT                                                                               0x1c
#define UVD_LMI_SPH__STS_VALID__SHIFT                                                                         0x1e
#define UVD_LMI_SPH__STS_OVERFLOW__SHIFT                                                                      0x1f
#define UVD_LMI_SPH__ADDR_MASK                                                                                0x0FFFFFFFL
#define UVD_LMI_SPH__STS_MASK                                                                                 0x30000000L
#define UVD_LMI_SPH__STS_VALID_MASK                                                                           0x40000000L
#define UVD_LMI_SPH__STS_OVERFLOW_MASK                                                                        0x80000000L
//UVD_LMI_VCPU_CACHE_VMID
#define UVD_LMI_VCPU_CACHE_VMID__VCPU_CACHE_VMID__SHIFT                                                       0x0
#define UVD_LMI_VCPU_CACHE_VMID__VCPU_CACHE_VMID_MASK                                                         0x0000000FL
//UVD_LMI_CTRL2
#define UVD_LMI_CTRL2__SPH_DIS__SHIFT                                                                         0x0
#define UVD_LMI_CTRL2__STALL_ARB__SHIFT                                                                       0x1
#define UVD_LMI_CTRL2__ASSERT_UMC_URGENT__SHIFT                                                               0x2
#define UVD_LMI_CTRL2__MASK_UMC_URGENT__SHIFT                                                                 0x3
#define UVD_LMI_CTRL2__CRC1_RESET__SHIFT                                                                      0x4
#define UVD_LMI_CTRL2__DRCITF_BUBBLE_FIX_DIS__SHIFT                                                           0x7
#define UVD_LMI_CTRL2__STALL_ARB_UMC__SHIFT                                                                   0x8
#define UVD_LMI_CTRL2__MC_READ_ID_SEL__SHIFT                                                                  0x9
#define UVD_LMI_CTRL2__MC_WRITE_ID_SEL__SHIFT                                                                 0xb
#define UVD_LMI_CTRL2__VCPU_NC0_EXT_EN__SHIFT                                                                 0xd
#define UVD_LMI_CTRL2__VCPU_NC1_EXT_EN__SHIFT                                                                 0xe
#define UVD_LMI_CTRL2__SPU_EXTRA_CID_EN__SHIFT                                                                0xf
#define UVD_LMI_CTRL2__RE_OFFLOAD_EN__SHIFT                                                                   0x10
#define UVD_LMI_CTRL2__RE_OFLD_MIF_WR_REQ_NUM__SHIFT                                                          0x11
#define UVD_LMI_CTRL2__CLEAR_NJ_PF_BP__SHIFT                                                                  0x19
#define UVD_LMI_CTRL2__NJ_MIF_GATING__SHIFT                                                                   0x1a
#define UVD_LMI_CTRL2__CRC1_SEL__SHIFT                                                                        0x1b
#define UVD_LMI_CTRL2__SPH_DIS_MASK                                                                           0x00000001L
#define UVD_LMI_CTRL2__STALL_ARB_MASK                                                                         0x00000002L
#define UVD_LMI_CTRL2__ASSERT_UMC_URGENT_MASK                                                                 0x00000004L
#define UVD_LMI_CTRL2__MASK_UMC_URGENT_MASK                                                                   0x00000008L
#define UVD_LMI_CTRL2__CRC1_RESET_MASK                                                                        0x00000010L
#define UVD_LMI_CTRL2__DRCITF_BUBBLE_FIX_DIS_MASK                                                             0x00000080L
#define UVD_LMI_CTRL2__STALL_ARB_UMC_MASK                                                                     0x00000100L
#define UVD_LMI_CTRL2__MC_READ_ID_SEL_MASK                                                                    0x00000600L
#define UVD_LMI_CTRL2__MC_WRITE_ID_SEL_MASK                                                                   0x00001800L
#define UVD_LMI_CTRL2__VCPU_NC0_EXT_EN_MASK                                                                   0x00002000L
#define UVD_LMI_CTRL2__VCPU_NC1_EXT_EN_MASK                                                                   0x00004000L
#define UVD_LMI_CTRL2__SPU_EXTRA_CID_EN_MASK                                                                  0x00008000L
#define UVD_LMI_CTRL2__RE_OFFLOAD_EN_MASK                                                                     0x00010000L
#define UVD_LMI_CTRL2__RE_OFLD_MIF_WR_REQ_NUM_MASK                                                            0x01FE0000L
#define UVD_LMI_CTRL2__CLEAR_NJ_PF_BP_MASK                                                                    0x02000000L
#define UVD_LMI_CTRL2__NJ_MIF_GATING_MASK                                                                     0x04000000L
#define UVD_LMI_CTRL2__CRC1_SEL_MASK                                                                          0xF8000000L
//UVD_LMI_URGENT_CTRL
#define UVD_LMI_URGENT_CTRL__ENABLE_MC_RD_URGENT_STALL__SHIFT                                                 0x0
#define UVD_LMI_URGENT_CTRL__ASSERT_MC_RD_STALL__SHIFT                                                        0x1
#define UVD_LMI_URGENT_CTRL__ASSERT_MC_RD_URGENT__SHIFT                                                       0x2
#define UVD_LMI_URGENT_CTRL__ENABLE_MC_WR_URGENT_STALL__SHIFT                                                 0x8
#define UVD_LMI_URGENT_CTRL__ASSERT_MC_WR_STALL__SHIFT                                                        0x9
#define UVD_LMI_URGENT_CTRL__ASSERT_MC_WR_URGENT__SHIFT                                                       0xa
#define UVD_LMI_URGENT_CTRL__ENABLE_UMC_RD_URGENT_STALL__SHIFT                                                0x10
#define UVD_LMI_URGENT_CTRL__ASSERT_UMC_RD_STALL__SHIFT                                                       0x11
#define UVD_LMI_URGENT_CTRL__ASSERT_UMC_RD_URGENT__SHIFT                                                      0x12
#define UVD_LMI_URGENT_CTRL__ENABLE_UMC_WR_URGENT_STALL__SHIFT                                                0x18
#define UVD_LMI_URGENT_CTRL__ASSERT_UMC_WR_STALL__SHIFT                                                       0x19
#define UVD_LMI_URGENT_CTRL__ASSERT_UMC_WR_URGENT__SHIFT                                                      0x1a
#define UVD_LMI_URGENT_CTRL__ENABLE_MC_RD_URGENT_STALL_MASK                                                   0x00000001L
#define UVD_LMI_URGENT_CTRL__ASSERT_MC_RD_STALL_MASK                                                          0x00000002L
#define UVD_LMI_URGENT_CTRL__ASSERT_MC_RD_URGENT_MASK                                                         0x0000003CL
#define UVD_LMI_URGENT_CTRL__ENABLE_MC_WR_URGENT_STALL_MASK                                                   0x00000100L
#define UVD_LMI_URGENT_CTRL__ASSERT_MC_WR_STALL_MASK                                                          0x00000200L
#define UVD_LMI_URGENT_CTRL__ASSERT_MC_WR_URGENT_MASK                                                         0x00003C00L
#define UVD_LMI_URGENT_CTRL__ENABLE_UMC_RD_URGENT_STALL_MASK                                                  0x00010000L
#define UVD_LMI_URGENT_CTRL__ASSERT_UMC_RD_STALL_MASK                                                         0x00020000L
#define UVD_LMI_URGENT_CTRL__ASSERT_UMC_RD_URGENT_MASK                                                        0x003C0000L
#define UVD_LMI_URGENT_CTRL__ENABLE_UMC_WR_URGENT_STALL_MASK                                                  0x01000000L
#define UVD_LMI_URGENT_CTRL__ASSERT_UMC_WR_STALL_MASK                                                         0x02000000L
#define UVD_LMI_URGENT_CTRL__ASSERT_UMC_WR_URGENT_MASK                                                        0x3C000000L
//UVD_LMI_CTRL
#define UVD_LMI_CTRL__WRITE_CLEAN_TIMER__SHIFT                                                                0x0
#define UVD_LMI_CTRL__WRITE_CLEAN_TIMER_EN__SHIFT                                                             0x8
#define UVD_LMI_CTRL__REQ_MODE__SHIFT                                                                         0x9
#define UVD_LMI_CTRL__ASSERT_MC_URGENT__SHIFT                                                                 0xb
#define UVD_LMI_CTRL__MASK_MC_URGENT__SHIFT                                                                   0xc
#define UVD_LMI_CTRL__DATA_COHERENCY_EN__SHIFT                                                                0xd
#define UVD_LMI_CTRL__CRC_RESET__SHIFT                                                                        0xe
#define UVD_LMI_CTRL__CRC_SEL__SHIFT                                                                          0xf
#define UVD_LMI_CTRL__DISABLE_ON_FWV_FAIL__SHIFT                                                              0x14
#define UVD_LMI_CTRL__VCPU_DATA_COHERENCY_EN__SHIFT                                                           0x15
#define UVD_LMI_CTRL__CM_DATA_COHERENCY_EN__SHIFT                                                             0x16
#define UVD_LMI_CTRL__DB_DB_DATA_COHERENCY_EN__SHIFT                                                          0x17
#define UVD_LMI_CTRL__DB_IT_DATA_COHERENCY_EN__SHIFT                                                          0x18
#define UVD_LMI_CTRL__IT_IT_DATA_COHERENCY_EN__SHIFT                                                          0x19
#define UVD_LMI_CTRL__MIF_MIF_DATA_COHERENCY_EN__SHIFT                                                        0x1a
#define UVD_LMI_CTRL__MIF_LESS_OUTSTANDING_RD_REQ__SHIFT                                                      0x1b
#define UVD_LMI_CTRL__MC_BLK_RST__SHIFT                                                                       0x1c
#define UVD_LMI_CTRL__UMC_BLK_RST__SHIFT                                                                      0x1d
#define UVD_LMI_CTRL__RFU__SHIFT                                                                              0x1e
#define UVD_LMI_CTRL__WRITE_CLEAN_TIMER_MASK                                                                  0x000000FFL
#define UVD_LMI_CTRL__WRITE_CLEAN_TIMER_EN_MASK                                                               0x00000100L
#define UVD_LMI_CTRL__REQ_MODE_MASK                                                                           0x00000200L
#define UVD_LMI_CTRL__ASSERT_MC_URGENT_MASK                                                                   0x00000800L
#define UVD_LMI_CTRL__MASK_MC_URGENT_MASK                                                                     0x00001000L
#define UVD_LMI_CTRL__DATA_COHERENCY_EN_MASK                                                                  0x00002000L
#define UVD_LMI_CTRL__CRC_RESET_MASK                                                                          0x00004000L
#define UVD_LMI_CTRL__CRC_SEL_MASK                                                                            0x000F8000L
#define UVD_LMI_CTRL__DISABLE_ON_FWV_FAIL_MASK                                                                0x00100000L
#define UVD_LMI_CTRL__VCPU_DATA_COHERENCY_EN_MASK                                                             0x00200000L
#define UVD_LMI_CTRL__CM_DATA_COHERENCY_EN_MASK                                                               0x00400000L
#define UVD_LMI_CTRL__DB_DB_DATA_COHERENCY_EN_MASK                                                            0x00800000L
#define UVD_LMI_CTRL__DB_IT_DATA_COHERENCY_EN_MASK                                                            0x01000000L
#define UVD_LMI_CTRL__IT_IT_DATA_COHERENCY_EN_MASK                                                            0x02000000L
#define UVD_LMI_CTRL__MIF_MIF_DATA_COHERENCY_EN_MASK                                                          0x04000000L
#define UVD_LMI_CTRL__MIF_LESS_OUTSTANDING_RD_REQ_MASK                                                        0x08000000L
#define UVD_LMI_CTRL__MC_BLK_RST_MASK                                                                         0x10000000L
#define UVD_LMI_CTRL__UMC_BLK_RST_MASK                                                                        0x20000000L
#define UVD_LMI_CTRL__RFU_MASK                                                                                0xC0000000L
//UVD_LMI_STATUS
#define UVD_LMI_STATUS__READ_CLEAN__SHIFT                                                                     0x0
#define UVD_LMI_STATUS__WRITE_CLEAN__SHIFT                                                                    0x1
#define UVD_LMI_STATUS__WRITE_CLEAN_RAW__SHIFT                                                                0x2
#define UVD_LMI_STATUS__VCPU_LMI_WRITE_CLEAN__SHIFT                                                           0x3
#define UVD_LMI_STATUS__UMC_READ_CLEAN__SHIFT                                                                 0x4
#define UVD_LMI_STATUS__UMC_WRITE_CLEAN__SHIFT                                                                0x5
#define UVD_LMI_STATUS__UMC_WRITE_CLEAN_RAW__SHIFT                                                            0x6
#define UVD_LMI_STATUS__PENDING_UVD_MC_WRITE__SHIFT                                                           0x7
#define UVD_LMI_STATUS__READ_CLEAN_RAW__SHIFT                                                                 0x8
#define UVD_LMI_STATUS__UMC_READ_CLEAN_RAW__SHIFT                                                             0x9
#define UVD_LMI_STATUS__UMC_UVD_IDLE__SHIFT                                                                   0xa
#define UVD_LMI_STATUS__UMC_AVP_IDLE__SHIFT                                                                   0xb
#define UVD_LMI_STATUS__ADP_MC_READ_CLEAN__SHIFT                                                              0xc
#define UVD_LMI_STATUS__ADP_UMC_READ_CLEAN__SHIFT                                                             0xd
#define UVD_LMI_STATUS__BSP0_WRITE_CLEAN__SHIFT                                                               0x12
#define UVD_LMI_STATUS__BSP1_WRITE_CLEAN__SHIFT                                                               0x13
#define UVD_LMI_STATUS__BSP2_WRITE_CLEAN__SHIFT                                                               0x14
#define UVD_LMI_STATUS__BSP3_WRITE_CLEAN__SHIFT                                                               0x15
#define UVD_LMI_STATUS__CENC_READ_CLEAN__SHIFT                                                                0x16
#define UVD_LMI_STATUS__READ_CLEAN_MASK                                                                       0x00000001L
#define UVD_LMI_STATUS__WRITE_CLEAN_MASK                                                                      0x00000002L
#define UVD_LMI_STATUS__WRITE_CLEAN_RAW_MASK                                                                  0x00000004L
#define UVD_LMI_STATUS__VCPU_LMI_WRITE_CLEAN_MASK                                                             0x00000008L
#define UVD_LMI_STATUS__UMC_READ_CLEAN_MASK                                                                   0x00000010L
#define UVD_LMI_STATUS__UMC_WRITE_CLEAN_MASK                                                                  0x00000020L
#define UVD_LMI_STATUS__UMC_WRITE_CLEAN_RAW_MASK                                                              0x00000040L
#define UVD_LMI_STATUS__PENDING_UVD_MC_WRITE_MASK                                                             0x00000080L
#define UVD_LMI_STATUS__READ_CLEAN_RAW_MASK                                                                   0x00000100L
#define UVD_LMI_STATUS__UMC_READ_CLEAN_RAW_MASK                                                               0x00000200L
#define UVD_LMI_STATUS__UMC_UVD_IDLE_MASK                                                                     0x00000400L
#define UVD_LMI_STATUS__UMC_AVP_IDLE_MASK                                                                     0x00000800L
#define UVD_LMI_STATUS__ADP_MC_READ_CLEAN_MASK                                                                0x00001000L
#define UVD_LMI_STATUS__ADP_UMC_READ_CLEAN_MASK                                                               0x00002000L
#define UVD_LMI_STATUS__BSP0_WRITE_CLEAN_MASK                                                                 0x00040000L
#define UVD_LMI_STATUS__BSP1_WRITE_CLEAN_MASK                                                                 0x00080000L
#define UVD_LMI_STATUS__BSP2_WRITE_CLEAN_MASK                                                                 0x00100000L
#define UVD_LMI_STATUS__BSP3_WRITE_CLEAN_MASK                                                                 0x00200000L
#define UVD_LMI_STATUS__CENC_READ_CLEAN_MASK                                                                  0x00400000L
//UVD_LMI_PERFMON_CTRL
#define UVD_LMI_PERFMON_CTRL__PERFMON_STATE__SHIFT                                                            0x0
#define UVD_LMI_PERFMON_CTRL__PERFMON_SEL__SHIFT                                                              0x8
#define UVD_LMI_PERFMON_CTRL__PERFMON_STATE_MASK                                                              0x00000003L
#define UVD_LMI_PERFMON_CTRL__PERFMON_SEL_MASK                                                                0x00001F00L
//UVD_LMI_PERFMON_COUNT_LO
#define UVD_LMI_PERFMON_COUNT_LO__PERFMON_COUNT__SHIFT                                                        0x0
#define UVD_LMI_PERFMON_COUNT_LO__PERFMON_COUNT_MASK                                                          0xFFFFFFFFL
//UVD_LMI_PERFMON_COUNT_HI
#define UVD_LMI_PERFMON_COUNT_HI__PERFMON_COUNT__SHIFT                                                        0x0
#define UVD_LMI_PERFMON_COUNT_HI__PERFMON_COUNT_MASK                                                          0x0000FFFFL
//UVD_LMI_ADP_SWAP_CNTL
#define UVD_LMI_ADP_SWAP_CNTL__VCPU_R_MC_SWAP__SHIFT                                                          0x6
#define UVD_LMI_ADP_SWAP_CNTL__VCPU_W_MC_SWAP__SHIFT                                                          0x8
#define UVD_LMI_ADP_SWAP_CNTL__CM_MC_SWAP__SHIFT                                                              0xa
#define UVD_LMI_ADP_SWAP_CNTL__IT_MC_SWAP__SHIFT                                                              0xc
#define UVD_LMI_ADP_SWAP_CNTL__DB_R_MC_SWAP__SHIFT                                                            0xe
#define UVD_LMI_ADP_SWAP_CNTL__DB_W_MC_SWAP__SHIFT                                                            0x10
#define UVD_LMI_ADP_SWAP_CNTL__CSM_MC_SWAP__SHIFT                                                             0x12
#define UVD_LMI_ADP_SWAP_CNTL__PREF_MC_SWAP__SHIFT                                                            0x14
#define UVD_LMI_ADP_SWAP_CNTL__DBW_MC_SWAP__SHIFT                                                             0x18
#define UVD_LMI_ADP_SWAP_CNTL__RE_MC_SWAP__SHIFT                                                              0x1c
#define UVD_LMI_ADP_SWAP_CNTL__MP_MC_SWAP__SHIFT                                                              0x1e
#define UVD_LMI_ADP_SWAP_CNTL__VCPU_R_MC_SWAP_MASK                                                            0x000000C0L
#define UVD_LMI_ADP_SWAP_CNTL__VCPU_W_MC_SWAP_MASK                                                            0x00000300L
#define UVD_LMI_ADP_SWAP_CNTL__CM_MC_SWAP_MASK                                                                0x00000C00L
#define UVD_LMI_ADP_SWAP_CNTL__IT_MC_SWAP_MASK                                                                0x00003000L
#define UVD_LMI_ADP_SWAP_CNTL__DB_R_MC_SWAP_MASK                                                              0x0000C000L
#define UVD_LMI_ADP_SWAP_CNTL__DB_W_MC_SWAP_MASK                                                              0x00030000L
#define UVD_LMI_ADP_SWAP_CNTL__CSM_MC_SWAP_MASK                                                               0x000C0000L
#define UVD_LMI_ADP_SWAP_CNTL__PREF_MC_SWAP_MASK                                                              0x00300000L
#define UVD_LMI_ADP_SWAP_CNTL__DBW_MC_SWAP_MASK                                                               0x03000000L
#define UVD_LMI_ADP_SWAP_CNTL__RE_MC_SWAP_MASK                                                                0x30000000L
#define UVD_LMI_ADP_SWAP_CNTL__MP_MC_SWAP_MASK                                                                0xC0000000L
//UVD_LMI_RBC_RB_VMID
#define UVD_LMI_RBC_RB_VMID__RB_VMID__SHIFT                                                                   0x0
#define UVD_LMI_RBC_RB_VMID__RB_VMID_MASK                                                                     0x0000000FL
//UVD_LMI_RBC_IB_VMID
#define UVD_LMI_RBC_IB_VMID__IB_VMID__SHIFT                                                                   0x0
#define UVD_LMI_RBC_IB_VMID__IB_VMID_MASK                                                                     0x0000000FL
//UVD_LMI_MC_CREDITS
#define UVD_LMI_MC_CREDITS__UVD_RD_CREDITS__SHIFT                                                             0x0
#define UVD_LMI_MC_CREDITS__UVD_WR_CREDITS__SHIFT                                                             0x8
#define UVD_LMI_MC_CREDITS__UMC_RD_CREDITS__SHIFT                                                             0x10
#define UVD_LMI_MC_CREDITS__UMC_WR_CREDITS__SHIFT                                                             0x18
#define UVD_LMI_MC_CREDITS__UVD_RD_CREDITS_MASK                                                               0x0000003FL
#define UVD_LMI_MC_CREDITS__UVD_WR_CREDITS_MASK                                                               0x00003F00L
#define UVD_LMI_MC_CREDITS__UMC_RD_CREDITS_MASK                                                               0x003F0000L
#define UVD_LMI_MC_CREDITS__UMC_WR_CREDITS_MASK                                                               0x3F000000L
//UVD_LMI_ADP_IND_INDEX
#define UVD_LMI_ADP_IND_INDEX__INDEX__SHIFT                                                                   0x0
#define UVD_LMI_ADP_IND_INDEX__INDEX_MASK                                                                     0x00001FFFL
//UVD_LMI_ADP_IND_DATA
#define UVD_LMI_ADP_IND_DATA__DATA__SHIFT                                                                     0x0
#define UVD_LMI_ADP_IND_DATA__DATA_MASK                                                                       0xFFFFFFFFL
//UVD_LMI_PREF_CTRL
#define UVD_LMI_PREF_CTRL__PREF_RST__SHIFT                                                                    0x0
#define UVD_LMI_PREF_CTRL__PREF_BUSY_STATUS__SHIFT                                                            0x1
#define UVD_LMI_PREF_CTRL__PREF_WSTRB__SHIFT                                                                  0x2
#define UVD_LMI_PREF_CTRL__PREF_WRITE_SIZE__SHIFT                                                             0x3
#define UVD_LMI_PREF_CTRL__PREF_STEP_SIZE__SHIFT                                                              0x4
#define UVD_LMI_PREF_CTRL__PREF_SIZE__SHIFT                                                                   0x13
#define UVD_LMI_PREF_CTRL__PREF_RST_MASK                                                                      0x00000001L
#define UVD_LMI_PREF_CTRL__PREF_BUSY_STATUS_MASK                                                              0x00000002L
#define UVD_LMI_PREF_CTRL__PREF_WSTRB_MASK                                                                    0x00000004L
#define UVD_LMI_PREF_CTRL__PREF_WRITE_SIZE_MASK                                                               0x00000008L
#define UVD_LMI_PREF_CTRL__PREF_STEP_SIZE_MASK                                                                0x00000070L
#define UVD_LMI_PREF_CTRL__PREF_SIZE_MASK                                                                     0xFFF80000L
//UVD_LMI_MIF_REF_LUMA_64BIT_BAR_LOW
#define UVD_LMI_MIF_REF_LUMA_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                  0x0
#define UVD_LMI_MIF_REF_LUMA_64BIT_BAR_LOW__BITS_31_0_MASK                                                    0xFFFFFFFFL
//UVD_LMI_MIF_REF_LUMA_64BIT_BAR_HIGH
#define UVD_LMI_MIF_REF_LUMA_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                0x0
#define UVD_LMI_MIF_REF_LUMA_64BIT_BAR_HIGH__BITS_63_32_MASK                                                  0xFFFFFFFFL
//VCN_RAS_CNTL
#define VCN_RAS_CNTL__VCPU_VCODEC_IH_EN__SHIFT                                                                0x0
#define VCN_RAS_CNTL__VCPU_VCODEC_PMI_EN__SHIFT                                                               0x4
#define VCN_RAS_CNTL__VCPU_VCODEC_REARM__SHIFT                                                                0x8
#define VCN_RAS_CNTL__VCPU_VCODEC_STALL_EN__SHIFT                                                             0xc
#define VCN_RAS_CNTL__VCPU_VCODEC_READY__SHIFT                                                                0x10
#define VCN_RAS_CNTL__VCPU_VCODEC_IH_EN_MASK                                                                  0x00000001L
#define VCN_RAS_CNTL__VCPU_VCODEC_PMI_EN_MASK                                                                 0x00000010L
#define VCN_RAS_CNTL__VCPU_VCODEC_REARM_MASK                                                                  0x00000100L
#define VCN_RAS_CNTL__VCPU_VCODEC_STALL_EN_MASK                                                               0x00001000L
#define VCN_RAS_CNTL__VCPU_VCODEC_READY_MASK                                                                  0x00010000L


// addressBlock: uvd0_jpegnpdec
//UVD_JPEG_CNTL
#define UVD_JPEG_CNTL__REQUEST_EN__SHIFT                                                                      0x1
#define UVD_JPEG_CNTL__ERR_RST_EN__SHIFT                                                                      0x2
#define UVD_JPEG_CNTL__REQUEST_EN_MASK                                                                        0x00000002L
#define UVD_JPEG_CNTL__ERR_RST_EN_MASK                                                                        0x00000004L
//UVD_JPEG_RB_BASE
#define UVD_JPEG_RB_BASE__RB_BYTE_OFF__SHIFT                                                                  0x0
#define UVD_JPEG_RB_BASE__RB_BASE__SHIFT                                                                      0x6
#define UVD_JPEG_RB_BASE__RB_BYTE_OFF_MASK                                                                    0x0000003FL
#define UVD_JPEG_RB_BASE__RB_BASE_MASK                                                                        0xFFFFFFC0L
//UVD_JPEG_RB_WPTR
#define UVD_JPEG_RB_WPTR__RB_WPTR__SHIFT                                                                      0x4
#define UVD_JPEG_RB_WPTR__RB_WPTR_MASK                                                                        0x3FFFFFF0L
//UVD_JPEG_RB_RPTR
#define UVD_JPEG_RB_RPTR__RB_RPTR__SHIFT                                                                      0x4
#define UVD_JPEG_RB_RPTR__RB_RPTR_MASK                                                                        0x3FFFFFF0L
//UVD_JPEG_RB_SIZE
#define UVD_JPEG_RB_SIZE__RB_SIZE__SHIFT                                                                      0x4
#define UVD_JPEG_RB_SIZE__RB_SIZE_MASK                                                                        0x3FFFFFF0L
//UVD_JPEG_DEC_CNT
#define UVD_JPEG_DEC_CNT__DECODE_COUNT__SHIFT                                                                 0x0
#define UVD_JPEG_DEC_CNT__DECODE_COUNT_MASK                                                                   0xFFFFFFFFL
//UVD_JPEG_SPS_INFO
#define UVD_JPEG_SPS_INFO__PIC_WIDTH__SHIFT                                                                   0x0
#define UVD_JPEG_SPS_INFO__PIC_HEIGHT__SHIFT                                                                  0x10
#define UVD_JPEG_SPS_INFO__PIC_WIDTH_MASK                                                                     0x0000FFFFL
#define UVD_JPEG_SPS_INFO__PIC_HEIGHT_MASK                                                                    0xFFFF0000L
//UVD_JPEG_SPS1_INFO
#define UVD_JPEG_SPS1_INFO__CHROMA_FORMAT_IDC__SHIFT                                                          0x0
#define UVD_JPEG_SPS1_INFO__YUV422_SUBFORMAT__SHIFT                                                           0x3
#define UVD_JPEG_SPS1_INFO__OUT_FMT_422__SHIFT                                                                0x4
#define UVD_JPEG_SPS1_INFO__CHROMA_FORMAT_IDC_MASK                                                            0x00000007L
#define UVD_JPEG_SPS1_INFO__YUV422_SUBFORMAT_MASK                                                             0x00000008L
#define UVD_JPEG_SPS1_INFO__OUT_FMT_422_MASK                                                                  0x00000010L
//UVD_JPEG_RE_TIMER
#define UVD_JPEG_RE_TIMER__TIMER_OUT__SHIFT                                                                   0x0
#define UVD_JPEG_RE_TIMER__TIMER_OUT_EN__SHIFT                                                                0x10
#define UVD_JPEG_RE_TIMER__TIMER_OUT_MASK                                                                     0x000000FFL
#define UVD_JPEG_RE_TIMER__TIMER_OUT_EN_MASK                                                                  0x00010000L
//UVD_JPEG_DEC_SCRATCH0
#define UVD_JPEG_DEC_SCRATCH0__SCRATCH0__SHIFT                                                                0x0
#define UVD_JPEG_DEC_SCRATCH0__SCRATCH0_MASK                                                                  0xFFFFFFFFL
//UVD_JPEG_INT_EN
#define UVD_JPEG_INT_EN__OUTBUF_WPTR_INC_EN__SHIFT                                                            0x0
#define UVD_JPEG_INT_EN__JOB_AVAIL_EN__SHIFT                                                                  0x1
#define UVD_JPEG_INT_EN__FENCE_VAL_EN__SHIFT                                                                  0x2
#define UVD_JPEG_INT_EN__FIFO_OVERFLOW_ERR_EN__SHIFT                                                          0x6
#define UVD_JPEG_INT_EN__BLK_CNT_OUT_OF_SYNC_ERR_EN__SHIFT                                                    0x7
#define UVD_JPEG_INT_EN__EOI_ERR_EN__SHIFT                                                                    0x8
#define UVD_JPEG_INT_EN__HFM_ERR_EN__SHIFT                                                                    0x9
#define UVD_JPEG_INT_EN__RST_ERR_EN__SHIFT                                                                    0xa
#define UVD_JPEG_INT_EN__ECS_MK_ERR_EN__SHIFT                                                                 0xb
#define UVD_JPEG_INT_EN__TIMEOUT_ERR_EN__SHIFT                                                                0xc
#define UVD_JPEG_INT_EN__MARKER_ERR_EN__SHIFT                                                                 0xd
#define UVD_JPEG_INT_EN__FMT_ERR_EN__SHIFT                                                                    0xe
#define UVD_JPEG_INT_EN__PROFILE_ERR_EN__SHIFT                                                                0xf
#define UVD_JPEG_INT_EN__OUTBUF_WPTR_INC_EN_MASK                                                              0x00000001L
#define UVD_JPEG_INT_EN__JOB_AVAIL_EN_MASK                                                                    0x00000002L
#define UVD_JPEG_INT_EN__FENCE_VAL_EN_MASK                                                                    0x00000004L
#define UVD_JPEG_INT_EN__FIFO_OVERFLOW_ERR_EN_MASK                                                            0x00000040L
#define UVD_JPEG_INT_EN__BLK_CNT_OUT_OF_SYNC_ERR_EN_MASK                                                      0x00000080L
#define UVD_JPEG_INT_EN__EOI_ERR_EN_MASK                                                                      0x00000100L
#define UVD_JPEG_INT_EN__HFM_ERR_EN_MASK                                                                      0x00000200L
#define UVD_JPEG_INT_EN__RST_ERR_EN_MASK                                                                      0x00000400L
#define UVD_JPEG_INT_EN__ECS_MK_ERR_EN_MASK                                                                   0x00000800L
#define UVD_JPEG_INT_EN__TIMEOUT_ERR_EN_MASK                                                                  0x00001000L
#define UVD_JPEG_INT_EN__MARKER_ERR_EN_MASK                                                                   0x00002000L
#define UVD_JPEG_INT_EN__FMT_ERR_EN_MASK                                                                      0x00004000L
#define UVD_JPEG_INT_EN__PROFILE_ERR_EN_MASK                                                                  0x00008000L
//UVD_JPEG_INT_STAT
#define UVD_JPEG_INT_STAT__OUTBUF_WPTR_INC_INT__SHIFT                                                         0x0
#define UVD_JPEG_INT_STAT__JOB_AVAIL_INT__SHIFT                                                               0x1
#define UVD_JPEG_INT_STAT__FENCE_VAL_INT__SHIFT                                                               0x2
#define UVD_JPEG_INT_STAT__FIFO_OVERFLOW_ERR_INT__SHIFT                                                       0x6
#define UVD_JPEG_INT_STAT__BLK_CNT_OUT_OF_SYNC_ERR_INT__SHIFT                                                 0x7
#define UVD_JPEG_INT_STAT__EOI_ERR_INT__SHIFT                                                                 0x8
#define UVD_JPEG_INT_STAT__HFM_ERR_INT__SHIFT                                                                 0x9
#define UVD_JPEG_INT_STAT__RST_ERR_INT__SHIFT                                                                 0xa
#define UVD_JPEG_INT_STAT__ECS_MK_ERR_INT__SHIFT                                                              0xb
#define UVD_JPEG_INT_STAT__TIMEOUT_ERR_INT__SHIFT                                                             0xc
#define UVD_JPEG_INT_STAT__MARKER_ERR_INT__SHIFT                                                              0xd
#define UVD_JPEG_INT_STAT__FMT_ERR_INT__SHIFT                                                                 0xe
#define UVD_JPEG_INT_STAT__PROFILE_ERR_INT__SHIFT                                                             0xf
#define UVD_JPEG_INT_STAT__OUTBUF_WPTR_INC_INT_MASK                                                           0x00000001L
#define UVD_JPEG_INT_STAT__JOB_AVAIL_INT_MASK                                                                 0x00000002L
#define UVD_JPEG_INT_STAT__FENCE_VAL_INT_MASK                                                                 0x00000004L
#define UVD_JPEG_INT_STAT__FIFO_OVERFLOW_ERR_INT_MASK                                                         0x00000040L
#define UVD_JPEG_INT_STAT__BLK_CNT_OUT_OF_SYNC_ERR_INT_MASK                                                   0x00000080L
#define UVD_JPEG_INT_STAT__EOI_ERR_INT_MASK                                                                   0x00000100L
#define UVD_JPEG_INT_STAT__HFM_ERR_INT_MASK                                                                   0x00000200L
#define UVD_JPEG_INT_STAT__RST_ERR_INT_MASK                                                                   0x00000400L
#define UVD_JPEG_INT_STAT__ECS_MK_ERR_INT_MASK                                                                0x00000800L
#define UVD_JPEG_INT_STAT__TIMEOUT_ERR_INT_MASK                                                               0x00001000L
#define UVD_JPEG_INT_STAT__MARKER_ERR_INT_MASK                                                                0x00002000L
#define UVD_JPEG_INT_STAT__FMT_ERR_INT_MASK                                                                   0x00004000L
#define UVD_JPEG_INT_STAT__PROFILE_ERR_INT_MASK                                                               0x00008000L
//UVD_JPEG_TIER_CNTL0
#define UVD_JPEG_TIER_CNTL0__TIER_SEL__SHIFT                                                                  0x0
#define UVD_JPEG_TIER_CNTL0__Y_COMP_ID__SHIFT                                                                 0x2
#define UVD_JPEG_TIER_CNTL0__U_COMP_ID__SHIFT                                                                 0x4
#define UVD_JPEG_TIER_CNTL0__V_COMP_ID__SHIFT                                                                 0x6
#define UVD_JPEG_TIER_CNTL0__Y_H_SAMP_FAC__SHIFT                                                              0x8
#define UVD_JPEG_TIER_CNTL0__Y_V_SAMP_FAC__SHIFT                                                              0xb
#define UVD_JPEG_TIER_CNTL0__U_H_SAMP_FAC__SHIFT                                                              0xe
#define UVD_JPEG_TIER_CNTL0__U_V_SAMP_FAC__SHIFT                                                              0x11
#define UVD_JPEG_TIER_CNTL0__V_H_SAMP_FAC__SHIFT                                                              0x14
#define UVD_JPEG_TIER_CNTL0__V_V_SAMP_FAC__SHIFT                                                              0x17
#define UVD_JPEG_TIER_CNTL0__Y_TQ__SHIFT                                                                      0x1a
#define UVD_JPEG_TIER_CNTL0__U_TQ__SHIFT                                                                      0x1c
#define UVD_JPEG_TIER_CNTL0__V_TQ__SHIFT                                                                      0x1e
#define UVD_JPEG_TIER_CNTL0__TIER_SEL_MASK                                                                    0x00000003L
#define UVD_JPEG_TIER_CNTL0__Y_COMP_ID_MASK                                                                   0x0000000CL
#define UVD_JPEG_TIER_CNTL0__U_COMP_ID_MASK                                                                   0x00000030L
#define UVD_JPEG_TIER_CNTL0__V_COMP_ID_MASK                                                                   0x000000C0L
#define UVD_JPEG_TIER_CNTL0__Y_H_SAMP_FAC_MASK                                                                0x00000700L
#define UVD_JPEG_TIER_CNTL0__Y_V_SAMP_FAC_MASK                                                                0x00003800L
#define UVD_JPEG_TIER_CNTL0__U_H_SAMP_FAC_MASK                                                                0x0001C000L
#define UVD_JPEG_TIER_CNTL0__U_V_SAMP_FAC_MASK                                                                0x000E0000L
#define UVD_JPEG_TIER_CNTL0__V_H_SAMP_FAC_MASK                                                                0x00700000L
#define UVD_JPEG_TIER_CNTL0__V_V_SAMP_FAC_MASK                                                                0x03800000L
#define UVD_JPEG_TIER_CNTL0__Y_TQ_MASK                                                                        0x0C000000L
#define UVD_JPEG_TIER_CNTL0__U_TQ_MASK                                                                        0x30000000L
#define UVD_JPEG_TIER_CNTL0__V_TQ_MASK                                                                        0xC0000000L
//UVD_JPEG_TIER_CNTL1
#define UVD_JPEG_TIER_CNTL1__SRC_WIDTH__SHIFT                                                                 0x0
#define UVD_JPEG_TIER_CNTL1__SRC_HEIGHT__SHIFT                                                                0x10
#define UVD_JPEG_TIER_CNTL1__SRC_WIDTH_MASK                                                                   0x0000FFFFL
#define UVD_JPEG_TIER_CNTL1__SRC_HEIGHT_MASK                                                                  0xFFFF0000L
//UVD_JPEG_TIER_CNTL2
#define UVD_JPEG_TIER_CNTL2__TBL_ECS_SEL__SHIFT                                                               0x0
#define UVD_JPEG_TIER_CNTL2__TBL_TYPE__SHIFT                                                                  0x1
#define UVD_JPEG_TIER_CNTL2__TQ__SHIFT                                                                        0x2
#define UVD_JPEG_TIER_CNTL2__TH__SHIFT                                                                        0x4
#define UVD_JPEG_TIER_CNTL2__TC__SHIFT                                                                        0x6
#define UVD_JPEG_TIER_CNTL2__TD__SHIFT                                                                        0x7
#define UVD_JPEG_TIER_CNTL2__TA__SHIFT                                                                        0xa
#define UVD_JPEG_TIER_CNTL2__TIER2_HTBL_CNTLEN__SHIFT                                                         0xe
#define UVD_JPEG_TIER_CNTL2__DRI_VAL__SHIFT                                                                   0x10
#define UVD_JPEG_TIER_CNTL2__TBL_ECS_SEL_MASK                                                                 0x00000001L
#define UVD_JPEG_TIER_CNTL2__TBL_TYPE_MASK                                                                    0x00000002L
#define UVD_JPEG_TIER_CNTL2__TQ_MASK                                                                          0x0000000CL
#define UVD_JPEG_TIER_CNTL2__TH_MASK                                                                          0x00000030L
#define UVD_JPEG_TIER_CNTL2__TC_MASK                                                                          0x00000040L
#define UVD_JPEG_TIER_CNTL2__TD_MASK                                                                          0x00000380L
#define UVD_JPEG_TIER_CNTL2__TA_MASK                                                                          0x00001C00L
#define UVD_JPEG_TIER_CNTL2__TIER2_HTBL_CNTLEN_MASK                                                           0x00004000L
#define UVD_JPEG_TIER_CNTL2__DRI_VAL_MASK                                                                     0xFFFF0000L
//UVD_JPEG_TIER_STATUS
#define UVD_JPEG_TIER_STATUS__BSI_FETCH_DONE__SHIFT                                                           0x0
#define UVD_JPEG_TIER_STATUS__DECODE_DONE__SHIFT                                                              0x1
#define UVD_JPEG_TIER_STATUS__BSI_FETCH_DONE_MASK                                                             0x00000001L
#define UVD_JPEG_TIER_STATUS__DECODE_DONE_MASK                                                                0x00000002L
//UVD_JPEG_OUTBUF_CNTL
#define UVD_JPEG_OUTBUF_CNTL__OUTBUF_CNT__SHIFT                                                               0x0
#define UVD_JPEG_OUTBUF_CNTL__HGT_ALIGN__SHIFT                                                                0x2
#define UVD_JPEG_OUTBUF_CNTL__JPEG0_DECODE_DONE_FIX__SHIFT                                                    0x6
#define UVD_JPEG_OUTBUF_CNTL__JPEG0_WR_COMB_MAX_CNT__SHIFT                                                    0x7
#define UVD_JPEG_OUTBUF_CNTL__JPEG0_WR_COMB_TIMER__SHIFT                                                      0x9
#define UVD_JPEG_OUTBUF_CNTL__OUTBUF_CNT_MASK                                                                 0x00000003L
#define UVD_JPEG_OUTBUF_CNTL__HGT_ALIGN_MASK                                                                  0x00000004L
#define UVD_JPEG_OUTBUF_CNTL__JPEG0_DECODE_DONE_FIX_MASK                                                      0x00000040L
#define UVD_JPEG_OUTBUF_CNTL__JPEG0_WR_COMB_MAX_CNT_MASK                                                      0x00000180L
#define UVD_JPEG_OUTBUF_CNTL__JPEG0_WR_COMB_TIMER_MASK                                                        0x00001E00L
//UVD_JPEG_OUTBUF_WPTR
#define UVD_JPEG_OUTBUF_WPTR__OUTBUF_WPTR__SHIFT                                                              0x0
#define UVD_JPEG_OUTBUF_WPTR__OUTBUF_WPTR_MASK                                                                0xFFFFFFFFL
//UVD_JPEG_OUTBUF_RPTR
#define UVD_JPEG_OUTBUF_RPTR__OUTBUF_RPTR__SHIFT                                                              0x0
#define UVD_JPEG_OUTBUF_RPTR__OUTBUF_RPTR_MASK                                                                0xFFFFFFFFL
//UVD_JPEG_PITCH
#define UVD_JPEG_PITCH__PITCH__SHIFT                                                                          0x0
#define UVD_JPEG_PITCH__PITCH_MASK                                                                            0xFFFFFFFFL
//UVD_JPEG_UV_PITCH
#define UVD_JPEG_UV_PITCH__UV_PITCH__SHIFT                                                                    0x0
#define UVD_JPEG_UV_PITCH__UV_PITCH_MASK                                                                      0xFFFFFFFFL
//JPEG_DEC_Y_GFX8_TILING_SURFACE
#define JPEG_DEC_Y_GFX8_TILING_SURFACE__BANK_WIDTH__SHIFT                                                     0x0
#define JPEG_DEC_Y_GFX8_TILING_SURFACE__BANK_HEIGHT__SHIFT                                                    0x2
#define JPEG_DEC_Y_GFX8_TILING_SURFACE__MACRO_TILE_ASPECT__SHIFT                                              0x4
#define JPEG_DEC_Y_GFX8_TILING_SURFACE__NUM_BANKS__SHIFT                                                      0x6
#define JPEG_DEC_Y_GFX8_TILING_SURFACE__PIPE_CONFIG__SHIFT                                                    0x8
#define JPEG_DEC_Y_GFX8_TILING_SURFACE__TILE_SPLIT__SHIFT                                                     0xd
#define JPEG_DEC_Y_GFX8_TILING_SURFACE__ARRAY_MODE__SHIFT                                                     0x10
#define JPEG_DEC_Y_GFX8_TILING_SURFACE__BANK_WIDTH_MASK                                                       0x00000003L
#define JPEG_DEC_Y_GFX8_TILING_SURFACE__BANK_HEIGHT_MASK                                                      0x0000000CL
#define JPEG_DEC_Y_GFX8_TILING_SURFACE__MACRO_TILE_ASPECT_MASK                                                0x00000030L
#define JPEG_DEC_Y_GFX8_TILING_SURFACE__NUM_BANKS_MASK                                                        0x000000C0L
#define JPEG_DEC_Y_GFX8_TILING_SURFACE__PIPE_CONFIG_MASK                                                      0x00001F00L
#define JPEG_DEC_Y_GFX8_TILING_SURFACE__TILE_SPLIT_MASK                                                       0x0000E000L
#define JPEG_DEC_Y_GFX8_TILING_SURFACE__ARRAY_MODE_MASK                                                       0x000F0000L
//JPEG_DEC_UV_GFX8_TILING_SURFACE
#define JPEG_DEC_UV_GFX8_TILING_SURFACE__BANK_WIDTH__SHIFT                                                    0x0
#define JPEG_DEC_UV_GFX8_TILING_SURFACE__BANK_HEIGHT__SHIFT                                                   0x2
#define JPEG_DEC_UV_GFX8_TILING_SURFACE__MACRO_TILE_ASPECT__SHIFT                                             0x4
#define JPEG_DEC_UV_GFX8_TILING_SURFACE__NUM_BANKS__SHIFT                                                     0x6
#define JPEG_DEC_UV_GFX8_TILING_SURFACE__PIPE_CONFIG__SHIFT                                                   0x8
#define JPEG_DEC_UV_GFX8_TILING_SURFACE__TILE_SPLIT__SHIFT                                                    0xd
#define JPEG_DEC_UV_GFX8_TILING_SURFACE__ARRAY_MODE__SHIFT                                                    0x10
#define JPEG_DEC_UV_GFX8_TILING_SURFACE__BANK_WIDTH_MASK                                                      0x00000003L
#define JPEG_DEC_UV_GFX8_TILING_SURFACE__BANK_HEIGHT_MASK                                                     0x0000000CL
#define JPEG_DEC_UV_GFX8_TILING_SURFACE__MACRO_TILE_ASPECT_MASK                                               0x00000030L
#define JPEG_DEC_UV_GFX8_TILING_SURFACE__NUM_BANKS_MASK                                                       0x000000C0L
#define JPEG_DEC_UV_GFX8_TILING_SURFACE__PIPE_CONFIG_MASK                                                     0x00001F00L
#define JPEG_DEC_UV_GFX8_TILING_SURFACE__TILE_SPLIT_MASK                                                      0x0000E000L
#define JPEG_DEC_UV_GFX8_TILING_SURFACE__ARRAY_MODE_MASK                                                      0x000F0000L
//JPEG_DEC_GFX8_ADDR_CONFIG
#define JPEG_DEC_GFX8_ADDR_CONFIG__PIPE_INTERLEAVE_SIZE__SHIFT                                                0x4
#define JPEG_DEC_GFX8_ADDR_CONFIG__PIPE_INTERLEAVE_SIZE_MASK                                                  0x00000070L
//JPEG_DEC_Y_GFX10_TILING_SURFACE
#define JPEG_DEC_Y_GFX10_TILING_SURFACE__SWIZZLE_MODE__SHIFT                                                  0x0
#define JPEG_DEC_Y_GFX10_TILING_SURFACE__SWIZZLE_MODE_MASK                                                    0x0000001FL
//JPEG_DEC_UV_GFX10_TILING_SURFACE
#define JPEG_DEC_UV_GFX10_TILING_SURFACE__SWIZZLE_MODE__SHIFT                                                 0x0
#define JPEG_DEC_UV_GFX10_TILING_SURFACE__SWIZZLE_MODE_MASK                                                   0x0000001FL
//JPEG_DEC_GFX10_ADDR_CONFIG
#define JPEG_DEC_GFX10_ADDR_CONFIG__NUM_PIPES__SHIFT                                                          0x0
#define JPEG_DEC_GFX10_ADDR_CONFIG__PIPE_INTERLEAVE_SIZE__SHIFT                                               0x3
#define JPEG_DEC_GFX10_ADDR_CONFIG__NUM_PKRS__SHIFT                                                           0x8
#define JPEG_DEC_GFX10_ADDR_CONFIG__NUM_BANKS__SHIFT                                                          0xc
#define JPEG_DEC_GFX10_ADDR_CONFIG__NUM_SHADER_ENGINES__SHIFT                                                 0x13
#define JPEG_DEC_GFX10_ADDR_CONFIG__NUM_PIPES_MASK                                                            0x00000007L
#define JPEG_DEC_GFX10_ADDR_CONFIG__PIPE_INTERLEAVE_SIZE_MASK                                                 0x00000038L
#define JPEG_DEC_GFX10_ADDR_CONFIG__NUM_PKRS_MASK                                                             0x00000700L
#define JPEG_DEC_GFX10_ADDR_CONFIG__NUM_BANKS_MASK                                                            0x00007000L
#define JPEG_DEC_GFX10_ADDR_CONFIG__NUM_SHADER_ENGINES_MASK                                                   0x00180000L
//JPEG_DEC_ADDR_MODE
#define JPEG_DEC_ADDR_MODE__ADDR_MODE_Y__SHIFT                                                                0x0
#define JPEG_DEC_ADDR_MODE__ADDR_MODE_UV__SHIFT                                                               0x2
#define JPEG_DEC_ADDR_MODE__ADDR_LIB_SEL__SHIFT                                                               0xc
#define JPEG_DEC_ADDR_MODE__ADDR_MODE_Y_MASK                                                                  0x00000003L
#define JPEG_DEC_ADDR_MODE__ADDR_MODE_UV_MASK                                                                 0x0000000CL
#define JPEG_DEC_ADDR_MODE__ADDR_LIB_SEL_MASK                                                                 0x00007000L
//UVD_JPEG_OUTPUT_XY
#define UVD_JPEG_OUTPUT_XY__OUTPUT_X__SHIFT                                                                   0x0
#define UVD_JPEG_OUTPUT_XY__OUTPUT_Y__SHIFT                                                                   0x10
#define UVD_JPEG_OUTPUT_XY__OUTPUT_X_MASK                                                                     0x00003FFFL
#define UVD_JPEG_OUTPUT_XY__OUTPUT_Y_MASK                                                                     0x3FFF0000L
//UVD_JPEG_GPCOM_CMD
#define UVD_JPEG_GPCOM_CMD__CMD__SHIFT                                                                        0x1
#define UVD_JPEG_GPCOM_CMD__CMD_MASK                                                                          0x0000000EL
//UVD_JPEG_GPCOM_DATA0
#define UVD_JPEG_GPCOM_DATA0__DATA0__SHIFT                                                                    0x0
#define UVD_JPEG_GPCOM_DATA0__DATA0_MASK                                                                      0xFFFFFFFFL
//UVD_JPEG_GPCOM_DATA1
#define UVD_JPEG_GPCOM_DATA1__DATA1__SHIFT                                                                    0x0
#define UVD_JPEG_GPCOM_DATA1__DATA1_MASK                                                                      0xFFFFFFFFL
//UVD_JPEG_INDEX
#define UVD_JPEG_INDEX__INDEX__SHIFT                                                                          0x0
#define UVD_JPEG_INDEX__INDEX_MASK                                                                            0x000001FFL
//UVD_JPEG_DATA
#define UVD_JPEG_DATA__DATA__SHIFT                                                                            0x0
#define UVD_JPEG_DATA__DATA_MASK                                                                              0xFFFFFFFFL
//UVD_JPEG_SCRATCH1
#define UVD_JPEG_SCRATCH1__SCRATCH1__SHIFT                                                                    0x0
#define UVD_JPEG_SCRATCH1__SCRATCH1_MASK                                                                      0xFFFFFFFFL
//UVD_JPEG_DEC_SOFT_RST
#define UVD_JPEG_DEC_SOFT_RST__SOFT_RESET__SHIFT                                                              0x0
#define UVD_JPEG_DEC_SOFT_RST__RESET_STATUS__SHIFT                                                            0x10
#define UVD_JPEG_DEC_SOFT_RST__SOFT_RESET_MASK                                                                0x00000001L
#define UVD_JPEG_DEC_SOFT_RST__RESET_STATUS_MASK                                                              0x00010000L


// addressBlock: uvd0_uvd_jrbc_dec
//UVD_JRBC_RB_WPTR
#define UVD_JRBC_RB_WPTR__RB_WPTR__SHIFT                                                                      0x4
#define UVD_JRBC_RB_WPTR__RB_WPTR_MASK                                                                        0x007FFFF0L
//UVD_JRBC_RB_CNTL
#define UVD_JRBC_RB_CNTL__RB_NO_FETCH__SHIFT                                                                  0x0
#define UVD_JRBC_RB_CNTL__RB_RPTR_WR_EN__SHIFT                                                                0x1
#define UVD_JRBC_RB_CNTL__RB_PRE_WRITE_TIMER__SHIFT                                                           0x4
#define UVD_JRBC_RB_CNTL__RB_NO_FETCH_MASK                                                                    0x00000001L
#define UVD_JRBC_RB_CNTL__RB_RPTR_WR_EN_MASK                                                                  0x00000002L
#define UVD_JRBC_RB_CNTL__RB_PRE_WRITE_TIMER_MASK                                                             0x0007FFF0L
//UVD_JRBC_IB_SIZE
#define UVD_JRBC_IB_SIZE__IB_SIZE__SHIFT                                                                      0x4
#define UVD_JRBC_IB_SIZE__IB_SIZE_MASK                                                                        0x007FFFF0L
//UVD_JRBC_URGENT_CNTL
#define UVD_JRBC_URGENT_CNTL__CMD_READ_REQ_PRIORITY_MARK__SHIFT                                               0x0
#define UVD_JRBC_URGENT_CNTL__CMD_READ_REQ_PRIORITY_MARK_MASK                                                 0x00000003L
//UVD_JRBC_RB_REF_DATA
#define UVD_JRBC_RB_REF_DATA__REF_DATA__SHIFT                                                                 0x0
#define UVD_JRBC_RB_REF_DATA__REF_DATA_MASK                                                                   0xFFFFFFFFL
//UVD_JRBC_RB_COND_RD_TIMER
#define UVD_JRBC_RB_COND_RD_TIMER__RETRY_TIMER_CNT__SHIFT                                                     0x0
#define UVD_JRBC_RB_COND_RD_TIMER__RETRY_INTERVAL_CNT__SHIFT                                                  0x10
#define UVD_JRBC_RB_COND_RD_TIMER__CONTINUOUS_POLL_EN__SHIFT                                                  0x18
#define UVD_JRBC_RB_COND_RD_TIMER__MEM_TIMEOUT_EN__SHIFT                                                      0x19
#define UVD_JRBC_RB_COND_RD_TIMER__RETRY_TIMER_CNT_MASK                                                       0x0000FFFFL
#define UVD_JRBC_RB_COND_RD_TIMER__RETRY_INTERVAL_CNT_MASK                                                    0x00FF0000L
#define UVD_JRBC_RB_COND_RD_TIMER__CONTINUOUS_POLL_EN_MASK                                                    0x01000000L
#define UVD_JRBC_RB_COND_RD_TIMER__MEM_TIMEOUT_EN_MASK                                                        0x02000000L
//UVD_JRBC_SOFT_RESET
#define UVD_JRBC_SOFT_RESET__RESET__SHIFT                                                                     0x0
#define UVD_JRBC_SOFT_RESET__SCLK_RESET_STATUS__SHIFT                                                         0x11
#define UVD_JRBC_SOFT_RESET__RESET_MASK                                                                       0x00000001L
#define UVD_JRBC_SOFT_RESET__SCLK_RESET_STATUS_MASK                                                           0x00020000L
//UVD_JRBC_STATUS
#define UVD_JRBC_STATUS__RB_JOB_DONE__SHIFT                                                                   0x0
#define UVD_JRBC_STATUS__IB_JOB_DONE__SHIFT                                                                   0x1
#define UVD_JRBC_STATUS__RB_ILLEGAL_CMD__SHIFT                                                                0x2
#define UVD_JRBC_STATUS__RB_COND_REG_RD_TIMEOUT__SHIFT                                                        0x3
#define UVD_JRBC_STATUS__RB_MEM_WR_TIMEOUT__SHIFT                                                             0x4
#define UVD_JRBC_STATUS__RB_MEM_RD_TIMEOUT__SHIFT                                                             0x5
#define UVD_JRBC_STATUS__IB_ILLEGAL_CMD__SHIFT                                                                0x6
#define UVD_JRBC_STATUS__IB_COND_REG_RD_TIMEOUT__SHIFT                                                        0x7
#define UVD_JRBC_STATUS__IB_MEM_WR_TIMEOUT__SHIFT                                                             0x8
#define UVD_JRBC_STATUS__IB_MEM_RD_TIMEOUT__SHIFT                                                             0x9
#define UVD_JRBC_STATUS__RB_TRAP_STATUS__SHIFT                                                                0xa
#define UVD_JRBC_STATUS__PREEMPT_STATUS__SHIFT                                                                0xb
#define UVD_JRBC_STATUS__IB_TRAP_STATUS__SHIFT                                                                0xc
#define UVD_JRBC_STATUS__INT_EN__SHIFT                                                                        0x10
#define UVD_JRBC_STATUS__INT_ACK__SHIFT                                                                       0x11
#define UVD_JRBC_STATUS__RB_JOB_DONE_MASK                                                                     0x00000001L
#define UVD_JRBC_STATUS__IB_JOB_DONE_MASK                                                                     0x00000002L
#define UVD_JRBC_STATUS__RB_ILLEGAL_CMD_MASK                                                                  0x00000004L
#define UVD_JRBC_STATUS__RB_COND_REG_RD_TIMEOUT_MASK                                                          0x00000008L
#define UVD_JRBC_STATUS__RB_MEM_WR_TIMEOUT_MASK                                                               0x00000010L
#define UVD_JRBC_STATUS__RB_MEM_RD_TIMEOUT_MASK                                                               0x00000020L
#define UVD_JRBC_STATUS__IB_ILLEGAL_CMD_MASK                                                                  0x00000040L
#define UVD_JRBC_STATUS__IB_COND_REG_RD_TIMEOUT_MASK                                                          0x00000080L
#define UVD_JRBC_STATUS__IB_MEM_WR_TIMEOUT_MASK                                                               0x00000100L
#define UVD_JRBC_STATUS__IB_MEM_RD_TIMEOUT_MASK                                                               0x00000200L
#define UVD_JRBC_STATUS__RB_TRAP_STATUS_MASK                                                                  0x00000400L
#define UVD_JRBC_STATUS__PREEMPT_STATUS_MASK                                                                  0x00000800L
#define UVD_JRBC_STATUS__IB_TRAP_STATUS_MASK                                                                  0x00001000L
#define UVD_JRBC_STATUS__INT_EN_MASK                                                                          0x00010000L
#define UVD_JRBC_STATUS__INT_ACK_MASK                                                                         0x00020000L
//UVD_JRBC_RB_RPTR
#define UVD_JRBC_RB_RPTR__RB_RPTR__SHIFT                                                                      0x4
#define UVD_JRBC_RB_RPTR__RB_RPTR_MASK                                                                        0x007FFFF0L
//UVD_JRBC_RB_BUF_STATUS
#define UVD_JRBC_RB_BUF_STATUS__RB_BUF_VALID__SHIFT                                                           0x0
#define UVD_JRBC_RB_BUF_STATUS__RB_BUF_RD_ADDR__SHIFT                                                         0x10
#define UVD_JRBC_RB_BUF_STATUS__RB_BUF_WR_ADDR__SHIFT                                                         0x18
#define UVD_JRBC_RB_BUF_STATUS__RB_BUF_VALID_MASK                                                             0x0000FFFFL
#define UVD_JRBC_RB_BUF_STATUS__RB_BUF_RD_ADDR_MASK                                                           0x000F0000L
#define UVD_JRBC_RB_BUF_STATUS__RB_BUF_WR_ADDR_MASK                                                           0x03000000L
//UVD_JRBC_IB_BUF_STATUS
#define UVD_JRBC_IB_BUF_STATUS__IB_BUF_VALID__SHIFT                                                           0x0
#define UVD_JRBC_IB_BUF_STATUS__IB_BUF_RD_ADDR__SHIFT                                                         0x10
#define UVD_JRBC_IB_BUF_STATUS__IB_BUF_WR_ADDR__SHIFT                                                         0x18
#define UVD_JRBC_IB_BUF_STATUS__IB_BUF_VALID_MASK                                                             0x0000FFFFL
#define UVD_JRBC_IB_BUF_STATUS__IB_BUF_RD_ADDR_MASK                                                           0x000F0000L
#define UVD_JRBC_IB_BUF_STATUS__IB_BUF_WR_ADDR_MASK                                                           0x03000000L
//UVD_JRBC_IB_SIZE_UPDATE
#define UVD_JRBC_IB_SIZE_UPDATE__REMAIN_IB_SIZE__SHIFT                                                        0x4
#define UVD_JRBC_IB_SIZE_UPDATE__REMAIN_IB_SIZE_MASK                                                          0x007FFFF0L
//UVD_JRBC_IB_COND_RD_TIMER
#define UVD_JRBC_IB_COND_RD_TIMER__RETRY_TIMER_CNT__SHIFT                                                     0x0
#define UVD_JRBC_IB_COND_RD_TIMER__RETRY_INTERVAL_CNT__SHIFT                                                  0x10
#define UVD_JRBC_IB_COND_RD_TIMER__CONTINUOUS_POLL_EN__SHIFT                                                  0x18
#define UVD_JRBC_IB_COND_RD_TIMER__MEM_TIMEOUT_EN__SHIFT                                                      0x19
#define UVD_JRBC_IB_COND_RD_TIMER__RETRY_TIMER_CNT_MASK                                                       0x0000FFFFL
#define UVD_JRBC_IB_COND_RD_TIMER__RETRY_INTERVAL_CNT_MASK                                                    0x00FF0000L
#define UVD_JRBC_IB_COND_RD_TIMER__CONTINUOUS_POLL_EN_MASK                                                    0x01000000L
#define UVD_JRBC_IB_COND_RD_TIMER__MEM_TIMEOUT_EN_MASK                                                        0x02000000L
//UVD_JRBC_IB_REF_DATA
#define UVD_JRBC_IB_REF_DATA__REF_DATA__SHIFT                                                                 0x0
#define UVD_JRBC_IB_REF_DATA__REF_DATA_MASK                                                                   0xFFFFFFFFL
//UVD_JPEG_PREEMPT_CMD
#define UVD_JPEG_PREEMPT_CMD__PREEMPT_EN__SHIFT                                                               0x0
#define UVD_JPEG_PREEMPT_CMD__WAIT_JPEG_JOB_DONE__SHIFT                                                       0x1
#define UVD_JPEG_PREEMPT_CMD__PREEMPT_FENCE_CMD__SHIFT                                                        0x2
#define UVD_JPEG_PREEMPT_CMD__PREEMPT_EN_MASK                                                                 0x00000001L
#define UVD_JPEG_PREEMPT_CMD__WAIT_JPEG_JOB_DONE_MASK                                                         0x00000002L
#define UVD_JPEG_PREEMPT_CMD__PREEMPT_FENCE_CMD_MASK                                                          0x00000004L
//UVD_JPEG_PREEMPT_FENCE_DATA0
#define UVD_JPEG_PREEMPT_FENCE_DATA0__PREEMPT_FENCE_DATA0__SHIFT                                              0x0
#define UVD_JPEG_PREEMPT_FENCE_DATA0__PREEMPT_FENCE_DATA0_MASK                                                0xFFFFFFFFL
//UVD_JPEG_PREEMPT_FENCE_DATA1
#define UVD_JPEG_PREEMPT_FENCE_DATA1__PREEMPT_FENCE_DATA1__SHIFT                                              0x0
#define UVD_JPEG_PREEMPT_FENCE_DATA1__PREEMPT_FENCE_DATA1_MASK                                                0xFFFFFFFFL
//UVD_JRBC_RB_SIZE
#define UVD_JRBC_RB_SIZE__RB_SIZE__SHIFT                                                                      0x4
#define UVD_JRBC_RB_SIZE__RB_SIZE_MASK                                                                        0x00FFFFF0L
//UVD_JRBC_SCRATCH0
#define UVD_JRBC_SCRATCH0__SCRATCH0__SHIFT                                                                    0x0
#define UVD_JRBC_SCRATCH0__SCRATCH0_MASK                                                                      0xFFFFFFFFL


// addressBlock: uvd0_uvd_jmi_dec
//UVD_JADP_MCIF_URGENT_CTRL
#define UVD_JADP_MCIF_URGENT_CTRL__WR_WATERMARK__SHIFT                                                        0x0
#define UVD_JADP_MCIF_URGENT_CTRL__RD_WATERMARK__SHIFT                                                        0x6
#define UVD_JADP_MCIF_URGENT_CTRL__WR_RD_URGENT_TIMER__SHIFT                                                  0xb
#define UVD_JADP_MCIF_URGENT_CTRL__WR_URGENT_PROG_STEP__SHIFT                                                 0x11
#define UVD_JADP_MCIF_URGENT_CTRL__RD_URGENT_PROG_STEP__SHIFT                                                 0x15
#define UVD_JADP_MCIF_URGENT_CTRL__WR_QOS_EN__SHIFT                                                           0x19
#define UVD_JADP_MCIF_URGENT_CTRL__RD_QOS_EN__SHIFT                                                           0x1a
#define UVD_JADP_MCIF_URGENT_CTRL__WR_WATERMARK_MASK                                                          0x0000003FL
#define UVD_JADP_MCIF_URGENT_CTRL__RD_WATERMARK_MASK                                                          0x000007C0L
#define UVD_JADP_MCIF_URGENT_CTRL__WR_RD_URGENT_TIMER_MASK                                                    0x0001F800L
#define UVD_JADP_MCIF_URGENT_CTRL__WR_URGENT_PROG_STEP_MASK                                                   0x001E0000L
#define UVD_JADP_MCIF_URGENT_CTRL__RD_URGENT_PROG_STEP_MASK                                                   0x01E00000L
#define UVD_JADP_MCIF_URGENT_CTRL__WR_QOS_EN_MASK                                                             0x02000000L
#define UVD_JADP_MCIF_URGENT_CTRL__RD_QOS_EN_MASK                                                             0x04000000L
//UVD_JMI_URGENT_CTRL
#define UVD_JMI_URGENT_CTRL__ENABLE_MC_RD_URGENT_STALL__SHIFT                                                 0x0
#define UVD_JMI_URGENT_CTRL__ASSERT_MC_RD_URGENT__SHIFT                                                       0x4
#define UVD_JMI_URGENT_CTRL__ENABLE_MC_WR_URGENT_STALL__SHIFT                                                 0x10
#define UVD_JMI_URGENT_CTRL__ASSERT_MC_WR_URGENT__SHIFT                                                       0x14
#define UVD_JMI_URGENT_CTRL__ENABLE_MC_RD_URGENT_STALL_MASK                                                   0x00000001L
#define UVD_JMI_URGENT_CTRL__ASSERT_MC_RD_URGENT_MASK                                                         0x000000F0L
#define UVD_JMI_URGENT_CTRL__ENABLE_MC_WR_URGENT_STALL_MASK                                                   0x00010000L
#define UVD_JMI_URGENT_CTRL__ASSERT_MC_WR_URGENT_MASK                                                         0x00F00000L
//UVD_JPEG_DEC_PF_CTRL
#define UVD_JPEG_DEC_PF_CTRL__DEC_PF_HANDLING_DIS__SHIFT                                                      0x0
#define UVD_JPEG_DEC_PF_CTRL__DEC_PF_SW_GATING__SHIFT                                                         0x1
#define UVD_JPEG_DEC_PF_CTRL__DEC_PF_HANDLING_DIS_MASK                                                        0x00000001L
#define UVD_JPEG_DEC_PF_CTRL__DEC_PF_SW_GATING_MASK                                                           0x00000002L
//UVD_JPEG_ENC_PF_CTRL
#define UVD_JPEG_ENC_PF_CTRL__ENC_PF_HANDLING_DIS__SHIFT                                                      0x0
#define UVD_JPEG_ENC_PF_CTRL__ENC_PF_SW_GATING__SHIFT                                                         0x1
#define UVD_JPEG_ENC_PF_CTRL__ENC_PF_HANDLING_DIS_MASK                                                        0x00000001L
#define UVD_JPEG_ENC_PF_CTRL__ENC_PF_SW_GATING_MASK                                                           0x00000002L
//UVD_JMI_CTRL
#define UVD_JMI_CTRL__STALL_MC_ARB__SHIFT                                                                     0x0
#define UVD_JMI_CTRL__MASK_MC_URGENT__SHIFT                                                                   0x1
#define UVD_JMI_CTRL__ASSERT_MC_URGENT__SHIFT                                                                 0x2
#define UVD_JMI_CTRL__MC_RD_ARB_WAIT_TIMER__SHIFT                                                             0x8
#define UVD_JMI_CTRL__MC_WR_ARB_WAIT_TIMER__SHIFT                                                             0x10
#define UVD_JMI_CTRL__CRC_RESET__SHIFT                                                                        0x18
#define UVD_JMI_CTRL__CRC_SEL__SHIFT                                                                          0x19
#define UVD_JMI_CTRL__STALL_MC_ARB_MASK                                                                       0x00000001L
#define UVD_JMI_CTRL__MASK_MC_URGENT_MASK                                                                     0x00000002L
#define UVD_JMI_CTRL__ASSERT_MC_URGENT_MASK                                                                   0x00000004L
#define UVD_JMI_CTRL__MC_RD_ARB_WAIT_TIMER_MASK                                                               0x0000FF00L
#define UVD_JMI_CTRL__MC_WR_ARB_WAIT_TIMER_MASK                                                               0x00FF0000L
#define UVD_JMI_CTRL__CRC_RESET_MASK                                                                          0x01000000L
#define UVD_JMI_CTRL__CRC_SEL_MASK                                                                            0x1E000000L
//UVD_LMI_JRBC_CTRL
#define UVD_LMI_JRBC_CTRL__ARB_RD_WAIT_EN__SHIFT                                                              0x0
#define UVD_LMI_JRBC_CTRL__ARB_WR_WAIT_EN__SHIFT                                                              0x1
#define UVD_LMI_JRBC_CTRL__RD_MAX_BURST__SHIFT                                                                0x4
#define UVD_LMI_JRBC_CTRL__WR_MAX_BURST__SHIFT                                                                0x8
#define UVD_LMI_JRBC_CTRL__RD_SWAP__SHIFT                                                                     0x14
#define UVD_LMI_JRBC_CTRL__WR_SWAP__SHIFT                                                                     0x16
#define UVD_LMI_JRBC_CTRL__ARB_RD_WAIT_EN_MASK                                                                0x00000001L
#define UVD_LMI_JRBC_CTRL__ARB_WR_WAIT_EN_MASK                                                                0x00000002L
#define UVD_LMI_JRBC_CTRL__RD_MAX_BURST_MASK                                                                  0x000000F0L
#define UVD_LMI_JRBC_CTRL__WR_MAX_BURST_MASK                                                                  0x00000F00L
#define UVD_LMI_JRBC_CTRL__RD_SWAP_MASK                                                                       0x00300000L
#define UVD_LMI_JRBC_CTRL__WR_SWAP_MASK                                                                       0x00C00000L
//UVD_LMI_JPEG_CTRL
#define UVD_LMI_JPEG_CTRL__ARB_RD_WAIT_EN__SHIFT                                                              0x0
#define UVD_LMI_JPEG_CTRL__ARB_WR_WAIT_EN__SHIFT                                                              0x1
#define UVD_LMI_JPEG_CTRL__RD_MAX_BURST__SHIFT                                                                0x4
#define UVD_LMI_JPEG_CTRL__WR_MAX_BURST__SHIFT                                                                0x8
#define UVD_LMI_JPEG_CTRL__RD_SWAP__SHIFT                                                                     0x14
#define UVD_LMI_JPEG_CTRL__WR_SWAP__SHIFT                                                                     0x16
#define UVD_LMI_JPEG_CTRL__ARB_RD_WAIT_EN_MASK                                                                0x00000001L
#define UVD_LMI_JPEG_CTRL__ARB_WR_WAIT_EN_MASK                                                                0x00000002L
#define UVD_LMI_JPEG_CTRL__RD_MAX_BURST_MASK                                                                  0x000000F0L
#define UVD_LMI_JPEG_CTRL__WR_MAX_BURST_MASK                                                                  0x00000F00L
#define UVD_LMI_JPEG_CTRL__RD_SWAP_MASK                                                                       0x00300000L
#define UVD_LMI_JPEG_CTRL__WR_SWAP_MASK                                                                       0x00C00000L
//UVD_JMI_EJRBC_CTRL
#define UVD_JMI_EJRBC_CTRL__ARB_RD_WAIT_EN__SHIFT                                                             0x0
#define UVD_JMI_EJRBC_CTRL__ARB_WR_WAIT_EN__SHIFT                                                             0x1
#define UVD_JMI_EJRBC_CTRL__RD_MAX_BURST__SHIFT                                                               0x4
#define UVD_JMI_EJRBC_CTRL__WR_MAX_BURST__SHIFT                                                               0x8
#define UVD_JMI_EJRBC_CTRL__RD_SWAP__SHIFT                                                                    0x14
#define UVD_JMI_EJRBC_CTRL__WR_SWAP__SHIFT                                                                    0x16
#define UVD_JMI_EJRBC_CTRL__ARB_RD_WAIT_EN_MASK                                                               0x00000001L
#define UVD_JMI_EJRBC_CTRL__ARB_WR_WAIT_EN_MASK                                                               0x00000002L
#define UVD_JMI_EJRBC_CTRL__RD_MAX_BURST_MASK                                                                 0x000000F0L
#define UVD_JMI_EJRBC_CTRL__WR_MAX_BURST_MASK                                                                 0x00000F00L
#define UVD_JMI_EJRBC_CTRL__RD_SWAP_MASK                                                                      0x00300000L
#define UVD_JMI_EJRBC_CTRL__WR_SWAP_MASK                                                                      0x00C00000L
//UVD_LMI_EJPEG_CTRL
#define UVD_LMI_EJPEG_CTRL__ARB_RD_WAIT_EN__SHIFT                                                             0x0
#define UVD_LMI_EJPEG_CTRL__ARB_WR_WAIT_EN__SHIFT                                                             0x1
#define UVD_LMI_EJPEG_CTRL__RD_MAX_BURST__SHIFT                                                               0x4
#define UVD_LMI_EJPEG_CTRL__WR_MAX_BURST__SHIFT                                                               0x8
#define UVD_LMI_EJPEG_CTRL__RD_SWAP__SHIFT                                                                    0x14
#define UVD_LMI_EJPEG_CTRL__WR_SWAP__SHIFT                                                                    0x16
#define UVD_LMI_EJPEG_CTRL__ARB_RD_WAIT_EN_MASK                                                               0x00000001L
#define UVD_LMI_EJPEG_CTRL__ARB_WR_WAIT_EN_MASK                                                               0x00000002L
#define UVD_LMI_EJPEG_CTRL__RD_MAX_BURST_MASK                                                                 0x000000F0L
#define UVD_LMI_EJPEG_CTRL__WR_MAX_BURST_MASK                                                                 0x00000F00L
#define UVD_LMI_EJPEG_CTRL__RD_SWAP_MASK                                                                      0x00300000L
#define UVD_LMI_EJPEG_CTRL__WR_SWAP_MASK                                                                      0x00C00000L
//UVD_JMI_SCALER_CTRL
#define UVD_JMI_SCALER_CTRL__ARB_RD_WAIT_EN__SHIFT                                                            0x0
#define UVD_JMI_SCALER_CTRL__ARB_WR_WAIT_EN__SHIFT                                                            0x1
#define UVD_JMI_SCALER_CTRL__RD_MAX_BURST__SHIFT                                                              0x4
#define UVD_JMI_SCALER_CTRL__WR_MAX_BURST__SHIFT                                                              0x8
#define UVD_JMI_SCALER_CTRL__RD_SWAP__SHIFT                                                                   0x14
#define UVD_JMI_SCALER_CTRL__WR_SWAP__SHIFT                                                                   0x16
#define UVD_JMI_SCALER_CTRL__ARB_RD_WAIT_EN_MASK                                                              0x00000001L
#define UVD_JMI_SCALER_CTRL__ARB_WR_WAIT_EN_MASK                                                              0x00000002L
#define UVD_JMI_SCALER_CTRL__RD_MAX_BURST_MASK                                                                0x000000F0L
#define UVD_JMI_SCALER_CTRL__WR_MAX_BURST_MASK                                                                0x00000F00L
#define UVD_JMI_SCALER_CTRL__RD_SWAP_MASK                                                                     0x00300000L
#define UVD_JMI_SCALER_CTRL__WR_SWAP_MASK                                                                     0x00C00000L
//JPEG_LMI_DROP
#define JPEG_LMI_DROP__JPEG_WR_DROP__SHIFT                                                                    0x0
#define JPEG_LMI_DROP__JRBC_WR_DROP__SHIFT                                                                    0x1
#define JPEG_LMI_DROP__JPEG_RD_DROP__SHIFT                                                                    0x2
#define JPEG_LMI_DROP__JRBC_RD_DROP__SHIFT                                                                    0x3
#define JPEG_LMI_DROP__JPEG_WR_DROP_MASK                                                                      0x00000001L
#define JPEG_LMI_DROP__JRBC_WR_DROP_MASK                                                                      0x00000002L
#define JPEG_LMI_DROP__JPEG_RD_DROP_MASK                                                                      0x00000004L
#define JPEG_LMI_DROP__JRBC_RD_DROP_MASK                                                                      0x00000008L
//UVD_JMI_EJPEG_DROP
#define UVD_JMI_EJPEG_DROP__EJRBC_RD_DROP__SHIFT                                                              0x0
#define UVD_JMI_EJPEG_DROP__EJRBC_WR_DROP__SHIFT                                                              0x1
#define UVD_JMI_EJPEG_DROP__EJPEG_RD_DROP__SHIFT                                                              0x2
#define UVD_JMI_EJPEG_DROP__EJPEG_WR_DROP__SHIFT                                                              0x3
#define UVD_JMI_EJPEG_DROP__SCALAR_RD_DROP__SHIFT                                                             0x4
#define UVD_JMI_EJPEG_DROP__SCALAR_WR_DROP__SHIFT                                                             0x5
#define UVD_JMI_EJPEG_DROP__EJRBC_RD_DROP_MASK                                                                0x00000001L
#define UVD_JMI_EJPEG_DROP__EJRBC_WR_DROP_MASK                                                                0x00000002L
#define UVD_JMI_EJPEG_DROP__EJPEG_RD_DROP_MASK                                                                0x00000004L
#define UVD_JMI_EJPEG_DROP__EJPEG_WR_DROP_MASK                                                                0x00000008L
#define UVD_JMI_EJPEG_DROP__SCALAR_RD_DROP_MASK                                                               0x00000010L
#define UVD_JMI_EJPEG_DROP__SCALAR_WR_DROP_MASK                                                               0x00000020L
//JPEG_MEMCHECK_CLAMPING
#define JPEG_MEMCHECK_CLAMPING__JPEG_WR_CLAMPING_EN__SHIFT                                                    0xd
#define JPEG_MEMCHECK_CLAMPING__JPEG2_WR_CLAMPING_EN__SHIFT                                                   0xe
#define JPEG_MEMCHECK_CLAMPING__JPEG_RD_CLAMPING_EN__SHIFT                                                    0x16
#define JPEG_MEMCHECK_CLAMPING__JPEG2_RD_CLAMPING_EN__SHIFT                                                   0x17
#define JPEG_MEMCHECK_CLAMPING__JRBC_RD_CLAMPING_EN__SHIFT                                                    0x19
#define JPEG_MEMCHECK_CLAMPING__JRBC_WR_CLAMPING_EN__SHIFT                                                    0x1a
#define JPEG_MEMCHECK_CLAMPING__CLAMP_TO_SAFE_ADDR_EN__SHIFT                                                  0x1f
#define JPEG_MEMCHECK_CLAMPING__JPEG_WR_CLAMPING_EN_MASK                                                      0x00002000L
#define JPEG_MEMCHECK_CLAMPING__JPEG2_WR_CLAMPING_EN_MASK                                                     0x00004000L
#define JPEG_MEMCHECK_CLAMPING__JPEG_RD_CLAMPING_EN_MASK                                                      0x00400000L
#define JPEG_MEMCHECK_CLAMPING__JPEG2_RD_CLAMPING_EN_MASK                                                     0x00800000L
#define JPEG_MEMCHECK_CLAMPING__JRBC_RD_CLAMPING_EN_MASK                                                      0x02000000L
#define JPEG_MEMCHECK_CLAMPING__JRBC_WR_CLAMPING_EN_MASK                                                      0x04000000L
#define JPEG_MEMCHECK_CLAMPING__CLAMP_TO_SAFE_ADDR_EN_MASK                                                    0x80000000L
//UVD_JMI_EJPEG_MEMCHECK_CLAMPING
#define UVD_JMI_EJPEG_MEMCHECK_CLAMPING__JRBC_RD_CLAMPING_EN__SHIFT                                           0x0
#define UVD_JMI_EJPEG_MEMCHECK_CLAMPING__JRBC_WR_CLAMPING_EN__SHIFT                                           0x1
#define UVD_JMI_EJPEG_MEMCHECK_CLAMPING__JPEG_RD_CLAMPING_EN__SHIFT                                           0x2
#define UVD_JMI_EJPEG_MEMCHECK_CLAMPING__JPEG_WR_CLAMPING_EN__SHIFT                                           0x3
#define UVD_JMI_EJPEG_MEMCHECK_CLAMPING__SCALAR_RD_CLAMPING_EN__SHIFT                                         0x4
#define UVD_JMI_EJPEG_MEMCHECK_CLAMPING__SCALAR_WR_CLAMPING_EN__SHIFT                                         0x5
#define UVD_JMI_EJPEG_MEMCHECK_CLAMPING__CLAMP_TO_SAFE_ADDR_EN__SHIFT                                         0x1f
#define UVD_JMI_EJPEG_MEMCHECK_CLAMPING__JRBC_RD_CLAMPING_EN_MASK                                             0x00000001L
#define UVD_JMI_EJPEG_MEMCHECK_CLAMPING__JRBC_WR_CLAMPING_EN_MASK                                             0x00000002L
#define UVD_JMI_EJPEG_MEMCHECK_CLAMPING__JPEG_RD_CLAMPING_EN_MASK                                             0x00000004L
#define UVD_JMI_EJPEG_MEMCHECK_CLAMPING__JPEG_WR_CLAMPING_EN_MASK                                             0x00000008L
#define UVD_JMI_EJPEG_MEMCHECK_CLAMPING__SCALAR_RD_CLAMPING_EN_MASK                                           0x00000010L
#define UVD_JMI_EJPEG_MEMCHECK_CLAMPING__SCALAR_WR_CLAMPING_EN_MASK                                           0x00000020L
#define UVD_JMI_EJPEG_MEMCHECK_CLAMPING__CLAMP_TO_SAFE_ADDR_EN_MASK                                           0x80000000L
//UVD_LMI_JRBC_IB_VMID
#define UVD_LMI_JRBC_IB_VMID__IB_WR_VMID__SHIFT                                                               0x0
#define UVD_LMI_JRBC_IB_VMID__IB_RD_VMID__SHIFT                                                               0x4
#define UVD_LMI_JRBC_IB_VMID__MEM_RD_VMID__SHIFT                                                              0x8
#define UVD_LMI_JRBC_IB_VMID__IB_WR_VMID_MASK                                                                 0x0000000FL
#define UVD_LMI_JRBC_IB_VMID__IB_RD_VMID_MASK                                                                 0x000000F0L
#define UVD_LMI_JRBC_IB_VMID__MEM_RD_VMID_MASK                                                                0x00000F00L
//UVD_LMI_JRBC_RB_VMID
#define UVD_LMI_JRBC_RB_VMID__RB_WR_VMID__SHIFT                                                               0x0
#define UVD_LMI_JRBC_RB_VMID__RB_RD_VMID__SHIFT                                                               0x4
#define UVD_LMI_JRBC_RB_VMID__MEM_RD_VMID__SHIFT                                                              0x8
#define UVD_LMI_JRBC_RB_VMID__RB_WR_VMID_MASK                                                                 0x0000000FL
#define UVD_LMI_JRBC_RB_VMID__RB_RD_VMID_MASK                                                                 0x000000F0L
#define UVD_LMI_JRBC_RB_VMID__MEM_RD_VMID_MASK                                                                0x00000F00L
//UVD_LMI_JPEG_VMID
#define UVD_LMI_JPEG_VMID__JPEG_RD_VMID__SHIFT                                                                0x0
#define UVD_LMI_JPEG_VMID__JPEG_WR_VMID__SHIFT                                                                0x4
#define UVD_LMI_JPEG_VMID__ATOMIC_USER0_WR_VMID__SHIFT                                                        0x8
#define UVD_LMI_JPEG_VMID__JPEG_RD_VMID_MASK                                                                  0x0000000FL
#define UVD_LMI_JPEG_VMID__JPEG_WR_VMID_MASK                                                                  0x000000F0L
#define UVD_LMI_JPEG_VMID__ATOMIC_USER0_WR_VMID_MASK                                                          0x00000F00L
//UVD_JMI_ENC_JRBC_IB_VMID
#define UVD_JMI_ENC_JRBC_IB_VMID__IB_WR_VMID__SHIFT                                                           0x0
#define UVD_JMI_ENC_JRBC_IB_VMID__IB_RD_VMID__SHIFT                                                           0x4
#define UVD_JMI_ENC_JRBC_IB_VMID__MEM_RD_VMID__SHIFT                                                          0x8
#define UVD_JMI_ENC_JRBC_IB_VMID__IB_WR_VMID_MASK                                                             0x0000000FL
#define UVD_JMI_ENC_JRBC_IB_VMID__IB_RD_VMID_MASK                                                             0x000000F0L
#define UVD_JMI_ENC_JRBC_IB_VMID__MEM_RD_VMID_MASK                                                            0x00000F00L
//UVD_JMI_ENC_JRBC_RB_VMID
#define UVD_JMI_ENC_JRBC_RB_VMID__RB_WR_VMID__SHIFT                                                           0x0
#define UVD_JMI_ENC_JRBC_RB_VMID__RB_RD_VMID__SHIFT                                                           0x4
#define UVD_JMI_ENC_JRBC_RB_VMID__MEM_RD_VMID__SHIFT                                                          0x8
#define UVD_JMI_ENC_JRBC_RB_VMID__RB_WR_VMID_MASK                                                             0x0000000FL
#define UVD_JMI_ENC_JRBC_RB_VMID__RB_RD_VMID_MASK                                                             0x000000F0L
#define UVD_JMI_ENC_JRBC_RB_VMID__MEM_RD_VMID_MASK                                                            0x00000F00L
//UVD_JMI_ENC_JPEG_VMID
#define UVD_JMI_ENC_JPEG_VMID__PEL_RD_VMID__SHIFT                                                             0x0
#define UVD_JMI_ENC_JPEG_VMID__BS_WR_VMID__SHIFT                                                              0x5
#define UVD_JMI_ENC_JPEG_VMID__SCALAR_RD_VMID__SHIFT                                                          0xa
#define UVD_JMI_ENC_JPEG_VMID__SCALAR_WR_VMID__SHIFT                                                          0xf
#define UVD_JMI_ENC_JPEG_VMID__HUFF_FENCE_VMID__SHIFT                                                         0x13
#define UVD_JMI_ENC_JPEG_VMID__ATOMIC_USER1_WR_VMID__SHIFT                                                    0x17
#define UVD_JMI_ENC_JPEG_VMID__PEL_RD_VMID_MASK                                                               0x0000000FL
#define UVD_JMI_ENC_JPEG_VMID__BS_WR_VMID_MASK                                                                0x000001E0L
#define UVD_JMI_ENC_JPEG_VMID__SCALAR_RD_VMID_MASK                                                            0x00003C00L
#define UVD_JMI_ENC_JPEG_VMID__SCALAR_WR_VMID_MASK                                                            0x00078000L
#define UVD_JMI_ENC_JPEG_VMID__HUFF_FENCE_VMID_MASK                                                           0x00780000L
#define UVD_JMI_ENC_JPEG_VMID__ATOMIC_USER1_WR_VMID_MASK                                                      0x07800000L
//JPEG_MEMCHECK_SAFE_ADDR
#define JPEG_MEMCHECK_SAFE_ADDR__MEMCHECK_SAFE_ADDR__SHIFT                                                    0x0
#define JPEG_MEMCHECK_SAFE_ADDR__MEMCHECK_SAFE_ADDR_MASK                                                      0xFFFFFFFFL
//JPEG_MEMCHECK_SAFE_ADDR_64BIT
#define JPEG_MEMCHECK_SAFE_ADDR_64BIT__MEMCHECK_SAFE_ADDR_64BIT__SHIFT                                        0x0
#define JPEG_MEMCHECK_SAFE_ADDR_64BIT__MEMCHECK_SAFE_ADDR_64BIT_MASK                                          0xFFFFFFFFL
//UVD_JMI_LAT_CTRL
#define UVD_JMI_LAT_CTRL__SCALE__SHIFT                                                                        0x0
#define UVD_JMI_LAT_CTRL__MAX_START__SHIFT                                                                    0x8
#define UVD_JMI_LAT_CTRL__MIN_START__SHIFT                                                                    0x9
#define UVD_JMI_LAT_CTRL__AVG_START__SHIFT                                                                    0xa
#define UVD_JMI_LAT_CTRL__PERFMON_SYNC__SHIFT                                                                 0xb
#define UVD_JMI_LAT_CTRL__SKIP__SHIFT                                                                         0x10
#define UVD_JMI_LAT_CTRL__SCALE_MASK                                                                          0x000000FFL
#define UVD_JMI_LAT_CTRL__MAX_START_MASK                                                                      0x00000100L
#define UVD_JMI_LAT_CTRL__MIN_START_MASK                                                                      0x00000200L
#define UVD_JMI_LAT_CTRL__AVG_START_MASK                                                                      0x00000400L
#define UVD_JMI_LAT_CTRL__PERFMON_SYNC_MASK                                                                   0x00000800L
#define UVD_JMI_LAT_CTRL__SKIP_MASK                                                                           0x000F0000L
//UVD_JMI_LAT_CNTR
#define UVD_JMI_LAT_CNTR__MAX_LAT__SHIFT                                                                      0x0
#define UVD_JMI_LAT_CNTR__MIN_LAT__SHIFT                                                                      0x8
#define UVD_JMI_LAT_CNTR__MAX_LAT_MASK                                                                        0x000000FFL
#define UVD_JMI_LAT_CNTR__MIN_LAT_MASK                                                                        0x0000FF00L
//UVD_JMI_AVG_LAT_CNTR
#define UVD_JMI_AVG_LAT_CNTR__ENV_LOW__SHIFT                                                                  0x0
#define UVD_JMI_AVG_LAT_CNTR__ENV_HIGH__SHIFT                                                                 0x8
#define UVD_JMI_AVG_LAT_CNTR__ENV_HIT__SHIFT                                                                  0x10
#define UVD_JMI_AVG_LAT_CNTR__ENV_LOW_MASK                                                                    0x000000FFL
#define UVD_JMI_AVG_LAT_CNTR__ENV_HIGH_MASK                                                                   0x0000FF00L
#define UVD_JMI_AVG_LAT_CNTR__ENV_HIT_MASK                                                                    0xFFFF0000L
//UVD_JMI_PERFMON_CTRL
#define UVD_JMI_PERFMON_CTRL__PERFMON_STATE__SHIFT                                                            0x0
#define UVD_JMI_PERFMON_CTRL__PERFMON_SEL__SHIFT                                                              0x8
#define UVD_JMI_PERFMON_CTRL__PERFMON_STATE_MASK                                                              0x00000003L
#define UVD_JMI_PERFMON_CTRL__PERFMON_SEL_MASK                                                                0x00000F00L
//UVD_JMI_PERFMON_COUNT_LO
#define UVD_JMI_PERFMON_COUNT_LO__PERFMON_COUNT__SHIFT                                                        0x0
#define UVD_JMI_PERFMON_COUNT_LO__PERFMON_COUNT_MASK                                                          0xFFFFFFFFL
//UVD_JMI_PERFMON_COUNT_HI
#define UVD_JMI_PERFMON_COUNT_HI__PERFMON_COUNT__SHIFT                                                        0x0
#define UVD_JMI_PERFMON_COUNT_HI__PERFMON_COUNT_MASK                                                          0x0000FFFFL
//UVD_JMI_CLEAN_STATUS
#define UVD_JMI_CLEAN_STATUS__LMI_READ_CLEAN__SHIFT                                                           0x0
#define UVD_JMI_CLEAN_STATUS__LMI_READ_CLEAN_RAW__SHIFT                                                       0x1
#define UVD_JMI_CLEAN_STATUS__LMI_WRITE_CLEAN__SHIFT                                                          0x2
#define UVD_JMI_CLEAN_STATUS__LMI_WRITE_CLEAN_RAW__SHIFT                                                      0x3
#define UVD_JMI_CLEAN_STATUS__DJRBC_READ_CLEAN__SHIFT                                                         0x4
#define UVD_JMI_CLEAN_STATUS__EJRBC_READ_CLEAN__SHIFT                                                         0x5
#define UVD_JMI_CLEAN_STATUS__JPEG_READ_CLEAN__SHIFT                                                          0x6
#define UVD_JMI_CLEAN_STATUS__PEL_READ_CLEAN__SHIFT                                                           0x7
#define UVD_JMI_CLEAN_STATUS__SCALAR_READ_CLEAN__SHIFT                                                        0x8
#define UVD_JMI_CLEAN_STATUS__DJRBC_WRITE_CLEAN__SHIFT                                                        0x9
#define UVD_JMI_CLEAN_STATUS__EJRBC_WRITE_CLEAN__SHIFT                                                        0xa
#define UVD_JMI_CLEAN_STATUS__BS_WRITE_CLEAN__SHIFT                                                           0xb
#define UVD_JMI_CLEAN_STATUS__JPEG_WRITE_CLEAN__SHIFT                                                         0xc
#define UVD_JMI_CLEAN_STATUS__SCALAR_WRITE_CLEAN__SHIFT                                                       0xd
#define UVD_JMI_CLEAN_STATUS__MC_WRITE_PENDING__SHIFT                                                         0xe
#define UVD_JMI_CLEAN_STATUS__JPEG2_WRITE_CLEAN__SHIFT                                                        0xf
#define UVD_JMI_CLEAN_STATUS__JPEG2_READ_CLEAN__SHIFT                                                         0x10
#define UVD_JMI_CLEAN_STATUS__LMI_READ_CLEAN_MASK                                                             0x00000001L
#define UVD_JMI_CLEAN_STATUS__LMI_READ_CLEAN_RAW_MASK                                                         0x00000002L
#define UVD_JMI_CLEAN_STATUS__LMI_WRITE_CLEAN_MASK                                                            0x00000004L
#define UVD_JMI_CLEAN_STATUS__LMI_WRITE_CLEAN_RAW_MASK                                                        0x00000008L
#define UVD_JMI_CLEAN_STATUS__DJRBC_READ_CLEAN_MASK                                                           0x00000010L
#define UVD_JMI_CLEAN_STATUS__EJRBC_READ_CLEAN_MASK                                                           0x00000020L
#define UVD_JMI_CLEAN_STATUS__JPEG_READ_CLEAN_MASK                                                            0x00000040L
#define UVD_JMI_CLEAN_STATUS__PEL_READ_CLEAN_MASK                                                             0x00000080L
#define UVD_JMI_CLEAN_STATUS__SCALAR_READ_CLEAN_MASK                                                          0x00000100L
#define UVD_JMI_CLEAN_STATUS__DJRBC_WRITE_CLEAN_MASK                                                          0x00000200L
#define UVD_JMI_CLEAN_STATUS__EJRBC_WRITE_CLEAN_MASK                                                          0x00000400L
#define UVD_JMI_CLEAN_STATUS__BS_WRITE_CLEAN_MASK                                                             0x00000800L
#define UVD_JMI_CLEAN_STATUS__JPEG_WRITE_CLEAN_MASK                                                           0x00001000L
#define UVD_JMI_CLEAN_STATUS__SCALAR_WRITE_CLEAN_MASK                                                         0x00002000L
#define UVD_JMI_CLEAN_STATUS__MC_WRITE_PENDING_MASK                                                           0x00004000L
#define UVD_JMI_CLEAN_STATUS__JPEG2_WRITE_CLEAN_MASK                                                          0x00008000L
#define UVD_JMI_CLEAN_STATUS__JPEG2_READ_CLEAN_MASK                                                           0x00010000L
//UVD_LMI_JPEG_READ_64BIT_BAR_LOW
#define UVD_LMI_JPEG_READ_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                     0x0
#define UVD_LMI_JPEG_READ_64BIT_BAR_LOW__BITS_31_0_MASK                                                       0xFFFFFFFFL
//UVD_LMI_JPEG_READ_64BIT_BAR_HIGH
#define UVD_LMI_JPEG_READ_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                   0x0
#define UVD_LMI_JPEG_READ_64BIT_BAR_HIGH__BITS_63_32_MASK                                                     0xFFFFFFFFL
//UVD_LMI_JPEG_WRITE_64BIT_BAR_LOW
#define UVD_LMI_JPEG_WRITE_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                    0x0
#define UVD_LMI_JPEG_WRITE_64BIT_BAR_LOW__BITS_31_0_MASK                                                      0xFFFFFFFFL
//UVD_LMI_JPEG_WRITE_64BIT_BAR_HIGH
#define UVD_LMI_JPEG_WRITE_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                  0x0
#define UVD_LMI_JPEG_WRITE_64BIT_BAR_HIGH__BITS_63_32_MASK                                                    0xFFFFFFFFL
//UVD_LMI_JPEG_PREEMPT_FENCE_64BIT_BAR_LOW
#define UVD_LMI_JPEG_PREEMPT_FENCE_64BIT_BAR_LOW__BITS_31_0__SHIFT                                            0x0
#define UVD_LMI_JPEG_PREEMPT_FENCE_64BIT_BAR_LOW__BITS_31_0_MASK                                              0xFFFFFFFFL
//UVD_LMI_JPEG_PREEMPT_FENCE_64BIT_BAR_HIGH
#define UVD_LMI_JPEG_PREEMPT_FENCE_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                          0x0
#define UVD_LMI_JPEG_PREEMPT_FENCE_64BIT_BAR_HIGH__BITS_63_32_MASK                                            0xFFFFFFFFL
//UVD_LMI_JRBC_RB_64BIT_BAR_LOW
#define UVD_LMI_JRBC_RB_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                       0x0
#define UVD_LMI_JRBC_RB_64BIT_BAR_LOW__BITS_31_0_MASK                                                         0xFFFFFFFFL
//UVD_LMI_JRBC_RB_64BIT_BAR_HIGH
#define UVD_LMI_JRBC_RB_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                     0x0
#define UVD_LMI_JRBC_RB_64BIT_BAR_HIGH__BITS_63_32_MASK                                                       0xFFFFFFFFL
//UVD_LMI_JRBC_IB_64BIT_BAR_LOW
#define UVD_LMI_JRBC_IB_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                       0x0
#define UVD_LMI_JRBC_IB_64BIT_BAR_LOW__BITS_31_0_MASK                                                         0xFFFFFFFFL
//UVD_LMI_JRBC_IB_64BIT_BAR_HIGH
#define UVD_LMI_JRBC_IB_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                     0x0
#define UVD_LMI_JRBC_IB_64BIT_BAR_HIGH__BITS_63_32_MASK                                                       0xFFFFFFFFL
//UVD_LMI_JRBC_RB_MEM_WR_64BIT_BAR_LOW
#define UVD_LMI_JRBC_RB_MEM_WR_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                0x0
#define UVD_LMI_JRBC_RB_MEM_WR_64BIT_BAR_LOW__BITS_31_0_MASK                                                  0xFFFFFFFFL
//UVD_LMI_JRBC_RB_MEM_WR_64BIT_BAR_HIGH
#define UVD_LMI_JRBC_RB_MEM_WR_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                              0x0
#define UVD_LMI_JRBC_RB_MEM_WR_64BIT_BAR_HIGH__BITS_63_32_MASK                                                0xFFFFFFFFL
//UVD_LMI_JRBC_RB_MEM_RD_64BIT_BAR_LOW
#define UVD_LMI_JRBC_RB_MEM_RD_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                0x0
#define UVD_LMI_JRBC_RB_MEM_RD_64BIT_BAR_LOW__BITS_31_0_MASK                                                  0xFFFFFFFFL
//UVD_LMI_JRBC_RB_MEM_RD_64BIT_BAR_HIGH
#define UVD_LMI_JRBC_RB_MEM_RD_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                              0x0
#define UVD_LMI_JRBC_RB_MEM_RD_64BIT_BAR_HIGH__BITS_63_32_MASK                                                0xFFFFFFFFL
//UVD_LMI_JRBC_IB_MEM_WR_64BIT_BAR_LOW
#define UVD_LMI_JRBC_IB_MEM_WR_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                0x0
#define UVD_LMI_JRBC_IB_MEM_WR_64BIT_BAR_LOW__BITS_31_0_MASK                                                  0xFFFFFFFFL
//UVD_LMI_JRBC_IB_MEM_WR_64BIT_BAR_HIGH
#define UVD_LMI_JRBC_IB_MEM_WR_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                              0x0
#define UVD_LMI_JRBC_IB_MEM_WR_64BIT_BAR_HIGH__BITS_63_32_MASK                                                0xFFFFFFFFL
//UVD_LMI_JRBC_IB_MEM_RD_64BIT_BAR_LOW
#define UVD_LMI_JRBC_IB_MEM_RD_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                0x0
#define UVD_LMI_JRBC_IB_MEM_RD_64BIT_BAR_LOW__BITS_31_0_MASK                                                  0xFFFFFFFFL
//UVD_LMI_JRBC_IB_MEM_RD_64BIT_BAR_HIGH
#define UVD_LMI_JRBC_IB_MEM_RD_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                              0x0
#define UVD_LMI_JRBC_IB_MEM_RD_64BIT_BAR_HIGH__BITS_63_32_MASK                                                0xFFFFFFFFL
//UVD_JMI_PEL_RD_64BIT_BAR_LOW
#define UVD_JMI_PEL_RD_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                        0x0
#define UVD_JMI_PEL_RD_64BIT_BAR_LOW__BITS_31_0_MASK                                                          0xFFFFFFFFL
//UVD_JMI_PEL_RD_64BIT_BAR_HIGH
#define UVD_JMI_PEL_RD_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                      0x0
#define UVD_JMI_PEL_RD_64BIT_BAR_HIGH__BITS_63_32_MASK                                                        0xFFFFFFFFL
//UVD_JMI_BS_WR_64BIT_BAR_LOW
#define UVD_JMI_BS_WR_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                         0x0
#define UVD_JMI_BS_WR_64BIT_BAR_LOW__BITS_31_0_MASK                                                           0xFFFFFFFFL
//UVD_JMI_BS_WR_64BIT_BAR_HIGH
#define UVD_JMI_BS_WR_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                       0x0
#define UVD_JMI_BS_WR_64BIT_BAR_HIGH__BITS_63_32_MASK                                                         0xFFFFFFFFL
//UVD_JMI_SCALAR_RD_64BIT_BAR_LOW
#define UVD_JMI_SCALAR_RD_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                     0x0
#define UVD_JMI_SCALAR_RD_64BIT_BAR_LOW__BITS_31_0_MASK                                                       0xFFFFFFFFL
//UVD_JMI_SCALAR_RD_64BIT_BAR_HIGH
#define UVD_JMI_SCALAR_RD_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                   0x0
#define UVD_JMI_SCALAR_RD_64BIT_BAR_HIGH__BITS_63_32_MASK                                                     0xFFFFFFFFL
//UVD_JMI_SCALAR_WR_64BIT_BAR_LOW
#define UVD_JMI_SCALAR_WR_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                     0x0
#define UVD_JMI_SCALAR_WR_64BIT_BAR_LOW__BITS_31_0_MASK                                                       0xFFFFFFFFL
//UVD_JMI_SCALAR_WR_64BIT_BAR_HIGH
#define UVD_JMI_SCALAR_WR_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                   0x0
#define UVD_JMI_SCALAR_WR_64BIT_BAR_HIGH__BITS_63_32_MASK                                                     0xFFFFFFFFL
//UVD_LMI_EJPEG_PREEMPT_FENCE_64BIT_BAR_LOW
#define UVD_LMI_EJPEG_PREEMPT_FENCE_64BIT_BAR_LOW__BITS_31_0__SHIFT                                           0x0
#define UVD_LMI_EJPEG_PREEMPT_FENCE_64BIT_BAR_LOW__BITS_31_0_MASK                                             0xFFFFFFFFL
//UVD_LMI_EJPEG_PREEMPT_FENCE_64BIT_BAR_HIGH
#define UVD_LMI_EJPEG_PREEMPT_FENCE_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                         0x0
#define UVD_LMI_EJPEG_PREEMPT_FENCE_64BIT_BAR_HIGH__BITS_63_32_MASK                                           0xFFFFFFFFL
//UVD_LMI_EJRBC_RB_64BIT_BAR_LOW
#define UVD_LMI_EJRBC_RB_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                      0x0
#define UVD_LMI_EJRBC_RB_64BIT_BAR_LOW__BITS_31_0_MASK                                                        0xFFFFFFFFL
//UVD_LMI_EJRBC_RB_64BIT_BAR_HIGH
#define UVD_LMI_EJRBC_RB_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                    0x0
#define UVD_LMI_EJRBC_RB_64BIT_BAR_HIGH__BITS_63_32_MASK                                                      0xFFFFFFFFL
//UVD_LMI_EJRBC_IB_64BIT_BAR_LOW
#define UVD_LMI_EJRBC_IB_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                      0x0
#define UVD_LMI_EJRBC_IB_64BIT_BAR_LOW__BITS_31_0_MASK                                                        0xFFFFFFFFL
//UVD_LMI_EJRBC_IB_64BIT_BAR_HIGH
#define UVD_LMI_EJRBC_IB_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                    0x0
#define UVD_LMI_EJRBC_IB_64BIT_BAR_HIGH__BITS_63_32_MASK                                                      0xFFFFFFFFL
//UVD_LMI_EJRBC_RB_MEM_WR_64BIT_BAR_LOW
#define UVD_LMI_EJRBC_RB_MEM_WR_64BIT_BAR_LOW__BITS_31_0__SHIFT                                               0x0
#define UVD_LMI_EJRBC_RB_MEM_WR_64BIT_BAR_LOW__BITS_31_0_MASK                                                 0xFFFFFFFFL
//UVD_LMI_EJRBC_RB_MEM_WR_64BIT_BAR_HIGH
#define UVD_LMI_EJRBC_RB_MEM_WR_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                             0x0
#define UVD_LMI_EJRBC_RB_MEM_WR_64BIT_BAR_HIGH__BITS_63_32_MASK                                               0xFFFFFFFFL
//UVD_LMI_EJRBC_RB_MEM_RD_64BIT_BAR_LOW
#define UVD_LMI_EJRBC_RB_MEM_RD_64BIT_BAR_LOW__BITS_31_0__SHIFT                                               0x0
#define UVD_LMI_EJRBC_RB_MEM_RD_64BIT_BAR_LOW__BITS_31_0_MASK                                                 0xFFFFFFFFL
//UVD_LMI_EJRBC_RB_MEM_RD_64BIT_BAR_HIGH
#define UVD_LMI_EJRBC_RB_MEM_RD_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                             0x0
#define UVD_LMI_EJRBC_RB_MEM_RD_64BIT_BAR_HIGH__BITS_63_32_MASK                                               0xFFFFFFFFL
//UVD_LMI_EJRBC_IB_MEM_WR_64BIT_BAR_LOW
#define UVD_LMI_EJRBC_IB_MEM_WR_64BIT_BAR_LOW__BITS_31_0__SHIFT                                               0x0
#define UVD_LMI_EJRBC_IB_MEM_WR_64BIT_BAR_LOW__BITS_31_0_MASK                                                 0xFFFFFFFFL
//UVD_LMI_EJRBC_IB_MEM_WR_64BIT_BAR_HIGH
#define UVD_LMI_EJRBC_IB_MEM_WR_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                             0x0
#define UVD_LMI_EJRBC_IB_MEM_WR_64BIT_BAR_HIGH__BITS_63_32_MASK                                               0xFFFFFFFFL
//UVD_LMI_EJRBC_IB_MEM_RD_64BIT_BAR_LOW
#define UVD_LMI_EJRBC_IB_MEM_RD_64BIT_BAR_LOW__BITS_31_0__SHIFT                                               0x0
#define UVD_LMI_EJRBC_IB_MEM_RD_64BIT_BAR_LOW__BITS_31_0_MASK                                                 0xFFFFFFFFL
//UVD_LMI_EJRBC_IB_MEM_RD_64BIT_BAR_HIGH
#define UVD_LMI_EJRBC_IB_MEM_RD_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                             0x0
#define UVD_LMI_EJRBC_IB_MEM_RD_64BIT_BAR_HIGH__BITS_63_32_MASK                                               0xFFFFFFFFL
//UVD_LMI_JPEG_PREEMPT_VMID
#define UVD_LMI_JPEG_PREEMPT_VMID__VMID__SHIFT                                                                0x0
#define UVD_LMI_JPEG_PREEMPT_VMID__VMID_MASK                                                                  0x0000000FL
//UVD_LMI_ENC_JPEG_PREEMPT_VMID
#define UVD_LMI_ENC_JPEG_PREEMPT_VMID__VMID__SHIFT                                                            0x0
#define UVD_LMI_ENC_JPEG_PREEMPT_VMID__VMID_MASK                                                              0x0000000FL
//UVD_LMI_JPEG2_VMID
#define UVD_LMI_JPEG2_VMID__JPEG2_RD_VMID__SHIFT                                                              0x0
#define UVD_LMI_JPEG2_VMID__JPEG2_WR_VMID__SHIFT                                                              0x4
#define UVD_LMI_JPEG2_VMID__JPEG2_RD_VMID_MASK                                                                0x0000000FL
#define UVD_LMI_JPEG2_VMID__JPEG2_WR_VMID_MASK                                                                0x000000F0L
//UVD_LMI_JPEG2_READ_64BIT_BAR_LOW
#define UVD_LMI_JPEG2_READ_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                    0x0
#define UVD_LMI_JPEG2_READ_64BIT_BAR_LOW__BITS_31_0_MASK                                                      0xFFFFFFFFL
//UVD_LMI_JPEG2_READ_64BIT_BAR_HIGH
#define UVD_LMI_JPEG2_READ_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                  0x0
#define UVD_LMI_JPEG2_READ_64BIT_BAR_HIGH__BITS_63_32_MASK                                                    0xFFFFFFFFL
//UVD_LMI_JPEG2_WRITE_64BIT_BAR_LOW
#define UVD_LMI_JPEG2_WRITE_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                   0x0
#define UVD_LMI_JPEG2_WRITE_64BIT_BAR_LOW__BITS_31_0_MASK                                                     0xFFFFFFFFL
//UVD_LMI_JPEG2_WRITE_64BIT_BAR_HIGH
#define UVD_LMI_JPEG2_WRITE_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                 0x0
#define UVD_LMI_JPEG2_WRITE_64BIT_BAR_HIGH__BITS_63_32_MASK                                                   0xFFFFFFFFL
//UVD_LMI_JPEG_CTRL2
#define UVD_LMI_JPEG_CTRL2__ARB_RD_WAIT_EN__SHIFT                                                             0x0
#define UVD_LMI_JPEG_CTRL2__ARB_WR_WAIT_EN__SHIFT                                                             0x1
#define UVD_LMI_JPEG_CTRL2__RD_MAX_BURST__SHIFT                                                               0x4
#define UVD_LMI_JPEG_CTRL2__WR_MAX_BURST__SHIFT                                                               0x8
#define UVD_LMI_JPEG_CTRL2__RD_SWAP__SHIFT                                                                    0x14
#define UVD_LMI_JPEG_CTRL2__WR_SWAP__SHIFT                                                                    0x16
#define UVD_LMI_JPEG_CTRL2__ARB_RD_WAIT_EN_MASK                                                               0x00000001L
#define UVD_LMI_JPEG_CTRL2__ARB_WR_WAIT_EN_MASK                                                               0x00000002L
#define UVD_LMI_JPEG_CTRL2__RD_MAX_BURST_MASK                                                                 0x000000F0L
#define UVD_LMI_JPEG_CTRL2__WR_MAX_BURST_MASK                                                                 0x00000F00L
#define UVD_LMI_JPEG_CTRL2__RD_SWAP_MASK                                                                      0x00300000L
#define UVD_LMI_JPEG_CTRL2__WR_SWAP_MASK                                                                      0x00C00000L
//UVD_JMI_DEC_SWAP_CNTL
#define UVD_JMI_DEC_SWAP_CNTL__RB_MC_SWAP__SHIFT                                                              0x0
#define UVD_JMI_DEC_SWAP_CNTL__IB_MC_SWAP__SHIFT                                                              0x2
#define UVD_JMI_DEC_SWAP_CNTL__RB_MEM_WR_MC_SWAP__SHIFT                                                       0x4
#define UVD_JMI_DEC_SWAP_CNTL__IB_MEM_WR_MC_SWAP__SHIFT                                                       0x6
#define UVD_JMI_DEC_SWAP_CNTL__RB_MEM_RD_MC_SWAP__SHIFT                                                       0x8
#define UVD_JMI_DEC_SWAP_CNTL__IB_MEM_RD_MC_SWAP__SHIFT                                                       0xa
#define UVD_JMI_DEC_SWAP_CNTL__PREEMPT_WR_MC_SWAP__SHIFT                                                      0xc
#define UVD_JMI_DEC_SWAP_CNTL__JPEG_RD_MC_SWAP__SHIFT                                                         0xe
#define UVD_JMI_DEC_SWAP_CNTL__JPEG_WR_MC_SWAP__SHIFT                                                         0x10
#define UVD_JMI_DEC_SWAP_CNTL__RB_MC_SWAP_MASK                                                                0x00000003L
#define UVD_JMI_DEC_SWAP_CNTL__IB_MC_SWAP_MASK                                                                0x0000000CL
#define UVD_JMI_DEC_SWAP_CNTL__RB_MEM_WR_MC_SWAP_MASK                                                         0x00000030L
#define UVD_JMI_DEC_SWAP_CNTL__IB_MEM_WR_MC_SWAP_MASK                                                         0x000000C0L
#define UVD_JMI_DEC_SWAP_CNTL__RB_MEM_RD_MC_SWAP_MASK                                                         0x00000300L
#define UVD_JMI_DEC_SWAP_CNTL__IB_MEM_RD_MC_SWAP_MASK                                                         0x00000C00L
#define UVD_JMI_DEC_SWAP_CNTL__PREEMPT_WR_MC_SWAP_MASK                                                        0x00003000L
#define UVD_JMI_DEC_SWAP_CNTL__JPEG_RD_MC_SWAP_MASK                                                           0x0000C000L
#define UVD_JMI_DEC_SWAP_CNTL__JPEG_WR_MC_SWAP_MASK                                                           0x00030000L
//UVD_JMI_ENC_SWAP_CNTL
#define UVD_JMI_ENC_SWAP_CNTL__RB_MC_SWAP__SHIFT                                                              0x0
#define UVD_JMI_ENC_SWAP_CNTL__IB_MC_SWAP__SHIFT                                                              0x2
#define UVD_JMI_ENC_SWAP_CNTL__RB_MEM_WR_MC_SWAP__SHIFT                                                       0x4
#define UVD_JMI_ENC_SWAP_CNTL__IB_MEM_WR_MC_SWAP__SHIFT                                                       0x6
#define UVD_JMI_ENC_SWAP_CNTL__RB_MEM_RD_MC_SWAP__SHIFT                                                       0x8
#define UVD_JMI_ENC_SWAP_CNTL__IB_MEM_RD_MC_SWAP__SHIFT                                                       0xa
#define UVD_JMI_ENC_SWAP_CNTL__PREEMPT_WR_MC_SWAP__SHIFT                                                      0xc
#define UVD_JMI_ENC_SWAP_CNTL__PEL_RD_MC_SWAP__SHIFT                                                          0xe
#define UVD_JMI_ENC_SWAP_CNTL__BS_WR_MC_SWAP__SHIFT                                                           0x10
#define UVD_JMI_ENC_SWAP_CNTL__SCALAR_RD_MC_SWAP__SHIFT                                                       0x12
#define UVD_JMI_ENC_SWAP_CNTL__SCALAR_WR_MC_SWAP__SHIFT                                                       0x14
#define UVD_JMI_ENC_SWAP_CNTL__HUFF_FENCE_MC_SWAP__SHIFT                                                      0x16
#define UVD_JMI_ENC_SWAP_CNTL__RB_MC_SWAP_MASK                                                                0x00000003L
#define UVD_JMI_ENC_SWAP_CNTL__IB_MC_SWAP_MASK                                                                0x0000000CL
#define UVD_JMI_ENC_SWAP_CNTL__RB_MEM_WR_MC_SWAP_MASK                                                         0x00000030L
#define UVD_JMI_ENC_SWAP_CNTL__IB_MEM_WR_MC_SWAP_MASK                                                         0x000000C0L
#define UVD_JMI_ENC_SWAP_CNTL__RB_MEM_RD_MC_SWAP_MASK                                                         0x00000300L
#define UVD_JMI_ENC_SWAP_CNTL__IB_MEM_RD_MC_SWAP_MASK                                                         0x00000C00L
#define UVD_JMI_ENC_SWAP_CNTL__PREEMPT_WR_MC_SWAP_MASK                                                        0x00003000L
#define UVD_JMI_ENC_SWAP_CNTL__PEL_RD_MC_SWAP_MASK                                                            0x0000C000L
#define UVD_JMI_ENC_SWAP_CNTL__BS_WR_MC_SWAP_MASK                                                             0x00030000L
#define UVD_JMI_ENC_SWAP_CNTL__SCALAR_RD_MC_SWAP_MASK                                                         0x000C0000L
#define UVD_JMI_ENC_SWAP_CNTL__SCALAR_WR_MC_SWAP_MASK                                                         0x00300000L
#define UVD_JMI_ENC_SWAP_CNTL__HUFF_FENCE_MC_SWAP_MASK                                                        0x00C00000L
//UVD_JMI_CNTL
#define UVD_JMI_CNTL__SOFT_RESET__SHIFT                                                                       0x0
#define UVD_JMI_CNTL__MC_RD_REQ_RET_MAX__SHIFT                                                                0x8
#define UVD_JMI_CNTL__SOFT_RESET_MASK                                                                         0x00000001L
#define UVD_JMI_CNTL__MC_RD_REQ_RET_MAX_MASK                                                                  0x0003FF00L
//UVD_JMI_ATOMIC_CNTL
#define UVD_JMI_ATOMIC_CNTL__atomic_arb_wait_en__SHIFT                                                        0x0
#define UVD_JMI_ATOMIC_CNTL__atomic_max_burst__SHIFT                                                          0x1
#define UVD_JMI_ATOMIC_CNTL__atomic_wr_drop__SHIFT                                                            0x5
#define UVD_JMI_ATOMIC_CNTL__atomic_wr_clamping_en__SHIFT                                                     0x6
#define UVD_JMI_ATOMIC_CNTL__ATOMIC_WR_URG__SHIFT                                                             0x7
#define UVD_JMI_ATOMIC_CNTL__ATOMIC_SW_GATE__SHIFT                                                            0xb
#define UVD_JMI_ATOMIC_CNTL__atomic_arb_wait_en_MASK                                                          0x00000001L
#define UVD_JMI_ATOMIC_CNTL__atomic_max_burst_MASK                                                            0x0000001EL
#define UVD_JMI_ATOMIC_CNTL__atomic_wr_drop_MASK                                                              0x00000020L
#define UVD_JMI_ATOMIC_CNTL__atomic_wr_clamping_en_MASK                                                       0x00000040L
#define UVD_JMI_ATOMIC_CNTL__ATOMIC_WR_URG_MASK                                                               0x00000780L
#define UVD_JMI_ATOMIC_CNTL__ATOMIC_SW_GATE_MASK                                                              0x00000800L
//UVD_JMI_ATOMIC_CNTL2
#define UVD_JMI_ATOMIC_CNTL2__atomic_uvd_swap__SHIFT                                                          0x10
#define UVD_JMI_ATOMIC_CNTL2__ATOMIC_MC_SWAP__SHIFT                                                           0x18
#define UVD_JMI_ATOMIC_CNTL2__atomic_uvd_swap_MASK                                                            0x00FF0000L
#define UVD_JMI_ATOMIC_CNTL2__ATOMIC_MC_SWAP_MASK                                                             0xFF000000L
//UVD_JMI_ATOMIC_USER0_WRITE_64BIT_BAR_LOW
#define UVD_JMI_ATOMIC_USER0_WRITE_64BIT_BAR_LOW__BITS_31_0__SHIFT                                            0x0
#define UVD_JMI_ATOMIC_USER0_WRITE_64BIT_BAR_LOW__BITS_31_0_MASK                                              0xFFFFFFFFL
//UVD_JMI_ATOMIC_USER0_WRITE_64BIT_BAR_HIGH
#define UVD_JMI_ATOMIC_USER0_WRITE_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                          0x0
#define UVD_JMI_ATOMIC_USER0_WRITE_64BIT_BAR_HIGH__BITS_63_32_MASK                                            0xFFFFFFFFL
//UVD_JMI_ATOMIC_USER1_WRITE_64BIT_BAR_LOW
#define UVD_JMI_ATOMIC_USER1_WRITE_64BIT_BAR_LOW__BITS_31_0__SHIFT                                            0x0
#define UVD_JMI_ATOMIC_USER1_WRITE_64BIT_BAR_LOW__BITS_31_0_MASK                                              0xFFFFFFFFL
//UVD_JMI_ATOMIC_USER1_WRITE_64BIT_BAR_HIGH
#define UVD_JMI_ATOMIC_USER1_WRITE_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                          0x0
#define UVD_JMI_ATOMIC_USER1_WRITE_64BIT_BAR_HIGH__BITS_63_32_MASK                                            0xFFFFFFFFL
//JPEG2_LMI_DROP
#define JPEG2_LMI_DROP__JPEG2_WR_DROP__SHIFT                                                                  0x0
#define JPEG2_LMI_DROP__JPEG2_RD_DROP__SHIFT                                                                  0x1
#define JPEG2_LMI_DROP__JPEG2_WR_DROP_MASK                                                                    0x00000001L
#define JPEG2_LMI_DROP__JPEG2_RD_DROP_MASK                                                                    0x00000002L
//UVD_JMI_HUFF_FENCE_64BIT_BAR_LOW
#define UVD_JMI_HUFF_FENCE_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                    0x0
#define UVD_JMI_HUFF_FENCE_64BIT_BAR_LOW__BITS_31_0_MASK                                                      0xFFFFFFFFL
//UVD_JMI_HUFF_FENCE_64BIT_BAR_HIGH
#define UVD_JMI_HUFF_FENCE_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                  0x0
#define UVD_JMI_HUFF_FENCE_64BIT_BAR_HIGH__BITS_63_32_MASK                                                    0xFFFFFFFFL
//UVD_JMI_DEC_SWAP_CNTL2
#define UVD_JMI_DEC_SWAP_CNTL2__JPEG2_RD_MC_SWAP__SHIFT                                                       0x0
#define UVD_JMI_DEC_SWAP_CNTL2__JPEG2_WR_MC_SWAP__SHIFT                                                       0x2
#define UVD_JMI_DEC_SWAP_CNTL2__JPEG2_RD_MC_SWAP_MASK                                                         0x00000003L
#define UVD_JMI_DEC_SWAP_CNTL2__JPEG2_WR_MC_SWAP_MASK                                                         0x0000000CL
//UVD_JMI_DJPEG_RAS_CNTL
#define UVD_JMI_DJPEG_RAS_CNTL__DJPEG_IH_EN__SHIFT                                                            0x0
#define UVD_JMI_DJPEG_RAS_CNTL__DJPEG_PMI_EN__SHIFT                                                           0x1
#define UVD_JMI_DJPEG_RAS_CNTL__DJPEG_REARM__SHIFT                                                            0x2
#define UVD_JMI_DJPEG_RAS_CNTL__DJPEG_STALL_EN__SHIFT                                                         0x3
#define UVD_JMI_DJPEG_RAS_CNTL__DJPEG_READY__SHIFT                                                            0x4
#define UVD_JMI_DJPEG_RAS_CNTL__DJPEG_IH_EN_MASK                                                              0x00000001L
#define UVD_JMI_DJPEG_RAS_CNTL__DJPEG_PMI_EN_MASK                                                             0x00000002L
#define UVD_JMI_DJPEG_RAS_CNTL__DJPEG_REARM_MASK                                                              0x00000004L
#define UVD_JMI_DJPEG_RAS_CNTL__DJPEG_STALL_EN_MASK                                                           0x00000008L
#define UVD_JMI_DJPEG_RAS_CNTL__DJPEG_READY_MASK                                                              0x00000010L
//UVD_JMI_EJPEG_RAS_CNTL
#define UVD_JMI_EJPEG_RAS_CNTL__EJPEG_IH_EN__SHIFT                                                            0x0
#define UVD_JMI_EJPEG_RAS_CNTL__EJPEG_PMI_EN__SHIFT                                                           0x1
#define UVD_JMI_EJPEG_RAS_CNTL__EJPEG_REARM__SHIFT                                                            0x2
#define UVD_JMI_EJPEG_RAS_CNTL__EJPEG_STALL_EN__SHIFT                                                         0x3
#define UVD_JMI_EJPEG_RAS_CNTL__EJPEG_READY__SHIFT                                                            0x4
#define UVD_JMI_EJPEG_RAS_CNTL__EJPEG_IH_EN_MASK                                                              0x00000001L
#define UVD_JMI_EJPEG_RAS_CNTL__EJPEG_PMI_EN_MASK                                                             0x00000002L
#define UVD_JMI_EJPEG_RAS_CNTL__EJPEG_REARM_MASK                                                              0x00000004L
#define UVD_JMI_EJPEG_RAS_CNTL__EJPEG_STALL_EN_MASK                                                           0x00000008L
#define UVD_JMI_EJPEG_RAS_CNTL__EJPEG_READY_MASK                                                              0x00000010L
//UVD_JPEG_DEC2_PF_CTRL
#define UVD_JPEG_DEC2_PF_CTRL__DEC2_PF_HANDLING_DIS__SHIFT                                                    0x0
#define UVD_JPEG_DEC2_PF_CTRL__DEC2_PF_SW_GATING__SHIFT                                                       0x1
#define UVD_JPEG_DEC2_PF_CTRL__DEC2_PF_HANDLING_DIS_MASK                                                      0x00000001L
#define UVD_JPEG_DEC2_PF_CTRL__DEC2_PF_SW_GATING_MASK                                                         0x00000002L


// addressBlock: uvd0_uvd_jpeg_common_dec
//JPEG_SOFT_RESET_STATUS
#define JPEG_SOFT_RESET_STATUS__JPEG_DEC_RESET_STATUS__SHIFT                                                  0x0
#define JPEG_SOFT_RESET_STATUS__JPEG2_DEC_RESET_STATUS__SHIFT                                                 0x1
#define JPEG_SOFT_RESET_STATUS__DJRBC_RESET_STATUS__SHIFT                                                     0x2
#define JPEG_SOFT_RESET_STATUS__JPEG_ENC_RESET_STATUS__SHIFT                                                  0x3
#define JPEG_SOFT_RESET_STATUS__EJRBC_RESET_STATUS__SHIFT                                                     0x4
#define JPEG_SOFT_RESET_STATUS__JMCIF_RESET_STATUS__SHIFT                                                     0x5
#define JPEG_SOFT_RESET_STATUS__JPEG_DEC_RESET_STATUS_MASK                                                    0x00000001L
#define JPEG_SOFT_RESET_STATUS__JPEG2_DEC_RESET_STATUS_MASK                                                   0x00000002L
#define JPEG_SOFT_RESET_STATUS__DJRBC_RESET_STATUS_MASK                                                       0x00000004L
#define JPEG_SOFT_RESET_STATUS__JPEG_ENC_RESET_STATUS_MASK                                                    0x00000008L
#define JPEG_SOFT_RESET_STATUS__EJRBC_RESET_STATUS_MASK                                                       0x00000010L
#define JPEG_SOFT_RESET_STATUS__JMCIF_RESET_STATUS_MASK                                                       0x00000020L
//JPEG_SYS_INT_EN
#define JPEG_SYS_INT_EN__DJPEG_CORE__SHIFT                                                                    0x0
#define JPEG_SYS_INT_EN__DJRBC__SHIFT                                                                         0x1
#define JPEG_SYS_INT_EN__DJPEG_PF_RPT__SHIFT                                                                  0x2
#define JPEG_SYS_INT_EN__EJPEG_PF_RPT__SHIFT                                                                  0x3
#define JPEG_SYS_INT_EN__EJPEG_CORE__SHIFT                                                                    0x4
#define JPEG_SYS_INT_EN__EJRBC__SHIFT                                                                         0x5
#define JPEG_SYS_INT_EN__DJPEG_CORE2__SHIFT                                                                   0x6
#define JPEG_SYS_INT_EN__DJPEG2_PF_RPT__SHIFT                                                                 0x7
#define JPEG_SYS_INT_EN__DJPEG_RAS_CNTL__SHIFT                                                                0x8
#define JPEG_SYS_INT_EN__EJPEG_RAS_CNTL__SHIFT                                                                0x9
#define JPEG_SYS_INT_EN__DJPEG_CORE_MASK                                                                      0x00000001L
#define JPEG_SYS_INT_EN__DJRBC_MASK                                                                           0x00000002L
#define JPEG_SYS_INT_EN__DJPEG_PF_RPT_MASK                                                                    0x00000004L
#define JPEG_SYS_INT_EN__EJPEG_PF_RPT_MASK                                                                    0x00000008L
#define JPEG_SYS_INT_EN__EJPEG_CORE_MASK                                                                      0x00000010L
#define JPEG_SYS_INT_EN__EJRBC_MASK                                                                           0x00000020L
#define JPEG_SYS_INT_EN__DJPEG_CORE2_MASK                                                                     0x00000040L
#define JPEG_SYS_INT_EN__DJPEG2_PF_RPT_MASK                                                                   0x00000080L
#define JPEG_SYS_INT_EN__DJPEG_RAS_CNTL_MASK                                                                  0x00000100L
#define JPEG_SYS_INT_EN__EJPEG_RAS_CNTL_MASK                                                                  0x00000200L
//JPEG_SYS_INT_STATUS
#define JPEG_SYS_INT_STATUS__DJPEG_CORE__SHIFT                                                                0x0
#define JPEG_SYS_INT_STATUS__DJRBC__SHIFT                                                                     0x1
#define JPEG_SYS_INT_STATUS__DJPEG_PF_RPT__SHIFT                                                              0x2
#define JPEG_SYS_INT_STATUS__EJPEG_PF_RPT__SHIFT                                                              0x3
#define JPEG_SYS_INT_STATUS__EJPEG_CORE__SHIFT                                                                0x4
#define JPEG_SYS_INT_STATUS__EJRBC__SHIFT                                                                     0x5
#define JPEG_SYS_INT_STATUS__DJPEG_CORE2__SHIFT                                                               0x6
#define JPEG_SYS_INT_STATUS__DJPEG2_PF_RPT__SHIFT                                                             0x7
#define JPEG_SYS_INT_STATUS__DJPEG_RAS_CNTL__SHIFT                                                            0x8
#define JPEG_SYS_INT_STATUS__EJPEG_RAS_CNTL__SHIFT                                                            0x9
#define JPEG_SYS_INT_STATUS__DJPEG_CORE_MASK                                                                  0x00000001L
#define JPEG_SYS_INT_STATUS__DJRBC_MASK                                                                       0x00000002L
#define JPEG_SYS_INT_STATUS__DJPEG_PF_RPT_MASK                                                                0x00000004L
#define JPEG_SYS_INT_STATUS__EJPEG_PF_RPT_MASK                                                                0x00000008L
#define JPEG_SYS_INT_STATUS__EJPEG_CORE_MASK                                                                  0x00000010L
#define JPEG_SYS_INT_STATUS__EJRBC_MASK                                                                       0x00000020L
#define JPEG_SYS_INT_STATUS__DJPEG_CORE2_MASK                                                                 0x00000040L
#define JPEG_SYS_INT_STATUS__DJPEG2_PF_RPT_MASK                                                               0x00000080L
#define JPEG_SYS_INT_STATUS__DJPEG_RAS_CNTL_MASK                                                              0x00000100L
#define JPEG_SYS_INT_STATUS__EJPEG_RAS_CNTL_MASK                                                              0x00000200L
//JPEG_SYS_INT_ACK
#define JPEG_SYS_INT_ACK__DJPEG_CORE__SHIFT                                                                   0x0
#define JPEG_SYS_INT_ACK__DJRBC__SHIFT                                                                        0x1
#define JPEG_SYS_INT_ACK__DJPEG_PF_RPT__SHIFT                                                                 0x2
#define JPEG_SYS_INT_ACK__EJPEG_PF_RPT__SHIFT                                                                 0x3
#define JPEG_SYS_INT_ACK__EJPEG_CORE__SHIFT                                                                   0x4
#define JPEG_SYS_INT_ACK__EJRBC__SHIFT                                                                        0x5
#define JPEG_SYS_INT_ACK__DJPEG_CORE2__SHIFT                                                                  0x6
#define JPEG_SYS_INT_ACK__DJPEG2_PF_RPT__SHIFT                                                                0x7
#define JPEG_SYS_INT_ACK__DJPEG_RAS_CNTL__SHIFT                                                               0x8
#define JPEG_SYS_INT_ACK__EJPEG_RAS_CNTL__SHIFT                                                               0x9
#define JPEG_SYS_INT_ACK__DJPEG_CORE_MASK                                                                     0x00000001L
#define JPEG_SYS_INT_ACK__DJRBC_MASK                                                                          0x00000002L
#define JPEG_SYS_INT_ACK__DJPEG_PF_RPT_MASK                                                                   0x00000004L
#define JPEG_SYS_INT_ACK__EJPEG_PF_RPT_MASK                                                                   0x00000008L
#define JPEG_SYS_INT_ACK__EJPEG_CORE_MASK                                                                     0x00000010L
#define JPEG_SYS_INT_ACK__EJRBC_MASK                                                                          0x00000020L
#define JPEG_SYS_INT_ACK__DJPEG_CORE2_MASK                                                                    0x00000040L
#define JPEG_SYS_INT_ACK__DJPEG2_PF_RPT_MASK                                                                  0x00000080L
#define JPEG_SYS_INT_ACK__DJPEG_RAS_CNTL_MASK                                                                 0x00000100L
#define JPEG_SYS_INT_ACK__EJPEG_RAS_CNTL_MASK                                                                 0x00000200L
//JPEG_MEMCHECK_SYS_INT_EN
#define JPEG_MEMCHECK_SYS_INT_EN__DJRBC_RD_ERR_EN__SHIFT                                                      0x0
#define JPEG_MEMCHECK_SYS_INT_EN__EJRBC_RD_ERR_EN__SHIFT                                                      0x1
#define JPEG_MEMCHECK_SYS_INT_EN__BSFETCH_RD_ERR_EN__SHIFT                                                    0x2
#define JPEG_MEMCHECK_SYS_INT_EN__PELFETCH_RD_ERR_EN__SHIFT                                                   0x3
#define JPEG_MEMCHECK_SYS_INT_EN__SCALAR_RD_ERR_EN__SHIFT                                                     0x4
#define JPEG_MEMCHECK_SYS_INT_EN__JPEG2_RD_ERR_EN__SHIFT                                                      0x5
#define JPEG_MEMCHECK_SYS_INT_EN__DJRBC_WR_ERR_EN__SHIFT                                                      0x6
#define JPEG_MEMCHECK_SYS_INT_EN__EJRBC_WR_ERR_EN__SHIFT                                                      0x7
#define JPEG_MEMCHECK_SYS_INT_EN__BS_WR_ERR_EN__SHIFT                                                         0x8
#define JPEG_MEMCHECK_SYS_INT_EN__OBUF_WR_ERR_EN__SHIFT                                                       0x9
#define JPEG_MEMCHECK_SYS_INT_EN__SCALAR_WR_ERR_EN__SHIFT                                                     0xa
#define JPEG_MEMCHECK_SYS_INT_EN__JPEG2_WR_ERR_EN__SHIFT                                                      0xb
#define JPEG_MEMCHECK_SYS_INT_EN__DJRBC_RD_ERR_EN_MASK                                                        0x00000001L
#define JPEG_MEMCHECK_SYS_INT_EN__EJRBC_RD_ERR_EN_MASK                                                        0x00000002L
#define JPEG_MEMCHECK_SYS_INT_EN__BSFETCH_RD_ERR_EN_MASK                                                      0x00000004L
#define JPEG_MEMCHECK_SYS_INT_EN__PELFETCH_RD_ERR_EN_MASK                                                     0x00000008L
#define JPEG_MEMCHECK_SYS_INT_EN__SCALAR_RD_ERR_EN_MASK                                                       0x00000010L
#define JPEG_MEMCHECK_SYS_INT_EN__JPEG2_RD_ERR_EN_MASK                                                        0x00000020L
#define JPEG_MEMCHECK_SYS_INT_EN__DJRBC_WR_ERR_EN_MASK                                                        0x00000040L
#define JPEG_MEMCHECK_SYS_INT_EN__EJRBC_WR_ERR_EN_MASK                                                        0x00000080L
#define JPEG_MEMCHECK_SYS_INT_EN__BS_WR_ERR_EN_MASK                                                           0x00000100L
#define JPEG_MEMCHECK_SYS_INT_EN__OBUF_WR_ERR_EN_MASK                                                         0x00000200L
#define JPEG_MEMCHECK_SYS_INT_EN__SCALAR_WR_ERR_EN_MASK                                                       0x00000400L
#define JPEG_MEMCHECK_SYS_INT_EN__JPEG2_WR_ERR_EN_MASK                                                        0x00000800L
//JPEG_MEMCHECK_SYS_INT_STAT
#define JPEG_MEMCHECK_SYS_INT_STAT__DJRBC_RD_HI_ERR__SHIFT                                                    0x0
#define JPEG_MEMCHECK_SYS_INT_STAT__DJRBC_RD_LO_ERR__SHIFT                                                    0x1
#define JPEG_MEMCHECK_SYS_INT_STAT__EJRBC_RD_HI_ERR__SHIFT                                                    0x2
#define JPEG_MEMCHECK_SYS_INT_STAT__EJRBC_RD_LO_ERR__SHIFT                                                    0x3
#define JPEG_MEMCHECK_SYS_INT_STAT__BSFETCH_RD_HI_ERR__SHIFT                                                  0x4
#define JPEG_MEMCHECK_SYS_INT_STAT__BSFETCH_RD_LO_ERR__SHIFT                                                  0x5
#define JPEG_MEMCHECK_SYS_INT_STAT__PELFETCH_RD_HI_ERR__SHIFT                                                 0x6
#define JPEG_MEMCHECK_SYS_INT_STAT__PELFETCH_RD_LO_ERR__SHIFT                                                 0x7
#define JPEG_MEMCHECK_SYS_INT_STAT__SCALAR_RD_HI_ERR__SHIFT                                                   0x8
#define JPEG_MEMCHECK_SYS_INT_STAT__SCALAR_RD_LO_ERR__SHIFT                                                   0x9
#define JPEG_MEMCHECK_SYS_INT_STAT__JPEG2_RD_HI_ERR__SHIFT                                                    0xa
#define JPEG_MEMCHECK_SYS_INT_STAT__JPEG2_RD_LO_ERR__SHIFT                                                    0xb
#define JPEG_MEMCHECK_SYS_INT_STAT__DJRBC_WR_HI_ERR__SHIFT                                                    0xc
#define JPEG_MEMCHECK_SYS_INT_STAT__DJRBC_WR_LO_ERR__SHIFT                                                    0xd
#define JPEG_MEMCHECK_SYS_INT_STAT__EJRBC_WR_HI_ERR__SHIFT                                                    0xe
#define JPEG_MEMCHECK_SYS_INT_STAT__EJRBC_WR_LO_ERR__SHIFT                                                    0xf
#define JPEG_MEMCHECK_SYS_INT_STAT__BS_WR_HI_ERR__SHIFT                                                       0x10
#define JPEG_MEMCHECK_SYS_INT_STAT__BS_WR_LO_ERR__SHIFT                                                       0x11
#define JPEG_MEMCHECK_SYS_INT_STAT__OBUF_WR_HI_ERR__SHIFT                                                     0x12
#define JPEG_MEMCHECK_SYS_INT_STAT__OBUF_WR_LO_ERR__SHIFT                                                     0x13
#define JPEG_MEMCHECK_SYS_INT_STAT__SCALAR_WR_HI_ERR__SHIFT                                                   0x14
#define JPEG_MEMCHECK_SYS_INT_STAT__SCALAR_WR_LO_ERR__SHIFT                                                   0x15
#define JPEG_MEMCHECK_SYS_INT_STAT__JPEG2_WR_HI_ERR__SHIFT                                                    0x16
#define JPEG_MEMCHECK_SYS_INT_STAT__JPEG2_WR_LO_ERR__SHIFT                                                    0x17
#define JPEG_MEMCHECK_SYS_INT_STAT__DJRBC_RD_HI_ERR_MASK                                                      0x00000001L
#define JPEG_MEMCHECK_SYS_INT_STAT__DJRBC_RD_LO_ERR_MASK                                                      0x00000002L
#define JPEG_MEMCHECK_SYS_INT_STAT__EJRBC_RD_HI_ERR_MASK                                                      0x00000004L
#define JPEG_MEMCHECK_SYS_INT_STAT__EJRBC_RD_LO_ERR_MASK                                                      0x00000008L
#define JPEG_MEMCHECK_SYS_INT_STAT__BSFETCH_RD_HI_ERR_MASK                                                    0x00000010L
#define JPEG_MEMCHECK_SYS_INT_STAT__BSFETCH_RD_LO_ERR_MASK                                                    0x00000020L
#define JPEG_MEMCHECK_SYS_INT_STAT__PELFETCH_RD_HI_ERR_MASK                                                   0x00000040L
#define JPEG_MEMCHECK_SYS_INT_STAT__PELFETCH_RD_LO_ERR_MASK                                                   0x00000080L
#define JPEG_MEMCHECK_SYS_INT_STAT__SCALAR_RD_HI_ERR_MASK                                                     0x00000100L
#define JPEG_MEMCHECK_SYS_INT_STAT__SCALAR_RD_LO_ERR_MASK                                                     0x00000200L
#define JPEG_MEMCHECK_SYS_INT_STAT__JPEG2_RD_HI_ERR_MASK                                                      0x00000400L
#define JPEG_MEMCHECK_SYS_INT_STAT__JPEG2_RD_LO_ERR_MASK                                                      0x00000800L
#define JPEG_MEMCHECK_SYS_INT_STAT__DJRBC_WR_HI_ERR_MASK                                                      0x00001000L
#define JPEG_MEMCHECK_SYS_INT_STAT__DJRBC_WR_LO_ERR_MASK                                                      0x00002000L
#define JPEG_MEMCHECK_SYS_INT_STAT__EJRBC_WR_HI_ERR_MASK                                                      0x00004000L
#define JPEG_MEMCHECK_SYS_INT_STAT__EJRBC_WR_LO_ERR_MASK                                                      0x00008000L
#define JPEG_MEMCHECK_SYS_INT_STAT__BS_WR_HI_ERR_MASK                                                         0x00010000L
#define JPEG_MEMCHECK_SYS_INT_STAT__BS_WR_LO_ERR_MASK                                                         0x00020000L
#define JPEG_MEMCHECK_SYS_INT_STAT__OBUF_WR_HI_ERR_MASK                                                       0x00040000L
#define JPEG_MEMCHECK_SYS_INT_STAT__OBUF_WR_LO_ERR_MASK                                                       0x00080000L
#define JPEG_MEMCHECK_SYS_INT_STAT__SCALAR_WR_HI_ERR_MASK                                                     0x00100000L
#define JPEG_MEMCHECK_SYS_INT_STAT__SCALAR_WR_LO_ERR_MASK                                                     0x00200000L
#define JPEG_MEMCHECK_SYS_INT_STAT__JPEG2_WR_HI_ERR_MASK                                                      0x00400000L
#define JPEG_MEMCHECK_SYS_INT_STAT__JPEG2_WR_LO_ERR_MASK                                                      0x00800000L
//JPEG_MEMCHECK_SYS_INT_ACK
#define JPEG_MEMCHECK_SYS_INT_ACK__DJRBC_RD_HI_ERR__SHIFT                                                     0x0
#define JPEG_MEMCHECK_SYS_INT_ACK__DJRBC_RD_LO_ERR__SHIFT                                                     0x1
#define JPEG_MEMCHECK_SYS_INT_ACK__EJRBC_RD_HI_ERR__SHIFT                                                     0x2
#define JPEG_MEMCHECK_SYS_INT_ACK__EJRBC_RD_LO_ERR__SHIFT                                                     0x3
#define JPEG_MEMCHECK_SYS_INT_ACK__BSFETCH_RD_HI_ERR__SHIFT                                                   0x4
#define JPEG_MEMCHECK_SYS_INT_ACK__BSFETCH_RD_LO_ERR__SHIFT                                                   0x5
#define JPEG_MEMCHECK_SYS_INT_ACK__PELFETCH_RD_HI_ERR__SHIFT                                                  0x6
#define JPEG_MEMCHECK_SYS_INT_ACK__PELFETCH_RD_LO_ERR__SHIFT                                                  0x7
#define JPEG_MEMCHECK_SYS_INT_ACK__SCALAR_RD_HI_ERR__SHIFT                                                    0x8
#define JPEG_MEMCHECK_SYS_INT_ACK__SCALAR_RD_LO_ERR__SHIFT                                                    0x9
#define JPEG_MEMCHECK_SYS_INT_ACK__JPEG2_RD_HI_ERR__SHIFT                                                     0xa
#define JPEG_MEMCHECK_SYS_INT_ACK__JPEG2_RD_LO_ERR__SHIFT                                                     0xb
#define JPEG_MEMCHECK_SYS_INT_ACK__DJRBC_WR_HI_ERR__SHIFT                                                     0xc
#define JPEG_MEMCHECK_SYS_INT_ACK__DJRBC_WR_LO_ERR__SHIFT                                                     0xd
#define JPEG_MEMCHECK_SYS_INT_ACK__EJRBC_WR_HI_ERR__SHIFT                                                     0xe
#define JPEG_MEMCHECK_SYS_INT_ACK__EJRBC_WR_LO_ERR__SHIFT                                                     0xf
#define JPEG_MEMCHECK_SYS_INT_ACK__BS_WR_HI_ERR__SHIFT                                                        0x10
#define JPEG_MEMCHECK_SYS_INT_ACK__BS_WR_LO_ERR__SHIFT                                                        0x11
#define JPEG_MEMCHECK_SYS_INT_ACK__OBUF_WR_HI_ERR__SHIFT                                                      0x12
#define JPEG_MEMCHECK_SYS_INT_ACK__OBUF_WR_LO_ERR__SHIFT                                                      0x13
#define JPEG_MEMCHECK_SYS_INT_ACK__SCALAR_WR_HI_ERR__SHIFT                                                    0x14
#define JPEG_MEMCHECK_SYS_INT_ACK__SCALAR_WR_LO_ERR__SHIFT                                                    0x15
#define JPEG_MEMCHECK_SYS_INT_ACK__JPEG2_WR_HI_ERR__SHIFT                                                     0x16
#define JPEG_MEMCHECK_SYS_INT_ACK__JPEG2_WR_LO_ERR__SHIFT                                                     0x17
#define JPEG_MEMCHECK_SYS_INT_ACK__DJRBC_RD_HI_ERR_MASK                                                       0x00000001L
#define JPEG_MEMCHECK_SYS_INT_ACK__DJRBC_RD_LO_ERR_MASK                                                       0x00000002L
#define JPEG_MEMCHECK_SYS_INT_ACK__EJRBC_RD_HI_ERR_MASK                                                       0x00000004L
#define JPEG_MEMCHECK_SYS_INT_ACK__EJRBC_RD_LO_ERR_MASK                                                       0x00000008L
#define JPEG_MEMCHECK_SYS_INT_ACK__BSFETCH_RD_HI_ERR_MASK                                                     0x00000010L
#define JPEG_MEMCHECK_SYS_INT_ACK__BSFETCH_RD_LO_ERR_MASK                                                     0x00000020L
#define JPEG_MEMCHECK_SYS_INT_ACK__PELFETCH_RD_HI_ERR_MASK                                                    0x00000040L
#define JPEG_MEMCHECK_SYS_INT_ACK__PELFETCH_RD_LO_ERR_MASK                                                    0x00000080L
#define JPEG_MEMCHECK_SYS_INT_ACK__SCALAR_RD_HI_ERR_MASK                                                      0x00000100L
#define JPEG_MEMCHECK_SYS_INT_ACK__SCALAR_RD_LO_ERR_MASK                                                      0x00000200L
#define JPEG_MEMCHECK_SYS_INT_ACK__JPEG2_RD_HI_ERR_MASK                                                       0x00000400L
#define JPEG_MEMCHECK_SYS_INT_ACK__JPEG2_RD_LO_ERR_MASK                                                       0x00000800L
#define JPEG_MEMCHECK_SYS_INT_ACK__DJRBC_WR_HI_ERR_MASK                                                       0x00001000L
#define JPEG_MEMCHECK_SYS_INT_ACK__DJRBC_WR_LO_ERR_MASK                                                       0x00002000L
#define JPEG_MEMCHECK_SYS_INT_ACK__EJRBC_WR_HI_ERR_MASK                                                       0x00004000L
#define JPEG_MEMCHECK_SYS_INT_ACK__EJRBC_WR_LO_ERR_MASK                                                       0x00008000L
#define JPEG_MEMCHECK_SYS_INT_ACK__BS_WR_HI_ERR_MASK                                                          0x00010000L
#define JPEG_MEMCHECK_SYS_INT_ACK__BS_WR_LO_ERR_MASK                                                          0x00020000L
#define JPEG_MEMCHECK_SYS_INT_ACK__OBUF_WR_HI_ERR_MASK                                                        0x00040000L
#define JPEG_MEMCHECK_SYS_INT_ACK__OBUF_WR_LO_ERR_MASK                                                        0x00080000L
#define JPEG_MEMCHECK_SYS_INT_ACK__SCALAR_WR_HI_ERR_MASK                                                      0x00100000L
#define JPEG_MEMCHECK_SYS_INT_ACK__SCALAR_WR_LO_ERR_MASK                                                      0x00200000L
#define JPEG_MEMCHECK_SYS_INT_ACK__JPEG2_WR_HI_ERR_MASK                                                       0x00400000L
#define JPEG_MEMCHECK_SYS_INT_ACK__JPEG2_WR_LO_ERR_MASK                                                       0x00800000L
//JPEG_MASTINT_EN
#define JPEG_MASTINT_EN__OVERRUN_RST__SHIFT                                                                   0x0
#define JPEG_MASTINT_EN__INT_OVERRUN__SHIFT                                                                   0x4
#define JPEG_MASTINT_EN__OVERRUN_RST_MASK                                                                     0x00000001L
#define JPEG_MASTINT_EN__INT_OVERRUN_MASK                                                                     0x007FFFF0L
//JPEG_IH_CTRL
#define JPEG_IH_CTRL__IH_SOFT_RESET__SHIFT                                                                    0x0
#define JPEG_IH_CTRL__IH_STALL_EN__SHIFT                                                                      0x1
#define JPEG_IH_CTRL__IH_STATUS_CLEAN__SHIFT                                                                  0x2
#define JPEG_IH_CTRL__IH_VMID__SHIFT                                                                          0x3
#define JPEG_IH_CTRL__IH_USER_DATA__SHIFT                                                                     0x7
#define JPEG_IH_CTRL__IH_RINGID__SHIFT                                                                        0x13
#define JPEG_IH_CTRL__IH_SOFT_RESET_MASK                                                                      0x00000001L
#define JPEG_IH_CTRL__IH_STALL_EN_MASK                                                                        0x00000002L
#define JPEG_IH_CTRL__IH_STATUS_CLEAN_MASK                                                                    0x00000004L
#define JPEG_IH_CTRL__IH_VMID_MASK                                                                            0x00000078L
#define JPEG_IH_CTRL__IH_USER_DATA_MASK                                                                       0x0007FF80L
#define JPEG_IH_CTRL__IH_RINGID_MASK                                                                          0x07F80000L
//JRBBM_ARB_CTRL
#define JRBBM_ARB_CTRL__DJRBC_DROP__SHIFT                                                                     0x0
#define JRBBM_ARB_CTRL__EJRBC_DROP__SHIFT                                                                     0x1
#define JRBBM_ARB_CTRL__SRBM_DROP__SHIFT                                                                      0x2
#define JRBBM_ARB_CTRL__DJRBC_DROP_MASK                                                                       0x00000001L
#define JRBBM_ARB_CTRL__EJRBC_DROP_MASK                                                                       0x00000002L
#define JRBBM_ARB_CTRL__SRBM_DROP_MASK                                                                        0x00000004L


// addressBlock: uvd0_uvd_jpeg_common_sclk_dec
//JPEG_CGC_GATE
#define JPEG_CGC_GATE__JPEG_DEC__SHIFT                                                                        0x0
#define JPEG_CGC_GATE__JPEG2_DEC__SHIFT                                                                       0x1
#define JPEG_CGC_GATE__JPEG_ENC__SHIFT                                                                        0x2
#define JPEG_CGC_GATE__JMCIF__SHIFT                                                                           0x3
#define JPEG_CGC_GATE__JRBBM__SHIFT                                                                           0x4
#define JPEG_CGC_GATE__JPEG_DEC_MASK                                                                          0x00000001L
#define JPEG_CGC_GATE__JPEG2_DEC_MASK                                                                         0x00000002L
#define JPEG_CGC_GATE__JPEG_ENC_MASK                                                                          0x00000004L
#define JPEG_CGC_GATE__JMCIF_MASK                                                                             0x00000008L
#define JPEG_CGC_GATE__JRBBM_MASK                                                                             0x00000010L
//JPEG_CGC_CTRL
#define JPEG_CGC_CTRL__DYN_CLOCK_MODE__SHIFT                                                                  0x0
#define JPEG_CGC_CTRL__CLK_GATE_DLY_TIMER__SHIFT                                                              0x1
#define JPEG_CGC_CTRL__CLK_OFF_DELAY__SHIFT                                                                   0x5
#define JPEG_CGC_CTRL__JPEG_DEC_MODE__SHIFT                                                                   0x10
#define JPEG_CGC_CTRL__JPEG2_DEC_MODE__SHIFT                                                                  0x11
#define JPEG_CGC_CTRL__JPEG_ENC_MODE__SHIFT                                                                   0x12
#define JPEG_CGC_CTRL__JMCIF_MODE__SHIFT                                                                      0x13
#define JPEG_CGC_CTRL__JRBBM_MODE__SHIFT                                                                      0x14
#define JPEG_CGC_CTRL__DYN_CLOCK_MODE_MASK                                                                    0x00000001L
#define JPEG_CGC_CTRL__CLK_GATE_DLY_TIMER_MASK                                                                0x0000001EL
#define JPEG_CGC_CTRL__CLK_OFF_DELAY_MASK                                                                     0x00001FE0L
#define JPEG_CGC_CTRL__JPEG_DEC_MODE_MASK                                                                     0x00010000L
#define JPEG_CGC_CTRL__JPEG2_DEC_MODE_MASK                                                                    0x00020000L
#define JPEG_CGC_CTRL__JPEG_ENC_MODE_MASK                                                                     0x00040000L
#define JPEG_CGC_CTRL__JMCIF_MODE_MASK                                                                        0x00080000L
#define JPEG_CGC_CTRL__JRBBM_MODE_MASK                                                                        0x00100000L
//JPEG_CGC_STATUS
#define JPEG_CGC_STATUS__JPEG_DEC_VCLK_ACTIVE__SHIFT                                                          0x0
#define JPEG_CGC_STATUS__JPEG_DEC_SCLK_ACTIVE__SHIFT                                                          0x1
#define JPEG_CGC_STATUS__JPEG2_DEC_VCLK_ACTIVE__SHIFT                                                         0x2
#define JPEG_CGC_STATUS__JPEG2_DEC_SCLK_ACTIVE__SHIFT                                                         0x3
#define JPEG_CGC_STATUS__JPEG_ENC_VCLK_ACTIVE__SHIFT                                                          0x4
#define JPEG_CGC_STATUS__JPEG_ENC_SCLK_ACTIVE__SHIFT                                                          0x5
#define JPEG_CGC_STATUS__JMCIF_SCLK_ACTIVE__SHIFT                                                             0x6
#define JPEG_CGC_STATUS__JRBBM_VCLK_ACTIVE__SHIFT                                                             0x7
#define JPEG_CGC_STATUS__JRBBM_SCLK_ACTIVE__SHIFT                                                             0x8
#define JPEG_CGC_STATUS__JPEG_DEC_VCLK_ACTIVE_MASK                                                            0x00000001L
#define JPEG_CGC_STATUS__JPEG_DEC_SCLK_ACTIVE_MASK                                                            0x00000002L
#define JPEG_CGC_STATUS__JPEG2_DEC_VCLK_ACTIVE_MASK                                                           0x00000004L
#define JPEG_CGC_STATUS__JPEG2_DEC_SCLK_ACTIVE_MASK                                                           0x00000008L
#define JPEG_CGC_STATUS__JPEG_ENC_VCLK_ACTIVE_MASK                                                            0x00000010L
#define JPEG_CGC_STATUS__JPEG_ENC_SCLK_ACTIVE_MASK                                                            0x00000020L
#define JPEG_CGC_STATUS__JMCIF_SCLK_ACTIVE_MASK                                                               0x00000040L
#define JPEG_CGC_STATUS__JRBBM_VCLK_ACTIVE_MASK                                                               0x00000080L
#define JPEG_CGC_STATUS__JRBBM_SCLK_ACTIVE_MASK                                                               0x00000100L
//JPEG_COMN_CGC_MEM_CTRL
#define JPEG_COMN_CGC_MEM_CTRL__JMCIF_LS_EN__SHIFT                                                            0x0
#define JPEG_COMN_CGC_MEM_CTRL__JMCIF_DS_EN__SHIFT                                                            0x1
#define JPEG_COMN_CGC_MEM_CTRL__JMCIF_SD_EN__SHIFT                                                            0x2
#define JPEG_COMN_CGC_MEM_CTRL__JMCIF_LS_SW_EN__SHIFT                                                         0x3
#define JPEG_COMN_CGC_MEM_CTRL__LS_SET_DELAY__SHIFT                                                           0x10
#define JPEG_COMN_CGC_MEM_CTRL__LS_CLEAR_DELAY__SHIFT                                                         0x14
#define JPEG_COMN_CGC_MEM_CTRL__JMCIF_LS_EN_MASK                                                              0x00000001L
#define JPEG_COMN_CGC_MEM_CTRL__JMCIF_DS_EN_MASK                                                              0x00000002L
#define JPEG_COMN_CGC_MEM_CTRL__JMCIF_SD_EN_MASK                                                              0x00000004L
#define JPEG_COMN_CGC_MEM_CTRL__JMCIF_LS_SW_EN_MASK                                                           0x00000008L
#define JPEG_COMN_CGC_MEM_CTRL__LS_SET_DELAY_MASK                                                             0x000F0000L
#define JPEG_COMN_CGC_MEM_CTRL__LS_CLEAR_DELAY_MASK                                                           0x00F00000L
//JPEG_DEC_CGC_MEM_CTRL
#define JPEG_DEC_CGC_MEM_CTRL__JPEG_DEC_LS_EN__SHIFT                                                          0x0
#define JPEG_DEC_CGC_MEM_CTRL__JPEG_DEC_DS_EN__SHIFT                                                          0x1
#define JPEG_DEC_CGC_MEM_CTRL__JPEG_DEC_SD_EN__SHIFT                                                          0x2
#define JPEG_DEC_CGC_MEM_CTRL__JPEG_DEC_LS_SW_EN__SHIFT                                                       0x3
#define JPEG_DEC_CGC_MEM_CTRL__JPEG_DEC_LS_EN_MASK                                                            0x00000001L
#define JPEG_DEC_CGC_MEM_CTRL__JPEG_DEC_DS_EN_MASK                                                            0x00000002L
#define JPEG_DEC_CGC_MEM_CTRL__JPEG_DEC_SD_EN_MASK                                                            0x00000004L
#define JPEG_DEC_CGC_MEM_CTRL__JPEG_DEC_LS_SW_EN_MASK                                                         0x00000008L
//JPEG2_DEC_CGC_MEM_CTRL
#define JPEG2_DEC_CGC_MEM_CTRL__JPEG2_DEC_LS_EN__SHIFT                                                        0x0
#define JPEG2_DEC_CGC_MEM_CTRL__JPEG2_DEC_DS_EN__SHIFT                                                        0x1
#define JPEG2_DEC_CGC_MEM_CTRL__JPEG2_DEC_SD_EN__SHIFT                                                        0x2
#define JPEG2_DEC_CGC_MEM_CTRL__JPEG2_DEC_LS_SW_EN__SHIFT                                                     0x3
#define JPEG2_DEC_CGC_MEM_CTRL__JPEG2_DEC_LS_EN_MASK                                                          0x00000001L
#define JPEG2_DEC_CGC_MEM_CTRL__JPEG2_DEC_DS_EN_MASK                                                          0x00000002L
#define JPEG2_DEC_CGC_MEM_CTRL__JPEG2_DEC_SD_EN_MASK                                                          0x00000004L
#define JPEG2_DEC_CGC_MEM_CTRL__JPEG2_DEC_LS_SW_EN_MASK                                                       0x00000008L
//JPEG_ENC_CGC_MEM_CTRL
#define JPEG_ENC_CGC_MEM_CTRL__JPEG_ENC_LS_EN__SHIFT                                                          0x0
#define JPEG_ENC_CGC_MEM_CTRL__JPEG_ENC_DS_EN__SHIFT                                                          0x1
#define JPEG_ENC_CGC_MEM_CTRL__JPEG_ENC_SD_EN__SHIFT                                                          0x2
#define JPEG_ENC_CGC_MEM_CTRL__JPEG_ENC_LS_SW_EN__SHIFT                                                       0x3
#define JPEG_ENC_CGC_MEM_CTRL__JPEG_ENC_LS_EN_MASK                                                            0x00000001L
#define JPEG_ENC_CGC_MEM_CTRL__JPEG_ENC_DS_EN_MASK                                                            0x00000002L
#define JPEG_ENC_CGC_MEM_CTRL__JPEG_ENC_SD_EN_MASK                                                            0x00000004L
#define JPEG_ENC_CGC_MEM_CTRL__JPEG_ENC_LS_SW_EN_MASK                                                         0x00000008L
//JPEG_SOFT_RESET2
#define JPEG_SOFT_RESET2__ATOMIC_SOFT_RESET__SHIFT                                                            0x0
#define JPEG_SOFT_RESET2__ATOMIC_SOFT_RESET_MASK                                                              0x00000001L
//JPEG_PERF_BANK_CONF
#define JPEG_PERF_BANK_CONF__RESET__SHIFT                                                                     0x0
#define JPEG_PERF_BANK_CONF__PEEK__SHIFT                                                                      0x8
#define JPEG_PERF_BANK_CONF__CONCATENATE__SHIFT                                                               0x10
#define JPEG_PERF_BANK_CONF__RESET_MASK                                                                       0x0000000FL
#define JPEG_PERF_BANK_CONF__PEEK_MASK                                                                        0x00000F00L
#define JPEG_PERF_BANK_CONF__CONCATENATE_MASK                                                                 0x00030000L
//JPEG_PERF_BANK_EVENT_SEL
#define JPEG_PERF_BANK_EVENT_SEL__SEL0__SHIFT                                                                 0x0
#define JPEG_PERF_BANK_EVENT_SEL__SEL1__SHIFT                                                                 0x8
#define JPEG_PERF_BANK_EVENT_SEL__SEL2__SHIFT                                                                 0x10
#define JPEG_PERF_BANK_EVENT_SEL__SEL3__SHIFT                                                                 0x18
#define JPEG_PERF_BANK_EVENT_SEL__SEL0_MASK                                                                   0x000000FFL
#define JPEG_PERF_BANK_EVENT_SEL__SEL1_MASK                                                                   0x0000FF00L
#define JPEG_PERF_BANK_EVENT_SEL__SEL2_MASK                                                                   0x00FF0000L
#define JPEG_PERF_BANK_EVENT_SEL__SEL3_MASK                                                                   0xFF000000L
//JPEG_PERF_BANK_COUNT0
#define JPEG_PERF_BANK_COUNT0__COUNT__SHIFT                                                                   0x0
#define JPEG_PERF_BANK_COUNT0__COUNT_MASK                                                                     0xFFFFFFFFL
//JPEG_PERF_BANK_COUNT1
#define JPEG_PERF_BANK_COUNT1__COUNT__SHIFT                                                                   0x0
#define JPEG_PERF_BANK_COUNT1__COUNT_MASK                                                                     0xFFFFFFFFL
//JPEG_PERF_BANK_COUNT2
#define JPEG_PERF_BANK_COUNT2__COUNT__SHIFT                                                                   0x0
#define JPEG_PERF_BANK_COUNT2__COUNT_MASK                                                                     0xFFFFFFFFL
//JPEG_PERF_BANK_COUNT3
#define JPEG_PERF_BANK_COUNT3__COUNT__SHIFT                                                                   0x0
#define JPEG_PERF_BANK_COUNT3__COUNT_MASK                                                                     0xFFFFFFFFL


// addressBlock: uvd0_uvd_pg_dec
//UVD_PGFSM_CONFIG
#define UVD_PGFSM_CONFIG__UVDM_PWR_CONFIG__SHIFT                                                              0x0
#define UVD_PGFSM_CONFIG__UVDS_PWR_CONFIG__SHIFT                                                              0x2
#define UVD_PGFSM_CONFIG__UVDF_PWR_CONFIG__SHIFT                                                              0x4
#define UVD_PGFSM_CONFIG__UVDTC_PWR_CONFIG__SHIFT                                                             0x6
#define UVD_PGFSM_CONFIG__UVDB_PWR_CONFIG__SHIFT                                                              0x8
#define UVD_PGFSM_CONFIG__UVDTA_PWR_CONFIG__SHIFT                                                             0xa
#define UVD_PGFSM_CONFIG__UVDLM_PWR_CONFIG__SHIFT                                                             0xc
#define UVD_PGFSM_CONFIG__UVDTD_PWR_CONFIG__SHIFT                                                             0xe
#define UVD_PGFSM_CONFIG__UVDTE_PWR_CONFIG__SHIFT                                                             0x10
#define UVD_PGFSM_CONFIG__UVDE_PWR_CONFIG__SHIFT                                                              0x12
#define UVD_PGFSM_CONFIG__UVDAB_PWR_CONFIG__SHIFT                                                             0x14
#define UVD_PGFSM_CONFIG__UVDJ_PWR_CONFIG__SHIFT                                                              0x16
#define UVD_PGFSM_CONFIG__UVDTB_PWR_CONFIG__SHIFT                                                             0x18
#define UVD_PGFSM_CONFIG__UVDNA_PWR_CONFIG__SHIFT                                                             0x1a
#define UVD_PGFSM_CONFIG__UVDNB_PWR_CONFIG__SHIFT                                                             0x1c
#define UVD_PGFSM_CONFIG__UVDM_PWR_CONFIG_MASK                                                                0x00000003L
#define UVD_PGFSM_CONFIG__UVDS_PWR_CONFIG_MASK                                                                0x0000000CL
#define UVD_PGFSM_CONFIG__UVDF_PWR_CONFIG_MASK                                                                0x00000030L
#define UVD_PGFSM_CONFIG__UVDTC_PWR_CONFIG_MASK                                                               0x000000C0L
#define UVD_PGFSM_CONFIG__UVDB_PWR_CONFIG_MASK                                                                0x00000300L
#define UVD_PGFSM_CONFIG__UVDTA_PWR_CONFIG_MASK                                                               0x00000C00L
#define UVD_PGFSM_CONFIG__UVDLM_PWR_CONFIG_MASK                                                               0x00003000L
#define UVD_PGFSM_CONFIG__UVDTD_PWR_CONFIG_MASK                                                               0x0000C000L
#define UVD_PGFSM_CONFIG__UVDTE_PWR_CONFIG_MASK                                                               0x00030000L
#define UVD_PGFSM_CONFIG__UVDE_PWR_CONFIG_MASK                                                                0x000C0000L
#define UVD_PGFSM_CONFIG__UVDAB_PWR_CONFIG_MASK                                                               0x00300000L
#define UVD_PGFSM_CONFIG__UVDJ_PWR_CONFIG_MASK                                                                0x00C00000L
#define UVD_PGFSM_CONFIG__UVDTB_PWR_CONFIG_MASK                                                               0x03000000L
#define UVD_PGFSM_CONFIG__UVDNA_PWR_CONFIG_MASK                                                               0x0C000000L
//UVD_PGFSM_STATUS
#define UVD_PGFSM_STATUS__UVDM_PWR_STATUS__SHIFT                                                              0x0
#define UVD_PGFSM_STATUS__UVDS_PWR_STATUS__SHIFT                                                              0x2
#define UVD_PGFSM_STATUS__UVDF_PWR_STATUS__SHIFT                                                              0x4
#define UVD_PGFSM_STATUS__UVDTC_PWR_STATUS__SHIFT                                                             0x6
#define UVD_PGFSM_STATUS__UVDB_PWR_STATUS__SHIFT                                                              0x8
#define UVD_PGFSM_STATUS__UVDTA_PWR_STATUS__SHIFT                                                             0xa
#define UVD_PGFSM_STATUS__UVDLM_PWR_STATUS__SHIFT                                                             0xc
#define UVD_PGFSM_STATUS__UVDTD_PWR_STATUS__SHIFT                                                             0xe
#define UVD_PGFSM_STATUS__UVDTE_PWR_STATUS__SHIFT                                                             0x10
#define UVD_PGFSM_STATUS__UVDE_PWR_STATUS__SHIFT                                                              0x12
#define UVD_PGFSM_STATUS__UVDAB_PWR_STATUS__SHIFT                                                             0x14
#define UVD_PGFSM_STATUS__UVDJ_PWR_STATUS__SHIFT                                                              0x16
#define UVD_PGFSM_STATUS__UVDTB_PWR_STATUS__SHIFT                                                             0x18
#define UVD_PGFSM_STATUS__UVDNA_PWR_STATUS__SHIFT                                                             0x1a
#define UVD_PGFSM_STATUS__UVDNB_PWR_STATUS__SHIFT                                                             0x1c
#define UVD_PGFSM_STATUS__UVDM_PWR_STATUS_MASK                                                                0x00000003L
#define UVD_PGFSM_STATUS__UVDS_PWR_STATUS_MASK                                                                0x0000000CL
#define UVD_PGFSM_STATUS__UVDF_PWR_STATUS_MASK                                                                0x00000030L
#define UVD_PGFSM_STATUS__UVDTC_PWR_STATUS_MASK                                                               0x000000C0L
#define UVD_PGFSM_STATUS__UVDB_PWR_STATUS_MASK                                                                0x00000300L
#define UVD_PGFSM_STATUS__UVDTA_PWR_STATUS_MASK                                                               0x00000C00L
#define UVD_PGFSM_STATUS__UVDLM_PWR_STATUS_MASK                                                               0x00003000L
#define UVD_PGFSM_STATUS__UVDTD_PWR_STATUS_MASK                                                               0x0000C000L
#define UVD_PGFSM_STATUS__UVDTE_PWR_STATUS_MASK                                                               0x00030000L
#define UVD_PGFSM_STATUS__UVDE_PWR_STATUS_MASK                                                                0x000C0000L
#define UVD_PGFSM_STATUS__UVDAB_PWR_STATUS_MASK                                                               0x00300000L
#define UVD_PGFSM_STATUS__UVDJ_PWR_STATUS_MASK                                                                0x00C00000L
#define UVD_PGFSM_STATUS__UVDTB_PWR_STATUS_MASK                                                               0x03000000L
#define UVD_PGFSM_STATUS__UVDNA_PWR_STATUS_MASK                                                               0x0C000000L
#define UVD_PGFSM_CONFIG__UVDNB_PWR_CONFIG_MASK                                                               0x30000000L
//UVD_POWER_STATUS
#define UVD_POWER_STATUS__UVD_POWER_STATUS__SHIFT                                                             0x0
#define UVD_POWER_STATUS__UVD_PG_MODE__SHIFT                                                                  0x2
#define UVD_POWER_STATUS__UVD_CG_MODE__SHIFT                                                                  0x4
#define UVD_POWER_STATUS__UVD_PG_EN__SHIFT                                                                    0x8
#define UVD_POWER_STATUS__RBC_SNOOP_DIS__SHIFT                                                                0x9
#define UVD_POWER_STATUS__SW_RB_SNOOP_DIS__SHIFT                                                              0xb
#define UVD_POWER_STATUS__STALL_DPG_POWER_UP__SHIFT                                                           0x1f
#define UVD_POWER_STATUS__UVD_POWER_STATUS_MASK                                                               0x00000003L
#define UVD_POWER_STATUS__UVD_PG_MODE_MASK                                                                    0x00000004L
#define UVD_POWER_STATUS__UVD_CG_MODE_MASK                                                                    0x00000030L
#define UVD_POWER_STATUS__UVD_PG_EN_MASK                                                                      0x00000100L
#define UVD_POWER_STATUS__RBC_SNOOP_DIS_MASK                                                                  0x00000200L
#define UVD_POWER_STATUS__SW_RB_SNOOP_DIS_MASK                                                                0x00000800L
#define UVD_POWER_STATUS__STALL_DPG_POWER_UP_MASK                                                             0x80000000L
//UVD_JPEG_POWER_STATUS
#define UVD_JPEG_POWER_STATUS__JPEG_POWER_STATUS__SHIFT                                                       0x0
#define UVD_JPEG_POWER_STATUS__JPEG_PG_MODE__SHIFT                                                            0x4
#define UVD_JPEG_POWER_STATUS__JRBC_DEC_SNOOP_DIS__SHIFT                                                      0x8
#define UVD_JPEG_POWER_STATUS__JRBC_ENC_SNOOP_DIS__SHIFT                                                      0x9
#define UVD_JPEG_POWER_STATUS__STALL_JDPG_POWER_UP__SHIFT                                                     0x1f
#define UVD_JPEG_POWER_STATUS__JPEG_POWER_STATUS_MASK                                                         0x00000001L
#define UVD_JPEG_POWER_STATUS__JPEG_PG_MODE_MASK                                                              0x00000010L
#define UVD_JPEG_POWER_STATUS__JRBC_DEC_SNOOP_DIS_MASK                                                        0x00000100L
#define UVD_JPEG_POWER_STATUS__JRBC_ENC_SNOOP_DIS_MASK                                                        0x00000200L
#define UVD_JPEG_POWER_STATUS__STALL_JDPG_POWER_UP_MASK                                                       0x80000000L
//UVD_PG_IND_INDEX
#define UVD_PG_IND_INDEX__INDEX__SHIFT                                                                        0x0
#define UVD_PG_IND_INDEX__INDEX_MASK                                                                          0x0000003FL
//UVD_PG_IND_DATA
#define UVD_PG_IND_DATA__DATA__SHIFT                                                                          0x0
#define UVD_PG_IND_DATA__DATA_MASK                                                                            0xFFFFFFFFL
//CC_UVD_HARVESTING
#define CC_UVD_HARVESTING__MMSCH_DISABLE__SHIFT                                                               0x0
#define CC_UVD_HARVESTING__UVD_DISABLE__SHIFT                                                                 0x1
#define CC_UVD_HARVESTING__MMSCH_DISABLE_MASK                                                                 0x00000001L
#define CC_UVD_HARVESTING__UVD_DISABLE_MASK                                                                   0x00000002L
//UVD_DPG_LMA_CTL
#define UVD_DPG_LMA_CTL__READ_WRITE__SHIFT                                                                    0x0
#define UVD_DPG_LMA_CTL__MASK_EN__SHIFT                                                                       0x1
#define UVD_DPG_LMA_CTL__ADDR_AUTO_INCREMENT__SHIFT                                                           0x2
#define UVD_DPG_LMA_CTL__SRAM_SEL__SHIFT                                                                      0x4
#define UVD_DPG_LMA_CTL__READ_WRITE_ADDR__SHIFT                                                               0x10
#define UVD_DPG_LMA_CTL__READ_WRITE_MASK                                                                      0x00000001L
#define UVD_DPG_LMA_CTL__MASK_EN_MASK                                                                         0x00000002L
#define UVD_DPG_LMA_CTL__ADDR_AUTO_INCREMENT_MASK                                                             0x00000004L
#define UVD_DPG_LMA_CTL__SRAM_SEL_MASK                                                                        0x00000010L
#define UVD_DPG_LMA_CTL__READ_WRITE_ADDR_MASK                                                                 0xFFFF0000L
//UVD_DPG_LMA_DATA
#define UVD_DPG_LMA_DATA__LMA_DATA__SHIFT                                                                     0x0
#define UVD_DPG_LMA_DATA__LMA_DATA_MASK                                                                       0xFFFFFFFFL
//UVD_DPG_LMA_MASK
#define UVD_DPG_LMA_MASK__LMA_MASK__SHIFT                                                                     0x0
#define UVD_DPG_LMA_MASK__LMA_MASK_MASK                                                                       0xFFFFFFFFL
//UVD_DPG_PAUSE
#define UVD_DPG_PAUSE__JPEG_PAUSE_DPG_REQ__SHIFT                                                              0x0
#define UVD_DPG_PAUSE__JPEG_PAUSE_DPG_ACK__SHIFT                                                              0x1
#define UVD_DPG_PAUSE__NJ_PAUSE_DPG_REQ__SHIFT                                                                0x2
#define UVD_DPG_PAUSE__NJ_PAUSE_DPG_ACK__SHIFT                                                                0x3
#define UVD_DPG_PAUSE__JPEG_PAUSE_DPG_REQ_MASK                                                                0x00000001L
#define UVD_DPG_PAUSE__JPEG_PAUSE_DPG_ACK_MASK                                                                0x00000002L
#define UVD_DPG_PAUSE__NJ_PAUSE_DPG_REQ_MASK                                                                  0x00000004L
#define UVD_DPG_PAUSE__NJ_PAUSE_DPG_ACK_MASK                                                                  0x00000008L
//UVD_SCRATCH1
#define UVD_SCRATCH1__SCRATCH1_DATA__SHIFT                                                                    0x0
#define UVD_SCRATCH1__SCRATCH1_DATA_MASK                                                                      0xFFFFFFFFL
//UVD_SCRATCH2
#define UVD_SCRATCH2__SCRATCH2_DATA__SHIFT                                                                    0x0
#define UVD_SCRATCH2__SCRATCH2_DATA_MASK                                                                      0xFFFFFFFFL
//UVD_SCRATCH3
#define UVD_SCRATCH3__SCRATCH3_DATA__SHIFT                                                                    0x0
#define UVD_SCRATCH3__SCRATCH3_DATA_MASK                                                                      0xFFFFFFFFL
//UVD_SCRATCH4
#define UVD_SCRATCH4__SCRATCH4_DATA__SHIFT                                                                    0x0
#define UVD_SCRATCH4__SCRATCH4_DATA_MASK                                                                      0xFFFFFFFFL
//UVD_SCRATCH5
#define UVD_SCRATCH5__SCRATCH5_DATA__SHIFT                                                                    0x0
#define UVD_SCRATCH5__SCRATCH5_DATA_MASK                                                                      0xFFFFFFFFL
//UVD_SCRATCH6
#define UVD_SCRATCH6__SCRATCH6_DATA__SHIFT                                                                    0x0
#define UVD_SCRATCH6__SCRATCH6_DATA_MASK                                                                      0xFFFFFFFFL
//UVD_SCRATCH7
#define UVD_SCRATCH7__SCRATCH7_DATA__SHIFT                                                                    0x0
#define UVD_SCRATCH7__SCRATCH7_DATA_MASK                                                                      0xFFFFFFFFL
//UVD_SCRATCH8
#define UVD_SCRATCH8__SCRATCH8_DATA__SHIFT                                                                    0x0
#define UVD_SCRATCH8__SCRATCH8_DATA_MASK                                                                      0xFFFFFFFFL
//UVD_SCRATCH9
#define UVD_SCRATCH9__SCRATCH9_DATA__SHIFT                                                                    0x0
#define UVD_SCRATCH9__SCRATCH9_DATA_MASK                                                                      0xFFFFFFFFL
//UVD_SCRATCH10
#define UVD_SCRATCH10__SCRATCH10_DATA__SHIFT                                                                  0x0
#define UVD_SCRATCH10__SCRATCH10_DATA_MASK                                                                    0xFFFFFFFFL
//UVD_SCRATCH11
#define UVD_SCRATCH11__SCRATCH11_DATA__SHIFT                                                                  0x0
#define UVD_SCRATCH11__SCRATCH11_DATA_MASK                                                                    0xFFFFFFFFL
//UVD_SCRATCH12
#define UVD_SCRATCH12__SCRATCH12_DATA__SHIFT                                                                  0x0
#define UVD_SCRATCH12__SCRATCH12_DATA_MASK                                                                    0xFFFFFFFFL
//UVD_SCRATCH13
#define UVD_SCRATCH13__SCRATCH13_DATA__SHIFT                                                                  0x0
#define UVD_SCRATCH13__SCRATCH13_DATA_MASK                                                                    0xFFFFFFFFL
//UVD_SCRATCH14
#define UVD_SCRATCH14__SCRATCH14_DATA__SHIFT                                                                  0x0
#define UVD_SCRATCH14__SCRATCH14_DATA_MASK                                                                    0xFFFFFFFFL
//UVD_FREE_COUNTER_REG
#define UVD_FREE_COUNTER_REG__FREE_COUNTER__SHIFT                                                             0x0
#define UVD_FREE_COUNTER_REG__FREE_COUNTER_MASK                                                               0xFFFFFFFFL
//UVD_DPG_LMI_VCPU_CACHE_64BIT_BAR_LOW
#define UVD_DPG_LMI_VCPU_CACHE_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                0x0
#define UVD_DPG_LMI_VCPU_CACHE_64BIT_BAR_LOW__BITS_31_0_MASK                                                  0xFFFFFFFFL
//UVD_DPG_LMI_VCPU_CACHE_64BIT_BAR_HIGH
#define UVD_DPG_LMI_VCPU_CACHE_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                              0x0
#define UVD_DPG_LMI_VCPU_CACHE_64BIT_BAR_HIGH__BITS_63_32_MASK                                                0xFFFFFFFFL
//UVD_DPG_VCPU_CACHE_OFFSET0
#define UVD_DPG_VCPU_CACHE_OFFSET0__CACHE_OFFSET0__SHIFT                                                      0x0
#define UVD_DPG_VCPU_CACHE_OFFSET0__CACHE_OFFSET0_MASK                                                        0x01FFFFFFL
//UVD_DPG_LMI_VCPU_CACHE_VMID
#define UVD_DPG_LMI_VCPU_CACHE_VMID__VCPU_CACHE_VMID__SHIFT                                                   0x0
#define UVD_DPG_LMI_VCPU_CACHE_VMID__VCPU_CACHE_VMID_MASK                                                     0x0000000FL
//UVD_FW_VERSION
#define UVD_FW_VERSION__FW_VERSION__SHIFT                                                                     0x0
#define UVD_FW_VERSION__FW_VERSION_MASK                                                                       0xFFFFFFFFL
//UVD_PF_STATUS
#define UVD_PF_STATUS__JPEG_PF_OCCURED__SHIFT                                                                 0x0
#define UVD_PF_STATUS__NJ_PF_OCCURED__SHIFT                                                                   0x1
#define UVD_PF_STATUS__ENCODER0_PF_OCCURED__SHIFT                                                             0x2
#define UVD_PF_STATUS__ENCODER1_PF_OCCURED__SHIFT                                                             0x3
#define UVD_PF_STATUS__ENCODER2_PF_OCCURED__SHIFT                                                             0x4
#define UVD_PF_STATUS__ENCODER3_PF_OCCURED__SHIFT                                                             0x5
#define UVD_PF_STATUS__ENCODER4_PF_OCCURED__SHIFT                                                             0x6
#define UVD_PF_STATUS__EJPEG_PF_OCCURED__SHIFT                                                                0x7
#define UVD_PF_STATUS__JPEG_PF_CLEAR__SHIFT                                                                   0x8
#define UVD_PF_STATUS__NJ_PF_CLEAR__SHIFT                                                                     0x9
#define UVD_PF_STATUS__ENCODER0_PF_CLEAR__SHIFT                                                               0xa
#define UVD_PF_STATUS__ENCODER1_PF_CLEAR__SHIFT                                                               0xb
#define UVD_PF_STATUS__ENCODER2_PF_CLEAR__SHIFT                                                               0xc
#define UVD_PF_STATUS__ENCODER3_PF_CLEAR__SHIFT                                                               0xd
#define UVD_PF_STATUS__ENCODER4_PF_CLEAR__SHIFT                                                               0xe
#define UVD_PF_STATUS__EJPEG_PF_CLEAR__SHIFT                                                                  0xf
#define UVD_PF_STATUS__NJ_ATM_PF_OCCURED__SHIFT                                                               0x10
#define UVD_PF_STATUS__DJ_ATM_PF_OCCURED__SHIFT                                                               0x11
#define UVD_PF_STATUS__EJ_ATM_PF_OCCURED__SHIFT                                                               0x12
#define UVD_PF_STATUS__JPEG2_PF_OCCURED__SHIFT                                                                0x13
#define UVD_PF_STATUS__DJ2_ATM_PF_OCCURED__SHIFT                                                              0x14
#define UVD_PF_STATUS__JPEG2_PF_CLEAR__SHIFT                                                                  0x15
#define UVD_PF_STATUS__ENCODER5_PF_OCCURED__SHIFT                                                             0x16
#define UVD_PF_STATUS__ENCODER5_PF_CLEAR__SHIFT                                                               0x17
#define UVD_PF_STATUS__JPEG_PF_OCCURED_MASK                                                                   0x00000001L
#define UVD_PF_STATUS__NJ_PF_OCCURED_MASK                                                                     0x00000002L
#define UVD_PF_STATUS__ENCODER0_PF_OCCURED_MASK                                                               0x00000004L
#define UVD_PF_STATUS__ENCODER1_PF_OCCURED_MASK                                                               0x00000008L
#define UVD_PF_STATUS__ENCODER2_PF_OCCURED_MASK                                                               0x00000010L
#define UVD_PF_STATUS__ENCODER3_PF_OCCURED_MASK                                                               0x00000020L
#define UVD_PF_STATUS__ENCODER4_PF_OCCURED_MASK                                                               0x00000040L
#define UVD_PF_STATUS__EJPEG_PF_OCCURED_MASK                                                                  0x00000080L
#define UVD_PF_STATUS__JPEG_PF_CLEAR_MASK                                                                     0x00000100L
#define UVD_PF_STATUS__NJ_PF_CLEAR_MASK                                                                       0x00000200L
#define UVD_PF_STATUS__ENCODER0_PF_CLEAR_MASK                                                                 0x00000400L
#define UVD_PF_STATUS__ENCODER1_PF_CLEAR_MASK                                                                 0x00000800L
#define UVD_PF_STATUS__ENCODER2_PF_CLEAR_MASK                                                                 0x00001000L
#define UVD_PF_STATUS__ENCODER3_PF_CLEAR_MASK                                                                 0x00002000L
#define UVD_PF_STATUS__ENCODER4_PF_CLEAR_MASK                                                                 0x00004000L
#define UVD_PF_STATUS__EJPEG_PF_CLEAR_MASK                                                                    0x00008000L
#define UVD_PF_STATUS__NJ_ATM_PF_OCCURED_MASK                                                                 0x00010000L
#define UVD_PF_STATUS__DJ_ATM_PF_OCCURED_MASK                                                                 0x00020000L
#define UVD_PF_STATUS__EJ_ATM_PF_OCCURED_MASK                                                                 0x00040000L
#define UVD_PF_STATUS__JPEG2_PF_OCCURED_MASK                                                                  0x00080000L
#define UVD_PF_STATUS__DJ2_ATM_PF_OCCURED_MASK                                                                0x00100000L
#define UVD_PF_STATUS__JPEG2_PF_CLEAR_MASK                                                                    0x00200000L
#define UVD_PF_STATUS__ENCODER5_PF_OCCURED_MASK                                                               0x00400000L
#define UVD_PF_STATUS__ENCODER5_PF_CLEAR_MASK                                                                 0x00800000L
//UVD_DPG_CLK_EN_VCPU_REPORT
#define UVD_DPG_CLK_EN_VCPU_REPORT__CLK_EN__SHIFT                                                             0x0
#define UVD_DPG_CLK_EN_VCPU_REPORT__VCPU_REPORT__SHIFT                                                        0x1
#define UVD_DPG_CLK_EN_VCPU_REPORT__CLK_EN_MASK                                                               0x00000001L
#define UVD_DPG_CLK_EN_VCPU_REPORT__VCPU_REPORT_MASK                                                          0x000000FEL
//UVD_GFX8_ADDR_CONFIG
#define UVD_GFX8_ADDR_CONFIG__PIPE_INTERLEAVE_SIZE__SHIFT                                                     0x4
#define UVD_GFX8_ADDR_CONFIG__PIPE_INTERLEAVE_SIZE_MASK                                                       0x00000070L
//UVD_GFX10_ADDR_CONFIG
#define UVD_GFX10_ADDR_CONFIG__NUM_PIPES__SHIFT                                                               0x0
#define UVD_GFX10_ADDR_CONFIG__PIPE_INTERLEAVE_SIZE__SHIFT                                                    0x3
#define UVD_GFX10_ADDR_CONFIG__MAX_COMPRESSED_FRAGS__SHIFT                                                    0x6
#define UVD_GFX10_ADDR_CONFIG__NUM_PKRS__SHIFT                                                                0x8
#define UVD_GFX10_ADDR_CONFIG__NUM_BANKS__SHIFT                                                               0xc
#define UVD_GFX10_ADDR_CONFIG__NUM_SHADER_ENGINES__SHIFT                                                      0x13
#define UVD_GFX10_ADDR_CONFIG__NUM_PIPES_MASK                                                                 0x00000007L
#define UVD_GFX10_ADDR_CONFIG__PIPE_INTERLEAVE_SIZE_MASK                                                      0x00000038L
#define UVD_GFX10_ADDR_CONFIG__MAX_COMPRESSED_FRAGS_MASK                                                      0x000000C0L
#define UVD_GFX10_ADDR_CONFIG__NUM_PKRS_MASK                                                                  0x00000700L
#define UVD_GFX10_ADDR_CONFIG__NUM_BANKS_MASK                                                                 0x00007000L
#define UVD_GFX10_ADDR_CONFIG__NUM_SHADER_ENGINES_MASK                                                        0x00180000L
//UVD_GPCNT2_CNTL
#define UVD_GPCNT2_CNTL__CLR__SHIFT                                                                           0x0
#define UVD_GPCNT2_CNTL__START__SHIFT                                                                         0x1
#define UVD_GPCNT2_CNTL__COUNTUP__SHIFT                                                                       0x2
#define UVD_GPCNT2_CNTL__CLR_MASK                                                                             0x00000001L
#define UVD_GPCNT2_CNTL__START_MASK                                                                           0x00000002L
#define UVD_GPCNT2_CNTL__COUNTUP_MASK                                                                         0x00000004L
//UVD_GPCNT2_TARGET_LOWER
#define UVD_GPCNT2_TARGET_LOWER__TARGET__SHIFT                                                                0x0
#define UVD_GPCNT2_TARGET_LOWER__TARGET_MASK                                                                  0xFFFFFFFFL
//UVD_GPCNT2_STATUS_LOWER
#define UVD_GPCNT2_STATUS_LOWER__COUNT__SHIFT                                                                 0x0
#define UVD_GPCNT2_STATUS_LOWER__COUNT_MASK                                                                   0xFFFFFFFFL
//UVD_GPCNT2_TARGET_UPPER
#define UVD_GPCNT2_TARGET_UPPER__TARGET__SHIFT                                                                0x0
#define UVD_GPCNT2_TARGET_UPPER__TARGET_MASK                                                                  0x0000FFFFL
//UVD_GPCNT2_STATUS_UPPER
#define UVD_GPCNT2_STATUS_UPPER__COUNT__SHIFT                                                                 0x0
#define UVD_GPCNT2_STATUS_UPPER__COUNT_MASK                                                                   0x0000FFFFL
//UVD_GPCNT3_CNTL
#define UVD_GPCNT3_CNTL__CLR__SHIFT                                                                           0x0
#define UVD_GPCNT3_CNTL__START__SHIFT                                                                         0x1
#define UVD_GPCNT3_CNTL__COUNTUP__SHIFT                                                                       0x2
#define UVD_GPCNT3_CNTL__FREQ__SHIFT                                                                          0x3
#define UVD_GPCNT3_CNTL__DIV__SHIFT                                                                           0xa
#define UVD_GPCNT3_CNTL__CLR_MASK                                                                             0x00000001L
#define UVD_GPCNT3_CNTL__START_MASK                                                                           0x00000002L
#define UVD_GPCNT3_CNTL__COUNTUP_MASK                                                                         0x00000004L
#define UVD_GPCNT3_CNTL__FREQ_MASK                                                                            0x000003F8L
#define UVD_GPCNT3_CNTL__DIV_MASK                                                                             0x0001FC00L
//UVD_GPCNT3_TARGET_LOWER
#define UVD_GPCNT3_TARGET_LOWER__TARGET__SHIFT                                                                0x0
#define UVD_GPCNT3_TARGET_LOWER__TARGET_MASK                                                                  0xFFFFFFFFL
//UVD_GPCNT3_STATUS_LOWER
#define UVD_GPCNT3_STATUS_LOWER__COUNT__SHIFT                                                                 0x0
#define UVD_GPCNT3_STATUS_LOWER__COUNT_MASK                                                                   0xFFFFFFFFL
//UVD_GPCNT3_TARGET_UPPER
#define UVD_GPCNT3_TARGET_UPPER__TARGET__SHIFT                                                                0x0
#define UVD_GPCNT3_TARGET_UPPER__TARGET_MASK                                                                  0x0000FFFFL
//UVD_GPCNT3_STATUS_UPPER
#define UVD_GPCNT3_STATUS_UPPER__COUNT__SHIFT                                                                 0x0
#define UVD_GPCNT3_STATUS_UPPER__COUNT_MASK                                                                   0x0000FFFFL
//UVD_VCLK_DS_CNTL
#define UVD_VCLK_DS_CNTL__VCLK_DS_EN__SHIFT                                                                   0x0
#define UVD_VCLK_DS_CNTL__VCLK_DS_STATUS__SHIFT                                                               0x4
#define UVD_VCLK_DS_CNTL__VCLK_DS_HYSTERESIS_CNT__SHIFT                                                       0x10
#define UVD_VCLK_DS_CNTL__VCLK_DS_EN_MASK                                                                     0x00000001L
#define UVD_VCLK_DS_CNTL__VCLK_DS_STATUS_MASK                                                                 0x00000010L
#define UVD_VCLK_DS_CNTL__VCLK_DS_HYSTERESIS_CNT_MASK                                                         0xFFFF0000L
//UVD_DCLK_DS_CNTL
#define UVD_DCLK_DS_CNTL__DCLK_DS_EN__SHIFT                                                                   0x0
#define UVD_DCLK_DS_CNTL__DCLK_DS_STATUS__SHIFT                                                               0x4
#define UVD_DCLK_DS_CNTL__DCLK_DS_HYSTERESIS_CNT__SHIFT                                                       0x10
#define UVD_DCLK_DS_CNTL__DCLK_DS_EN_MASK                                                                     0x00000001L
#define UVD_DCLK_DS_CNTL__DCLK_DS_STATUS_MASK                                                                 0x00000010L
#define UVD_DCLK_DS_CNTL__DCLK_DS_HYSTERESIS_CNT_MASK                                                         0xFFFF0000L
//UVD_TSC_LOWER
#define UVD_TSC_LOWER__COUNT__SHIFT                                                                           0x0
#define UVD_TSC_LOWER__COUNT_MASK                                                                             0xFFFFFFFFL
//UVD_TSC_UPPER
#define UVD_TSC_UPPER__COUNT__SHIFT                                                                           0x0
#define UVD_TSC_UPPER__COUNT_MASK                                                                             0x00FFFFFFL
//VCN_FEATURES
#define VCN_FEATURES__HAS_VIDEO_DEC__SHIFT                                                                    0x0
#define VCN_FEATURES__HAS_VIDEO_ENC__SHIFT                                                                    0x1
#define VCN_FEATURES__HAS_MJPEG_DEC__SHIFT                                                                    0x2
#define VCN_FEATURES__HAS_MJPEG_ENC__SHIFT                                                                    0x3
#define VCN_FEATURES__HAS_VIDEO_VIRT__SHIFT                                                                   0x4
#define VCN_FEATURES__HAS_H264_LEGACY_DEC__SHIFT                                                              0x5
#define VCN_FEATURES__HAS_UDEC_DEC__SHIFT                                                                     0x6
#define VCN_FEATURES__HAS_MJPEG2_IDCT_DEC__SHIFT                                                              0x7
#define VCN_FEATURES__HAS_SCLR_DEC__SHIFT                                                                     0x8
#define VCN_FEATURES__HAS_VP9_DEC__SHIFT                                                                      0x9
#define VCN_FEATURES__HAS_AV1_DEC__SHIFT                                                                      0xa
#define VCN_FEATURES__HAS_EFC_ENC__SHIFT                                                                      0xb
#define VCN_FEATURES__HAS_EFC_HDR2SDR_ENC__SHIFT                                                              0xc
#define VCN_FEATURES__HAS_DUAL_MJPEG_DEC__SHIFT                                                               0xd
#define VCN_FEATURES__HAS_AV1_ENC__SHIFT                                                                      0xe
#define VCN_FEATURES__INSTANCE_ID__SHIFT                                                                      0x1c
#define VCN_FEATURES__HAS_VIDEO_DEC_MASK                                                                      0x00000001L
#define VCN_FEATURES__HAS_VIDEO_ENC_MASK                                                                      0x00000002L
#define VCN_FEATURES__HAS_MJPEG_DEC_MASK                                                                      0x00000004L
#define VCN_FEATURES__HAS_MJPEG_ENC_MASK                                                                      0x00000008L
#define VCN_FEATURES__HAS_VIDEO_VIRT_MASK                                                                     0x00000010L
#define VCN_FEATURES__HAS_H264_LEGACY_DEC_MASK                                                                0x00000020L
#define VCN_FEATURES__HAS_UDEC_DEC_MASK                                                                       0x00000040L
#define VCN_FEATURES__HAS_MJPEG2_IDCT_DEC_MASK                                                                0x00000080L
#define VCN_FEATURES__HAS_SCLR_DEC_MASK                                                                       0x00000100L
#define VCN_FEATURES__HAS_VP9_DEC_MASK                                                                        0x00000200L
#define VCN_FEATURES__HAS_AV1_DEC_MASK                                                                        0x00000400L
#define VCN_FEATURES__HAS_EFC_ENC_MASK                                                                        0x00000800L
#define VCN_FEATURES__HAS_EFC_HDR2SDR_ENC_MASK                                                                0x00001000L
#define VCN_FEATURES__HAS_DUAL_MJPEG_DEC_MASK                                                                 0x00002000L
#define VCN_FEATURES__HAS_AV1_ENC_MASK                                                                        0x00004000L
#define VCN_FEATURES__INSTANCE_ID_MASK                                                                        0xF0000000L
//UVD_GPUIOV_STATUS
#define UVD_GPUIOV_STATUS__UVD_GPUIOV_STATUS_VF_ENABLE__SHIFT                                                 0x0
#define UVD_GPUIOV_STATUS__UVD_GPUIOV_STATUS_VF_ENABLE_MASK                                                   0x00000001L
//UVD_RAS_VCPU_VCODEC_STATUS
#define UVD_RAS_VCPU_VCODEC_STATUS__POISONED_VF__SHIFT                                                        0x0
#define UVD_RAS_VCPU_VCODEC_STATUS__POISONED_PF__SHIFT                                                        0x1f
#define UVD_RAS_VCPU_VCODEC_STATUS__POISONED_VF_MASK                                                          0x7FFFFFFFL
#define UVD_RAS_VCPU_VCODEC_STATUS__POISONED_PF_MASK                                                          0x80000000L
//UVD_RAS_MMSCH_FATAL_ERROR
#define UVD_RAS_MMSCH_FATAL_ERROR__POISONED_VF__SHIFT                                                         0x0
#define UVD_RAS_MMSCH_FATAL_ERROR__POISONED_PF__SHIFT                                                         0x1f
#define UVD_RAS_MMSCH_FATAL_ERROR__POISONED_VF_MASK                                                           0x7FFFFFFFL
#define UVD_RAS_MMSCH_FATAL_ERROR__POISONED_PF_MASK                                                           0x80000000L
//UVD_RAS_JPEG0_STATUS
#define UVD_RAS_JPEG0_STATUS__POISONED_VF__SHIFT                                                              0x0
#define UVD_RAS_JPEG0_STATUS__POISONED_PF__SHIFT                                                              0x1f
#define UVD_RAS_JPEG0_STATUS__POISONED_VF_MASK                                                                0x7FFFFFFFL
#define UVD_RAS_JPEG0_STATUS__POISONED_PF_MASK                                                                0x80000000L
//UVD_RAS_JPEG1_STATUS
#define UVD_RAS_JPEG1_STATUS__POISONED_VF__SHIFT                                                              0x0
#define UVD_RAS_JPEG1_STATUS__POISONED_PF__SHIFT                                                              0x1f
#define UVD_RAS_JPEG1_STATUS__POISONED_VF_MASK                                                                0x7FFFFFFFL
#define UVD_RAS_JPEG1_STATUS__POISONED_PF_MASK                                                                0x80000000L
//UVD_RAS_CNTL_PMI_ARB
#define UVD_RAS_CNTL_PMI_ARB__STAT_VCPU_VCODEC__SHIFT                                                         0x0
#define UVD_RAS_CNTL_PMI_ARB__ACK_VCPU_VCODEC__SHIFT                                                          0x1
#define UVD_RAS_CNTL_PMI_ARB__STAT_MMSCH__SHIFT                                                               0x2
#define UVD_RAS_CNTL_PMI_ARB__ACK_MMSCH__SHIFT                                                                0x3
#define UVD_RAS_CNTL_PMI_ARB__STAT_JPEG0__SHIFT                                                               0x4
#define UVD_RAS_CNTL_PMI_ARB__ACK_JPEG0__SHIFT                                                                0x5
#define UVD_RAS_CNTL_PMI_ARB__STAT_JPEG1__SHIFT                                                               0x6
#define UVD_RAS_CNTL_PMI_ARB__ACK_JPEG1__SHIFT                                                                0x7
#define UVD_RAS_CNTL_PMI_ARB__STAT_VCPU_VCODEC_MASK                                                           0x00000001L
#define UVD_RAS_CNTL_PMI_ARB__ACK_VCPU_VCODEC_MASK                                                            0x00000002L
#define UVD_RAS_CNTL_PMI_ARB__STAT_MMSCH_MASK                                                                 0x00000004L
#define UVD_RAS_CNTL_PMI_ARB__ACK_MMSCH_MASK                                                                  0x00000008L
#define UVD_RAS_CNTL_PMI_ARB__STAT_JPEG0_MASK                                                                 0x00000010L
#define UVD_RAS_CNTL_PMI_ARB__ACK_JPEG0_MASK                                                                  0x00000020L
#define UVD_RAS_CNTL_PMI_ARB__STAT_JPEG1_MASK                                                                 0x00000040L
#define UVD_RAS_CNTL_PMI_ARB__ACK_JPEG1_MASK                                                                  0x00000080L
//UVD_SCRATCH15
#define UVD_SCRATCH15__SCRATCH15_DATA__SHIFT                                                                  0x0
#define UVD_SCRATCH15__SCRATCH15_DATA_MASK                                                                    0xFFFFFFFFL
//UVD_SCRATCH16
#define UVD_SCRATCH16__SCRATCH16_DATA__SHIFT                                                                  0x0
#define UVD_SCRATCH16__SCRATCH16_DATA_MASK                                                                    0xFFFFFFFFL
//UVD_SCRATCH17
#define UVD_SCRATCH17__SCRATCH17_DATA__SHIFT                                                                  0x0
#define UVD_SCRATCH17__SCRATCH17_DATA_MASK                                                                    0xFFFFFFFFL
//UVD_SCRATCH18
#define UVD_SCRATCH18__SCRATCH18_DATA__SHIFT                                                                  0x0
#define UVD_SCRATCH18__SCRATCH18_DATA_MASK                                                                    0xFFFFFFFFL
//UVD_SCRATCH19
#define UVD_SCRATCH19__SCRATCH19_DATA__SHIFT                                                                  0x0
#define UVD_SCRATCH19__SCRATCH19_DATA_MASK                                                                    0xFFFFFFFFL
//UVD_SCRATCH20
#define UVD_SCRATCH20__SCRATCH20_DATA__SHIFT                                                                  0x0
#define UVD_SCRATCH20__SCRATCH20_DATA_MASK                                                                    0xFFFFFFFFL
//UVD_SCRATCH21
#define UVD_SCRATCH21__SCRATCH21_DATA__SHIFT                                                                  0x0
#define UVD_SCRATCH21__SCRATCH21_DATA_MASK                                                                    0xFFFFFFFFL
//UVD_SCRATCH22
#define UVD_SCRATCH22__SCRATCH22_DATA__SHIFT                                                                  0x0
#define UVD_SCRATCH22__SCRATCH22_DATA_MASK                                                                    0xFFFFFFFFL
//UVD_SCRATCH23
#define UVD_SCRATCH23__SCRATCH23_DATA__SHIFT                                                                  0x0
#define UVD_SCRATCH23__SCRATCH23_DATA_MASK                                                                    0xFFFFFFFFL
//UVD_SCRATCH24
#define UVD_SCRATCH24__SCRATCH24_DATA__SHIFT                                                                  0x0
#define UVD_SCRATCH24__SCRATCH24_DATA_MASK                                                                    0xFFFFFFFFL
//UVD_SCRATCH25
#define UVD_SCRATCH25__SCRATCH25_DATA__SHIFT                                                                  0x0
#define UVD_SCRATCH25__SCRATCH25_DATA_MASK                                                                    0xFFFFFFFFL
//UVD_SCRATCH26
#define UVD_SCRATCH26__SCRATCH26_DATA__SHIFT                                                                  0x0
#define UVD_SCRATCH26__SCRATCH26_DATA_MASK                                                                    0xFFFFFFFFL
//UVD_SCRATCH27
#define UVD_SCRATCH27__SCRATCH27_DATA__SHIFT                                                                  0x0
#define UVD_SCRATCH27__SCRATCH27_DATA_MASK                                                                    0xFFFFFFFFL
//UVD_SCRATCH28
#define UVD_SCRATCH28__SCRATCH28_DATA__SHIFT                                                                  0x0
#define UVD_SCRATCH28__SCRATCH28_DATA_MASK                                                                    0xFFFFFFFFL
//UVD_SCRATCH29
#define UVD_SCRATCH29__SCRATCH29_DATA__SHIFT                                                                  0x0
#define UVD_SCRATCH29__SCRATCH29_DATA_MASK                                                                    0xFFFFFFFFL
//UVD_SCRATCH30
#define UVD_SCRATCH30__SCRATCH30_DATA__SHIFT                                                                  0x0
#define UVD_SCRATCH30__SCRATCH30_DATA_MASK                                                                    0xFFFFFFFFL
//UVD_SCRATCH31
#define UVD_SCRATCH31__SCRATCH31_DATA__SHIFT                                                                  0x0
#define UVD_SCRATCH31__SCRATCH31_DATA_MASK                                                                    0xFFFFFFFFL
//UVD_SCRATCH32
#define UVD_SCRATCH32__SCRATCH32_DATA__SHIFT                                                                  0x0
#define UVD_SCRATCH32__SCRATCH32_DATA_MASK                                                                    0xFFFFFFFFL
//UVD_VERSION
#define UVD_VERSION__VARIANT_TYPE__SHIFT                                                                      0x0
#define UVD_VERSION__MINOR_VERSION__SHIFT                                                                     0x8
#define UVD_VERSION__MAJOR_VERSION__SHIFT                                                                     0x10
#define UVD_VERSION__INSTANCE_ID__SHIFT                                                                       0x1c
#define UVD_VERSION__VARIANT_TYPE_MASK                                                                        0x000000FFL
#define UVD_VERSION__MINOR_VERSION_MASK                                                                       0x0000FF00L
#define UVD_VERSION__MAJOR_VERSION_MASK                                                                       0x0FFF0000L
#define UVD_VERSION__INSTANCE_ID_MASK                                                                         0xF0000000L
//VCN_RB_DB_CTRL
#define VCN_RB_DB_CTRL__OFFSET__SHIFT                                                                         0x2
#define VCN_RB_DB_CTRL__EN__SHIFT                                                                             0x1e
#define VCN_RB_DB_CTRL__HIT__SHIFT                                                                            0x1f
#define VCN_RB_DB_CTRL__OFFSET_MASK                                                                           0x0FFFFFFCL
#define VCN_RB_DB_CTRL__EN_MASK                                                                               0x40000000L
#define VCN_RB_DB_CTRL__HIT_MASK                                                                              0x80000000L
//VCN_JPEG_DB_CTRL
#define VCN_JPEG_DB_CTRL__OFFSET__SHIFT                                                                       0x2
#define VCN_JPEG_DB_CTRL__EN__SHIFT                                                                           0x1e
#define VCN_JPEG_DB_CTRL__HIT__SHIFT                                                                          0x1f
#define VCN_JPEG_DB_CTRL__OFFSET_MASK                                                                         0x0FFFFFFCL
#define VCN_JPEG_DB_CTRL__EN_MASK                                                                             0x40000000L
#define VCN_JPEG_DB_CTRL__HIT_MASK                                                                            0x80000000L
//VCN_RB1_DB_CTRL
#define VCN_RB1_DB_CTRL__OFFSET__SHIFT                                                                        0x2
#define VCN_RB1_DB_CTRL__EN__SHIFT                                                                            0x1e
#define VCN_RB1_DB_CTRL__HIT__SHIFT                                                                           0x1f
#define VCN_RB1_DB_CTRL__OFFSET_MASK                                                                          0x0FFFFFFCL
#define VCN_RB1_DB_CTRL__EN_MASK                                                                              0x40000000L
#define VCN_RB1_DB_CTRL__HIT_MASK                                                                             0x80000000L
//VCN_RB2_DB_CTRL
#define VCN_RB2_DB_CTRL__OFFSET__SHIFT                                                                        0x2
#define VCN_RB2_DB_CTRL__EN__SHIFT                                                                            0x1e
#define VCN_RB2_DB_CTRL__HIT__SHIFT                                                                           0x1f
#define VCN_RB2_DB_CTRL__OFFSET_MASK                                                                          0x0FFFFFFCL
#define VCN_RB2_DB_CTRL__EN_MASK                                                                              0x40000000L
#define VCN_RB2_DB_CTRL__HIT_MASK                                                                             0x80000000L
//VCN_RB3_DB_CTRL
#define VCN_RB3_DB_CTRL__OFFSET__SHIFT                                                                        0x2
#define VCN_RB3_DB_CTRL__EN__SHIFT                                                                            0x1e
#define VCN_RB3_DB_CTRL__HIT__SHIFT                                                                           0x1f
#define VCN_RB3_DB_CTRL__OFFSET_MASK                                                                          0x0FFFFFFCL
#define VCN_RB3_DB_CTRL__EN_MASK                                                                              0x40000000L
#define VCN_RB3_DB_CTRL__HIT_MASK                                                                             0x80000000L
//VCN_RB4_DB_CTRL
#define VCN_RB4_DB_CTRL__OFFSET__SHIFT                                                                        0x2
#define VCN_RB4_DB_CTRL__EN__SHIFT                                                                            0x1e
#define VCN_RB4_DB_CTRL__HIT__SHIFT                                                                           0x1f
#define VCN_RB4_DB_CTRL__OFFSET_MASK                                                                          0x0FFFFFFCL
#define VCN_RB4_DB_CTRL__EN_MASK                                                                              0x40000000L
#define VCN_RB4_DB_CTRL__HIT_MASK                                                                             0x80000000L
//VCN_RB_ENABLE
#define VCN_RB_ENABLE__RB_EN__SHIFT                                                                           0x0
#define VCN_RB_ENABLE__JPEG_RB_EN__SHIFT                                                                      0x1
#define VCN_RB_ENABLE__RB1_EN__SHIFT                                                                          0x2
#define VCN_RB_ENABLE__RB2_EN__SHIFT                                                                          0x3
#define VCN_RB_ENABLE__RB3_EN__SHIFT                                                                          0x4
#define VCN_RB_ENABLE__RB4_EN__SHIFT                                                                          0x5
#define VCN_RB_ENABLE__UMSCH_RB_EN__SHIFT                                                                     0x6
#define VCN_RB_ENABLE__EJPEG_RB_EN__SHIFT                                                                     0x7
#define VCN_RB_ENABLE__AUDIO_RB_EN__SHIFT                                                                     0x8
#define VCN_RB_ENABLE__RB_EN_MASK                                                                             0x00000001L
#define VCN_RB_ENABLE__JPEG_RB_EN_MASK                                                                        0x00000002L
#define VCN_RB_ENABLE__RB1_EN_MASK                                                                            0x00000004L
#define VCN_RB_ENABLE__RB2_EN_MASK                                                                            0x00000008L
#define VCN_RB_ENABLE__RB3_EN_MASK                                                                            0x00000010L
#define VCN_RB_ENABLE__RB4_EN_MASK                                                                            0x00000020L
#define VCN_RB_ENABLE__UMSCH_RB_EN_MASK                                                                       0x00000040L
#define VCN_RB_ENABLE__EJPEG_RB_EN_MASK                                                                       0x00000080L
#define VCN_RB_ENABLE__AUDIO_RB_EN_MASK                                                                       0x00000100L
//VCN_RB_WPTR_CTRL
#define VCN_RB_WPTR_CTRL__RB_CS_EN__SHIFT                                                                     0x0
#define VCN_RB_WPTR_CTRL__JPEG_CS_EN__SHIFT                                                                   0x1
#define VCN_RB_WPTR_CTRL__RB1_CS_EN__SHIFT                                                                    0x2
#define VCN_RB_WPTR_CTRL__RB2_CS_EN__SHIFT                                                                    0x3
#define VCN_RB_WPTR_CTRL__RB3_CS_EN__SHIFT                                                                    0x4
#define VCN_RB_WPTR_CTRL__RB4_CS_EN__SHIFT                                                                    0x5
#define VCN_RB_WPTR_CTRL__UMSCH_RB_CS_EN__SHIFT                                                               0x6
#define VCN_RB_WPTR_CTRL__EJPEG_RB_CS_EN__SHIFT                                                               0x7
#define VCN_RB_WPTR_CTRL__AUDIO_RB_CS_EN__SHIFT                                                               0x8
#define VCN_RB_WPTR_CTRL__RB_CS_EN_MASK                                                                       0x00000001L
#define VCN_RB_WPTR_CTRL__JPEG_CS_EN_MASK                                                                     0x00000002L
#define VCN_RB_WPTR_CTRL__RB1_CS_EN_MASK                                                                      0x00000004L
#define VCN_RB_WPTR_CTRL__RB2_CS_EN_MASK                                                                      0x00000008L
#define VCN_RB_WPTR_CTRL__RB3_CS_EN_MASK                                                                      0x00000010L
#define VCN_RB_WPTR_CTRL__RB4_CS_EN_MASK                                                                      0x00000020L
#define VCN_RB_WPTR_CTRL__UMSCH_RB_CS_EN_MASK                                                                 0x00000040L
#define VCN_RB_WPTR_CTRL__EJPEG_RB_CS_EN_MASK                                                                 0x00000080L
#define VCN_RB_WPTR_CTRL__AUDIO_RB_CS_EN_MASK                                                                 0x00000100L
//UVD_RB_RPTR
#define UVD_RB_RPTR__RB_RPTR__SHIFT                                                                           0x4
#define UVD_RB_RPTR__RB_RPTR_MASK                                                                             0x007FFFF0L
//UVD_RB_WPTR
#define UVD_RB_WPTR__RB_WPTR__SHIFT                                                                           0x4
#define UVD_RB_WPTR__RB_WPTR_MASK                                                                             0x007FFFF0L
//UVD_RB_RPTR2
#define UVD_RB_RPTR2__RB_RPTR__SHIFT                                                                          0x4
#define UVD_RB_RPTR2__RB_RPTR_MASK                                                                            0x007FFFF0L
//UVD_RB_WPTR2
#define UVD_RB_WPTR2__RB_WPTR__SHIFT                                                                          0x4
#define UVD_RB_WPTR2__RB_WPTR_MASK                                                                            0x007FFFF0L
//UVD_RB_RPTR3
#define UVD_RB_RPTR3__RB_RPTR__SHIFT                                                                          0x4
#define UVD_RB_RPTR3__RB_RPTR_MASK                                                                            0x007FFFF0L
//UVD_RB_WPTR3
#define UVD_RB_WPTR3__RB_WPTR__SHIFT                                                                          0x4
#define UVD_RB_WPTR3__RB_WPTR_MASK                                                                            0x007FFFF0L
//UVD_RB_RPTR4
#define UVD_RB_RPTR4__RB_RPTR__SHIFT                                                                          0x4
#define UVD_RB_RPTR4__RB_RPTR_MASK                                                                            0x007FFFF0L
//UVD_RB_WPTR4
#define UVD_RB_WPTR4__RB_WPTR__SHIFT                                                                          0x4
#define UVD_RB_WPTR4__RB_WPTR_MASK                                                                            0x007FFFF0L
//UVD_OUT_RB_RPTR
#define UVD_OUT_RB_RPTR__RB_RPTR__SHIFT                                                                       0x4
#define UVD_OUT_RB_RPTR__RB_RPTR_MASK                                                                         0x007FFFF0L
//UVD_OUT_RB_WPTR
#define UVD_OUT_RB_WPTR__RB_WPTR__SHIFT                                                                       0x4
#define UVD_OUT_RB_WPTR__RB_WPTR_MASK                                                                         0x007FFFF0L
//UVD_AUDIO_RB_RPTR
#define UVD_AUDIO_RB_RPTR__RB_RPTR__SHIFT                                                                     0x4
#define UVD_AUDIO_RB_RPTR__RB_RPTR_MASK                                                                       0x007FFFF0L
//UVD_AUDIO_RB_WPTR
#define UVD_AUDIO_RB_WPTR__RB_WPTR__SHIFT                                                                     0x4
#define UVD_AUDIO_RB_WPTR__RB_WPTR_MASK                                                                       0x007FFFF0L
//UVD_RBC_RB_RPTR
#define UVD_RBC_RB_RPTR__RB_RPTR__SHIFT                                                                       0x4
#define UVD_RBC_RB_RPTR__RB_RPTR_MASK                                                                         0x007FFFF0L
//UVD_RBC_RB_WPTR
#define UVD_RBC_RB_WPTR__RB_WPTR__SHIFT                                                                       0x4
#define UVD_RBC_RB_WPTR__RB_WPTR_MASK                                                                         0x007FFFF0L
//UVD_DPG_LMA_CTL2
#define UVD_DPG_LMA_CTL2__DIRECT_ACCESS_SRAM_SEL__SHIFT                                                       0x0
#define UVD_DPG_LMA_CTL2__FIFO_DIRECT_ACCESS_EN__SHIFT                                                        0x1
#define UVD_DPG_LMA_CTL2__VID_WRITE_PTR__SHIFT                                                                0x2
#define UVD_DPG_LMA_CTL2__JPEG_WRITE_PTR__SHIFT                                                               0x9
#define UVD_DPG_LMA_CTL2__DIRECT_ACCESS_SRAM_SEL_MASK                                                         0x00000001L
#define UVD_DPG_LMA_CTL2__FIFO_DIRECT_ACCESS_EN_MASK                                                          0x00000002L
#define UVD_DPG_LMA_CTL2__VID_WRITE_PTR_MASK                                                                  0x000001FCL
#define UVD_DPG_LMA_CTL2__JPEG_WRITE_PTR_MASK                                                                 0x0000FE00L


// addressBlock: uvd0_mmsch_dec
//MMSCH_UCODE_ADDR
#define MMSCH_UCODE_ADDR__UCODE_ADDR__SHIFT                                                                   0x2
#define MMSCH_UCODE_ADDR__UCODE_LOCK__SHIFT                                                                   0x1f
#define MMSCH_UCODE_ADDR__UCODE_ADDR_MASK                                                                     0x00003FFCL
#define MMSCH_UCODE_ADDR__UCODE_LOCK_MASK                                                                     0x80000000L
//MMSCH_UCODE_DATA
#define MMSCH_UCODE_DATA__UCODE_DATA__SHIFT                                                                   0x0
#define MMSCH_UCODE_DATA__UCODE_DATA_MASK                                                                     0xFFFFFFFFL
//MMSCH_SRAM_ADDR
#define MMSCH_SRAM_ADDR__SRAM_ADDR__SHIFT                                                                     0x2
#define MMSCH_SRAM_ADDR__SRAM_LOCK__SHIFT                                                                     0x1f
#define MMSCH_SRAM_ADDR__SRAM_ADDR_MASK                                                                       0x00001FFCL
#define MMSCH_SRAM_ADDR__SRAM_LOCK_MASK                                                                       0x80000000L
//MMSCH_SRAM_DATA
#define MMSCH_SRAM_DATA__SRAM_DATA__SHIFT                                                                     0x0
#define MMSCH_SRAM_DATA__SRAM_DATA_MASK                                                                       0xFFFFFFFFL
//MMSCH_VF_SRAM_OFFSET
#define MMSCH_VF_SRAM_OFFSET__VF_SRAM_OFFSET__SHIFT                                                           0x2
#define MMSCH_VF_SRAM_OFFSET__VF_SRAM_NUM_DW_PER_VF__SHIFT                                                    0x10
#define MMSCH_VF_SRAM_OFFSET__VF_SRAM_OFFSET_MASK                                                             0x00001FFCL
#define MMSCH_VF_SRAM_OFFSET__VF_SRAM_NUM_DW_PER_VF_MASK                                                      0x00FF0000L
//MMSCH_DB_SRAM_OFFSET
#define MMSCH_DB_SRAM_OFFSET__DB_SRAM_OFFSET__SHIFT                                                           0x2
#define MMSCH_DB_SRAM_OFFSET__DB_SRAM_NUM_ENG__SHIFT                                                          0x10
#define MMSCH_DB_SRAM_OFFSET__DB_SRAM_NUM_RING_PER_ENG__SHIFT                                                 0x18
#define MMSCH_DB_SRAM_OFFSET__DB_SRAM_OFFSET_MASK                                                             0x00001FFCL
#define MMSCH_DB_SRAM_OFFSET__DB_SRAM_NUM_ENG_MASK                                                            0x00FF0000L
#define MMSCH_DB_SRAM_OFFSET__DB_SRAM_NUM_RING_PER_ENG_MASK                                                   0xFF000000L
//MMSCH_CTX_SRAM_OFFSET
#define MMSCH_CTX_SRAM_OFFSET__CTX_SRAM_OFFSET__SHIFT                                                         0x2
#define MMSCH_CTX_SRAM_OFFSET__CTX_SRAM_SIZE__SHIFT                                                           0x10
#define MMSCH_CTX_SRAM_OFFSET__CTX_SRAM_OFFSET_MASK                                                           0x00001FFCL
#define MMSCH_CTX_SRAM_OFFSET__CTX_SRAM_SIZE_MASK                                                             0xFFFF0000L
//MMSCH_INTR
#define MMSCH_INTR__INTR__SHIFT                                                                               0x0
#define MMSCH_INTR__INTR_MASK                                                                                 0x00001FFFL
//MMSCH_INTR_ACK
#define MMSCH_INTR_ACK__INTR__SHIFT                                                                           0x0
#define MMSCH_INTR_ACK__INTR_MASK                                                                             0x00001FFFL
//MMSCH_INTR_STATUS
#define MMSCH_INTR_STATUS__INTR__SHIFT                                                                        0x0
#define MMSCH_INTR_STATUS__INTR_MASK                                                                          0x00001FFFL
//MMSCH_VF_VMID
#define MMSCH_VF_VMID__VF_CTX_VMID__SHIFT                                                                     0x0
#define MMSCH_VF_VMID__VF_GPCOM_VMID__SHIFT                                                                   0x5
#define MMSCH_VF_VMID__VF_CTX_VMID_MASK                                                                       0x0000001FL
#define MMSCH_VF_VMID__VF_GPCOM_VMID_MASK                                                                     0x000003E0L
//MMSCH_VF_CTX_ADDR_LO
#define MMSCH_VF_CTX_ADDR_LO__VF_CTX_ADDR_LO__SHIFT                                                           0x6
#define MMSCH_VF_CTX_ADDR_LO__VF_CTX_ADDR_LO_MASK                                                             0xFFFFFFC0L
//MMSCH_VF_CTX_ADDR_HI
#define MMSCH_VF_CTX_ADDR_HI__VF_CTX_ADDR_HI__SHIFT                                                           0x0
#define MMSCH_VF_CTX_ADDR_HI__VF_CTX_ADDR_HI_MASK                                                             0xFFFFFFFFL
//MMSCH_VF_CTX_SIZE
#define MMSCH_VF_CTX_SIZE__VF_CTX_SIZE__SHIFT                                                                 0x0
#define MMSCH_VF_CTX_SIZE__VF_CTX_SIZE_MASK                                                                   0xFFFFFFFFL
//MMSCH_VF_GPCOM_ADDR_LO
#define MMSCH_VF_GPCOM_ADDR_LO__VF_GPCOM_ADDR_LO__SHIFT                                                       0x6
#define MMSCH_VF_GPCOM_ADDR_LO__VF_GPCOM_ADDR_LO_MASK                                                         0xFFFFFFC0L
//MMSCH_VF_GPCOM_ADDR_HI
#define MMSCH_VF_GPCOM_ADDR_HI__VF_GPCOM_ADDR_HI__SHIFT                                                       0x0
#define MMSCH_VF_GPCOM_ADDR_HI__VF_GPCOM_ADDR_HI_MASK                                                         0xFFFFFFFFL
//MMSCH_VF_GPCOM_SIZE
#define MMSCH_VF_GPCOM_SIZE__VF_GPCOM_SIZE__SHIFT                                                             0x0
#define MMSCH_VF_GPCOM_SIZE__VF_GPCOM_SIZE_MASK                                                               0xFFFFFFFFL
//MMSCH_VF_MAILBOX_HOST
#define MMSCH_VF_MAILBOX_HOST__DATA__SHIFT                                                                    0x0
#define MMSCH_VF_MAILBOX_HOST__DATA_MASK                                                                      0xFFFFFFFFL
//MMSCH_VF_MAILBOX_RESP
#define MMSCH_VF_MAILBOX_RESP__RESP__SHIFT                                                                    0x0
#define MMSCH_VF_MAILBOX_RESP__RESP_MASK                                                                      0xFFFFFFFFL
//MMSCH_VF_MAILBOX_0
#define MMSCH_VF_MAILBOX_0__DATA__SHIFT                                                                       0x0
#define MMSCH_VF_MAILBOX_0__DATA_MASK                                                                         0xFFFFFFFFL
//MMSCH_VF_MAILBOX_0_RESP
#define MMSCH_VF_MAILBOX_0_RESP__RESP__SHIFT                                                                  0x0
#define MMSCH_VF_MAILBOX_0_RESP__RESP_MASK                                                                    0xFFFFFFFFL
//MMSCH_VF_MAILBOX_1
#define MMSCH_VF_MAILBOX_1__DATA__SHIFT                                                                       0x0
#define MMSCH_VF_MAILBOX_1__DATA_MASK                                                                         0xFFFFFFFFL
//MMSCH_VF_MAILBOX_1_RESP
#define MMSCH_VF_MAILBOX_1_RESP__RESP__SHIFT                                                                  0x0
#define MMSCH_VF_MAILBOX_1_RESP__RESP_MASK                                                                    0xFFFFFFFFL
//MMSCH_CNTL
#define MMSCH_CNTL__CLK_EN__SHIFT                                                                             0x0
#define MMSCH_CNTL__ED_ENABLE__SHIFT                                                                          0x1
#define MMSCH_CNTL__MMSCH_IRQ_ERR__SHIFT                                                                      0x5
#define MMSCH_CNTL__MMSCH_NACK_INTR_EN__SHIFT                                                                 0x9
#define MMSCH_CNTL__MMSCH_DB_BUSY_INTR_EN__SHIFT                                                              0xa
#define MMSCH_CNTL__PRB_TIMEOUT_VAL__SHIFT                                                                    0x14
#define MMSCH_CNTL__TIMEOUT_DIS__SHIFT                                                                        0x1c
#define MMSCH_CNTL__MMSCH_IDLE__SHIFT                                                                         0x1d
#define MMSCH_CNTL__CLK_EN_MASK                                                                               0x00000001L
#define MMSCH_CNTL__ED_ENABLE_MASK                                                                            0x00000002L
#define MMSCH_CNTL__MMSCH_IRQ_ERR_MASK                                                                        0x000001E0L
#define MMSCH_CNTL__MMSCH_NACK_INTR_EN_MASK                                                                   0x00000200L
#define MMSCH_CNTL__MMSCH_DB_BUSY_INTR_EN_MASK                                                                0x00000400L
#define MMSCH_CNTL__PRB_TIMEOUT_VAL_MASK                                                                      0x0FF00000L
#define MMSCH_CNTL__TIMEOUT_DIS_MASK                                                                          0x10000000L
#define MMSCH_CNTL__MMSCH_IDLE_MASK                                                                           0x20000000L
//MMSCH_NONCACHE_OFFSET0
#define MMSCH_NONCACHE_OFFSET0__OFFSET__SHIFT                                                                 0x0
#define MMSCH_NONCACHE_OFFSET0__OFFSET_MASK                                                                   0x0FFFFFFFL
//MMSCH_NONCACHE_SIZE0
#define MMSCH_NONCACHE_SIZE0__SIZE__SHIFT                                                                     0x0
#define MMSCH_NONCACHE_SIZE0__SIZE_MASK                                                                       0x00FFFFFFL
//MMSCH_NONCACHE_OFFSET1
#define MMSCH_NONCACHE_OFFSET1__OFFSET__SHIFT                                                                 0x0
#define MMSCH_NONCACHE_OFFSET1__OFFSET_MASK                                                                   0x0FFFFFFFL
//MMSCH_NONCACHE_SIZE1
#define MMSCH_NONCACHE_SIZE1__SIZE__SHIFT                                                                     0x0
#define MMSCH_NONCACHE_SIZE1__SIZE_MASK                                                                       0x00FFFFFFL
//MMSCH_PROC_STATE1
#define MMSCH_PROC_STATE1__PC__SHIFT                                                                          0x0
#define MMSCH_PROC_STATE1__PC_MASK                                                                            0xFFFFFFFFL
//MMSCH_LAST_MC_ADDR
#define MMSCH_LAST_MC_ADDR__MC_ADDR__SHIFT                                                                    0x0
#define MMSCH_LAST_MC_ADDR__RW__SHIFT                                                                         0x1f
#define MMSCH_LAST_MC_ADDR__MC_ADDR_MASK                                                                      0x0FFFFFFFL
#define MMSCH_LAST_MC_ADDR__RW_MASK                                                                           0x80000000L
//MMSCH_LAST_MEM_ACCESS_HI
#define MMSCH_LAST_MEM_ACCESS_HI__PROC_CMD__SHIFT                                                             0x0
#define MMSCH_LAST_MEM_ACCESS_HI__FIFO_RPTR__SHIFT                                                            0x8
#define MMSCH_LAST_MEM_ACCESS_HI__FIFO_WPTR__SHIFT                                                            0xc
#define MMSCH_LAST_MEM_ACCESS_HI__PROC_CMD_MASK                                                               0x00000007L
#define MMSCH_LAST_MEM_ACCESS_HI__FIFO_RPTR_MASK                                                              0x00000700L
#define MMSCH_LAST_MEM_ACCESS_HI__FIFO_WPTR_MASK                                                              0x00007000L
//MMSCH_LAST_MEM_ACCESS_LO
#define MMSCH_LAST_MEM_ACCESS_LO__PROC_ADDR__SHIFT                                                            0x0
#define MMSCH_LAST_MEM_ACCESS_LO__PROC_ADDR_MASK                                                              0xFFFFFFFFL
//MMSCH_SCRATCH_0
#define MMSCH_SCRATCH_0__SCRATCH_0__SHIFT                                                                     0x0
#define MMSCH_SCRATCH_0__SCRATCH_0_MASK                                                                       0xFFFFFFFFL
//MMSCH_SCRATCH_1
#define MMSCH_SCRATCH_1__SCRATCH_1__SHIFT                                                                     0x0
#define MMSCH_SCRATCH_1__SCRATCH_1_MASK                                                                       0xFFFFFFFFL
//MMSCH_GPUIOV_SCH_BLOCK_0
#define MMSCH_GPUIOV_SCH_BLOCK_0__ID__SHIFT                                                                   0x0
#define MMSCH_GPUIOV_SCH_BLOCK_0__VERSION__SHIFT                                                              0x4
#define MMSCH_GPUIOV_SCH_BLOCK_0__SIZE__SHIFT                                                                 0x8
#define MMSCH_GPUIOV_SCH_BLOCK_0__ID_MASK                                                                     0x0000000FL
#define MMSCH_GPUIOV_SCH_BLOCK_0__VERSION_MASK                                                                0x000000F0L
#define MMSCH_GPUIOV_SCH_BLOCK_0__SIZE_MASK                                                                   0x0000FF00L
//MMSCH_GPUIOV_CMD_CONTROL_0
#define MMSCH_GPUIOV_CMD_CONTROL_0__CMD_TYPE__SHIFT                                                           0x0
#define MMSCH_GPUIOV_CMD_CONTROL_0__CMD_EXECUTE__SHIFT                                                        0x4
#define MMSCH_GPUIOV_CMD_CONTROL_0__CMD_EXECUTE_INTR_EN__SHIFT                                                0x5
#define MMSCH_GPUIOV_CMD_CONTROL_0__VM_BUSY_INTR_EN__SHIFT                                                    0x6
#define MMSCH_GPUIOV_CMD_CONTROL_0__FUNCTINO_ID__SHIFT                                                        0x8
#define MMSCH_GPUIOV_CMD_CONTROL_0__NEXT_FUNCTINO_ID__SHIFT                                                   0x10
#define MMSCH_GPUIOV_CMD_CONTROL_0__CMD_TYPE_MASK                                                             0x0000000FL
#define MMSCH_GPUIOV_CMD_CONTROL_0__CMD_EXECUTE_MASK                                                          0x00000010L
#define MMSCH_GPUIOV_CMD_CONTROL_0__CMD_EXECUTE_INTR_EN_MASK                                                  0x00000020L
#define MMSCH_GPUIOV_CMD_CONTROL_0__VM_BUSY_INTR_EN_MASK                                                      0x00000040L
#define MMSCH_GPUIOV_CMD_CONTROL_0__FUNCTINO_ID_MASK                                                          0x0000FF00L
#define MMSCH_GPUIOV_CMD_CONTROL_0__NEXT_FUNCTINO_ID_MASK                                                     0x00FF0000L
//MMSCH_GPUIOV_CMD_STATUS_0
#define MMSCH_GPUIOV_CMD_STATUS_0__CMD_STATUS__SHIFT                                                          0x0
#define MMSCH_GPUIOV_CMD_STATUS_0__CMD_STATUS_MASK                                                            0x0000000FL
//MMSCH_GPUIOV_VM_BUSY_STATUS_0
#define MMSCH_GPUIOV_VM_BUSY_STATUS_0__BUSY__SHIFT                                                            0x0
#define MMSCH_GPUIOV_VM_BUSY_STATUS_0__BUSY_MASK                                                              0xFFFFFFFFL
//MMSCH_GPUIOV_ACTIVE_FCNS_0
#define MMSCH_GPUIOV_ACTIVE_FCNS_0__ACTIVE_FCNS__SHIFT                                                        0x0
#define MMSCH_GPUIOV_ACTIVE_FCNS_0__ACTIVE_FCNS_MASK                                                          0xFFFFFFFFL
//MMSCH_GPUIOV_DW6_0
#define MMSCH_GPUIOV_DW6_0__DATA__SHIFT                                                                       0x0
#define MMSCH_GPUIOV_DW6_0__DATA_MASK                                                                         0xFFFFFFFFL
//MMSCH_GPUIOV_DW7_0
#define MMSCH_GPUIOV_DW7_0__DATA__SHIFT                                                                       0x0
#define MMSCH_GPUIOV_DW7_0__DATA_MASK                                                                         0xFFFFFFFFL
//MMSCH_GPUIOV_DW8_0
#define MMSCH_GPUIOV_DW8_0__DATA__SHIFT                                                                       0x0
#define MMSCH_GPUIOV_DW8_0__DATA_MASK                                                                         0xFFFFFFFFL
//MMSCH_GPUIOV_SCH_BLOCK_1
#define MMSCH_GPUIOV_SCH_BLOCK_1__ID__SHIFT                                                                   0x0
#define MMSCH_GPUIOV_SCH_BLOCK_1__VERSION__SHIFT                                                              0x4
#define MMSCH_GPUIOV_SCH_BLOCK_1__SIZE__SHIFT                                                                 0x8
#define MMSCH_GPUIOV_SCH_BLOCK_1__ID_MASK                                                                     0x0000000FL
#define MMSCH_GPUIOV_SCH_BLOCK_1__VERSION_MASK                                                                0x000000F0L
#define MMSCH_GPUIOV_SCH_BLOCK_1__SIZE_MASK                                                                   0x0000FF00L
//MMSCH_GPUIOV_CMD_CONTROL_1
#define MMSCH_GPUIOV_CMD_CONTROL_1__CMD_TYPE__SHIFT                                                           0x0
#define MMSCH_GPUIOV_CMD_CONTROL_1__CMD_EXECUTE__SHIFT                                                        0x4
#define MMSCH_GPUIOV_CMD_CONTROL_1__CMD_EXECUTE_INTR_EN__SHIFT                                                0x5
#define MMSCH_GPUIOV_CMD_CONTROL_1__VM_BUSY_INTR_EN__SHIFT                                                    0x6
#define MMSCH_GPUIOV_CMD_CONTROL_1__FUNCTINO_ID__SHIFT                                                        0x8
#define MMSCH_GPUIOV_CMD_CONTROL_1__NEXT_FUNCTINO_ID__SHIFT                                                   0x10
#define MMSCH_GPUIOV_CMD_CONTROL_1__CMD_TYPE_MASK                                                             0x0000000FL
#define MMSCH_GPUIOV_CMD_CONTROL_1__CMD_EXECUTE_MASK                                                          0x00000010L
#define MMSCH_GPUIOV_CMD_CONTROL_1__CMD_EXECUTE_INTR_EN_MASK                                                  0x00000020L
#define MMSCH_GPUIOV_CMD_CONTROL_1__VM_BUSY_INTR_EN_MASK                                                      0x00000040L
#define MMSCH_GPUIOV_CMD_CONTROL_1__FUNCTINO_ID_MASK                                                          0x0000FF00L
#define MMSCH_GPUIOV_CMD_CONTROL_1__NEXT_FUNCTINO_ID_MASK                                                     0x00FF0000L
//MMSCH_GPUIOV_CMD_STATUS_1
#define MMSCH_GPUIOV_CMD_STATUS_1__CMD_STATUS__SHIFT                                                          0x0
#define MMSCH_GPUIOV_CMD_STATUS_1__CMD_STATUS_MASK                                                            0x0000000FL
//MMSCH_GPUIOV_VM_BUSY_STATUS_1
#define MMSCH_GPUIOV_VM_BUSY_STATUS_1__BUSY__SHIFT                                                            0x0
#define MMSCH_GPUIOV_VM_BUSY_STATUS_1__BUSY_MASK                                                              0xFFFFFFFFL
//MMSCH_GPUIOV_ACTIVE_FCNS_1
#define MMSCH_GPUIOV_ACTIVE_FCNS_1__ACTIVE_FCNS__SHIFT                                                        0x0
#define MMSCH_GPUIOV_ACTIVE_FCNS_1__ACTIVE_FCNS_MASK                                                          0xFFFFFFFFL
//MMSCH_GPUIOV_DW6_1
#define MMSCH_GPUIOV_DW6_1__DATA__SHIFT                                                                       0x0
#define MMSCH_GPUIOV_DW6_1__DATA_MASK                                                                         0xFFFFFFFFL
//MMSCH_GPUIOV_DW7_1
#define MMSCH_GPUIOV_DW7_1__DATA__SHIFT                                                                       0x0
#define MMSCH_GPUIOV_DW7_1__DATA_MASK                                                                         0xFFFFFFFFL
//MMSCH_GPUIOV_DW8_1
#define MMSCH_GPUIOV_DW8_1__DATA__SHIFT                                                                       0x0
#define MMSCH_GPUIOV_DW8_1__DATA_MASK                                                                         0xFFFFFFFFL
//MMSCH_GPUIOV_CNTXT
#define MMSCH_GPUIOV_CNTXT__CNTXT_SIZE__SHIFT                                                                 0x0
#define MMSCH_GPUIOV_CNTXT__CNTXT_LOCATION__SHIFT                                                             0x7
#define MMSCH_GPUIOV_CNTXT__CNTXT_OFFSET__SHIFT                                                               0xa
#define MMSCH_GPUIOV_CNTXT__CNTXT_SIZE_MASK                                                                   0x0000007FL
#define MMSCH_GPUIOV_CNTXT__CNTXT_LOCATION_MASK                                                               0x00000080L
#define MMSCH_GPUIOV_CNTXT__CNTXT_OFFSET_MASK                                                                 0xFFFFFC00L
//MMSCH_SCRATCH_2
#define MMSCH_SCRATCH_2__SCRATCH_2__SHIFT                                                                     0x0
#define MMSCH_SCRATCH_2__SCRATCH_2_MASK                                                                       0xFFFFFFFFL
//MMSCH_SCRATCH_3
#define MMSCH_SCRATCH_3__SCRATCH_3__SHIFT                                                                     0x0
#define MMSCH_SCRATCH_3__SCRATCH_3_MASK                                                                       0xFFFFFFFFL
//MMSCH_SCRATCH_4
#define MMSCH_SCRATCH_4__SCRATCH_4__SHIFT                                                                     0x0
#define MMSCH_SCRATCH_4__SCRATCH_4_MASK                                                                       0xFFFFFFFFL
//MMSCH_SCRATCH_5
#define MMSCH_SCRATCH_5__SCRATCH_5__SHIFT                                                                     0x0
#define MMSCH_SCRATCH_5__SCRATCH_5_MASK                                                                       0xFFFFFFFFL
//MMSCH_SCRATCH_6
#define MMSCH_SCRATCH_6__SCRATCH_6__SHIFT                                                                     0x0
#define MMSCH_SCRATCH_6__SCRATCH_6_MASK                                                                       0xFFFFFFFFL
//MMSCH_SCRATCH_7
#define MMSCH_SCRATCH_7__SCRATCH_7__SHIFT                                                                     0x0
#define MMSCH_SCRATCH_7__SCRATCH_7_MASK                                                                       0xFFFFFFFFL
//MMSCH_VFID_FIFO_HEAD_0
#define MMSCH_VFID_FIFO_HEAD_0__HEAD__SHIFT                                                                   0x0
#define MMSCH_VFID_FIFO_HEAD_0__HEAD_MASK                                                                     0x0000003FL
//MMSCH_VFID_FIFO_TAIL_0
#define MMSCH_VFID_FIFO_TAIL_0__TAIL__SHIFT                                                                   0x0
#define MMSCH_VFID_FIFO_TAIL_0__TAIL_MASK                                                                     0x0000003FL
//MMSCH_VFID_FIFO_HEAD_1
#define MMSCH_VFID_FIFO_HEAD_1__HEAD__SHIFT                                                                   0x0
#define MMSCH_VFID_FIFO_HEAD_1__HEAD_MASK                                                                     0x0000003FL
//MMSCH_VFID_FIFO_TAIL_1
#define MMSCH_VFID_FIFO_TAIL_1__TAIL__SHIFT                                                                   0x0
#define MMSCH_VFID_FIFO_TAIL_1__TAIL_MASK                                                                     0x0000003FL
//MMSCH_NACK_STATUS
#define MMSCH_NACK_STATUS__WR_NACK_STATUS__SHIFT                                                              0x0
#define MMSCH_NACK_STATUS__RD_NACK_STATUS__SHIFT                                                              0x2
#define MMSCH_NACK_STATUS__WR_NACK_STATUS_MASK                                                                0x00000003L
#define MMSCH_NACK_STATUS__RD_NACK_STATUS_MASK                                                                0x0000000CL
//MMSCH_VF_MAILBOX0_DATA
#define MMSCH_VF_MAILBOX0_DATA__DATA__SHIFT                                                                   0x0
#define MMSCH_VF_MAILBOX0_DATA__DATA_MASK                                                                     0xFFFFFFFFL
//MMSCH_VF_MAILBOX1_DATA
#define MMSCH_VF_MAILBOX1_DATA__DATA__SHIFT                                                                   0x0
#define MMSCH_VF_MAILBOX1_DATA__DATA_MASK                                                                     0xFFFFFFFFL
//MMSCH_GPUIOV_SCH_BLOCK_IP_0
#define MMSCH_GPUIOV_SCH_BLOCK_IP_0__ID__SHIFT                                                                0x0
#define MMSCH_GPUIOV_SCH_BLOCK_IP_0__VERSION__SHIFT                                                           0x4
#define MMSCH_GPUIOV_SCH_BLOCK_IP_0__SIZE__SHIFT                                                              0x8
#define MMSCH_GPUIOV_SCH_BLOCK_IP_0__ID_MASK                                                                  0x0000000FL
#define MMSCH_GPUIOV_SCH_BLOCK_IP_0__VERSION_MASK                                                             0x000000F0L
#define MMSCH_GPUIOV_SCH_BLOCK_IP_0__SIZE_MASK                                                                0x0000FF00L
//MMSCH_GPUIOV_CMD_STATUS_IP_0
#define MMSCH_GPUIOV_CMD_STATUS_IP_0__CMD_STATUS__SHIFT                                                       0x0
#define MMSCH_GPUIOV_CMD_STATUS_IP_0__CMD_STATUS_MASK                                                         0x0000000FL
//MMSCH_GPUIOV_SCH_BLOCK_IP_1
#define MMSCH_GPUIOV_SCH_BLOCK_IP_1__ID__SHIFT                                                                0x0
#define MMSCH_GPUIOV_SCH_BLOCK_IP_1__VERSION__SHIFT                                                           0x4
#define MMSCH_GPUIOV_SCH_BLOCK_IP_1__SIZE__SHIFT                                                              0x8
#define MMSCH_GPUIOV_SCH_BLOCK_IP_1__ID_MASK                                                                  0x0000000FL
#define MMSCH_GPUIOV_SCH_BLOCK_IP_1__VERSION_MASK                                                             0x000000F0L
#define MMSCH_GPUIOV_SCH_BLOCK_IP_1__SIZE_MASK                                                                0x0000FF00L
//MMSCH_GPUIOV_CMD_STATUS_IP_1
#define MMSCH_GPUIOV_CMD_STATUS_IP_1__CMD_STATUS__SHIFT                                                       0x0
#define MMSCH_GPUIOV_CMD_STATUS_IP_1__CMD_STATUS_MASK                                                         0x0000000FL
//MMSCH_GPUIOV_CNTXT_IP
#define MMSCH_GPUIOV_CNTXT_IP__CNTXT_SIZE__SHIFT                                                              0x0
#define MMSCH_GPUIOV_CNTXT_IP__CNTXT_LOCATION__SHIFT                                                          0x7
#define MMSCH_GPUIOV_CNTXT_IP__CNTXT_SIZE_MASK                                                                0x0000007FL
#define MMSCH_GPUIOV_CNTXT_IP__CNTXT_LOCATION_MASK                                                            0x00000080L
//MMSCH_GPUIOV_SCH_BLOCK_2
#define MMSCH_GPUIOV_SCH_BLOCK_2__ID__SHIFT                                                                   0x0
#define MMSCH_GPUIOV_SCH_BLOCK_2__VERSION__SHIFT                                                              0x4
#define MMSCH_GPUIOV_SCH_BLOCK_2__SIZE__SHIFT                                                                 0x8
#define MMSCH_GPUIOV_SCH_BLOCK_2__ID_MASK                                                                     0x0000000FL
#define MMSCH_GPUIOV_SCH_BLOCK_2__VERSION_MASK                                                                0x000000F0L
#define MMSCH_GPUIOV_SCH_BLOCK_2__SIZE_MASK                                                                   0x0000FF00L
//MMSCH_GPUIOV_CMD_CONTROL_2
#define MMSCH_GPUIOV_CMD_CONTROL_2__CMD_TYPE__SHIFT                                                           0x0
#define MMSCH_GPUIOV_CMD_CONTROL_2__CMD_EXECUTE__SHIFT                                                        0x4
#define MMSCH_GPUIOV_CMD_CONTROL_2__CMD_EXECUTE_INTR_EN__SHIFT                                                0x5
#define MMSCH_GPUIOV_CMD_CONTROL_2__VM_BUSY_INTR_EN__SHIFT                                                    0x6
#define MMSCH_GPUIOV_CMD_CONTROL_2__FUNCTINO_ID__SHIFT                                                        0x8
#define MMSCH_GPUIOV_CMD_CONTROL_2__NEXT_FUNCTINO_ID__SHIFT                                                   0x10
#define MMSCH_GPUIOV_CMD_CONTROL_2__CMD_TYPE_MASK                                                             0x0000000FL
#define MMSCH_GPUIOV_CMD_CONTROL_2__CMD_EXECUTE_MASK                                                          0x00000010L
#define MMSCH_GPUIOV_CMD_CONTROL_2__CMD_EXECUTE_INTR_EN_MASK                                                  0x00000020L
#define MMSCH_GPUIOV_CMD_CONTROL_2__VM_BUSY_INTR_EN_MASK                                                      0x00000040L
#define MMSCH_GPUIOV_CMD_CONTROL_2__FUNCTINO_ID_MASK                                                          0x0000FF00L
#define MMSCH_GPUIOV_CMD_CONTROL_2__NEXT_FUNCTINO_ID_MASK                                                     0x00FF0000L
//MMSCH_GPUIOV_CMD_STATUS_2
#define MMSCH_GPUIOV_CMD_STATUS_2__CMD_STATUS__SHIFT                                                          0x0
#define MMSCH_GPUIOV_CMD_STATUS_2__CMD_STATUS_MASK                                                            0x0000000FL
//MMSCH_GPUIOV_VM_BUSY_STATUS_2
#define MMSCH_GPUIOV_VM_BUSY_STATUS_2__BUSY__SHIFT                                                            0x0
#define MMSCH_GPUIOV_VM_BUSY_STATUS_2__BUSY_MASK                                                              0xFFFFFFFFL
//MMSCH_GPUIOV_ACTIVE_FCNS_2
#define MMSCH_GPUIOV_ACTIVE_FCNS_2__ACTIVE_FCNS__SHIFT                                                        0x0
#define MMSCH_GPUIOV_ACTIVE_FCNS_2__ACTIVE_FCNS_MASK                                                          0xFFFFFFFFL
//MMSCH_GPUIOV_DW6_2
#define MMSCH_GPUIOV_DW6_2__DATA__SHIFT                                                                       0x0
#define MMSCH_GPUIOV_DW6_2__DATA_MASK                                                                         0xFFFFFFFFL
//MMSCH_GPUIOV_DW7_2
#define MMSCH_GPUIOV_DW7_2__DATA__SHIFT                                                                       0x0
#define MMSCH_GPUIOV_DW7_2__DATA_MASK                                                                         0xFFFFFFFFL
//MMSCH_GPUIOV_DW8_2
#define MMSCH_GPUIOV_DW8_2__DATA__SHIFT                                                                       0x0
#define MMSCH_GPUIOV_DW8_2__DATA_MASK                                                                         0xFFFFFFFFL
//MMSCH_GPUIOV_SCH_BLOCK_IP_2
#define MMSCH_GPUIOV_SCH_BLOCK_IP_2__ID__SHIFT                                                                0x0
#define MMSCH_GPUIOV_SCH_BLOCK_IP_2__VERSION__SHIFT                                                           0x4
#define MMSCH_GPUIOV_SCH_BLOCK_IP_2__SIZE__SHIFT                                                              0x8
#define MMSCH_GPUIOV_SCH_BLOCK_IP_2__ID_MASK                                                                  0x0000000FL
#define MMSCH_GPUIOV_SCH_BLOCK_IP_2__VERSION_MASK                                                             0x000000F0L
#define MMSCH_GPUIOV_SCH_BLOCK_IP_2__SIZE_MASK                                                                0x0000FF00L
//MMSCH_GPUIOV_CMD_STATUS_IP_2
#define MMSCH_GPUIOV_CMD_STATUS_IP_2__CMD_STATUS__SHIFT                                                       0x0
#define MMSCH_GPUIOV_CMD_STATUS_IP_2__CMD_STATUS_MASK                                                         0x0000000FL
//MMSCH_VFID_FIFO_HEAD_2
#define MMSCH_VFID_FIFO_HEAD_2__HEAD__SHIFT                                                                   0x0
#define MMSCH_VFID_FIFO_HEAD_2__HEAD_MASK                                                                     0x0000003FL
//MMSCH_VFID_FIFO_TAIL_2
#define MMSCH_VFID_FIFO_TAIL_2__TAIL__SHIFT                                                                   0x0
#define MMSCH_VFID_FIFO_TAIL_2__TAIL_MASK                                                                     0x0000003FL
//MMSCH_VM_BUSY_STATUS_0
#define MMSCH_VM_BUSY_STATUS_0__BUSY__SHIFT                                                                   0x0
#define MMSCH_VM_BUSY_STATUS_0__BUSY_MASK                                                                     0xFFFFFFFFL
//MMSCH_VM_BUSY_STATUS_1
#define MMSCH_VM_BUSY_STATUS_1__BUSY__SHIFT                                                                   0x0
#define MMSCH_VM_BUSY_STATUS_1__BUSY_MASK                                                                     0xFFFFFFFFL
//MMSCH_VM_BUSY_STATUS_2
#define MMSCH_VM_BUSY_STATUS_2__BUSY__SHIFT                                                                   0x0
#define MMSCH_VM_BUSY_STATUS_2__BUSY_MASK                                                                     0xFFFFFFFFL


// addressBlock: uvd0_slmi_adpdec
//UVD_LMI_MMSCH_NC0_64BIT_BAR_LOW
#define UVD_LMI_MMSCH_NC0_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                     0x0
#define UVD_LMI_MMSCH_NC0_64BIT_BAR_LOW__BITS_31_0_MASK                                                       0xFFFFFFFFL
//UVD_LMI_MMSCH_NC0_64BIT_BAR_HIGH
#define UVD_LMI_MMSCH_NC0_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                   0x0
#define UVD_LMI_MMSCH_NC0_64BIT_BAR_HIGH__BITS_63_32_MASK                                                     0xFFFFFFFFL
//UVD_LMI_MMSCH_NC1_64BIT_BAR_LOW
#define UVD_LMI_MMSCH_NC1_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                     0x0
#define UVD_LMI_MMSCH_NC1_64BIT_BAR_LOW__BITS_31_0_MASK                                                       0xFFFFFFFFL
//UVD_LMI_MMSCH_NC1_64BIT_BAR_HIGH
#define UVD_LMI_MMSCH_NC1_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                   0x0
#define UVD_LMI_MMSCH_NC1_64BIT_BAR_HIGH__BITS_63_32_MASK                                                     0xFFFFFFFFL
//UVD_LMI_MMSCH_NC2_64BIT_BAR_LOW
#define UVD_LMI_MMSCH_NC2_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                     0x0
#define UVD_LMI_MMSCH_NC2_64BIT_BAR_LOW__BITS_31_0_MASK                                                       0xFFFFFFFFL
//UVD_LMI_MMSCH_NC2_64BIT_BAR_HIGH
#define UVD_LMI_MMSCH_NC2_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                   0x0
#define UVD_LMI_MMSCH_NC2_64BIT_BAR_HIGH__BITS_63_32_MASK                                                     0xFFFFFFFFL
//UVD_LMI_MMSCH_NC3_64BIT_BAR_LOW
#define UVD_LMI_MMSCH_NC3_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                     0x0
#define UVD_LMI_MMSCH_NC3_64BIT_BAR_LOW__BITS_31_0_MASK                                                       0xFFFFFFFFL
//UVD_LMI_MMSCH_NC3_64BIT_BAR_HIGH
#define UVD_LMI_MMSCH_NC3_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                   0x0
#define UVD_LMI_MMSCH_NC3_64BIT_BAR_HIGH__BITS_63_32_MASK                                                     0xFFFFFFFFL
//UVD_LMI_MMSCH_NC4_64BIT_BAR_LOW
#define UVD_LMI_MMSCH_NC4_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                     0x0
#define UVD_LMI_MMSCH_NC4_64BIT_BAR_LOW__BITS_31_0_MASK                                                       0xFFFFFFFFL
//UVD_LMI_MMSCH_NC4_64BIT_BAR_HIGH
#define UVD_LMI_MMSCH_NC4_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                   0x0
#define UVD_LMI_MMSCH_NC4_64BIT_BAR_HIGH__BITS_63_32_MASK                                                     0xFFFFFFFFL
//UVD_LMI_MMSCH_NC5_64BIT_BAR_LOW
#define UVD_LMI_MMSCH_NC5_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                     0x0
#define UVD_LMI_MMSCH_NC5_64BIT_BAR_LOW__BITS_31_0_MASK                                                       0xFFFFFFFFL
//UVD_LMI_MMSCH_NC5_64BIT_BAR_HIGH
#define UVD_LMI_MMSCH_NC5_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                   0x0
#define UVD_LMI_MMSCH_NC5_64BIT_BAR_HIGH__BITS_63_32_MASK                                                     0xFFFFFFFFL
//UVD_LMI_MMSCH_NC6_64BIT_BAR_LOW
#define UVD_LMI_MMSCH_NC6_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                     0x0
#define UVD_LMI_MMSCH_NC6_64BIT_BAR_LOW__BITS_31_0_MASK                                                       0xFFFFFFFFL
//UVD_LMI_MMSCH_NC6_64BIT_BAR_HIGH
#define UVD_LMI_MMSCH_NC6_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                   0x0
#define UVD_LMI_MMSCH_NC6_64BIT_BAR_HIGH__BITS_63_32_MASK                                                     0xFFFFFFFFL
//UVD_LMI_MMSCH_NC7_64BIT_BAR_LOW
#define UVD_LMI_MMSCH_NC7_64BIT_BAR_LOW__BITS_31_0__SHIFT                                                     0x0
#define UVD_LMI_MMSCH_NC7_64BIT_BAR_LOW__BITS_31_0_MASK                                                       0xFFFFFFFFL
//UVD_LMI_MMSCH_NC7_64BIT_BAR_HIGH
#define UVD_LMI_MMSCH_NC7_64BIT_BAR_HIGH__BITS_63_32__SHIFT                                                   0x0
#define UVD_LMI_MMSCH_NC7_64BIT_BAR_HIGH__BITS_63_32_MASK                                                     0xFFFFFFFFL
//UVD_LMI_MMSCH_NC_VMID
#define UVD_LMI_MMSCH_NC_VMID__MMSCH_NC0_VMID__SHIFT                                                          0x0
#define UVD_LMI_MMSCH_NC_VMID__MMSCH_NC1_VMID__SHIFT                                                          0x4
#define UVD_LMI_MMSCH_NC_VMID__MMSCH_NC2_VMID__SHIFT                                                          0x8
#define UVD_LMI_MMSCH_NC_VMID__MMSCH_NC3_VMID__SHIFT                                                          0xc
#define UVD_LMI_MMSCH_NC_VMID__MMSCH_NC4_VMID__SHIFT                                                          0x10
#define UVD_LMI_MMSCH_NC_VMID__MMSCH_NC5_VMID__SHIFT                                                          0x14
#define UVD_LMI_MMSCH_NC_VMID__MMSCH_NC6_VMID__SHIFT                                                          0x18
#define UVD_LMI_MMSCH_NC_VMID__MMSCH_NC7_VMID__SHIFT                                                          0x1c
#define UVD_LMI_MMSCH_NC_VMID__MMSCH_NC0_VMID_MASK                                                            0x0000000FL
#define UVD_LMI_MMSCH_NC_VMID__MMSCH_NC1_VMID_MASK                                                            0x000000F0L
#define UVD_LMI_MMSCH_NC_VMID__MMSCH_NC2_VMID_MASK                                                            0x00000F00L
#define UVD_LMI_MMSCH_NC_VMID__MMSCH_NC3_VMID_MASK                                                            0x0000F000L
#define UVD_LMI_MMSCH_NC_VMID__MMSCH_NC4_VMID_MASK                                                            0x000F0000L
#define UVD_LMI_MMSCH_NC_VMID__MMSCH_NC5_VMID_MASK                                                            0x00F00000L
#define UVD_LMI_MMSCH_NC_VMID__MMSCH_NC6_VMID_MASK                                                            0x0F000000L
#define UVD_LMI_MMSCH_NC_VMID__MMSCH_NC7_VMID_MASK                                                            0xF0000000L
//UVD_LMI_MMSCH_CTRL
#define UVD_LMI_MMSCH_CTRL__MMSCH_DATA_COHERENCY_EN__SHIFT                                                    0x0
#define UVD_LMI_MMSCH_CTRL__MMSCH_VM__SHIFT                                                                   0x1
#define UVD_LMI_MMSCH_CTRL__PRIV_CLIENT_MMSCH__SHIFT                                                          0x2
#define UVD_LMI_MMSCH_CTRL__MMSCH_R_MC_SWAP__SHIFT                                                            0x3
#define UVD_LMI_MMSCH_CTRL__MMSCH_W_MC_SWAP__SHIFT                                                            0x5
#define UVD_LMI_MMSCH_CTRL__MMSCH_RD__SHIFT                                                                   0x7
#define UVD_LMI_MMSCH_CTRL__MMSCH_WR__SHIFT                                                                   0x9
#define UVD_LMI_MMSCH_CTRL__MMSCH_RD_DROP__SHIFT                                                              0xb
#define UVD_LMI_MMSCH_CTRL__MMSCH_WR_DROP__SHIFT                                                              0xc
#define UVD_LMI_MMSCH_CTRL__MMSCH_DATA_COHERENCY_EN_MASK                                                      0x00000001L
#define UVD_LMI_MMSCH_CTRL__MMSCH_VM_MASK                                                                     0x00000002L
#define UVD_LMI_MMSCH_CTRL__PRIV_CLIENT_MMSCH_MASK                                                            0x00000004L
#define UVD_LMI_MMSCH_CTRL__MMSCH_R_MC_SWAP_MASK                                                              0x00000018L
#define UVD_LMI_MMSCH_CTRL__MMSCH_W_MC_SWAP_MASK                                                              0x00000060L
#define UVD_LMI_MMSCH_CTRL__MMSCH_RD_MASK                                                                     0x00000180L
#define UVD_LMI_MMSCH_CTRL__MMSCH_WR_MASK                                                                     0x00000600L
#define UVD_LMI_MMSCH_CTRL__MMSCH_RD_DROP_MASK                                                                0x00000800L
#define UVD_LMI_MMSCH_CTRL__MMSCH_WR_DROP_MASK                                                                0x00001000L
//UVD_MMSCH_LMI_STATUS
#define UVD_MMSCH_LMI_STATUS__MMSCH_LMI_WRITE_CLEAN__SHIFT                                                    0x2
#define UVD_MMSCH_LMI_STATUS__MMSCH_RD_CLEAN__SHIFT                                                           0xd
#define UVD_MMSCH_LMI_STATUS__MMSCH_WR_CLEAN__SHIFT                                                           0xe
#define UVD_MMSCH_LMI_STATUS__MMSCH_LMI_WRITE_CLEAN_MASK                                                      0x00000004L
#define UVD_MMSCH_LMI_STATUS__MMSCH_RD_CLEAN_MASK                                                             0x00002000L
#define UVD_MMSCH_LMI_STATUS__MMSCH_WR_CLEAN_MASK                                                             0x00004000L
//VCN_RAS_CNTL_MMSCH
#define VCN_RAS_CNTL_MMSCH__MMSCH_FATAL_ERROR_EN__SHIFT                                                       0x1
#define VCN_RAS_CNTL_MMSCH__MMSCH_PMI_EN__SHIFT                                                               0x5
#define VCN_RAS_CNTL_MMSCH__MMSCH_REARM__SHIFT                                                                0x9
#define VCN_RAS_CNTL_MMSCH__MMSCH_READY__SHIFT                                                                0x11
#define VCN_RAS_CNTL_MMSCH__MMSCH_FATAL_ERROR_EN_MASK                                                         0x00000002L
#define VCN_RAS_CNTL_MMSCH__MMSCH_PMI_EN_MASK                                                                 0x00000020L
#define VCN_RAS_CNTL_MMSCH__MMSCH_REARM_MASK                                                                  0x00000200L
#define VCN_RAS_CNTL_MMSCH__MMSCH_READY_MASK                                                                  0x00020000L


// addressBlock: uvdctxind
//UVD_CGC_MEM_CTRL
#define UVD_CGC_MEM_CTRL__LMI_MC_LS_EN__SHIFT                                                                 0x0
#define UVD_CGC_MEM_CTRL__MPC_LS_EN__SHIFT                                                                    0x1
#define UVD_CGC_MEM_CTRL__MPRD_LS_EN__SHIFT                                                                   0x2
#define UVD_CGC_MEM_CTRL__WCB_LS_EN__SHIFT                                                                    0x3
#define UVD_CGC_MEM_CTRL__UDEC_RE_LS_EN__SHIFT                                                                0x4
#define UVD_CGC_MEM_CTRL__UDEC_CM_LS_EN__SHIFT                                                                0x5
#define UVD_CGC_MEM_CTRL__UDEC_IT_LS_EN__SHIFT                                                                0x6
#define UVD_CGC_MEM_CTRL__UDEC_DB_LS_EN__SHIFT                                                                0x7
#define UVD_CGC_MEM_CTRL__UDEC_MP_LS_EN__SHIFT                                                                0x8
#define UVD_CGC_MEM_CTRL__SYS_LS_EN__SHIFT                                                                    0x9
#define UVD_CGC_MEM_CTRL__VCPU_LS_EN__SHIFT                                                                   0xa
#define UVD_CGC_MEM_CTRL__MIF_LS_EN__SHIFT                                                                    0xc
#define UVD_CGC_MEM_CTRL__LCM_LS_EN__SHIFT                                                                    0xd
#define UVD_CGC_MEM_CTRL__MMSCH_LS_EN__SHIFT                                                                  0xe
#define UVD_CGC_MEM_CTRL__MPC1_LS_EN__SHIFT                                                                   0xf
#define UVD_CGC_MEM_CTRL__LS_SET_DELAY__SHIFT                                                                 0x10
#define UVD_CGC_MEM_CTRL__LS_CLEAR_DELAY__SHIFT                                                               0x14
#define UVD_CGC_MEM_CTRL__LMI_MC_LS_EN_MASK                                                                   0x00000001L
#define UVD_CGC_MEM_CTRL__MPC_LS_EN_MASK                                                                      0x00000002L
#define UVD_CGC_MEM_CTRL__MPRD_LS_EN_MASK                                                                     0x00000004L
#define UVD_CGC_MEM_CTRL__WCB_LS_EN_MASK                                                                      0x00000008L
#define UVD_CGC_MEM_CTRL__UDEC_RE_LS_EN_MASK                                                                  0x00000010L
#define UVD_CGC_MEM_CTRL__UDEC_CM_LS_EN_MASK                                                                  0x00000020L
#define UVD_CGC_MEM_CTRL__UDEC_IT_LS_EN_MASK                                                                  0x00000040L
#define UVD_CGC_MEM_CTRL__UDEC_DB_LS_EN_MASK                                                                  0x00000080L
#define UVD_CGC_MEM_CTRL__UDEC_MP_LS_EN_MASK                                                                  0x00000100L
#define UVD_CGC_MEM_CTRL__SYS_LS_EN_MASK                                                                      0x00000200L
#define UVD_CGC_MEM_CTRL__VCPU_LS_EN_MASK                                                                     0x00000400L
#define UVD_CGC_MEM_CTRL__MIF_LS_EN_MASK                                                                      0x00001000L
#define UVD_CGC_MEM_CTRL__LCM_LS_EN_MASK                                                                      0x00002000L
#define UVD_CGC_MEM_CTRL__MMSCH_LS_EN_MASK                                                                    0x00004000L
#define UVD_CGC_MEM_CTRL__MPC1_LS_EN_MASK                                                                     0x00008000L
#define UVD_CGC_MEM_CTRL__LS_SET_DELAY_MASK                                                                   0x000F0000L
#define UVD_CGC_MEM_CTRL__LS_CLEAR_DELAY_MASK                                                                 0x00F00000L
//UVD_CGC_CTRL2
#define UVD_CGC_CTRL2__DYN_OCLK_RAMP_EN__SHIFT                                                                0x0
#define UVD_CGC_CTRL2__DYN_RCLK_RAMP_EN__SHIFT                                                                0x1
#define UVD_CGC_CTRL2__GATER_DIV_ID__SHIFT                                                                    0x2
#define UVD_CGC_CTRL2__DYN_OCLK_RAMP_EN_MASK                                                                  0x00000001L
#define UVD_CGC_CTRL2__DYN_RCLK_RAMP_EN_MASK                                                                  0x00000002L
#define UVD_CGC_CTRL2__GATER_DIV_ID_MASK                                                                      0x0000001CL
//UVD_CGC_MEM_DS_CTRL
#define UVD_CGC_MEM_DS_CTRL__LMI_MC_DS_EN__SHIFT                                                              0x0
#define UVD_CGC_MEM_DS_CTRL__MPC_DS_EN__SHIFT                                                                 0x1
#define UVD_CGC_MEM_DS_CTRL__MPRD_DS_EN__SHIFT                                                                0x2
#define UVD_CGC_MEM_DS_CTRL__WCB_DS_EN__SHIFT                                                                 0x3
#define UVD_CGC_MEM_DS_CTRL__UDEC_RE_DS_EN__SHIFT                                                             0x4
#define UVD_CGC_MEM_DS_CTRL__UDEC_CM_DS_EN__SHIFT                                                             0x5
#define UVD_CGC_MEM_DS_CTRL__UDEC_IT_DS_EN__SHIFT                                                             0x6
#define UVD_CGC_MEM_DS_CTRL__UDEC_DB_DS_EN__SHIFT                                                             0x7
#define UVD_CGC_MEM_DS_CTRL__UDEC_MP_DS_EN__SHIFT                                                             0x8
#define UVD_CGC_MEM_DS_CTRL__SYS_DS_EN__SHIFT                                                                 0x9
#define UVD_CGC_MEM_DS_CTRL__VCPU_DS_EN__SHIFT                                                                0xa
#define UVD_CGC_MEM_DS_CTRL__MIF_DS_EN__SHIFT                                                                 0xc
#define UVD_CGC_MEM_DS_CTRL__LCM_DS_EN__SHIFT                                                                 0xd
#define UVD_CGC_MEM_DS_CTRL__MMSCH_DS_EN__SHIFT                                                               0xe
#define UVD_CGC_MEM_DS_CTRL__MPC1_DS_EN__SHIFT                                                                0xf
#define UVD_CGC_MEM_DS_CTRL__LMI_MC_DS_EN_MASK                                                                0x00000001L
#define UVD_CGC_MEM_DS_CTRL__MPC_DS_EN_MASK                                                                   0x00000002L
#define UVD_CGC_MEM_DS_CTRL__MPRD_DS_EN_MASK                                                                  0x00000004L
#define UVD_CGC_MEM_DS_CTRL__WCB_DS_EN_MASK                                                                   0x00000008L
#define UVD_CGC_MEM_DS_CTRL__UDEC_RE_DS_EN_MASK                                                               0x00000010L
#define UVD_CGC_MEM_DS_CTRL__UDEC_CM_DS_EN_MASK                                                               0x00000020L
#define UVD_CGC_MEM_DS_CTRL__UDEC_IT_DS_EN_MASK                                                               0x00000040L
#define UVD_CGC_MEM_DS_CTRL__UDEC_DB_DS_EN_MASK                                                               0x00000080L
#define UVD_CGC_MEM_DS_CTRL__UDEC_MP_DS_EN_MASK                                                               0x00000100L
#define UVD_CGC_MEM_DS_CTRL__SYS_DS_EN_MASK                                                                   0x00000200L
#define UVD_CGC_MEM_DS_CTRL__VCPU_DS_EN_MASK                                                                  0x00000400L
#define UVD_CGC_MEM_DS_CTRL__MIF_DS_EN_MASK                                                                   0x00001000L
#define UVD_CGC_MEM_DS_CTRL__LCM_DS_EN_MASK                                                                   0x00002000L
#define UVD_CGC_MEM_DS_CTRL__MMSCH_DS_EN_MASK                                                                 0x00004000L
#define UVD_CGC_MEM_DS_CTRL__MPC1_DS_EN_MASK                                                                  0x00008000L
//UVD_CGC_MEM_SD_CTRL
#define UVD_CGC_MEM_SD_CTRL__LMI_MC_SD_EN__SHIFT                                                              0x0
#define UVD_CGC_MEM_SD_CTRL__MPC_SD_EN__SHIFT                                                                 0x1
#define UVD_CGC_MEM_SD_CTRL__MPRD_SD_EN__SHIFT                                                                0x2
#define UVD_CGC_MEM_SD_CTRL__WCB_SD_EN__SHIFT                                                                 0x3
#define UVD_CGC_MEM_SD_CTRL__UDEC_RE_SD_EN__SHIFT                                                             0x4
#define UVD_CGC_MEM_SD_CTRL__UDEC_CM_SD_EN__SHIFT                                                             0x5
#define UVD_CGC_MEM_SD_CTRL__UDEC_IT_SD_EN__SHIFT                                                             0x6
#define UVD_CGC_MEM_SD_CTRL__UDEC_DB_SD_EN__SHIFT                                                             0x7
#define UVD_CGC_MEM_SD_CTRL__UDEC_MP_SD_EN__SHIFT                                                             0x8
#define UVD_CGC_MEM_SD_CTRL__SYS_SD_EN__SHIFT                                                                 0x9
#define UVD_CGC_MEM_SD_CTRL__VCPU_SD_EN__SHIFT                                                                0xa
#define UVD_CGC_MEM_SD_CTRL__MIF_SD_EN__SHIFT                                                                 0xc
#define UVD_CGC_MEM_SD_CTRL__LCM_SD_EN__SHIFT                                                                 0xd
#define UVD_CGC_MEM_SD_CTRL__MMSCH_SD_EN__SHIFT                                                               0xe
#define UVD_CGC_MEM_SD_CTRL__MPC1_SD_EN__SHIFT                                                                0xf
#define UVD_CGC_MEM_SD_CTRL__LMI_MC_SD_EN_MASK                                                                0x00000001L
#define UVD_CGC_MEM_SD_CTRL__MPC_SD_EN_MASK                                                                   0x00000002L
#define UVD_CGC_MEM_SD_CTRL__MPRD_SD_EN_MASK                                                                  0x00000004L
#define UVD_CGC_MEM_SD_CTRL__WCB_SD_EN_MASK                                                                   0x00000008L
#define UVD_CGC_MEM_SD_CTRL__UDEC_RE_SD_EN_MASK                                                               0x00000010L
#define UVD_CGC_MEM_SD_CTRL__UDEC_CM_SD_EN_MASK                                                               0x00000020L
#define UVD_CGC_MEM_SD_CTRL__UDEC_IT_SD_EN_MASK                                                               0x00000040L
#define UVD_CGC_MEM_SD_CTRL__UDEC_DB_SD_EN_MASK                                                               0x00000080L
#define UVD_CGC_MEM_SD_CTRL__UDEC_MP_SD_EN_MASK                                                               0x00000100L
#define UVD_CGC_MEM_SD_CTRL__SYS_SD_EN_MASK                                                                   0x00000200L
#define UVD_CGC_MEM_SD_CTRL__VCPU_SD_EN_MASK                                                                  0x00000400L
#define UVD_CGC_MEM_SD_CTRL__MIF_SD_EN_MASK                                                                   0x00001000L
#define UVD_CGC_MEM_SD_CTRL__LCM_SD_EN_MASK                                                                   0x00002000L
#define UVD_CGC_MEM_SD_CTRL__MMSCH_SD_EN_MASK                                                                 0x00004000L
#define UVD_CGC_MEM_SD_CTRL__MPC1_SD_EN_MASK                                                                  0x00008000L
//UVD_SW_SCRATCH_00
#define UVD_SW_SCRATCH_00__DATA__SHIFT                                                                        0x0
#define UVD_SW_SCRATCH_00__DATA_MASK                                                                          0xFFFFFFFFL
//UVD_SW_SCRATCH_01
#define UVD_SW_SCRATCH_01__DATA__SHIFT                                                                        0x0
#define UVD_SW_SCRATCH_01__DATA_MASK                                                                          0xFFFFFFFFL
//UVD_SW_SCRATCH_02
#define UVD_SW_SCRATCH_02__DATA__SHIFT                                                                        0x0
#define UVD_SW_SCRATCH_02__DATA_MASK                                                                          0xFFFFFFFFL
//UVD_SW_SCRATCH_03
#define UVD_SW_SCRATCH_03__DATA__SHIFT                                                                        0x0
#define UVD_SW_SCRATCH_03__DATA_MASK                                                                          0xFFFFFFFFL
//UVD_SW_SCRATCH_04
#define UVD_SW_SCRATCH_04__DATA__SHIFT                                                                        0x0
#define UVD_SW_SCRATCH_04__DATA_MASK                                                                          0xFFFFFFFFL
//UVD_SW_SCRATCH_05
#define UVD_SW_SCRATCH_05__DATA__SHIFT                                                                        0x0
#define UVD_SW_SCRATCH_05__DATA_MASK                                                                          0xFFFFFFFFL
//UVD_SW_SCRATCH_06
#define UVD_SW_SCRATCH_06__DATA__SHIFT                                                                        0x0
#define UVD_SW_SCRATCH_06__DATA_MASK                                                                          0xFFFFFFFFL
//UVD_SW_SCRATCH_07
#define UVD_SW_SCRATCH_07__DATA__SHIFT                                                                        0x0
#define UVD_SW_SCRATCH_07__DATA_MASK                                                                          0xFFFFFFFFL
//UVD_SW_SCRATCH_08
#define UVD_SW_SCRATCH_08__DATA__SHIFT                                                                        0x0
#define UVD_SW_SCRATCH_08__DATA_MASK                                                                          0xFFFFFFFFL
//UVD_SW_SCRATCH_09
#define UVD_SW_SCRATCH_09__DATA__SHIFT                                                                        0x0
#define UVD_SW_SCRATCH_09__DATA_MASK                                                                          0xFFFFFFFFL
//UVD_SW_SCRATCH_10
#define UVD_SW_SCRATCH_10__DATA__SHIFT                                                                        0x0
#define UVD_SW_SCRATCH_10__DATA_MASK                                                                          0xFFFFFFFFL
//UVD_SW_SCRATCH_11
#define UVD_SW_SCRATCH_11__DATA__SHIFT                                                                        0x0
#define UVD_SW_SCRATCH_11__DATA_MASK                                                                          0xFFFFFFFFL
//UVD_SW_SCRATCH_12
#define UVD_SW_SCRATCH_12__DATA__SHIFT                                                                        0x0
#define UVD_SW_SCRATCH_12__DATA_MASK                                                                          0xFFFFFFFFL
//UVD_SW_SCRATCH_13
#define UVD_SW_SCRATCH_13__DATA__SHIFT                                                                        0x0
#define UVD_SW_SCRATCH_13__DATA_MASK                                                                          0xFFFFFFFFL
//UVD_SW_SCRATCH_14
#define UVD_SW_SCRATCH_14__DATA__SHIFT                                                                        0x0
#define UVD_SW_SCRATCH_14__DATA_MASK                                                                          0xFFFFFFFFL
//UVD_SW_SCRATCH_15
#define UVD_SW_SCRATCH_15__DATA__SHIFT                                                                        0x0
#define UVD_SW_SCRATCH_15__DATA_MASK                                                                          0xFFFFFFFFL
//UVD_IH_SEM_CTRL
#define UVD_IH_SEM_CTRL__IH_STALL_EN__SHIFT                                                                   0x0
#define UVD_IH_SEM_CTRL__SEM_STALL_EN__SHIFT                                                                  0x1
#define UVD_IH_SEM_CTRL__IH_STATUS_CLEAN__SHIFT                                                               0x2
#define UVD_IH_SEM_CTRL__SEM_STATUS_CLEAN__SHIFT                                                              0x3
#define UVD_IH_SEM_CTRL__IH_VMID__SHIFT                                                                       0x4
#define UVD_IH_SEM_CTRL__IH_USER_DATA__SHIFT                                                                  0x8
#define UVD_IH_SEM_CTRL__IH_RINGID__SHIFT                                                                     0x14
#define UVD_IH_SEM_CTRL__IH_STALL_EN_MASK                                                                     0x00000001L
#define UVD_IH_SEM_CTRL__SEM_STALL_EN_MASK                                                                    0x00000002L
#define UVD_IH_SEM_CTRL__IH_STATUS_CLEAN_MASK                                                                 0x00000004L
#define UVD_IH_SEM_CTRL__SEM_STATUS_CLEAN_MASK                                                                0x00000008L
#define UVD_IH_SEM_CTRL__IH_VMID_MASK                                                                         0x000000F0L
#define UVD_IH_SEM_CTRL__IH_USER_DATA_MASK                                                                    0x000FFF00L
#define UVD_IH_SEM_CTRL__IH_RINGID_MASK                                                                       0x0FF00000L


// addressBlock: lmi_adp_indirect
//UVD_LMI_CRC0
#define UVD_LMI_CRC0__CRC32__SHIFT                                                                            0x0
#define UVD_LMI_CRC0__CRC32_MASK                                                                              0xFFFFFFFFL
//UVD_LMI_CRC1
#define UVD_LMI_CRC1__CRC32__SHIFT                                                                            0x0
#define UVD_LMI_CRC1__CRC32_MASK                                                                              0xFFFFFFFFL
//UVD_LMI_CRC2
#define UVD_LMI_CRC2__CRC32__SHIFT                                                                            0x0
#define UVD_LMI_CRC2__CRC32_MASK                                                                              0xFFFFFFFFL
//UVD_LMI_CRC3
#define UVD_LMI_CRC3__CRC32__SHIFT                                                                            0x0
#define UVD_LMI_CRC3__CRC32_MASK                                                                              0xFFFFFFFFL
//UVD_LMI_CRC10
#define UVD_LMI_CRC10__CRC32__SHIFT                                                                           0x0
#define UVD_LMI_CRC10__CRC32_MASK                                                                             0xFFFFFFFFL
//UVD_LMI_CRC11
#define UVD_LMI_CRC11__CRC32__SHIFT                                                                           0x0
#define UVD_LMI_CRC11__CRC32_MASK                                                                             0xFFFFFFFFL
//UVD_LMI_CRC12
#define UVD_LMI_CRC12__CRC32__SHIFT                                                                           0x0
#define UVD_LMI_CRC12__CRC32_MASK                                                                             0xFFFFFFFFL
//UVD_LMI_CRC13
#define UVD_LMI_CRC13__CRC32__SHIFT                                                                           0x0
#define UVD_LMI_CRC13__CRC32_MASK                                                                             0xFFFFFFFFL
//UVD_LMI_CRC14
#define UVD_LMI_CRC14__CRC32__SHIFT                                                                           0x0
#define UVD_LMI_CRC14__CRC32_MASK                                                                             0xFFFFFFFFL
//UVD_LMI_CRC15
#define UVD_LMI_CRC15__CRC32__SHIFT                                                                           0x0
#define UVD_LMI_CRC15__CRC32_MASK                                                                             0xFFFFFFFFL
//UVD_LMI_SWAP_CNTL2
#define UVD_LMI_SWAP_CNTL2__SCPU_R_MC_SWAP__SHIFT                                                             0x0
#define UVD_LMI_SWAP_CNTL2__SCPU_W_MC_SWAP__SHIFT                                                             0x2
#define UVD_LMI_SWAP_CNTL2__ATOMIC_MC_SWAP__SHIFT                                                             0x4
#define UVD_LMI_SWAP_CNTL2__CENC_MC_SWAP__SHIFT                                                               0xc
#define UVD_LMI_SWAP_CNTL2__SCPU_R_MC_SWAP_MASK                                                               0x00000003L
#define UVD_LMI_SWAP_CNTL2__SCPU_W_MC_SWAP_MASK                                                               0x0000000CL
#define UVD_LMI_SWAP_CNTL2__ATOMIC_MC_SWAP_MASK                                                               0x00000FF0L
#define UVD_LMI_SWAP_CNTL2__CENC_MC_SWAP_MASK                                                                 0x00003000L
//UVD_MEMCHECK_SYS_INT_EN
#define UVD_MEMCHECK_SYS_INT_EN__RE_ERR_EN__SHIFT                                                             0x0
#define UVD_MEMCHECK_SYS_INT_EN__IT_ERR_EN__SHIFT                                                             0x1
#define UVD_MEMCHECK_SYS_INT_EN__MP_ERR_EN__SHIFT                                                             0x2
#define UVD_MEMCHECK_SYS_INT_EN__DB_ERR_EN__SHIFT                                                             0x3
#define UVD_MEMCHECK_SYS_INT_EN__DBW_ERR_EN__SHIFT                                                            0x4
#define UVD_MEMCHECK_SYS_INT_EN__CM_ERR_EN__SHIFT                                                             0x5
#define UVD_MEMCHECK_SYS_INT_EN__MIF_REF_ERR_EN__SHIFT                                                        0x6
#define UVD_MEMCHECK_SYS_INT_EN__MIF_DBW_ERR_EN__SHIFT                                                        0x8
#define UVD_MEMCHECK_SYS_INT_EN__MIF_CM_COLOC_ERR_EN__SHIFT                                                   0x9
#define UVD_MEMCHECK_SYS_INT_EN__MIF_BSP0_ERR_EN__SHIFT                                                       0xa
#define UVD_MEMCHECK_SYS_INT_EN__MIF_BSP1_ERR_EN__SHIFT                                                       0xb
#define UVD_MEMCHECK_SYS_INT_EN__SRE_ERR_EN__SHIFT                                                            0xc
#define UVD_MEMCHECK_SYS_INT_EN__IT_RD_ERR_EN__SHIFT                                                          0xf
#define UVD_MEMCHECK_SYS_INT_EN__CM_RD_ERR_EN__SHIFT                                                          0x10
#define UVD_MEMCHECK_SYS_INT_EN__DB_RD_ERR_EN__SHIFT                                                          0x11
#define UVD_MEMCHECK_SYS_INT_EN__MIF_RD_ERR_EN__SHIFT                                                         0x12
#define UVD_MEMCHECK_SYS_INT_EN__IDCT_RD_ERR_EN__SHIFT                                                        0x13
#define UVD_MEMCHECK_SYS_INT_EN__MPC_RD_ERR_EN__SHIFT                                                         0x14
#define UVD_MEMCHECK_SYS_INT_EN__LBSI_RD_ERR_EN__SHIFT                                                        0x15
#define UVD_MEMCHECK_SYS_INT_EN__RBC_RD_ERR_EN__SHIFT                                                         0x18
#define UVD_MEMCHECK_SYS_INT_EN__MIF_BSP2_ERR_EN__SHIFT                                                       0x1b
#define UVD_MEMCHECK_SYS_INT_EN__MIF_BSP3_ERR_EN__SHIFT                                                       0x1c
#define UVD_MEMCHECK_SYS_INT_EN__MIF_SCLR_ERR_EN__SHIFT                                                       0x1d
#define UVD_MEMCHECK_SYS_INT_EN__MIF_SCLR2_ERR_EN__SHIFT                                                      0x1e
#define UVD_MEMCHECK_SYS_INT_EN__PREF_ERR_EN__SHIFT                                                           0x1f
#define UVD_MEMCHECK_SYS_INT_EN__RE_ERR_EN_MASK                                                               0x00000001L
#define UVD_MEMCHECK_SYS_INT_EN__IT_ERR_EN_MASK                                                               0x00000002L
#define UVD_MEMCHECK_SYS_INT_EN__MP_ERR_EN_MASK                                                               0x00000004L
#define UVD_MEMCHECK_SYS_INT_EN__DB_ERR_EN_MASK                                                               0x00000008L
#define UVD_MEMCHECK_SYS_INT_EN__DBW_ERR_EN_MASK                                                              0x00000010L
#define UVD_MEMCHECK_SYS_INT_EN__CM_ERR_EN_MASK                                                               0x00000020L
#define UVD_MEMCHECK_SYS_INT_EN__MIF_REF_ERR_EN_MASK                                                          0x00000040L
#define UVD_MEMCHECK_SYS_INT_EN__MIF_DBW_ERR_EN_MASK                                                          0x00000100L
#define UVD_MEMCHECK_SYS_INT_EN__MIF_CM_COLOC_ERR_EN_MASK                                                     0x00000200L
#define UVD_MEMCHECK_SYS_INT_EN__MIF_BSP0_ERR_EN_MASK                                                         0x00000400L
#define UVD_MEMCHECK_SYS_INT_EN__MIF_BSP1_ERR_EN_MASK                                                         0x00000800L
#define UVD_MEMCHECK_SYS_INT_EN__SRE_ERR_EN_MASK                                                              0x00001000L
#define UVD_MEMCHECK_SYS_INT_EN__IT_RD_ERR_EN_MASK                                                            0x00008000L
#define UVD_MEMCHECK_SYS_INT_EN__CM_RD_ERR_EN_MASK                                                            0x00010000L
#define UVD_MEMCHECK_SYS_INT_EN__DB_RD_ERR_EN_MASK                                                            0x00020000L
#define UVD_MEMCHECK_SYS_INT_EN__MIF_RD_ERR_EN_MASK                                                           0x00040000L
#define UVD_MEMCHECK_SYS_INT_EN__IDCT_RD_ERR_EN_MASK                                                          0x00080000L
#define UVD_MEMCHECK_SYS_INT_EN__MPC_RD_ERR_EN_MASK                                                           0x00100000L
#define UVD_MEMCHECK_SYS_INT_EN__LBSI_RD_ERR_EN_MASK                                                          0x00200000L
#define UVD_MEMCHECK_SYS_INT_EN__RBC_RD_ERR_EN_MASK                                                           0x01000000L
#define UVD_MEMCHECK_SYS_INT_EN__MIF_BSP2_ERR_EN_MASK                                                         0x08000000L
#define UVD_MEMCHECK_SYS_INT_EN__MIF_BSP3_ERR_EN_MASK                                                         0x10000000L
#define UVD_MEMCHECK_SYS_INT_EN__MIF_SCLR_ERR_EN_MASK                                                         0x20000000L
#define UVD_MEMCHECK_SYS_INT_EN__MIF_SCLR2_ERR_EN_MASK                                                        0x40000000L
#define UVD_MEMCHECK_SYS_INT_EN__PREF_ERR_EN_MASK                                                             0x80000000L
//UVD_MEMCHECK_SYS_INT_STAT
#define UVD_MEMCHECK_SYS_INT_STAT__RE_LO_ERR__SHIFT                                                           0x0
#define UVD_MEMCHECK_SYS_INT_STAT__RE_HI_ERR__SHIFT                                                           0x1
#define UVD_MEMCHECK_SYS_INT_STAT__IT_LO_ERR__SHIFT                                                           0x2
#define UVD_MEMCHECK_SYS_INT_STAT__IT_HI_ERR__SHIFT                                                           0x3
#define UVD_MEMCHECK_SYS_INT_STAT__MP_LO_ERR__SHIFT                                                           0x4
#define UVD_MEMCHECK_SYS_INT_STAT__MP_HI_ERR__SHIFT                                                           0x5
#define UVD_MEMCHECK_SYS_INT_STAT__DB_LO_ERR__SHIFT                                                           0x6
#define UVD_MEMCHECK_SYS_INT_STAT__DB_HI_ERR__SHIFT                                                           0x7
#define UVD_MEMCHECK_SYS_INT_STAT__DBW_LO_ERR__SHIFT                                                          0x8
#define UVD_MEMCHECK_SYS_INT_STAT__DBW_HI_ERR__SHIFT                                                          0x9
#define UVD_MEMCHECK_SYS_INT_STAT__CM_LO_ERR__SHIFT                                                           0xa
#define UVD_MEMCHECK_SYS_INT_STAT__CM_HI_ERR__SHIFT                                                           0xb
#define UVD_MEMCHECK_SYS_INT_STAT__MIF_REF_LO_ERR__SHIFT                                                      0xc
#define UVD_MEMCHECK_SYS_INT_STAT__MIF_REF_HI_ERR__SHIFT                                                      0xd
#define UVD_MEMCHECK_SYS_INT_STAT__VCPU_LO_ERR__SHIFT                                                         0xe
#define UVD_MEMCHECK_SYS_INT_STAT__VCPU_HI_ERR__SHIFT                                                         0xf
#define UVD_MEMCHECK_SYS_INT_STAT__MIF_DBW_LO_ERR__SHIFT                                                      0x10
#define UVD_MEMCHECK_SYS_INT_STAT__MIF_DBW_HI_ERR__SHIFT                                                      0x11
#define UVD_MEMCHECK_SYS_INT_STAT__MIF_CM_COLOC_LO_ERR__SHIFT                                                 0x12
#define UVD_MEMCHECK_SYS_INT_STAT__MIF_CM_COLOC_HI_ERR__SHIFT                                                 0x13
#define UVD_MEMCHECK_SYS_INT_STAT__MIF_BSP0_LO_ERR__SHIFT                                                     0x14
#define UVD_MEMCHECK_SYS_INT_STAT__MIF_BSP0_HI_ERR__SHIFT                                                     0x15
#define UVD_MEMCHECK_SYS_INT_STAT__MIF_BSP1_LO_ERR__SHIFT                                                     0x16
#define UVD_MEMCHECK_SYS_INT_STAT__MIF_BSP1_HI_ERR__SHIFT                                                     0x17
#define UVD_MEMCHECK_SYS_INT_STAT__SRE_LO_ERR__SHIFT                                                          0x18
#define UVD_MEMCHECK_SYS_INT_STAT__SRE_HI_ERR__SHIFT                                                          0x19
#define UVD_MEMCHECK_SYS_INT_STAT__IT_RD_LO_ERR__SHIFT                                                        0x1e
#define UVD_MEMCHECK_SYS_INT_STAT__IT_RD_HI_ERR__SHIFT                                                        0x1f
#define UVD_MEMCHECK_SYS_INT_STAT__RE_LO_ERR_MASK                                                             0x00000001L
#define UVD_MEMCHECK_SYS_INT_STAT__RE_HI_ERR_MASK                                                             0x00000002L
#define UVD_MEMCHECK_SYS_INT_STAT__IT_LO_ERR_MASK                                                             0x00000004L
#define UVD_MEMCHECK_SYS_INT_STAT__IT_HI_ERR_MASK                                                             0x00000008L
#define UVD_MEMCHECK_SYS_INT_STAT__MP_LO_ERR_MASK                                                             0x00000010L
#define UVD_MEMCHECK_SYS_INT_STAT__MP_HI_ERR_MASK                                                             0x00000020L
#define UVD_MEMCHECK_SYS_INT_STAT__DB_LO_ERR_MASK                                                             0x00000040L
#define UVD_MEMCHECK_SYS_INT_STAT__DB_HI_ERR_MASK                                                             0x00000080L
#define UVD_MEMCHECK_SYS_INT_STAT__DBW_LO_ERR_MASK                                                            0x00000100L
#define UVD_MEMCHECK_SYS_INT_STAT__DBW_HI_ERR_MASK                                                            0x00000200L
#define UVD_MEMCHECK_SYS_INT_STAT__CM_LO_ERR_MASK                                                             0x00000400L
#define UVD_MEMCHECK_SYS_INT_STAT__CM_HI_ERR_MASK                                                             0x00000800L
#define UVD_MEMCHECK_SYS_INT_STAT__MIF_REF_LO_ERR_MASK                                                        0x00001000L
#define UVD_MEMCHECK_SYS_INT_STAT__MIF_REF_HI_ERR_MASK                                                        0x00002000L
#define UVD_MEMCHECK_SYS_INT_STAT__VCPU_LO_ERR_MASK                                                           0x00004000L
#define UVD_MEMCHECK_SYS_INT_STAT__VCPU_HI_ERR_MASK                                                           0x00008000L
#define UVD_MEMCHECK_SYS_INT_STAT__MIF_DBW_LO_ERR_MASK                                                        0x00010000L
#define UVD_MEMCHECK_SYS_INT_STAT__MIF_DBW_HI_ERR_MASK                                                        0x00020000L
#define UVD_MEMCHECK_SYS_INT_STAT__MIF_CM_COLOC_LO_ERR_MASK                                                   0x00040000L
#define UVD_MEMCHECK_SYS_INT_STAT__MIF_CM_COLOC_HI_ERR_MASK                                                   0x00080000L
#define UVD_MEMCHECK_SYS_INT_STAT__MIF_BSP0_LO_ERR_MASK                                                       0x00100000L
#define UVD_MEMCHECK_SYS_INT_STAT__MIF_BSP0_HI_ERR_MASK                                                       0x00200000L
#define UVD_MEMCHECK_SYS_INT_STAT__MIF_BSP1_LO_ERR_MASK                                                       0x00400000L
#define UVD_MEMCHECK_SYS_INT_STAT__MIF_BSP1_HI_ERR_MASK                                                       0x00800000L
#define UVD_MEMCHECK_SYS_INT_STAT__SRE_LO_ERR_MASK                                                            0x01000000L
#define UVD_MEMCHECK_SYS_INT_STAT__SRE_HI_ERR_MASK                                                            0x02000000L
#define UVD_MEMCHECK_SYS_INT_STAT__IT_RD_LO_ERR_MASK                                                          0x40000000L
#define UVD_MEMCHECK_SYS_INT_STAT__IT_RD_HI_ERR_MASK                                                          0x80000000L
//UVD_MEMCHECK_SYS_INT_ACK
#define UVD_MEMCHECK_SYS_INT_ACK__RE_LO_ACK__SHIFT                                                            0x0
#define UVD_MEMCHECK_SYS_INT_ACK__RE_HI_ACK__SHIFT                                                            0x1
#define UVD_MEMCHECK_SYS_INT_ACK__IT_LO_ACK__SHIFT                                                            0x2
#define UVD_MEMCHECK_SYS_INT_ACK__IT_HI_ACK__SHIFT                                                            0x3
#define UVD_MEMCHECK_SYS_INT_ACK__MP_LO_ACK__SHIFT                                                            0x4
#define UVD_MEMCHECK_SYS_INT_ACK__MP_HI_ACK__SHIFT                                                            0x5
#define UVD_MEMCHECK_SYS_INT_ACK__DB_LO_ACK__SHIFT                                                            0x6
#define UVD_MEMCHECK_SYS_INT_ACK__DB_HI_ACK__SHIFT                                                            0x7
#define UVD_MEMCHECK_SYS_INT_ACK__DBW_LO_ACK__SHIFT                                                           0x8
#define UVD_MEMCHECK_SYS_INT_ACK__DBW_HI_ACK__SHIFT                                                           0x9
#define UVD_MEMCHECK_SYS_INT_ACK__CM_LO_ACK__SHIFT                                                            0xa
#define UVD_MEMCHECK_SYS_INT_ACK__CM_HI_ACK__SHIFT                                                            0xb
#define UVD_MEMCHECK_SYS_INT_ACK__MIF_REF_LO_ACK__SHIFT                                                       0xc
#define UVD_MEMCHECK_SYS_INT_ACK__MIF_REF_HI_ACK__SHIFT                                                       0xd
#define UVD_MEMCHECK_SYS_INT_ACK__VCPU_LO_ACK__SHIFT                                                          0xe
#define UVD_MEMCHECK_SYS_INT_ACK__VCPU_HI_ACK__SHIFT                                                          0xf
#define UVD_MEMCHECK_SYS_INT_ACK__MIF_DBW_LO_ACK__SHIFT                                                       0x10
#define UVD_MEMCHECK_SYS_INT_ACK__MIF_DBW_HI_ACK__SHIFT                                                       0x11
#define UVD_MEMCHECK_SYS_INT_ACK__MIF_CM_COLOC_LO_ACK__SHIFT                                                  0x12
#define UVD_MEMCHECK_SYS_INT_ACK__MIF_CM_COLOC_HI_ACK__SHIFT                                                  0x13
#define UVD_MEMCHECK_SYS_INT_ACK__MIF_BSP0_LO_ACK__SHIFT                                                      0x14
#define UVD_MEMCHECK_SYS_INT_ACK__MIF_BSP0_HI_ACK__SHIFT                                                      0x15
#define UVD_MEMCHECK_SYS_INT_ACK__MIF_BSP1_LO_ACK__SHIFT                                                      0x16
#define UVD_MEMCHECK_SYS_INT_ACK__MIF_BSP1_HI_ACK__SHIFT                                                      0x17
#define UVD_MEMCHECK_SYS_INT_ACK__SRE_LO_ACK__SHIFT                                                           0x18
#define UVD_MEMCHECK_SYS_INT_ACK__SRE_HI_ACK__SHIFT                                                           0x19
#define UVD_MEMCHECK_SYS_INT_ACK__IT_RD_LO_ACK__SHIFT                                                         0x1e
#define UVD_MEMCHECK_SYS_INT_ACK__IT_RD_HI_ACK__SHIFT                                                         0x1f
#define UVD_MEMCHECK_SYS_INT_ACK__RE_LO_ACK_MASK                                                              0x00000001L
#define UVD_MEMCHECK_SYS_INT_ACK__RE_HI_ACK_MASK                                                              0x00000002L
#define UVD_MEMCHECK_SYS_INT_ACK__IT_LO_ACK_MASK                                                              0x00000004L
#define UVD_MEMCHECK_SYS_INT_ACK__IT_HI_ACK_MASK                                                              0x00000008L
#define UVD_MEMCHECK_SYS_INT_ACK__MP_LO_ACK_MASK                                                              0x00000010L
#define UVD_MEMCHECK_SYS_INT_ACK__MP_HI_ACK_MASK                                                              0x00000020L
#define UVD_MEMCHECK_SYS_INT_ACK__DB_LO_ACK_MASK                                                              0x00000040L
#define UVD_MEMCHECK_SYS_INT_ACK__DB_HI_ACK_MASK                                                              0x00000080L
#define UVD_MEMCHECK_SYS_INT_ACK__DBW_LO_ACK_MASK                                                             0x00000100L
#define UVD_MEMCHECK_SYS_INT_ACK__DBW_HI_ACK_MASK                                                             0x00000200L
#define UVD_MEMCHECK_SYS_INT_ACK__CM_LO_ACK_MASK                                                              0x00000400L
#define UVD_MEMCHECK_SYS_INT_ACK__CM_HI_ACK_MASK                                                              0x00000800L
#define UVD_MEMCHECK_SYS_INT_ACK__MIF_REF_LO_ACK_MASK                                                         0x00001000L
#define UVD_MEMCHECK_SYS_INT_ACK__MIF_REF_HI_ACK_MASK                                                         0x00002000L
#define UVD_MEMCHECK_SYS_INT_ACK__VCPU_LO_ACK_MASK                                                            0x00004000L
#define UVD_MEMCHECK_SYS_INT_ACK__VCPU_HI_ACK_MASK                                                            0x00008000L
#define UVD_MEMCHECK_SYS_INT_ACK__MIF_DBW_LO_ACK_MASK                                                         0x00010000L
#define UVD_MEMCHECK_SYS_INT_ACK__MIF_DBW_HI_ACK_MASK                                                         0x00020000L
#define UVD_MEMCHECK_SYS_INT_ACK__MIF_CM_COLOC_LO_ACK_MASK                                                    0x00040000L
#define UVD_MEMCHECK_SYS_INT_ACK__MIF_CM_COLOC_HI_ACK_MASK                                                    0x00080000L
#define UVD_MEMCHECK_SYS_INT_ACK__MIF_BSP0_LO_ACK_MASK                                                        0x00100000L
#define UVD_MEMCHECK_SYS_INT_ACK__MIF_BSP0_HI_ACK_MASK                                                        0x00200000L
#define UVD_MEMCHECK_SYS_INT_ACK__MIF_BSP1_LO_ACK_MASK                                                        0x00400000L
#define UVD_MEMCHECK_SYS_INT_ACK__MIF_BSP1_HI_ACK_MASK                                                        0x00800000L
#define UVD_MEMCHECK_SYS_INT_ACK__SRE_LO_ACK_MASK                                                             0x01000000L
#define UVD_MEMCHECK_SYS_INT_ACK__SRE_HI_ACK_MASK                                                             0x02000000L
#define UVD_MEMCHECK_SYS_INT_ACK__IT_RD_LO_ACK_MASK                                                           0x40000000L
#define UVD_MEMCHECK_SYS_INT_ACK__IT_RD_HI_ACK_MASK                                                           0x80000000L
//UVD_MEMCHECK_VCPU_INT_EN
#define UVD_MEMCHECK_VCPU_INT_EN__RE_ERR_EN__SHIFT                                                            0x0
#define UVD_MEMCHECK_VCPU_INT_EN__IT_ERR_EN__SHIFT                                                            0x1
#define UVD_MEMCHECK_VCPU_INT_EN__MP_ERR_EN__SHIFT                                                            0x2
#define UVD_MEMCHECK_VCPU_INT_EN__DB_ERR_EN__SHIFT                                                            0x3
#define UVD_MEMCHECK_VCPU_INT_EN__DBW_ERR_EN__SHIFT                                                           0x4
#define UVD_MEMCHECK_VCPU_INT_EN__CM_ERR_EN__SHIFT                                                            0x5
#define UVD_MEMCHECK_VCPU_INT_EN__MIF_REF_ERR_EN__SHIFT                                                       0x6
#define UVD_MEMCHECK_VCPU_INT_EN__MIF_DBW_ERR_EN__SHIFT                                                       0x8
#define UVD_MEMCHECK_VCPU_INT_EN__MIF_CM_COLOC_ERR_EN__SHIFT                                                  0x9
#define UVD_MEMCHECK_VCPU_INT_EN__MIF_BSP0_ERR_EN__SHIFT                                                      0xa
#define UVD_MEMCHECK_VCPU_INT_EN__MIF_BSP1_ERR_EN__SHIFT                                                      0xb
#define UVD_MEMCHECK_VCPU_INT_EN__SRE_ERR_EN__SHIFT                                                           0xc
#define UVD_MEMCHECK_VCPU_INT_EN__IT_RD_ERR_EN__SHIFT                                                         0xf
#define UVD_MEMCHECK_VCPU_INT_EN__CM_RD_ERR_EN__SHIFT                                                         0x10
#define UVD_MEMCHECK_VCPU_INT_EN__DB_RD_ERR_EN__SHIFT                                                         0x11
#define UVD_MEMCHECK_VCPU_INT_EN__MIF_RD_ERR_EN__SHIFT                                                        0x12
#define UVD_MEMCHECK_VCPU_INT_EN__IDCT_RD_ERR_EN__SHIFT                                                       0x13
#define UVD_MEMCHECK_VCPU_INT_EN__MPC_RD_ERR_EN__SHIFT                                                        0x14
#define UVD_MEMCHECK_VCPU_INT_EN__LBSI_RD_ERR_EN__SHIFT                                                       0x15
#define UVD_MEMCHECK_VCPU_INT_EN__RBC_RD_ERR_EN__SHIFT                                                        0x18
#define UVD_MEMCHECK_VCPU_INT_EN__MIF_BSP2_ERR_EN__SHIFT                                                      0x19
#define UVD_MEMCHECK_VCPU_INT_EN__MIF_BSP3_ERR_EN__SHIFT                                                      0x1a
#define UVD_MEMCHECK_VCPU_INT_EN__MIF_SCLR_ERR_EN__SHIFT                                                      0x1b
#define UVD_MEMCHECK_VCPU_INT_EN__MIF_SCLR2_ERR_EN__SHIFT                                                     0x1c
#define UVD_MEMCHECK_VCPU_INT_EN__PREF_ERR_EN__SHIFT                                                          0x1d
#define UVD_MEMCHECK_VCPU_INT_EN__RE_ERR_EN_MASK                                                              0x00000001L
#define UVD_MEMCHECK_VCPU_INT_EN__IT_ERR_EN_MASK                                                              0x00000002L
#define UVD_MEMCHECK_VCPU_INT_EN__MP_ERR_EN_MASK                                                              0x00000004L
#define UVD_MEMCHECK_VCPU_INT_EN__DB_ERR_EN_MASK                                                              0x00000008L
#define UVD_MEMCHECK_VCPU_INT_EN__DBW_ERR_EN_MASK                                                             0x00000010L
#define UVD_MEMCHECK_VCPU_INT_EN__CM_ERR_EN_MASK                                                              0x00000020L
#define UVD_MEMCHECK_VCPU_INT_EN__MIF_REF_ERR_EN_MASK                                                         0x00000040L
#define UVD_MEMCHECK_VCPU_INT_EN__MIF_DBW_ERR_EN_MASK                                                         0x00000100L
#define UVD_MEMCHECK_VCPU_INT_EN__MIF_CM_COLOC_ERR_EN_MASK                                                    0x00000200L
#define UVD_MEMCHECK_VCPU_INT_EN__MIF_BSP0_ERR_EN_MASK                                                        0x00000400L
#define UVD_MEMCHECK_VCPU_INT_EN__MIF_BSP1_ERR_EN_MASK                                                        0x00000800L
#define UVD_MEMCHECK_VCPU_INT_EN__SRE_ERR_EN_MASK                                                             0x00001000L
#define UVD_MEMCHECK_VCPU_INT_EN__IT_RD_ERR_EN_MASK                                                           0x00008000L
#define UVD_MEMCHECK_VCPU_INT_EN__CM_RD_ERR_EN_MASK                                                           0x00010000L
#define UVD_MEMCHECK_VCPU_INT_EN__DB_RD_ERR_EN_MASK                                                           0x00020000L
#define UVD_MEMCHECK_VCPU_INT_EN__MIF_RD_ERR_EN_MASK                                                          0x00040000L
#define UVD_MEMCHECK_VCPU_INT_EN__IDCT_RD_ERR_EN_MASK                                                         0x00080000L
#define UVD_MEMCHECK_VCPU_INT_EN__MPC_RD_ERR_EN_MASK                                                          0x00100000L
#define UVD_MEMCHECK_VCPU_INT_EN__LBSI_RD_ERR_EN_MASK                                                         0x00200000L
#define UVD_MEMCHECK_VCPU_INT_EN__RBC_RD_ERR_EN_MASK                                                          0x01000000L
#define UVD_MEMCHECK_VCPU_INT_EN__MIF_BSP2_ERR_EN_MASK                                                        0x02000000L
#define UVD_MEMCHECK_VCPU_INT_EN__MIF_BSP3_ERR_EN_MASK                                                        0x04000000L
#define UVD_MEMCHECK_VCPU_INT_EN__MIF_SCLR_ERR_EN_MASK                                                        0x08000000L
#define UVD_MEMCHECK_VCPU_INT_EN__MIF_SCLR2_ERR_EN_MASK                                                       0x10000000L
#define UVD_MEMCHECK_VCPU_INT_EN__PREF_ERR_EN_MASK                                                            0x20000000L
//UVD_MEMCHECK_VCPU_INT_STAT
#define UVD_MEMCHECK_VCPU_INT_STAT__RE_LO_ERR__SHIFT                                                          0x0
#define UVD_MEMCHECK_VCPU_INT_STAT__RE_HI_ERR__SHIFT                                                          0x1
#define UVD_MEMCHECK_VCPU_INT_STAT__IT_LO_ERR__SHIFT                                                          0x2
#define UVD_MEMCHECK_VCPU_INT_STAT__IT_HI_ERR__SHIFT                                                          0x3
#define UVD_MEMCHECK_VCPU_INT_STAT__MP_LO_ERR__SHIFT                                                          0x4
#define UVD_MEMCHECK_VCPU_INT_STAT__MP_HI_ERR__SHIFT                                                          0x5
#define UVD_MEMCHECK_VCPU_INT_STAT__DB_LO_ERR__SHIFT                                                          0x6
#define UVD_MEMCHECK_VCPU_INT_STAT__DB_HI_ERR__SHIFT                                                          0x7
#define UVD_MEMCHECK_VCPU_INT_STAT__DBW_LO_ERR__SHIFT                                                         0x8
#define UVD_MEMCHECK_VCPU_INT_STAT__DBW_HI_ERR__SHIFT                                                         0x9
#define UVD_MEMCHECK_VCPU_INT_STAT__CM_LO_ERR__SHIFT                                                          0xa
#define UVD_MEMCHECK_VCPU_INT_STAT__CM_HI_ERR__SHIFT                                                          0xb
#define UVD_MEMCHECK_VCPU_INT_STAT__MIF_REF_LO_ERR__SHIFT                                                     0xc
#define UVD_MEMCHECK_VCPU_INT_STAT__MIF_REF_HI_ERR__SHIFT                                                     0xd
#define UVD_MEMCHECK_VCPU_INT_STAT__VCPU_LO_ERR__SHIFT                                                        0xe
#define UVD_MEMCHECK_VCPU_INT_STAT__VCPU_HI_ERR__SHIFT                                                        0xf
#define UVD_MEMCHECK_VCPU_INT_STAT__MIF_DBW_LO_ERR__SHIFT                                                     0x10
#define UVD_MEMCHECK_VCPU_INT_STAT__MIF_DBW_HI_ERR__SHIFT                                                     0x11
#define UVD_MEMCHECK_VCPU_INT_STAT__MIF_CM_COLOC_LO_ERR__SHIFT                                                0x12
#define UVD_MEMCHECK_VCPU_INT_STAT__MIF_CM_COLOC_HI_ERR__SHIFT                                                0x13
#define UVD_MEMCHECK_VCPU_INT_STAT__MIF_BSP0_LO_ERR__SHIFT                                                    0x14
#define UVD_MEMCHECK_VCPU_INT_STAT__MIF_BSP0_HI_ERR__SHIFT                                                    0x15
#define UVD_MEMCHECK_VCPU_INT_STAT__MIF_BSP1_LO_ERR__SHIFT                                                    0x16
#define UVD_MEMCHECK_VCPU_INT_STAT__MIF_BSP1_HI_ERR__SHIFT                                                    0x17
#define UVD_MEMCHECK_VCPU_INT_STAT__SRE_LO_ERR__SHIFT                                                         0x18
#define UVD_MEMCHECK_VCPU_INT_STAT__SRE_HI_ERR__SHIFT                                                         0x19
#define UVD_MEMCHECK_VCPU_INT_STAT__IT_RD_LO_ERR__SHIFT                                                       0x1e
#define UVD_MEMCHECK_VCPU_INT_STAT__IT_RD_HI_ERR__SHIFT                                                       0x1f
#define UVD_MEMCHECK_VCPU_INT_STAT__RE_LO_ERR_MASK                                                            0x00000001L
#define UVD_MEMCHECK_VCPU_INT_STAT__RE_HI_ERR_MASK                                                            0x00000002L
#define UVD_MEMCHECK_VCPU_INT_STAT__IT_LO_ERR_MASK                                                            0x00000004L
#define UVD_MEMCHECK_VCPU_INT_STAT__IT_HI_ERR_MASK                                                            0x00000008L
#define UVD_MEMCHECK_VCPU_INT_STAT__MP_LO_ERR_MASK                                                            0x00000010L
#define UVD_MEMCHECK_VCPU_INT_STAT__MP_HI_ERR_MASK                                                            0x00000020L
#define UVD_MEMCHECK_VCPU_INT_STAT__DB_LO_ERR_MASK                                                            0x00000040L
#define UVD_MEMCHECK_VCPU_INT_STAT__DB_HI_ERR_MASK                                                            0x00000080L
#define UVD_MEMCHECK_VCPU_INT_STAT__DBW_LO_ERR_MASK                                                           0x00000100L
#define UVD_MEMCHECK_VCPU_INT_STAT__DBW_HI_ERR_MASK                                                           0x00000200L
#define UVD_MEMCHECK_VCPU_INT_STAT__CM_LO_ERR_MASK                                                            0x00000400L
#define UVD_MEMCHECK_VCPU_INT_STAT__CM_HI_ERR_MASK                                                            0x00000800L
#define UVD_MEMCHECK_VCPU_INT_STAT__MIF_REF_LO_ERR_MASK                                                       0x00001000L
#define UVD_MEMCHECK_VCPU_INT_STAT__MIF_REF_HI_ERR_MASK                                                       0x00002000L
#define UVD_MEMCHECK_VCPU_INT_STAT__VCPU_LO_ERR_MASK                                                          0x00004000L
#define UVD_MEMCHECK_VCPU_INT_STAT__VCPU_HI_ERR_MASK                                                          0x00008000L
#define UVD_MEMCHECK_VCPU_INT_STAT__MIF_DBW_LO_ERR_MASK                                                       0x00010000L
#define UVD_MEMCHECK_VCPU_INT_STAT__MIF_DBW_HI_ERR_MASK                                                       0x00020000L
#define UVD_MEMCHECK_VCPU_INT_STAT__MIF_CM_COLOC_LO_ERR_MASK                                                  0x00040000L
#define UVD_MEMCHECK_VCPU_INT_STAT__MIF_CM_COLOC_HI_ERR_MASK                                                  0x00080000L
#define UVD_MEMCHECK_VCPU_INT_STAT__MIF_BSP0_LO_ERR_MASK                                                      0x00100000L
#define UVD_MEMCHECK_VCPU_INT_STAT__MIF_BSP0_HI_ERR_MASK                                                      0x00200000L
#define UVD_MEMCHECK_VCPU_INT_STAT__MIF_BSP1_LO_ERR_MASK                                                      0x00400000L
#define UVD_MEMCHECK_VCPU_INT_STAT__MIF_BSP1_HI_ERR_MASK                                                      0x00800000L
#define UVD_MEMCHECK_VCPU_INT_STAT__SRE_LO_ERR_MASK                                                           0x01000000L
#define UVD_MEMCHECK_VCPU_INT_STAT__SRE_HI_ERR_MASK                                                           0x02000000L
#define UVD_MEMCHECK_VCPU_INT_STAT__IT_RD_LO_ERR_MASK                                                         0x40000000L
#define UVD_MEMCHECK_VCPU_INT_STAT__IT_RD_HI_ERR_MASK                                                         0x80000000L
//UVD_MEMCHECK_VCPU_INT_ACK
#define UVD_MEMCHECK_VCPU_INT_ACK__RE_LO_ACK__SHIFT                                                           0x0
#define UVD_MEMCHECK_VCPU_INT_ACK__RE_HI_ACK__SHIFT                                                           0x1
#define UVD_MEMCHECK_VCPU_INT_ACK__IT_LO_ACK__SHIFT                                                           0x2
#define UVD_MEMCHECK_VCPU_INT_ACK__IT_HI_ACK__SHIFT                                                           0x3
#define UVD_MEMCHECK_VCPU_INT_ACK__MP_LO_ACK__SHIFT                                                           0x4
#define UVD_MEMCHECK_VCPU_INT_ACK__MP_HI_ACK__SHIFT                                                           0x5
#define UVD_MEMCHECK_VCPU_INT_ACK__DB_LO_ACK__SHIFT                                                           0x6
#define UVD_MEMCHECK_VCPU_INT_ACK__DB_HI_ACK__SHIFT                                                           0x7
#define UVD_MEMCHECK_VCPU_INT_ACK__DBW_LO_ACK__SHIFT                                                          0x8
#define UVD_MEMCHECK_VCPU_INT_ACK__DBW_HI_ACK__SHIFT                                                          0x9
#define UVD_MEMCHECK_VCPU_INT_ACK__CM_LO_ACK__SHIFT                                                           0xa
#define UVD_MEMCHECK_VCPU_INT_ACK__CM_HI_ACK__SHIFT                                                           0xb
#define UVD_MEMCHECK_VCPU_INT_ACK__MIF_REF_LO_ACK__SHIFT                                                      0xc
#define UVD_MEMCHECK_VCPU_INT_ACK__MIF_REF_HI_ACK__SHIFT                                                      0xd
#define UVD_MEMCHECK_VCPU_INT_ACK__VCPU_LO_ACK__SHIFT                                                         0xe
#define UVD_MEMCHECK_VCPU_INT_ACK__VCPU_HI_ACK__SHIFT                                                         0xf
#define UVD_MEMCHECK_VCPU_INT_ACK__MIF_DBW_LO_ACK__SHIFT                                                      0x10
#define UVD_MEMCHECK_VCPU_INT_ACK__MIF_DBW_HI_ACK__SHIFT                                                      0x11
#define UVD_MEMCHECK_VCPU_INT_ACK__MIF_CM_COLOC_LO_ACK__SHIFT                                                 0x12
#define UVD_MEMCHECK_VCPU_INT_ACK__MIF_CM_COLOC_HI_ACK__SHIFT                                                 0x13
#define UVD_MEMCHECK_VCPU_INT_ACK__MIF_BSP0_LO_ACK__SHIFT                                                     0x14
#define UVD_MEMCHECK_VCPU_INT_ACK__MIF_BSP0_HI_ACK__SHIFT                                                     0x15
#define UVD_MEMCHECK_VCPU_INT_ACK__MIF_BSP1_LO_ACK__SHIFT                                                     0x16
#define UVD_MEMCHECK_VCPU_INT_ACK__MIF_BSP1_HI_ACK__SHIFT                                                     0x17
#define UVD_MEMCHECK_VCPU_INT_ACK__SRE_LO_ACK__SHIFT                                                          0x18
#define UVD_MEMCHECK_VCPU_INT_ACK__SRE_HI_ACK__SHIFT                                                          0x19
#define UVD_MEMCHECK_VCPU_INT_ACK__IT_RD_LO_ACK__SHIFT                                                        0x1e
#define UVD_MEMCHECK_VCPU_INT_ACK__IT_RD_HI_ACK__SHIFT                                                        0x1f
#define UVD_MEMCHECK_VCPU_INT_ACK__RE_LO_ACK_MASK                                                             0x00000001L
#define UVD_MEMCHECK_VCPU_INT_ACK__RE_HI_ACK_MASK                                                             0x00000002L
#define UVD_MEMCHECK_VCPU_INT_ACK__IT_LO_ACK_MASK                                                             0x00000004L
#define UVD_MEMCHECK_VCPU_INT_ACK__IT_HI_ACK_MASK                                                             0x00000008L
#define UVD_MEMCHECK_VCPU_INT_ACK__MP_LO_ACK_MASK                                                             0x00000010L
#define UVD_MEMCHECK_VCPU_INT_ACK__MP_HI_ACK_MASK                                                             0x00000020L
#define UVD_MEMCHECK_VCPU_INT_ACK__DB_LO_ACK_MASK                                                             0x00000040L
#define UVD_MEMCHECK_VCPU_INT_ACK__DB_HI_ACK_MASK                                                             0x00000080L
#define UVD_MEMCHECK_VCPU_INT_ACK__DBW_LO_ACK_MASK                                                            0x00000100L
#define UVD_MEMCHECK_VCPU_INT_ACK__DBW_HI_ACK_MASK                                                            0x00000200L
#define UVD_MEMCHECK_VCPU_INT_ACK__CM_LO_ACK_MASK                                                             0x00000400L
#define UVD_MEMCHECK_VCPU_INT_ACK__CM_HI_ACK_MASK                                                             0x00000800L
#define UVD_MEMCHECK_VCPU_INT_ACK__MIF_REF_LO_ACK_MASK                                                        0x00001000L
#define UVD_MEMCHECK_VCPU_INT_ACK__MIF_REF_HI_ACK_MASK                                                        0x00002000L
#define UVD_MEMCHECK_VCPU_INT_ACK__VCPU_LO_ACK_MASK                                                           0x00004000L
#define UVD_MEMCHECK_VCPU_INT_ACK__VCPU_HI_ACK_MASK                                                           0x00008000L
#define UVD_MEMCHECK_VCPU_INT_ACK__MIF_DBW_LO_ACK_MASK                                                        0x00010000L
#define UVD_MEMCHECK_VCPU_INT_ACK__MIF_DBW_HI_ACK_MASK                                                        0x00020000L
#define UVD_MEMCHECK_VCPU_INT_ACK__MIF_CM_COLOC_LO_ACK_MASK                                                   0x00040000L
#define UVD_MEMCHECK_VCPU_INT_ACK__MIF_CM_COLOC_HI_ACK_MASK                                                   0x00080000L
#define UVD_MEMCHECK_VCPU_INT_ACK__MIF_BSP0_LO_ACK_MASK                                                       0x00100000L
#define UVD_MEMCHECK_VCPU_INT_ACK__MIF_BSP0_HI_ACK_MASK                                                       0x00200000L
#define UVD_MEMCHECK_VCPU_INT_ACK__MIF_BSP1_LO_ACK_MASK                                                       0x00400000L
#define UVD_MEMCHECK_VCPU_INT_ACK__MIF_BSP1_HI_ACK_MASK                                                       0x00800000L
#define UVD_MEMCHECK_VCPU_INT_ACK__SRE_LO_ACK_MASK                                                            0x01000000L
#define UVD_MEMCHECK_VCPU_INT_ACK__SRE_HI_ACK_MASK                                                            0x02000000L
#define UVD_MEMCHECK_VCPU_INT_ACK__IT_RD_LO_ACK_MASK                                                          0x40000000L
#define UVD_MEMCHECK_VCPU_INT_ACK__IT_RD_HI_ACK_MASK                                                          0x80000000L
//UVD_MEMCHECK2_SYS_INT_STAT
#define UVD_MEMCHECK2_SYS_INT_STAT__CM_RD_LO_ERR__SHIFT                                                       0x0
#define UVD_MEMCHECK2_SYS_INT_STAT__CM_RD_HI_ERR__SHIFT                                                       0x1
#define UVD_MEMCHECK2_SYS_INT_STAT__DB_RD_LO_ERR__SHIFT                                                       0x2
#define UVD_MEMCHECK2_SYS_INT_STAT__DB_RD_HI_ERR__SHIFT                                                       0x3
#define UVD_MEMCHECK2_SYS_INT_STAT__MIF_RD_LO_ERR__SHIFT                                                      0x4
#define UVD_MEMCHECK2_SYS_INT_STAT__MIF_RD_HI_ERR__SHIFT                                                      0x5
#define UVD_MEMCHECK2_SYS_INT_STAT__IDCT_RD_LO_ERR__SHIFT                                                     0x6
#define UVD_MEMCHECK2_SYS_INT_STAT__IDCT_RD_HI_ERR__SHIFT                                                     0x7
#define UVD_MEMCHECK2_SYS_INT_STAT__MPC_RD_LO_ERR__SHIFT                                                      0x8
#define UVD_MEMCHECK2_SYS_INT_STAT__MPC_RD_HI_ERR__SHIFT                                                      0x9
#define UVD_MEMCHECK2_SYS_INT_STAT__LBSI_RD_LO_ERR__SHIFT                                                     0xa
#define UVD_MEMCHECK2_SYS_INT_STAT__LBSI_RD_HI_ERR__SHIFT                                                     0xb
#define UVD_MEMCHECK2_SYS_INT_STAT__RBC_RD_LO_ERR__SHIFT                                                      0x10
#define UVD_MEMCHECK2_SYS_INT_STAT__RBC_RD_HI_ERR__SHIFT                                                      0x11
#define UVD_MEMCHECK2_SYS_INT_STAT__MIF_BSP2_LO_ERR__SHIFT                                                    0x16
#define UVD_MEMCHECK2_SYS_INT_STAT__MIF_BSP2_HI_ERR__SHIFT                                                    0x17
#define UVD_MEMCHECK2_SYS_INT_STAT__MIF_BSP3_LO_ERR__SHIFT                                                    0x18
#define UVD_MEMCHECK2_SYS_INT_STAT__MIF_BSP3_HI_ERR__SHIFT                                                    0x19
#define UVD_MEMCHECK2_SYS_INT_STAT__MIF_SCLR_LO_ERR__SHIFT                                                    0x1a
#define UVD_MEMCHECK2_SYS_INT_STAT__MIF_SCLR_HI_ERR__SHIFT                                                    0x1b
#define UVD_MEMCHECK2_SYS_INT_STAT__MIF_SCLR2_LO_ERR__SHIFT                                                   0x1c
#define UVD_MEMCHECK2_SYS_INT_STAT__MIF_SCLR2_HI_ERR__SHIFT                                                   0x1d
#define UVD_MEMCHECK2_SYS_INT_STAT__PREF_LO_ERR__SHIFT                                                        0x1e
#define UVD_MEMCHECK2_SYS_INT_STAT__PREF_HI_ERR__SHIFT                                                        0x1f
#define UVD_MEMCHECK2_SYS_INT_STAT__CM_RD_LO_ERR_MASK                                                         0x00000001L
#define UVD_MEMCHECK2_SYS_INT_STAT__CM_RD_HI_ERR_MASK                                                         0x00000002L
#define UVD_MEMCHECK2_SYS_INT_STAT__DB_RD_LO_ERR_MASK                                                         0x00000004L
#define UVD_MEMCHECK2_SYS_INT_STAT__DB_RD_HI_ERR_MASK                                                         0x00000008L
#define UVD_MEMCHECK2_SYS_INT_STAT__MIF_RD_LO_ERR_MASK                                                        0x00000010L
#define UVD_MEMCHECK2_SYS_INT_STAT__MIF_RD_HI_ERR_MASK                                                        0x00000020L
#define UVD_MEMCHECK2_SYS_INT_STAT__IDCT_RD_LO_ERR_MASK                                                       0x00000040L
#define UVD_MEMCHECK2_SYS_INT_STAT__IDCT_RD_HI_ERR_MASK                                                       0x00000080L
#define UVD_MEMCHECK2_SYS_INT_STAT__MPC_RD_LO_ERR_MASK                                                        0x00000100L
#define UVD_MEMCHECK2_SYS_INT_STAT__MPC_RD_HI_ERR_MASK                                                        0x00000200L
#define UVD_MEMCHECK2_SYS_INT_STAT__LBSI_RD_LO_ERR_MASK                                                       0x00000400L
#define UVD_MEMCHECK2_SYS_INT_STAT__LBSI_RD_HI_ERR_MASK                                                       0x00000800L
#define UVD_MEMCHECK2_SYS_INT_STAT__RBC_RD_LO_ERR_MASK                                                        0x00010000L
#define UVD_MEMCHECK2_SYS_INT_STAT__RBC_RD_HI_ERR_MASK                                                        0x00020000L
#define UVD_MEMCHECK2_SYS_INT_STAT__MIF_BSP2_LO_ERR_MASK                                                      0x00400000L
#define UVD_MEMCHECK2_SYS_INT_STAT__MIF_BSP2_HI_ERR_MASK                                                      0x00800000L
#define UVD_MEMCHECK2_SYS_INT_STAT__MIF_BSP3_LO_ERR_MASK                                                      0x01000000L
#define UVD_MEMCHECK2_SYS_INT_STAT__MIF_BSP3_HI_ERR_MASK                                                      0x02000000L
#define UVD_MEMCHECK2_SYS_INT_STAT__MIF_SCLR_LO_ERR_MASK                                                      0x04000000L
#define UVD_MEMCHECK2_SYS_INT_STAT__MIF_SCLR_HI_ERR_MASK                                                      0x08000000L
#define UVD_MEMCHECK2_SYS_INT_STAT__MIF_SCLR2_LO_ERR_MASK                                                     0x10000000L
#define UVD_MEMCHECK2_SYS_INT_STAT__MIF_SCLR2_HI_ERR_MASK                                                     0x20000000L
#define UVD_MEMCHECK2_SYS_INT_STAT__PREF_LO_ERR_MASK                                                          0x40000000L
#define UVD_MEMCHECK2_SYS_INT_STAT__PREF_HI_ERR_MASK                                                          0x80000000L
//UVD_MEMCHECK2_SYS_INT_ACK
#define UVD_MEMCHECK2_SYS_INT_ACK__CM_RD_LO_ACK__SHIFT                                                        0x0
#define UVD_MEMCHECK2_SYS_INT_ACK__CM_RD_HI_ACK__SHIFT                                                        0x1
#define UVD_MEMCHECK2_SYS_INT_ACK__DB_RD_LO_ACK__SHIFT                                                        0x2
#define UVD_MEMCHECK2_SYS_INT_ACK__DB_RD_HI_ACK__SHIFT                                                        0x3
#define UVD_MEMCHECK2_SYS_INT_ACK__MIF_RD_LO_ACK__SHIFT                                                       0x4
#define UVD_MEMCHECK2_SYS_INT_ACK__MIF_RD_HI_ACK__SHIFT                                                       0x5
#define UVD_MEMCHECK2_SYS_INT_ACK__IDCT_RD_LO_ACK__SHIFT                                                      0x6
#define UVD_MEMCHECK2_SYS_INT_ACK__IDCT_RD_HI_ACK__SHIFT                                                      0x7
#define UVD_MEMCHECK2_SYS_INT_ACK__MPC_RD_LO_ACK__SHIFT                                                       0x8
#define UVD_MEMCHECK2_SYS_INT_ACK__MPC_RD_HI_ACK__SHIFT                                                       0x9
#define UVD_MEMCHECK2_SYS_INT_ACK__LBSI_RD_LO_ACK__SHIFT                                                      0xa
#define UVD_MEMCHECK2_SYS_INT_ACK__LBSI_RD_HI_ACK__SHIFT                                                      0xb
#define UVD_MEMCHECK2_SYS_INT_ACK__RBC_RD_LO_ACK__SHIFT                                                       0x10
#define UVD_MEMCHECK2_SYS_INT_ACK__RBC_RD_HI_ACK__SHIFT                                                       0x11
#define UVD_MEMCHECK2_SYS_INT_ACK__MIF_BSP2_LO_ACK__SHIFT                                                     0x16
#define UVD_MEMCHECK2_SYS_INT_ACK__MIF_BSP2_HI_ACK__SHIFT                                                     0x17
#define UVD_MEMCHECK2_SYS_INT_ACK__MIF_BSP3_LO_ACK__SHIFT                                                     0x18
#define UVD_MEMCHECK2_SYS_INT_ACK__MIF_BSP3_HI_ACK__SHIFT                                                     0x19
#define UVD_MEMCHECK2_SYS_INT_ACK__MIF_SCLR_LO_ACK__SHIFT                                                     0x1a
#define UVD_MEMCHECK2_SYS_INT_ACK__MIF_SCLR_HI_ACK__SHIFT                                                     0x1b
#define UVD_MEMCHECK2_SYS_INT_ACK__MIF_SCLR2_LO_ACK__SHIFT                                                    0x1c
#define UVD_MEMCHECK2_SYS_INT_ACK__MIF_SCLR2_HI_ACK__SHIFT                                                    0x1d
#define UVD_MEMCHECK2_SYS_INT_ACK__PREF_LO_ACK__SHIFT                                                         0x1e
#define UVD_MEMCHECK2_SYS_INT_ACK__PREF_HI_ACK__SHIFT                                                         0x1f
#define UVD_MEMCHECK2_SYS_INT_ACK__CM_RD_LO_ACK_MASK                                                          0x00000001L
#define UVD_MEMCHECK2_SYS_INT_ACK__CM_RD_HI_ACK_MASK                                                          0x00000002L
#define UVD_MEMCHECK2_SYS_INT_ACK__DB_RD_LO_ACK_MASK                                                          0x00000004L
#define UVD_MEMCHECK2_SYS_INT_ACK__DB_RD_HI_ACK_MASK                                                          0x00000008L
#define UVD_MEMCHECK2_SYS_INT_ACK__MIF_RD_LO_ACK_MASK                                                         0x00000010L
#define UVD_MEMCHECK2_SYS_INT_ACK__MIF_RD_HI_ACK_MASK                                                         0x00000020L
#define UVD_MEMCHECK2_SYS_INT_ACK__IDCT_RD_LO_ACK_MASK                                                        0x00000040L
#define UVD_MEMCHECK2_SYS_INT_ACK__IDCT_RD_HI_ACK_MASK                                                        0x00000080L
#define UVD_MEMCHECK2_SYS_INT_ACK__MPC_RD_LO_ACK_MASK                                                         0x00000100L
#define UVD_MEMCHECK2_SYS_INT_ACK__MPC_RD_HI_ACK_MASK                                                         0x00000200L
#define UVD_MEMCHECK2_SYS_INT_ACK__LBSI_RD_LO_ACK_MASK                                                        0x00000400L
#define UVD_MEMCHECK2_SYS_INT_ACK__LBSI_RD_HI_ACK_MASK                                                        0x00000800L
#define UVD_MEMCHECK2_SYS_INT_ACK__RBC_RD_LO_ACK_MASK                                                         0x00010000L
#define UVD_MEMCHECK2_SYS_INT_ACK__RBC_RD_HI_ACK_MASK                                                         0x00020000L
#define UVD_MEMCHECK2_SYS_INT_ACK__MIF_BSP2_LO_ACK_MASK                                                       0x00400000L
#define UVD_MEMCHECK2_SYS_INT_ACK__MIF_BSP2_HI_ACK_MASK                                                       0x00800000L
#define UVD_MEMCHECK2_SYS_INT_ACK__MIF_BSP3_LO_ACK_MASK                                                       0x01000000L
#define UVD_MEMCHECK2_SYS_INT_ACK__MIF_BSP3_HI_ACK_MASK                                                       0x02000000L
#define UVD_MEMCHECK2_SYS_INT_ACK__MIF_SCLR_LO_ACK_MASK                                                       0x04000000L
#define UVD_MEMCHECK2_SYS_INT_ACK__MIF_SCLR_HI_ACK_MASK                                                       0x08000000L
#define UVD_MEMCHECK2_SYS_INT_ACK__MIF_SCLR2_LO_ACK_MASK                                                      0x10000000L
#define UVD_MEMCHECK2_SYS_INT_ACK__MIF_SCLR2_HI_ACK_MASK                                                      0x20000000L
#define UVD_MEMCHECK2_SYS_INT_ACK__PREF_LO_ACK_MASK                                                           0x40000000L
#define UVD_MEMCHECK2_SYS_INT_ACK__PREF_HI_ACK_MASK                                                           0x80000000L
//UVD_MEMCHECK2_VCPU_INT_STAT
#define UVD_MEMCHECK2_VCPU_INT_STAT__CM_RD_LO_ERR__SHIFT                                                      0x0
#define UVD_MEMCHECK2_VCPU_INT_STAT__CM_RD_HI_ERR__SHIFT                                                      0x1
#define UVD_MEMCHECK2_VCPU_INT_STAT__DB_RD_LO_ERR__SHIFT                                                      0x2
#define UVD_MEMCHECK2_VCPU_INT_STAT__DB_RD_HI_ERR__SHIFT                                                      0x3
#define UVD_MEMCHECK2_VCPU_INT_STAT__MIF_RD_LO_ERR__SHIFT                                                     0x4
#define UVD_MEMCHECK2_VCPU_INT_STAT__MIF_RD_HI_ERR__SHIFT                                                     0x5
#define UVD_MEMCHECK2_VCPU_INT_STAT__IDCT_RD_LO_ERR__SHIFT                                                    0x6
#define UVD_MEMCHECK2_VCPU_INT_STAT__IDCT_RD_HI_ERR__SHIFT                                                    0x7
#define UVD_MEMCHECK2_VCPU_INT_STAT__MPC_RD_LO_ERR__SHIFT                                                     0x8
#define UVD_MEMCHECK2_VCPU_INT_STAT__MPC_RD_HI_ERR__SHIFT                                                     0x9
#define UVD_MEMCHECK2_VCPU_INT_STAT__LBSI_RD_LO_ERR__SHIFT                                                    0xa
#define UVD_MEMCHECK2_VCPU_INT_STAT__LBSI_RD_HI_ERR__SHIFT                                                    0xb
#define UVD_MEMCHECK2_VCPU_INT_STAT__RBC_RD_LO_ERR__SHIFT                                                     0x10
#define UVD_MEMCHECK2_VCPU_INT_STAT__RBC_RD_HI_ERR__SHIFT                                                     0x11
#define UVD_MEMCHECK2_VCPU_INT_STAT__MIF_BSP2_LO_ERR__SHIFT                                                   0x12
#define UVD_MEMCHECK2_VCPU_INT_STAT__MIF_BSP2_HI_ERR__SHIFT                                                   0x13
#define UVD_MEMCHECK2_VCPU_INT_STAT__MIF_BSP3_LO_ERR__SHIFT                                                   0x14
#define UVD_MEMCHECK2_VCPU_INT_STAT__MIF_BSP3_HI_ERR__SHIFT                                                   0x15
#define UVD_MEMCHECK2_VCPU_INT_STAT__MIF_SCLR_LO_ERR__SHIFT                                                   0x16
#define UVD_MEMCHECK2_VCPU_INT_STAT__MIF_SCLR_HI_ERR__SHIFT                                                   0x17
#define UVD_MEMCHECK2_VCPU_INT_STAT__MIF_SCLR2_LO_ERR__SHIFT                                                  0x18
#define UVD_MEMCHECK2_VCPU_INT_STAT__MIF_SCLR2_HI_ERR__SHIFT                                                  0x19
#define UVD_MEMCHECK2_VCPU_INT_STAT__PREF_LO_ERR__SHIFT                                                       0x1a
#define UVD_MEMCHECK2_VCPU_INT_STAT__PREF_HI_ERR__SHIFT                                                       0x1b
#define UVD_MEMCHECK2_VCPU_INT_STAT__CM_RD_LO_ERR_MASK                                                        0x00000001L
#define UVD_MEMCHECK2_VCPU_INT_STAT__CM_RD_HI_ERR_MASK                                                        0x00000002L
#define UVD_MEMCHECK2_VCPU_INT_STAT__DB_RD_LO_ERR_MASK                                                        0x00000004L
#define UVD_MEMCHECK2_VCPU_INT_STAT__DB_RD_HI_ERR_MASK                                                        0x00000008L
#define UVD_MEMCHECK2_VCPU_INT_STAT__MIF_RD_LO_ERR_MASK                                                       0x00000010L
#define UVD_MEMCHECK2_VCPU_INT_STAT__MIF_RD_HI_ERR_MASK                                                       0x00000020L
#define UVD_MEMCHECK2_VCPU_INT_STAT__IDCT_RD_LO_ERR_MASK                                                      0x00000040L
#define UVD_MEMCHECK2_VCPU_INT_STAT__IDCT_RD_HI_ERR_MASK                                                      0x00000080L
#define UVD_MEMCHECK2_VCPU_INT_STAT__MPC_RD_LO_ERR_MASK                                                       0x00000100L
#define UVD_MEMCHECK2_VCPU_INT_STAT__MPC_RD_HI_ERR_MASK                                                       0x00000200L
#define UVD_MEMCHECK2_VCPU_INT_STAT__LBSI_RD_LO_ERR_MASK                                                      0x00000400L
#define UVD_MEMCHECK2_VCPU_INT_STAT__LBSI_RD_HI_ERR_MASK                                                      0x00000800L
#define UVD_MEMCHECK2_VCPU_INT_STAT__RBC_RD_LO_ERR_MASK                                                       0x00010000L
#define UVD_MEMCHECK2_VCPU_INT_STAT__RBC_RD_HI_ERR_MASK                                                       0x00020000L
#define UVD_MEMCHECK2_VCPU_INT_STAT__MIF_BSP2_LO_ERR_MASK                                                     0x00040000L
#define UVD_MEMCHECK2_VCPU_INT_STAT__MIF_BSP2_HI_ERR_MASK                                                     0x00080000L
#define UVD_MEMCHECK2_VCPU_INT_STAT__MIF_BSP3_LO_ERR_MASK                                                     0x00100000L
#define UVD_MEMCHECK2_VCPU_INT_STAT__MIF_BSP3_HI_ERR_MASK                                                     0x00200000L
#define UVD_MEMCHECK2_VCPU_INT_STAT__MIF_SCLR_LO_ERR_MASK                                                     0x00400000L
#define UVD_MEMCHECK2_VCPU_INT_STAT__MIF_SCLR_HI_ERR_MASK                                                     0x00800000L
#define UVD_MEMCHECK2_VCPU_INT_STAT__MIF_SCLR2_LO_ERR_MASK                                                    0x01000000L
#define UVD_MEMCHECK2_VCPU_INT_STAT__MIF_SCLR2_HI_ERR_MASK                                                    0x02000000L
#define UVD_MEMCHECK2_VCPU_INT_STAT__PREF_LO_ERR_MASK                                                         0x04000000L
#define UVD_MEMCHECK2_VCPU_INT_STAT__PREF_HI_ERR_MASK                                                         0x08000000L
//UVD_MEMCHECK2_VCPU_INT_ACK
#define UVD_MEMCHECK2_VCPU_INT_ACK__CM_RD_LO_ACK__SHIFT                                                       0x0
#define UVD_MEMCHECK2_VCPU_INT_ACK__CM_RD_HI_ACK__SHIFT                                                       0x1
#define UVD_MEMCHECK2_VCPU_INT_ACK__DB_RD_LO_ACK__SHIFT                                                       0x2
#define UVD_MEMCHECK2_VCPU_INT_ACK__DB_RD_HI_ACK__SHIFT                                                       0x3
#define UVD_MEMCHECK2_VCPU_INT_ACK__MIF_RD_LO_ACK__SHIFT                                                      0x4
#define UVD_MEMCHECK2_VCPU_INT_ACK__MIF_RD_HI_ACK__SHIFT                                                      0x5
#define UVD_MEMCHECK2_VCPU_INT_ACK__IDCT_RD_LO_ACK__SHIFT                                                     0x6
#define UVD_MEMCHECK2_VCPU_INT_ACK__IDCT_RD_HI_ACK__SHIFT                                                     0x7
#define UVD_MEMCHECK2_VCPU_INT_ACK__MPC_RD_LO_ACK__SHIFT                                                      0x8
#define UVD_MEMCHECK2_VCPU_INT_ACK__MPC_RD_HI_ACK__SHIFT                                                      0x9
#define UVD_MEMCHECK2_VCPU_INT_ACK__LBSI_RD_LO_ACK__SHIFT                                                     0xa
#define UVD_MEMCHECK2_VCPU_INT_ACK__LBSI_RD_HI_ACK__SHIFT                                                     0xb
#define UVD_MEMCHECK2_VCPU_INT_ACK__RBC_RD_LO_ACK__SHIFT                                                      0x10
#define UVD_MEMCHECK2_VCPU_INT_ACK__RBC_RD_HI_ACK__SHIFT                                                      0x11
#define UVD_MEMCHECK2_VCPU_INT_ACK__MIF_BSP2_LO_ACK__SHIFT                                                    0x12
#define UVD_MEMCHECK2_VCPU_INT_ACK__MIF_BSP2_HI_ACK__SHIFT                                                    0x13
#define UVD_MEMCHECK2_VCPU_INT_ACK__MIF_BSP3_LO_ACK__SHIFT                                                    0x14
#define UVD_MEMCHECK2_VCPU_INT_ACK__MIF_BSP3_HI_ACK__SHIFT                                                    0x15
#define UVD_MEMCHECK2_VCPU_INT_ACK__MIF_SCLR_LO_ACK__SHIFT                                                    0x16
#define UVD_MEMCHECK2_VCPU_INT_ACK__MIF_SCLR_HI_ACK__SHIFT                                                    0x17
#define UVD_MEMCHECK2_VCPU_INT_ACK__MIF_SCLR2_LO_ACK__SHIFT                                                   0x18
#define UVD_MEMCHECK2_VCPU_INT_ACK__MIF_SCLR2_HI_ACK__SHIFT                                                   0x19
#define UVD_MEMCHECK2_VCPU_INT_ACK__PREF_LO_ACK__SHIFT                                                        0x1a
#define UVD_MEMCHECK2_VCPU_INT_ACK__PREF_HI_ACK__SHIFT                                                        0x1b
#define UVD_MEMCHECK2_VCPU_INT_ACK__CM_RD_LO_ACK_MASK                                                         0x00000001L
#define UVD_MEMCHECK2_VCPU_INT_ACK__CM_RD_HI_ACK_MASK                                                         0x00000002L
#define UVD_MEMCHECK2_VCPU_INT_ACK__DB_RD_LO_ACK_MASK                                                         0x00000004L
#define UVD_MEMCHECK2_VCPU_INT_ACK__DB_RD_HI_ACK_MASK                                                         0x00000008L
#define UVD_MEMCHECK2_VCPU_INT_ACK__MIF_RD_LO_ACK_MASK                                                        0x00000010L
#define UVD_MEMCHECK2_VCPU_INT_ACK__MIF_RD_HI_ACK_MASK                                                        0x00000020L
#define UVD_MEMCHECK2_VCPU_INT_ACK__IDCT_RD_LO_ACK_MASK                                                       0x00000040L
#define UVD_MEMCHECK2_VCPU_INT_ACK__IDCT_RD_HI_ACK_MASK                                                       0x00000080L
#define UVD_MEMCHECK2_VCPU_INT_ACK__MPC_RD_LO_ACK_MASK                                                        0x00000100L
#define UVD_MEMCHECK2_VCPU_INT_ACK__MPC_RD_HI_ACK_MASK                                                        0x00000200L
#define UVD_MEMCHECK2_VCPU_INT_ACK__LBSI_RD_LO_ACK_MASK                                                       0x00000400L
#define UVD_MEMCHECK2_VCPU_INT_ACK__LBSI_RD_HI_ACK_MASK                                                       0x00000800L
#define UVD_MEMCHECK2_VCPU_INT_ACK__RBC_RD_LO_ACK_MASK                                                        0x00010000L
#define UVD_MEMCHECK2_VCPU_INT_ACK__RBC_RD_HI_ACK_MASK                                                        0x00020000L
#define UVD_MEMCHECK2_VCPU_INT_ACK__MIF_BSP2_LO_ACK_MASK                                                      0x00040000L
#define UVD_MEMCHECK2_VCPU_INT_ACK__MIF_BSP2_HI_ACK_MASK                                                      0x00080000L
#define UVD_MEMCHECK2_VCPU_INT_ACK__MIF_BSP3_LO_ACK_MASK                                                      0x00100000L
#define UVD_MEMCHECK2_VCPU_INT_ACK__MIF_BSP3_HI_ACK_MASK                                                      0x00200000L
#define UVD_MEMCHECK2_VCPU_INT_ACK__MIF_SCLR_LO_ACK_MASK                                                      0x00400000L
#define UVD_MEMCHECK2_VCPU_INT_ACK__MIF_SCLR_HI_ACK_MASK                                                      0x00800000L
#define UVD_MEMCHECK2_VCPU_INT_ACK__MIF_SCLR2_LO_ACK_MASK                                                     0x01000000L
#define UVD_MEMCHECK2_VCPU_INT_ACK__MIF_SCLR2_HI_ACK_MASK                                                     0x02000000L
#define UVD_MEMCHECK2_VCPU_INT_ACK__PREF_LO_ACK_MASK                                                          0x04000000L
#define UVD_MEMCHECK2_VCPU_INT_ACK__PREF_HI_ACK_MASK                                                          0x08000000L


#endif
