// sub_080696D0 at 0x080696D0 (thumb)

undefined4 sub_080696D0(undefined4 param_1,undefined4 param_2,undefined param_3,char param_4)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = sub_0800710C(DAT_020305e8);
  if (iVar2 != 0) {
    *(undefined *)(iVar2 + 0x25) = 0x18;
    *(undefined *)(iVar2 + 9) = 7;
    *(undefined4 *)(iVar2 + 0x14) = 0x80698c9;
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined *)(iVar2 + 0x22) = 0;
    *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
    *(undefined *)(iVar2 + 0x1d) = *(undefined *)(iVar2 + 0x1c);
    *(undefined4 *)(iVar2 + 0x54) = param_1;
    *(undefined4 *)(iVar2 + 0x58) = param_2;
    *(undefined *)(iVar2 + 0x12) = param_3;
    if (param_4 == '\0') {
      uVar1 = 2;
    }
    else {
      uVar1 = 5;
    }
    *(undefined *)(iVar2 + 0x10) = uVar1;
  }
  return in_lr;
}

