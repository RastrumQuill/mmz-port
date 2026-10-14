// sub_080D9284 at 0x080D9284 (thumb)

undefined4 sub_080D9284(int param_1)

{
  bool bVar1;
  short sVar2;
  byte bVar3;
  undefined2 uVar4;
  short sVar5;
  short *psVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar4 = sub_080FE2C0(param_1,*(undefined4 *)
                                  (&DAT_0836da00 + (uint)*(byte *)(param_1 + 0x10) * 4));
    *(undefined2 *)(param_1 + 0xba) = uVar4;
    sub_080EA1B8(*(undefined2 *)(param_1 + 0xba));
    sub_08017700(param_1,*(undefined2 *)(param_1 + 0xc2));
    if (*(char *)(param_1 + 0xb9) != '\0') {
      bVar1 = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54);
      if (bVar1) {
        bVar3 = *(byte *)(param_1 + 10) | 0x10;
      }
      else {
        bVar3 = *(byte *)(param_1 + 10) & 0xef;
      }
      *(byte *)(param_1 + 10) = bVar3;
      *(bool *)(param_1 + 0x4c) = bVar1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  if (DAT_02030c1a != 0) {
    return in_lr;
  }
  if ((DAT_0200243f & 0x10) != 0) {
    psVar6 = (short *)(param_1 + 0xba);
    sVar2 = *psVar6;
    if (sVar2 == 0x29e) {
      *psVar6 = 0x29f;
      sub_080EA1B8(*psVar6);
      return in_lr;
    }
    sVar5 = 0x2a0;
    if ((sVar2 == 0x2a0) || (sVar5 = 0x2a2, sVar2 == 0x2a2)) {
      *psVar6 = sVar5 + 1;
      sub_080EA1B8();
      return in_lr;
    }
  }
  if ((DAT_0200243e & 8) != 0) {
    sVar2 = *(short *)(param_1 + 0xba);
    sVar5 = 0x2a7;
    if (((sVar2 == 0x2a7) || (sVar5 = 0x2a9, sVar2 == 0x2a9)) || (sVar5 = 0x2ab, sVar2 == 0x2ab)) {
      *(short *)(param_1 + 0xba) = sVar5 + 1;
      sub_080EA1B8();
      return in_lr;
    }
  }
  DAT_0202f5c8 = 0;
  *(undefined *)(param_1 + 0xd) = 4;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

