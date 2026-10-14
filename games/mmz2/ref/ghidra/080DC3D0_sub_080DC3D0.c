// sub_080DC3D0 at 0x080DC3D0 (thumb)

undefined8 sub_080DC3D0(undefined param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08006B84(DAT_0202f094);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 0x10;
    *(undefined *)(iVar1 + 9) = 8;
    *(undefined4 *)(iVar1 + 0x14) = 0x80dc41d;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = param_1;
    *(undefined4 *)(iVar1 + 0x2c) = param_2;
  }
  return CONCAT44(in_lr,iVar1);
}

