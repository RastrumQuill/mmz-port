// sub_080DDEA0 at 0x080DDEA0 (thumb)

undefined4 sub_080DDEA0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = param_1 + 0x54;
  sub_080D4898(iVar1,&DAT_0886037c,0,*(byte *)(param_1 + 10) & 0x10);
  if (*(char *)(param_1 + 0x11) == '\0') {
    sub_080D4898(iVar1,&DAT_08860398,0,*(byte *)(param_1 + 10) & 0x10);
  }
  else {
    sub_080D4898(iVar1,&DAT_088603d0,0,*(byte *)(param_1 + 10) & 0x10);
  }
  sub_080D0894(1,param_1 + 0x54);
  sub_08002B10(0x2a);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

