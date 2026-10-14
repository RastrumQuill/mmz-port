// sub_080C4A2C at 0x080C4A2C (thumb)

undefined8
sub_080C4A2C(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined param_4)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_0203062c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x45;
    *(undefined4 *)(iVar1 + 0x14) = 0x80c4bad;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = 3;
    *(undefined *)(iVar1 + 0x11) = param_4;
    *(undefined4 *)(iVar1 + 100) = *param_2;
    *(undefined4 *)(iVar1 + 0x68) = param_2[1];
    *(undefined4 *)(iVar1 + 0x74) = *param_3;
    *(undefined4 *)(iVar1 + 0x78) = param_3[1];
    *(undefined4 *)(iVar1 + 0x28) = param_1;
  }
  return CONCAT44(in_lr,iVar1);
}

