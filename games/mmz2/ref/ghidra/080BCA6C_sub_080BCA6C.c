// sub_080BCA6C at 0x080BCA6C (thumb)

undefined8 sub_080BCA6C(int param_1,int param_2,undefined param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08006B84(DAT_0202f084);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x3d;
    *(undefined4 *)(iVar1 + 0x14) = 0x80bcac9;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(int *)(iVar1 + 0x54) = param_1 + -8;
    *(int *)(iVar1 + 0x58) = param_2 + -8;
    *(undefined *)(iVar1 + 0x10) = param_3;
    *(undefined *)(iVar1 + 0x11) = 0;
  }
  return CONCAT44(in_lr,iVar1);
}

