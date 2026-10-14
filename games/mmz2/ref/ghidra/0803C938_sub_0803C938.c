// sub_0803C938 at 0x0803C938 (thumb)

undefined8 sub_0803C938(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((((*(byte *)(param_2 + 0xd) < 5) && (2 < *(byte *)(param_2 + 0x176))) &&
      (*(char *)(param_2 + 0x2b6) == '\x03')) && (param_1 == *(int *)(param_2 + 0x2c))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}

