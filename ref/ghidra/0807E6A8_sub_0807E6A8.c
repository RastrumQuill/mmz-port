// sub_0807E6A8 at 0x0807E6A8 (thumb)

undefined4 sub_0807E6A8(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    iVar2 = *(int *)(param_1 + 0x58) + 0x40;
    *(int *)(param_1 + 0x58) = iVar2;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar2;
    cVar1 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c));
    if (cVar1 == '\0') {
      return in_lr;
    }
  }
  else {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return in_lr;
    }
  }
  sub_0808827C(1,param_1 + 0x4c);
  sub_08001EAC(2);
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
  return in_lr;
}

