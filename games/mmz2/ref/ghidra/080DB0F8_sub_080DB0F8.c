// sub_080DB0F8 at 0x080DB0F8 (thumb)

undefined4 sub_080DB0F8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x28) + 4) != '\x02') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080DB028(param_1);
  }
  return in_lr;
}

