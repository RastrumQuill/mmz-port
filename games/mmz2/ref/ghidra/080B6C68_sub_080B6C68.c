// sub_080B6C68 at 0x080B6C68 (thumb)

undefined4 sub_080B6C68(int param_1)

{
  byte bVar1;
  ushort uVar2;
  byte bVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  sub_080128D4();
  *(int *)(param_1 + 0x54) =
       *(int *)(iVar4 + 0x54) + *(int *)(param_1 + 100) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) =
       *(int *)(iVar4 + 0x58) + *(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x60);
  uVar2 = *(ushort *)(param_1 + 0x50);
  if (uVar2 < 0x100) {
    *(ushort *)(param_1 + 0x50) = uVar2 + 8;
    *(short *)(param_1 + 0x52) = *(short *)(param_1 + 0x52) + 8;
  }
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -0x60;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -0x20;
  bVar1 = *(byte *)(param_1 + 0x12);
  if ((bVar1 & 3) < 2) {
    bVar3 = *(byte *)(param_1 + 10) | 1;
  }
  else {
    bVar3 = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar3;
  *(byte *)(param_1 + 0x12) = bVar1 - 1;
  if (bVar1 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
    sub_080B699C(param_1);
  }
  return in_lr;
}

