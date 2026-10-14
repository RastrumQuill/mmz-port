// sub_0802516C at 0x0802516C (thumb)

undefined4 sub_0802516C(int param_1)

{
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0x176) < 3) {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0xf) = 0x10;
      if (*(char *)(param_1 + 0x180) == '\0') {
        sub_0801EA38(param_1,0,0,1);
      }
      else {
        sub_0801E9FC(param_1,1);
      }
    }
  }
  else {
    *(undefined *)(param_1 + 0xf) = 0x10;
  }
  sub_080251C0(param_1);
  return in_lr;
}

