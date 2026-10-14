// sub_08025AA0 at 0x08025AA0 (thumb)

undefined8 sub_08025AA0(int param_1,short param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(ushort *)(param_1 + 0xba) < 10000) {
    *(ushort *)(param_1 + 0xba) = param_2 + *(ushort *)(param_1 + 0xba);
    sub_0800471C(0x22);
    if (*(ushort *)(param_1 + 0xba) < 10000) {
      uVar1 = 1;
      goto LAB_08025ad0;
    }
    *(undefined2 *)(param_1 + 0xba) = 9999;
  }
  uVar1 = 0;
LAB_08025ad0:
  return CONCAT44(in_lr,uVar1);
}

