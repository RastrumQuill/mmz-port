// sub_0804CC9C at 0x0804CC9C (thumb)

undefined4 sub_0804CC9C(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x54) = 0;
  uVar3 = sub_08008BC0(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  iVar5 = *(int *)(param_1 + 0x58);
  if (iVar5 < 0) {
    iVar5 = -iVar5;
  }
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + iVar5;
  iVar5 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x50) = iVar5;
  bVar1 = sub_080065AC(*(int *)(param_1 + 0x4c) + 0x400,iVar5 + -0xe00);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (bVar1 == 0x81) {
      uVar4 = (((uint)*(byte *)(param_1 + 10) << 0x18) >> 0x1c ^ 1) & 1;
      *(char *)(param_1 + 0x44) = (char)uVar4;
      if (uVar4 == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
LAB_0804cd80:
      *(byte *)(param_1 + 10) = bVar1;
      iVar5 = -*(int *)(param_1 + 0x58);
    }
    else {
      if ((bVar1 & 0xf) != 1) {
        cVar2 = sub_080079CC(*(int *)(param_1 + 0x4c) + 0x400,*(int *)(param_1 + 0x50) + -0xe00);
        if (cVar2 == '\0') goto LAB_0804cd88;
        bVar1 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
        *(byte *)(param_1 + 0x44) = bVar1;
        if (bVar1 == 0) {
          bVar1 = *(byte *)(param_1 + 10) & 0xef;
        }
        else {
          bVar1 = *(byte *)(param_1 + 10) | 0x10;
        }
        goto LAB_0804cd80;
      }
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0x12) = 0xc0;
      *(undefined4 *)(param_1 + 0x54) = 0;
      iVar5 = 0xa00;
    }
    *(int *)(param_1 + 0x58) = iVar5;
  }
LAB_0804cd88:
  iVar5 = *(int *)(param_1 + 0x50) + -0xe00;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    iVar5 = *(int *)(param_1 + 0x50) + 0xe00;
  }
  cVar2 = sub_080065AC(*(int *)(param_1 + 0x4c) + -0x400,iVar5);
  if (cVar2 == '\x01') {
    cVar2 = sub_080065AC(*(int *)(param_1 + 0x4c) + 0x200,*(int *)(param_1 + 0x50) + 0xe00);
    if ((cVar2 == '\0') || ((*(byte *)(param_1 + 10) & 0x10) == 0)) goto LAB_0804ce2a;
    bVar1 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    *(byte *)(param_1 + 0x44) = bVar1;
    if (bVar1 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
  }
  else {
    bVar1 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    *(byte *)(param_1 + 0x44) = bVar1;
    if (bVar1 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(int *)(param_1 + 0x58) = -*(int *)(param_1 + 0x58);
LAB_0804ce2a:
  *(undefined *)(param_1 + 0x45) = 1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
  *(undefined *)(param_1 + 0x1f) = 0x40;
  return in_lr;
}

