// sub_08040258 at 0x08040258 (thumb)

undefined8 sub_08040258(int param_1,uint param_2,uint param_3)

{
  undefined4 in_lr;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  param_2 = param_2 & 0xff;
  param_3 = param_3 & 0xff;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (6 < param_3) {
      param_2 = -param_2;
    }
    param_2 = ((uint)(byte)(&DAT_080fe980)[param_3] * 0x1000000 + 0xc0000000 >> 0x18) + param_2;
    local_24 = *(int *)(&DAT_080fe990 + param_3 * 8);
  }
  else {
    if (param_3 < 7) {
      param_2 = -param_2;
    }
    param_2 = (0x40 - (byte)(&DAT_080fe980)[param_3] & 0xff) + param_2;
    local_24 = -*(int *)(&DAT_080fe990 + param_3 * 8);
  }
  local_24 = local_24 + *(int *)(param_1 + 0x54);
  local_20 = *(int *)(&DAT_080fe994 + param_3 * 8) + *(int *)(param_1 + 0x58);
  local_1c = (int)(short)(&DAT_080fe64c)[param_2 & 0xff];
  local_18 = (int)*(short *)((int)&DAT_080fe64c + (((param_2 & 0xff) + 0x40) * 0x1000000 >> 0x17));
  sub_0809DF80(param_1,&local_24);
  return CONCAT44(in_lr,1);
}

