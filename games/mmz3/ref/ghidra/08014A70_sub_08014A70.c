// sub_08014A70 at 0x08014A70 (thumb)

undefined4 sub_08014A70(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  uVar2 = *(uint *)(param_1 + 0x5c);
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar4 = (uVar2 << 0x10) >> 0x14;
    (&DAT_020023c4)[uVar4] =
         (ushort)*(undefined4 *)(param_1 + 0x60) | (ushort)*(undefined4 *)(param_1 + 100) | 0x8044;
    (&DAT_020023cc)[uVar4] = 0;
    sub_08004340(uVar2 & 0xff,&DAT_085222a0,0x5a,0,0);
    sub_080043C4(((ushort)(&DAT_020023c4)[uVar4] & 0x1f00) * 8 + 0x6000800,&DAT_085222a0,0x5a,0,0);
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(undefined2 *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((DAT_0202f4a5 != '\0') && (*(ushort *)(param_1 + 0x12) < 0x800)) {
    *(ushort *)(param_1 + 0x12) = *(ushort *)(param_1 + 0x12) + 8;
  }
  iVar3 = (uint)(*(ushort *)(param_1 + 0x12) >> 8) + (uint)*(ushort *)(param_1 + 0x10);
  *(short *)(param_1 + 0x10) = (short)iVar3;
  cVar1 = *(char *)(param_1 + 0xe);
  if ((cVar1 == '\x01') && (0x14ff0000 < (uint)(iVar3 * 0x10000))) {
    uVar5 = 0x5b;
  }
  else {
    if ((cVar1 == '\x02') && (0x15ff < *(ushort *)(param_1 + 0x10))) {
      sub_080043C4(((ushort)(&DAT_020023c4)[(uVar2 & 0xffff) >> 4] & 0x1f00) * 8 + 0x6000800,
                   &DAT_085222a0,0x5d,0,0);
      goto LAB_08014bb0;
    }
    if (cVar1 != '\x03') {
      return in_lr;
    }
    if (*(ushort *)(param_1 + 0x10) < 0x1700) {
      return in_lr;
    }
    uVar5 = 0x5d;
  }
  sub_08004340(uVar2 & 0xff,&DAT_085222a0,uVar5,0,0);
LAB_08014bb0:
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  return in_lr;
}

