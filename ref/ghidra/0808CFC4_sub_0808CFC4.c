// sub_0808CFC4 at 0x0808CFC4 (thumb)

void sub_0808CFC4(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 0xc);
  iVar2 = *(int *)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x24);
  *(int *)(iVar2 + 0x24) = iVar1;
  *(int *)(iVar1 + 0x20) = iVar2;
  return;
}

