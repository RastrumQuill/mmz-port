// sub_08034628 at 0x08034628 (thumb)

undefined4 sub_08034628(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 0x153) = *(byte *)(param_1 + 0x153) | 6;
  if ((byte)(*(char *)(param_1 + 0x101) - 1U) < 3) {
    if (*(byte *)(param_1 + 0x157) == 4) {
      *(char *)(param_1 + 0x101) = '\x04';
      *(undefined *)(param_1 + 0x102) = 0;
    }
    else {
      *(undefined *)(param_1 + 0x150) = (&DAT_0884fbb4)[*(byte *)(param_1 + 0x157)];
    }
  }
  sub_08128884(param_1,*(undefined4 *)(&DAT_0884fba0 + (uint)*(byte *)(param_1 + 0x101) * 4));
  return in_lr;
}

