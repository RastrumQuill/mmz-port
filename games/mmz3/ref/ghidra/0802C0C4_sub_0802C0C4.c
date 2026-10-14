// sub_0802C0C4 at 0x0802C0C4 (thumb)

undefined4 sub_0802C0C4(int param_1)

{
  short sVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined *)(param_1 + 0x18d) = 1;
  if ((((DAT_02002650 & 0x7f) == 7) && (sVar1 = sub_08010340(), sVar1 != 0)) ||
     (*(char *)(param_1 + 0x234) != '\0')) {
    sub_08027118(param_1,&DAT_0835b034);
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  pbVar2 = (byte *)(param_1 + 0x147);
  sub_08025C04(param_1,&DAT_0835b034 + (uint)*pbVar2 * 8,0);
  sub_08025C04(param_1,&DAT_0835b034 + (uint)*pbVar2 * 8,1);
  sub_08025EC4(param_1,&DAT_0835b034 + (uint)*pbVar2 * 8,0);
  sVar1 = sub_08026664(param_1,&DAT_0835b034 + (uint)*pbVar2 * 8,0);
  if (sVar1 == 0) {
    *(undefined *)(param_1 + 0xf) = 2;
  }
  return in_lr;
}

