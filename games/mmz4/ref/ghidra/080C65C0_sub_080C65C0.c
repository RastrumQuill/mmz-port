// sub_080C65C0 at 0x080C65C0 (thumb)

undefined4 sub_080C65C0(int param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar1 = DAT_0202dbf0;
  iVar3 = *(int *)(param_1 + 0x28);
  sub_0801CFF0(param_1);
  if (*(byte *)(param_1 + 0xd) < 2) {
    bVar2 = *(byte *)(iVar3 + 10) >> 4;
    uVar7 = bVar2 & 1;
    if ((bVar2 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(char *)(param_1 + 0x4c) = (char)uVar7;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar7 << 4);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar4 = *(int *)(iVar3 + 0x54) + -0x1100;
    }
    else {
      iVar4 = *(int *)(iVar3 + 0x54) + 0x1100;
    }
    *(int *)(param_1 + 0x54) = iVar4;
    *(int *)(param_1 + 0x58) = *(int *)(iVar3 + 0x58) + -0x1500;
    if (4 < (byte)(*(char *)(iVar3 + 0xd) - 0xeU)) {
LAB_080c666e:
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 0xc);
      return in_lr;
    }
  }
  else {
    uVar7 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
    if (0x3000 < uVar7) goto LAB_080c666e;
  }
  bVar2 = *(byte *)(param_1 + 0xd);
  if (bVar2 != 1) {
    if (bVar2 < 2) {
      return in_lr;
    }
    if (bVar2 != 2) {
      return in_lr;
    }
    goto LAB_080c682c;
  }
  if (iVar1 != 0) {
    bVar2 = *(byte *)(param_1 + 10);
    if ((bVar2 & 0x10) == 0) {
      iVar4 = *(int *)(param_1 + 0x54) + -0x3100;
      if (iVar4 < DAT_0202ea30 + -0x6e00) {
        iVar4 = DAT_0202ea30 + -0x6e00;
      }
      if ((*(byte *)(iVar1 + 10) & 0x10) == 0) goto LAB_080c675c;
      *(undefined *)(iVar1 + 0x171) = 1;
      *(byte *)(iVar1 + 0x172) = bVar2 & 0x10;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x54) + 0x3100;
      if (DAT_0202ea30 + 0x6dff < iVar4) {
        iVar4 = DAT_0202ea30 + 0x6dff;
      }
      if ((*(byte *)(iVar1 + 10) & 0x10) == 0) {
        *(undefined *)(iVar1 + 0x171) = 1;
        *(byte *)(iVar1 + 0x172) = *(byte *)(iVar1 + 10) & 0x10;
      }
      else {
LAB_080c675c:
        *(undefined *)(iVar1 + 0x171) = 1;
        *(undefined *)(iVar1 + 0x172) = 1;
      }
    }
    iVar8 = *(int *)(param_1 + 0x58) + 0x1500;
    iVar5 = *(int *)(iVar1 + 0x54);
    if (iVar5 - iVar4 < 0) {
      if (0x800 < iVar4 - iVar5) goto LAB_080c6796;
LAB_080c67ae:
      *(int *)(iVar1 + 0x54) = iVar4;
    }
    else {
      if (iVar5 - iVar4 < 0x801) goto LAB_080c67ae;
LAB_080c6796:
      if (iVar4 < iVar5) {
        iVar4 = -0x800;
      }
      else {
        iVar4 = 0x800;
      }
      *(int *)(iVar1 + 0x54) = iVar5 + iVar4;
    }
    iVar4 = *(int *)(iVar1 + 0x58);
    iVar5 = iVar4 - iVar8;
    if (iVar5 < 0) {
      iVar5 = iVar8 - iVar4;
    }
    if (iVar5 < 0x801) {
      *(int *)(iVar1 + 0x58) = iVar8;
    }
    else if (iVar8 < iVar4) {
      *(int *)(iVar1 + 0x58) = iVar4 + -0x800;
    }
    else {
      *(int *)(iVar1 + 0x58) = iVar4 + 0x800;
    }
  }
  if (*(char *)(iVar3 + 0xd) != '\x11') {
    return in_lr;
  }
  sub_08005784(param_1 + 0x74,&DAT_088626dc);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffc00;
    uVar6 = 0xfffffc80;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0x400;
    uVar6 = 0x380;
  }
  *(undefined4 *)(param_1 + 100) = uVar6;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined *)(param_1 + 0x13) = 0;
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
LAB_080c682c:
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  bVar2 = sub_08128A24(*(undefined *)(param_1 + 0x12),10);
  if ((*(byte *)(param_1 + 0x13) != bVar2) && (bVar2 < 4)) {
    *(byte *)(param_1 + 0x13) = bVar2;
    sub_08005784(param_1 + 0x74,&DAT_088626dc + (uint)*(byte *)(param_1 + 0x13) * 0x18);
  }
  if ((iVar1 != 0) && ((*(uint *)(iVar1 + 0x8c) & 1) != 0)) {
    *(byte *)(iVar1 + 0x142) = *(byte *)(iVar1 + 0x142) | 0x40;
    *(undefined *)(iVar1 + 0xd) = 4;
    *(undefined *)(iVar1 + 0xe) = 0;
    *(undefined4 *)(iVar1 + 0x128) = *(undefined4 *)(param_1 + 100);
    *(undefined4 *)(iVar1 + 300) = 0;
    *(undefined4 *)(iVar1 + 0x130) = 0;
    *(undefined4 *)(iVar1 + 0x134) = 0;
    *(undefined2 *)(iVar1 + 0x138) = 8;
    sub_080C5F68(*(undefined4 *)(iVar1 + 0x54),*(undefined4 *)(param_1 + 0x58),
                 *(byte *)(param_1 + 10) >> 4 & 1);
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  return in_lr;
}

