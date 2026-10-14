// sub_08091AAC at 0x08091AAC (thumb)

undefined4 sub_08091AAC(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0xbe) == '\x01') {
      sub_0801CF00(param_1,0x3c11);
      sub_08005784(param_1 + 0x74,&DAT_0885cd40);
    }
    else {
      sub_0801CF00(param_1,0x3c15);
      sub_08005784(param_1 + 0x74,&DAT_0885cd70);
    }
    sub_08090C58(param_1);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  return in_lr;
}

