// sub_0808C328 at 0x0808C328 (thumb)

undefined4 sub_0808C328(int param_1)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x20);
  cVar1 = *(char *)(iVar4 + 0x1f);
  iVar3 = 0;
  puVar2 = (undefined *)(param_1 + 0x78);
  do {
    *puVar2 = puVar2[1];
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 7);
  *(char *)(param_1 + 0x7f) = cVar1 + -0x80;
  if (1 < *(byte *)(iVar4 + 0xc)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8);
    sub_0808C378(param_1);
  }
  return in_lr;
}

