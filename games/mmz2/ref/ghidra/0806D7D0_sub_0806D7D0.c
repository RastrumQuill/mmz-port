// sub_0806D7D0 at 0x0806D7D0 (thumb)

undefined4 sub_0806D7D0(int param_1)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  
  bVar2 = *(byte *)(param_1 + 0x13);
  uVar6 = (uint)bVar2;
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(*(int *)(param_1 + 0x2c) + 0xb9) = 1;
    if (uVar6 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(byte *)(param_1 + 0x4c) = bVar2;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((uVar6 & 1) << 4);
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
    sub_080127E4(param_1,0xd04);
    sub_080B0ACC(param_1 + 0x54,&DAT_0833e7cc,0,(uVar6 & 0xf) << 4 | uVar6);
    if (uVar6 == 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x200;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x100;
      uVar4 = 0xffffff40;
    }
    else {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x200;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x100;
      uVar4 = 0xc0;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    *(undefined4 *)(param_1 + 0x60) = 0x100;
    *(undefined *)(param_1 + 0x12) = 0x80;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  bVar2 = *(char *)(param_1 + 0x12) - 1;
  *(byte *)(param_1 + 0x12) = bVar2;
  if (bVar2 < 0x73) {
    if (bVar2 < 0x69) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      sVar3 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54));
      if ((sVar3 == 0) && (*(char *)(param_1 + 0x12) != '\0')) {
        iVar5 = *(int *)(param_1 + 0x60) + 0x40;
        *(int *)(param_1 + 0x60) = iVar5;
        if (0x700 < iVar5) {
          *(undefined4 *)(param_1 + 0x60) = 0x700;
        }
      }
      else {
        sub_0806DA64(param_1,uVar6);
        sub_0801DD2C(1,param_1 + 0x54);
        if (DAT_0202ebfc < 9999) {
          DAT_0202ebfc = DAT_0202ebfc + 1;
        }
        sub_0801DE2C(param_1,param_1 + 0x54);
        *(undefined4 *)(param_1 + 0xc) = 4;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
      }
    }
    else {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x80;
    }
  }
  return in_lr;
}

