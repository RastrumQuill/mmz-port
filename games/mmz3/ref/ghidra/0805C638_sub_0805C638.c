// sub_0805C638 at 0x0805C638 (thumb)

undefined4 sub_0805C638(int param_1)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  short sVar5;
  undefined4 uVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,0xb506);
    iVar2 = DAT_0202f5c0;
    *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar2 + 0x54);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar3;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0x180;
      uVar6 = 0x1000;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffe80;
      uVar6 = 0xfffff000;
    }
    *(undefined4 *)(param_1 + 100) = uVar6;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffc40;
    *(undefined *)(param_1 + 0x12) = 0xe;
    sub_0800471C(0x50);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  sVar5 = sub_0805D55C(param_1,*(undefined4 *)(param_1 + 100),0);
  if (sVar5 == 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  cVar4 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar4;
  if (cVar4 == -1) {
    *(undefined *)(param_1 + 0xd) = 0xe;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

