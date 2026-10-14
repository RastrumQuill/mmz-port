// sub_08005C8C at 0x08005C8C (thumb)

undefined4
sub_08005C8C(int param_1,int param_2,uint param_3,undefined4 param_4,int param_5,int param_6,
            int param_7)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  ushort *unaff_r6;
  ushort *unaff_r7;
  ushort *puVar11;
  uint in_r12;
  uint param_11;
  int in_stack_00000038;
  int in_stack_0000003c;
  int param_13;
  undefined4 in_stack_0000006c;
  
  do {
    unaff_r7 = unaff_r7 + (param_2 - param_1);
    uVar3 = in_r12 + 0x10000;
    if ((int)(short)unaff_r6[3] <= (int)uVar3 >> 0x10) {
      puVar11 = (ushort *)(param_13 + (uint)*(byte *)(param_7 + 1) * 300);
      param_11 = param_11 & 0xffff;
      uVar3 = param_11 * 0x10000;
      if ((int)(uVar3 + (uint)unaff_r6[3] * -0x10000) < 0 !=
          SBORROW4(uVar3,(uint)unaff_r6[3] * 0x10000)) {
        sVar2 = (short)(param_3 >> 0x10);
        do {
          uVar1 = unaff_r6[1];
          uVar9 = param_3 & 0xffff0000;
          sVar8 = sVar2;
          if ((int)param_3 >> 0x10 < (int)(short)unaff_r6[2]) {
            iVar5 = *(int *)(param_5 + 0xc);
            do {
              puVar7 = (undefined4 *)((uint)*puVar11 * 8 + iVar5);
              uVar6 = ((uint)*unaff_r6 + ((int)uVar9 >> 0x10)) * 0x100000;
              puVar4 = (undefined4 *)
                       (((int)(uVar6 & 0x1000000) >> 0x10) * 8 +
                       (((int)(((uint)uVar1 * 0x10 + ((int)uVar3 >> 0xc)) * 0x10000) >> 0xe & 0x3c0U
                        ) + ((int)uVar6 >> 0x13 & 0x1eU)) * 2 + param_6);
              *puVar4 = *puVar7;
              puVar4[0x10] = puVar7[1];
              puVar11 = puVar11 + 1;
              iVar10 = ((int)uVar9 >> 0x10) + 1;
              sVar8 = (short)iVar10;
              uVar9 = iVar10 * 0x10000;
            } while ((int)uVar9 >> 0x10 < (int)(short)unaff_r6[2]);
          }
          puVar11 = puVar11 + (0xf - ((int)sVar8 - (int)sVar2));
          uVar3 = param_11 * 0x10000 + 0x10000;
          param_11 = uVar3 >> 0x10;
        } while ((int)uVar3 >> 0x10 < (int)(short)unaff_r6[3]);
      }
      return in_stack_0000006c;
    }
    uVar1 = unaff_r6[1];
    param_3 = 0;
    in_r12 = uVar3 & 0xffff0000;
    if ((0 < in_stack_0000003c) && (0 < (short)unaff_r6[2])) {
      do {
        puVar7 = (undefined4 *)(*(int *)(param_5 + 0xc) + (uint)*unaff_r7 * 8);
        uVar9 = ((uint)*unaff_r6 + (int)(short)param_3) * 0x100000;
        puVar4 = (undefined4 *)
                 (((int)(uVar9 & 0x1000000) >> 0x10) * 8 +
                 (((int)(((uint)uVar1 * 0x10 + ((int)(uVar3 & 0xffff0000) >> 0xc)) * 0x10000) >> 0xe
                  & 0x3c0U) + ((int)uVar9 >> 0x13 & 0x1eU)) * 2 + param_6);
        *puVar4 = *puVar7;
        puVar4[0x10] = puVar7[1];
        unaff_r7 = unaff_r7 + 1;
        uVar9 = (int)(short)param_3 + 1;
        param_3 = uVar9 & 0xffff;
        iVar5 = (int)(uVar9 * 0x10000) >> 0x10;
        if (0xf - (in_stack_00000038 >> 0x10) <= iVar5) break;
      } while (iVar5 < (short)unaff_r6[2]);
    }
    param_3 = param_3 << 0x10;
    param_1 = (int)param_3 >> 0x10;
    param_2 = 0xf;
  } while( true );
}

