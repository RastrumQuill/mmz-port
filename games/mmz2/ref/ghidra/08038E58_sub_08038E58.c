// sub_08038E58 at 0x08038E58 (thumb)

undefined4 sub_08038E58(int param_1,int param_2)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\x02') {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + param_2;
  }
  return in_lr;
}

