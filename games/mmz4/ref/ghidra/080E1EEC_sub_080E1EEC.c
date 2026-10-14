// sub_080E1EEC at 0x080E1EEC (thumb)

undefined4 sub_080E1EEC(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x74) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    cVar1 = '\x01';
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    if (2 < *(byte *)(param_1 + 0x11)) goto LAB_080e1f18;
    cVar1 = '\0';
  }
  *(char *)(param_1 + 0x74) = cVar1;
LAB_080e1f18:
  sub_080E208C(param_1);
  cVar1 = sub_080E2174(param_1);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
  }
  sub_0801CFF0(param_1);
  return in_lr;
}

