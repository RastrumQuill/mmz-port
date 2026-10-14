// sub_080B5474 at 0x080B5474 (thumb)

undefined4 sub_080B5474(int param_1)

{
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x8c) & 1) != 0) && ((*(byte *)(param_1 + 0x97) & 0xf0) == 0x30)) {
    if (*(char *)(param_1 + 0xb4) == '\0') {
      *(char *)(param_1 + 0xb4) = '\x01';
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  sub_08128884(param_1,*(undefined4 *)(&DAT_088604d0 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

