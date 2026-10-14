// sub_080AE80C at 0x080AE80C (thumb)

undefined8
sub_080AE80C(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined param_4)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_020305f8);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 8;
    *(undefined *)(iVar1 + 9) = 0x27;
    *(undefined4 *)(iVar1 + 0x14) = 0x80ae871;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = param_4;
    *(undefined *)(iVar1 + 0x11) = 0;
    *(undefined4 *)(iVar1 + 0x54) = *param_2;
    *(undefined4 *)(iVar1 + 0x58) = param_2[1];
    *(undefined4 *)(iVar1 + 100) = *param_3;
    *(undefined4 *)(iVar1 + 0x68) = param_3[1];
    *(undefined4 *)(iVar1 + 0x28) = param_1;
  }
  return CONCAT44(in_lr,iVar1);
}

