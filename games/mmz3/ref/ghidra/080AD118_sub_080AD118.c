// sub_080AD118 at 0x080AD118 (thumb)

undefined4 sub_080AD118(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_0801749C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08017700(param_1,0x6a00);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_0800736C(param_1 + 0x74,&DAT_083690a8,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  iVar1 = (short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x11)] * 0x380;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar1 >> 8;
  iVar2 = *(short *)((int)&DAT_080fe64c + ((*(byte *)(param_1 + 0x11) + 0xc0) * 0x1000000 >> 0x17))
          * 0x380;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar2 >> 8;
  iVar1 = *(int *)(param_1 + 0x54) + (iVar1 >> 8) * 8;
  *(int *)(param_1 + 0x54) = iVar1;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (iVar2 >> 8) * 8;
  *(int *)(param_1 + 0xb4) = iVar1;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  sub_080AD070(param_1,1,3);
  sub_080AD070(param_1,1,6);
  sub_080AD070(param_1,1,9);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 4);
  sub_080AD0E0(param_1);
  return in_lr;
}

