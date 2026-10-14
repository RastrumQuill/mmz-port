// sub_080E1EC0 at 0x080E1EC0 (thumb)

undefined4 sub_080E1EC0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  undefined4 local_10;
  int local_c;
  
  iVar2 = *(int *)(param_1 + 0xb4);
  local_10 = *(undefined4 *)(iVar2 + 0x54);
  local_c = *(int *)(iVar2 + 0x58) -
            (*(int *)(&DAT_0835b038 + (uint)*(byte *)(iVar2 + 0x147) * 8) >> 0x10);
  cVar1 = sub_080E1094(param_1 + 0xbc,param_1 + 100,&local_10,param_1 + 0xba,0xa0);
  if (cVar1 != '\0') {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  return in_lr;
}

