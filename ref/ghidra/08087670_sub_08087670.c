// sub_08087670 at 0x08087670 (thumb)

undefined4 sub_08087670(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 in_lr;
  
  sub_08003458(param_1 + 0x6c);
  uVar3 = *(uint *)(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 + *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + uVar3));
  if (*(char *)(param_1 + 0x13) == '\0') {
    uVar3 = *(byte *)(param_1 + 0x12) + 1;
    *(char *)(param_1 + 0x12) = (char)uVar3;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    uVar3 = uVar3 & 3;
    if (uVar3 < 2) {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      uVar3 = (uint)*(byte *)(param_1 + 10);
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
  }
  else {
    cVar2 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar2;
    if (cVar2 != '\0') goto LAB_080876e6;
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar1;
LAB_080876e6:
  cVar2 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),uVar3,0);
  if (cVar2 != '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

