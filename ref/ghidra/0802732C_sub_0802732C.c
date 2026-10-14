// sub_0802732C at 0x0802732C (thumb)

undefined4 sub_0802732C(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((*(char *)(param_2 + 0x11) == '\x01') && (param_1 == *(int *)(param_2 + 0x24))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

