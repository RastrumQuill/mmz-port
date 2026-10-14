// sub_080A3224 at 0x080A3224 (thumb)

undefined4 sub_080A3224(int param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 == '\0') {
    sub_0801749C();
    *(undefined *)(param_1 + 0x24) = 0;
    *(undefined2 *)(param_1 + 0x50) = 0x100;
    *(undefined2 *)(param_1 + 0x52) = 0x100;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    puVar2 = &DAT_08367cbc;
LAB_080a32b2:
    uVar3 = 1;
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 == '\x02') {
        sub_0801749C(param_1);
        *(undefined4 *)(param_1 + 0x2c) = 0;
        goto LAB_080a32c2;
      }
      if (cVar1 != '\x03') goto LAB_080a32c2;
      sub_0801749C(param_1);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      puVar2 = &DAT_0836816c;
      goto LAB_080a32b2;
    }
    *(undefined *)(param_1 + 0x25) = 0x19;
    sub_0801749C(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    puVar2 = &DAT_08367cd4;
    uVar3 = 0x20;
  }
  sub_0800736C(param_1 + 0x74,puVar2,param_1 + 0x54,uVar3);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
LAB_080a32c2:
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080176EC(param_1);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined *)(param_1 + 0x12) = 0xff;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  sub_080A330C(param_1);
  return in_lr;
}

