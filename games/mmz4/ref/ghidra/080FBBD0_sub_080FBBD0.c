// sub_080FBBD0 at 0x080FBBD0 (thumb)

undefined4 sub_080FBBD0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    iVar1 = param_1 + 0x54;
    sub_080D4898(iVar1,&DAT_088677ec,0,*(byte *)(param_1 + 10) & 0x10);
    sub_080D4898(iVar1,&DAT_08867808,0,*(byte *)(param_1 + 10) & 0x10);
    sub_080D4898(iVar1,&DAT_08867824,0,*(byte *)(param_1 + 10) & 0x10);
  }
  else {
    iVar1 = param_1 + 0x54;
    sub_080D4898(iVar1,&DAT_08867840,0,*(byte *)(param_1 + 10) & 0x10);
    sub_080D4898(iVar1,&DAT_0886785c,0,*(byte *)(param_1 + 10) & 0x10);
    sub_080D4898(iVar1,&DAT_08867878,0,*(byte *)(param_1 + 10) & 0x10);
  }
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

