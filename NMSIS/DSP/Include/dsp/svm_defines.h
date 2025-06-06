/******************************************************************************
 * @file     svm_defines.h
 * @brief    Public header file for NMSIS DSP Library
 * @version  V1.10.0
 * @date     08 July 2021
 *
 * Target Processor: RISC-V Cores
 ******************************************************************************/
/*
 * Copyright (c) 2010-2020 Arm Limited or its affiliates. All rights reserved.
 * Copyright (c) 2019 Nuclei Limited. All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

 
#ifndef SVM_DEFINES_H_
#define SVM_DEFINES_H_

/**
 * @brief Struct for specifying SVM Kernel
 */
typedef enum
{
    RISCV_ML_KERNEL_LINEAR = 0,
             /**< Linear kernel */
    RISCV_ML_KERNEL_POLYNOMIAL = 1,
             /**< Polynomial kernel */
    RISCV_ML_KERNEL_RBF = 2,
             /**< Radial Basis Function kernel */
    RISCV_ML_KERNEL_SIGMOID = 3
             /**< Sigmoid kernel */
} riscv_ml_kernel_type;

#endif
