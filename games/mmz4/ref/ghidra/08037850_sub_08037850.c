// sub_08037850 at 0x08037850 (thumb)

undefined4 sub_08037850(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 0x153) = *(byte *)(param_1 + 0x153) | 6;
  if ((byte)(*(char *)(param_1 + 0x101) - 1U) < 3) {
    if (*(char *)(param_1 + 0x157) == '\0') {
      *(undefined *)(param_1 + 0x150) = 9;
    }
    else {
      *(char *)(param_1 + 0x101) = '\x04';
      *(undefined *)(param_1 + 0x102) = 0;
    }
  }
  sub_08128884(param_1,*(undefined4 *)(&DAT_0884fdd8 + (uint)*(byte *)(param_1 + 0x101) * 4));
  return in_lr;
}

