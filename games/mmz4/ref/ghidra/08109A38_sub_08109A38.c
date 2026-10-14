// sub_08109A38 at 0x08109A38 (thumb)

undefined4 sub_08109A38(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  uVar5 = *(undefined4 *)(param_1 + 0xb4);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar3 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar3;
  if (0x700 < iVar3) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  uVar2 = sub_081284E0((int)(short)*(undefined4 *)(param_1 + 0x5c),
                       (int)(short)*(undefined4 *)(param_1 + 0x60));
  *(char *)(param_1 + 0x24) = (char)((uVar2 & 0xffff) + 0x4000 >> 8);
  cVar1 = sub_08109B20(param_1);
  cVar4 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar4;
  if (((cVar1 == '\x01') || ((*(uint *)(param_1 + 0x8c) & 0x1004) != 0)) || (cVar4 == '\0')) {
    sub_0810928C(uVar5,param_1,3);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08869378)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

