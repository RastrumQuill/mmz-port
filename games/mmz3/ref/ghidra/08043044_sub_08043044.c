// sub_08043044 at 0x08043044 (thumb)

undefined4 sub_08043044(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        if (*(char *)(param_1 + 0x10) == '\x01') {
          sub_0800471C(0x55);
        }
        else {
          sub_0800471C(0x55);
        }
        sub_08007390(param_1 + 0x74,&DAT_0835e8d8 + (uint)*(byte *)(param_1 + 0x10) * 0xa8);
        *(undefined4 *)(param_1 + 0x60) = 0x2a0;
        sub_08017700(param_1,0x2b00);
        *(undefined *)(param_1 + 0x12) = 0;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
      piVar4 = (int *)(param_1 + 0xb4);
      if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
        uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar2 & 0x7fffffff;
        iVar3 = sub_080FE4D8(uVar2 * 2 >> 0x11,0x1800);
        sub_080BB990(*(int *)(param_1 + 0x54) + iVar3 + -0xc00,*piVar4,
                     *(undefined *)(param_1 + 0x22));
      }
      iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x58) = iVar3;
      if (*piVar4 + 0x5400 < iVar3) {
        *(undefined *)(param_1 + 0xba) = 0;
        *(int *)(param_1 + 0x58) = *piVar4 + 0x5400;
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      sub_080177F4(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08017700(param_1,0x2b02);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_08007390(param_1 + 0x74,
               &DAT_0835e8c0 +
               ((uint)*(byte *)(param_1 + 0x10) * 7 +
               (uint)(byte)(&DAT_0835ea58)[*(char *)(param_1 + 0x71)]) * 0x18);
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

