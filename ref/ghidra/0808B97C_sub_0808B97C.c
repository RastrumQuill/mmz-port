// sub_0808B97C at 0x0808B97C (thumb)

undefined4 sub_0808B97C(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  iVar2 = *(int *)(param_1 + 0x58) + 0x40;
  *(int *)(param_1 + 0x58) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x58) = 0x700;
  }
  if (*(byte *)(param_1 + 0x11) < 3) {
    cVar1 = *(char *)(param_1 + 0x13) + -1;
  }
  else {
    cVar1 = *(char *)(param_1 + 0x13) + '\x01';
  }
  *(char *)(param_1 + 0x13) = cVar1;
  *(undefined *)(param_1 + 0x1f) = *(undefined *)(param_1 + 0x13);
  cVar1 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if (cVar1 != '\0') {
    sub_0808827C(3,param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

