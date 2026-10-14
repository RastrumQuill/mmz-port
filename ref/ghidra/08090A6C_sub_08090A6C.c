// sub_08090A6C at 0x08090A6C (thumb)

undefined4 sub_08090A6C(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    iVar2 = *(int *)(param_1 + 0x58) + 0x40;
    *(int *)(param_1 + 0x58) = iVar2;
    if (0x700 < iVar2) {
      *(undefined4 *)(param_1 + 0x58) = 0x700;
    }
    cVar1 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    if (cVar1 != '\0') {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8)
      ;
    }
  }
  else {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

