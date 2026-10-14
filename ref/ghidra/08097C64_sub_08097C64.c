// sub_08097C64 at 0x08097C64 (thumb)

undefined4 sub_08097C64(int param_1)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  ushort *puVar4;
  undefined4 in_lr;
  
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  puVar4 = (ushort *)(param_1 + 0x7c);
  *(ushort *)(param_1 + 0x48) = *puVar4;
  *(ushort *)(param_1 + 0x4a) = *puVar4;
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      uVar2 = *puVar4;
      *puVar4 = (ushort)(uVar2 - 1);
      if (0x40 < (int)((uVar2 - 1) * 0x10000) >> 0x10) {
        return in_lr;
      }
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8)
      ;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    uVar2 = *puVar4;
    *puVar4 = uVar2 + 1;
    if ((short)(uVar2 + 1) < 0xc0) {
      return in_lr;
    }
    *puVar4 = 0xc0;
    goto LAB_08097d08;
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    uVar2 = *puVar4;
    *puVar4 = (ushort)(uVar2 - 1);
    if ((int)((uVar2 - 1) * 0x10000) >> 0x10 < 0xb0) {
      cVar3 = *(char *)(param_1 + 0xf) + '\x01';
      goto LAB_08097cfa;
    }
  }
  else {
    uVar2 = *puVar4;
    *puVar4 = uVar2 + 1;
    if (0xc0 < (short)(uVar2 + 1)) {
      cVar3 = '\0';
LAB_08097cfa:
      *(char *)(param_1 + 0xf) = cVar3;
      *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
    }
  }
  if (*(byte *)(param_1 + 0x13) < 3) {
    return in_lr;
  }
LAB_08097d08:
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return in_lr;
}

