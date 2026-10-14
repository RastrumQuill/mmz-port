// sub_080565FC at 0x080565FC (thumb)

undefined4 sub_080565FC(int param_1)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  undefined uVar5;
  uint uVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08017700(param_1,0xb307);
    *(undefined *)(param_1 + 0xe) = 0;
    iVar2 = DAT_0202f5c0;
    *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar2 + 0x54);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(undefined4 *)(param_1 + 0x60) = 0xffffff00;
    uVar6 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar6 & 0x7fffffff;
    *(byte *)(param_1 + 0x12) = ((byte)(uVar6 * 2 >> 0x11) & 3) + 6;
  }
  sub_080177F4(param_1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  cVar4 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar4;
  if (cVar4 == -1) {
    if (((*(char *)(param_1 + 0xc5) == '\0') && (4 < *(byte *)(DAT_02030160 + 1))) &&
       (*(char *)(param_1 + 0xc6) != '\0')) {
      uVar5 = 0x26;
    }
    else {
      uVar5 = 0x16;
    }
    *(undefined *)(param_1 + 0xd) = uVar5;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

