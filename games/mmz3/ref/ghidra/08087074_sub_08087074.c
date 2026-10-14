// sub_08087074 at 0x08087074 (thumb)

undefined4 sub_08087074(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,0x6703);
    sub_080177F4(param_1);
    sub_08007390(param_1 + 0x74,&DAT_08364ee8);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

