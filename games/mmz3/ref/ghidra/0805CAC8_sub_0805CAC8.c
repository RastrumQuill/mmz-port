// sub_0805CAC8 at 0x0805CAC8 (thumb)

undefined4 sub_0805CAC8(int param_1)

{
  bool bVar1;
  byte bVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x24) = 0;
    sub_0801749C(param_1);
    sub_080176EC(param_1);
    *(bool *)(param_1 + 0x4c) = 0 < *(int *)(param_1 + 0x5c);
    bVar1 = 0 < *(int *)(param_1 + 0x5c);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    sub_08017700(param_1,0xb50e);
    sub_08007390(param_1 + 0x74,&DAT_08361690);
    *(undefined4 *)(param_1 + 0x60) = 0xfffffb80;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffe00;
      uVar4 = 0xfffff000;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0x200;
      uVar4 = 0x1000;
    }
    *(undefined4 *)(param_1 + 100) = uVar4;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  sVar3 = sub_0805D55C(param_1,*(undefined4 *)(param_1 + 100),0);
  if (sVar3 == 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  sVar3 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54));
  if (sVar3 != 0) {
    uVar4 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar4;
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

