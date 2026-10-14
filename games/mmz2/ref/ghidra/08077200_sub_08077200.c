// sub_08077200 at 0x08077200 (thumb)

undefined4 sub_08077200(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    uVar1 = sub_0800958C(param_2,param_3);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 100);
  }
  return uVar1;
}

