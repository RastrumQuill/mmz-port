// sub_080DF460 at 0x080DF460 (thumb)

undefined4 sub_080DF460(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    sub_0801CF00(param_1,0x6e0f);
    sub_080DF30C(param_1,*(undefined *)(param_1 + 0x11));
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_080DF39C(param_1);
  return in_lr;
}

