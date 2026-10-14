// sub_080BE7C4 at 0x080BE7C4 (thumb)

undefined8 sub_080BE7C4(undefined4 *param_1,undefined param_2,undefined2 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_0203062c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x2e;
    *(undefined4 *)(iVar1 + 0x14) = 0x80be8f1;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = param_2;
    *(undefined *)(iVar1 + 0x11) = 2;
    *(undefined4 *)(iVar1 + 0x54) = *param_1;
    *(undefined4 *)(iVar1 + 0x58) = param_1[1];
    *(undefined2 *)(iVar1 + 0x74) = param_3;
    *(undefined4 *)(iVar1 + 0x78) = param_4;
  }
  return CONCAT44(in_lr,iVar1);
}

