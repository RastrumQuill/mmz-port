// sub_0803A634 at 0x0803A634 (thumb)

undefined4 sub_0803A634(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x13) == '\r') {
    *(undefined *)(param_1 + 0xd) = 2;
    sub_0803A688(param_1);
  }
  else {
    *(undefined *)(param_1 + 0xd) = 1;
    sub_0803A658(param_1);
  }
  return in_lr;
}

