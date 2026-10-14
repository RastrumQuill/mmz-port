// sub_08062810 at 0x08062810 (thumb)

undefined4 sub_08062810(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x2c);
  iVar3 = *(int *)(iVar5 + 0x54);
  *(int *)(param_1 + 0x54) = iVar3;
  *(int *)(param_1 + 0x54) = iVar3 + (short)(&DAT_080fe64c)[*(ushort *)(iVar5 + 0xb8) >> 8] * 0xb;
  iVar3 = *(int *)(iVar5 + 0x58);
  *(int *)(param_1 + 0x58) = iVar3;
  *(int *)(param_1 + 0x58) =
       iVar3 + *(short *)((int)&DAT_080fe64c +
                         ((uint)((((int)((uint)*(ushort *)(iVar5 + 0xb8) << 0x10) >> 0x18) + 0x40) *
                                0x1000000) >> 0x17)) * -0xb;
  bVar2 = *(byte *)(param_1 + 0xe);
  if (bVar2 != 1) {
    if (1 < bVar2) {
      if (bVar2 == 2) {
        *(byte *)(param_1 + 0x4c) = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
        uVar4 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
        if (uVar4 == 0) {
          bVar2 = *(byte *)(param_1 + 10) & 0xef;
        }
        else {
          bVar2 = *(byte *)(param_1 + 10) | 0x10;
        }
        *(byte *)(param_1 + 10) = bVar2;
        sub_08017700(param_1,0xd60f);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar2 != 3) {
        return in_lr;
      }
      sub_080177F4(param_1);
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      cVar1 = '\0';
      *(undefined *)(param_1 + 0xd) = 3;
      goto LAB_080628f8;
    }
    if (bVar2 != 0) {
      return in_lr;
    }
    sub_08017700(param_1,0xd60e);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0xe) + '\x01';
LAB_080628f8:
  *(char *)(param_1 + 0xe) = cVar1;
  return in_lr;
}

