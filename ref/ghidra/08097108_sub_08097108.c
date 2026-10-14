// sub_08097108 at 0x08097108 (thumb)

undefined4 sub_08097108(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  bVar1 = *(byte *)(param_1 + 0x12);
  if (bVar1 < 7) {
    if ((bVar1 & 3) < 2) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    }
  }
  else {
    if ((bVar1 & 3) < 2) {
      *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x74);
      uVar2 = *(undefined4 *)(param_1 + 0x78);
    }
    else {
      *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x7c);
      uVar2 = *(undefined4 *)(param_1 + 0x80);
    }
    *(undefined4 *)(param_1 + 0x50) = uVar2;
  }
  if (*(char *)(param_1 + 0x12) == '\b') {
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x4c);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x50);
  }
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 + 1;
  if (0x28 < bVar1) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

