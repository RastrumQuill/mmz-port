// sub_0800D84C at 0x0800D84C (thumb)

undefined4 sub_0800D84C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    DAT_02022660._0_2_ = sub_08001EAC(0xd7);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

