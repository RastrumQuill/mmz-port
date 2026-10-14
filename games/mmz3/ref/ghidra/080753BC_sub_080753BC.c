// sub_080753BC at 0x080753BC (thumb)

undefined4 sub_080753BC(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,0x2900);
    sub_08007390(param_1 + 0x74,&DAT_08363824);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x5c) =
       *(int *)(param_1 + 0x5c) + ((0x1a00 - *(int *)(param_1 + 0x5c)) * 4 >> 8);
  iVar2 = (int)*(char *)(param_1 + 0xb4) + (uint)*(ushort *)(param_1 + 0xc0);
  *(ushort *)(param_1 + 0xc0) = (ushort)iVar2;
  sVar1 = *(short *)((int)&DAT_080fe64c + ((uint)(iVar2 * 0x1000000) >> 0x17));
  *(short *)(param_1 + 0xc2) = sVar1;
  iVar2 = (int)sVar1 * (*(int *)(param_1 + 0x5c) >> 8);
  iVar3 = iVar2 >> 8;
  *(int *)(param_1 + 0x60) = iVar3;
  sVar1 = *(short *)((int)&DAT_080fe64c + ((uint)((iVar3 + 0x40) * 0x1000000) >> 0x17));
  *(int *)(param_1 + 0x54) =
       ((int)*(short *)((int)&DAT_080fe64c + ((uint)(iVar3 << 0x18) >> 0x17)) *
        *(int *)(param_1 + 0xbc) >> 8) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x58) = ((int)sVar1 * *(int *)(param_1 + 0xbc) >> 8) + *(int *)(param_1 + 0x68)
  ;
  *(char *)(param_1 + 0x24) = -(char)((uint)iVar2 >> 8);
  sub_080177F4(param_1);
  return in_lr;
}

