// sub_080329CC at 0x080329CC (thumb)

undefined4 sub_080329CC(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (((*(byte *)(DAT_0203063c + 0x28) & 1) == 0) ||
     (((((*(byte *)(DAT_0203063c + 0x28) & 2) == 0 && (*(char *)(param_1 + 0x231) == '\0')) &&
       (*(char *)(param_1 + 0xb4) != '(')) && (*(char *)(param_1 + 0xb5) != '(')))) {
    DAT_02030108 = DAT_02030108 & 0x7f;
    DAT_02037114 = DAT_02037114 & 0x7f;
    DAT_02037168 = DAT_02037168 & 0x7f;
  }
  else {
    DAT_02030108 = DAT_02030108 | 0x80;
    DAT_02037114 = DAT_02037114 | 0x80;
    DAT_02037168 = DAT_02037168 | 0x80;
  }
  if (((*(byte *)(DAT_0203063c + 0x29) & 1) == 0) ||
     ((((*(byte *)(DAT_0203063c + 0x29) & 2) == 0 && (*(char *)(param_1 + 0x231) == '\0')) &&
      ((*(char *)(param_1 + 0xb4) != ')' && (*(char *)(param_1 + 0xb5) != ')')))))) {
    bVar1 = DAT_02030108 & 0xdf;
  }
  else {
    bVar1 = DAT_02030108 | 0x20;
  }
  if (((*(byte *)(DAT_0203063c + 0x1b) & 1) == 0) ||
     ((((*(byte *)(DAT_0203063c + 0x1b) & 2) == 0 && (*(char *)(param_1 + 0x231) == '\0')) &&
      ((*(char *)(param_1 + 0xb4) != '\x1b' && (*(char *)(param_1 + 0xb5) != '\x1b')))))) {
    DAT_02030108 = bVar1 & 0xfe;
  }
  else {
    DAT_02030108 = bVar1 | 1;
  }
  return in_lr;
}

