// sub_080217FC at 0x080217FC (thumb)

undefined4 sub_080217FC(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 0;
    sub_08018C20(param_1,0x26,1,1);
  }
  sub_080217D4(param_1);
  return in_lr;
}

