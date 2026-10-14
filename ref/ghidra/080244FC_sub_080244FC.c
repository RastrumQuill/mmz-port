// sub_080244FC at 0x080244FC (thumb)

undefined4 sub_080244FC(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x73) == '\x03') {
    sub_08018534(param_1);
    sub_080186BC(param_1);
  }
  return in_lr;
}

