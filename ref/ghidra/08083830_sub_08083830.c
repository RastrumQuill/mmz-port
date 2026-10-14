// sub_08083830 at 0x08083830 (thumb)

undefined4 sub_08083830(int param_1)

{
  byte bVar1;
  undefined uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  sub_08076600();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,1);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  bVar1 = *(byte *)(iVar3 + 10) >> 4;
  *(byte *)(param_1 + 0x44) = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -0x1000;
    *(undefined4 *)(param_1 + 0x54) = 0xfffffd2c;
    *(undefined4 *)(param_1 + 0x58) = 0x2d4;
    uVar2 = 0xe0;
  }
  else {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 0x1000;
    *(undefined4 *)(param_1 + 0x54) = 0x2d4;
    *(undefined4 *)(param_1 + 0x58) = 0x2d4;
    uVar2 = 0x20;
  }
  *(undefined *)(param_1 + 0x1f) = uVar2;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x1200;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_080055FC(param_1 + 0x74,&DAT_082b2ca8,param_1 + 0x4c,0x40);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 4);
  sub_0808342C(param_1);
  return in_lr;
}

