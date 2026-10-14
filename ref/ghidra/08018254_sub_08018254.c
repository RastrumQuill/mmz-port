// sub_08018254 at 0x08018254 (thumb)

undefined8 sub_08018254(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0x60) * *(int *)(param_1 + 0x58) < 0) ||
     ((*(ushort *)(*(int *)(param_1 + 0x24) + 0x90) & 0x224) == 0)) {
    uVar1 = 0;
  }
  else {
    *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0x11f) = 1;
    uVar1 = 0x480;
    *(undefined *)(param_1 + 0x121) = 7;
    if (-1 < *(int *)(param_1 + 0x60)) {
      uVar1 = 0xfffffb80;
    }
    *(undefined4 *)(param_1 + 0x58) = uVar1;
    sub_08018BE8(param_1,0x6e);
    sub_08027F54(param_1,0x19,0);
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}

