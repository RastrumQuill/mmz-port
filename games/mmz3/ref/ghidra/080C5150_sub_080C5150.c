// sub_080C5150 at 0x080C5150 (thumb)

undefined8
sub_080C5150(undefined param_1,undefined param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_0203062c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x46;
    *(undefined4 *)(iVar1 + 0x14) = 0x80c51b1;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = param_1;
    *(undefined *)(iVar1 + 0x11) = param_2;
    *(undefined4 *)(iVar1 + 0x54) = param_3;
    *(undefined4 *)(iVar1 + 0x58) = param_4;
    *(undefined4 *)(iVar1 + 0x5c) = param_5;
    *(undefined4 *)(iVar1 + 0x60) = param_6;
  }
  return CONCAT44(in_lr,iVar1);
}

