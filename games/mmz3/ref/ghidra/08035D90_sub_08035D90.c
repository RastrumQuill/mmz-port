// sub_08035D90 at 0x08035D90 (thumb)

undefined8 sub_08035D90(int param_1)

{
  undefined4 in_lr;
  
  if ((1 < *(byte *)(param_1 + 0xe)) && ((DAT_02002134 & 2) != 0)) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return CONCAT44(in_lr,1);
}

