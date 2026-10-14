// sub_080A6294 at 0x080A6294 (thumb)

undefined4 sub_080A6294(int param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x12) == '\0') {
    sub_0801260C(param_1);
    sub_080127E4(param_1,0x5c02);
  }
  else {
    sub_08012580(param_1);
    sub_080127E4(param_1,0x5c01);
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080128D4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_08345038,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined *)(param_1 + 0x25) = 0x1a;
  uVar3 = *(undefined4 *)(iVar4 + 100);
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  uVar1 = *(undefined4 *)(iVar4 + 0x68);
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(undefined4 *)(param_1 + 100) = uVar3;
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  *(undefined *)(param_1 + 0x13) = *(undefined *)(iVar4 + 0xbd);
  puVar2 = (undefined *)(param_1 + 0xbd);
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + -1;
  } while (param_1 + 0xb4 <= (int)puVar2);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 4);
  sub_080A6368(param_1);
  return in_lr;
}

