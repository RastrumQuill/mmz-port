// sub_08081314 at 0x08081314 (thumb)

undefined4 sub_08081314(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  sub_08076600();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,0);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(undefined *)(param_1 + 0x44) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  bVar1 = *(byte *)(iVar2 + 10) >> 4;
  *(byte *)(param_1 + 0x45) = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_080055FC(param_1 + 0x74,&DAT_082b28f8,param_1 + 0x4c,0x18);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  bVar1 = (byte)((int)-(*(byte *)(iVar2 + 10) & 0x10) >> 0x1f) & 0x80;
  *(byte *)(param_1 + 0x13) = bVar1;
  *(byte *)(param_1 + 0x1f) = bVar1;
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 4;
  *(undefined2 *)(param_1 + 0xc0) = 0x200;
  *(undefined2 *)(param_1 + 0xc2) = 0;
  if ((*(byte *)(iVar2 + 10) & 0x10) == 0) {
    iVar2 = *(int *)(param_1 + 0x4c) + -0x1800;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x4c) + 0x1800;
  }
  *(int *)(param_1 + 0x4c) = iVar2;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x700;
  *(int *)(param_1 + 0x54) =
       (int)(short)(&DAT_080c8e24)[(*(byte *)(param_1 + 0x13) + 0x80 & 0xff) + 0x40] << 1;
  *(int *)(param_1 + 0x58) =
       (int)(short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x13) + 0x80 & 0xff] << 1;
  *(undefined *)(param_1 + 0x12) = 0x2a;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xf) = 1;
  sub_080810B8(param_1);
  return in_lr;
}

