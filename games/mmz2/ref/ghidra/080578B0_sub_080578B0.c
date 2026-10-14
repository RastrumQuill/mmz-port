// sub_080578B0 at 0x080578B0 (thumb)

undefined8 sub_080578B0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar1 = sub_0803F9A4();
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0xb5) == '\0') {
      uVar3 = 0x1b00;
    }
    else {
      if (*(char *)(param_1 + 0xb5) != '\x01') goto LAB_08057930;
      uVar3 = 0x1f00;
    }
    if (*(char *)(iVar1 + 9) == '\x01') {
      iVar4 = *(int *)(iVar1 + 0x54);
      iVar5 = *(int *)(param_1 + 0x54);
      if (iVar4 < iVar5) {
        if (*(int *)(DAT_0202e130 + 0x54) <= iVar4) {
LAB_08057906:
          if (((*(int *)(iVar1 + 0x58) - (*(int *)(param_1 + 0x58) - (uVar3 >> 1))) + (uVar3 >> 1)
               <= uVar3) && ((iVar4 - iVar5) + 0x7800U < 0xf001)) {
            uVar2 = 1;
            goto LAB_08057932;
          }
        }
      }
      else if ((iVar4 <= iVar5) || (iVar4 <= *(int *)(DAT_0202e130 + 0x54))) goto LAB_08057906;
    }
  }
LAB_08057930:
  uVar2 = 0;
LAB_08057932:
  return CONCAT44(in_lr,uVar2);
}

