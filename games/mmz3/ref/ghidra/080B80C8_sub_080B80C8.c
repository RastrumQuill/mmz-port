// sub_080B80C8 at 0x080B80C8 (thumb)

undefined4
sub_080B80C8(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5,undefined param_6,undefined param_7)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_0203062c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x17;
    *(undefined4 *)(iVar1 + 0x14) = 0x80b8215;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = 4;
    *(undefined4 *)(iVar1 + 0x28) = param_1;
    *(undefined4 *)(iVar1 + 0x74) = param_5;
    *(undefined4 *)(iVar1 + 0x54) = *param_2;
    *(undefined4 *)(iVar1 + 0x58) = param_2[1];
    *(undefined4 *)(iVar1 + 0x5c) = *param_3;
    *(undefined4 *)(iVar1 + 0x60) = param_3[1];
    *(undefined4 *)(iVar1 + 0x68) = param_4;
    *(undefined *)(iVar1 + 0x12) = param_6;
    *(undefined *)(iVar1 + 0x25) = param_7;
    *(undefined *)(iVar1 + 0x78) = 1;
    *(undefined *)(iVar1 + 0x79) = 0;
  }
  return in_lr;
}

