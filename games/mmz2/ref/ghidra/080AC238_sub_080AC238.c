// sub_080AC238 at 0x080AC238 (thumb)

undefined4 sub_080AC238(undefined4 *param_1,int param_2,uint param_3,undefined param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar1 = sub_08006B84(DAT_0202f07c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 8;
    *(undefined *)(iVar1 + 9) = 0x3f;
    *(undefined4 *)(iVar1 + 0x14) = 0x80ac2e5;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    uVar2 = param_1[1];
    *(undefined4 *)(iVar1 + 0x54) = *param_1;
    *(undefined4 *)(iVar1 + 0x58) = uVar2;
    *(undefined *)(iVar1 + 0x10) = param_4;
    *(undefined *)(iVar1 + 0x11) = 0;
    iVar3 = (short)(&DAT_080ef450)[(param_3 & 0xff) + 0xc0 & 0xff] * param_2;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(iVar1 + 0x5c) = iVar3 >> 8;
    param_2 = (short)(&DAT_080ef450)[(param_3 & 0xff) + 0x80 & 0xff] * param_2;
    if (param_2 < 0) {
      param_2 = param_2 + 0xff;
    }
    *(int *)(iVar1 + 0x60) = param_2 >> 8;
  }
  return in_lr;
}

