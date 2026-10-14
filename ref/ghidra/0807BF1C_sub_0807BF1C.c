// sub_0807BF1C at 0x0807BF1C (thumb)

undefined4 sub_0807BF1C(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined4 in_lr;
  
  sub_08076590();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,*(char *)(param_1 + 0x11) + '\x03');
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if (*(char *)(param_1 + 0x11) == '\x01') {
    bVar1 = *(int *)(param_1 + 0x54) < 1;
    *(bool *)(param_1 + 0x44) = bVar1;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
      goto LAB_0807bfc8;
    }
  }
  else {
    bVar1 = 0 < *(int *)(param_1 + 0x54);
    *(bool *)(param_1 + 0x44) = bVar1;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
      goto LAB_0807bfc8;
    }
  }
  bVar2 = *(byte *)(param_1 + 10) & 0xef;
LAB_0807bfc8:
  *(byte *)(param_1 + 10) = bVar2;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 4);
  sub_0807BEEC(param_1);
  sub_08001EAC(0x95);
  return in_lr;
}

