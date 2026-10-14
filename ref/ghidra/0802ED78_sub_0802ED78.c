// sub_0802ED78 at 0x0802ED78 (thumb)

undefined4 sub_0802ED78(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0800561C(param_1 + 0x74,&DAT_082ad128);
    sub_080785C8(*(undefined4 *)(param_1 + 0x24),4);
    bVar1 = 0 < *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
    *(bool *)(param_1 + 0x44) = bVar1;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    sub_08029778(param_1,1);
    uVar4 = *(byte *)(param_1 + 0x12) & 1;
    iVar3 = uVar4 * -0x100 + -0x100;
    *(int *)(param_1 + 0x54) = iVar3;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      iVar3 = -iVar3;
    }
    *(uint *)(param_1 + 0x54) = iVar3 * (1 - (*(byte *)(param_1 + 0x12) & 2));
    *(uint *)(param_1 + 0x58) = uVar4 * -0x200 + -0x400;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  bVar2 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar2;
  if (5 < bVar2) {
    sub_080785C8(*(undefined4 *)(param_1 + 0x24),5);
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  sub_0802E674(param_1);
  iVar3 = *(int *)(param_1 + 0x58) + 0x40;
  *(int *)(param_1 + 0x58) = iVar3;
  if (0 < iVar3) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_0802E674(param_1);
  sub_080297C0(param_1);
  return in_lr;
}

