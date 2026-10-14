// sub_08038794 at 0x08038794 (thumb)

undefined4 sub_08038794(int param_1)

{
  undefined4 in_lr;
  
  sub_080177F4();
  sub_080073A0(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)(&DAT_0835ca10 + (uint)*(byte *)(param_1 + 0x10) * 4)),
               *(undefined *)(param_1 + 0xc1),*(undefined *)(param_1 + 0xc0),
               *(undefined *)(param_1 + 0xc2),0xffffffff);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0835b5d0)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

