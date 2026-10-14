// sub_080098EC at 0x080098EC (thumb)

undefined4 sub_080098EC(int *param_1,int param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  
  uVar1 = (uint)*(ushort *)(param_1 + 3);
  param_1[0xf] = param_1[0xd];
  param_1[0x10] = param_1[0xe];
  param_1[0x15] = param_1[0x13];
  param_1[0x16] = param_1[0x14];
  param_1[0xd] = *param_3 >> 8;
  iVar4 = param_3[1];
  param_1[0xe] = iVar4 >> 8;
  if (((uint)(byte)(&DAT_08335ec0)[param_1[0xd] >> 4] <
       (uint)*(byte *)(*(int *)(param_2 + 0x6c) + 2)) &&
     ((uint)(byte)(&DAT_083356c0)[iVar4 >> 0xc] < (uint)*(byte *)(*(int *)(param_2 + 0x6c) + 3))) {
    piVar3 = (int *)(((int)(uint)(*(ushort **)(param_2 + 0x74))
                                 [((uint)(byte)(&DAT_083356c0)[iVar4 >> 0xc] <<
                                  (**(ushort **)(param_2 + 0x74) & 0xff)) +
                                  (uint)(byte)(&DAT_08335ec0)[param_1[0xd] >> 4] + 4] >>
                      ((2 - uVar1) * 4 & 0xff) & 0xfU) * 0xc + *(int *)(param_2 + 0x70));
    iVar4 = *piVar3;
    iVar2 = piVar3[1];
    iVar5 = piVar3[2];
    iVar7 = *param_1;
  }
  else {
    iVar7 = *param_1;
    iVar2 = param_1[1];
    iVar5 = param_1[2];
    iVar4 = iVar7;
  }
  if ((iVar7 != iVar4) || (param_1[1] != iVar2)) {
    if (param_1[2] != 0) {
      sub_080FE2C4(param_1,param_2);
    }
    *param_1 = iVar4;
    param_1[1] = iVar2;
    param_1[2] = iVar5;
    iVar7 = uVar1 * 4;
    uVar6 = *(uint *)(param_2 + 0x18 + iVar7);
    param_1[0x17] = uVar6;
    iVar5 = *(int *)(param_2 + 0x24 + iVar7);
    param_1[0x18] = iVar5;
    iVar7 = *(int *)(param_2 + 0x30 + iVar7);
    param_1[0x19] = iVar7;
    param_2 = uVar1 * 8 + param_2;
    param_1[0x11] = *(int *)(param_2 + 0x3c);
    param_1[0x12] = *(int *)(param_2 + 0x40);
    param_1[0x13] = *(int *)(param_2 + 0x54);
    param_1[0x14] = *(int *)(param_2 + 0x58);
    if ((iVar4 == 0) && (iVar2 == 0)) {
      DAT_020023c0 = DAT_020023c0 & ~(ushort)(uVar6 << 8);
    }
    else {
      (&DAT_020023c4)[uVar6 >> 4] = (ushort)iVar5 | (ushort)iVar7 | 0x6044;
      DAT_020023c0 = (ushort)(uVar6 << 8) | DAT_020023c0;
    }
    param_1[0x10] = -0x7fffffff;
    param_1[0xf] = -0x7fffffff;
    param_1[0x16] = -0x7fffffff;
    param_1[0x15] = -0x7fffffff;
    *(undefined *)((int)param_1 + 0xf) = 0;
    *(undefined *)((int)param_1 + 0xe) = 0;
    *(undefined2 *)((int)param_1 + 0x12) = 0;
    *(undefined2 *)(param_1 + 4) = 0;
  }
  return in_lr;
}

