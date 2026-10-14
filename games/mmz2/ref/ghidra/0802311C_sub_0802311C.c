// sub_0802311C at 0x0802311C (thumb)

undefined4 sub_0802311C(int param_1,int param_2,uint param_3,uint param_4)

{
  byte bVar1;
  undefined4 in_lr;
  
  sub_0801E9FC(param_1,*(undefined *)
                        (*(int *)(&DAT_08333b74 + (uint)*(byte *)(param_1 + 9) * 4) + param_2));
  bVar1 = (byte)((-param_3 | param_3) >> 0x18);
  *(byte *)(param_1 + 0x4c) = bVar1 >> 7;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | ((char)bVar1 >> 7) * -0x10;
  if ((int)(-param_3 | param_3) < 0) {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar1;
  bVar1 = (byte)((-param_4 | param_4) >> 0x18);
  *(byte *)(param_1 + 0x4d) = bVar1 >> 7;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | ((char)bVar1 >> 7) * -0x20;
  if ((int)(-param_4 | param_4) < 0) {
    bVar1 = *(byte *)(param_1 + 10) | 0x20;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) & 0xdf;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(undefined *)(param_1 + 0x18d) = 0xff;
  return in_lr;
}

