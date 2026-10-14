// sub_080A1070 at 0x080A1070 (thumb)

undefined4 sub_080A1070(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x12) = 0xff;
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 == '\0') {
    sub_0801749C(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    puVar3 = &DAT_08367a2c;
    uVar4 = 4;
  }
  else {
    if (cVar1 == '\x01') {
      sub_0801749C(param_1);
      *(undefined *)(param_1 + 0x12) = 0;
      *(undefined4 *)(param_1 + 0xbc) = 0;
      sub_0801749C(param_1);
      *(undefined *)(param_1 + 0x24) = 0;
      *(undefined2 *)(param_1 + 0x50) = 0x100;
      *(undefined2 *)(param_1 + 0x52) = 0x100;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      puVar3 = &DAT_08367aa4;
    }
    else if (cVar1 == '\x02') {
      sub_0801749C(param_1);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      puVar3 = &DAT_08367a5c;
    }
    else {
      if (cVar1 == '\x03') {
        sub_080175BC(param_1);
        *(undefined *)(param_1 + 0x24) = 0;
        *(undefined2 *)(param_1 + 0x50) = 0x100;
        *(undefined2 *)(param_1 + 0x52) = 0x100;
        bVar2 = *(byte *)(param_1 + 10);
      }
      else {
        if (cVar1 != '\x04') goto LAB_080a114e;
        sub_0801749C(param_1);
        bVar2 = *(byte *)(param_1 + 10);
      }
      *(byte *)(param_1 + 10) = bVar2 | 4;
      puVar3 = &DAT_08367a74;
    }
    uVar4 = 1;
  }
  sub_0800736C(param_1 + 0x74,puVar3,param_1 + 0x54,uVar4);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
LAB_080a114e:
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080176EC(param_1);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 1;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  sub_080A1190(param_1);
  return in_lr;
}

