// sub_080EFEA8 at 0x080EFEA8 (thumb)

undefined4 sub_080EFEA8(int param_1)

{
  short sVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  *(undefined2 *)(param_1 + 0x625e) = 0;
  DAT_02037350 = &DAT_02037fa0;
  DAT_0203734c = &DAT_02037fa0;
  pbVar2 = (byte *)(param_1 + 0x6270);
  sub_08019810(pbVar2);
  sub_0801987C(param_1 + 0x6410);
  sub_080F876C(param_1 + 0x6318);
  sub_080E1664(param_1 + 0x6378);
  sub_080322B4(param_1 + 0x6460);
  DAT_02030104 = DAT_02030104 | 0x40;
  *pbVar2 = *pbVar2 | 0x40;
  *(undefined2 *)(param_1 + 0x647c) = 1;
  *(undefined2 *)(param_1 + 0x647e) = 0x200;
  *(undefined2 *)(param_1 + 0x6480) = 2;
  *(undefined2 *)(param_1 + 0x6482) = 0x100;
  *(undefined *)(param_1 + 0x6484) = 0;
  *(undefined *)(param_1 + 0x6485) = 1;
  *(undefined *)(param_1 + 0x6486) = 0;
  DAT_02037316 = DAT_02037316 | 0xc;
  sVar1 = *(short *)(param_1 + 0x6260);
  if (sVar1 == 2) {
    DAT_0203730c = 2;
    DAT_0203730d = 1;
  }
  else if (sVar1 == 3) {
    DAT_0203730c = 0;
    DAT_0203730d = 1;
  }
  else if (sVar1 == 4) {
    DAT_0203730c = 1;
    DAT_0203730d = 2;
  }
  else {
    DAT_0203730c = 3;
    DAT_0203730d = 1;
    DAT_02037310 = 4;
    DAT_0203730e = 2;
  }
  sub_0801A02C(*(undefined *)(param_1 + 0x6260));
  sub_080EDB10(param_1,0x300);
  return in_lr;
}

