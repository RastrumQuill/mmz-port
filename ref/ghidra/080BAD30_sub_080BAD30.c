// sub_080BAD30 at 0x080BAD30 (thumb)

undefined4 sub_080BAD30(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xd) = 2;
  sub_080BACB4(param_1);
  *(bool *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) != '\x02';
  return in_lr;
}

