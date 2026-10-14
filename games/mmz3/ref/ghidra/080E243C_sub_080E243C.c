// sub_080E243C at 0x080E243C (thumb)

undefined4 sub_080E243C(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  undefined4 local_10;
  int local_c;
  
  iVar3 = *(int *)(param_1 + 0xb4);
  local_10 = *(undefined4 *)(iVar3 + 0x54);
  local_c = *(int *)(iVar3 + 0x58) -
            (*(int *)(&DAT_0835b038 + (uint)*(byte *)(iVar3 + 0x147) * 8) >> 0x10);
  if (*(char *)(param_1 + 0x12) == '\0') {
    uVar2 = 0xc0;
  }
  else {
    uVar2 = 0x180;
  }
  cVar1 = sub_080E1094(param_1 + 0xbc,param_1 + 100,&local_10,param_1 + 0xba,uVar2);
  if (cVar1 != '\0') {
    *(byte *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + 1U & 3;
  }
  return in_lr;
}

