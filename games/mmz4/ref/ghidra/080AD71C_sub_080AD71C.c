// sub_080AD71C at 0x080AD71C (thumb)

undefined4 sub_080AD71C(int param_1)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar4;
  if (*(char *)(param_1 + 0xb9) == '\0') {
    if (*(int *)(param_1 + 0xbc) < iVar4) {
      uVar3 = 0xffffffb0;
    }
    else {
      if (*(int *)(param_1 + 0xbc) + -0x800 <= iVar4) goto LAB_080ad756;
      uVar3 = 0x50;
    }
    *(undefined4 *)(param_1 + 0x60) = uVar3;
  }
LAB_080ad756:
  cVar1 = *(char *)(param_1 + 0x12);
  if (cVar1 != '\0') {
    cVar2 = cVar1 + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar1 == '\x01') {
      *(char *)(param_1 + 0xb9) = cVar2;
      *(char *)(param_1 + 0xb8) = cVar2;
      *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x58);
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined4 *)(param_1 + 0x60) = 0xffffffb0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_08005760(param_1 + 0x74,&DAT_0885f8e0,param_1 + 0x54,(int)*(short *)(param_1 + 0xa4));
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = 0x80ad5b9;
      if (*(char *)(param_1 + 0x10) == '\0') {
        sub_0801CF00(param_1,0x9d00);
      }
      else {
        sub_0801CF00(param_1,0x9d01);
      }
    }
  }
  return in_lr;
}

