// sub_0809D06C at 0x0809D06C (thumb)

undefined4 sub_0809D06C(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  sub_08012738();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x1a08);
  sub_080128D4(param_1);
  if ((int)((*(byte *)(param_1 + 0x11) - 0x41) * 0x1000000) < 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    iVar1 = *(int *)(param_1 + 0x54);
    iVar3 = 0x800;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    iVar1 = *(int *)(param_1 + 0x54);
    iVar3 = -0x800;
  }
  *(int *)(param_1 + 0x54) = iVar1 + iVar3;
  *(int *)(param_1 + 100) = iVar3;
  if (*(byte *)(param_1 + 0x11) < 0x81) {
    uVar2 = 0x800;
  }
  else {
    uVar2 = 0xfffff800;
  }
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_083439ec,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined *)(param_1 + 0x13) = 0xf9;
  *(int *)(param_1 + 0x5c) =
       (int)(short)(&DAT_080ef450)[*(byte *)(param_1 + 0x11) + 0x40 & 0xff] << 2;
  *(int *)(param_1 + 0x60) = (int)(short)(&DAT_080ef450)[*(byte *)(param_1 + 0x11)] << 2;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 4);
  sub_0809CE70(param_1);
  return in_lr;
}

