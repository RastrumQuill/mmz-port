// sub_0808F7D0 at 0x0808F7D0 (thumb)

undefined4 sub_0808F7D0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -2;
  iVar2 = *(int *)(param_1 + 0x58) + 8;
  *(int *)(param_1 + 0x58) = iVar2;
  iVar3 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x4c) = iVar3;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar2;
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if ((cVar1 == -1) || (cVar1 = sub_080079CC(iVar3), cVar1 != '\0')) {
    iVar2 = param_1 + 0x4c;
    sub_0808827C(1,iVar2);
    sub_0808F394(param_1,iVar2,*(byte *)(param_1 + 10) >> 4 & 1,2);
    sub_0808F394(param_1,iVar2,*(byte *)(param_1 + 10) >> 4 & 1,3);
    sub_08001EAC(0xd6);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

