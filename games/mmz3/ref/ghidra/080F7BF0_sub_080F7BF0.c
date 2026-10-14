// sub_080F7BF0 at 0x080F7BF0 (thumb)

undefined4 sub_080F7BF0(int param_1)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  short sVar4;
  uint uVar5;
  byte *pbVar6;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xdd8) = 0;
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0838bbb0 + (uint)*(byte *)(param_1 + 2) * 4));
  if ((DAT_02002134 & 8) != 0) {
    *(undefined *)(param_1 + 1) = 3;
  }
  sub_080E9604(&DAT_08371228,0x11,1);
  sub_080F85FC(*(byte *)(param_1 + 0xdd6) + 1,0x16,1);
  uVar5 = (uint)*(byte *)(param_1 + 0xdd6);
  pbVar6 = (byte *)(DAT_0203df90 + ((uVar5 << 0x18) >> 0x1a));
  if (((int)(*pbVar6 & 0xf) >> (uVar5 & 3) & 1U) == 0) {
    sub_080E9604(&DAT_08371211,1,0x12);
    goto LAB_080f7e24;
  }
  if (((int)(uint)*pbVar6 >> (uVar5 & 3) + 4 & 1U) == 0) {
    sub_080E9604(&DAT_0837122c,0x11,4);
    uVar2 = 0x1f8e;
  }
  else {
    if ((uVar5 < 6) || (uVar5 < 0x14)) {
      sub_080E9604(&DAT_0836f268 + (ushort)(&DAT_0836e9d8)[*(byte *)(param_1 + 0xdd6) + 700],0x11,4)
      ;
    }
    else {
      if (uVar5 < 0x5e) {
        bVar1 = *(byte *)(param_1 + 0xdd6);
        sub_080E9604(&DAT_083720c6,0x11,4);
        sub_080E9604(&DAT_0836f268 + (ushort)(&DAT_0836e9d8)[bVar1 + 0x50],0x11,6);
        sVar4 = sub_080E9594(&DAT_0836f268 + (ushort)(&DAT_0836e9d8)[bVar1 + 0x50]);
        sub_080E9604(&DAT_083720d2,sVar4 + 0x11,6);
        uVar2 = 0x2e6b;
      }
      else {
        if (0x6d < uVar5) {
          sub_080E9604(&DAT_0836f268 + (ushort)(&DAT_0836e9d8)[*(byte *)(param_1 + 0xdd6) + 0x268],
                       0x11,4);
          goto LAB_080f7dd0;
        }
        sub_080E9604(&DAT_083720df,0x11,4);
        cVar3 = '\0';
        sVar4 = *(short *)(&DAT_0838bbbc + (*(byte *)(param_1 + 0xdd6) - 0x5e) * 2);
        while (sVar4 != 0) {
          sVar4 = sub_080FE460(sVar4,10);
          cVar3 = cVar3 + '\x01';
        }
        sub_080F386C(*(undefined2 *)(&DAT_0838bbbc + (*(byte *)(param_1 + 0xdd6) - 0x5e) * 2),
                     cVar3 + '\x10',4);
        sub_080E9604(&DAT_083720e0,0x11,6);
        uVar2 = 0x2e83;
      }
      sub_080E9604(&DAT_0836f268 + uVar2,0x11,8);
    }
LAB_080f7dd0:
    uVar2 = 0x1fa9;
  }
  sub_080E9604(&DAT_0836f268 + uVar2,1,0x12);
LAB_080f7e24:
  if (*(char *)(param_1 + 0xdda) == '\0') {
    DAT_02002410 = DAT_02002410 & 0xdfff;
    *(undefined *)(param_1 + 0xddc) = 0;
    *(undefined *)(param_1 + 0xddd) = 0;
    *(undefined *)(param_1 + 0xdde) = 0;
  }
  else {
    DAT_03002ac0 = (ushort)*(byte *)(param_1 + 0xddc) |
                   (ushort)*(byte *)(param_1 + 0xdde) << 10 |
                   (ushort)*(byte *)(param_1 + 0xddd) << 5;
    DAT_02002410 = DAT_02002410 | 0x2000;
    DAT_0200241c = 0x10;
    DAT_0200241e = DAT_0200241e | 3;
    DAT_02002414 = *(byte *)(param_1 + 0xdda) + 0x40 & 0xff |
                   (0x40 - (ushort)*(byte *)(param_1 + 0xdda)) * 0x100;
    DAT_02002418 = *(byte *)(param_1 + 0xddb) + 0x50 & 0xff |
                   (0x50 - (ushort)*(byte *)(param_1 + 0xddb)) * 0x100;
  }
  sub_080041E4(0x40);
  if (*(char *)(param_1 + 0xdd8) != '\0') {
    sub_080F8034(param_1);
  }
  return in_lr;
}

