// sub_080C7CD0 at 0x080C7CD0 (thumb)

undefined8 sub_080C7CD0(undefined4 *param_1,undefined param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_0203062c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x4d;
    *(undefined4 *)(iVar1 + 0x14) = 0x80c7dfd;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = 2;
    *(undefined *)(iVar1 + 0x11) = param_2;
    *(undefined4 *)(iVar1 + 0x54) = *param_1;
    *(undefined4 *)(iVar1 + 0x58) = param_1[1];
  }
  return CONCAT44(in_lr,iVar1);
}

