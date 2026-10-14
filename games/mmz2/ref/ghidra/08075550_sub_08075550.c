// sub_08075550 at 0x08075550 (thumb)

undefined4 sub_08075550(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_08075958();
  }
  else if (*(char *)(param_1 + 0x10) == '\x01') {
    sub_08075A80();
  }
  else {
    sub_08075B24();
  }
  return in_lr;
}

