// sub_08040ECC at 0x08040ECC (thumb)

undefined4 sub_08040ECC(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,9);
    *(undefined *)(param_1 + 0xe) = 0;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x54) = 0xfffffc80;
      uVar2 = 8;
    }
    else {
      *(undefined4 *)(param_1 + 0x54) = 0x380;
      uVar2 = 0xfff8;
    }
    *(undefined2 *)(param_1 + 0xcc) = uVar2;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    if (*(char *)(param_1 + 0xe2) == '\0') {
      sub_0800561C(param_1 + 0x74,&DAT_082ae4d8);
      sub_08001EAC(0xa1);
    }
    else {
      sub_0800561C(param_1 + 0x74,&DAT_082ae510);
      sub_08001EAC(0xa1);
    }
    sub_08083064(param_1,1,0);
    *(char *)(param_1 + 0xe2) = '\0';
  }
  sub_080297C0(param_1);
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  cVar1 = *(char *)(param_1 + 0x12);
  *(char *)(param_1 + 0x12) = cVar1 + '\x01';
  iVar4 = *(int *)(param_1 + 0x50);
  if (iVar4 < *(int *)(param_1 + 0xbc) + 0xf000) {
    *(char *)(param_1 + 0x12) = cVar1 + '\x02';
    if (*(int *)(DAT_0202286c + 0x50) < iVar4) {
      *(int *)(param_1 + 0x50) = iVar4 + -0x200;
    }
    cVar1 = sub_080079CC(*(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54) * 0x10,
                         *(undefined4 *)(param_1 + 0x50));
    if (cVar1 != '\0') {
      *(undefined *)(param_1 + 0xd) = 0xb;
      *(undefined *)(param_1 + 0xe) = 1;
    }
    iVar4 = *(int *)(DAT_0202286c + 0x4c);
    iVar5 = *(int *)(param_1 + 0x4c);
    if ((bool)(~(*(byte *)(param_1 + 10) >> 4) & 1) == iVar4 < iVar5) {
      return in_lr;
    }
    iVar6 = iVar4 - iVar5;
    if (iVar6 < 0) {
      iVar6 = iVar5 - iVar4;
    }
    if (iVar6 < 0x2001) {
      return in_lr;
    }
    if (*(byte *)(param_1 + 0x12) < 0x29) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0xca) == '\0') {
      *(undefined *)(param_1 + 0xd) = 10;
      *(undefined *)(param_1 + 0xf) = 0x15;
      *(undefined4 *)(param_1 + 0x54) = 0;
      *(undefined4 *)(param_1 + 0x58) = 0;
      goto LAB_0804104a;
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x54) + (int)*(short *)(param_1 + 0xcc);
    *(int *)(param_1 + 0x54) = iVar4;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    if (iVar4 < 0x400) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        uVar3 = 0xfffffc00;
      }
      else {
        uVar3 = 0x400;
      }
      *(undefined4 *)(param_1 + 0x54) = uVar3;
    }
    if (*(byte *)(param_1 + 0x12) < 0x29) {
      return in_lr;
    }
  }
  *(undefined *)(param_1 + 0xd) = 0xb;
LAB_0804104a:
  *(undefined *)(param_1 + 0xe) = 1;
  return in_lr;
}

