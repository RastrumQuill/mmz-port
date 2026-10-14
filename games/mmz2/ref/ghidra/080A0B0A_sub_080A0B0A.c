// sub_080A0B0A at 0x080A0B0A (thumb)

undefined4 sub_080A0B0A(int param_1)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xb4) != '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
    return in_lr;
  }
  bVar2 = *(byte *)(param_1 + 0xe);
  if (bVar2 != 1) {
    if (1 < bVar2) {
      if (bVar2 == 2) {
        bVar1 = 0 < *(int *)(iVar6 + 0x54) - *(int *)(param_1 + 0x54);
        *(uint *)(param_1 + 0x5c) = (uint)bVar1 * 0x300 + -0x180;
        if (bVar1 == 0) {
          bVar2 = *(byte *)(param_1 + 10) & 0xef;
        }
        else {
          bVar2 = *(byte *)(param_1 + 10) | 0x10;
        }
        *(byte *)(param_1 + 10) = bVar2;
        *(bool *)(param_1 + 0x4c) = bVar1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar2 != 3) {
        return in_lr;
      }
      iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x54) = iVar4;
      iVar5 = *(int *)(iVar6 + 0x54) - iVar4;
      if (iVar5 < 0) {
        iVar5 = iVar4 - *(int *)(iVar6 + 0x54);
      }
      if (iVar5 < 0x1000) {
        sub_080032EC(0x83);
        *(char *)(iVar6 + 0xc4) = *(char *)(iVar6 + 0xc4) + '\x01';
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
        *(undefined4 *)(param_1 + 0x8c) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
        *(undefined4 *)(param_1 + 0xc) = 3;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc);
      }
      sub_080128D4(param_1);
      return in_lr;
    }
    if (bVar2 != 0) {
      return in_lr;
    }
    sub_08006E08(param_1 + 0x74,&DAT_0834441c);
    *(undefined4 *)(param_1 + 0x60) = 0x180;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  uVar3 = sub_080A0524(param_1);
  if ((uVar3 & 1) != 0) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

