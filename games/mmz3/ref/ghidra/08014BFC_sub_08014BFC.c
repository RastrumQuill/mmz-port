// sub_08014BFC at 0x08014BFC (thumb)

undefined4 sub_08014BFC(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar1 = *(uint *)(param_1 + 0x5c);
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar2 = (uVar1 << 0x10) >> 0x14;
    (&DAT_020023c4)[uVar2] =
         (ushort)*(undefined4 *)(param_1 + 0x60) | (ushort)*(undefined4 *)(param_1 + 100) | 0x44;
    (&DAT_020023cc)[uVar2] = 0;
    sub_08004340(uVar1 & 0xff,&DAT_085222a0,0x5c,0,0);
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (DAT_0202f4a5 != '\0') {
    *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + 1;
  }
  return in_lr;
}

