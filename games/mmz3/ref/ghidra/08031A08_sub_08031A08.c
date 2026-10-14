// sub_08031A08 at 0x08031A08 (thumb)

undefined4 sub_08031A08(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xec) = 0;
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0xf) != '\x02') {
      sub_08017700(param_1,0x701);
      return in_lr;
    }
    uVar1 = 0x702;
  }
  else {
    if (*(char *)(param_1 + 0xf) != '\x03') {
      sub_080177CC(param_1,0x704,4,1);
      return in_lr;
    }
    uVar1 = 0x705;
  }
  sub_080177CC(param_1,uVar1,1,1);
  return in_lr;
}

