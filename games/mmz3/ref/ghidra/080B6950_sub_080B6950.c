// sub_080B6950 at 0x080B6950 (thumb)

undefined8 sub_080B6950(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_0203062c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x13;
    *(undefined4 *)(iVar1 + 0x14) = 0x80b6a11;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    uVar2 = param_1[1];
    *(undefined4 *)(iVar1 + 0x54) = *param_1;
    *(undefined4 *)(iVar1 + 0x58) = uVar2;
    uVar2 = param_2[1];
    *(undefined4 *)(iVar1 + 0x5c) = *param_2;
    *(undefined4 *)(iVar1 + 0x60) = uVar2;
    *(undefined *)(iVar1 + 0x10) = 0;
  }
  return CONCAT44(in_lr,iVar1);
}

