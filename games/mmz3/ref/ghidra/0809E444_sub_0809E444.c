// sub_0809E444 at 0x0809E444 (thumb)

undefined4 sub_0809E444(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080175BC(param_1);
    sub_080176EC(param_1);
    *(undefined4 *)(param_1 + 0xbc) = 0x100;
    *(undefined2 *)(param_1 + 0x50) = 0x100;
    *(short *)(param_1 + 0x52) = (short)*(undefined4 *)(param_1 + 0xbc);
    sub_08017700(param_1,0xa301);
    *(int *)(param_1 + 0xb8) = 0x400;
    *(int *)(param_1 + 100) = (*(int *)(param_1 + 0x5c) << 10) >> 8;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x60) * *(int *)(param_1 + 0xb8) >> 8;
    *(undefined *)(param_1 + 0x12) = 0x28;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  piVar3 = (int *)(param_1 + 0xb8);
  iVar2 = *piVar3 + (*piVar3 * -10 >> 8);
  *piVar3 = iVar2;
  *(int *)(param_1 + 100) = iVar2 * *(int *)(param_1 + 0x5c) >> 8;
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x60) * *piVar3 >> 8;
  piVar3 = (int *)(param_1 + 0xbc);
  iVar2 = *piVar3 + ((0x1c0 - *piVar3) * 0x14 >> 8);
  *piVar3 = iVar2;
  *(short *)(param_1 + 0x50) = (short)iVar2;
  *(short *)(param_1 + 0x52) = (short)*piVar3;
  if ((0x1a0 < *piVar3) && (*(char *)(param_1 + 0x13) == '\0')) {
    *(undefined *)(param_1 + 0x13) = 1;
    sub_08007390(param_1 + 0x74,&DAT_08367600);
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x68);
  sub_080177F4(param_1);
  if ((*(char *)(param_1 + 0x12) == '\0') ||
     (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

