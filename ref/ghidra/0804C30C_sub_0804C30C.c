// sub_0804C30C at 0x0804C30C (thumb)

undefined4 sub_0804C30C(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x58);
  if (iVar4 < 0) {
    iVar4 = -iVar4;
  }
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + iVar4;
  iVar4 = sub_080089EC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  *(int *)(param_1 + 0x4c) = iVar4;
  iVar5 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x50) = iVar5;
  *(undefined4 *)(param_1 + 0x54) = 0;
  bVar1 = sub_080065AC(iVar4 + -0x400,iVar5 + -0xe00);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    if (bVar1 == 0x81) {
      uVar3 = (((uint)*(byte *)(param_1 + 10) << 0x18) >> 0x1c ^ 1) & 1;
      *(char *)(param_1 + 0x44) = (char)uVar3;
      if (uVar3 == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
LAB_0804c3f4:
      *(byte *)(param_1 + 10) = bVar1;
      iVar4 = -*(int *)(param_1 + 0x58);
    }
    else {
      if ((bVar1 & 0xf) != 1) {
        cVar2 = sub_080079CC(*(int *)(param_1 + 0x4c) + -0x400,*(int *)(param_1 + 0x50) + -0xe00);
        if (cVar2 == '\0') goto LAB_0804c3fc;
        bVar1 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
        *(byte *)(param_1 + 0x44) = bVar1;
        if (bVar1 == 0) {
          bVar1 = *(byte *)(param_1 + 10) & 0xef;
        }
        else {
          bVar1 = *(byte *)(param_1 + 10) | 0x10;
        }
        goto LAB_0804c3f4;
      }
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0x12) = 0xc0;
      *(undefined4 *)(param_1 + 0x54) = 0;
      iVar4 = 0xa00;
    }
    *(int *)(param_1 + 0x58) = iVar4;
  }
LAB_0804c3fc:
  iVar4 = *(int *)(param_1 + 0x50) + 0xe00;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    iVar4 = *(int *)(param_1 + 0x50) + -0xe00;
  }
  cVar2 = sub_080065AC(*(int *)(param_1 + 0x4c) + 0x600,iVar4);
  if (cVar2 == '\x01') {
    cVar2 = sub_080065AC(*(int *)(param_1 + 0x4c) + -0x200,*(int *)(param_1 + 0x50) + 0xe00);
    if ((cVar2 == '\0') || ((*(byte *)(param_1 + 10) & 0x10) != 0)) goto LAB_0804c49a;
    bVar1 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    *(byte *)(param_1 + 0x44) = bVar1;
    if (bVar1 == 0) goto LAB_0804c48c;
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar1 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    *(byte *)(param_1 + 0x44) = bVar1;
    if (bVar1 == 0) {
LAB_0804c48c:
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(int *)(param_1 + 0x58) = -*(int *)(param_1 + 0x58);
LAB_0804c49a:
  *(undefined *)(param_1 + 0x45) = 1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
  *(undefined *)(param_1 + 0x1f) = 0xc0;
  return in_lr;
}

