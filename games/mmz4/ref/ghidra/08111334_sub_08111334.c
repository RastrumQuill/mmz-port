// sub_08111334 at 0x08111334 (thumb)

undefined4 sub_08111334(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 in_lr;
  
  puVar2 = (undefined4 *)(param_1 + 0x238);
  sub_08109B6C(&DAT_0202ff88,&DAT_0203a530,0x40);
  for (param_2 = param_2 & 0xff; param_2 != 0; param_2 = param_2 - 1) {
    uVar1 = sub_0810BF80(0,0);
    *puVar2 = uVar1;
    puVar2 = puVar2 + 1;
  }
  return in_lr;
}

