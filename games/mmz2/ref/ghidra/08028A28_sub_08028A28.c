// sub_08028A28 at 0x08028A28 (thumb)

undefined4 sub_08028A28(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x191);
  if ((bVar1 & 0x1c) != 0) {
    uVar2 = sub_08037A3C(param_1);
    sub_08014360(uVar2);
  }
  if ((bVar1 & 4) == 0) {
    *(undefined *)(param_1 + 0xf) = 1;
    if (((int)*(char *)(param_1 + 0x192) == 0) || ((bVar1 & 2) == 0)) {
      if ((bVar1 & 0x10) == 0) {
        sub_0801E9FC(param_1,0x7e);
        goto LAB_08028adc;
      }
    }
    else if (-(~(int)*(char *)(param_1 + 0x192) >> 0x1f) != (*(byte *)(param_1 + 10) >> 4 & 1)) {
      sub_0801E9FC(param_1,0x7e);
      goto LAB_08028adc;
    }
    sub_0801E9FC(param_1,0x81);
  }
  else {
    *(undefined *)(param_1 + 0xf) = 2;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    uVar3 = sub_080378D8(param_1,0);
    uVar4 = sub_0803792C(param_1,0);
    sub_080AD2AC(uVar3,uVar4,1);
    *(undefined *)(param_1 + 0x193) = 0xf0;
    sub_0801E6AC(0xb);
  }
LAB_08028adc:
  *(undefined2 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  DAT_0202ec38 = DAT_0202ec38 & 0xfffe | 0x10;
  return in_lr;
}

