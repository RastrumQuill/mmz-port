// sub_0806A0F8 at 0x0806A0F8 (thumb)

undefined4 sub_0806A0F8(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar4 = *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar2 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  if (iVar4 != 0) {
    if (iVar4 < 1) {
      iVar2 = sub_0800A04C(*(int *)(param_1 + 0x54) + -0xc00,*(int *)(param_1 + 0x58) + -0x800);
      if (0 < iVar2) goto LAB_0806a176;
    }
    else {
      iVar2 = sub_08009ED0(*(int *)(param_1 + 0x54) + 0xc00,*(int *)(param_1 + 0x58) + -0x800);
      if (iVar2 < 0) {
LAB_0806a176:
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar2;
      }
    }
  }
  iVar2 = sub_08009BE4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x600);
  cVar1 = sub_08009038(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (cVar1 != '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    return in_lr;
  }
  if (-1 < iVar2) {
    return in_lr;
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    iVar3 = *(int *)(param_1 + 0x54);
    iVar4 = *(int *)(param_1 + 0xb8);
    if (iVar4 < iVar3) {
      if (iVar3 <= iVar4 + 0x16800) goto LAB_0806a218;
      iVar4 = -0x16800;
    }
    else {
      if (iVar4 + -0x16800 <= iVar3) goto LAB_0806a218;
      iVar4 = 0x16800;
    }
    *(int *)(param_1 + 0xb8) = iVar3 + iVar4;
  }
LAB_0806a218:
  iVar2 = *(int *)(param_1 + 0x58) + iVar2;
  *(int *)(param_1 + 0x58) = iVar2;
  sub_080B8908(*(undefined4 *)(param_1 + 0x54),iVar2,*(undefined *)(param_1 + 0x11));
  *(undefined *)(param_1 + 0xd) = 2;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

