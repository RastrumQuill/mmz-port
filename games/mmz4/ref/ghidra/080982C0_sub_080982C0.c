// sub_080982C0 at 0x080982C0 (thumb)

undefined4 sub_080982C0(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_0801CC9C(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    sub_0801CF00(param_1,0xba00);
    sub_0801CFF0(param_1);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54);
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08005760(param_1 + 0x74,&DAT_0885d680,param_1 + 0x54,6);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x8098b29;
    *(undefined *)(param_1 + 0xbd) = 0;
    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0x54) + 0x1000;
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar3 = 4;
    }
    else {
      uVar3 = 0xfc;
    }
    *(undefined *)(param_1 + 0x13) = uVar3;
    *(undefined *)(param_1 + 0xbe) = 0x40;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    sub_0809843C(param_1);
  }
  else {
    sub_080983C4(param_1);
  }
  return in_lr;
}

