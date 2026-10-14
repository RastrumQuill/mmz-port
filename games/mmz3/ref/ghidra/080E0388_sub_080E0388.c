// sub_080E0388 at 0x080E0388 (thumb)

undefined4 sub_080E0388(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  int local_2c;
  int local_28;
  int local_24;
  
  iVar4 = 6;
  local_2c = param_1;
  local_28 = param_2;
  local_24 = param_1;
  uVar1 = sub_0801A9A8(&DAT_02030288,&local_2c);
  if ((uVar1 < 0x8001) && (0x17 < *(short *)(DAT_0203062c + 10))) {
    if (*(short *)(DAT_0203062c + 10) < 0x30) {
      iVar4 = 2;
    }
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar1 = DAT_0202f608 * 0x343fd + 0x269ec3;
      uVar2 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
      uVar3 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar3 & 0x7fffffff;
      sub_080B27F0(local_24 + ((uVar1 * 2 >> 0x11 & 0x1fff) - 0x1000),
                   ((uVar2 * 2 >> 0x11 & 0x1fff) - 0x1000) + param_2,uVar3 * 2 >> 0x11 & 3);
    }
  }
  return in_lr;
}

