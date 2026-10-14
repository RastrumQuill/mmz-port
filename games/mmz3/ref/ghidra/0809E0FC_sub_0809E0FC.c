// sub_0809E0FC at 0x0809E0FC (thumb)

undefined4 sub_0809E0FC(int param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  sub_0801749C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080176EC(param_1);
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    puVar2 = &DAT_08367528;
    uVar3 = 0x10;
  }
  else {
    if (cVar1 == '\x01') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      puVar2 = &DAT_083675b8;
    }
    else if (cVar1 == '\x02') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      puVar2 = &DAT_08367588;
    }
    else if (cVar1 == '\x03') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      puVar2 = &DAT_08367570;
    }
    else {
      if (cVar1 != '\x04') goto LAB_0809e1a6;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      puVar2 = &DAT_08367648;
    }
    uVar3 = 1;
  }
  sub_0800736C(param_1 + 0x74,puVar2,param_1 + 0x54,uVar3);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
LAB_0809e1a6:
  *(undefined *)(param_1 + 0x12) = 0xff;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 1;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  sub_0809E1D8(param_1);
  return in_lr;
}

