// sub_081046BC at 0x081046BC (thumb)

undefined4 sub_081046BC(int param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 in_lr;
  
  sub_0801CC9C();
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 3;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(byte *)(param_1 + 10) = (bVar1 | 3) & 0xfe | 4;
    sub_08005760(param_1 + 0x74,&DAT_08868c08,param_1 + 0x54,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  else {
    if (*(char *)(param_1 + 0x11) == '\0') {
      *(byte *)(param_1 + 10) = bVar1 | 7;
      puVar2 = &DAT_08868c20;
    }
    else {
      *(byte *)(param_1 + 10) = bVar1 | 7;
      puVar2 = &DAT_08868c38;
    }
    sub_08005760(param_1 + 0x74,puVar2,param_1 + 0x54,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    sub_0801CF00(param_1,0xbd00);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
    *(undefined *)(param_1 + 0xb4) = 1;
    *(undefined *)(param_1 + 0xb5) = 0;
    if (*(char *)(param_1 + 0x11) == '\0') {
      *(undefined *)(param_1 + 0xb4) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  sub_08104790(param_1);
  return in_lr;
}

