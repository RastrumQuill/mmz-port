// sub_0803C6EC at 0x0803C6EC (thumb)

undefined4 sub_0803C6EC(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0;
    sub_0803C9A8(param_1,0,0,0);
  }
  return in_lr;
}

