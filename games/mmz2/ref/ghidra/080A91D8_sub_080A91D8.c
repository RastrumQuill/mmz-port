// sub_080A91D8 at 0x080A91D8 (thumb)

undefined8 sub_080A91D8(undefined4 param_1,undefined4 *param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar1 = sub_08006B84(DAT_0202f07c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 8;
    *(undefined *)(iVar1 + 9) = 0x31;
    *(undefined4 *)(iVar1 + 0x14) = 0x80a9285;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined4 *)(iVar1 + 0x28) = param_1;
    *(undefined4 *)(iVar1 + 0x54) = *param_2;
    *(undefined4 *)(iVar1 + 0x58) = param_2[1];
    uVar2 = (param_4 & 0xff) + 0x80 & 0xff;
    iVar3 = (short)(&DAT_080ef450)[uVar2 + 0x40 & 0xff] * param_3;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(iVar1 + 0x5c) = iVar3 >> 8;
    param_3 = (short)(&DAT_080ef450)[uVar2] * param_3;
    if (param_3 < 0) {
      param_3 = param_3 + 0xff;
    }
    *(int *)(iVar1 + 0x60) = param_3 >> 8;
    sub_080032EC(0x3d);
  }
  return CONCAT44(in_lr,iVar1);
}

