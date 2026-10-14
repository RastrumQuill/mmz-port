// sub_0808C200 at 0x0808C200 (thumb)

undefined4 sub_0808C200(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  iVar2 = *(int *)(param_1 + 0x58) + 0x20;
  *(int *)(param_1 + 0x58) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x58) = 0x700;
  }
  if (*(char *)(param_1 + 0x11) == '\0') {
    cVar1 = *(char *)(param_1 + 0x13) + '\x01';
  }
  else {
    cVar1 = *(char *)(param_1 + 0x13) + -1;
  }
  *(char *)(param_1 + 0x13) = cVar1;
  *(undefined *)(param_1 + 0x1f) = *(undefined *)(param_1 + 0x13);
  cVar1 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if (cVar1 != '\0') {
    sub_08001EAC(2);
    sub_0808827C(1,param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

