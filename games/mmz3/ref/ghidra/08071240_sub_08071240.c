// sub_08071240 at 0x08071240 (thumb)

undefined8
sub_08071240(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined param_5)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_080070D8(DAT_020305e8);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 0x18;
    *(undefined *)(iVar1 + 9) = 0x11;
    *(undefined4 *)(iVar1 + 0x14) = 0x8071379;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
    *(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar1 + 0x1c);
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined *)(iVar1 + 0x11) = param_5;
    *(undefined4 *)(iVar1 + 0x54) = param_3;
    *(undefined4 *)(iVar1 + 0x58) = param_4;
    if (*(int *)(param_2 + 0x2c) == 0) {
      *(int *)(iVar1 + 0x2c) = param_2;
      *(undefined *)(iVar1 + 0xb8) = 0;
      *(int *)(param_2 + 0x2c) = iVar1;
    }
    else {
      *(undefined4 *)(iVar1 + 0x2c) = 0;
      *(undefined *)(iVar1 + 0xb8) = 1;
    }
    *(undefined4 *)(iVar1 + 0xb4) = param_1;
  }
  return CONCAT44(in_lr,iVar1);
}

