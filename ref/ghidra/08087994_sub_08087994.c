// sub_08087994 at 0x08087994 (thumb)

undefined4 sub_08087994(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  sub_08076600();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  bVar1 = *(char *)(*(int *)(param_1 + 0x20) + 0x12) + *(char *)(param_1 + 0x11);
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) | 0xc;
  *(byte *)(param_1 + 0x1f) = bVar1;
  uVar2 = bVar1 + 0xc0 & 0xff;
  *(int *)(param_1 + 0x4c) = *(int *)(iVar3 + 0x4c) + (short)(&DAT_080c8e24)[uVar2 + 0x40] * 0x28;
  *(int *)(param_1 + 0x50) = *(int *)(iVar3 + 0x50) + (short)(&DAT_080c8e24)[uVar2] * 0x28;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 4);
  sub_08087A60(param_1);
  return in_lr;
}

