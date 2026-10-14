// sub_08095254 at 0x08095254 (thumb)

undefined4 sub_08095254(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 in_lr;
  undefined auStack_5c [4];
  undefined auStack_58 [4];
  undefined auStack_54 [4];
  undefined auStack_50 [4];
  undefined uStack_4c;
  undefined auStack_4b [3];
  undefined *local_48;
  undefined *local_44;
  undefined *local_40;
  undefined *local_3c;
  undefined **local_38 [2];
  int local_30;
  int local_2c;
  undefined *local_28;
  uint local_24;
  
  sub_08128B5C(auStack_5c,&DAT_08129500,4);
  sub_08128B5C(auStack_58,&DAT_08129504,4);
  sub_08128B5C(auStack_54,&DAT_08129508,4);
  sub_08128B5C(auStack_50,&DAT_0812950c,4);
  local_38[0] = &local_48;
  local_38[1] = &local_40;
  local_28 = &uStack_4c;
  local_48 = auStack_5c;
  local_44 = auStack_58;
  local_40 = auStack_54;
  local_3c = auStack_50;
  sub_08128B5C(local_28,&DAT_08129510,4);
  iVar6 = *(int *)(param_1 + 0x28);
  uVar7 = (uint)*(byte *)(param_1 + 0x11);
  bVar1 = *(byte *)(iVar6 + 10) >> 4;
  uVar8 = bVar1 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    local_24 = uVar7;
    sub_08002B10(*(undefined2 *)(&DAT_0885d280 + uVar7 * 4));
    if (*(int *)(param_1 + 0xb8) == 0) {
      local_30 = *(int *)(iVar6 + 0x54) + (uVar8 * 2 + -1) * (int)*(short *)*local_38[uVar7];
      local_2c = *(int *)(iVar6 + 0x58) + (int)*(short *)(*local_38[uVar7] + 2);
      iVar2 = sub_08094F3C(param_1,&local_30,local_28[uVar7 * 2]);
      *(int *)(param_1 + 0xb8) = iVar2;
    }
    if (*(int *)(param_1 + 0xbc) == 0) {
      local_30 = *(int *)(iVar6 + 0x54) + (uVar8 * 2 + -1) * (int)*(short *)local_38[uVar7][1];
      local_2c = *(int *)(iVar6 + 0x58) + (int)*(short *)((int)local_38[uVar7][1] + 2);
      iVar2 = sub_08094F3C(param_1,&local_30,auStack_4b[local_24 * 2]);
      *(int *)(param_1 + 0xbc) = iVar2;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar8;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar8 << 4);
  uVar5 = *(undefined4 *)(iVar6 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar6 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar5;
  piVar3 = (int *)(param_1 + 0xb8);
  if ((*piVar3 != 0) && (1 < *(byte *)(*piVar3 + 0xc))) {
    *piVar3 = 0;
  }
  piVar4 = (int *)(param_1 + 0xbc);
  if ((*piVar4 != 0) && (1 < *(byte *)(*piVar4 + 0xc))) {
    *piVar4 = 0;
  }
  if ((*piVar3 == 0) && (*piVar4 == 0)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

