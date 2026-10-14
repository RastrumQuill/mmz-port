// sub_080AC368 at 0x080AC368 (thumb)

undefined8
sub_080AC368(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_020305f8);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 8;
    *(undefined *)(iVar1 + 9) = 0x22;
    *(undefined4 *)(iVar1 + 0x14) = 0x80ac499;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    uVar2 = param_1[1];
    *(undefined4 *)(iVar1 + 0x54) = *param_1;
    *(undefined4 *)(iVar1 + 0x58) = uVar2;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined *)(iVar1 + 0x11) = 1;
    *(undefined4 *)(iVar1 + 0xb8) = param_2;
    *(undefined4 *)(iVar1 + 0xbc) = param_3;
    *(undefined4 *)(iVar1 + 0x28) = param_4;
  }
  return CONCAT44(in_lr,iVar1);
}

