// sub_080683F4 at 0x080683F4 (thumb)

undefined4 sub_080683F4(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  undefined4 local_14;
  undefined4 local_10;
  
  if ((DAT_02030108 & 0x40) == 0) {
    bVar1 = *(byte *)(param_1 + 0xe);
    if (bVar1 != 1) {
      if (1 < bVar1) {
        if (bVar1 != 2) {
          return in_lr;
        }
        local_14 = *(undefined4 *)(param_1 + 0x5c);
        local_10 = *(undefined4 *)(param_1 + 0x60);
        sub_080B2484(1,&local_14);
        sub_0800471C(0x2a);
        sub_08024FE4(4,param_1 + 0x54);
        if (DAT_0203016c < 9999) {
          DAT_0203016c = DAT_0203016c + 1;
        }
        sub_080250C4(param_1,param_1 + 0x54);
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
        *(undefined4 *)(param_1 + 0xc) = 4;
        uVar2 = *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
        goto LAB_080684d4;
      }
      if (bVar1 != 0) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xe) = 1;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar2 = *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
LAB_080684d4:
    *(undefined4 *)(param_1 + 0x14) = uVar2;
  }
  return in_lr;
}

