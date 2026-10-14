// sub_08026E44 at 0x08026E44 (thumb)

undefined4 sub_08026E44(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0x10) = 6;
    *(undefined *)(param_1 + 0xd) = 1;
    sub_08025C94(param_1,0x200,4,1);
    *(undefined **)(param_1 + 0x5c) = &DAT_082aaa64;
    sub_08026B4C(param_1);
  }
  return in_lr;
}

