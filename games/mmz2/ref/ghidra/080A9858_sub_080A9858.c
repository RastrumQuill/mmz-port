// sub_080A9858 at 0x080A9858 (thumb)

undefined4 sub_080A9858(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  sub_080126A0();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x2304);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_083454c4,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(char *)(param_1 + 0x11) == '\0') {
    iVar1 = *(int *)(iVar4 + 0x54);
  }
  else {
    if (*(char *)(param_1 + 0x11) == '\x01') {
      iVar1 = *(int *)(iVar4 + 0x54);
      iVar3 = -0xc00;
    }
    else {
      iVar1 = *(int *)(iVar4 + 0x54);
      iVar3 = 0xc00;
    }
    iVar1 = iVar1 + iVar3;
  }
  *(int *)(param_1 + 0x54) = iVar1;
  uVar2 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(iVar4 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined *)(param_1 + 0x12) = 0;
  sub_080032EC(0x91);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 4);
  sub_080A979C(param_1);
  return in_lr;
}

