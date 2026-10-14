// sub_080F8334 at 0x080F8334 (thumb)

undefined4 sub_080F8334(int param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  uint uVar8;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 3) != '\0') goto LAB_080f83e4;
  if (((int)(uint)*(byte *)(DAT_0203df90 + (uint)(*(byte *)(param_1 + 0xdd6) >> 2)) >>
       (*(byte *)(param_1 + 0xdd6) & 3) + 4 & 1U) == 0) {
    sub_0800471C(0xe);
  }
  else {
    sub_0800471C(2);
  }
  sub_080F865C(param_1,*(undefined *)(param_1 + 0xdd6),0);
  bVar1 = *(byte *)(param_1 + 0xdd6);
  if (bVar1 < 0x14) {
LAB_080f83cc:
    *(undefined *)(param_1 + 0xdde) = 0;
    *(undefined *)(param_1 + 0xddd) = 0;
    *(undefined *)(param_1 + 0xddc) = 0;
  }
  else if (bVar1 < 0x2f) {
    *(undefined *)(param_1 + 0xddc) = 0x13;
    *(undefined *)(param_1 + 0xddd) = 2;
    *(undefined *)(param_1 + 0xdde) = 9;
  }
  else if (bVar1 < 0x3c) {
    *(undefined *)(param_1 + 0xddc) = 2;
    *(undefined *)(param_1 + 0xddd) = 0x11;
    *(undefined *)(param_1 + 0xdde) = 7;
  }
  else {
    if (0x5d < bVar1) goto LAB_080f83cc;
    *(undefined *)(param_1 + 0xddc) = 8;
    *(undefined *)(param_1 + 0xddd) = 0xb;
    *(undefined *)(param_1 + 0xdde) = 0x16;
  }
  *(undefined *)(param_1 + 0xdd8) = 1;
  *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
LAB_080f83e4:
  uVar8 = 2;
  do {
    uVar2 = (&DAT_03002bc0)[uVar8];
    uVar3 = (&DAT_03002be0)[uVar8];
    uVar7 = (ushort)(uVar2 & 0x1f);
    if ((uVar3 & 0x1f) >> 1 < (uVar2 & 0x1f)) {
      uVar7 = uVar7 - 1 & 0xff;
    }
    uVar5 = uVar2 >> 5 & 0x1f;
    if ((uVar3 >> 5 & 0x1f) >> 1 < uVar5) {
      uVar5 = uVar5 - 1 & 0xff;
    }
    uVar6 = uVar2 >> 10 & 0x1f;
    if ((uVar3 >> 10 & 0x1f) >> 1 < uVar6) {
      uVar6 = uVar6 - 1 & 0xff;
    }
    (&DAT_03002bc0)[uVar8] = (ushort)(uVar6 << 10) | (ushort)(uVar5 << 5) | uVar7;
    uVar8 = uVar8 + 1 & 0xffff;
  } while (uVar8 < 0x10);
  iVar4 = (uint)*(byte *)(param_1 + 0xdd6) * 8;
  if (*(short *)(&DAT_0838bbdc + iVar4) != 0) {
    uVar8 = (uint)(byte)(&DAT_0838bbe1)[iVar4] << 0x18;
    if ((uint)*(byte *)(param_1 + 0xdda) < uVar8 >> 0x19) {
      uVar8 = (uint)*(byte *)(param_1 + 0xdda) + (uVar8 >> 0x1c);
      *(char *)(param_1 + 0xdda) = (char)uVar8;
      *(byte *)(param_1 + 0xddb) =
           ((byte)(&DAT_0838bbe2)[(uint)*(byte *)(param_1 + 0xdd6) * 8] >> 4) +
           *(char *)(param_1 + 0xddb);
      iVar4 = (uint)*(byte *)(param_1 + 0xdd6) * 8;
      if ((uint)((byte)(&DAT_0838bbe1)[iVar4] >> 1) < (uVar8 & 0xff)) {
        *(byte *)(param_1 + 0xdda) = (byte)(&DAT_0838bbe1)[iVar4] >> 1;
      }
      if ((byte)(&DAT_0838bbe2)[iVar4] >> 1 < *(byte *)(param_1 + 0xddb)) {
        *(byte *)(param_1 + 0xddb) = (byte)(&DAT_0838bbe2)[iVar4] >> 1;
      }
    }
    else {
      *(byte *)(param_1 + 0xdda) = (byte)(&DAT_0838bbe1)[iVar4] >> 1;
      *(byte *)(param_1 + 0xddb) = (byte)(&DAT_0838bbe2)[(uint)*(byte *)(param_1 + 0xdd6) * 8] >> 1;
      if (*(char *)(param_1 + 3) == '\x01') {
        iVar4 = (uint)*(byte *)(param_1 + 0xdd6) * 8;
        sub_080E7EF0(param_1,(uint)*(byte *)(param_1 + 0xdd6),(&DAT_0838bbe0)[iVar4],
                     *(undefined2 *)(&DAT_0838bbdc + iVar4),
                     (0x40 - (char)(&DAT_0838bbde)[iVar4]) * 0x100,
                     (0x50 - (char)(&DAT_0838bbdf)[(uint)*(byte *)(param_1 + 0xdd6) * 8]) * 0x100,
                     (&DAT_0838bbe3)[(uint)*(byte *)(param_1 + 0xdd6) * 8]);
        *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
      }
    }
  }
  if ((DAT_02002134 & 3) != 0) {
    sub_0800471C(3);
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
  }
  return in_lr;
}

