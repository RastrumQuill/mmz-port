// sub_08084D80 at 0x08084D80 (thumb)

undefined4 sub_08084D80(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  iVar2 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x4c) = iVar2;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  if (*(char *)(param_1 + 0xd) == '\0') {
    cVar1 = *(char *)(param_1 + 0x12);
    *(char *)(param_1 + 0x12) = cVar1 + -1;
    if (cVar1 == '\0') {
      *(undefined *)(param_1 + 0xd) = 1;
    }
  }
  else {
    cVar1 = sub_080079CC(iVar2);
    if (cVar1 != '\0') {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8)
      ;
    }
  }
  return in_lr;
}

