// sub_0807D4C8 at 0x0807D4C8 (thumb)

undefined4 sub_0807D4C8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x5802);
    sub_080128D4(param_1);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_08012ACC(param_1);
  return in_lr;
}

