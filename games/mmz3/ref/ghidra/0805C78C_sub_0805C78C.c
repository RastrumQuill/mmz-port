// sub_0805C78C at 0x0805C78C (thumb)

undefined4 sub_0805C78C(int param_1)

{
  undefined uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,0xb50d);
    sub_08007390(param_1 + 0x74,&DAT_08361720);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffc00;
      uVar3 = 0xfffff000;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0x400;
      uVar3 = 0x1000;
    }
    *(undefined4 *)(param_1 + 100) = uVar3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar4;
  sVar2 = sub_08009A3C(iVar4 + *(int *)(param_1 + 100),*(undefined4 *)(param_1 + 0x58));
  if (sVar2 != 0) {
    sVar2 = sub_08010F08(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 100),
                         *(undefined4 *)(param_1 + 0x58));
    if (sVar2 != 0) {
      sub_08010F70(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 100),
                   *(undefined4 *)(param_1 + 0x58));
    }
    sub_0801ACF8(5,param_1 + 0x54);
    sub_0800471C(0x52);
    if (*(char *)(param_1 + 0xf) == '\0') {
      uVar1 = 0x10;
    }
    else {
      uVar1 = 0x11;
    }
    *(undefined *)(param_1 + 0xd) = uVar1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

