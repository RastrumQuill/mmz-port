// sub_080D93B8 at 0x080D93B8 (thumb)

undefined4 sub_080D93B8(int param_1)

{
  short sVar1;
  short *psVar2;
  undefined4 in_lr;
  
  sub_080177F4();
  if ((*(short *)(param_1 + 0xba) == 0x241) && (DAT_02030c2e == 9)) {
    *(byte *)(DAT_0203df90 + 0x1a) = *(byte *)(DAT_0203df90 + 0x1a) | 4;
    DAT_02030be4 = &DAT_08372fe0;
    sub_080EA1C8(0x100,0x5a);
  }
  psVar2 = (short *)(param_1 + 0xba);
  if ((*psVar2 == 0x2cf) && (DAT_02030c2e == 9)) {
    *(byte *)(DAT_0203df90 + 0x1a) = *(byte *)(DAT_0203df90 + 0x1a) | 4;
    DAT_02030be4 = &DAT_08372fe0;
    sub_080EA1C8(0x100,0x5a);
  }
  if ((*psVar2 == 0x247) && (DAT_02030c2e == 9)) {
    *(byte *)(DAT_0203df90 + 0x1c) = *(byte *)(DAT_0203df90 + 0x1c) | 8;
    DAT_02030be4 = &DAT_08373016;
    sub_080EA1C8(0x100,0x5a);
  }
  if ((*psVar2 == 0x24e) && (DAT_02030c2e == 9)) {
    *(byte *)(DAT_0203df90 + 0x2a) = *(byte *)(DAT_0203df90 + 0x2a) | 1;
    DAT_02030be4 = &DAT_08373154;
    sub_080EA1C8(0x100,0x5a);
  }
  if ((*psVar2 == 0x253) && (DAT_02030c2e == 9)) {
    *(byte *)(DAT_0203df90 + 0x2b) = *(byte *)(DAT_0203df90 + 0x2b) | 4;
    DAT_02030be4 = &DAT_08373178;
    sub_080EA1C8(0x100,0x5a);
  }
  if (*psVar2 == 0x25a) {
    *(byte *)(DAT_0203df90 + 0x29) = *(byte *)(DAT_0203df90 + 0x29) | 4;
    DAT_02030be4 = &DAT_08373148;
    sub_080EA1C8(0x100,0x5a);
  }
  if (*psVar2 == 0x25d) {
    *(byte *)(DAT_0203df90 + 10) = *(byte *)(DAT_0203df90 + 10) | 8;
    DAT_02030be4 = &DAT_08372e66;
    sub_080EA1C8(0x100,0x5a);
  }
  if ((*psVar2 == 0x271) && (DAT_02030c2e == 9)) {
    *(byte *)(DAT_0203df90 + 0x2b) = *(byte *)(DAT_0203df90 + 0x2b) | 1;
    DAT_02030be4 = &DAT_0837316c;
    sub_080EA1C8(0x100,0x5a);
  }
  if (*psVar2 == 0x284) {
    *(byte *)(DAT_0203df90 + 0x2b) = *(byte *)(DAT_0203df90 + 0x2b) | 2;
    DAT_02030be4 = &DAT_08373172;
    sub_080EA1C8(0x100,0x5a);
  }
  if (*psVar2 == 0x2a6) {
    *(byte *)(DAT_0203df90 + 0xe) = *(byte *)(DAT_0203df90 + 0xe) | 2;
    DAT_02030be4 = &DAT_08372eba;
    sub_080EA1C8(0x100,0x5a);
  }
  sVar1 = *psVar2;
  if (sVar1 == 0x2c8) {
    DAT_0202f5dc = DAT_0202f5dc + 0x20;
  }
  if (sVar1 == 0x2c0) {
    DAT_0202f5dc = DAT_0202f5dc + 0x34;
  }
  if (sVar1 == 0x2c2) {
    DAT_0202f5dc = DAT_0202f5dc + 0x20;
  }
  if (sVar1 == 0x2c4) {
    DAT_0202f5dc = DAT_0202f5dc + 0x34;
  }
  if (sVar1 == 0x2c6) {
    DAT_0202f5dc = DAT_0202f5dc + 0x28;
  }
  if (sVar1 == 700) {
    DAT_0202f5dc = DAT_0202f5dc + 0x20;
  }
  if (sVar1 == 0x2be) {
    DAT_0202f5dc = DAT_0202f5dc + 0x34;
  }
  if (sVar1 == 0x2ba) {
    DAT_0202f5dc = DAT_0202f5dc + 100;
  }
  if (*psVar2 == 0x2ca) {
    DAT_0202f5dc = DAT_0202f5dc + 0x34;
  }
  if ((*psVar2 == 0x2b6) && (DAT_02030c2e == 9)) {
    DAT_0202f5dc = DAT_0202f5dc + 200;
    DAT_02030124 = DAT_02030124 + '\x01';
  }
  if (*psVar2 == 0x2b4) {
    DAT_0202f5dc = DAT_0202f5dc + 0x34;
  }
  if ((*psVar2 == 0x2b1) && (DAT_02030c2e == 9)) {
    *(byte *)(DAT_0203df90 + 5) = *(byte *)(DAT_0203df90 + 5) | 4;
    DAT_02030be4 = &DAT_08372de8;
    sub_080EA1C8(0x100,0x5a);
  }
  if (*psVar2 == 0x2b8) {
    DAT_0202f5dc = DAT_0202f5dc + 0x50;
  }
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

