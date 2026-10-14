// sub_0808F860 at 0x0808F860 (thumb)

undefined4 sub_0808F860(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if ((cVar1 == -1) ||
     (cVar1 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50)),
     cVar1 != '\0')) {
    sub_0808827C(1,param_1 + 0x4c);
    sub_08001EAC(0xd6);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

