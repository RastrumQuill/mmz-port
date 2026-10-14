// sub_0803B50C at 0x0803B50C (thumb)

undefined4 sub_0803B50C(int param_1)

{
  char cVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xc0) != '\0') {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  }
  iVar4 = sub_0800A5A4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4;
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    sub_080177F4(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar4 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar4;
    if (0x700 < iVar4) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    sVar2 = sub_0803B75C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (sVar2 == 0) {
      return in_lr;
    }
    iVar4 = sub_08009B28(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (-0x801 < iVar4) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
    }
    if (*(char *)(param_1 + 0x11) != '\0') {
      *(undefined *)(param_1 + 0xd) = 1;
      return in_lr;
    }
    goto LAB_0803b67c;
  case 1:
    sub_08017700(param_1,0x6701);
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(undefined *)(param_1 + 0xd) = 2;
  case 2:
    sub_080177F4(param_1);
    sVar2 = sub_0803B75C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 1);
    if (sVar2 == 0) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    }
    iVar4 = sub_08009B28(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (iVar4 + 0x800U < 0x800) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(undefined *)(param_1 + 0xd) = 3;
    }
    break;
  case 3:
    sub_08017700(param_1,0x6702);
    *(undefined *)(param_1 + 0xd) = 4;
  case 4:
    sub_080177F4(param_1);
    sVar2 = sub_0803B75C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 1);
    if (sVar2 == 0) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      iVar4 = sub_08009B28(*(undefined4 *)(param_1 + 0x54));
      if (-0x801 < iVar4) {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
      }
    }
    if (*(char *)(param_1 + 0x73) == '\x03') {
LAB_0803b67c:
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0835b5d0)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_0803B704(param_1);
    }
    break;
  case 5:
    sub_080177F4(param_1);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    uVar3 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54));
    if ((uVar3 == 0) || ((uVar3 & 0x8000) != 0)) {
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 == -1) {
        *(undefined4 *)(param_1 + 0x60) = 0;
        *(undefined *)(param_1 + 0xd) = 0;
      }
    }
    else {
      iVar4 = sub_08009C90(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      if (iVar4 + *(int *)(param_1 + 0x60) < 0 != SCARRY4(iVar4,*(int *)(param_1 + 0x60))) {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
      }
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined *)(param_1 + 0xd) = 0;
    }
  }
  return in_lr;
}

