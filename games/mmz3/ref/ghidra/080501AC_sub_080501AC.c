// sub_080501AC at 0x080501AC (thumb)

undefined8 sub_080501AC(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) == 0) && (*(short *)(param_1 + 0xa4) != 0)) ||
     (bVar1 = (byte)DAT_020301a8, (DAT_020301a8 & 8) != 0)) {
    uVar2 = 0;
  }
  else {
    iVar3 = (int)*(short *)(param_1 + 0xd0);
    if (iVar3 != -1) {
      sub_08004768(iVar3);
      *(short *)(param_1 + 0xd0) = -1;
    }
    if (*(byte *)(param_1 + 0xce) != 0) {
      *(byte *)(param_1 + 0xce) = bVar1 & 8;
      sub_08010320(0);
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0835e0e8 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
      *(undefined *)(param_1 + 0xd) = 0;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 1;
    }
    sub_08050468(param_1);
    uVar2 = 1;
  }
  return CONCAT44(in_lr,uVar2);
}

