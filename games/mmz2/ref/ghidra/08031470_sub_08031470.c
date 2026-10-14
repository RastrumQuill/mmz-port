// sub_08031470 at 0x08031470 (thumb)

undefined4 sub_08031470(byte *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (((int)(uint)*param_1 >> (param_3 & 0xff) & 1U) == 0) {
    uVar1 = sub_08031650(param_1);
    *param_1 = (byte)(1 << (param_3 & 0xff)) | *param_1;
    sub_080313C0(param_1,param_2,param_3);
    if ((uVar1 & 0xff) < 2) {
      param_1[(uVar1 & 0xff) + 2] = (byte)param_3;
      param_1[4] = 0;
    }
  }
  return in_lr;
}

