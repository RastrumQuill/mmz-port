// sub_08032DCC at 0x08032DCC (thumb)

undefined4 sub_08032DCC(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029790(param_1,0x11,2,0xc);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0x28;
    *(undefined4 *)(param_1 + 0x58) = 0xfffff240;
    if (*(int *)(DAT_0202286c + 0x4c) < *(int *)(param_1 + 0xb8) + 0xf000) {
      *(undefined *)(param_1 + 0x44) = 1;
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      *(undefined *)(param_1 + 0x44) = 0;
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar1;
  }
  sub_080297C0(param_1);
  if (*(byte *)(param_1 + 0x12) < 0x19) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar3 = *(int *)(DAT_0202286c + 0x4c);
      iVar4 = 0x1000;
    }
    else {
      iVar3 = *(int *)(DAT_0202286c + 0x4c);
      iVar4 = -0x1000;
    }
    iVar5 = *(int *)(param_1 + 0x4c);
    iVar3 = sub_080C8AD0((iVar3 + iVar4) - iVar5,*(undefined *)(param_1 + 0x12));
    *(int *)(param_1 + 0x54) = iVar3;
    iVar4 = *(int *)(param_1 + 0x58) + 0x40;
    *(int *)(param_1 + 0x58) = iVar4;
    *(int *)(param_1 + 0x4c) = iVar5 + iVar3;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar4;
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') {
      *(undefined *)(param_1 + 0xd) = 0x1b;
      *(undefined *)(param_1 + 0xe) = 1;
      sub_08064490(param_1,3);
    }
  }
  else {
    *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) - 1;
  }
  return in_lr;
}

