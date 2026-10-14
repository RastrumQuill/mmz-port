// sub_080F6770 at 0x080F6770 (thumb)

undefined4 sub_080F6770(int param_1)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  undefined uVar4;
  char *pcVar5;
  undefined4 in_lr;
  
  pcVar5 = (char *)(param_1 + 0xe17);
  if (*pcVar5 == '\0') {
    sub_080040A8(0x4f,0);
    *(undefined *)(param_1 + 0xe06) = *(undefined *)(param_1 + 0xe04);
    *pcVar5 = *pcVar5 + '\x01';
  }
  sub_080041E4(0x4f);
  bVar1 = *(byte *)(param_1 + 0xe09);
  if (bVar1 < 0x91) {
    DAT_02002418 = (ushort)((((uint)bVar1 << 0x18) >> 0x1c) << 0xc) | 0x90;
    *(byte *)(param_1 + 0xe09) = bVar1 + 8;
  }
  uVar3 = DAT_02002136;
  bVar1 = (byte)DAT_02002134 & 0x81;
  if ((DAT_02002134 & 0x81) == 0) {
    bVar2 = (byte)DAT_02002134 & 2;
    if ((DAT_02002134 & 2) == 0) {
      bVar1 = *(byte *)(param_1 + 0xe04);
      if ((DAT_02002136 & 0x20) != 0) {
        uVar4 = sub_080FE390(bVar1 + 2,3);
        *(undefined *)(param_1 + 0xe04) = uVar4;
      }
      if ((uVar3 & 0x10) != 0) {
        uVar4 = sub_080FE390(*(byte *)(param_1 + 0xe04) + 1,3);
        *(undefined *)(param_1 + 0xe04) = uVar4;
      }
      if ((uint)bVar1 != (uint)*(byte *)(param_1 + 0xe04)) {
        sub_08004230(0x4f);
        sub_080040A8(0x4f,0);
        sub_080041E4(0x4f);
        *(undefined *)(param_1 + 0xe06) = *(undefined *)(param_1 + 0xe04);
        *(byte *)(param_1 + 0xe02) = bVar2;
        *(byte *)(param_1 + 0xe05) = bVar2;
        sub_080F6CB8(param_1);
        *(undefined *)(param_1 + 0xe09) = 0x10;
        DAT_02002418 = 0x1090;
        sub_0800471C(1);
      }
    }
    else {
      *(byte *)(param_1 + 3) = bVar1;
      sub_08004230(0x4f);
      *(undefined *)(param_1 + 0xe08) = 0x4e;
      sub_080040A8(0x4e,0);
      sub_080041E4(*(undefined *)(param_1 + 0xe08));
      *(byte *)(param_1 + 0xe04) = bVar1;
      DAT_02002410 = DAT_02002410 & 0xdfff;
      sub_0800471C(3);
    }
  }
  else {
    *(undefined *)(param_1 + 3) = 3;
    *pcVar5 = '\0';
    sub_08004230(0x4f);
    sub_0800471C(2);
  }
  return in_lr;
}

