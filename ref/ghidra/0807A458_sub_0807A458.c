// sub_0807A458 at 0x0807A458 (thumb)

undefined4 sub_0807A458(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  sub_0800DEB4(param_1,*(undefined4 *)(param_1 + 0x20));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 6;
  sub_080055FC(param_1 + 0x74,&DAT_082b1ed8,param_1 + 0x4c,1);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  sub_080033F0(param_1 + 0x6c,7);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  bVar1 = *(byte *)(*(int *)(param_1 + 0x20) + 10);
  if ((bVar1 & 0x10) == 0) {
    *(byte *)(param_1 + 0x44) = bVar1 & 0x10;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined4 *)(param_1 + 0x54) = 0xfffffd00;
    iVar2 = *(int *)(param_1 + 0x4c);
    iVar3 = -0x1000;
  }
  else {
    *(undefined *)(param_1 + 0x44) = 1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined4 *)(param_1 + 0x54) = 0x300;
    iVar2 = *(int *)(param_1 + 0x4c);
    iVar3 = 0x1000;
  }
  *(int *)(param_1 + 0x4c) = iVar2 + iVar3;
  *(undefined *)(param_1 + 0x12) = 0x40;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 4);
  sub_08079FA8(param_1);
  return in_lr;
}

