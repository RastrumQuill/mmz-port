// sub_080BA40C at 0x080BA40C (thumb)

undefined8 sub_080BA40C(undefined4 *param_1,undefined param_2,ushort param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_0203062c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x20;
    *(undefined4 *)(iVar1 + 0x14) = 0x80ba571;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = param_2;
    *(undefined *)(iVar1 + 0x11) = 4;
    *(ushort *)(iVar1 + 0x80) = param_3 & 0xff;
    *(undefined4 *)(iVar1 + 0x54) = *param_1;
    *(undefined4 *)(iVar1 + 0x58) = param_1[1];
  }
  return CONCAT44(in_lr,iVar1);
}

