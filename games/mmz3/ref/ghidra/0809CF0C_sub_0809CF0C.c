// sub_0809CF0C at 0x0809CF0C (thumb)

undefined8 sub_0809CF0C(undefined4 param_1,undefined4 param_2,undefined param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_020305f8);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 8;
    *(undefined *)(iVar1 + 9) = 4;
    *(undefined4 *)(iVar1 + 0x14) = 0x809cf79;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = 1;
    *(undefined4 *)(iVar1 + 0x54) = param_1;
    *(undefined4 *)(iVar1 + 0x58) = param_2;
    *(undefined *)(iVar1 + 0xb4) = param_3;
    *(undefined4 *)(iVar1 + 0xb8) = 0x400;
    *(undefined4 *)(iVar1 + 0xbc) = 1;
    *(undefined4 *)(iVar1 + 0x28) = 0;
  }
  return CONCAT44(in_lr,iVar1);
}

