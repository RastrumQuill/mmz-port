// sub_080044E8 at 0x080044E8 (thumb)

undefined4 sub_080044E8(short *param_1,short *param_2,int param_3,char param_4)

{
  int iVar1;
  undefined4 in_lr;
  short local_20;
  short sStack_1e;
  short sStack_1c;
  undefined4 local_18;
  
  local_18 = 0;
  sub_08004928(&local_20,&DAT_083124dc,param_1);
  if (param_4 != '\0') {
    do {
      *(short *)(param_3 + 4) =
           (short)((uint)((int)*param_1 * (int)*param_2 + (int)param_2[1] * (int)param_1[1] +
                          (int)param_2[2] * (int)param_1[2] + (int)param_1[3]) >> 8) + 0x78;
      *(short *)(param_3 + 6) =
           (short)((uint)((int)param_1[4] * (int)*param_2 + (int)param_2[1] * (int)param_1[5] +
                          (int)param_2[2] * (int)param_1[6] + (int)param_1[7]) >> 8) + 0x50;
      *(short *)(param_3 + 8) =
           (short)((uint)((int)param_1[8] * (int)*param_2 + (int)param_2[1] * (int)param_1[9] +
                          (int)param_2[2] * (int)param_1[10] + (int)param_1[0xb]) >> 8);
      *(short *)(param_3 + 0xc) =
           (short)((uint)((int)*param_1 * (int)param_2[4] + (int)param_2[5] * (int)param_1[1] +
                          (int)param_2[6] * (int)param_1[2] + (int)param_1[3]) >> 8) + 0x78;
      *(short *)(param_3 + 0xe) =
           (short)((uint)((int)param_1[4] * (int)param_2[4] + (int)param_2[5] * (int)param_1[5] +
                          (int)param_2[6] * (int)param_1[6] + (int)param_1[7]) >> 8) + 0x50;
      *(short *)(param_3 + 0x10) =
           (short)((uint)((int)param_1[8] * (int)param_2[4] + (int)param_2[5] * (int)param_1[9] +
                          (int)param_2[6] * (int)param_1[10] + (int)param_1[0xb]) >> 8);
      *(short *)(param_3 + 0x14) =
           (short)((uint)((int)*param_1 * (int)param_2[8] + (int)param_2[9] * (int)param_1[1] +
                          (int)param_2[10] * (int)param_1[2] + (int)param_1[3]) >> 8) + 0x78;
      *(short *)(param_3 + 0x16) =
           (short)((uint)((int)param_1[4] * (int)param_2[8] + (int)param_2[9] * (int)param_1[5] +
                          (int)param_2[10] * (int)param_1[6] + (int)param_1[7]) >> 8) + 0x50;
      *(short *)(param_3 + 0x18) =
           (short)((uint)((int)param_1[8] * (int)param_2[8] + (int)param_2[9] * (int)param_1[9] +
                          (int)param_2[10] * (int)param_1[10] + (int)param_1[0xb]) >> 8);
      iVar1 = ((int)param_2[0xc] * (int)local_20 >> 8) + ((int)sStack_1e * (int)param_2[0xd] >> 8) +
              ((int)sStack_1c * (int)param_2[0xe] >> 8);
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      if (0xf8 < iVar1) {
        iVar1 = 0x100;
      }
      iVar1 = iVar1 * 0xf;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0xff;
      }
      *(char *)(param_3 + 0x1c) = (char)((uint)iVar1 >> 8);
      *(undefined *)(param_3 + 0x1d) = *(undefined *)(param_2 + 0x10);
      sub_0800449C(&local_18,param_3);
      param_4 = param_4 + -1;
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x12;
    } while (param_4 != '\0');
  }
  sub_08004178(local_18);
  return in_lr;
}

