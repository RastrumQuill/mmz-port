// sub_0808C94C at 0x0808C94C (thumb)

undefined4 sub_0808C94C(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08012580(param_1);
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
    sub_08006E08(param_1 + 0x74,&DAT_08341cc0);
    sub_080127E4(param_1,0x7501);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar2 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  sub_0808BC04(param_1);
  cVar1 = sub_0808BB60(param_1);
  if (cVar1 != '\0') {
    sub_0808BBE0(param_1);
    *(undefined *)(param_1 + 0xbd) = 0;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 2;
  }
  sub_080128D4(param_1);
  return in_lr;
}

