// sub_080B6A6C at 0x080B6A6C (thumb)

undefined8 sub_080B6A6C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_080054C0();
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 5;
    *(undefined4 *)(iVar1 + 0x14) = 0x80b659d;
    *(undefined2 *)(iVar1 + 0x1c) = 0xc0;
    *(undefined *)(iVar1 + 0x1e) = 3;
    *(undefined *)(iVar1 + 0x10) = *(undefined *)(param_1 + 0x10);
    *(undefined *)(iVar1 + 0x11) = 1;
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(param_1 + 0x20);
    *(int *)(iVar1 + 0x24) = param_1;
  }
  return CONCAT44(in_lr,iVar1);
}

