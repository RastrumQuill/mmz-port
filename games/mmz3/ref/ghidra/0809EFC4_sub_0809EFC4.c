// sub_0809EFC4 at 0x0809EFC4 (thumb)

undefined4 sub_0809EFC4(int param_1)

{
  undefined *puVar1;
  undefined4 in_lr;
  
  sub_080175BC();
  *(undefined *)(param_1 + 0x24) = 0;
  *(undefined2 *)(param_1 + 0x50) = 0x100;
  *(undefined2 *)(param_1 + 0x52) = 0x100;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080176EC(param_1);
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    puVar1 = &DAT_0836776c;
  }
  else {
    if (*(char *)(param_1 + 0x10) != '\x01') goto LAB_0809f032;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    puVar1 = &DAT_08367784;
  }
  sub_0800736C(param_1 + 0x74,puVar1,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
LAB_0809f032:
  *(undefined *)(param_1 + 0x12) = 0xff;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 1;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  sub_0809F064(param_1);
  return in_lr;
}

