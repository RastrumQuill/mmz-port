// sub_08087404 at 0x08087404 (thumb)

undefined4 sub_08087404(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(uint *)(param_1 + 0x68) =
         *(int *)(param_1 + 0x58) + 0xc00 + (*(byte *)(param_1 + 0x12) >> 1 & 1) * -0x1800;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(byte *)(param_1 + 0x13) = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 100);
  if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
    iVar5 = *(int *)(param_1 + 0x5c);
    iVar2 = *(short *)((int)&DAT_080fe64c + ((uint)((iVar5 >> 8) << 0x18) >> 0x17)) * 0xc;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x5c);
    iVar2 = *(short *)((int)&DAT_080fe64c + ((uint)((iVar5 >> 8) << 0x18) >> 0x17)) * -0xc;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 100) + iVar2;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x68);
  if ((((uint)*(byte *)(param_1 + 0x12) << 0x18) >> 0x19 & 1) == 0) {
    iVar2 = *(short *)((int)&DAT_080fe64c + ((uint)(((iVar5 >> 8) + 0x40) * 0x1000000) >> 0x17)) *
            -0xc;
  }
  else {
    iVar2 = *(short *)((int)&DAT_080fe64c + ((uint)(((iVar5 >> 8) + 0x40) * 0x1000000) >> 0x17)) *
            0xc;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x68) + iVar2;
  iVar2 = *(int *)(param_1 + 0x5c) + 0xc00;
  *(int *)(param_1 + 0x5c) = iVar2;
  if (0x7fff < iVar2) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  if (*(int *)(param_1 + 0x5c) < 0x2a00) {
    uVar3 = 0x6704;
  }
  else {
    if (0x53ff < *(int *)(param_1 + 0x5c)) {
      if (*(byte *)(param_1 + 0x13) == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
      uVar4 = *(byte *)(param_1 + 0x13) & 1;
      *(char *)(param_1 + 0x4c) = (char)uVar4;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
      sub_08017700(param_1,0x6704);
      goto LAB_08087556;
    }
    uVar3 = 0x6705;
  }
  sub_08017700(param_1,uVar3);
LAB_08087556:
  sub_080177F4(param_1);
  return in_lr;
}

