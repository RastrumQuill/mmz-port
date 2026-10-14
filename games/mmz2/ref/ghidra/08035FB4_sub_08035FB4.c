// sub_08035FB4 at 0x08035FB4 (thumb)

undefined4 sub_08035FB4(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  int *local_24;
  
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0x2c4) = *(undefined4 *)(param_1 + 0x2d4);
    *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(param_1 + 0x2d8);
  }
  else {
    if (param_2 == 0) {
      iVar2 = *(int *)(param_1 + 0x2c4) - *(int *)(param_1 + 0x2d4);
      iVar1 = *(int *)(param_1 + 0x2c8) - *(int *)(param_1 + 0x2d8);
    }
    else {
      iVar2 = param_2 * (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x2c1) + 0x40 & 0xff] >> 8;
      iVar1 = param_2 * (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x2c1)] >> 8;
    }
    local_24 = (int *)(param_1 + 0x2c4);
    if (param_3 != param_4) {
      iVar2 = sub_080EF150(iVar2 * param_3,param_4);
      iVar1 = sub_080EF150(iVar1 * param_3,param_4);
    }
    *local_24 = *(int *)(param_1 + 0x2d4) + iVar2;
    *(int *)(param_1 + 0x2c8) = *(int *)(param_1 + 0x2d8) + iVar1;
  }
  return in_lr;
}

