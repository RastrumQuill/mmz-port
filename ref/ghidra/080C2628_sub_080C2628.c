// sub_080C2628 at 0x080C2628 (thumb)

undefined8 sub_080C2628(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((DAT_02004caa & 0x80) != 0) {
    sub_08001EAC(0x29);
    *(ushort *)(param_1 + 10) = *(short *)(param_1 + 10) + 1U & 1;
  }
  if ((DAT_02004caa & 0x40) != 0) {
    sub_08001EAC(0x29);
    *(ushort *)(param_1 + 10) = *(short *)(param_1 + 10) + 1U & 1;
  }
  sub_080BC0AC(&UNK_082b932a,9,*(short *)(param_1 + 10) * 2 + 5);
  if ((DAT_02004ca8 & 2) == 0) {
    if ((DAT_02004ca8 & 1) == 0) {
      uVar1 = 0;
      goto LAB_080c26b8;
    }
    sub_08001EAC(0x2a);
    if (*(short *)(param_1 + 10) == 0) {
      uVar1 = 1;
      goto LAB_080c26b8;
    }
  }
  else {
    sub_08001EAC(0x28);
  }
  uVar1 = 0xffffffff;
LAB_080c26b8:
  return CONCAT44(in_lr,uVar1);
}

