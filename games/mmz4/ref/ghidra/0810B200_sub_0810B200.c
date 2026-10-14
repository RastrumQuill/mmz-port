// sub_0810B200 at 0x0810B200 (thumb)

undefined4 sub_0810B200(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  uVar2 = (uint)(bVar1 >> 4);
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined *)(param_1 + 0x22) = (&DAT_08869758)[uVar2];
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(uint *)(param_1 + 0x54) = (bVar1 & 0xf) * 0x800 + 0x11c00;
  *(uint *)(param_1 + 0x58) = uVar2 * 0x2000 + 0x2800;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088695c0)[*(byte *)(param_1 + 9)] + 4);
  sub_0810B12C(param_1);
  return in_lr;
}

