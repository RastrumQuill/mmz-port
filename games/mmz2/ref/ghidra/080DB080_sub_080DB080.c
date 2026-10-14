// sub_080DB080 at 0x080DB080 (thumb)

undefined4 sub_080DB080(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x28) + 4) == '\x02') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080DB0A0(param_1);
  }
  return in_lr;
}

