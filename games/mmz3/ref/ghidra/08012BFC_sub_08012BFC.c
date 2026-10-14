// sub_08012BFC at 0x08012BFC (thumb)

undefined8 sub_08012BFC(int *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  local_10 = *param_1 >> 8;
  local_c = param_1[1] >> 8;
  if ((DAT_02002650 & 0x7f) == 0xb) {
    uVar1 = sub_080126B0(&local_10);
    uVar1 = uVar1 & 0xff;
    if ((uVar1 != 6) && (((int)(uint)DAT_02030154 >> uVar1 & 1U) != 0)) {
      if ((uVar1 == 2) && (0x87000 < *param_1)) {
        puVar2 = &DAT_0833ef8c;
      }
      else {
        puVar2 = &UNK_0833ef5c + uVar1 * 8;
      }
      goto LAB_08012c6a;
    }
  }
  puVar2 = (undefined *)0x0;
LAB_08012c6a:
  return CONCAT44(in_lr,puVar2);
}

