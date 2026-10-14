// sub_0805F6E4 at 0x0805F6E4 (thumb)

undefined4 sub_0805F6E4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined2 *)(param_1 + 0xe) = 2;
    sub_08060768(param_1,0);
  }
  return in_lr;
}

