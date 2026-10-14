// sub_080355F0 at 0x080355F0 (thumb)

undefined8 sub_080355F0(int param_1)

{
  undefined4 in_lr;
  
  if ((*(short *)(*(int *)(param_1 + 0x28) + 4) == 1) && ((DAT_02002134 & 2) != 0)) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return CONCAT44(in_lr,1);
}

