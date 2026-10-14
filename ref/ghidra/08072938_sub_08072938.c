// sub_08072938 at 0x08072938 (thumb)

undefined4 sub_08072938(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_08072A7C(param_1);
  }
  else {
    sub_08072B8C(param_1);
  }
  return in_lr;
}

