// sub_08071548 at 0x08071548 (thumb)

undefined4 sub_08071548(int param_1)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x2c);
  if ((iVar5 != 0) && (1 < *(byte *)(iVar5 + 0xc))) {
    iVar5 = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0;
    uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar3 & 0x7fffffff;
    *(char *)(param_1 + 0x13) = (char)(uVar3 * 2 >> 0x11) * '@' + ' ';
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar4 = (int)*(short *)((int)&DAT_080fe64c +
                         ((uint)*(byte *)(param_1 + 0x12) * 0x2000000 + 0x40000000 >> 0x17));
  *(int *)(param_1 + 0x5c) = iVar4 * 4;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    *(int *)(param_1 + 0x5c) = iVar4 * -4;
  }
  *(int *)(param_1 + 0x60) =
       (int)((uint)*(ushort *)
                    ((int)&DAT_080fe64c + (((uint)*(byte *)(param_1 + 0x12) << 0x19) >> 0x17)) <<
            0x10) >> 0x11;
  bVar1 = 0 < *(int *)(param_1 + 0x5c);
  if (bVar1) {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(bool *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  bVar2 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar2;
  if (*(byte *)(param_1 + 0x13) <= bVar2) {
    if ((*(char *)(param_1 + 0xb8) == '\0') && (iVar5 != 0)) {
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 5;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  sub_080177F4(param_1);
  return in_lr;
}

