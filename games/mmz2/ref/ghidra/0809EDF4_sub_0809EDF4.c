// sub_0809EDF4 at 0x0809EDF4 (thumb)

undefined4 sub_0809EDF4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar1 = 0x3307;
  }
  else {
    if (*(char *)(param_1 + 0x10) != '\b') {
      sub_080127E4(param_1,0x3301);
      goto LAB_0809ee38;
    }
    uVar1 = 0x3304;
  }
  sub_080127E4(param_1,uVar1);
LAB_0809ee38:
  sub_080128D4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_08343e10,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  uVar1 = sub_080093C4(*(undefined4 *)(iVar2 + 0x54),*(undefined4 *)(iVar2 + 0x58));
  *(undefined4 *)(param_1 + 0xc0) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 4);
  sub_0809EEB8(param_1);
  return in_lr;
}

