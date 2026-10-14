// sub_080720C8 at 0x080720C8 (thumb)

undefined4 sub_080720C8(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined4 local_2c;
  int local_28;
  undefined *local_24;
  
  if (*(char *)(param_1 + 0xc0) != '\0') {
    DAT_0202e188 = DAT_0202e188 * 0x343fd + 0x269ec3 & 0x7fffffff;
    local_2c = *(undefined4 *)(param_1 + 0x54);
    local_28 = *(int *)(param_1 + 0x58) + -0x4000;
    uVar2 = 0;
    local_24 = (undefined *)(param_1 + 0xbd);
    do {
      uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar1 & 0x7fffffff;
      uVar1 = ~(uVar1 * 2 >> 0x11) & 1;
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        uVar1 = uVar1 << 4;
      }
      else {
        uVar1 = uVar1 << 4 | 1;
      }
      sub_080B0ACC(&local_2c,&DAT_08343a04 + (uVar2 & 3) * 0x1c,0,uVar1);
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        sub_0809CE04(&local_2c,2,uVar2 * 5 + 0x5d & 0xff);
      }
      else {
        sub_0809CE04(&local_2c,2,uVar2 * -5 + 0x23 & 0xff);
      }
      local_28 = local_28 + -0x800;
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < 8);
    sub_080127E4(param_1,0x1a04);
    sub_08006E08(param_1 + 0x74,&DAT_0833ef78);
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x30) = &DAT_0833f028;
    *(undefined2 *)(param_1 + 0x26) = 0x801;
    *local_24 = 8;
    sub_080032EC(0x3f);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_080128D4(param_1);
  return in_lr;
}

