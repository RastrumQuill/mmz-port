// sub_0802C2F0 at 0x0802C2F0 (thumb)

undefined4 sub_0802C2F0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x71) != '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined *)(param_1 + 0x142) = 1;
    sub_08003AB0(&DAT_085d8b54,(uint)DAT_0202fbe6 * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d8b60,(DAT_0202f9e6 - 0xe) * 0x20 + 0x200);
    *(undefined *)(param_1 + 0xf) = 2;
  }
  return in_lr;
}

