// sub_0802EB30 at 0x0802EB30 (thumb)

undefined4 sub_0802EB30(int param_1)

{
  undefined4 in_lr;
  
  if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
    if ((byte)(*(char *)(param_1 + 0xd) - 7U) < 2) {
      if (-1 < *(short *)(param_1 + 0xd4)) {
        sub_08001EE8();
        *(short *)(param_1 + 0xd4) = -1;
      }
      sub_08090770(param_1 + 0x4c,*(byte *)(param_1 + 10) >> 4 & 1);
    }
    *(undefined *)(param_1 + 0xd) = 0x19;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

