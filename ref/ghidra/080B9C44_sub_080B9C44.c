// sub_080B9C44 at 0x080B9C44 (thumb)

undefined4 sub_080B9C44(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  pbVar2 = *(byte **)(param_1 + 0x20);
  if (*pbVar2 < 2) {
    bVar1 = *(byte *)(param_1 + 0x10);
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b8868 + (uint)bVar1 * 4));
    if (*(byte *)(param_1 + 0xd) < 2) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      *(int *)(param_1 + 0x4c) = *(int *)(&DAT_082b8830 + (uint)bVar1 * 8) + *(int *)(pbVar2 + 8);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      sub_08003458(param_1 + 0x6c);
      *(undefined *)(param_1 + 0x46) =
           *(undefined *)
            (*(char *)(param_1 + 0x71) * 4 +
            *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b85b0)[*(byte *)(param_1 + 9)] + 8);
    sub_080BA2C8(param_1);
  }
  return in_lr;
}

