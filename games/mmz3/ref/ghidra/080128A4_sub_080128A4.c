// sub_080128A4 at 0x080128A4 (thumb)

undefined4 sub_080128A4(int param_1)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar2 = *(uint *)(param_1 + 0x5c);
    (&DAT_020023c4)[(uVar2 << 0x10) >> 0x14] = (ushort)*(undefined4 *)(param_1 + 100) | 0x44;
    sub_08004340(uVar2 & 0xff,&DAT_085222a0,0x50,0,0);
    DAT_02002400 = 0x3b44;
    *(undefined2 *)(param_1 + 0x10) = 0x40;
    *(undefined2 *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  uVar2 = sub_080126B0(param_1 + 0x34);
  if (((int)(uint)DAT_02030154 >> (uVar2 & 0xff) & 1U) == 0) {
    if (0x20 < *(ushort *)(param_1 + 0x10)) {
      sVar1 = *(ushort *)(param_1 + 0x10) - 1;
      goto LAB_08012928;
    }
  }
  else if (*(ushort *)(param_1 + 0x10) < 0x40) {
    sVar1 = *(ushort *)(param_1 + 0x10) + 1;
LAB_08012928:
    *(short *)(param_1 + 0x10) = sVar1;
  }
  DAT_02002402 = (*(ushort *)(param_1 + 0x10) >> 2) << 8;
  if ((DAT_02002c56 >> 8 == 0xb) && ((DAT_02002c56 & 0xff) == 4)) {
    if (((int)(uint)DAT_02030154 >> (uVar2 & 0xff) & 1U) == 0) {
      if ((*(ushort *)(param_1 + 0x12) & 1) == 0) goto LAB_080129b8;
      *(ushort *)(param_1 + 0x12) = *(ushort *)(param_1 + 0x12) & 0xfe;
      sub_08004230(0xbf);
      uVar3 = 0xf3;
    }
    else {
      if ((*(ushort *)(param_1 + 0x12) & 1) != 0) goto LAB_080129b8;
      *(ushort *)(param_1 + 0x12) = *(ushort *)(param_1 + 0x12) | 1;
      sub_08004230(0xf3);
      uVar3 = 0xbf;
    }
    sub_080040A8(uVar3,0);
  }
  else {
    *(ushort *)(param_1 + 0x12) = *(ushort *)(param_1 + 0x12) & 0xfe;
    sub_08004230(0xbf);
    sub_08004230(0xf3);
  }
LAB_080129b8:
  if ((DAT_02002c54 >> 8 == 0xb) && ((DAT_02002c54 & 0xff) == 0)) {
    if ((DAT_02030154 & 2) != 0) {
      if ((*(ushort *)(param_1 + 0x12) & 2) == 0) {
        *(ushort *)(param_1 + 0x12) = *(ushort *)(param_1 + 0x12) | 2;
        sub_080040A8(0xc3,0);
      }
    }
  }
  else {
    *(ushort *)(param_1 + 0x12) = *(ushort *)(param_1 + 0x12) & 0xfd;
    sub_08004230(0xc3);
  }
  sub_080041E4(0xbf);
  sub_080041E4(0xc3);
  sub_080041E4(0xf3);
  return in_lr;
}

