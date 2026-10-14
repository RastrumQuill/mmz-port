// sub_080E1E2C at 0x080E1E2C (thumb)

undefined4 sub_080E1E2C(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = *(undefined4 *)(*(int *)(param_1 + 0xb4) + 0x54);
  local_c = *(undefined4 *)(*(int *)(param_1 + 0xb4) + 0x58);
  cVar1 = sub_080E1094(param_1 + 0xbc,param_1 + 100,&local_10,param_1 + 0xba,0xa0);
  if (cVar1 != '\0') {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  return in_lr;
}

