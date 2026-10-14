// sub_0806A15C at 0x0806A15C (thumb)

undefined4 sub_0806A15C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xe) = 1;
  }
  sub_080128D4(param_1);
  return in_lr;
}

