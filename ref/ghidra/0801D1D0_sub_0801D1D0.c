// sub_0801D1D0 at 0x0801D1D0 (thumb)

undefined4 sub_0801D1D0(int param_1,int param_2)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\x02') {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + param_2;
    if (*(byte *)(param_1 + 0xf) < 2) {
      sub_0801A0A4(param_1 + 0x4c,param_1 + 0xc4,*(undefined4 *)(param_1 + 0x108),
                   *(byte *)(param_1 + 10) >> 4 & 1,1,1);
      sub_080191B4(param_1 + 0x4c,param_1 + 0xc4,*(undefined4 *)(param_1 + 0x108),
                   *(byte *)(param_1 + 10) >> 4 & 1,0x800,1);
    }
    else {
      sub_0801A0A4(param_1 + 0x4c,param_1 + 0xc4,*(undefined4 *)(param_1 + 0x108),
                   *(byte *)(param_1 + 10) >> 4 & 1,1,1);
      sub_080191B4(param_1 + 0x4c,param_1 + 0xc4,*(undefined4 *)(param_1 + 0x108),
                   *(byte *)(param_1 + 10) >> 4 & 1,1,1);
    }
  }
  return in_lr;
}

