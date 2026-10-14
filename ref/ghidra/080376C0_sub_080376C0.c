// sub_080376C0 at 0x080376C0 (thumb)

undefined4 sub_080376C0(int param_1)

{
  undefined4 in_lr;
  
  sub_08038BAC();
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xf) = 2;
    sub_08038A5C(param_1,0xc);
  }
  return in_lr;
}

