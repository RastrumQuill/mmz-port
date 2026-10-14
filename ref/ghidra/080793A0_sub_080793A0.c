// sub_080793A0 at 0x080793A0 (thumb)

undefined4 sub_080793A0(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(undefined *)(param_1 + 0x13) = 0;
  }
  iVar3 = param_1 + 0x6c;
  sub_08003458(iVar3);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if (*(char *)(param_1 + 0xf) == '\0') {
    cVar1 = *(char *)(param_1 + 0x12);
    *(char *)(param_1 + 0x12) = cVar1 + -1;
    if (cVar1 == '\0') {
      sub_080033F0(iVar3,1);
      sub_08003458(iVar3);
      *(undefined *)(param_1 + 0x46) =
           *(undefined *)
            (*(char *)(param_1 + 0x71) * 4 +
            *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
      *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
    iVar3 = *(int *)(param_1 + 0x50) + -0x400;
  }
  else {
    if (*(char *)(param_1 + 0xf) != '\x01') goto LAB_08079476;
    iVar3 = *(byte *)(param_1 + 0x13) + 2;
    *(char *)(param_1 + 0x13) = (char)iVar3;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0xb8) + (short)(&DAT_080c8e24)[iVar3] * 0xc;
    iVar3 = *(int *)(param_1 + 0x50) + 0xc0;
  }
  *(int *)(param_1 + 0x50) = iVar3;
LAB_08079476:
  uVar2 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if (((uVar2 & 0xf) != 0) &&
     (uVar2 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50)),
     (uVar2 & 0x80) == 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

