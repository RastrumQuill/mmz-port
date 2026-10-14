// sub_08030E44 at 0x08030E44 (thumb)

undefined4 sub_08030E44(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x73) == '\x03') {
    sub_08035310(param_1);
    sub_08035488(param_1);
  }
  return in_lr;
}

