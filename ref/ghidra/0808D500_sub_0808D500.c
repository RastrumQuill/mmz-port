// sub_0808D500 at 0x0808D500 (thumb)

undefined4 sub_0808D500(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  iVar3 = *(int *)(param_1 + 0x58) + 0x10;
  *(int *)(param_1 + 0x58) = iVar3;
  if (0x1c0 < iVar3) {
    *(undefined4 *)(param_1 + 0x58) = 0x1c0;
  }
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 + 1;
  if (((bVar1 & 7) == 0) && (*(char *)(param_1 + 0x10) == '\x01')) {
    sub_0808E574(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),0);
  }
  cVar2 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if (cVar2 != '\0') {
    if (*(byte *)(param_1 + 0x10) < 2) {
      sub_0808827C(1,param_1 + 0x4c);
      sub_08001EAC(0xd6);
    }
    else {
      sub_0808827C(3,param_1 + 0x4c);
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

