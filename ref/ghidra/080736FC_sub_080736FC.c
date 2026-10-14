// sub_080736FC at 0x080736FC (thumb)

undefined4 sub_080736FC(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080033F0(param_1 + 0x6c,3);
    bVar1 = *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
    *(bool *)(param_1 + 0x44) = bVar1;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar4 = 0xfffffe80;
    }
    else {
      uVar4 = 0x180;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar4;
    *(undefined4 *)(param_1 + 0x58) = 0xfffffd00;
    sub_0800561C(param_1 + 0x74,&DAT_082b153c);
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x40;
  if ((*(ushort *)(param_1 + 0x90) & 4) != 0) {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    *(undefined *)(param_1 + 0xe) = 1;
    if (0x40 < *(byte *)(param_1 + 0x13)) {
      *(undefined *)(param_1 + 0x13) = 0x40;
    }
    iVar6 = DAT_0202286c;
    piVar7 = (int *)(param_1 + 0xb8);
    *piVar7 = *(int *)(param_1 + 0x4c) - *(int *)(DAT_0202286c + 0x4c);
    uVar5 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar5 & 0x7fffffff;
    *(uint *)(param_1 + 0xbc) = -0x800 - (uVar5 * 0x20 >> 0x15);
    *(undefined4 *)(param_1 + 0xc0) = 10;
    if ((*(byte *)(iVar6 + 10) & 0x10) != 0) {
      *piVar7 = -*piVar7;
    }
  }
  cVar3 = sub_080079CC(*(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54) * 8,
                       *(undefined4 *)(param_1 + 0x50));
  if (cVar3 != '\0') {
    *(int *)(param_1 + 0x54) = -*(int *)(param_1 + 0x54);
    bVar2 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    *(byte *)(param_1 + 0x44) = bVar2;
    if (bVar2 == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
  }
  iVar6 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if (iVar6 < *(int *)(param_1 + 0x50)) {
    uVar4 = sub_08008360(*(undefined4 *)(param_1 + 0x4c));
    *(undefined4 *)(param_1 + 0x50) = uVar4;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + -1;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

