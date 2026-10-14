// sub_0807A728 at 0x0807A728 (thumb)

undefined4 sub_0807A728(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_08076590();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,1);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_080055FC(param_1 + 0x74,&DAT_082b1f7c,param_1 + 0x4c,0x40);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 0x11) & 1;
  if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
    iVar2 = *(int *)(param_1 + 0x4c) + -0x800;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x4c) + 0x800;
  }
  *(int *)(param_1 + 0x4c) = iVar2;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0xfffffc00;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x4800;
  *(undefined *)(param_1 + 0x12) = 0x30;
  *(undefined4 *)(param_1 + 0xc0) = 0x200;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  sub_0807A6E4(param_1);
  return in_lr;
}

