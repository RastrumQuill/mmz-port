// sub_080D7948 at 0x080D7948 (thumb)

undefined8 sub_080D7948(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08006BF0();
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 0x10;
    *(undefined *)(iVar1 + 9) = 4;
    *(undefined4 *)(iVar1 + 0x14) = 0x80d7485;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = *(undefined *)(param_1 + 0x10);
    *(undefined *)(iVar1 + 0x11) = 1;
    *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(param_1 + 0x28);
    *(int *)(iVar1 + 0x2c) = param_1;
  }
  return CONCAT44(in_lr,iVar1);
}

