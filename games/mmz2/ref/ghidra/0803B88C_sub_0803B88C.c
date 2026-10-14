// sub_0803B88C at 0x0803B88C (thumb)

undefined8 sub_0803B88C(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_2 + 0xc) & 0xffff00) == 0x20000) && (*(char *)(param_2 + 0x2b6) == '\x01'))
     && (param_1 == *(int *)(param_2 + 0x2c))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}

