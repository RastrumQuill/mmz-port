// sub_0802E938 at 0x0802E938 (thumb)

undefined4 sub_0802E938(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 1;
    sub_0801E9FC(param_1,0x72);
  }
  return in_lr;
}

