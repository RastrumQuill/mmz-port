// sub_080850D8 at 0x080850D8 (thumb)

undefined4 sub_080850D8(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x4c) =
         *(int *)(param_1 + 0xb8) + (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12) + 0x40] * 0xb;
    *(int *)(param_1 + 0x50) =
         *(int *)(param_1 + 0xbc) + (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12)] * 0x16;
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -0x10;
    iVar3 = *(int *)(param_1 + 0x54) + -8;
    *(int *)(param_1 + 0x54) = iVar3;
    uVar4 = 0xfffffe00;
    if (-0x201 < iVar3) goto LAB_080851a8;
  }
  else {
    *(int *)(param_1 + 0x4c) =
         *(int *)(param_1 + 0xb8) + (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12) + 0x40] * 0xb;
    *(int *)(param_1 + 0x50) =
         *(int *)(param_1 + 0xbc) + (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12)] * 0x16;
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x10';
    iVar3 = *(int *)(param_1 + 0x54) + 8;
    *(int *)(param_1 + 0x54) = iVar3;
    uVar4 = 0x200;
    if (iVar3 < 0x201) goto LAB_080851a8;
  }
  *(undefined4 *)(param_1 + 0x54) = uVar4;
LAB_080851a8:
  bVar1 = *(byte *)(param_1 + 0x13);
  *(byte *)(param_1 + 0x13) = bVar1 + 1;
  if ((bVar1 & 3) == 0) {
    sub_080842BC(param_1,6,0);
  }
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + *(int *)(param_1 + 0x54);
  cVar2 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if (cVar2 != '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

