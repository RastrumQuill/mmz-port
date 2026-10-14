// sub_080AAA70 at 0x080AAA70 (thumb)

undefined8 sub_080AAA70(int param_1,char param_2,undefined param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08006B84(DAT_0202f07c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 8;
    *(undefined *)(iVar1 + 9) = 0x38;
    *(undefined4 *)(iVar1 + 0x14) = 0x80aaad1;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(int *)(iVar1 + 0x28) = param_1;
    *(char *)(iVar1 + 0x10) = param_2;
    *(undefined *)(iVar1 + 0x11) = param_3;
    if (param_2 == '\x01') {
      *(short *)(param_1 + 0xc2) = *(short *)(param_1 + 0xc2) + 1;
    }
  }
  return CONCAT44(in_lr,iVar1);
}

