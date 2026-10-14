// sub_08028BD8 at 0x08028BD8 (thumb)

undefined4 sub_08028BD8(int param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xf) = 1;
  *(byte *)(param_1 + 0x18c) = *(byte *)(param_1 + 0x18c) | 2;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0xfffffe80;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined *)(param_1 + 0x184) = 0xf0;
  sub_0801EA38(param_1,6,1,1);
  if ((*(uint *)(param_1 + 0x8c) & 0x400) != 0) {
    pbVar1 = (byte *)(param_1 + 0x95);
    if (*pbVar1 < 0xff) {
      *pbVar1 = 0;
    }
    else {
      *pbVar1 = *pbVar1 + 1;
    }
  }
  sub_08028C48(param_1);
  return in_lr;
}

