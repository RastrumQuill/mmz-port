// sub_080B1354 at 0x080B1354 (thumb)

undefined8 sub_080B1354(undefined4 *param_1,undefined4 *param_2,undefined param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_020305f8);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 8;
    *(undefined *)(iVar1 + 9) = 0x2d;
    *(undefined4 *)(iVar1 + 0x14) = 0x80b14c9;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined *)(iVar1 + 0x11) = param_3;
    *(undefined4 *)(iVar1 + 0x54) = *param_1;
    *(undefined4 *)(iVar1 + 0x58) = param_1[1];
    *(undefined4 *)(iVar1 + 100) = *param_2;
    *(undefined4 *)(iVar1 + 0x68) = param_2[1];
  }
  return CONCAT44(in_lr,iVar1);
}

