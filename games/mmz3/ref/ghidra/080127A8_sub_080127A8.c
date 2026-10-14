// sub_080127A8 at 0x080127A8 (thumb)

undefined4 sub_080127A8(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar1 = *(uint *)(param_1 + 0x5c);
    (&DAT_020023c4)[(uVar1 << 0x10) >> 0x14] = (ushort)*(undefined4 *)(param_1 + 100) | 0x47;
    sub_08004340(uVar1 & 0xff,&DAT_085222a0,0x4f,0,0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

