// sub_080E7EF0 at 0x080E7EF0 (thumb)

undefined8
sub_080E7EF0(undefined4 param_1,undefined param_2,undefined param_3,undefined2 param_4,
            undefined4 param_5,undefined4 param_6,undefined param_7)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_02030640);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 0x10;
    *(undefined *)(iVar1 + 9) = 0xd;
    *(undefined4 *)(iVar1 + 0x14) = 0x80e7fe9;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined4 *)(iVar1 + 0x28) = param_1;
    *(undefined *)(iVar1 + 0x10) = param_2;
    *(undefined *)(iVar1 + 0x11) = param_3;
    *(undefined4 *)(iVar1 + 0x54) = param_5;
    *(undefined4 *)(iVar1 + 0x58) = param_6;
    *(undefined2 *)(iVar1 + 0x78) = param_4;
    *(undefined *)(iVar1 + 0x7d) = param_7;
    *(undefined *)(iVar1 + 0x7f) = 0;
  }
  return CONCAT44(in_lr,iVar1);
}

