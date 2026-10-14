// sub_08006202 at 0x08006202 (thumb)

undefined4
sub_08006202(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
            int param_6,int param_7)

{
  ushort uVar1;
  uint uVar2;
  undefined4 *puVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  short sVar8;
  int iVar9;
  ushort *unaff_r6;
  ushort *unaff_r7;
  ushort *puVar10;
  uint unaff_r8;
  int unaff_r9;
  int unaff_r10;
  uint in_r12;
  char in_NG;
  char in_OV;
  uint param_11;
  int in_stack_00000038;
  int in_stack_0000003c;
  int param_13;
  uint param_14;
  undefined4 in_stack_0000006c;
  
  do {
    sVar4 = (short)unaff_r8;
    if ((in_NG == in_OV) || ((short)unaff_r6[2] <= param_2)) {
      do {
        sVar4 = (short)unaff_r8;
        unaff_r7 = unaff_r7 + (0xf - sVar4);
        uVar2 = in_r12 + 0x10000;
        if ((int)(short)unaff_r6[3] <= (int)uVar2 >> 0x10) {
          puVar10 = (ushort *)(param_13 + (uint)*(byte *)(param_7 + 1) * 300);
          param_11 = param_11 & 0xffff;
          uVar2 = param_11 * 0x10000;
          if ((int)(uVar2 + (uint)unaff_r6[3] * -0x10000) < 0 !=
              SBORROW4(uVar2,(uint)unaff_r6[3] * 0x10000)) {
            do {
              uVar1 = unaff_r6[1];
              iVar9 = unaff_r8 << 0x10;
              sVar8 = sVar4;
              if (iVar9 >> 0x10 < (int)(short)unaff_r6[2]) {
                iVar5 = *(int *)(param_5 + 0xc);
                do {
                  puVar7 = (undefined4 *)((uint)*puVar10 * 8 + iVar5);
                  uVar6 = ((uint)*unaff_r6 + (iVar9 >> 0x10)) * 0x100000;
                  puVar3 = (undefined4 *)
                           (((int)(uVar6 & 0x1000000) >> 0x10) * 8 +
                           (((int)(((uint)uVar1 * 0x10 + ((int)uVar2 >> 0xc)) * 0x10000) >> 0xe &
                            0x3c0U) + ((int)uVar6 >> 0x13 & 0x1eU)) * 2 + param_6);
                  *puVar3 = *puVar7;
                  puVar3[0x10] = puVar7[1];
                  puVar10 = puVar10 + 1;
                  iVar9 = (iVar9 >> 0x10) + 1;
                  sVar8 = (short)iVar9;
                  iVar9 = iVar9 * 0x10000;
                } while (iVar9 >> 0x10 < (int)(short)unaff_r6[2]);
              }
              puVar10 = puVar10 + (0xf - ((int)sVar8 - (int)sVar4));
              uVar2 = param_11 * 0x10000 + 0x10000;
              param_11 = uVar2 >> 0x10;
            } while ((int)uVar2 >> 0x10 < (int)(short)unaff_r6[3]);
          }
          return in_stack_0000006c;
        }
        unaff_r8 = 0;
        sVar4 = 0;
        in_r12 = uVar2 & 0xffff0000;
      } while ((-1 < -in_stack_0000003c) || (-1 < -(int)(short)unaff_r6[2]));
      param_14 = (int)(((uint)unaff_r6[1] * 0x10 + ((int)(uVar2 & 0xffff0000) >> 0xc)) * 0x10000) >>
                 0xe & 0x3c0;
      unaff_r9 = in_stack_00000038 >> 0x10;
      unaff_r10 = 0x100;
    }
    puVar7 = (undefined4 *)(*(int *)(param_5 + 0xc) + (uint)*unaff_r7 * 8);
    uVar2 = ((uint)*unaff_r6 + (int)sVar4) * 0x100000;
    puVar3 = (undefined4 *)
             (((int)(unaff_r10 << 0x10 & uVar2) >> 0x10) * 8 +
             (param_14 + ((int)uVar2 >> 0x13 & 0x1eU)) * 2 + param_6);
    *puVar3 = *puVar7;
    puVar3[0x10] = puVar7[1];
    unaff_r7 = unaff_r7 + 1;
    uVar2 = (int)sVar4 + 1;
    unaff_r8 = uVar2 & 0xffff;
    param_2 = (int)(uVar2 * 0x10000) >> 0x10;
    in_OV = SBORROW4(param_2,0xf - unaff_r9);
    in_NG = param_2 - (0xf - unaff_r9) < 0;
  } while( true );
}

