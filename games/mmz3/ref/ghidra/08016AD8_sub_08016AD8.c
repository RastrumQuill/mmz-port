// sub_08016AD8 at 0x08016AD8 (thumb)

undefined4 sub_08016AD8(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') goto LAB_08016bf4;
  uVar1 = *(uint *)(param_1 + 0x5c);
  uVar4 = uVar1 << 0x10;
  if (DAT_0202f4a9 == '\x01') {
    uVar3 = *(uint *)(param_1 + 0x60) | *(uint *)(param_1 + 100);
    (&DAT_020023c4)[uVar4 >> 0x14] = (ushort)uVar3 | 0x44;
    sub_080FE110(&DAT_0852cc48,(uVar3 & 0x1f00) * 8 + 0x6000000,0x200);
    sub_080040A8(0x77,0);
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x60) | *(uint *)(param_1 + 100);
    (&DAT_020023c4)[uVar4 >> 0x14] = (ushort)uVar3 | 0x4044;
    sub_080FE110(&DAT_0852bc38,(uVar3 & 0x1f00) * 8 + 0x6000000,0x200);
    sub_080FE110(&DAT_0852c440,((ushort)(&DAT_020023c4)[uVar4 >> 0x14] & 0x1f00) * 8 + 0x6000800,
                 0x200);
    if (DAT_0202f4a9 == '\x02') {
      sub_080040A8(199,0);
      uVar2 = 200;
    }
    else {
      if (DAT_0202f4a9 != '\x03') goto LAB_08016bde;
      sub_080040A8(0x112,0);
      uVar2 = 0x113;
    }
    sub_080040A8(uVar2,0);
  }
LAB_08016bde:
  (&DAT_020023cc)[(uVar1 & 0xffff) >> 4] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_08016bf4:
  if (DAT_0202f4a9 == '\x02') {
    sub_080041E4(199);
    sub_080041E4(200);
  }
  else if (DAT_0202f4a9 == '\x03') {
    sub_080041E4(0x112);
    sub_080041E4(0x113);
  }
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
  return in_lr;
}

