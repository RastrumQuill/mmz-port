// sub_080142BC at 0x080142BC (thumb)

undefined4 sub_080142BC(int param_1)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar2 = *(uint *)(param_1 + 0x5c);
    uVar3 = (uVar2 << 0x10) >> 0x14;
    (&DAT_020023c4)[uVar3] =
         (ushort)*(undefined4 *)(param_1 + 0x60) | (ushort)*(undefined4 *)(param_1 + 100) | 0x44;
    (&DAT_020023cc)[uVar3] = 0;
    sub_08004340(uVar2 & 0xff,&DAT_085222a0,0x62,0,0);
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(int *)(param_1 + 0x34) < 0x350) {
    sVar1 = *(short *)(param_1 + 0x10) + -1;
  }
  else {
    sVar1 = *(short *)(param_1 + 0x10) + 1;
  }
  *(short *)(param_1 + 0x10) = sVar1;
  return in_lr;
}

