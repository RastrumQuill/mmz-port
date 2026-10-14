// sub_08028FBC at 0x08028FBC (thumb)

undefined8 sub_08028FBC(int param_1,int param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (((*(byte *)(param_2 + 0xbe) < 3) || (*(char *)(param_2 + 0x11) != '\x03')) ||
     (param_1 != *(int *)(param_2 + 0x24))) {
    uVar1 = 1;
  }
  else {
    if (*(byte *)(param_1 + 0x10) < 5) {
      uVar1 = sub_08028FF8(param_1);
    }
    else {
      uVar1 = sub_080290C0(param_1);
    }
    uVar1 = uVar1 & 0xff;
  }
  return CONCAT44(in_lr,uVar1);
}

