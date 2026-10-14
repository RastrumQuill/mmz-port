// sub_08035D10 at 0x08035D10 (thumb)

undefined8 sub_08035D10(int param_1)

{
  ushort uVar1;
  undefined4 in_lr;
  
  uVar1 = DAT_02002134;
  if (*(short *)(*(int *)(param_1 + 0x28) + 4) == 1) {
    if ((DAT_02002134 & 0x300) != 0) {
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
      if ((uVar1 & 0x200) == 0) {
        *(undefined *)(param_1 + 0xf) = 1;
      }
      else {
        *(undefined *)(param_1 + 0xf) = 0;
      }
    }
    if ((DAT_02002134 & 2) != 0) {
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return CONCAT44(in_lr,1);
}

