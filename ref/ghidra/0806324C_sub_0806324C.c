// sub_0806324C at 0x0806324C (thumb)

undefined4 sub_0806324C(int param_1)

{
  undefined *puVar1;
  undefined4 in_lr;
  
  puVar1 = (undefined *)(param_1 + 0xc6);
  sub_08091AEC(param_1,3,*puVar1);
  sub_08091AEC(param_1,3,*puVar1);
  sub_08091AEC(param_1,4,*puVar1);
  sub_08015698(1,param_1 + 0x4c);
  if (DAT_02022b2c < 9999) {
    DAT_02022b2c = DAT_02022b2c + 1;
  }
  sub_08015794(param_1,param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

