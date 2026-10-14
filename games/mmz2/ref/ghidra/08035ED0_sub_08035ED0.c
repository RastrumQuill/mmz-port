// sub_08035ED0 at 0x08035ED0 (thumb)

undefined8 sub_08035ED0(undefined4 param_1,uint param_2,int param_3,int param_4)

{
  undefined *puVar1;
  undefined4 in_lr;
  
  if (param_2 == (byte)(&DAT_08335cd0)[param_3]) {
    puVar1 = &DAT_08335dbc + param_3 * 4;
  }
  else {
    puVar1 = (undefined *)(*(int *)(&DAT_08335dac + param_3 * 4) + param_4 * 4);
  }
  return CONCAT44(in_lr,puVar1);
}

