// sub_0812050C at 0x0812050C (thumb)

undefined4 sub_0812050C(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar1 = 0;
  do {
    *(undefined *)(param_1 + 0xdd2 + uVar1) = 0xff;
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 7);
  *(undefined *)(param_1 + 0xdda) = 0;
  *(undefined *)(param_1 + 0xddb) = 0;
  *(undefined *)(param_1 + 0xdcf) = 0;
  uVar1 = 0;
  uVar3 = 0;
  uVar2 = 0;
  do {
    if (((int)(uint)(byte)(&DAT_02000a70)[(int)(uVar1 + 4) >> 3] >> (uVar1 + 4 & 7) & 1U) != 0) {
      if (uVar3 == *(byte *)(param_1 + 0xdd9) + uVar2) {
        *(char *)(param_1 + 0xdd2 + uVar2) = (char)uVar1;
        *(char *)(param_1 + 0xdcf) = *(char *)(param_1 + 0xdcf) + '\x01';
        if (uVar2 < 6) {
          uVar2 = uVar2 + 1 & 0xff;
        }
      }
      else if (uVar2 == 0) {
        *(undefined *)(param_1 + 0xdda) = 1;
      }
      else if (uVar2 == 6) {
        *(undefined *)(param_1 + 0xddb) = 1;
        return in_lr;
      }
      uVar3 = uVar3 + 1 & 0xff;
    }
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 0x38);
  return in_lr;
}

