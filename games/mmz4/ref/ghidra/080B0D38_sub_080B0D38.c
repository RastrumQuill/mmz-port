// sub_080B0D38 at 0x080B0D38 (thumb)

undefined4 sub_080B0D38(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if ((iVar1 != 0) && (*(byte *)(iVar1 + 0xc) < 2)) {
    *(undefined *)(iVar1 + 0xc2) = 0xff;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  sub_0807F804(param_1);
  return in_lr;
}

