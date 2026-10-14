// sub_080C3354 at 0x080C3354 (thumb)

undefined4 sub_080C3354(int param_1)

{
  byte bVar1;
  undefined uVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 in_lr;
  
  sub_0801CFF0();
  *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb5);
  pbVar6 = (byte *)(param_1 + 0xb4);
  *(byte *)(param_1 + 0xb5) = *pbVar6;
  iVar5 = *(short *)((int)&DAT_08128c10 + ((*pbVar6 + 0x40) * 0x1000000 >> 0x17)) * 7 >> 1;
  *(int *)(param_1 + 0x5c) = iVar5;
  *(int *)(param_1 + 0x60) = (short)(&DAT_08128c10)[*pbVar6] * 7 >> 1;
  if (*(char *)(param_1 + 0xd) != '\0') {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + -1;
    goto LAB_080c343c;
  }
  sVar3 = sub_08007C7C(*(int *)(param_1 + 0x54) + iVar5,*(undefined4 *)(param_1 + 0x58));
  if (sVar3 == 1) {
    if (*(int *)(param_1 + 0x5c) < 1) {
      bVar1 = 0x30;
    }
    else {
      bVar1 = 0x50;
    }
    *pbVar6 = bVar1;
    uVar2 = 2;
  }
  else {
    sVar3 = sub_08007C7C(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c),
                         *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60));
    if (sVar3 == 0) goto LAB_080c343c;
    if (sVar3 == 1) {
      if (*(int *)(param_1 + 0x5c) < 1) {
        bVar1 = 0x90;
      }
      else {
        bVar1 = 0xf0;
      }
LAB_080c342a:
      *pbVar6 = bVar1;
    }
    else {
      if (((1 < (ushort)(sVar3 - 2U)) && (sVar3 != 8)) && (sVar3 != 9)) {
        if (*(int *)(param_1 + 0x5c) < 1) {
          bVar1 = 0x98;
        }
        else {
          bVar1 = 0xe8;
        }
        goto LAB_080c342a;
      }
      if (*(int *)(param_1 + 0x5c) < 1) {
        *(undefined *)(param_1 + 0xb4) = 0xa0;
      }
      else {
        *(undefined *)(param_1 + 0xb4) = 0xe0;
      }
    }
    uVar2 = 3;
  }
  *(undefined *)(param_1 + 0xd) = uVar2;
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
LAB_080c343c:
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if (((*(char *)(param_1 + 0x12) != '\0') &&
      (uVar4 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54), 0x1000 < uVar4)) ||
     (1 < *(byte *)(param_1 + 0x12))) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

