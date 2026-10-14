// sub_0802B624 at 0x0802B624 (thumb)

undefined8 sub_0802B624(int param_1,short param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(ushort *)(param_1 + 0xba) < 10000) {
    *(ushort *)(param_1 + 0xba) = param_2 + *(ushort *)(param_1 + 0xba);
    sub_08002B10(0x22);
    if (*(ushort *)(param_1 + 0xba) < 10000) {
      uVar1 = 1;
      goto LAB_0802b654;
    }
    *(undefined2 *)(param_1 + 0xba) = 9999;
  }
  uVar1 = 0;
LAB_0802b654:
  return CONCAT44(in_lr,uVar1);
}

