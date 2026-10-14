// sub_0803927C at 0x0803927C (thumb)

undefined4 sub_0803927C(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 in_lr;
  undefined uVar10;
  
  iVar3 = *(int *)(param_1 + 0x28);
  uVar5 = (uint)*(byte *)(param_1 + 0x10);
  bVar2 = *(byte *)(param_1 + 0x11);
  uVar6 = (uint)bVar2;
  uVar8 = (uint)*(byte *)(param_1 + 0x12);
  bVar1 = *(byte *)(param_1 + 10);
  uVar10 = 0;
  *(byte *)(param_1 + 10) = bVar1 | 2;
  iVar9 = uVar6 * 4;
  uVar4 = *(undefined4 *)(&DAT_08336288 + iVar9 + uVar5 * 0xc + uVar8 * 0x48);
  *(byte *)(param_1 + 10) = bVar1 | 6;
  sub_08006DE4(param_1 + 0x74,uVar4,param_1 + 0x54,0);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x80398e5;
  iVar7 = (int)(char)(&DAT_083359f4)[*(byte *)(iVar3 + 0x1fc)] +
          (uint)*(byte *)(*(int *)(uVar8 * 4 + *(int *)(&DAT_08335a74 + iVar9)) + uVar5);
  if (iVar7 < 1) {
    iVar7 = 1;
  }
  sub_08006E18(param_1 + 0x74,uVar4,iVar7,0xffffffff,0xffffffff,0xffffffff,iVar3,uVar10);
  *(undefined *)(param_1 + 0x13) = 0;
  sub_08012580(param_1);
  sub_080127D0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_080127E4(param_1,*(undefined2 *)(&DAT_083360e8 + iVar9 + uVar8 * 0xc));
  bVar1 = *(byte *)(iVar3 + 10) >> 4;
  uVar8 = bVar1 & 1;
  if (uVar5 == 4) {
    uVar8 = (uint)((bVar1 & 1) == 0);
  }
  if (uVar6 == 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(byte *)(param_1 + 0x4c) = bVar2;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  }
  else {
    if (uVar8 == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(char *)(param_1 + 0x4c) = (char)uVar8;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar8 << 4);
  }
  iVar9 = uVar8 * 2 + -1;
  iVar7 = iVar9 * *(short *)(&DAT_083360dc + uVar6 * 2);
  *(int *)(param_1 + 0x5c) = iVar7;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(int *)(param_1 + 0x54) =
       *(int *)(iVar3 + 0x54) + (*(short *)(&DAT_08335a8e + uVar5 * 4) * iVar9 - iVar7);
  *(int *)(param_1 + 0x58) = *(int *)(iVar3 + 0x58) + (int)*(short *)(&DAT_08335a90 + uVar5 * 4);
  if (uVar6 == 0) {
    sub_080032EC(0x16);
  }
  else {
    sub_080032EC(0x1a);
  }
  *(undefined *)(param_1 + 0xd) = 1;
  sub_08039470(param_1);
  if (*(char *)(param_1 + 0xc) == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08336060)[*(byte *)(param_1 + 9)] + 4);
    if (uVar6 == 0) {
      *(undefined *)(param_1 + 0xd) = 1;
    }
  }
  return in_lr;
}

