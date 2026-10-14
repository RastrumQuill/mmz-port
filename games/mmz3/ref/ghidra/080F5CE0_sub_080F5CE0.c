// sub_080F5CE0 at 0x080F5CE0 (thumb)

undefined4 sub_080F5CE0(int param_1,int param_2)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  byte *pbVar4;
  ushort *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x64ac);
  uVar6 = 0;
  pbVar4 = (byte *)(iVar7 + 0xd8);
  do {
    puVar5 = (ushort *)(uVar6 * 2 + param_2 + 0xca);
    *puVar5 = *puVar5 & 0xfff | (ushort)(byte)(&DAT_0838bb54)[(uint)*pbVar4 * 3] << 0xc;
    uVar6 = uVar6 + 1 & 0xff;
  } while (uVar6 < 5);
  uVar6 = 0;
  pbVar1 = (byte *)(iVar7 + 0xd9);
  puVar2 = (undefined2 *)(iVar7 + 0x220);
  puVar3 = (undefined2 *)(iVar7 + 0x222);
  do {
    puVar5 = (ushort *)(uVar6 * 2 + param_2 + 0xd8);
    *puVar5 = *puVar5 & 0xfff | (ushort)(byte)(&DAT_0838bb55)[(uint)*pbVar4 * 3] << 0xc;
    uVar6 = uVar6 + 1 & 0xff;
  } while (uVar6 < 5);
  uVar6 = 0;
  do {
    puVar5 = (ushort *)(uVar6 * 2 + param_2 + 0xe6);
    *puVar5 = *puVar5 & 0xfff | (ushort)(byte)(&DAT_0838bb56)[(uint)*pbVar4 * 3] << 0xc;
    uVar6 = uVar6 + 1 & 0xff;
  } while (uVar6 < 6);
  uVar6 = 0;
  do {
    puVar5 = (ushort *)(uVar6 * 2 + param_2 + 0x30a);
    *puVar5 = *puVar5 & 0xfff | (ushort)(byte)(&DAT_0838bb54)[(uint)*pbVar1 * 3] << 0xc;
    uVar6 = uVar6 + 1 & 0xff;
  } while (uVar6 < 5);
  uVar6 = 0;
  do {
    puVar5 = (ushort *)(uVar6 * 2 + param_2 + 0x318);
    *puVar5 = *puVar5 & 0xfff | (ushort)(byte)(&DAT_0838bb55)[(uint)*pbVar1 * 3] << 0xc;
    uVar6 = uVar6 + 1 & 0xff;
  } while (uVar6 < 5);
  uVar6 = 0;
  do {
    puVar5 = (ushort *)(uVar6 * 2 + param_2 + 0x326);
    *puVar5 = *puVar5 & 0xfff | (ushort)(byte)(&DAT_0838bb56)[(uint)*pbVar1 * 3] << 0xc;
    uVar6 = uVar6 + 1 & 0xff;
  } while (uVar6 < 5);
  pbVar4 = (byte *)(param_1 + 0xdf8);
  sub_080F5C48(param_2,*puVar2,0xb2,(&DAT_0838bb5d)[(uint)*pbVar4 * 4]);
  sub_080F5C48(param_2,*(undefined2 *)(iVar7 + 0x21c),0xd2,(&DAT_0838bb5e)[(uint)*pbVar4 * 4]);
  sub_080F5C48(param_2,*(undefined2 *)(iVar7 + 0x21e),0xf2,(&DAT_0838bb5f)[(uint)*pbVar4 * 4]);
  sub_080F5C48(param_2,*puVar3,0x112,(&DAT_0838bb60)[(uint)*pbVar4 * 4]);
  if (*pbVar1 == 0) {
    sub_080F5C48(param_2,*puVar2,0x1c6,5);
    sub_080F5C48(param_2,*puVar3,0x1e4,5);
    *(undefined2 *)(param_2 + 0x3ca) = 0x50d4;
    sub_080F5C48(param_2,*puVar2,0x1e6,5);
    *(undefined2 *)(param_2 + 0x3dc) = 0x50c4;
    *(undefined2 *)(param_2 + 0x3de) = 0x50c5;
    *(undefined2 *)(param_2 + 0x3e0) = 0x50c6;
    *(undefined2 *)(param_2 + 0x3e2) = 0x50c7;
    *(undefined2 *)(param_2 + 0x3e4) = 0x50c8;
    *(undefined2 *)(param_2 + 0x3e6) = 0x50c9;
    *(undefined2 *)(param_2 + 1000) = 0x50ca;
    *(undefined2 *)(param_2 + 0x3ea) = 0x50cb;
    *(undefined2 *)(param_2 + 0x3ec) = 0x50cc;
    *(undefined2 *)(param_2 + 0x3ee) = 0x50a0;
    *(undefined2 *)(param_2 + 0x3f0) = 0x50a0;
    *(undefined2 *)(param_2 + 0x3f2) = 0x50a0;
  }
  else if (*pbVar1 == 1) {
    sub_080F5C48(param_2,*puVar2,0x1c6,5);
    *(undefined2 *)(param_2 + 0x3c8) = 0x50a0;
    *(undefined2 *)(param_2 + 0x3ca) = 0x50a0;
    sub_080F5C48(param_2,*puVar3,0x1e6,5);
    *(undefined2 *)(param_2 + 0x3dc) = 0x50c4;
    *(undefined2 *)(param_2 + 0x3de) = 0x50c5;
    *(undefined2 *)(param_2 + 0x3e0) = 0x50c6;
    *(undefined2 *)(param_2 + 0x3e2) = 0x50c7;
    *(undefined2 *)(param_2 + 0x3e4) = 0x50c8;
    *(undefined2 *)(param_2 + 0x3e6) = 0x50c9;
    *(undefined2 *)(param_2 + 1000) = 0x50ca;
    *(undefined2 *)(param_2 + 0x3ea) = 0x50cb;
    *(undefined2 *)(param_2 + 0x3ec) = 0x50cc;
    *(undefined2 *)(param_2 + 0x3ee) = 0x50a0;
    *(undefined2 *)(param_2 + 0x3f0) = 0x50a0;
    *(undefined2 *)(param_2 + 0x3f2) = 0x50a0;
  }
  else {
    sub_080F5C48(param_2,*puVar2,0x1c6,5);
    *(undefined2 *)(param_2 + 0x3c8) = 0x50a0;
    *(undefined2 *)(param_2 + 0x3ca) = 0x50a0;
    sub_080F5C48(param_2,*puVar3,0x1e6,5);
    *(undefined2 *)(param_2 + 0x3dc) = 0x50b8;
    *(undefined2 *)(param_2 + 0x3de) = 0x50b9;
    *(undefined2 *)(param_2 + 0x3e0) = 0x50ba;
    *(undefined2 *)(param_2 + 0x3e2) = 0x50bb;
    *(undefined2 *)(param_2 + 0x3e4) = 0x50bc;
    *(undefined2 *)(param_2 + 0x3e6) = 0x50bd;
    *(undefined2 *)(param_2 + 1000) = 0x50c7;
    *(undefined2 *)(param_2 + 0x3ea) = 0x50c8;
    *(undefined2 *)(param_2 + 0x3ec) = 0x50c9;
    *(undefined2 *)(param_2 + 0x3ee) = 0x50ca;
    *(undefined2 *)(param_2 + 0x3f0) = 0x50cb;
    *(undefined2 *)(param_2 + 0x3f2) = 0x50cc;
  }
  return in_lr;
}

