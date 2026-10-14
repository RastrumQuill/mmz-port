// sub_08014388 at 0x08014388 (thumb)

undefined4 sub_08014388(int param_1)

{
  short sVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar2 = *(uint *)(param_1 + 0x5c);
    (&DAT_020023c4)[(uVar2 << 0x10) >> 0x14] =
         (ushort)*(undefined4 *)(param_1 + 0x60) | (ushort)*(undefined4 *)(param_1 + 100) | 0x44;
    sub_08004340(uVar2 & 0xff,&DAT_085222a0,0x61,0,0);
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(int *)(param_1 + 0x34) < 0x350) {
    sVar1 = *(short *)(param_1 + 0x10) + 1;
  }
  else {
    sVar1 = *(short *)(param_1 + 0x10) + -1;
  }
  *(short *)(param_1 + 0x10) = sVar1;
  return in_lr;
}

