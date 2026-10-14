// sub_0802A3D4 at 0x0802A3D4 (thumb)

undefined4 sub_0802A3D4(int param_1)

{
  undefined4 in_lr;
  
  sub_08025F54();
  if (*(char *)(param_1 + 0xd) == '\x01') {
    if (*(char *)(*(int *)(param_1 + 0x2c) + 0x73) != '\x03') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 5;
    sub_0801E9FC(param_1,0x32);
  }
  *(byte *)(param_1 + 0x181) = *(byte *)(param_1 + 0x181) & 0x7f;
  return in_lr;
}

