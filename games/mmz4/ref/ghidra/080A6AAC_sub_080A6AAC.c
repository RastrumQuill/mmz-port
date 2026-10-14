// sub_080A6AAC at 0x080A6AAC (thumb)

undefined4 sub_080A6AAC(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    sub_080A6B14(param_1);
  }
  else {
    if (*(char *)(param_1 + 0xe) == '\0') {
      if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
        *(undefined *)(param_1 + 0xd) = 0;
      }
      else {
        *(undefined *)(param_1 + 0xd) = 1;
      }
      *(uint *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    sub_08128884(param_1,*(undefined4 *)(&DAT_0885f05c + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  return in_lr;
}

