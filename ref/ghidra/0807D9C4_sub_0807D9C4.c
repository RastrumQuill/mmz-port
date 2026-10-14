// sub_0807D9C4 at 0x0807D9C4 (thumb)

undefined4 sub_0807D9C4(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  sub_0800DEB4(param_1,iVar3);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,0x10);
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
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_080055FC(param_1 + 0x74,&DAT_082b24fc,param_1 + 0x4c,1);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  iVar3 = *(int *)(param_1 + 0x4c);
  uVar2 = *(int *)(DAT_0202286c + 0x4c) - iVar3;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x4c) = iVar3 + -0x800;
    if (0x8c00 < uVar2 + 0x8c00) {
      iVar3 = -0x280;
      goto LAB_0807dab6;
    }
  }
  else {
    *(int *)(param_1 + 0x4c) = iVar3 + 0x800;
    if (0x8c00 < uVar2) {
      iVar3 = 0x280;
      goto LAB_0807dab6;
    }
  }
  iVar3 = (int)uVar2 >> 5;
LAB_0807dab6:
  *(int *)(param_1 + 0x54) = iVar3;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x2e00;
  *(undefined4 *)(param_1 + 0x58) = 0xfffffd80;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 4);
  sub_0807D954(param_1);
  return in_lr;
}

