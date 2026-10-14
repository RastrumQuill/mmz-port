// sub_0801C488 at 0x0801C488 (thumb)

undefined4 sub_0801C488(int param_1,uint param_2)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (((int)(uint)*(byte *)(param_1 + 0x188) >> (param_2 & 0xff) & 1U) == 0) {
    bVar1 = sub_0801C4FC(param_1);
    sub_0801CBB0((byte *)(param_1 + 0x188),*(undefined *)(param_1 + 0x10),param_2 & 0xff);
    if (bVar1 < 2) {
      sub_0801C5E8(param_1);
    }
  }
  return in_lr;
}

