// sub_08097B40 at 0x08097B40 (thumb)

undefined4 sub_08097B40(int param_1)

{
  short *psVar1;
  undefined4 in_lr;
  
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(undefined *)(param_1 + 0x1f) = *(undefined *)(param_1 + 0x12);
  psVar1 = (short *)(param_1 + 0x7c);
  *(short *)(param_1 + 0x48) = *psVar1;
  *(short *)(param_1 + 0x4a) = *psVar1;
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\n';
  *psVar1 = *psVar1 + 0xd;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  if (0x1a0 < *psVar1) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

