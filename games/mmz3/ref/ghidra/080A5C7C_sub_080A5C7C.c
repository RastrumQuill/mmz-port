// sub_080A5C7C at 0x080A5C7C (thumb)

undefined4 sub_080A5C7C(int param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  sub_0801749C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080176EC(param_1);
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 4);
    *(undefined *)(param_1 + 0xd) = 0;
  }
  else if (cVar1 == '\x05') {
    *(undefined *)(param_1 + 0x10) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    puVar2 = &DAT_08368474;
    uVar3 = 0x40;
LAB_080a5d96:
    sub_0800736C(param_1 + 0x74,puVar2,param_1 + 0x54,uVar3);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 4);
    *(undefined *)(param_1 + 0xd) = 1;
  }
  else if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 4);
    *(undefined *)(param_1 + 0xd) = 0;
  }
  else if (cVar1 == '\x04') {
    *(undefined *)(param_1 + 0x10) = 1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&DAT_0836836c,param_1 + 0x54,6);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 4);
    *(undefined *)(param_1 + 0xd) = 1;
  }
  else {
    if (cVar1 != '\x02') {
      if (cVar1 == '\x06') {
        *(undefined *)(param_1 + 0x10) = 2;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
        puVar2 = &DAT_083684bc;
      }
      else {
        if (cVar1 != '\x03') goto LAB_080a5db6;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
        puVar2 = &DAT_0836848c;
      }
      uVar3 = 1;
      goto LAB_080a5d96;
    }
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 4);
    *(undefined *)(param_1 + 0xd) = 0;
  }
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
LAB_080a5db6:
  *(undefined *)(param_1 + 0x12) = 0xff;
  sub_080A5DD0(param_1);
  return in_lr;
}

