// sub_08025DF8 at 0x08025DF8 (thumb)

undefined4 sub_08025DF8(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  uVar3 = (uint)*(byte *)(param_1 + 0x10);
  bVar2 = *(byte *)(param_1 + 0x11);
  uVar4 = (uint)bVar2;
  bVar1 = *(byte *)(param_1 + 0x12);
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 6;
  sub_080055FC(param_1 + 0x74,
               *(undefined4 *)(&DAT_082aa300 + uVar4 * 4 + uVar3 * 0xc + (uint)bVar1 * 0x48),
               param_1 + 0x4c,0);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0x80264bd;
  *(undefined *)(param_1 + 0x13) = 0;
  sub_08026514(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_08026580(param_1,*(undefined2 *)(&DAT_082aa1ec + uVar4 * 4 + (uint)bVar1 * 0xc));
  iVar8 = *(int *)(param_1 + 0x20);
  bVar1 = *(byte *)(iVar8 + 10) >> 4;
  uVar6 = bVar1 & 1;
  if (uVar3 == 4) {
    uVar6 = (uint)((bVar1 & 1) == 0);
  }
  if (uVar4 == 0) {
    *(byte *)(param_1 + 0x44) = bVar2;
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    *(char *)(param_1 + 0x44) = (char)uVar6;
    if (uVar6 == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
  }
  *(byte *)(param_1 + 10) = bVar2;
  iVar7 = uVar6 * 2 + -1;
  iVar5 = iVar7 * *(short *)(&DAT_082aa1c0 + uVar4 * 2);
  *(int *)(param_1 + 0x54) = iVar5;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(int *)(param_1 + 0x4c) =
       *(int *)(iVar8 + 0x4c) + (*(short *)(&DAT_082aa1cc + uVar3 * 4) * iVar7 - iVar5);
  *(int *)(param_1 + 0x50) = *(int *)(iVar8 + 0x50) + (int)*(short *)(&DAT_082aa1ce + uVar3 * 4);
  if (uVar4 == 0) {
    sub_08001EAC(3);
  }
  else {
    sub_08001EAC(0x1c);
  }
  *(undefined *)(param_1 + 0xd) = 1;
  sub_08025F64(param_1);
  if (*(char *)(param_1 + 0xc) == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082aa198)[*(byte *)(param_1 + 9)] + 4);
    if (uVar4 == 0) {
      *(undefined *)(param_1 + 0xd) = 1;
    }
  }
  return in_lr;
}

