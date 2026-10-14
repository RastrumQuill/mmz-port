// sub_08037BB0 at 0x08037BB0 (thumb)

undefined4 sub_08037BB0(int param_1,uint param_2)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (((int)(uint)*(byte *)(param_1 + 0x210) >> (param_2 & 0xff) & 1U) == 0) {
    bVar1 = sub_08037C20(param_1);
    sub_08031470((byte *)(param_1 + 0x210),0,param_2);
    if (bVar1 < 2) {
      sub_08037CC8(param_1);
    }
  }
  return in_lr;
}

