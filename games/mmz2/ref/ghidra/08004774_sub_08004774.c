// sub_08004774 at 0x08004774 (thumb)

undefined4 sub_08004774(undefined2 *param_1,uint param_2)

{
  undefined2 uVar1;
  short sVar2;
  undefined4 in_lr;
  
  uVar1 = (&DAT_080ef450)[(param_2 & 0xff) + 0x40 & 0xff];
  *param_1 = uVar1;
  param_1[4] = 0;
  sVar2 = (&DAT_080ef450)[param_2 & 0xff];
  param_1[8] = sVar2;
  param_1[0xc] = 0;
  param_1[1] = 0;
  param_1[5] = 0x100;
  param_1[9] = 0;
  param_1[0xd] = 0;
  param_1[2] = -sVar2;
  param_1[6] = 0;
  param_1[10] = uVar1;
  param_1[0xe] = 0;
  param_1[3] = 0;
  param_1[7] = 0;
  param_1[0xb] = 0;
  param_1[0xf] = 0x100;
  return in_lr;
}

