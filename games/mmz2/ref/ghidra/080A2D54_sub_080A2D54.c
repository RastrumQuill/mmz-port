// sub_080A2D54 at 0x080A2D54 (thumb)

undefined4 sub_080A2D54(int param_1)

{
  undefined *puVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 4);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_08012580(param_1);
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
    sub_080127D0(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    sub_080127E4(param_1,0xa606);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    puVar1 = &DAT_08344780;
  }
  else {
    if (*(char *)(param_1 + 0x10) != '\x01') goto LAB_080a2e3c;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 4);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
    *(undefined *)(param_1 + 0xb4) = *(undefined *)(*(int *)(param_1 + 0x28) + 0xd0);
    *(undefined *)(param_1 + 0xb5) = *(undefined *)(*(int *)(param_1 + 0x28) + 0xb5);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    puVar1 = &DAT_083447b0;
  }
  sub_08006DE4(param_1 + 0x74,puVar1,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
LAB_080a2e3c:
  sub_080A2E50(param_1);
  return in_lr;
}

