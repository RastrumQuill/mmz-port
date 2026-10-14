// sub_0808C2B8 at 0x0808C2B8 (thumb)

undefined4 sub_0808C2B8(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 in_lr;
  
  cVar1 = *(char *)(*(int *)(param_1 + 0x20) + 0x1f);
  DAT_02004f30 = DAT_02004f30 | 0x3800;
  sub_08001FA8(param_1 + 0x2c,0x808c3ad);
  *(int *)(param_1 + 0x34) = param_1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf7 | 1;
  iVar3 = 7;
  pcVar2 = (char *)(param_1 + 0x7f);
  do {
    *pcVar2 = cVar1 + -0x80;
    pcVar2 = pcVar2 + -1;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0808C328(param_1);
  return in_lr;
}

