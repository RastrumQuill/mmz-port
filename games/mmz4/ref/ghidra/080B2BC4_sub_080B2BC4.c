// sub_080B2BC4 at 0x080B2BC4 (thumb)

undefined4 sub_080B2BC4(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb6) == '\0') {
    sub_08128884(param_1,*(undefined4 *)(&DAT_088601ac + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    sub_080B3374(param_1);
  }
  if ((*(int *)(param_1 + 0x2c) == 0) || (*(char *)(param_1 + 0xd) == '\x02')) {
    cVar1 = sub_080B3448(param_1);
    if (cVar1 != '\0') {
      sub_080E6230(param_1 + 0x54,0,*(byte *)(param_1 + 10) >> 4 & 1);
      *(undefined *)(param_1 + 0x13) = 0x1e;
    }
    sub_0801CFF0(param_1);
  }
  return in_lr;
}

