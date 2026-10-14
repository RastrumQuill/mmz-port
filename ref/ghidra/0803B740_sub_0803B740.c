// sub_0803B740 at 0x0803B740 (thumb)

undefined4 sub_0803B740(int param_1)

{
  undefined4 in_lr;
  undefined4 local_10;
  int local_c;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    local_10 = *(undefined4 *)(param_1 + 0x4c);
    local_c = *(int *)(param_1 + 0x50) + -0x3000;
    sub_08080348(param_1,&local_10);
    sub_08001EAC(0x46);
    sub_08029778(param_1,6);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080297C0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

