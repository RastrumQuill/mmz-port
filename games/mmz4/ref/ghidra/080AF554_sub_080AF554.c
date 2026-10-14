// sub_080AF554 at 0x080AF554 (thumb)

undefined4 sub_080AF554(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  sub_0801CC9C();
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 3;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(byte *)(param_1 + 10) = bVar1 | 7;
    sub_08005760(param_1 + 0x74,&DAT_0885fca8,param_1 + 0x54,4);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x80af8c1;
    iVar2 = sub_080AF4EC(param_1 + 0x54,1,(&DAT_0885fd08)[*(byte *)(param_1 + 0x11)]);
    *(int *)(param_1 + 0x2c) = iVar2;
    *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
    *(undefined *)(*(int *)(param_1 + 0x2c) + 0x1d) = *(undefined *)(param_1 + 0x1c);
  }
  else {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xb7) = 0;
  *(undefined *)(param_1 + 0xb4) = 0;
  *(undefined *)(param_1 + 0xb5) = 1;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined *)(param_1 + 0x13) = 0xb4;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x58) < *(int *)(DAT_0202dbf0 + 0x58)) {
    *(undefined *)(param_1 + 0xb8) = 0;
  }
  else {
    *(undefined *)(param_1 + 0xb8) = 1;
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined *)(param_1 + 0xb7) = 6;
  }
  else {
    *(undefined *)(param_1 + 0xc0) = 3;
    *(undefined *)(param_1 + 0xc1) = 1;
  }
  if ((DAT_0202cac0 & 0xf) == 2) {
    uVar3 = 0x240;
  }
  else {
    uVar3 = 0x180;
  }
  *(undefined4 *)(param_1 + 0xbc) = uVar3;
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  sub_080AFE70(param_1);
  sub_080AF694(param_1);
  return in_lr;
}

