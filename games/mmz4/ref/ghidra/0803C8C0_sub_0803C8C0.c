// sub_0803C8C0 at 0x0803C8C0 (thumb)

undefined4 sub_0803C8C0(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CFF0();
  sub_08005794(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)(&DAT_08851ad4 + (uint)*(byte *)(param_1 + 0x10) * 4)),
               *(undefined *)(param_1 + 0xc1),*(undefined *)(param_1 + 0xc0),
               *(undefined *)(param_1 + 0xc2),0xffffffff);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

