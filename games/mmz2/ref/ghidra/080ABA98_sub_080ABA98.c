// sub_080ABA98 at 0x080ABA98 (thumb)

undefined8 sub_080ABA98(undefined4 *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar1 = sub_08006B84(DAT_0202f07c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 8;
    *(undefined *)(iVar1 + 9) = 0x3b;
    *(undefined4 *)(iVar1 + 0x14) = 0x80abb31;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined4 *)(iVar1 + 0x54) = *param_1;
    *(undefined4 *)(iVar1 + 0x58) = param_1[1];
    uVar2 = (param_3 & 0xff) + 0x80 & 0xff;
    *(int *)(iVar1 + 0xb4) = param_2;
    iVar3 = param_2 * (short)(&DAT_080ef450)[uVar2 + 0x40 & 0xff];
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(iVar1 + 0x5c) = iVar3 >> 8;
    param_2 = param_2 * (short)(&DAT_080ef450)[uVar2];
    if (param_2 < 0) {
      param_2 = param_2 + 0xff;
    }
    *(int *)(iVar1 + 0x60) = param_2 >> 8;
  }
  return CONCAT44(in_lr,iVar1);
}

