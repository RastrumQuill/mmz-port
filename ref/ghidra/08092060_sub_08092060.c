// sub_08092060 at 0x08092060 (thumb)

undefined4 sub_08092060(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  iVar3 = *(int *)(param_1 + 0x58) + 0x40;
  *(int *)(param_1 + 0x58) = iVar3;
  if (0x700 < iVar3) {
    *(undefined4 *)(param_1 + 0x58) = 0x700;
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  bVar1 = *(byte *)(param_1 + 0x13);
  *(byte *)(param_1 + 0x13) = bVar1 + 1;
  if ((bVar1 & 3) < 2) {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar1;
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if ((cVar2 == -1) ||
     (cVar2 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + 0x800),
     cVar2 != '\0')) {
    sub_0808827C(1,param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8);
    sub_08001EAC(2);
    sub_08091AEC(param_1,2,0);
  }
  return in_lr;
}

