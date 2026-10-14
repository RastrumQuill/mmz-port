// sub_0802FA10 at 0x0802FA10 (thumb)

undefined4 sub_0802FA10(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 1;
    sub_0801E9FC(param_1,0x76);
  }
  return in_lr;
}

