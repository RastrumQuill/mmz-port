// sub_0806575C at 0x0806575C (thumb)

undefined4 sub_0806575C(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 in_lr;
  
  if ((*(byte *)(*(int *)(param_1 + 0x20) + 0xc) < 2) &&
     (*(byte *)(*(int *)(param_1 + 0x20) + 0xd) < 4)) {
    bVar2 = *(byte *)(param_1 + 0xd);
    if (bVar2 == 1) {
      *(undefined2 *)(param_1 + 0x48) = 0x100;
      *(undefined2 *)(param_1 + 0x4a) = 0x100;
      if ((*(byte *)(param_1 + 0x12) & 3) < 2) {
        bVar2 = *(byte *)(param_1 + 10) & 0xfe;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) | 1;
      }
      *(byte *)(param_1 + 10) = bVar2;
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 != -1) {
        return in_lr;
      }
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      *(undefined *)(param_1 + 0x12) = 8;
      return in_lr;
    }
    if (bVar2 < 2) {
      if (bVar2 != 0) {
        return in_lr;
      }
      *(ushort *)(param_1 + 0x48) = (ushort)*(byte *)(param_1 + 0x12) * -0x10 + 0x100;
      *(ushort *)(param_1 + 0x4a) = (ushort)*(byte *)(param_1 + 0x12) * -0x10 + 0x100;
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 != -1) {
        return in_lr;
      }
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      *(undefined *)(param_1 + 0x12) = 0x10;
      return in_lr;
    }
    if (bVar2 != 2) {
      return in_lr;
    }
    *(ushort *)(param_1 + 0x48) = (ushort)*(byte *)(param_1 + 0x12) * 0x10 + 0x80;
    *(ushort *)(param_1 + 0x4a) = (ushort)*(byte *)(param_1 + 0x12) * 0x10 + 0x80;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return in_lr;
    }
    bVar2 = *(byte *)(param_1 + 9);
    *(undefined4 *)(param_1 + 0xc) = 2;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    bVar2 = *(byte *)(param_1 + 9);
    *(undefined4 *)(param_1 + 0xc) = 2;
  }
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)bVar2 * 4) + 8);
  return in_lr;
}

