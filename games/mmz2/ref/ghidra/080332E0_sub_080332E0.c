// sub_080332E0 at 0x080332E0 (thumb)

undefined4 sub_080332E0(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xf) = 1;
  if (*(char *)(param_1 + 0x17f) != '\x06') {
    sub_0801E9FC(param_1,6);
  }
  return in_lr;
}

