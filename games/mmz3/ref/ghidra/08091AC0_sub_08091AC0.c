// sub_08091AC0 at 0x08091AC0 (thumb)

undefined4 sub_08091AC0(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  int local_28;
  int local_24;
  int local_20;
  uint *local_1c;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined *)(param_1 + 0x12) = 0;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      sub_080177F4(param_1);
      if (*(char *)(param_1 + 0x12) == '\0') {
        sub_0800471C(0x2a);
      }
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      local_28 = *(int *)(param_1 + 0x54);
      local_24 = *(int *)(param_1 + 0x58) + -0x1800;
      bVar1 = *(byte *)(param_1 + 0x13);
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        bVar1 = bVar1 | 0x10;
      }
      sub_080B5F14(&local_28,&DAT_08365fbc,0,bVar1);
      bVar1 = *(byte *)(param_1 + 0x13);
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        bVar1 = bVar1 | 0x10;
      }
      sub_080B5F14(&local_28,&DAT_08365fd8,0,bVar1);
      bVar1 = *(byte *)(param_1 + 0x13);
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        bVar1 = bVar1 | 0x10;
      }
      sub_080B5F14(&local_28,&DAT_08365ff4,0,bVar1);
      local_24 = *(int *)(param_1 + 0x58) + -0x1000;
      sub_080B2484(1,&local_28);
      uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
      local_28 = *(int *)(param_1 + 0x54) + (0x10 - (uVar2 * 2 >> 0x11 & 0x1f)) * 0x100;
      uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar2 & 0x7fffffff;
      local_24 = *(int *)(param_1 + 0x58) + (uVar2 * 2 >> 0x11 & 0x1f) * -0x100;
      local_20 = 0x343fd;
      local_1c = &DAT_0202f608;
      sub_080B2484(2,&local_28);
      uVar2 = local_20 * *local_1c + 0x269ec3;
      local_28 = *(int *)(param_1 + 0x54) + (0x10 - (uVar2 * 2 >> 0x11 & 0x1f)) * 0x100;
      uVar2 = local_20 * (uVar2 & 0x7fffffff) + 0x269ec3;
      *local_1c = uVar2 & 0x7fffffff;
      local_24 = *(int *)(param_1 + 0x58) + (uVar2 * 2 >> 0x11 & 0x1f) * -0x100;
      sub_080B2484(2,&local_28);
      sub_0800471C(0x2a);
      *(undefined4 *)(param_1 + 0xc) = 4;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_0801749C(param_1);
    if (*(byte *)(param_1 + 0x13) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    uVar2 = *(byte *)(param_1 + 0x13) & 1;
    *(char *)(param_1 + 0x4c) = (char)uVar2;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar2 << 4);
    sub_08017700(param_1,0x1303);
    *(undefined *)(param_1 + 0x12) = 0x12;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  bVar1 = *(char *)(param_1 + 0x12) - 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if ((bVar1 & 3) == 0) {
    sub_08090DD0(param_1);
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

