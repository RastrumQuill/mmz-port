// sub_080ABE68 at 0x080ABE68 (thumb)

undefined8 sub_080ABE68(undefined4 *param_1,undefined param_2,uint param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_020305f8);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 8;
    *(undefined *)(iVar1 + 9) = 0x21;
    *(undefined4 *)(iVar1 + 0x14) = 0x80abec9;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = 1;
    *(undefined4 *)(iVar1 + 0x54) = *param_1;
    *(undefined4 *)(iVar1 + 0x58) = param_1[1];
    *(undefined *)(iVar1 + 0x11) = param_2;
    *(uint *)(iVar1 + 0xbc) = param_3 & 0xffff;
  }
  return CONCAT44(in_lr,iVar1);
}

