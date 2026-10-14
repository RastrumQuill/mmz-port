// sub_08041058 at 0x08041058 (thumb)

undefined4 sub_08041058(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0xf);
    bVar1 = *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
    *(bool *)(param_1 + 0x44) = bVar1;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(undefined *)(param_1 + 0xe) = 0;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar3 = 0x300;
    }
    else {
      uVar3 = 0xfffffd00;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar3;
    *(undefined4 *)(param_1 + 0x58) = 0xfffffd00;
  }
  sub_080297C0(param_1);
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x40;
  iVar4 = sub_08008360();
  if (iVar4 < *(int *)(param_1 + 0x50)) {
    uVar3 = sub_08008360(*(undefined4 *)(param_1 + 0x4c));
    *(undefined4 *)(param_1 + 0x50) = uVar3;
    *(undefined *)(param_1 + 0xd) = 0xc;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

