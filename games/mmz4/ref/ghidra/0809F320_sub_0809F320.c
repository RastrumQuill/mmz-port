// sub_0809F320 at 0x0809F320 (thumb)

undefined4 sub_0809F320(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  sub_0801CC9C();
  sub_0801CEEC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0xaa07);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x10;
  *(undefined *)(param_1 + 0x1d) = *(undefined *)(iVar2 + 0x1c);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0x80;
    uVar1 = 0xfffffffe;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0xffffff80;
    uVar1 = 2;
  }
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined *)(param_1 + 0x12) = 0;
  return in_lr;
}

