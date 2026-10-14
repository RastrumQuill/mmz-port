// sub_08027634 at 0x08027634 (thumb)

undefined8 sub_08027634(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = 0;
  if ((DAT_0202e922 & 1) != 0) {
    uVar1 = sub_0802788C(param_1);
  }
  *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
  sub_080278F4(param_1);
  sub_08027CE8(param_1);
  sub_08027D68(param_1);
  sub_0802795C(param_1);
  sub_08027BE4(param_1);
  sub_08027C00(param_1);
  sub_08027C1C(param_1);
  return CONCAT44(in_lr,uVar1);
}

