// sub_08086C64 at 0x08086C64 (thumb)

undefined4 sub_08086C64(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x20);
  sub_08076600();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,5);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_080055FC(param_1 + 0x74,&DAT_082b2fd0,param_1 + 0x4c,1);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined *)(param_1 + 0x1f) = *(undefined *)(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar1 + 0xb8);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar1 + 0xbc);
  *(int *)(param_1 + 0x54) =
       (int)(short)(&DAT_080c8e24)[(*(byte *)(param_1 + 0x11) + 0xc0 & 0xff) + 0x40] << 2;
  *(int *)(param_1 + 0x58) =
       (int)(short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x11) + 0xc0 & 0xff] << 2;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xf) = 1;
  sub_0808687C(param_1);
  return in_lr;
}

