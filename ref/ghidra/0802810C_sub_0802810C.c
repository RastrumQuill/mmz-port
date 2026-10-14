// sub_0802810C at 0x0802810C (thumb)

undefined8 sub_0802810C(int param_1,int param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (((*(byte *)(param_2 + 0xbe) < 3) || (*(char *)(param_2 + 0x11) != '\x02')) ||
     (param_1 != *(int *)(param_2 + 0x24))) {
    uVar1 = 1;
  }
  else {
    if (*(byte *)(param_1 + 0x10) < 0x20) {
      uVar1 = sub_08028148(param_1);
    }
    else {
      uVar1 = sub_080281F0(param_1);
    }
    uVar1 = uVar1 & 0xff;
  }
  return CONCAT44(in_lr,uVar1);
}

