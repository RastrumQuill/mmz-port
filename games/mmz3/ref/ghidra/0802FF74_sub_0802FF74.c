// sub_0802FF74 at 0x0802FF74 (thumb)

undefined4 sub_0802FF74(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\x01') {
    sub_080177CC(param_1,0x403,2,1);
  }
  else {
    sub_080177CC(param_1,0x404,2,1);
  }
  *(undefined *)(param_1 + 0xec) = 0;
  return in_lr;
}

