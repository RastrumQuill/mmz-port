// sub_0805CC88 at 0x0805CC88 (thumb)

undefined4 sub_0805CC88(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,0xb512);
    sub_08007390(param_1 + 0x74,&DAT_08361750);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x1000;
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffc00;
      uVar3 = 0xffffd000;
    }
    else {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x1000;
      *(undefined4 *)(param_1 + 0x5c) = 0x400;
      uVar3 = 0x3000;
    }
    *(undefined4 *)(param_1 + 100) = uVar3;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffc00;
    *(undefined *)(param_1 + 0x12) = 0x14;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 != -1) {
    sVar2 = sub_0805D55C(param_1,*(undefined4 *)(param_1 + 100),0);
    if (sVar2 == 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    }
    iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar4;
    sVar2 = sub_08009A3C(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 100),iVar4 + -0x2000);
    if (sVar2 == 0) {
      return in_lr;
    }
    sVar2 = sub_08010F08(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 100),
                         *(int *)(param_1 + 0x58) + -0x2000);
    if (sVar2 != 0) {
      sub_08010F70(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 100),
                   *(int *)(param_1 + 0x58) + -0x2000);
    }
    sub_0800471C(0x52);
    sub_0801ACF8(5,param_1 + 0x54);
  }
  *(undefined *)(param_1 + 0xd) = 0x15;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

