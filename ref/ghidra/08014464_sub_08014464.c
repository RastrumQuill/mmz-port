// sub_08014464 at 0x08014464 (thumb)

undefined8 sub_08014464(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = 0;
  if ((DAT_02022b6e & 1) != 0) {
    uVar1 = sub_080144C4(param_1);
  }
  *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
  sub_08014530(param_1);
  sub_080147E4(param_1);
  sub_0801484C(param_1);
  sub_080145D8(param_1);
  sub_08014678(param_1);
  sub_080146B4(param_1);
  sub_080146CC(param_1);
  sub_080146E4(param_1);
  return CONCAT44(in_lr,uVar1);
}

