// sub_0802A430 at 0x0802A430 (thumb)

undefined4 sub_0802A430(int param_1)

{
  undefined4 in_lr;
  
  sub_08025F54();
  if ((*(char *)(param_1 + 0xd) == '\x01') && (*(char *)(param_1 + 0x73) == '\x03')) {
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 0x102;
    sub_08035238(param_1);
    sub_0803543C(param_1);
  }
  return in_lr;
}

