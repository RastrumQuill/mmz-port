// sub_080D37E8 at 0x080D37E8 (thumb)

undefined4 sub_080D37E8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_0801CF00(param_1,0x13);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef | 1;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  if (((*(uint *)(iVar2 + 0x8c) & 0x200) == 0) && (*(short *)(iVar2 + 0xa4) != 0)) {
    sub_08002B10(0xf);
  }
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar2 + 0x54);
  uVar1 = DAT_0202cabc;
  if ((DAT_02000c80 & 0x7f) == 2) {
    uVar1 = sub_08007B84(iVar2 + 0x54);
  }
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  sub_080D389C(param_1);
  return in_lr;
}

