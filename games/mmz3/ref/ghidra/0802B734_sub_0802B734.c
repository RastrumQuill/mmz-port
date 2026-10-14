// sub_0802B734 at 0x0802B734 (thumb)

undefined4 sub_0802B734(int param_1)

{
  short sVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  pbVar2 = (byte *)(param_1 + 0x147);
  sub_08025C04(param_1,&DAT_0835b034 + (uint)*pbVar2 * 8,0);
  sub_08025C04(param_1,&DAT_0835b034 + (uint)*pbVar2 * 8,1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sub_080263A0(param_1,&DAT_0835b034 + (uint)*pbVar2 * 8,0);
  if (((*(char *)(param_1 + 0x113) == '\0') &&
      (sVar1 = sub_08025EC4(param_1,&DAT_0835b034 + (uint)*pbVar2 * 8,1), sVar1 != 0)) &&
     (sVar1 = sub_08026664(param_1,&DAT_0835b034 + (uint)*pbVar2 * 8,0), sVar1 != 0)) {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0xed) = 8;
    *(undefined *)(param_1 + 0xee) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(byte *)(param_1 + 0x124) = *(byte *)(param_1 + 0x124) & 0xfb;
    sub_0800471C(7);
  }
  else {
    sVar1 = sub_08032B80(param_1);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + (int)sVar1;
    sVar1 = sub_08032BC0(param_1);
    if ((int)sVar1 < *(int *)(param_1 + 0x60)) {
      sVar1 = sub_08032BC0(param_1);
      *(int *)(param_1 + 0x60) = (int)sVar1;
    }
  }
  return in_lr;
}

