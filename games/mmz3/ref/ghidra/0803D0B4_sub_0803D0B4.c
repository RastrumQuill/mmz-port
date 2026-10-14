// sub_0803D0B4 at 0x0803D0B4 (thumb)

undefined8 sub_0803D0B4(undefined4 param_1,undefined param_2,undefined param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_020305e0);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x10;
    *(undefined4 *)(iVar1 + 0x14) = 0x803d119;
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) & 0xbf;
    *(undefined *)(iVar1 + 0x25) = 0x10;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 1;
    *(undefined *)(iVar1 + 0x10) = param_3;
    *(undefined *)(iVar1 + 0x11) = param_2;
    *(undefined4 *)(iVar1 + 0x28) = param_1;
  }
  return CONCAT44(in_lr,iVar1);
}

