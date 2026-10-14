// sub_080CDA8C at 0x080CDA8C (thumb)

undefined4 sub_080CDA8C(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_083497d8,param_1 + 0x54,0);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  iVar2 = *(int *)(param_1 + 0x54) + 0x800;
  *(int *)(param_1 + 0x54) = iVar2;
  if (*(char *)(param_1 + 0x10) == '\x02') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    sub_08012580(param_1);
    sub_080127E4(param_1,0x9700);
    sub_080128D4(param_1);
    *(uint *)(param_1 + 0x58) = (*(uint *)(param_1 + 0x58) & 0xfffff000) - 1;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x30) = &DAT_08349808;
    *(undefined2 *)(param_1 + 0x26) = 0x2401;
  }
  else {
    uVar1 = sub_080093C4(iVar2,*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar1;
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080CDB44(param_1);
  return in_lr;
}

