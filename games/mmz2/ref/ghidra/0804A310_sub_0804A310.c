// sub_0804A310 at 0x0804A310 (thumb)

undefined4 sub_0804A310(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08006E08(param_1 + 0x74,&DAT_0833b194);
    sub_080126A0(param_1);
    sub_080127D0(param_1);
    sub_080127E4(param_1,0xa81d);
    if (*(int *)(param_1 + 0xc4) + -0x7800 < *(int *)(param_1 + 0x54)) {
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    }
    *(undefined2 *)(param_1 + 0x50) = 0x80;
    *(undefined2 *)(param_1 + 0x52) = 0x80;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar2 = *(int *)(param_1 + 0xc4);
      iVar3 = -0x2000;
    }
    else {
      iVar2 = *(int *)(param_1 + 0xc0);
      iVar3 = 0x2000;
    }
    *(int *)(param_1 + 0x54) = iVar2 + iVar3;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + -0x4000;
    *(undefined4 *)(param_1 + 0x60) = 0;
    bVar1 = 0;
    do {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
      bVar1 = bVar1 + 1;
    } while (bVar1 < 0x20);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar2 = *(int *)(param_1 + 0x60) + -0x40;
  *(int *)(param_1 + 0x60) = iVar2;
  if (iVar2 == 0) {
    *(undefined *)(param_1 + 0xd) = 0x17;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

