// sub_08006A30 at 0x08006A30 (thumb)

undefined4 sub_08006A30(uint param_1)

{
  undefined4 in_lr;
  
  if ((&DAT_02000990)[param_1 & 0xffff] ==
      *(char *)((int)&DAT_08128c10 + (((param_1 & 0xffff) + 0x18) * 0x1000000 >> 0x17))) {
    (&DAT_02000990)[param_1 & 0xffff] = '\0';
    DAT_02000aa8 = 1;
  }
  return in_lr;
}

