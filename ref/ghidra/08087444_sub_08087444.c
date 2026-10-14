// sub_08087444 at 0x08087444 (thumb)

undefined4 sub_08087444(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_08076590();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_080055FC(param_1 + 0x74,&DAT_082b306c,param_1 + 0x4c,1);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  iVar1 = (short)(&DAT_080c8e24)[(*(byte *)(param_1 + 0x11) + 0xc0 & 0xff) + 0x40] * 0x380;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  *(int *)(param_1 + 0x54) = iVar1 >> 8;
  iVar2 = (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x11) + 0xc0 & 0xff] * 0x380;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x58) = iVar2 >> 8;
  iVar1 = *(int *)(param_1 + 0x4c) + (iVar1 >> 8) * 8;
  *(int *)(param_1 + 0x4c) = iVar1;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + (iVar2 >> 8) * 8;
  *(int *)(param_1 + 0xb8) = iVar1;
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x50);
  sub_0808738C(param_1,1,3);
  sub_0808738C(param_1,1,6);
  sub_0808738C(param_1,1,9);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 4);
  sub_08087400(param_1);
  return in_lr;
}

