// sub_08047548 at 0x08047548 (thumb)

undefined4 sub_08047548(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,5);
    *(undefined *)(param_1 + 0xe) = 0;
    bVar1 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    *(byte *)(param_1 + 0x44) = bVar1;
    if (bVar1 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if (*(int *)(param_1 + 0x4c) - *(int *)(DAT_0202286c + 0x4c) < 0xa000) {
        uVar2 = 0xfffffd00;
      }
      else {
        uVar2 = 0xfffffe00;
      }
    }
    else if (*(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c) < 0xa000) {
      uVar2 = 0x300;
    }
    else {
      uVar2 = 0x200;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar2;
    *(undefined4 *)(param_1 + 0x58) = 0xfffffd00;
    *(undefined *)(param_1 + 0x1f) = 0;
    sub_0800561C(param_1 + 0x74,&DAT_082ae9c4);
    sub_08001EAC(0xb6);
  }
  sub_080297C0(param_1);
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  iVar3 = *(int *)(param_1 + 0x58) + 0x40;
  *(int *)(param_1 + 0x58) = iVar3;
  if (0x700 < iVar3) {
    *(undefined4 *)(param_1 + 0x58) = 0x700;
  }
  iVar3 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if (iVar3 < *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58) * 4 + 0x100) {
    *(undefined *)(param_1 + 0xd) = 9;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

