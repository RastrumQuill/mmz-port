// sub_080DE7D4 at 0x080DE7D4 (thumb)

undefined8
sub_080DE7D4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined param_4,
            undefined param_5)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005500(DAT_0202ed9c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x33;
    *(undefined4 *)(iVar1 + 0x14) = 0x80de8d5;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined4 *)(iVar1 + 0x28) = param_1;
    *(undefined4 *)(iVar1 + 0x54) = param_2;
    *(undefined4 *)(iVar1 + 0x58) = param_3;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined *)(iVar1 + 0x11) = param_4;
    *(undefined *)(iVar1 + 0x12) = param_5;
  }
  return CONCAT44(in_lr,iVar1);
}

