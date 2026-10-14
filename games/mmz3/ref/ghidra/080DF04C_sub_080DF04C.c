// sub_080DF04C at 0x080DF04C (thumb)

undefined8
sub_080DF04C(undefined4 param_1,undefined4 param_2,undefined param_3,undefined param_4,
            undefined param_5)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_02030630);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 0x1e;
    *(undefined *)(iVar1 + 9) = 0x32;
    *(undefined4 *)(iVar1 + 0x14) = 0x80df11d;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
    *(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar1 + 0x1c);
    *(undefined *)(iVar1 + 0x10) = param_5;
    *(undefined *)(iVar1 + 0x12) = param_3;
    *(undefined *)(iVar1 + 0x13) = param_4;
    *(undefined4 *)(iVar1 + 0x54) = param_1;
    *(undefined4 *)(iVar1 + 0x58) = param_2;
    *(undefined4 *)(iVar1 + 100) = param_1;
    *(undefined4 *)(iVar1 + 0x68) = param_2;
  }
  return CONCAT44(in_lr,iVar1);
}

