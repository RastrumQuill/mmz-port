// sub_08101388 at 0x08101388 (thumb)

undefined4 sub_08101388(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_lr;
  
  bVar2 = *(byte *)(param_1 + 0xd);
  if (bVar2 == 1) {
LAB_08101414:
    if ((((*(uint *)(param_1 + 0x8c) & 0x20000000) == 0) || (DAT_0202dbf8 == '\0')) ||
       (DAT_03003908 != param_1 + 0x74)) goto LAB_0810154a;
    bVar1 = 0 < *(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54);
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if ((DAT_0202e8bd & 2) == 0) {
      uVar6 = 0;
      uVar5 = 0;
      do {
        if (((int)(uint)(byte)(&DAT_0202e8b4)[(int)(uVar5 + 0x45) >> 3] >> (uVar5 + 0x45 & 7) & 1U)
            != 0) {
          uVar6 = uVar6 + 1 & 0xff;
        }
        uVar5 = uVar5 + 1 & 0xff;
      } while (uVar5 < 4);
      if (uVar6 == 4) {
        sub_0810DED0(0xd18);
        DAT_0202e8bd = DAT_0202e8bd | 2;
        uVar3 = 0x10;
        goto LAB_08101548;
      }
      sub_0810DED0(uVar6 + 0xd14);
    }
    else {
      sub_0810DED0(0xd18);
    }
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
LAB_08101512:
    if (DAT_0202f38a != 0) goto LAB_0810154a;
    DAT_0202f388 = DAT_0202f388 | 2;
    DAT_0202dbf8 = '\0';
    uVar3 = 1;
  }
  else {
    if (bVar2 < 2) {
      if (bVar2 != 0) goto LAB_0810154a;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      sub_0801CC9C(param_1);
      uVar4 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar4;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_08005760(param_1 + 0x74,&DAT_08868544,param_1 + 0x54,0);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = 0;
      sub_0801CF00(param_1,0x7a00);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(undefined *)(param_1 + 0x25) = 0x18;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      goto LAB_08101414;
    }
    if (bVar2 == 2) goto LAB_08101512;
    if ((bVar2 != 0x10) || (DAT_0202f38a != 0)) goto LAB_0810154a;
    sub_0810DED0(0xd19);
    uVar3 = 2;
  }
LAB_08101548:
  *(undefined *)(param_1 + 0xd) = uVar3;
LAB_0810154a:
  sub_0801CFF0(param_1);
  return in_lr;
}

