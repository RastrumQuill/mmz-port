// sub_080904E8 at 0x080904E8 (thumb)

undefined4 sub_080904E8(int param_1)

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
  cVar1 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if (cVar1 != '\0') {
    sub_0808827C(3,param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

