// sub_0807769C at 0x0807769C (thumb)

undefined4 sub_0807769C(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  undefined auStack_40 [12];
  undefined auStack_34 [12];
  undefined *local_28 [2];
  
  sub_08128B5C(auStack_40,&DAT_081292d0,9);
  sub_08128B5C(auStack_34,&DAT_081292d9,9);
  local_28[0] = auStack_40;
  local_28[1] = auStack_34;
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined *)(*(int *)(param_1 + 200) + 0xb5) = 6;
    *(undefined *)(*(int *)(param_1 + 200) + 0xb6) = 1;
    sub_08078ED4(param_1,0);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  bVar1 = *(byte *)(param_1 + 0xc5);
  bVar2 = *(byte *)(param_1 + 0x13);
  iVar8 = *(int *)(param_1 + 0xb8) +
          *(int *)(&DAT_08859dcc + (uint)(byte)local_28[bVar1][bVar2] * 8) + 0x7800;
  iVar9 = *(int *)(param_1 + 0xbc) +
          *(int *)(&DAT_08859dd0 + (uint)(byte)local_28[bVar1][bVar2] * 8) + 0x5000;
  if (*(int *)(param_1 + 0x5c) == 0) {
    iVar6 = iVar8 - *(int *)(param_1 + 0x54);
    iVar5 = iVar9 - *(int *)(param_1 + 0x58);
    uVar3 = sub_081284F8(iVar6 * iVar6 + iVar5 * iVar5);
    uVar4 = sub_08128A24(uVar3,*(undefined2 *)(&DAT_08859e00 + (uint)*(byte *)(param_1 + 0xd7) * 2))
    ;
    uVar4 = uVar4 & 0xffff;
    *(int *)(param_1 + 100) = iVar8 - *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x68) = iVar9 - *(int *)(param_1 + 0x58);
    *(uint *)(param_1 + 0x60) = uVar4;
    *(uint *)(param_1 + 0x5c) = uVar4;
    if (uVar4 == 0) {
      *(undefined4 *)(param_1 + 0x60) = 1;
    }
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                (&DAT_08859dac)[*(ushort *)(&DAT_08859db4 + (uint)*(byte *)(param_1 + 0xc4) * 2)]));
  sub_08078E5C(param_1);
  if (*(int *)(param_1 + 0x5c) != 0) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
  }
  iVar6 = *(int *)(param_1 + 0x5c);
  uVar7 = *(undefined4 *)(param_1 + 0x60);
  iVar5 = FUN_081288bc(*(int *)(param_1 + 100) * iVar6,uVar7);
  *(int *)(param_1 + 0x54) = iVar8 - iVar5;
  iVar8 = FUN_081288bc(*(int *)(param_1 + 0x68) * iVar6,uVar7);
  *(int *)(param_1 + 0x58) = iVar9 - iVar8;
  if (iVar6 == 0) {
    uVar4 = bVar2 + 1;
    if (local_28[bVar1][uVar4 & 0xff] == -1) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      *(undefined *)(param_1 + 0xf) = 0;
    }
    else {
      *(char *)(param_1 + 0x13) = (char)uVar4;
    }
  }
  return in_lr;
}

